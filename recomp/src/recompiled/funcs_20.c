#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_151AE0E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AE0E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151AE0E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151AE0EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151AE0F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151AE0F4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x151AE0F8: jal         0x151AE590
    // 0x151AE0FC: lbu         $a0, 0x3F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3F);
    func_151AE590(rdram, ctx);
        goto after_0;
    // 0x151AE0FC: lbu         $a0, 0x3F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3F);
    after_0:
    // 0x151AE100: bne         $v0, $zero, L_151AE110
    if (ctx->r2 != 0) {
        // 0x151AE104: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_151AE110;
    }
    // 0x151AE104: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_151AE108:
    // 0x151AE108: b           L_151AE108
    pause_self(rdram);
    // 0x151AE10C: nop

L_151AE110:
    // 0x151AE110: lh          $t6, 0x52($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X52);
    // 0x151AE114: bnel        $t6, $zero, L_151AE254
    if (ctx->r14 != 0) {
        // 0x151AE118: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151AE254;
    }
    goto skip_0;
    // 0x151AE118: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x151AE11C: lbu         $t7, 0x1CA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1CA);
    // 0x151AE120: beql        $t7, $zero, L_151AE254
    if (ctx->r15 == 0) {
        // 0x151AE124: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151AE254;
    }
    goto skip_1;
    // 0x151AE124: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x151AE128: lbu         $t8, 0x104($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X104);
    // 0x151AE12C: bnel        $t8, $zero, L_151AE254
    if (ctx->r24 != 0) {
        // 0x151AE130: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151AE254;
    }
    goto skip_2;
    // 0x151AE130: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x151AE134: lw          $a0, 0x31C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X31C);
    // 0x151AE138: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151AE13C: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x151AE140: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    // 0x151AE144: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x151AE148: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    // 0x151AE14C: jal         0x151AE2BC
    // 0x151AE150: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_151AE2BC(rdram, ctx);
        goto after_1;
    // 0x151AE150: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x151AE154: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x151AE158: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x151AE15C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151AE160: lwc1        $f8, 0x3C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x151AE164: lbu         $t0, 0x42($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X42);
    // 0x151AE168: lw          $t3, 0x31C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X31C);
    // 0x151AE16C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151AE170: lw          $t5, 0x38($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X38);
    // 0x151AE174: lwc1        $f6, 0xA0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XA0);
    // 0x151AE178: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AE17C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151AE180: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x151AE184: nop

    // 0x151AE188: subu        $t1, $t0, $v1
    ctx->r9 = SUB32(ctx->r8, ctx->r3);
    // 0x151AE18C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x151AE190: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x151AE194: lbu         $t1, 0x3F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3F);
    // 0x151AE198: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151AE19C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151AE1A0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151AE1A4: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x151AE1A8: nop

    // 0x151AE1AC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x151AE1B0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x151AE1B4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x151AE1B8: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x151AE1BC: lwc1        $f16, 0x0($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X0);
    // 0x151AE1C0: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x151AE1C4: lw          $t7, 0x38($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X38);
    // 0x151AE1C8: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x151AE1CC: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x151AE1D0: lwc1        $f18, 0x4($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X4);
    // 0x151AE1D4: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x151AE1D8: lw          $t9, 0x38($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X38);
    // 0x151AE1DC: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151AE1E0: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x151AE1E4: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x151AE1E8: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x151AE1EC: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151AE1F0: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151AE1F4: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151AE1F8: sub.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151AE1FC: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151AE200: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x151AE204: lwc1        $f18, -0x6D70($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6D70);
    // 0x151AE208: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151AE20C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151AE210: nop

    // 0x151AE214: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151AE218: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AE21C: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x151AE220: add.s       $f14, $f16, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x151AE224: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
    // 0x151AE228: nop

    // 0x151AE22C: bc1t        L_151AE250
    if (c1cs) {
        // 0x151AE230: nop
    
            goto L_151AE250;
    }
    // 0x151AE230: nop

    // 0x151AE234: lw          $t2, 0x31C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X31C);
    // 0x151AE238: addiu       $t3, $zero, 0x12
    ctx->r11 = ADD32(0, 0X12);
    // 0x151AE23C: sb          $t1, 0x98($t2)
    MEM_B(0X98, ctx->r10) = ctx->r9;
    // 0x151AE240: lw          $t4, 0x31C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X31C);
    // 0x151AE244: sb          $t3, 0x8A($s0)
    MEM_B(0X8A, ctx->r16) = ctx->r11;
    // 0x151AE248: sw          $a1, 0x9C($t4)
    MEM_W(0X9C, ctx->r12) = ctx->r5;
    // 0x151AE24C: sw          $s0, 0x44($a1)
    MEM_W(0X44, ctx->r5) = ctx->r16;
L_151AE250:
    // 0x151AE250: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151AE254:
    // 0x151AE254: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151AE258: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x151AE25C: jr          $ra
    // 0x151AE260: nop

    return;
    return;
    // 0x151AE260: nop

;}
RECOMP_FUNC void osContStartReadData2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151EFAA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151EFAA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151EFAA8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151EFAAC: jal         0x10025750
    // 0x151EFAB0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    __osSiGetAccess_recomp(rdram, ctx);
        goto after_0;
    // 0x151EFAB0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x151EFAB4: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x151EFAB8: lbu         $t6, 0x2A50($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2A50);
    // 0x151EFABC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151EFAC0: beq         $t6, $at, L_151EFAF4
    if (ctx->r14 == ctx->r1) {
        // 0x151EFAC4: nop
    
            goto L_151EFAF4;
    }
    // 0x151EFAC4: nop

    // 0x151EFAC8: jal         0x151EFC0C
    // 0x151EFACC: nop

    __osPackReadData2(rdram, ctx);
        goto after_1;
    // 0x151EFACC: nop

    after_1:
    // 0x151EFAD0: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x151EFAD4: addiu       $a1, $a1, 0x2A10
    ctx->r5 = ADD32(ctx->r5, 0X2A10);
    // 0x151EFAD8: jal         0x100257C0
    // 0x151EFADC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x151EFADC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x151EFAE0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151EFAE4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x151EFAE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151EFAEC: jal         0x10023440
    // 0x151EFAF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x151EFAF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_151EFAF4:
    // 0x151EFAF4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_151EFAF8:
    // 0x151EFAF8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x151EFAFC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x151EFB00: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151EFB04: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151EFB08: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x151EFB0C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151EFB10: sw          $t7, 0x2A10($at)
    MEM_W(0X2A10, ctx->r1) = ctx->r15;
    // 0x151EFB14: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x151EFB18: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x151EFB1C: bne         $at, $zero, L_151EFAF8
    if (ctx->r1 != 0) {
        // 0x151EFB20: sw          $t1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r9;
            goto L_151EFAF8;
    }
    // 0x151EFB20: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x151EFB24: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151EFB28: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x151EFB2C: sw          $zero, 0x2A4C($at)
    MEM_W(0X2A4C, ctx->r1) = 0;
    // 0x151EFB30: addiu       $a1, $a1, 0x2A10
    ctx->r5 = ADD32(ctx->r5, 0X2A10);
    // 0x151EFB34: jal         0x100257C0
    // 0x151EFB38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_4;
    // 0x151EFB38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x151EFB3C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151EFB40: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151EFB44: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151EFB48: jal         0x10025794
    // 0x151EFB4C: sb          $t2, 0x2A50($at)
    MEM_B(0X2A50, ctx->r1) = ctx->r10;
    __osSiRelAccess_recomp(rdram, ctx);
        goto after_5;
    // 0x151EFB4C: sb          $t2, 0x2A50($at)
    MEM_B(0X2A50, ctx->r1) = ctx->r10;
    after_5:
    // 0x151EFB50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151EFB54: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x151EFB58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151EFB5C: jr          $ra
    // 0x151EFB60: nop

    return;
    return;
    // 0x151EFB60: nop

;}
RECOMP_FUNC void func_15147318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15147318: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x1514731C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15147320: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x15147324: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x15147328: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x1514732C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x15147330: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x15147334: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x15147338: lw          $t7, 0x1D4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D4);
    // 0x1514733C: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x15147340: beq         $t7, $zero, L_15147468
    if (ctx->r15 == 0) {
        // 0x15147344: addiu       $a2, $sp, 0x28
        ctx->r6 = ADD32(ctx->r29, 0X28);
            goto L_15147468;
    }
    // 0x15147344: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x15147348: jal         0x15146890
    // 0x1514734C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_15146890(rdram, ctx);
        goto after_0;
    // 0x1514734C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x15147350: beq         $v0, $zero, L_15147468
    if (ctx->r2 == 0) {
        // 0x15147354: lw          $t8, 0x60($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X60);
            goto L_15147468;
    }
    // 0x15147354: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x15147358: slti        $at, $t8, 0x73
    ctx->r1 = SIGNED(ctx->r24) < 0X73 ? 1 : 0;
    // 0x1514735C: bne         $at, $zero, L_15147380
    if (ctx->r1 != 0) {
        // 0x15147360: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15147380;
    }
    // 0x15147360: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15147364: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15147368: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1514736C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x15147370: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x15147374: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15147378: jal         0x15142180
    // 0x1514737C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_15142180(rdram, ctx);
        goto after_1;
    // 0x1514737C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
L_15147380:
    // 0x15147380: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15147384: lw          $t9, -0x2FC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2FC);
    // 0x15147388: jalr        $t9
    // 0x1514738C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x1514738C: nop

    after_2:
    // 0x15147390: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x15147394: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15147398: lwc1        $f8, 0x573C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X573C);
    // 0x1514739C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x151473A0: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x151473A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151473A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151473AC: lwc1        $f18, 0x5740($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5740);
    // 0x151473B0: lwc1        $f16, 0x40($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X40);
    // 0x151473B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151473B8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151473BC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x151473C0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151473C4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x151473C8: addiu       $t4, $sp, 0x4C
    ctx->r12 = ADD32(ctx->r29, 0X4C);
    // 0x151473CC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151473D0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x151473D4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x151473D8: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x151473DC: nop

    // 0x151473E0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x151473E4: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x151473E8: nop

    // 0x151473EC: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x151473F0: beql        $a3, $zero, L_15147440
    if (ctx->r7 == 0) {
        // 0x151473F4: mfc1        $a3, $f6
        ctx->r7 = (int32_t)ctx->f6.u32l;
            goto L_15147440;
    }
    goto skip_0;
    // 0x151473F4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x151473F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151473FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15147400: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15147404: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x15147408: nop

    // 0x1514740C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x15147410: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x15147414: nop

    // 0x15147418: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x1514741C: bne         $a3, $zero, L_15147434
    if (ctx->r7 != 0) {
        // 0x15147420: nop
    
            goto L_15147434;
    }
    // 0x15147420: nop

    // 0x15147424: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x15147428: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1514742C: b           L_1514744C
    // 0x15147430: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_1514744C;
    // 0x15147430: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_15147434:
    // 0x15147434: b           L_1514744C
    // 0x15147438: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_1514744C;
    // 0x15147438: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1514743C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
L_15147440:
    // 0x15147440: nop

    // 0x15147444: bltz        $a3, L_15147434
    if (SIGNED(ctx->r7) < 0) {
        // 0x15147448: nop
    
            goto L_15147434;
    }
    // 0x15147448: nop

L_1514744C:
    // 0x1514744C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x15147450: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x15147454: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x15147458: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x1514745C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x15147460: jal         0x15141F78
    // 0x15147464: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_15141F78(rdram, ctx);
        goto after_3;
    // 0x15147464: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_3:
L_15147468:
    // 0x15147468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1514746C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x15147470: jr          $ra
    // 0x15147474: nop

    return;
    return;
    // 0x15147474: nop

;}
RECOMP_FUNC void func_15000AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15000AD0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x15000AD4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15000AD8: addiu       $v1, $v1, -0x4158
    ctx->r3 = ADD32(ctx->r3, -0X4158);
    // 0x15000ADC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15000AE0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15000AE4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15000AE8: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x15000AEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x15000AF0: lw          $v0, 0xDF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XDF0);
    // 0x15000AF4: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15000AF8: lbu         $t6, 0x5($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5);
    // 0x15000AFC: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x15000B00: lbu         $t7, 0x6($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X6);
    // 0x15000B04: sb          $t7, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r15;
    // 0x15000B08: lbu         $t8, 0x7($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X7);
    // 0x15000B0C: sb          $t8, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r24;
    // 0x15000B10: lbu         $t9, -0x19EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X19EA);
    // 0x15000B14: beql        $t9, $zero, L_15000B40
    if (ctx->r25 == 0) {
        // 0x15000B18: lbu         $v1, 0x8($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X8);
            goto L_15000B40;
    }
    goto skip_0;
    // 0x15000B18: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    skip_0:
    // 0x15000B1C: lbu         $t6, 0x8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X8);
    // 0x15000B20: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x15000B24: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x15000B28: bnel        $t6, $at, L_15000B40
    if (ctx->r14 != ctx->r1) {
        // 0x15000B2C: lbu         $v1, 0x8($v0)
        ctx->r3 = MEM_BU(ctx->r2, 0X8);
            goto L_15000B40;
    }
    goto skip_1;
    // 0x15000B2C: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    skip_1:
    // 0x15000B30: sb          $t7, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r15;
    // 0x15000B34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x15000B38: lw          $v0, 0xDF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XDF0);
    // 0x15000B3C: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
L_15000B40:
    // 0x15000B40: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x15000B44: bnel        $v1, $at, L_15000C9C
    if (ctx->r3 != ctx->r1) {
        // 0x15000B48: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15000C9C;
    }
    goto skip_2;
    // 0x15000B48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_2:
    // 0x15000B4C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15000B50: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
    // 0x15000B54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15000B58: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
    // 0x15000B5C: beq         $v1, $at, L_15000B6C
    if (ctx->r3 == ctx->r1) {
        // 0x15000B60: lui         $ra, 0x800E
        ctx->r31 = S32(0X800E << 16);
            goto L_15000B6C;
    }
    // 0x15000B60: lui         $ra, 0x800E
    ctx->r31 = S32(0X800E << 16);
    // 0x15000B64: b           L_15000B6C
    // 0x15000B68: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
        goto L_15000B6C;
    // 0x15000B68: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
L_15000B6C:
    // 0x15000B6C: bltz        $v1, L_15000BD4
    if (SIGNED(ctx->r3) < 0) {
        // 0x15000B70: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_15000BD4;
    }
    // 0x15000B70: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15000B74: sll         $s1, $a0, 5
    ctx->r17 = S32(ctx->r4 << 5);
    // 0x15000B78: addiu       $ra, $ra, -0x4178
    ctx->r31 = ADD32(ctx->r31, -0X4178);
    // 0x15000B7C: sll         $v1, $a0, 4
    ctx->r3 = S32(ctx->r4 << 4);
    // 0x15000B80: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
L_15000B84:
    // 0x15000B84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15000B88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15000B8C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15000B90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15000B94: jal         0x10003C40
    // 0x15000B98: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15000B98: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_0:
    // 0x15000B9C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x15000BA0: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x15000BA4: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x15000BA8: addu        $t8, $v0, $v1
    ctx->r24 = ADD32(ctx->r2, ctx->r3);
    // 0x15000BAC: sw          $v0, 0x0($ra)
    MEM_W(0X0, ctx->r31) = ctx->r2;
    // 0x15000BB0: sw          $t8, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r24;
    // 0x15000BB4: lw          $t9, 0x2FA0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2FA0);
    // 0x15000BB8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15000BBC: addiu       $ra, $ra, 0x8
    ctx->r31 = ADD32(ctx->r31, 0X8);
    // 0x15000BC0: slt         $at, $t9, $s0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x15000BC4: beql        $at, $zero, L_15000B84
    if (ctx->r1 == 0) {
        // 0x15000BC8: sw          $ra, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r31;
            goto L_15000B84;
    }
    goto skip_3;
    // 0x15000BC8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    skip_3:
    // 0x15000BCC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x15000BD0: lw          $v0, 0xDF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XDF0);
L_15000BD4:
    // 0x15000BD4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15000BD8: addiu       $a0, $a0, -0x4180
    ctx->r4 = ADD32(ctx->r4, -0X4180);
    // 0x15000BDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15000BE0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x15000BE4: jal         0x1502B7F0
    // 0x15000BE8: lbu         $a3, 0x9($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X9);
    func_1502B7F0(rdram, ctx);
        goto after_1;
    // 0x15000BE8: lbu         $a3, 0x9($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X9);
    after_1:
    // 0x15000BEC: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x15000BF0: lbu         $t6, -0x7F80($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X7F80);
    // 0x15000BF4: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x15000BF8: addiu       $s1, $s1, -0x6E44
    ctx->r17 = ADD32(ctx->r17, -0X6E44);
    // 0x15000BFC: beq         $t6, $zero, L_15000C44
    if (ctx->r14 == 0) {
        // 0x15000C00: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_15000C44;
    }
    // 0x15000C00: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_15000C04:
    // 0x15000C04: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x15000C08: lw          $t7, 0xDF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XDF0);
    // 0x15000C0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15000C10: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x15000C14: lbu         $t8, 0x9($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X9);
    // 0x15000C18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15000C1C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15000C20: addu        $t6, $s1, $t9
    ctx->r14 = ADD32(ctx->r17, ctx->r25);
    // 0x15000C24: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x15000C28: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x15000C2C: jal         0x1510D0EC
    // 0x15000C30: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    func_1510D0EC(rdram, ctx);
        goto after_2;
    // 0x15000C30: addu        $a0, $t8, $s0
    ctx->r4 = ADD32(ctx->r24, ctx->r16);
    after_2:
    // 0x15000C34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15000C38: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x15000C3C: bne         $s0, $at, L_15000C04
    if (ctx->r16 != ctx->r1) {
        // 0x15000C40: nop
    
            goto L_15000C04;
    }
    // 0x15000C40: nop

L_15000C44:
    // 0x15000C44: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x15000C48: lw          $a0, 0x2FA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2FA0);
    // 0x15000C4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15000C50: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15000C54: sll         $t9, $a0, 7
    ctx->r25 = S32(ctx->r4 << 7);
    // 0x15000C58: addiu       $a0, $t9, 0x80
    ctx->r4 = ADD32(ctx->r25, 0X80);
    // 0x15000C5C: jal         0x10003C40
    // 0x15000C60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_3;
    // 0x15000C60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x15000C64: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15000C68: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x15000C6C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15000C70: sw          $v0, -0x4150($at)
    MEM_W(-0X4150, ctx->r1) = ctx->r2;
    // 0x15000C74: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x15000C78: bne         $t6, $at, L_15000C8C
    if (ctx->r14 != ctx->r1) {
        // 0x15000C7C: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_15000C8C;
    }
    // 0x15000C7C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15000C80: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15000C84: b           L_1500141C
    // 0x15000C88: sb          $t7, -0x4155($at)
    MEM_B(-0X4155, ctx->r1) = ctx->r15;
        goto L_1500141C;
    // 0x15000C88: sb          $t7, -0x4155($at)
    MEM_B(-0X4155, ctx->r1) = ctx->r15;
L_15000C8C:
    // 0x15000C8C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15000C90: b           L_1500141C
    // 0x15000C94: sb          $zero, -0x4155($at)
    MEM_B(-0X4155, ctx->r1) = 0;
        goto L_1500141C;
    // 0x15000C94: sb          $zero, -0x4155($at)
    MEM_B(-0X4155, ctx->r1) = 0;
    // 0x15000C98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_15000C9C:
    // 0x15000C9C: bne         $v1, $at, L_15001408
    if (ctx->r3 != ctx->r1) {
        // 0x15000CA0: addiu       $a0, $zero, 0x1000
        ctx->r4 = ADD32(0, 0X1000);
            goto L_15001408;
    }
    // 0x15000CA0: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    // 0x15000CA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15000CA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15000CAC: jal         0x10003C40
    // 0x15000CB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_4;
    // 0x15000CB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x15000CB4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15000CB8: addiu       $a0, $a0, -0x4180
    ctx->r4 = ADD32(ctx->r4, -0X4180);
    // 0x15000CBC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x15000CC0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15000CC4: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
    // 0x15000CC8: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x15000CCC: blez        $v1, L_15000CF4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15000CD0: addiu       $t8, $v1, -0x24
        ctx->r24 = ADD32(ctx->r3, -0X24);
            goto L_15000CF4;
    }
    // 0x15000CD0: addiu       $t8, $v1, -0x24
    ctx->r24 = ADD32(ctx->r3, -0X24);
    // 0x15000CD4: sltiu       $at, $t8, 0xD
    ctx->r1 = ctx->r24 < 0XD ? 1 : 0;
    // 0x15000CD8: beq         $at, $zero, L_15000D70
    if (ctx->r1 == 0) {
        // 0x15000CDC: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_15000D70;
    }
    // 0x15000CDC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15000CE0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15000CE4: addu        $at, $at, $t8
    gpr jr_addend_15000CEC = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15000CE8: lw          $t8, 0x1A50($at)
    ctx->r24 = ADD32(ctx->r1, 0X1A50);
    // 0x15000CEC: jr          $t8
    // 0x15000CF0: nop

    switch (jr_addend_15000CEC >> 2) {
        case 0: goto L_15000D4C; break;
        case 1: goto L_15000D70; break;
        case 2: goto L_15000D70; break;
        case 3: goto L_15000D70; break;
        case 4: goto L_15000D70; break;
        case 5: goto L_15000CF8; break;
        case 6: goto L_15000D70; break;
        case 7: goto L_15000D28; break;
        case 8: goto L_15000D70; break;
        case 9: goto L_15000CF8; break;
        case 10: goto L_15000D70; break;
        case 11: goto L_15000D70; break;
        case 12: goto L_15000CF8; break;
        default: switch_error(__func__, 0x15000CEC, 0x80091A50);
    }
    // 0x15000CF0: nop

L_15000CF4:
    // 0x15000CF4: bne         $v1, $zero, L_15000D70
    if (ctx->r3 != 0) {
        // 0x15000CF8: addiu       $t9, $zero, 0xBF
        ctx->r25 = ADD32(0, 0XBF);
            goto L_15000D70;
    }
L_15000CF8:
    // 0x15000CF8: addiu       $t9, $zero, 0xBF
    ctx->r25 = ADD32(0, 0XBF);
    // 0x15000CFC: addiu       $t6, $zero, 0xD0
    ctx->r14 = ADD32(0, 0XD0);
    // 0x15000D00: addiu       $t7, $zero, 0xD5
    ctx->r15 = ADD32(0, 0XD5);
    // 0x15000D04: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15000D08: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x15000D0C: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x15000D10: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x15000D14: addiu       $t2, $zero, 0xA7
    ctx->r10 = ADD32(0, 0XA7);
    // 0x15000D18: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x15000D1C: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x15000D20: b           L_15000DA0
    // 0x15000D24: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
        goto L_15000DA0;
    // 0x15000D24: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
L_15000D28:
    // 0x15000D28: addiu       $t9, $zero, 0x5D
    ctx->r25 = ADD32(0, 0X5D);
    // 0x15000D2C: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x15000D30: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x15000D34: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x15000D38: addiu       $t2, $zero, 0x85
    ctx->r10 = ADD32(0, 0X85);
    // 0x15000D3C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x15000D40: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x15000D44: b           L_15000DA0
    // 0x15000D48: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
        goto L_15000DA0;
    // 0x15000D48: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
L_15000D4C:
    // 0x15000D4C: addiu       $t6, $zero, 0x1F
    ctx->r14 = ADD32(0, 0X1F);
    // 0x15000D50: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x15000D54: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x15000D58: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x15000D5C: addiu       $t2, $zero, 0x7B
    ctx->r10 = ADD32(0, 0X7B);
    // 0x15000D60: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x15000D64: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x15000D68: b           L_15000DA0
    // 0x15000D6C: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
        goto L_15000DA0;
    // 0x15000D6C: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
L_15000D70:
    // 0x15000D70: addiu       $t7, $zero, 0x67
    ctx->r15 = ADD32(0, 0X67);
    // 0x15000D74: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    // 0x15000D78: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x15000D7C: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x15000D80: addiu       $t6, $zero, 0xD5
    ctx->r14 = ADD32(0, 0XD5);
    // 0x15000D84: addiu       $t7, $zero, 0x2E
    ctx->r15 = ADD32(0, 0X2E);
    // 0x15000D88: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x15000D8C: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x15000D90: addiu       $t2, $zero, 0x23
    ctx->r10 = ADD32(0, 0X23);
    // 0x15000D94: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x15000D98: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x15000D9C: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
L_15000DA0:
    // 0x15000DA0: blez        $t2, L_15000E68
    if (SIGNED(ctx->r10) <= 0) {
        // 0x15000DA4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_15000E68;
    }
    // 0x15000DA4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15000DA8: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
    // 0x15000DAC: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
L_15000DB0:
    // 0x15000DB0: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x15000DB4: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x15000DB8: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x15000DBC: addiu       $v0, $sp, 0x5C
    ctx->r2 = ADD32(ctx->r29, 0X5C);
    // 0x15000DC0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
L_15000DC4:
    // 0x15000DC4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x15000DC8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15000DCC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x15000DD0: subu        $t9, $t8, $v1
    ctx->r25 = SUB32(ctx->r24, ctx->r3);
    // 0x15000DD4: multu       $t9, $s0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15000DD8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x15000DDC: mflo        $t6
    ctx->r14 = lo;
    // 0x15000DE0: nop

    // 0x15000DE4: nop

    // 0x15000DE8: div         $zero, $t6, $t2
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r10)));
    // 0x15000DEC: mflo        $t7
    ctx->r15 = lo;
    // 0x15000DF0: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x15000DF4: bne         $t2, $zero, L_15000E00
    if (ctx->r10 != 0) {
        // 0x15000DF8: nop
    
            goto L_15000E00;
    }
    // 0x15000DF8: nop

    // 0x15000DFC: break       7
    do_break(352325116);
L_15000E00:
    // 0x15000E00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15000E04: bne         $t2, $at, L_15000E18
    if (ctx->r10 != ctx->r1) {
        // 0x15000E08: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15000E18;
    }
    // 0x15000E08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15000E0C: bne         $t6, $at, L_15000E18
    if (ctx->r14 != ctx->r1) {
        // 0x15000E10: nop
    
            goto L_15000E18;
    }
    // 0x15000E10: nop

    // 0x15000E14: break       6
    do_break(352325140);
L_15000E18:
    // 0x15000E18: sw          $t8, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r24;
    // 0x15000E1C: bnel        $v0, $a2, L_15000DC4
    if (ctx->r2 != ctx->r6) {
        // 0x15000E20: lw          $v1, 0x0($a1)
        ctx->r3 = MEM_W(ctx->r5, 0X0);
            goto L_15000DC4;
    }
    goto skip_4;
    // 0x15000E20: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    skip_4:
    // 0x15000E24: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x15000E28: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x15000E2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15000E30: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x15000E34: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x15000E38: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x15000E3C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x15000E40: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x15000E44: or          $v0, $t9, $t6
    ctx->r2 = ctx->r25 | ctx->r14;
    // 0x15000E48: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x15000E4C: sw          $v0, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r2;
    // 0x15000E50: sw          $v0, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r2;
    // 0x15000E54: sw          $v0, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r2;
    // 0x15000E58: bne         $s0, $t2, L_15000DB0
    if (ctx->r16 != ctx->r10) {
        // 0x15000E5C: sw          $v0, -0x10($t1)
        MEM_W(-0X10, ctx->r9) = ctx->r2;
            goto L_15000DB0;
    }
    // 0x15000E5C: sw          $v0, -0x10($t1)
    MEM_W(-0X10, ctx->r9) = ctx->r2;
    // 0x15000E60: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15000E64: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
L_15000E68:
    // 0x15000E68: blez        $v1, L_15000E90
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15000E6C: addiu       $t8, $v1, -0x24
        ctx->r24 = ADD32(ctx->r3, -0X24);
            goto L_15000E90;
    }
    // 0x15000E6C: addiu       $t8, $v1, -0x24
    ctx->r24 = ADD32(ctx->r3, -0X24);
    // 0x15000E70: sltiu       $at, $t8, 0xD
    ctx->r1 = ctx->r24 < 0XD ? 1 : 0;
    // 0x15000E74: beq         $at, $zero, L_15000F4C
    if (ctx->r1 == 0) {
        // 0x15000E78: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_15000F4C;
    }
    // 0x15000E78: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15000E7C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15000E80: addu        $at, $at, $t8
    gpr jr_addend_15000E88 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15000E84: lw          $t8, 0x1A84($at)
    ctx->r24 = ADD32(ctx->r1, 0X1A84);
    // 0x15000E88: jr          $t8
    // 0x15000E8C: nop

    switch (jr_addend_15000E88 >> 2) {
        case 0: goto L_15000F10; break;
        case 1: goto L_15000F4C; break;
        case 2: goto L_15000F4C; break;
        case 3: goto L_15000F4C; break;
        case 4: goto L_15000F4C; break;
        case 5: goto L_15000E98; break;
        case 6: goto L_15000F4C; break;
        case 7: goto L_15000ED4; break;
        case 8: goto L_15000F4C; break;
        case 9: goto L_15000E98; break;
        case 10: goto L_15000F4C; break;
        case 11: goto L_15000F4C; break;
        case 12: goto L_15000E98; break;
        default: switch_error(__func__, 0x15000E88, 0x80091A84);
    }
    // 0x15000E8C: nop

L_15000E90:
    // 0x15000E90: bnel        $v1, $zero, L_15000F50
    if (ctx->r3 != 0) {
        // 0x15000E94: lw          $t6, 0x5C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X5C);
            goto L_15000F50;
    }
    goto skip_5;
    // 0x15000E94: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    skip_5:
L_15000E98:
    // 0x15000E98: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x15000E9C: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x15000EA0: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x15000EA4: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x15000EA8: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x15000EAC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x15000EB0: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x15000EB4: addiu       $t7, $zero, 0x4E
    ctx->r15 = ADD32(0, 0X4E);
    // 0x15000EB8: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x15000EBC: addiu       $t2, $zero, 0xB1
    ctx->r10 = ADD32(0, 0XB1);
    // 0x15000EC0: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x15000EC4: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x15000EC8: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x15000ECC: b           L_15000F84
    // 0x15000ED0: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
        goto L_15000F84;
    // 0x15000ED0: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
L_15000ED4:
    // 0x15000ED4: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x15000ED8: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x15000EDC: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x15000EE0: sw          $t6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r14;
    // 0x15000EE4: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x15000EE8: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x15000EEC: addiu       $t9, $zero, 0x1C
    ctx->r25 = ADD32(0, 0X1C);
    // 0x15000EF0: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x15000EF4: addiu       $t8, $zero, 0x93
    ctx->r24 = ADD32(0, 0X93);
    // 0x15000EF8: addiu       $t2, $zero, 0x9C
    ctx->r10 = ADD32(0, 0X9C);
    // 0x15000EFC: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x15000F00: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x15000F04: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x15000F08: b           L_15000F84
    // 0x15000F0C: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
        goto L_15000F84;
    // 0x15000F0C: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
L_15000F10:
    // 0x15000F10: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x15000F14: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x15000F18: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x15000F1C: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x15000F20: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x15000F24: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x15000F28: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x15000F2C: addiu       $t7, $zero, 0x1C
    ctx->r15 = ADD32(0, 0X1C);
    // 0x15000F30: addiu       $t9, $zero, 0x36
    ctx->r25 = ADD32(0, 0X36);
    // 0x15000F34: addiu       $t2, $zero, 0xA2
    ctx->r10 = ADD32(0, 0XA2);
    // 0x15000F38: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x15000F3C: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x15000F40: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x15000F44: b           L_15000F84
    // 0x15000F48: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
        goto L_15000F84;
    // 0x15000F48: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
L_15000F4C:
    // 0x15000F4C: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
L_15000F50:
    // 0x15000F50: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x15000F54: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x15000F58: sw          $t6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r14;
    // 0x15000F5C: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x15000F60: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x15000F64: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15000F68: addiu       $t6, $zero, 0x3E
    ctx->r14 = ADD32(0, 0X3E);
    // 0x15000F6C: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x15000F70: addiu       $t2, $zero, 0x63
    ctx->r10 = ADD32(0, 0X63);
    // 0x15000F74: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x15000F78: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x15000F7C: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x15000F80: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
L_15000F84:
    // 0x15000F84: slt         $at, $v0, $t2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x15000F88: beq         $at, $zero, L_15001060
    if (ctx->r1 == 0) {
        // 0x15000F8C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15001060;
    }
    // 0x15000F8C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15000F90: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x15000F94: addu        $t1, $t3, $t9
    ctx->r9 = ADD32(ctx->r11, ctx->r25);
    // 0x15000F98: subu        $a2, $v0, $v0
    ctx->r6 = SUB32(ctx->r2, ctx->r2);
    // 0x15000F9C: subu        $a3, $t2, $v0
    ctx->r7 = SUB32(ctx->r10, ctx->r2);
    // 0x15000FA0: addiu       $t0, $sp, 0x68
    ctx->r8 = ADD32(ctx->r29, 0X68);
L_15000FA4:
    // 0x15000FA4: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x15000FA8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x15000FAC: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x15000FB0: addiu       $v0, $sp, 0x5C
    ctx->r2 = ADD32(ctx->r29, 0X5C);
    // 0x15000FB4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
L_15000FB8:
    // 0x15000FB8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x15000FBC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15000FC0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x15000FC4: subu        $t8, $t6, $v1
    ctx->r24 = SUB32(ctx->r14, ctx->r3);
    // 0x15000FC8: multu       $t8, $a2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15000FCC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x15000FD0: mflo        $t7
    ctx->r15 = lo;
    // 0x15000FD4: nop

    // 0x15000FD8: nop

    // 0x15000FDC: div         $zero, $t7, $a3
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r7)));
    // 0x15000FE0: mflo        $t9
    ctx->r25 = lo;
    // 0x15000FE4: addu        $t6, $v1, $t9
    ctx->r14 = ADD32(ctx->r3, ctx->r25);
    // 0x15000FE8: bne         $a3, $zero, L_15000FF4
    if (ctx->r7 != 0) {
        // 0x15000FEC: nop
    
            goto L_15000FF4;
    }
    // 0x15000FEC: nop

    // 0x15000FF0: break       7
    do_break(352325616);
L_15000FF4:
    // 0x15000FF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15000FF8: bne         $a3, $at, L_1500100C
    if (ctx->r7 != ctx->r1) {
        // 0x15000FFC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1500100C;
    }
    // 0x15000FFC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15001000: bne         $t7, $at, L_1500100C
    if (ctx->r15 != ctx->r1) {
        // 0x15001004: nop
    
            goto L_1500100C;
    }
    // 0x15001004: nop

    // 0x15001008: break       6
    do_break(352325640);
L_1500100C:
    // 0x1500100C: sw          $t6, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r14;
    // 0x15001010: bnel        $v0, $t0, L_15000FB8
    if (ctx->r2 != ctx->r8) {
        // 0x15001014: lw          $v1, 0x0($a1)
        ctx->r3 = MEM_W(ctx->r5, 0X0);
            goto L_15000FB8;
    }
    goto skip_6;
    // 0x15001014: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    skip_6:
    // 0x15001018: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x1500101C: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x15001020: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15001024: sll         $t6, $t9, 24
    ctx->r14 = S32(ctx->r25 << 24);
    // 0x15001028: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x1500102C: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x15001030: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x15001034: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x15001038: or          $v0, $t8, $t7
    ctx->r2 = ctx->r24 | ctx->r15;
    // 0x1500103C: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x15001040: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x15001044: sw          $v0, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r2;
    // 0x15001048: sw          $v0, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r2;
    // 0x1500104C: sw          $v0, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r2;
    // 0x15001050: bne         $s0, $t2, L_15000FA4
    if (ctx->r16 != ctx->r10) {
        // 0x15001054: sw          $v0, -0x10($t1)
        MEM_W(-0X10, ctx->r9) = ctx->r2;
            goto L_15000FA4;
    }
    // 0x15001054: sw          $v0, -0x10($t1)
    MEM_W(-0X10, ctx->r9) = ctx->r2;
    // 0x15001058: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1500105C: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
L_15001060:
    // 0x15001060: blez        $v1, L_15001088
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15001064: addiu       $t6, $v1, -0x24
        ctx->r14 = ADD32(ctx->r3, -0X24);
            goto L_15001088;
    }
    // 0x15001064: addiu       $t6, $v1, -0x24
    ctx->r14 = ADD32(ctx->r3, -0X24);
    // 0x15001068: sltiu       $at, $t6, 0xD
    ctx->r1 = ctx->r14 < 0XD ? 1 : 0;
    // 0x1500106C: beq         $at, $zero, L_1500113C
    if (ctx->r1 == 0) {
        // 0x15001070: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_1500113C;
    }
    // 0x15001070: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15001074: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15001078: addu        $at, $at, $t6
    gpr jr_addend_15001080 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1500107C: lw          $t6, 0x1AB8($at)
    ctx->r14 = ADD32(ctx->r1, 0X1AB8);
    // 0x15001080: jr          $t6
    // 0x15001084: nop

    switch (jr_addend_15001080 >> 2) {
        case 0: goto L_15001100; break;
        case 1: goto L_1500113C; break;
        case 2: goto L_1500113C; break;
        case 3: goto L_1500113C; break;
        case 4: goto L_1500113C; break;
        case 5: goto L_15001090; break;
        case 6: goto L_1500113C; break;
        case 7: goto L_150010C4; break;
        case 8: goto L_1500113C; break;
        case 9: goto L_15001090; break;
        case 10: goto L_1500113C; break;
        case 11: goto L_1500113C; break;
        case 12: goto L_15001090; break;
        default: switch_error(__func__, 0x15001080, 0x80091AB8);
    }
    // 0x15001084: nop

L_15001088:
    // 0x15001088: bnel        $v1, $zero, L_15001140
    if (ctx->r3 != 0) {
        // 0x1500108C: lw          $t9, 0x5C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X5C);
            goto L_15001140;
    }
    goto skip_7;
    // 0x1500108C: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    skip_7:
L_15001090:
    // 0x15001090: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x15001094: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x15001098: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x1500109C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x150010A0: addiu       $t6, $zero, 0xC7
    ctx->r14 = ADD32(0, 0XC7);
    // 0x150010A4: addiu       $t2, $zero, 0xDD
    ctx->r10 = ADD32(0, 0XDD);
    // 0x150010A8: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x150010AC: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x150010B0: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x150010B4: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x150010B8: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x150010BC: b           L_15001168
    // 0x150010C0: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
        goto L_15001168;
    // 0x150010C0: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
L_150010C4:
    // 0x150010C4: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x150010C8: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x150010CC: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x150010D0: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x150010D4: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x150010D8: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x150010DC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x150010E0: addiu       $t9, $zero, 0x22
    ctx->r25 = ADD32(0, 0X22);
    // 0x150010E4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150010E8: addiu       $t2, $zero, 0xB4
    ctx->r10 = ADD32(0, 0XB4);
    // 0x150010EC: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x150010F0: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x150010F4: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x150010F8: b           L_15001168
    // 0x150010FC: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
        goto L_15001168;
    // 0x150010FC: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
L_15001100:
    // 0x15001100: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x15001104: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x15001108: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x1500110C: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x15001110: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x15001114: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x15001118: addiu       $t8, $zero, 0x21
    ctx->r24 = ADD32(0, 0X21);
    // 0x1500111C: addiu       $t7, $zero, 0x24
    ctx->r15 = ADD32(0, 0X24);
    // 0x15001120: addiu       $t6, $zero, 0x31
    ctx->r14 = ADD32(0, 0X31);
    // 0x15001124: addiu       $t2, $zero, 0xB7
    ctx->r10 = ADD32(0, 0XB7);
    // 0x15001128: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x1500112C: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x15001130: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
    // 0x15001134: b           L_15001168
    // 0x15001138: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
        goto L_15001168;
    // 0x15001138: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
L_1500113C:
    // 0x1500113C: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
L_15001140:
    // 0x15001140: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x15001144: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x15001148: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x1500114C: addiu       $t2, $zero, 0xC8
    ctx->r10 = ADD32(0, 0XC8);
    // 0x15001150: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x15001154: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x15001158: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x1500115C: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x15001160: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x15001164: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
L_15001168:
    // 0x15001168: slt         $at, $v0, $t2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x1500116C: beq         $at, $zero, L_1500123C
    if (ctx->r1 == 0) {
        // 0x15001170: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_1500123C;
    }
    // 0x15001170: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15001174: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x15001178: addu        $t1, $t3, $t9
    ctx->r9 = ADD32(ctx->r11, ctx->r25);
    // 0x1500117C: subu        $a2, $v0, $v0
    ctx->r6 = SUB32(ctx->r2, ctx->r2);
    // 0x15001180: subu        $a3, $t2, $v0
    ctx->r7 = SUB32(ctx->r10, ctx->r2);
    // 0x15001184: addiu       $t0, $sp, 0x68
    ctx->r8 = ADD32(ctx->r29, 0X68);
L_15001188:
    // 0x15001188: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x1500118C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x15001190: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x15001194: addiu       $v0, $sp, 0x5C
    ctx->r2 = ADD32(ctx->r29, 0X5C);
    // 0x15001198: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
L_1500119C:
    // 0x1500119C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x150011A0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x150011A4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x150011A8: subu        $t7, $t8, $v1
    ctx->r15 = SUB32(ctx->r24, ctx->r3);
    // 0x150011AC: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150011B0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x150011B4: mflo        $t6
    ctx->r14 = lo;
    // 0x150011B8: nop

    // 0x150011BC: nop

    // 0x150011C0: div         $zero, $t6, $a3
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r7)));
    // 0x150011C4: mflo        $t9
    ctx->r25 = lo;
    // 0x150011C8: addu        $t8, $v1, $t9
    ctx->r24 = ADD32(ctx->r3, ctx->r25);
    // 0x150011CC: bne         $a3, $zero, L_150011D8
    if (ctx->r7 != 0) {
        // 0x150011D0: nop
    
            goto L_150011D8;
    }
    // 0x150011D0: nop

    // 0x150011D4: break       7
    do_break(352326100);
L_150011D8:
    // 0x150011D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150011DC: bne         $a3, $at, L_150011F0
    if (ctx->r7 != ctx->r1) {
        // 0x150011E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150011F0;
    }
    // 0x150011E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150011E4: bne         $t6, $at, L_150011F0
    if (ctx->r14 != ctx->r1) {
        // 0x150011E8: nop
    
            goto L_150011F0;
    }
    // 0x150011E8: nop

    // 0x150011EC: break       6
    do_break(352326124);
L_150011F0:
    // 0x150011F0: sw          $t8, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r24;
    // 0x150011F4: bnel        $v0, $t0, L_1500119C
    if (ctx->r2 != ctx->r8) {
        // 0x150011F8: lw          $v1, 0x0($a1)
        ctx->r3 = MEM_W(ctx->r5, 0X0);
            goto L_1500119C;
    }
    goto skip_8;
    // 0x150011F8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    skip_8:
    // 0x150011FC: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x15001200: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x15001204: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15001208: sll         $t8, $t9, 24
    ctx->r24 = S32(ctx->r25 << 24);
    // 0x1500120C: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x15001210: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x15001214: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x15001218: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x1500121C: or          $v0, $t7, $t6
    ctx->r2 = ctx->r15 | ctx->r14;
    // 0x15001220: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x15001224: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x15001228: sw          $v0, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r2;
    // 0x1500122C: sw          $v0, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r2;
    // 0x15001230: sw          $v0, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r2;
    // 0x15001234: bne         $s0, $t2, L_15001188
    if (ctx->r16 != ctx->r10) {
        // 0x15001238: sw          $v0, -0x10($t1)
        MEM_W(-0X10, ctx->r9) = ctx->r2;
            goto L_15001188;
    }
    // 0x15001238: sw          $v0, -0x10($t1)
    MEM_W(-0X10, ctx->r9) = ctx->r2;
L_1500123C:
    // 0x1500123C: slti        $at, $t2, 0x100
    ctx->r1 = SIGNED(ctx->r10) < 0X100 ? 1 : 0;
    // 0x15001240: beq         $at, $zero, L_150012B0
    if (ctx->r1 == 0) {
        // 0x15001244: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_150012B0;
    }
    // 0x15001244: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x15001248: sll         $t9, $t2, 4
    ctx->r25 = S32(ctx->r10 << 4);
    // 0x1500124C: addu        $t1, $t3, $t9
    ctx->r9 = ADD32(ctx->r11, ctx->r25);
    // 0x15001250: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x15001254: addiu       $v1, $sp, 0x68
    ctx->r3 = ADD32(ctx->r29, 0X68);
L_15001258:
    // 0x15001258: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x1500125C: addiu       $v0, $sp, 0x5C
    ctx->r2 = ADD32(ctx->r29, 0X5C);
L_15001260:
    // 0x15001260: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x15001264: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15001268: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1500126C: bne         $v0, $v1, L_15001260
    if (ctx->r2 != ctx->r3) {
        // 0x15001270: sw          $t7, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r15;
            goto L_15001260;
    }
    // 0x15001270: sw          $t7, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r15;
    // 0x15001274: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x15001278: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x1500127C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15001280: sll         $t7, $t9, 24
    ctx->r15 = S32(ctx->r25 << 24);
    // 0x15001284: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x15001288: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x1500128C: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x15001290: sll         $t8, $t9, 16
    ctx->r24 = S32(ctx->r25 << 16);
    // 0x15001294: or          $v0, $t6, $t8
    ctx->r2 = ctx->r14 | ctx->r24;
    // 0x15001298: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x1500129C: sw          $v0, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r2;
    // 0x150012A0: sw          $v0, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r2;
    // 0x150012A4: sw          $v0, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r2;
    // 0x150012A8: bne         $s0, $a1, L_15001258
    if (ctx->r16 != ctx->r5) {
        // 0x150012AC: sw          $v0, -0x10($t1)
        MEM_W(-0X10, ctx->r9) = ctx->r2;
            goto L_15001258;
    }
    // 0x150012AC: sw          $v0, -0x10($t1)
    MEM_W(-0X10, ctx->r9) = ctx->r2;
L_150012B0:
    // 0x150012B0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x150012B4: lw          $a0, 0x2FA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2FA0);
    // 0x150012B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150012BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150012C0: sll         $t7, $a0, 7
    ctx->r15 = S32(ctx->r4 << 7);
    // 0x150012C4: addiu       $a0, $t7, 0x80
    ctx->r4 = ADD32(ctx->r15, 0X80);
    // 0x150012C8: jal         0x10003C40
    // 0x150012CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_5;
    // 0x150012CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x150012D0: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x150012D4: lw          $t9, 0x2FA0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2FA0);
    // 0x150012D8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150012DC: sw          $v0, -0x4150($at)
    MEM_W(-0X4150, ctx->r1) = ctx->r2;
    // 0x150012E0: bltz        $t9, L_1500141C
    if (SIGNED(ctx->r25) < 0) {
        // 0x150012E4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_1500141C;
    }
    // 0x150012E4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150012E8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x150012EC: addiu       $s1, $t6, -0x4178
    ctx->r17 = ADD32(ctx->r14, -0X4178);
    // 0x150012F0: or          $ra, $s1, $zero
    ctx->r31 = ctx->r17 | 0;
L_150012F4:
    // 0x150012F4: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x150012F8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x150012FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15001300: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15001304: jal         0x10003C40
    // 0x15001308: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_6;
    // 0x15001308: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x1500130C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x15001310: addiu       $t8, $v0, 0x40
    ctx->r24 = ADD32(ctx->r2, 0X40);
    // 0x15001314: addiu       $t0, $zero, -0x6D6
    ctx->r8 = ADD32(0, -0X6D6);
    // 0x15001318: addiu       $t1, $zero, 0x6D6
    ctx->r9 = ADD32(0, 0X6D6);
    // 0x1500131C: addiu       $t2, $zero, -0x3E8
    ctx->r10 = ADD32(0, -0X3E8);
    // 0x15001320: addiu       $t3, $zero, 0x2000
    ctx->r11 = ADD32(0, 0X2000);
    // 0x15001324: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x15001328: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1500132C: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x15001330: sw          $v0, 0x0($ra)
    MEM_W(0X0, ctx->r31) = ctx->r2;
    // 0x15001334: sw          $t8, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r24;
L_15001338:
    // 0x15001338: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1500133C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x15001340: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15001344: sh          $t0, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r8;
    // 0x15001348: lw          $t9, -0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X4);
    // 0x1500134C: sh          $t1, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r9;
    // 0x15001350: lw          $t6, -0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X4);
    // 0x15001354: sh          $t2, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r10;
    // 0x15001358: lw          $t8, -0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X4);
    // 0x1500135C: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x15001360: lw          $t7, -0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X4);
    // 0x15001364: sh          $t3, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r11;
    // 0x15001368: lw          $t9, -0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X4);
    // 0x1500136C: sh          $t1, 0x10($t9)
    MEM_H(0X10, ctx->r25) = ctx->r9;
    // 0x15001370: lw          $t6, -0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X4);
    // 0x15001374: sh          $t1, 0x12($t6)
    MEM_H(0X12, ctx->r14) = ctx->r9;
    // 0x15001378: lw          $t8, -0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X4);
    // 0x1500137C: sh          $t2, 0x14($t8)
    MEM_H(0X14, ctx->r24) = ctx->r10;
    // 0x15001380: lw          $t7, -0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X4);
    // 0x15001384: sh          $zero, 0x16($t7)
    MEM_H(0X16, ctx->r15) = 0;
    // 0x15001388: lw          $t9, -0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X4);
    // 0x1500138C: sh          $t3, 0x18($t9)
    MEM_H(0X18, ctx->r25) = ctx->r11;
    // 0x15001390: lw          $t6, -0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X4);
    // 0x15001394: sh          $t1, 0x20($t6)
    MEM_H(0X20, ctx->r14) = ctx->r9;
    // 0x15001398: lw          $t8, -0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X4);
    // 0x1500139C: sh          $t0, 0x22($t8)
    MEM_H(0X22, ctx->r24) = ctx->r8;
    // 0x150013A0: lw          $t7, -0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X4);
    // 0x150013A4: sh          $t2, 0x24($t7)
    MEM_H(0X24, ctx->r15) = ctx->r10;
    // 0x150013A8: lw          $t9, -0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X4);
    // 0x150013AC: sh          $zero, 0x26($t9)
    MEM_H(0X26, ctx->r25) = 0;
    // 0x150013B0: lw          $t6, -0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X4);
    // 0x150013B4: sh          $t3, 0x28($t6)
    MEM_H(0X28, ctx->r14) = ctx->r11;
    // 0x150013B8: lw          $t8, -0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X4);
    // 0x150013BC: sh          $t0, 0x30($t8)
    MEM_H(0X30, ctx->r24) = ctx->r8;
    // 0x150013C0: lw          $t7, -0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X4);
    // 0x150013C4: sh          $t0, 0x32($t7)
    MEM_H(0X32, ctx->r15) = ctx->r8;
    // 0x150013C8: lw          $t9, -0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X4);
    // 0x150013CC: sh          $t2, 0x34($t9)
    MEM_H(0X34, ctx->r25) = ctx->r10;
    // 0x150013D0: lw          $t6, -0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, -0X4);
    // 0x150013D4: sh          $zero, 0x36($t6)
    MEM_H(0X36, ctx->r14) = 0;
    // 0x150013D8: lw          $t8, -0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X4);
    // 0x150013DC: bne         $a0, $t4, L_15001338
    if (ctx->r4 != ctx->r12) {
        // 0x150013E0: sh          $t3, 0x38($t8)
        MEM_H(0X38, ctx->r24) = ctx->r11;
            goto L_15001338;
    }
    // 0x150013E0: sh          $t3, 0x38($t8)
    MEM_H(0X38, ctx->r24) = ctx->r11;
    // 0x150013E4: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x150013E8: lw          $t7, 0x2FA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2FA0);
    // 0x150013EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150013F0: addiu       $ra, $ra, 0x8
    ctx->r31 = ADD32(ctx->r31, 0X8);
    // 0x150013F4: slt         $at, $t7, $s0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x150013F8: beq         $at, $zero, L_150012F4
    if (ctx->r1 == 0) {
        // 0x150013FC: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_150012F4;
    }
    // 0x150013FC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x15001400: b           L_1500141C
    // 0x15001404: nop

        goto L_1500141C;
    // 0x15001404: nop

L_15001408:
    // 0x15001408: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1500140C: bne         $v1, $at, L_1500141C
    if (ctx->r3 != ctx->r1) {
        // 0x15001410: nop
    
            goto L_1500141C;
    }
    // 0x15001410: nop

    // 0x15001414: jal         0x15111858
    // 0x15001418: nop

    func_15111858(rdram, ctx);
        goto after_7;
    // 0x15001418: nop

    after_7:
L_1500141C:
    // 0x1500141C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15001420: lw          $t9, 0x2E4C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2E4C);
    // 0x15001424: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15001428: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500142C: lbu         $t6, 0x14($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X14);
    // 0x15001430: andi        $t8, $t6, 0x1
    ctx->r24 = ctx->r14 & 0X1;
    // 0x15001434: beq         $t8, $zero, L_15001448
    if (ctx->r24 == 0) {
        // 0x15001438: nop
    
            goto L_15001448;
    }
    // 0x15001438: nop

    // 0x1500143C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15001440: b           L_1500144C
    // 0x15001444: sb          $t7, -0x4154($at)
    MEM_B(-0X4154, ctx->r1) = ctx->r15;
        goto L_1500144C;
    // 0x15001444: sb          $t7, -0x4154($at)
    MEM_B(-0X4154, ctx->r1) = ctx->r15;
L_15001448:
    // 0x15001448: sb          $zero, -0x4154($at)
    MEM_B(-0X4154, ctx->r1) = 0;
L_1500144C:
    // 0x1500144C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15001450: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15001454: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15001458: jr          $ra
    // 0x1500145C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    return;
    // 0x1500145C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_15020388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15020388: addiu       $sp, $sp, -0x160
    ctx->r29 = ADD32(ctx->r29, -0X160);
    // 0x1502038C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x15020390: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x15020394: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x15020398: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x1502039C: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x150203A0: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x150203A4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x150203A8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x150203AC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x150203B0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x150203B4: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x150203B8: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x150203BC: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x150203C0: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x150203C4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x150203C8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x150203CC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150203D0: addiu       $t6, $t6, 0x35C8
    ctx->r14 = ADD32(ctx->r14, 0X35C8);
    // 0x150203D4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x150203D8: addu        $t2, $v0, $t6
    ctx->r10 = ADD32(ctx->r2, ctx->r14);
    // 0x150203DC: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x150203E0: sll         $t3, $a0, 1
    ctx->r11 = S32(ctx->r4 << 1);
    // 0x150203E4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150203E8: addu        $t8, $t7, $t3
    ctx->r24 = ADD32(ctx->r15, ctx->r11);
    // 0x150203EC: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x150203F0: addiu       $t6, $t6, 0x3A50
    ctx->r14 = ADD32(ctx->r14, 0X3A50);
    // 0x150203F4: addu        $t4, $v0, $t6
    ctx->r12 = ADD32(ctx->r2, ctx->r14);
    // 0x150203F8: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x150203FC: bnel        $at, $zero, L_15020834
    if (ctx->r1 != 0) {
        // 0x15020400: lw          $ra, 0x6C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X6C);
            goto L_15020834;
    }
    goto skip_0;
    // 0x15020400: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    skip_0:
    // 0x15020404: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x15020408: sll         $t5, $a0, 6
    ctx->r13 = S32(ctx->r4 << 6);
    // 0x1502040C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15020410: addu        $t9, $t8, $t5
    ctx->r25 = ADD32(ctx->r24, ctx->r13);
    // 0x15020414: sb          $t7, 0x3C($t9)
    MEM_B(0X3C, ctx->r25) = ctx->r15;
    // 0x15020418: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x1502041C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15020420: sll         $t9, $a1, 4
    ctx->r25 = S32(ctx->r5 << 4);
    // 0x15020424: addu        $t8, $t6, $t3
    ctx->r24 = ADD32(ctx->r14, ctx->r11);
    // 0x15020428: lhu         $a3, 0x0($t8)
    ctx->r7 = MEM_HU(ctx->r24, 0X0);
    // 0x1502042C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15020430: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x15020434: addiu       $t7, $a3, -0x1
    ctx->r15 = ADD32(ctx->r7, -0X1);
    // 0x15020438: blez        $t7, L_150207FC
    if (SIGNED(ctx->r15) <= 0) {
        // 0x1502043C: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_150207FC;
    }
    // 0x1502043C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x15020440: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x15020444: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x15020448: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1502044C: addiu       $t7, $t7, 0x3868
    ctx->r15 = ADD32(ctx->r15, 0X3868);
    // 0x15020450: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x15020454: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x15020458: sw          $t9, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r25;
    // 0x1502045C: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x15020460: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x15020464: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
    // 0x15020468: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x1502046C: addiu       $s3, $sp, 0x10C
    ctx->r19 = ADD32(ctx->r29, 0X10C);
    // 0x15020470: addiu       $s2, $sp, 0x10C
    ctx->r18 = ADD32(ctx->r29, 0X10C);
    // 0x15020474: addiu       $s1, $sp, 0x110
    ctx->r17 = ADD32(ctx->r29, 0X110);
    // 0x15020478: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
L_1502047C:
    // 0x1502047C: addiu       $a0, $sp, 0x128
    ctx->r4 = ADD32(ctx->r29, 0X128);
    // 0x15020480: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x15020484: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x15020488: addu        $t8, $a1, $fp
    ctx->r24 = ADD32(ctx->r5, ctx->r30);
    // 0x1502048C: lhu         $s6, 0x6($t8)
    ctx->r22 = MEM_HU(ctx->r24, 0X6);
    // 0x15020490: sw          $t5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r13;
    // 0x15020494: sw          $t4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r12;
    // 0x15020498: sw          $t3, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r11;
    // 0x1502049C: sw          $t2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r10;
    // 0x150204A0: jal         0x1501FFE8
    // 0x150204A4: sw          $t1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r9;
    func_1501FFE8(rdram, ctx);
        goto after_0;
    // 0x150204A4: sw          $t1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r9;
    after_0:
    // 0x150204A8: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    // 0x150204AC: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x150204B0: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x150204B4: lw          $t7, 0x0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X0);
    // 0x150204B8: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x150204BC: lw          $t3, 0xB0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB0);
    // 0x150204C0: addu        $t9, $t7, $t5
    ctx->r25 = ADD32(ctx->r15, ctx->r13);
    // 0x150204C4: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x150204C8: addiu       $a0, $sp, 0xDC
    ctx->r4 = ADD32(ctx->r29, 0XDC);
    // 0x150204CC: addiu       $v1, $sp, 0x128
    ctx->r3 = ADD32(ctx->r29, 0X128);
    // 0x150204D0: addu        $t8, $t6, $t1
    ctx->r24 = ADD32(ctx->r14, ctx->r9);
    // 0x150204D4: bne         $s6, $zero, L_15020790
    if (ctx->r22 != 0) {
        // 0x150204D8: swc1        $f20, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->f20.u32l;
            goto L_15020790;
    }
    // 0x150204D8: swc1        $f20, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f20.u32l;
    // 0x150204DC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150204E0: lwc1        $f12, 0x69E0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X69E0);
    // 0x150204E4: lui         $at, 0xC020
    ctx->r1 = S32(0XC020 << 16);
    // 0x150204E8: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150204EC: lui         $at, 0xBFC0
    ctx->r1 = S32(0XBFC0 << 16);
    // 0x150204F0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150204F4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x150204F8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150204FC: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x15020500: sltiu       $t7, $s0, 0x1
    ctx->r15 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x15020504: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x15020508: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1502050C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15020510: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x15020514: swc1        $f20, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f20.u32l;
    // 0x15020518: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1502051C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x15020520: addu        $a3, $s1, $t9
    ctx->r7 = ADD32(ctx->r17, ctx->r25);
    // 0x15020524: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    // 0x15020528: addiu       $a2, $sp, 0xF4
    ctx->r6 = ADD32(ctx->r29, 0XF4);
    // 0x1502052C: addiu       $v0, $sp, 0x100
    ctx->r2 = ADD32(ctx->r29, 0X100);
    // 0x15020530: lwc1        $f14, 0x0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15020534: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x15020538: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1502053C: mul.s       $f10, $f22, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f14.fl);
    // 0x15020540: sltu        $at, $v0, $s2
    ctx->r1 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x15020544: lwc1        $f30, 0x18($v1)
    ctx->f30.u32l = MEM_W(ctx->r3, 0X18);
    // 0x15020548: mul.s       $f16, $f24, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x1502054C: beq         $at, $zero, L_150205CC
    if (ctx->r1 == 0) {
        // 0x15020550: nop
    
            goto L_150205CC;
    }
    // 0x15020550: nop

L_15020554:
    // 0x15020554: mul.s       $f8, $f26, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f30.fl);
    // 0x15020558: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1502055C: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    // 0x15020560: mul.s       $f2, $f28, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f28.fl, ctx->f18.fl);
    // 0x15020564: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15020568: sltu        $at, $v0, $s2
    ctx->r1 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x1502056C: mul.s       $f0, $f4, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x15020570: swc1        $f18, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f18.u32l;
    // 0x15020574: add.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15020578: mul.s       $f4, $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x1502057C: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x15020580: add.s       $f2, $f14, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x15020584: lwc1        $f14, 0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15020588: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1502058C: add.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x15020590: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15020594: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x15020598: add.s       $f0, $f30, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = ctx->f30.fl + ctx->f30.fl;
    // 0x1502059C: mul.s       $f6, $f30, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f30.fl, ctx->f20.fl);
    // 0x150205A0: lwc1        $f30, 0x18($v1)
    ctx->f30.u32l = MEM_W(ctx->r3, 0X18);
    // 0x150205A4: swc1        $f8, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f8.u32l;
    // 0x150205A8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x150205AC: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x150205B0: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150205B4: mul.s       $f10, $f22, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f14.fl);
    // 0x150205B8: add.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x150205BC: mul.s       $f16, $f24, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x150205C0: swc1        $f6, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f6.u32l;
    // 0x150205C4: bne         $at, $zero, L_15020554
    if (ctx->r1 != 0) {
        // 0x150205C8: swc1        $f0, -0x4($a1)
        MEM_W(-0X4, ctx->r5) = ctx->f0.u32l;
            goto L_15020554;
    }
    // 0x150205C8: swc1        $f0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f0.u32l;
L_150205CC:
    // 0x150205CC: mul.s       $f8, $f26, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f30.fl);
    // 0x150205D0: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    // 0x150205D4: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150205D8: mul.s       $f2, $f28, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f28.fl, ctx->f18.fl);
    // 0x150205DC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x150205E0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x150205E4: mul.s       $f0, $f4, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x150205E8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x150205EC: add.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150205F0: mul.s       $f4, $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x150205F4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x150205F8: add.s       $f2, $f14, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x150205FC: mul.s       $f6, $f30, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f30.fl, ctx->f20.fl);
    // 0x15020600: swc1        $f18, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f18.u32l;
    // 0x15020604: add.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x15020608: add.s       $f0, $f30, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = ctx->f30.fl + ctx->f30.fl;
    // 0x1502060C: swc1        $f8, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f8.u32l;
    // 0x15020610: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15020614: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x15020618: swc1        $f6, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f6.u32l;
    // 0x1502061C: add.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x15020620: swc1        $f0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f0.u32l;
    // 0x15020624: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15020628: addiu       $v0, $sp, 0x100
    ctx->r2 = ADD32(ctx->r29, 0X100);
L_1502062C:
    // 0x1502062C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15020630: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15020634: addu        $t6, $a3, $v1
    ctx->r14 = ADD32(ctx->r7, ctx->r3);
    // 0x15020638: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1502063C: bne         $v0, $s3, L_1502062C
    if (ctx->r2 != ctx->r19) {
        // 0x15020640: swc1        $f6, 0x0($t6)
        MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
            goto L_1502062C;
    }
    // 0x15020640: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x15020644: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15020648: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1502064C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15020650: lwc1        $f10, 0x69E4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X69E4);
    // 0x15020654: lwc1        $f30, 0xEC($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x15020658: lwc1        $f28, 0xE0($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x1502065C: c.le.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl <= ctx->f4.fl;
    // 0x15020660: lwc1        $f26, 0x104($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X104);
    // 0x15020664: lwc1        $f24, 0xF4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x15020668: lwc1        $f22, 0xE8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x1502066C: bc1f        L_15020788
    if (!c1cs) {
        // 0x15020670: lwc1        $f20, 0xDC($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_15020788;
    }
    // 0x15020670: lwc1        $f20, 0xDC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x15020674: lwc1        $f18, 0x100($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X100);
L_15020678:
    // 0x15020678: mul.s       $f8, $f20, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x1502067C: sltiu       $t7, $s0, 0x1
    ctx->r15 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x15020680: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15020684: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15020688: add.s       $f6, $f8, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x1502068C: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x15020690: mflo        $t8
    ctx->r24 = lo;
    // 0x15020694: addu        $v0, $s1, $t8
    ctx->r2 = ADD32(ctx->r17, ctx->r24);
    // 0x15020698: nop

    // 0x1502069C: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150206A0: add.s       $f10, $f4, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x150206A4: mul.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x150206A8: nop

    // 0x150206AC: mul.s       $f6, $f28, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f12.fl);
    // 0x150206B0: mflo        $t9
    ctx->r25 = lo;
    // 0x150206B4: addu        $v1, $s1, $t9
    ctx->r3 = ADD32(ctx->r17, ctx->r25);
    // 0x150206B8: add.s       $f0, $f18, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x150206BC: add.s       $f4, $f6, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f30.fl;
    // 0x150206C0: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x150206C4: lwc1        $f8, 0xF8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x150206C8: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x150206CC: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150206D0: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x150206D4: add.s       $f14, $f26, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f26.fl + ctx->f4.fl;
    // 0x150206D8: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x150206DC: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x150206E0: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x150206E4: mul.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x150206E8: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x150206EC: lwc1        $f8, 0xFC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x150206F0: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x150206F4: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150206F8: lwc1        $f10, 0x108($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X108);
    // 0x150206FC: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x15020700: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15020704: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x15020708: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1502070C: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15020710: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15020714: sub.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x15020718: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1502071C: sub.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x15020720: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15020724: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15020728: sub.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1502072C: mul.s       $f16, $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x15020730: nop

    // 0x15020734: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15020738: add.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x1502073C: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x15020740: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x15020744: nop

    // 0x15020748: bc1t        L_15020760
    if (c1cs) {
        // 0x1502074C: nop
    
            goto L_15020760;
    }
    // 0x1502074C: nop

    // 0x15020750: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
    // 0x15020754: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x15020758: add.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x1502075C: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
L_15020760:
    // 0x15020760: lwc1        $f6, 0x69E8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X69E8);
    // 0x15020764: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15020768: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1502076C: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x15020770: xori        $t6, $s0, 0x1
    ctx->r14 = ctx->r16 ^ 0X1;
    // 0x15020774: andi        $s0, $t6, 0xFF
    ctx->r16 = ctx->r14 & 0XFF;
    // 0x15020778: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x1502077C: nop

    // 0x15020780: bc1t        L_15020678
    if (c1cs) {
        // 0x15020784: nop
    
            goto L_15020678;
    }
    // 0x15020784: nop

L_15020788:
    // 0x15020788: b           L_150207D4
    // 0x1502078C: lwc1        $f20, 0xD8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XD8);
        goto L_150207D4;
    // 0x1502078C: lwc1        $f20, 0xD8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XD8);
L_15020790:
    // 0x15020790: lwc1        $f4, 0x148($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X148);
    // 0x15020794: lwc1        $f8, 0x13C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x15020798: lwc1        $f6, 0x140($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X140);
    // 0x1502079C: lwc1        $f10, 0x134($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X134);
    // 0x150207A0: sub.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x150207A4: lwc1        $f8, 0x138($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X138);
    // 0x150207A8: lwc1        $f4, 0x144($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X144);
    // 0x150207AC: sub.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x150207B0: sub.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x150207B4: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x150207B8: nop

    // 0x150207BC: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x150207C0: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150207C4: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150207C8: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150207CC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150207D0: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_150207D4:
    // 0x150207D4: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x150207D8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x150207DC: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x150207E0: addu        $t9, $t7, $t3
    ctx->r25 = ADD32(ctx->r15, ctx->r11);
    // 0x150207E4: lhu         $a3, 0x0($t9)
    ctx->r7 = MEM_HU(ctx->r25, 0X0);
    // 0x150207E8: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x150207EC: addiu       $t6, $a3, -0x1
    ctx->r14 = ADD32(ctx->r7, -0X1);
    // 0x150207F0: slt         $at, $s7, $t6
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x150207F4: bnel        $at, $zero, L_1502047C
    if (ctx->r1 != 0) {
        // 0x150207F8: lw          $t6, 0xB8($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XB8);
            goto L_1502047C;
    }
    goto skip_1;
    // 0x150207F8: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    skip_1:
L_150207FC:
    // 0x150207FC: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x15020800: sll         $t6, $s7, 2
    ctx->r14 = S32(ctx->r23 << 2);
    // 0x15020804: addu        $t7, $t8, $t5
    ctx->r15 = ADD32(ctx->r24, ctx->r13);
    // 0x15020808: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x1502080C: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x15020810: swc1        $f20, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f20.u32l;
    // 0x15020814: lw          $t7, 0x0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X0);
    // 0x15020818: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1502081C: addu        $t9, $t7, $t5
    ctx->r25 = ADD32(ctx->r15, ctx->r13);
    // 0x15020820: swc1        $f20, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f20.u32l;
    // 0x15020824: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x15020828: addu        $t7, $t8, $t5
    ctx->r15 = ADD32(ctx->r24, ctx->r13);
    // 0x1502082C: sb          $t6, 0x3C($t7)
    MEM_B(0X3C, ctx->r15) = ctx->r14;
    // 0x15020830: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_15020834:
    // 0x15020834: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15020838: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x1502083C: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x15020840: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x15020844: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x15020848: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x1502084C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x15020850: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x15020854: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x15020858: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x1502085C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x15020860: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x15020864: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x15020868: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x1502086C: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x15020870: jr          $ra
    // 0x15020874: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
    return;
    return;
    // 0x15020874: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
;}
RECOMP_FUNC void func_151C196C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C196C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151C1970: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x151C1974: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x151C1978: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151C197C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x151C1980: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151C1984: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x151C1988: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x151C198C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x151C1990: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x151C1994: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x151C1998: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151C199C: sb          $zero, 0x56($sp)
    MEM_B(0X56, ctx->r29) = 0;
    // 0x151C19A0: beq         $t6, $zero, L_151C1B9C
    if (ctx->r14 == 0) {
        // 0x151C19A4: lw          $t7, 0x68($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X68);
            goto L_151C1B9C;
    }
    // 0x151C19A4: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x151C19A8: beql        $t7, $zero, L_151C1BA0
    if (ctx->r15 == 0) {
        // 0x151C19AC: lw          $at, 0x0($s1)
        ctx->r1 = MEM_W(ctx->r17, 0X0);
            goto L_151C1BA0;
    }
    goto skip_0;
    // 0x151C19AC: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    skip_0:
    // 0x151C19B0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x151C19B4: addiu       $s2, $s0, 0x2C
    ctx->r18 = ADD32(ctx->r16, 0X2C);
    // 0x151C19B8: addiu       $s3, $s0, 0x38
    ctx->r19 = ADD32(ctx->r16, 0X38);
    // 0x151C19BC: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x151C19C0: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x151C19C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151C19C8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151C19CC: sw          $t9, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r25;
    // 0x151C19D0: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x151C19D4: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x151C19D8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x151C19DC: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x151C19E0: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x151C19E4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x151C19E8: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x151C19EC: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x151C19F0: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x151C19F4: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x151C19F8: sw          $t2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r10;
    // 0x151C19FC: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x151C1A00: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x151C1A04: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x151C1A08: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x151C1A0C: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x151C1A10: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x151C1A14: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x151C1A18: sb          $v1, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r3;
    // 0x151C1A1C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x151C1A20: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x151C1A24: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151C1A28: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151C1A2C: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x151C1A30: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x151C1A34: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x151C1A38: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x151C1A3C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x151C1A40: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x151C1A44: jal         0x151C1D5C
    // 0x151C1A48: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    func_151C1D5C(rdram, ctx);
        goto after_0;
    // 0x151C1A48: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    after_0:
    // 0x151C1A4C: lbu         $t1, 0x59($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X59);
    // 0x151C1A50: lbu         $v1, 0x57($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X57);
    // 0x151C1A54: bnel        $t1, $zero, L_151C1AE8
    if (ctx->r9 != 0) {
        // 0x151C1A58: lwc1        $f6, 0x2C($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
            goto L_151C1AE8;
    }
    goto skip_1;
    // 0x151C1A58: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    skip_1:
    // 0x151C1A5C: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151C1A60: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151C1A64: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x151C1A68: nop

    // 0x151C1A6C: bc1fl       L_151C1AA8
    if (!c1cs) {
        // 0x151C1A70: lw          $at, 0x0($s1)
        ctx->r1 = MEM_W(ctx->r17, 0X0);
            goto L_151C1AA8;
    }
    goto skip_2;
    // 0x151C1A70: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    skip_2:
    // 0x151C1A74: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151C1A78: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x151C1A7C: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x151C1A80: nop

    // 0x151C1A84: bc1fl       L_151C1AA8
    if (!c1cs) {
        // 0x151C1A88: lw          $at, 0x0($s1)
        ctx->r1 = MEM_W(ctx->r17, 0X0);
            goto L_151C1AA8;
    }
    goto skip_3;
    // 0x151C1A88: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    skip_3:
    // 0x151C1A8C: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151C1A90: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x151C1A94: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x151C1A98: nop

    // 0x151C1A9C: bc1t        L_151C1ADC
    if (c1cs) {
        // 0x151C1AA0: nop
    
            goto L_151C1ADC;
    }
    // 0x151C1AA0: nop

    // 0x151C1AA4: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
L_151C1AA8:
    // 0x151C1AA8: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x151C1AAC: lw          $t2, 0x4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4);
    // 0x151C1AB0: sw          $t2, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r10;
    // 0x151C1AB4: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x151C1AB8: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x151C1ABC: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x151C1AC0: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x151C1AC4: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x151C1AC8: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x151C1ACC: sw          $t5, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r13;
    // 0x151C1AD0: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x151C1AD4: b           L_151C1BD8
    // 0x151C1AD8: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
        goto L_151C1BD8;
    // 0x151C1AD8: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
L_151C1ADC:
    // 0x151C1ADC: b           L_151C1BD8
    // 0x151C1AE0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151C1BD8;
    // 0x151C1AE0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151C1AE4: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
L_151C1AE8:
    // 0x151C1AE8: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151C1AEC: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x151C1AF0: nop

    // 0x151C1AF4: bc1fl       L_151C1B30
    if (!c1cs) {
        // 0x151C1AF8: lw          $at, 0x0($s1)
        ctx->r1 = MEM_W(ctx->r17, 0X0);
            goto L_151C1B30;
    }
    goto skip_4;
    // 0x151C1AF8: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    skip_4:
    // 0x151C1AFC: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151C1B00: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x151C1B04: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x151C1B08: nop

    // 0x151C1B0C: bc1fl       L_151C1B30
    if (!c1cs) {
        // 0x151C1B10: lw          $at, 0x0($s1)
        ctx->r1 = MEM_W(ctx->r17, 0X0);
            goto L_151C1B30;
    }
    goto skip_5;
    // 0x151C1B10: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    skip_5:
    // 0x151C1B14: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151C1B18: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x151C1B1C: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x151C1B20: nop

    // 0x151C1B24: bc1t        L_151C1BD8
    if (c1cs) {
        // 0x151C1B28: nop
    
            goto L_151C1BD8;
    }
    // 0x151C1B28: nop

    // 0x151C1B2C: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
L_151C1B30:
    // 0x151C1B30: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151C1B34: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x151C1B38: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x151C1B3C: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x151C1B40: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x151C1B44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151C1B48: sw          $t8, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r24;
    // 0x151C1B4C: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x151C1B50: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x151C1B54: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151C1B58: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151C1B5C: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151C1B60: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151C1B64: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151C1B68: swc1        $f10, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f10.u32l;
    // 0x151C1B6C: lwc1        $f18, 0x4($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X4);
    // 0x151C1B70: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151C1B74: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
    // 0x151C1B78: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x151C1B7C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151C1B80: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    // 0x151C1B84: jal         0x15145128
    // 0x151C1B88: sb          $v1, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r3;
    func_15145128(rdram, ctx);
        goto after_1;
    // 0x151C1B88: sb          $v1, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r3;
    after_1:
    // 0x151C1B8C: bne         $v0, $zero, L_151C1BD8
    if (ctx->r2 != 0) {
        // 0x151C1B90: lbu         $v1, 0x57($sp)
        ctx->r3 = MEM_BU(ctx->r29, 0X57);
            goto L_151C1BD8;
    }
    // 0x151C1B90: lbu         $v1, 0x57($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X57);
    // 0x151C1B94: b           L_151C1D40
    // 0x151C1B98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151C1D40;
    // 0x151C1B98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C1B9C:
    // 0x151C1B9C: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
L_151C1BA0:
    // 0x151C1BA0: addiu       $s2, $s0, 0x2C
    ctx->r18 = ADD32(ctx->r16, 0X2C);
    // 0x151C1BA4: addiu       $s3, $s0, 0x38
    ctx->r19 = ADD32(ctx->r16, 0X38);
    // 0x151C1BA8: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x151C1BAC: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x151C1BB0: sw          $t9, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r25;
    // 0x151C1BB4: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x151C1BB8: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x151C1BBC: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x151C1BC0: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151C1BC4: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x151C1BC8: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x151C1BCC: sw          $t2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r10;
    // 0x151C1BD0: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x151C1BD4: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
L_151C1BD8:
    // 0x151C1BD8: beq         $v1, $zero, L_151C1C50
    if (ctx->r3 == 0) {
        // 0x151C1BDC: lw          $a0, 0x6C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X6C);
            goto L_151C1C50;
    }
    // 0x151C1BDC: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x151C1BE0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151C1BE4: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x151C1BE8: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x151C1BEC: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x151C1BF0: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x151C1BF4: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x151C1BF8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151C1BFC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151C1C00: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151C1C04: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x151C1C08: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x151C1C0C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151C1C10: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x151C1C14: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x151C1C18: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x151C1C1C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151C1C20: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x151C1C24: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x151C1C28: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x151C1C2C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x151C1C30: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x151C1C34: jal         0x151C1D5C
    // 0x151C1C38: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    func_151C1D5C(rdram, ctx);
        goto after_2;
    // 0x151C1C38: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_2:
    // 0x151C1C3C: lbu         $t1, 0x59($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X59);
    // 0x151C1C40: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151C1C44: beql        $t1, $zero, L_151C1C54
    if (ctx->r9 == 0) {
        // 0x151C1C48: lbu         $t4, 0x56($sp)
        ctx->r12 = MEM_BU(ctx->r29, 0X56);
            goto L_151C1C54;
    }
    goto skip_6;
    // 0x151C1C48: lbu         $t4, 0x56($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X56);
    skip_6:
    // 0x151C1C4C: sb          $t2, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r10;
L_151C1C50:
    // 0x151C1C50: lbu         $t4, 0x56($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X56);
L_151C1C54:
    // 0x151C1C54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C1C58: bnel        $t4, $zero, L_151C1D40
    if (ctx->r12 != 0) {
        // 0x151C1C5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151C1D40;
    }
    goto skip_7;
    // 0x151C1C5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_7:
    // 0x151C1C60: lwc1        $f0, -0x5640($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5640);
    // 0x151C1C64: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x151C1C68: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x151C1C6C: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x151C1C70: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x151C1C74: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x151C1C78: sw          $t5, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r13;
    // 0x151C1C7C: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x151C1C80: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x151C1C84: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x151C1C88: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x151C1C8C: beq         $t7, $zero, L_151C1C9C
    if (ctx->r15 == 0) {
        // 0x151C1C90: nop
    
            goto L_151C1C9C;
    }
    // 0x151C1C90: nop

    // 0x151C1C94: b           L_151C1C9C
    // 0x151C1C98: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_151C1C9C;
    // 0x151C1C98: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_151C1C9C:
    // 0x151C1C9C: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x151C1CA0: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x151C1CA4: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x151C1CA8: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x151C1CAC: sw          $t6, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r14;
    // 0x151C1CB0: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x151C1CB4: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x151C1CB8: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151C1CBC: lwc1        $f18, 0x2C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151C1CC0: lwc1        $f16, 0x3C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151C1CC4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151C1CC8: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151C1CCC: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151C1CD0: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x151C1CD4: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151C1CD8: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151C1CDC: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x151C1CE0: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151C1CE4: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x151C1CE8: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151C1CEC: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x151C1CF0: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x151C1CF4: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151C1CF8: sw          $at, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r1;
    // 0x151C1CFC: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x151C1D00: sw          $t0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r8;
    // 0x151C1D04: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151C1D08: sw          $at, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r1;
    // 0x151C1D0C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151C1D10: sw          $at, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r1;
    // 0x151C1D14: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x151C1D18: sw          $t2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r10;
    // 0x151C1D1C: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151C1D20: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x151C1D24: sb          $zero, 0x58($s0)
    MEM_B(0X58, ctx->r16) = 0;
    // 0x151C1D28: sb          $zero, 0x59($s0)
    MEM_B(0X59, ctx->r16) = 0;
    // 0x151C1D2C: sb          $zero, 0x5A($s0)
    MEM_B(0X5A, ctx->r16) = 0;
    // 0x151C1D30: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    // 0x151C1D34: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x151C1D38: sw          $at, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r1;
    // 0x151C1D3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151C1D40:
    // 0x151C1D40: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x151C1D44: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x151C1D48: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x151C1D4C: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x151C1D50: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x151C1D54: jr          $ra
    // 0x151C1D58: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    return;
    // 0x151C1D58: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_15086BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15086BD0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x15086BD4: beql        $a0, $v0, L_15086BE8
    if (ctx->r4 == ctx->r2) {
        // 0x15086BD8: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_15086BE8;
    }
    goto skip_0;
    // 0x15086BD8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x15086BDC: bne         $a1, $v0, L_15086BF0
    if (ctx->r5 != ctx->r2) {
        // 0x15086BE0: nop
    
            goto L_15086BF0;
    }
    // 0x15086BE0: nop

    // 0x15086BE4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_15086BE8:
    // 0x15086BE8: jr          $ra
    // 0x15086BEC: nop

    return;
    return;
    // 0x15086BEC: nop

L_15086BF0:
    // 0x15086BF0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15086BF4: lw          $v0, 0x2350($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2350);
    // 0x15086BF8: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x15086BFC: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x15086C00: addu        $a2, $v0, $t7
    ctx->r6 = ADD32(ctx->r2, ctx->r15);
    // 0x15086C04: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x15086C08: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x15086C0C: lh          $t9, 0x0($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X0);
    // 0x15086C10: lh          $t1, 0x2($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X2);
    // 0x15086C14: lh          $t2, 0x2($a2)
    ctx->r10 = MEM_H(ctx->r6, 0X2);
    // 0x15086C18: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x15086C1C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x15086C20: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x15086C24: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x15086C28: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15086C2C: lh          $t4, 0x4($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X4);
    // 0x15086C30: lh          $t5, 0x4($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X4);
    // 0x15086C34: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15086C38: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x15086C3C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x15086C40: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15086C44: nop

    // 0x15086C48: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15086C4C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15086C50: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15086C54: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15086C58: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15086C5C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15086C60: jr          $ra
    // 0x15086C64: nop

    return;
    return;
    // 0x15086C64: nop

    // 0x15086C68: jr          $ra
    // 0x15086C6C: nop

    return;
    return;
    // 0x15086C6C: nop

;}
RECOMP_FUNC void func_1506E6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E6FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506E700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506E704: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506E708: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506E70C: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1506E710: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506E714: jal         0x1506E46C
    // 0x1506E718: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1506E718: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x1506E71C: beq         $v0, $zero, L_1506E72C
    if (ctx->r2 == 0) {
        // 0x1506E720: addiu       $a0, $zero, 0x2BC
        ctx->r4 = ADD32(0, 0X2BC);
            goto L_1506E72C;
    }
    // 0x1506E720: addiu       $a0, $zero, 0x2BC
    ctx->r4 = ADD32(0, 0X2BC);
    // 0x1506E724: jal         0x1506BA4C
    // 0x1506E728: addiu       $a1, $zero, 0xFA0
    ctx->r5 = ADD32(0, 0XFA0);
    func_1506BA4C(rdram, ctx);
        goto after_1;
    // 0x1506E728: addiu       $a1, $zero, 0xFA0
    ctx->r5 = ADD32(0, 0XFA0);
    after_1:
L_1506E72C:
    // 0x1506E72C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506E730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506E734: jr          $ra
    // 0x1506E738: nop

    return;
    return;
    // 0x1506E738: nop

;}
RECOMP_FUNC void func_151D7538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D7538: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151D753C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151D7540: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151D7544: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151D7548: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x151D754C: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x151D7550: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x151D7554: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x151D7558: bne         $t6, $at, L_151D75A0
    if (ctx->r14 != ctx->r1) {
        // 0x151D755C: addiu       $a2, $t3, 0x40
        ctx->r6 = ADD32(ctx->r11, 0X40);
            goto L_151D75A0;
    }
    // 0x151D755C: addiu       $a2, $t3, 0x40
    ctx->r6 = ADD32(ctx->r11, 0X40);
    // 0x151D7560: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x151D7564: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x151D7568: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x151D756C: lw          $t7, 0x40($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X40);
    // 0x151D7570: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x151D7574: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x151D7578: beq         $t7, $t9, L_151D7590
    if (ctx->r15 == ctx->r25) {
        // 0x151D757C: nop
    
            goto L_151D7590;
    }
    // 0x151D757C: nop

    // 0x151D7580: lbu         $t0, 0x4($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X4);
    // 0x151D7584: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x151D7588: bnel        $t0, $t2, L_151D75B8
    if (ctx->r8 != ctx->r10) {
        // 0x151D758C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151D75B8;
    }
    goto skip_0;
    // 0x151D758C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_151D7590:
    // 0x151D7590: jal         0x1516972C
    // 0x151D7594: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151D7594: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x151D7598: b           L_151D75B8
    // 0x151D759C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151D75B8;
    // 0x151D759C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151D75A0:
    // 0x151D75A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x151D75A4: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x151D75A8: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    // 0x151D75AC: jal         0x15149514
    // 0x151D75B0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_15149514(rdram, ctx);
        goto after_1;
    // 0x151D75B0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_1:
    // 0x151D75B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151D75B8:
    // 0x151D75B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151D75BC: jr          $ra
    // 0x151D75C0: nop

    return;
    return;
    // 0x151D75C0: nop

;}
RECOMP_FUNC void func_151AE7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AE7B0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151AE7B4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x151AE7B8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151AE7BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AE7C0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x151AE7C4: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x151AE7C8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x151AE7CC: bne         $a1, $zero, L_151AE7DC
    if (ctx->r5 != 0) {
        // 0x151AE7D0: addiu       $a0, $zero, 0x28
        ctx->r4 = ADD32(0, 0X28);
            goto L_151AE7DC;
    }
    // 0x151AE7D0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x151AE7D4: b           L_151AE880
    // 0x151AE7D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151AE880;
    // 0x151AE7D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151AE7DC:
    // 0x151AE7DC: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x151AE7E0: jal         0x1516962C
    // 0x151AE7E4: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    func_1516962C(rdram, ctx);
        goto after_0;
    // 0x151AE7E4: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    after_0:
    // 0x151AE7E8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x151AE7EC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151AE7F0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151AE7F4: lbu         $t6, 0x3B($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X3B);
    // 0x151AE7F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151AE7FC: lh          $v0, 0x5A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X5A);
    // 0x151AE800: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AE804: lwc1        $f4, -0x6280($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6280);
    // 0x151AE808: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x151AE80C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151AE810: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x151AE814: sb          $t7, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r15;
    // 0x151AE818: sb          $t8, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r24;
    // 0x151AE81C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x151AE820: sb          $t6, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r14;
    // 0x151AE824: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x151AE828: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x151AE82C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x151AE830: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x151AE834: beq         $v0, $zero, L_151AE84C
    if (ctx->r2 == 0) {
        // 0x151AE838: swc1        $f6, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
            goto L_151AE84C;
    }
    // 0x151AE838: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x151AE83C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x151AE840: sh          $v0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r2;
    // 0x151AE844: b           L_151AE854
    // 0x151AE848: sb          $t9, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r25;
        goto L_151AE854;
    // 0x151AE848: sb          $t9, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r25;
L_151AE84C:
    // 0x151AE84C: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x151AE850: sh          $t0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r8;
L_151AE854:
    // 0x151AE854: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x151AE858: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151AE85C: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x151AE860: sb          $t1, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r9;
    // 0x151AE864: sb          $t2, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r10;
    // 0x151AE868: sb          $t3, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r11;
    // 0x151AE86C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151AE870: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151AE874: lbu         $a2, 0x5F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5F);
    // 0x151AE878: jal         0x1513418C
    // 0x151AE87C: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    func_1513418C(rdram, ctx);
        goto after_1;
    // 0x151AE87C: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    after_1:
L_151AE880:
    // 0x151AE880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AE884: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151AE888: jr          $ra
    // 0x151AE88C: nop

    return;
    return;
    // 0x151AE88C: nop

;}
RECOMP_FUNC void func_150C7D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C7D7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C7D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C7D84: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150C7D88: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x150C7D8C: jal         0x15083E90
    // 0x150C7D90: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_15083E90(rdram, ctx);
        goto after_0;
    // 0x150C7D90: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x150C7D94: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150C7D98: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150C7D9C: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150C7DA0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x150C7DA4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150C7DA8: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x150C7DAC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C7DB0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150C7DB4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x150C7DB8: nop

    // 0x150C7DBC: sh          $t7, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r15;
    // 0x150C7DC0: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150C7DC4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150C7DC8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150C7DCC: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x150C7DD0: nop

    // 0x150C7DD4: sh          $t9, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r25;
    // 0x150C7DD8: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150C7DDC: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x150C7DE0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150C7DE4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x150C7DE8: nop

    // 0x150C7DEC: sh          $t1, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r9;
    // 0x150C7DF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C7DF4: jr          $ra
    // 0x150C7DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x150C7DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151E5FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E5FAC: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151E5FB0: lb          $t6, 0xBEB($t6)
    ctx->r14 = MEM_B(ctx->r14, 0XBEB);
    // 0x151E5FB4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151E5FB8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E5FBC: beq         $t6, $zero, L_151E5FE8
    if (ctx->r14 == 0) {
        // 0x151E5FC0: nop
    
            goto L_151E5FE8;
    }
    // 0x151E5FC0: nop

    // 0x151E5FC4: lb          $v1, -0x274($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X274);
    // 0x151E5FC8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E5FCC: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x151E5FD0: bne         $at, $zero, L_151E5FE0
    if (ctx->r1 != 0) {
        // 0x151E5FD4: nop
    
            goto L_151E5FE0;
    }
    // 0x151E5FD4: nop

    // 0x151E5FD8: jr          $ra
    // 0x151E5FDC: lb          $v0, -0x270($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X270);
    return;
    return;
    // 0x151E5FDC: lb          $v0, -0x270($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X270);
L_151E5FE0:
    // 0x151E5FE0: jr          $ra
    // 0x151E5FE4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x151E5FE4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151E5FE8:
    // 0x151E5FE8: lb          $v0, -0x270($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X270);
    // 0x151E5FEC: jr          $ra
    // 0x151E5FF0: nop

    return;
    return;
    // 0x151E5FF0: nop

;}
RECOMP_FUNC void func_150045C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150045C4: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x150045C8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x150045CC: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x150045D0: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x150045D4: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x150045D8: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x150045DC: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x150045E0: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x150045E4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x150045E8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x150045EC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150045F0: sw          $a0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r4;
    // 0x150045F4: jal         0x15004A4C
    // 0x150045F8: nop

    func_15004A4C(rdram, ctx);
        goto after_0;
    // 0x150045F8: nop

    after_0:
    // 0x150045FC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15004600: jal         0x150A7BC0
    // 0x15004604: addiu       $a0, $a0, -0x40F8
    ctx->r4 = ADD32(ctx->r4, -0X40F8);
    guMtxIdentF(rdram, ctx);
        goto after_1;
    // 0x15004604: addiu       $a0, $a0, -0x40F8
    ctx->r4 = ADD32(ctx->r4, -0X40F8);
    after_1:
    // 0x15004608: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1500460C: jal         0x150A7BC0
    // 0x15004610: addiu       $a0, $a0, -0x40B8
    ctx->r4 = ADD32(ctx->r4, -0X40B8);
    guMtxIdentF(rdram, ctx);
        goto after_2;
    // 0x15004610: addiu       $a0, $a0, -0x40B8
    ctx->r4 = ADD32(ctx->r4, -0X40B8);
    after_2:
    // 0x15004614: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15004618: lw          $v1, -0x4110($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4110);
    // 0x1500461C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x15004620: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x15004624: blez        $v1, L_15004884
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15004628: lui         $t6, 0x1511
        ctx->r14 = S32(0X1511 << 16);
            goto L_15004884;
    }
    // 0x15004628: lui         $t6, 0x1511
    ctx->r14 = S32(0X1511 << 16);
    // 0x1500462C: addiu       $t6, $t6, 0x50B0
    ctx->r14 = ADD32(ctx->r14, 0X50B0);
    // 0x15004630: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x15004634: addiu       $s6, $sp, 0x7C
    ctx->r22 = ADD32(ctx->r29, 0X7C);
    // 0x15004638: addiu       $s5, $sp, 0x80
    ctx->r21 = ADD32(ctx->r29, 0X80);
    // 0x1500463C: addiu       $s4, $sp, 0x84
    ctx->r20 = ADD32(ctx->r29, 0X84);
    // 0x15004640: addiu       $s3, $sp, 0x98
    ctx->r19 = ADD32(ctx->r29, 0X98);
L_15004644:
    // 0x15004644: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15004648: lw          $t7, -0x410C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X410C);
    // 0x1500464C: lui         $t8, 0x1511
    ctx->r24 = S32(0X1511 << 16);
    // 0x15004650: addiu       $t8, $t8, 0x6058
    ctx->r24 = ADD32(ctx->r24, 0X6058);
    // 0x15004654: addu        $s2, $fp, $t7
    ctx->r18 = ADD32(ctx->r30, ctx->r15);
    // 0x15004658: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
    // 0x1500465C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x15004660: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15004664: beql        $v0, $zero, L_15004684
    if (ctx->r2 == 0) {
        // 0x15004668: sb          $t0, 0x4E($s2)
        MEM_B(0X4E, ctx->r18) = ctx->r8;
            goto L_15004684;
    }
    goto skip_0;
    // 0x15004668: sb          $t0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r8;
    skip_0:
    // 0x1500466C: beq         $t8, $v0, L_15004680
    if (ctx->r24 == ctx->r2) {
        // 0x15004670: lui         $t9, 0x1511
        ctx->r25 = S32(0X1511 << 16);
            goto L_15004680;
    }
    // 0x15004670: lui         $t9, 0x1511
    ctx->r25 = S32(0X1511 << 16);
    // 0x15004674: addiu       $t9, $t9, 0x6110
    ctx->r25 = ADD32(ctx->r25, 0X6110);
    // 0x15004678: bnel        $t9, $v0, L_15004688
    if (ctx->r25 != ctx->r2) {
        // 0x1500467C: lbu         $t1, 0x70($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X70);
            goto L_15004688;
    }
    goto skip_1;
    // 0x1500467C: lbu         $t1, 0x70($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X70);
    skip_1:
L_15004680:
    // 0x15004680: sb          $t0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r8;
L_15004684:
    // 0x15004684: lbu         $t1, 0x70($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X70);
L_15004688:
    // 0x15004688: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x1500468C: bnel        $t2, $zero, L_15004710
    if (ctx->r10 != 0) {
        // 0x15004690: lw          $t5, 0x6C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X6C);
            goto L_15004710;
    }
    goto skip_2;
    // 0x15004690: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    skip_2:
    // 0x15004694: jal         0x1511490C
    // 0x15004698: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_1511490C(rdram, ctx);
        goto after_3;
    // 0x15004698: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x1500469C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x150046A0: lbu         $t3, -0x1640($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1640);
    // 0x150046A4: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x150046A8: sll         $s0, $s7, 6
    ctx->r16 = S32(ctx->r23 << 6);
    // 0x150046AC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x150046B0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x150046B4: lw          $t5, -0x6DB0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X6DB0);
    // 0x150046B8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150046BC: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x150046C0: jal         0x150A7790
    // 0x150046C4: addu        $a1, $t6, $s0
    ctx->r5 = ADD32(ctx->r14, ctx->r16);
    guMtxF2L(rdram, ctx);
        goto after_4;
    // 0x150046C4: addu        $a1, $t6, $s0
    ctx->r5 = ADD32(ctx->r14, ctx->r16);
    after_4:
    // 0x150046C8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150046CC: lbu         $v0, -0x1640($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1640);
    // 0x150046D0: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x150046D4: addiu       $a3, $a3, -0x6DB0
    ctx->r7 = ADD32(ctx->r7, -0X6DB0);
    // 0x150046D8: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x150046DC: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x150046E0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x150046E4: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x150046E8: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x150046EC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x150046F0: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x150046F4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x150046F8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x150046FC: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x15004700: addu        $a1, $t4, $s0
    ctx->r5 = ADD32(ctx->r12, ctx->r16);
    // 0x15004704: jal         0x10023A10
    // 0x15004708: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    bcopy_recomp(rdram, ctx);
        goto after_5;
    // 0x15004708: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    after_5:
    // 0x1500470C: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
L_15004710:
    // 0x15004710: lw          $t6, 0x38($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X38);
    // 0x15004714: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15004718: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x1500471C: bnel        $t5, $t6, L_1500472C
    if (ctx->r13 != ctx->r14) {
        // 0x15004720: lbu         $t7, 0x70($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X70);
            goto L_1500472C;
    }
    goto skip_3;
    // 0x15004720: lbu         $t7, 0x70($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X70);
    skip_3:
    // 0x15004724: sw          $zero, 0x38($s2)
    MEM_W(0X38, ctx->r18) = 0;
    // 0x15004728: lbu         $t7, 0x70($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X70);
L_1500472C:
    // 0x1500472C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15004730: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x15004734: bne         $t8, $at, L_15004820
    if (ctx->r24 != ctx->r1) {
        // 0x15004738: nop
    
            goto L_15004820;
    }
    // 0x15004738: nop

    // 0x1500473C: jal         0x1511490C
    // 0x15004740: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_1511490C(rdram, ctx);
        goto after_6;
    // 0x15004740: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_6:
    // 0x15004744: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x15004748: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1500474C: blezl       $v0, L_15004814
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15004750: lw          $a0, 0x20($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X20);
            goto L_15004814;
    }
    goto skip_4;
    // 0x15004750: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    skip_4:
    // 0x15004754: lw          $t9, 0x28($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X28);
L_15004758:
    // 0x15004758: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1500475C: addu        $v0, $t9, $s0
    ctx->r2 = ADD32(ctx->r25, ctx->r16);
    // 0x15004760: lh          $t0, 0x0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X0);
    // 0x15004764: lh          $t1, 0x2($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2);
    // 0x15004768: lh          $t2, 0x4($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X4);
    // 0x1500476C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x15004770: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x15004774: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x15004778: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500477C: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x15004780: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x15004784: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x15004788: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500478C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x15004790: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15004794: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15004798: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x1500479C: jal         0x150A7960
    // 0x150047A0: nop

    func_150A7960(rdram, ctx);
        goto after_7;
    // 0x150047A0: nop

    after_7:
    // 0x150047A4: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x150047A8: lw          $t5, 0x20($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X20);
    // 0x150047AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x150047B0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150047B4: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x150047B8: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x150047BC: nop

    // 0x150047C0: sh          $t4, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r12;
    // 0x150047C4: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150047C8: lw          $t9, 0x20($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X20);
    // 0x150047CC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150047D0: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x150047D4: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x150047D8: nop

    // 0x150047DC: sh          $t8, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r24;
    // 0x150047E0: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150047E4: lw          $t3, 0x20($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X20);
    // 0x150047E8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150047EC: addu        $t5, $t3, $s0
    ctx->r13 = ADD32(ctx->r11, ctx->r16);
    // 0x150047F0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x150047F4: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x150047F8: nop

    // 0x150047FC: sh          $t2, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r10;
    // 0x15004800: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x15004804: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15004808: bnel        $at, $zero, L_15004758
    if (ctx->r1 != 0) {
        // 0x1500480C: lw          $t9, 0x28($s2)
        ctx->r25 = MEM_W(ctx->r18, 0X28);
            goto L_15004758;
    }
    goto skip_5;
    // 0x1500480C: lw          $t9, 0x28($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X28);
    skip_5:
    // 0x15004810: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
L_15004814:
    // 0x15004814: lw          $a1, 0x24($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X24);
    // 0x15004818: jal         0x10023A10
    // 0x1500481C: sll         $a2, $v0, 4
    ctx->r6 = S32(ctx->r2 << 4);
    bcopy_recomp(rdram, ctx);
        goto after_8;
    // 0x1500481C: sll         $a2, $v0, 4
    ctx->r6 = S32(ctx->r2 << 4);
    after_8:
L_15004820:
    // 0x15004820: jal         0x1510F800
    // 0x15004824: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_1510F800(rdram, ctx);
        goto after_9;
    // 0x15004824: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_9:
    // 0x15004828: lbu         $t4, 0x6F($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X6F);
    // 0x1500482C: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x15004830: andi        $t6, $t4, 0x80
    ctx->r14 = ctx->r12 & 0X80;
    // 0x15004834: bne         $t6, $at, L_15004864
    if (ctx->r14 != ctx->r1) {
        // 0x15004838: nop
    
            goto L_15004864;
    }
    // 0x15004838: nop

    // 0x1500483C: lbu         $t7, 0x4F($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X4F);
    // 0x15004840: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x15004844: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15004848: andi        $t9, $t7, 0x60
    ctx->r25 = ctx->r15 & 0X60;
    // 0x1500484C: beq         $t9, $at, L_15004864
    if (ctx->r25 == ctx->r1) {
        // 0x15004850: addiu       $a1, $a1, 0x37E0
        ctx->r5 = ADD32(ctx->r5, 0X37E0);
            goto L_15004864;
    }
    // 0x15004850: addiu       $a1, $a1, 0x37E0
    ctx->r5 = ADD32(ctx->r5, 0X37E0);
    // 0x15004854: sh          $s7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r23;
    // 0x15004858: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1500485C: jal         0x150A44F0
    // 0x15004860: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150A44F0(rdram, ctx);
        goto after_10;
    // 0x15004860: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
L_15004864:
    // 0x15004864: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15004868: lw          $v1, -0x4110($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4110);
    // 0x1500486C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x15004870: addiu       $fp, $fp, 0xA0
    ctx->r30 = ADD32(ctx->r30, 0XA0);
    // 0x15004874: slt         $at, $s7, $v1
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15004878: bne         $at, $zero, L_15004644
    if (ctx->r1 != 0) {
        // 0x1500487C: nop
    
            goto L_15004644;
    }
    // 0x1500487C: nop

    // 0x15004880: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_15004884:
    // 0x15004884: blez        $v1, L_15004974
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15004888: or          $fp, $zero, $zero
        ctx->r30 = 0 | 0;
            goto L_15004974;
    }
    // 0x15004888: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x1500488C: addiu       $s3, $sp, 0x90
    ctx->r19 = ADD32(ctx->r29, 0X90);
    // 0x15004890: addiu       $s1, $sp, 0x8C
    ctx->r17 = ADD32(ctx->r29, 0X8C);
    // 0x15004894: addiu       $s0, $sp, 0x88
    ctx->r16 = ADD32(ctx->r29, 0X88);
L_15004898:
    // 0x15004898: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1500489C: lw          $t8, -0x410C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X410C);
    // 0x150048A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150048A4: addu        $s2, $fp, $t8
    ctx->r18 = ADD32(ctx->r30, ctx->r24);
    // 0x150048A8: lbu         $t0, 0x6E($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X6E);
    // 0x150048AC: bnel        $t0, $at, L_150048C0
    if (ctx->r8 != ctx->r1) {
        // 0x150048B0: lbu         $t1, 0x6F($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X6F);
            goto L_150048C0;
    }
    goto skip_6;
    // 0x150048B0: lbu         $t1, 0x6F($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6F);
    skip_6:
    // 0x150048B4: b           L_15004964
    // 0x150048B8: addiu       $v0, $s7, 0x1
    ctx->r2 = ADD32(ctx->r23, 0X1);
        goto L_15004964;
    // 0x150048B8: addiu       $v0, $s7, 0x1
    ctx->r2 = ADD32(ctx->r23, 0X1);
    // 0x150048BC: lbu         $t1, 0x6F($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X6F);
L_150048C0:
    // 0x150048C0: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x150048C4: andi        $t3, $t1, 0x20
    ctx->r11 = ctx->r9 & 0X20;
    // 0x150048C8: bnel        $t3, $at, L_15004964
    if (ctx->r11 != ctx->r1) {
        // 0x150048CC: addiu       $v0, $s7, 0x1
        ctx->r2 = ADD32(ctx->r23, 0X1);
            goto L_15004964;
    }
    goto skip_7;
    // 0x150048CC: addiu       $v0, $s7, 0x1
    ctx->r2 = ADD32(ctx->r23, 0X1);
    skip_7:
    // 0x150048D0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x150048D4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150048D8: lh          $t2, 0x10($s2)
    ctx->r10 = MEM_H(ctx->r18, 0X10);
    // 0x150048DC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150048E0: lwc1        $f8, 0x59D0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X59D0);
    // 0x150048E4: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x150048E8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150048EC: addiu       $t6, $s7, 0x1
    ctx->r14 = ADD32(ctx->r23, 0X1);
    // 0x150048F0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150048F4: lwc1        $f10, 0x59D4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X59D4);
    // 0x150048F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150048FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15004900: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x15004904: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15004908: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x1500490C: lh          $t5, 0x12($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X12);
    // 0x15004910: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x15004914: nop

    // 0x15004918: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1500491C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x15004920: lh          $t4, 0x14($s2)
    ctx->r12 = MEM_H(ctx->r18, 0X14);
    // 0x15004924: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15004928: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x1500492C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x15004930: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x15004934: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x15004938: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500493C: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x15004940: jal         0x1510E7A4
    // 0x15004944: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    func_1510E7A4(rdram, ctx);
        goto after_11;
    // 0x15004944: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x15004948: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x1500494C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15004950: sw          $t7, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r15;
    // 0x15004954: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x15004958: swc1        $f16, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->f16.u32l;
    // 0x1500495C: lw          $v1, -0x4110($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4110);
    // 0x15004960: addiu       $v0, $s7, 0x1
    ctx->r2 = ADD32(ctx->r23, 0X1);
L_15004964:
    // 0x15004964: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15004968: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x1500496C: bne         $at, $zero, L_15004898
    if (ctx->r1 != 0) {
        // 0x15004970: addiu       $fp, $fp, 0xA0
        ctx->r30 = ADD32(ctx->r30, 0XA0);
            goto L_15004898;
    }
    // 0x15004970: addiu       $fp, $fp, 0xA0
    ctx->r30 = ADD32(ctx->r30, 0XA0);
L_15004974:
    // 0x15004974: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x15004978: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x1500497C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x15004980: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x15004984: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x15004988: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x1500498C: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x15004990: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x15004994: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x15004998: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x1500499C: jr          $ra
    // 0x150049A0: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    return;
    // 0x150049A0: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_1507DB44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507DB44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507DB48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507DB4C: jal         0x1503DE70
    // 0x1507DB50: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_1503DE70(rdram, ctx);
        goto after_0;
    // 0x1507DB50: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_0:
    // 0x1507DB54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507DB58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507DB5C: jr          $ra
    // 0x1507DB60: nop

    return;
    return;
    // 0x1507DB60: nop

;}
RECOMP_FUNC void func_15122440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15122440: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x15122444: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15122448: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1512244C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15122450: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15122454: addiu       $t7, $t7, -0x6B38
    ctx->r15 = ADD32(ctx->r15, -0X6B38);
    // 0x15122458: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x1512245C: addiu       $t6, $sp, 0x6C
    ctx->r14 = ADD32(ctx->r29, 0X6C);
    // 0x15122460: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x15122464: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x15122468: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x1512246C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x15122470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15122474: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x15122478: lw          $t1, 0x3D0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3D0);
    // 0x1512247C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x15122480: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15122484: lwc1        $f4, 0x40($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X40);
    // 0x15122488: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512248C: lwc1        $f10, 0x3480($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3480);
    // 0x15122490: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15122494: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15122498: jal         0x1512A390
    // 0x1512249C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    func_1512A390(rdram, ctx);
        goto after_0;
    // 0x1512249C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151224A0: lw          $t2, 0x5F0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5F0);
    // 0x151224A4: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x151224A8: bne         $t3, $zero, L_151224D4
    if (ctx->r11 != 0) {
        // 0x151224AC: nop
    
            goto L_151224D4;
    }
    // 0x151224AC: nop

    // 0x151224B0: lw          $t4, 0x3D0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X3D0);
    // 0x151224B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151224B8: lbu         $t5, 0x102($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X102);
    // 0x151224BC: bne         $t5, $zero, L_151224D4
    if (ctx->r13 != 0) {
        // 0x151224C0: nop
    
            goto L_151224D4;
    }
    // 0x151224C0: nop

    // 0x151224C4: lwc1        $f6, 0x39C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X39C);
    // 0x151224C8: lwc1        $f8, 0x3484($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3484);
    // 0x151224CC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151224D0: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
L_151224D4:
    // 0x151224D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151224D8: lwc1        $f4, 0x3488($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3488);
    // 0x151224DC: lwc1        $f0, 0x86C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X86C);
    // 0x151224E0: lw          $v0, 0x3D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3D0);
    // 0x151224E4: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x151224E8: lbu         $v1, 0x102($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X102);
    // 0x151224EC: bc1tl       L_15122500
    if (c1cs) {
        // 0x151224F0: lbu         $t9, 0x1CA($v0)
        ctx->r25 = MEM_BU(ctx->r2, 0X1CA);
            goto L_15122500;
    }
    goto skip_0;
    // 0x151224F0: lbu         $t9, 0x1CA($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1CA);
    skip_0:
    // 0x151224F4: b           L_15122538
    // 0x151224F8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_15122538;
    // 0x151224F8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x151224FC: lbu         $t9, 0x1CA($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1CA);
L_15122500:
    // 0x15122500: bne         $t9, $zero, L_15122514
    if (ctx->r25 != 0) {
        // 0x15122504: nop
    
            goto L_15122514;
    }
    // 0x15122504: nop

    // 0x15122508: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1512250C: b           L_15122538
    // 0x15122510: nop

        goto L_15122538;
    // 0x15122510: nop

L_15122514:
    // 0x15122514: beq         $v1, $zero, L_15122528
    if (ctx->r3 == 0) {
        // 0x15122518: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_15122528;
    }
    // 0x15122518: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1512251C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15122520: b           L_15122534
    // 0x15122524: lwc1        $f6, 0xB8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XB8);
        goto L_15122534;
    // 0x15122524: lwc1        $f6, 0xB8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XB8);
L_15122528:
    // 0x15122528: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x1512252C: nop

    // 0x15122530: lwc1        $f6, 0xB8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XB8);
L_15122534:
    // 0x15122534: add.s       $f12, $f2, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f6.fl;
L_15122538:
    // 0x15122538: beq         $v1, $zero, L_15122554
    if (ctx->r3 == 0) {
        // 0x1512253C: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_15122554;
    }
    // 0x1512253C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x15122540: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15122544: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15122548: nop

    // 0x1512254C: mul.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x15122550: nop

L_15122554:
    // 0x15122554: lui         $at, 0xC2B0
    ctx->r1 = S32(0XC2B0 << 16);
    // 0x15122558: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1512255C: addiu       $v0, $v0, -0x6B40
    ctx->r2 = ADD32(ctx->r2, -0X6B40);
    // 0x15122560: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x15122564: nop

    // 0x15122568: bc1fl       L_1512257C
    if (!c1cs) {
        // 0x1512256C: lui         $at, 0x42B0
        ctx->r1 = S32(0X42B0 << 16);
            goto L_1512257C;
    }
    goto skip_1;
    // 0x1512256C: lui         $at, 0x42B0
    ctx->r1 = S32(0X42B0 << 16);
    skip_1:
    // 0x15122570: b           L_151225A4
    // 0x15122574: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_151225A4;
    // 0x15122574: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x15122578: lui         $at, 0x42B0
    ctx->r1 = S32(0X42B0 << 16);
L_1512257C:
    // 0x1512257C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15122580: nop

    // 0x15122584: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x15122588: nop

    // 0x1512258C: bc1fl       L_151225A0
    if (!c1cs) {
        // 0x15122590: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_151225A0;
    }
    goto skip_2;
    // 0x15122590: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    skip_2:
    // 0x15122594: b           L_151225A0
    // 0x15122598: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_151225A0;
    // 0x15122598: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1512259C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_151225A0:
    // 0x151225A0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_151225A4:
    // 0x151225A4: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151225A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151225AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151225B0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x151225B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151225B8: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x151225BC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x151225C0: nop

    // 0x151225C4: bc1fl       L_151225D8
    if (!c1cs) {
        // 0x151225C8: swc1        $f12, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
            goto L_151225D8;
    }
    goto skip_3;
    // 0x151225C8: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    skip_3:
    // 0x151225CC: b           L_151225D8
    // 0x151225D0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_151225D8;
    // 0x151225D0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x151225D4: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
L_151225D8:
    // 0x151225D8: lwc1        $f4, 0x348C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X348C);
    // 0x151225DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151225E0: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x151225E4: jal         0x15123070
    // 0x151225E8: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    func_15123070(rdram, ctx);
        goto after_1;
    // 0x151225E8: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x151225EC: lw          $t8, 0x36C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X36C);
    // 0x151225F0: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x151225F4: lhu         $t6, 0x0($t8)
    ctx->r14 = MEM_HU(ctx->r24, 0X0);
    // 0x151225F8: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x151225FC: beq         $t7, $zero, L_15122610
    if (ctx->r15 == 0) {
        // 0x15122600: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_15122610;
    }
    // 0x15122600: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x15122604: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15122608: b           L_15122618
    // 0x1512260C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
        goto L_15122618;
    // 0x1512260C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
L_15122610:
    // 0x15122610: lwc1        $f8, 0x374($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X374);
    // 0x15122614: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
L_15122618:
    // 0x15122618: lw          $t0, 0x3D0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X3D0);
    // 0x1512261C: lbu         $t1, 0x102($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X102);
    // 0x15122620: beq         $t1, $zero, L_15122650
    if (ctx->r9 == 0) {
        // 0x15122624: nop
    
            goto L_15122650;
    }
    // 0x15122624: nop

    // 0x15122628: lbu         $t2, 0x3E8($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3E8);
    // 0x1512262C: bne         $t2, $zero, L_15122650
    if (ctx->r10 != 0) {
        // 0x15122630: nop
    
            goto L_15122650;
    }
    // 0x15122630: nop

    // 0x15122634: lwc1        $f0, 0x370($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X370);
    // 0x15122638: lwc1        $f10, 0x374($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X374);
    // 0x1512263C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x15122640: nop

    // 0x15122644: bc1f        L_15122650
    if (!c1cs) {
        // 0x15122648: nop
    
            goto L_15122650;
    }
    // 0x15122648: nop

    // 0x1512264C: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
L_15122650:
    // 0x15122650: jal         0x15047C00
    // 0x15122654: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x15122654: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x15122658: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1512265C: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15122660: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15122664: jal         0x15047D60
    // 0x15122668: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x15122668: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x1512266C: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15122670: mul.s       $f12, $f0, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x15122674: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15122678: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x1512267C: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x15122680: jal         0x15047D60
    // 0x15122684: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x15122684: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    after_4:
    // 0x15122688: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x1512268C: jal         0x15047C00
    // 0x15122690: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x15122690: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    after_5:
    // 0x15122694: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15122698: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x1512269C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151226A0: swc1        $f8, 0x3DC($s0)
    MEM_W(0X3DC, ctx->r16) = ctx->f8.u32l;
    // 0x151226A4: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x151226A8: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151226AC: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x151226B0: neg.s       $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = -ctx->f14.fl;
    // 0x151226B4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x151226B8: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x151226BC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x151226C0: addiu       $a0, $s0, 0x2F8
    ctx->r4 = ADD32(ctx->r16, 0X2F8);
    // 0x151226C4: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x151226C8: addiu       $a2, $s0, 0x3C0
    ctx->r6 = ADD32(ctx->r16, 0X3C0);
    // 0x151226CC: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x151226D0: bc1f        L_151226E0
    if (!c1cs) {
        // 0x151226D4: swc1        $f14, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
            goto L_151226E0;
    }
    // 0x151226D4: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x151226D8: b           L_15122708
    // 0x151226DC: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
        goto L_15122708;
    // 0x151226DC: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
L_151226E0:
    // 0x151226E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151226E4: nop

    // 0x151226E8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x151226EC: nop

    // 0x151226F0: bc1fl       L_15122704
    if (!c1cs) {
        // 0x151226F4: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_15122704;
    }
    goto skip_4;
    // 0x151226F4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    skip_4:
    // 0x151226F8: b           L_15122704
    // 0x151226FC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_15122704;
    // 0x151226FC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x15122700: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_15122704:
    // 0x15122704: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
L_15122708:
    // 0x15122708: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1512270C: lwc1        $f10, 0x2BC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2BC);
    // 0x15122710: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x15122714: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15122718: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1512271C: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x15122720: lwc1        $f8, 0x2C0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C0);
    // 0x15122724: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15122728: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1512272C: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x15122730: lwc1        $f8, 0x2C4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C4);
    // 0x15122734: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15122738: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x1512273C: lbu         $t3, 0x23C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X23C);
    // 0x15122740: mov.s       $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = ctx->f4.fl;
    // 0x15122744: mov.s       $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = ctx->f10.fl;
    // 0x15122748: beq         $t3, $zero, L_15122770
    if (ctx->r11 == 0) {
        // 0x1512274C: mov.s       $f16, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = ctx->f6.fl;
            goto L_15122770;
    }
    // 0x1512274C: mov.s       $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = ctx->f6.fl;
    // 0x15122750: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15122754: swc1        $f12, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f12.u32l;
    // 0x15122758: swc1        $f14, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->f14.u32l;
    // 0x1512275C: swc1        $f16, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f16.u32l;
    // 0x15122760: swc1        $f0, 0x3C0($s0)
    MEM_W(0X3C0, ctx->r16) = ctx->f0.u32l;
    // 0x15122764: swc1        $f0, 0x3C4($s0)
    MEM_W(0X3C4, ctx->r16) = ctx->f0.u32l;
    // 0x15122768: b           L_15122820
    // 0x1512276C: swc1        $f0, 0x3C8($s0)
    MEM_W(0X3C8, ctx->r16) = ctx->f0.u32l;
        goto L_15122820;
    // 0x1512276C: swc1        $f0, 0x3C8($s0)
    MEM_W(0X3C8, ctx->r16) = ctx->f0.u32l;
L_15122770:
    // 0x15122770: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15122774: lw          $t4, 0x3D0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X3D0);
    // 0x15122778: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512277C: lwc1        $f8, 0x3490($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3490);
    // 0x15122780: lbu         $t5, 0x102($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X102);
    // 0x15122784: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15122788: lwc1        $f4, 0x3494($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3494);
    // 0x1512278C: add.s       $f0, $f18, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f18.fl;
    // 0x15122790: beq         $t5, $zero, L_151227A0
    if (ctx->r13 == 0) {
        // 0x15122794: add.s       $f2, $f8, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f4.fl;
            goto L_151227A0;
    }
    // 0x15122794: add.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x15122798: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x1512279C: add.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f2.fl;
L_151227A0:
    // 0x151227A0: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x151227A4: lwc1        $f10, 0x7B4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x151227A8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x151227AC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x151227B0: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x151227B4: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    // 0x151227B8: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x151227BC: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x151227C0: jal         0x150495B0
    // 0x151227C4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_150495B0(rdram, ctx);
        goto after_6;
    // 0x151227C4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x151227C8: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151227CC: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151227D0: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151227D4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x151227D8: lwc1        $f6, 0x7B4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x151227DC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x151227E0: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x151227E4: addiu       $a0, $s0, 0x2FC
    ctx->r4 = ADD32(ctx->r16, 0X2FC);
    // 0x151227E8: addiu       $a2, $s0, 0x3C4
    ctx->r6 = ADD32(ctx->r16, 0X3C4);
    // 0x151227EC: jal         0x150495B0
    // 0x151227F0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_150495B0(rdram, ctx);
        goto after_7;
    // 0x151227F0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x151227F4: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151227F8: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151227FC: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15122800: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x15122804: lwc1        $f8, 0x7B4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15122808: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1512280C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x15122810: addiu       $a0, $s0, 0x300
    ctx->r4 = ADD32(ctx->r16, 0X300);
    // 0x15122814: addiu       $a2, $s0, 0x3C8
    ctx->r6 = ADD32(ctx->r16, 0X3C8);
    // 0x15122818: jal         0x150495B0
    // 0x1512281C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_150495B0(rdram, ctx);
        goto after_8;
    // 0x1512281C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
L_15122820:
    // 0x15122820: lw          $t9, 0x3D0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X3D0);
    // 0x15122824: lbu         $t8, 0x102($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X102);
    // 0x15122828: bnel        $t8, $zero, L_151228EC
    if (ctx->r24 != 0) {
        // 0x1512282C: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_151228EC;
    }
    goto skip_5;
    // 0x1512282C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    skip_5:
    // 0x15122830: lhu         $t6, 0x36A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X36A);
    // 0x15122834: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x15122838: bnel        $t7, $zero, L_151228EC
    if (ctx->r15 != 0) {
        // 0x1512283C: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_151228EC;
    }
    goto skip_6;
    // 0x1512283C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    skip_6:
    // 0x15122840: lwc1        $f4, 0x2F8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x15122844: lwc1        $f10, 0x2BC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2BC);
    // 0x15122848: lwc1        $f6, 0x2FC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x1512284C: lwc1        $f8, 0x2C0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C0);
    // 0x15122850: sub.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x15122854: lwc1        $f10, 0x2C4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C4);
    // 0x15122858: lwc1        $f4, 0x300($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X300);
    // 0x1512285C: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15122860: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15122864: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x15122868: sub.s       $f14, $f4, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1512286C: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15122870: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15122874: addiu       $a0, $s0, 0x2BC
    ctx->r4 = ADD32(ctx->r16, 0X2BC);
    // 0x15122878: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1512287C: addiu       $a1, $s0, 0x2F8
    ctx->r5 = ADD32(ctx->r16, 0X2F8);
    // 0x15122880: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15122884: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15122888: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1512288C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x15122890: nop

    // 0x15122894: bc1fl       L_151228EC
    if (!c1cs) {
        // 0x15122898: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_151228EC;
    }
    goto skip_7;
    // 0x15122898: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    skip_7:
    // 0x1512289C: jal         0x150491EC
    // 0x151228A0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_150491EC(rdram, ctx);
        goto after_9;
    // 0x151228A0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_9:
    // 0x151228A4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x151228A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151228AC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x151228B0: lwc1        $f6, 0x2BC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2BC);
    // 0x151228B4: mul.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x151228B8: lwc1        $f8, 0x2C0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C0);
    // 0x151228BC: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151228C0: swc1        $f10, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f10.u32l;
    // 0x151228C4: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151228C8: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151228CC: lwc1        $f6, 0x2C4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C4);
    // 0x151228D0: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151228D4: swc1        $f10, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->f10.u32l;
    // 0x151228D8: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151228DC: mul.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x151228E0: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151228E4: swc1        $f10, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f10.u32l;
    // 0x151228E8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_151228EC:
    // 0x151228EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151228F0: lwc1        $f8, 0x35C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X35C);
    // 0x151228F4: lwc1        $f18, 0x2FC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x151228F8: add.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151228FC: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x15122900: nop

    // 0x15122904: bc1fl       L_15122918
    if (!c1cs) {
        // 0x15122908: lwc1        $f16, 0x5E8($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X5E8);
            goto L_15122918;
    }
    goto skip_8;
    // 0x15122908: lwc1        $f16, 0x5E8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X5E8);
    skip_8:
    // 0x1512290C: swc1        $f0, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->f0.u32l;
    // 0x15122910: lwc1        $f18, 0x2FC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x15122914: lwc1        $f16, 0x5E8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X5E8);
L_15122918:
    // 0x15122918: lwc1        $f4, 0x5EC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5EC);
    // 0x1512291C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15122920: lwc1        $f8, 0x3498($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3498);
    // 0x15122924: sub.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x15122928: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x1512292C: lwc1        $f8, 0x2BC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2BC);
    // 0x15122930: lwc1        $f10, 0x2F8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x15122934: sub.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x15122938: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x1512293C: lwc1        $f6, 0x300($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X300);
    // 0x15122940: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15122944: swc1        $f4, 0x5E8($s0)
    MEM_W(0X5E8, ctx->r16) = ctx->f4.u32l;
    // 0x15122948: lwc1        $f4, 0x2C4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C4);
    // 0x1512294C: sub.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x15122950: lwc1        $f6, 0x354($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X354);
    // 0x15122954: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15122958: sub.s       $f2, $f18, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x1512295C: swc1        $f2, 0x344($s0)
    MEM_W(0X344, ctx->r16) = ctx->f2.u32l;
    // 0x15122960: swc1        $f2, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f2.u32l;
    // 0x15122964: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15122968: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1512296C: swc1        $f0, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->f0.u32l;
    // 0x15122970: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15122974: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15122978: jr          $ra
    // 0x1512297C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x1512297C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void __n_CSPPostNextSeqEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100154AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x100154B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100154B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x100154B8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x100154BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x100154C0: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x100154C4: bne         $t7, $at, L_100154D8
    if (ctx->r15 != ctx->r1) {
        // 0x100154C8: nop
    
            goto L_100154D8;
    }
    // 0x100154C8: nop

    // 0x100154CC: lw          $t8, 0x18($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X18);
    // 0x100154D0: bne         $t8, $zero, L_100154E0
    if (ctx->r24 != 0) {
        // 0x100154D4: nop
    
            goto L_100154E0;
    }
    // 0x100154D4: nop

L_100154D8:
    // 0x100154D8: b           L_10015534
    // 0x100154DC: nop

        goto L_10015534;
    // 0x100154DC: nop

L_100154E0:
    // 0x100154E0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x100154E4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x100154E8: jal         0x1001DBA0
    // 0x100154EC: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    __alCSeqNextDelta(rdram, ctx);
        goto after_0;
    // 0x100154EC: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    after_0:
    // 0x100154F0: bne         $v0, $zero, L_10015500
    if (ctx->r2 != 0) {
        // 0x100154F4: nop
    
            goto L_10015500;
    }
    // 0x100154F4: nop

    // 0x100154F8: b           L_10015534
    // 0x100154FC: nop

        goto L_10015534;
    // 0x100154FC: nop

L_10015500:
    // 0x10015500: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x10015504: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x10015508: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x1001550C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x10015510: lw          $t1, 0x24($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X24);
    // 0x10015514: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x10015518: addiu       $a0, $t0, 0x48
    ctx->r4 = ADD32(ctx->r8, 0X48);
    // 0x1001551C: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10015520: mflo        $a2
    ctx->r6 = lo;
    // 0x10015524: jal         0x1001C224
    // 0x10015528: nop

    n_alEvtqPostEvent(rdram, ctx);
        goto after_1;
    // 0x10015528: nop

    after_1:
    // 0x1001552C: b           L_10015534
    // 0x10015530: nop

        goto L_10015534;
    // 0x10015530: nop

L_10015534:
    // 0x10015534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10015538: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1001553C: jr          $ra
    // 0x10015540: nop

    return;
    return;
    // 0x10015540: nop

;}
RECOMP_FUNC void func_1514C288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514C288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514C28C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514C290: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1514C294: jal         0x1514BF9C
    // 0x1514C298: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514BF9C(rdram, ctx);
        goto after_0;
    // 0x1514C298: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x1514C29C: jal         0x1514BF50
    // 0x1514C2A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514BF50(rdram, ctx);
        goto after_1;
    // 0x1514C2A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1514C2A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1514C2A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514C2AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514C2B0: jr          $ra
    // 0x1514C2B4: nop

    return;
    return;
    // 0x1514C2B4: nop

;}
RECOMP_FUNC void func_150CE450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CE450: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150CE454: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150CE458: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x150CE45C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150CE460: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150CE464: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150CE468: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150CE46C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150CE470: lbu         $t6, 0x2C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2C);
    // 0x150CE474: addiu       $s3, $a0, 0x18
    ctx->r19 = ADD32(ctx->r4, 0X18);
    // 0x150CE478: or          $s4, $s3, $zero
    ctx->r20 = ctx->r19 | 0;
    // 0x150CE47C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x150CE480: beql        $t7, $zero, L_150CE678
    if (ctx->r15 == 0) {
        // 0x150CE484: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150CE678;
    }
    goto skip_0;
    // 0x150CE484: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x150CE488: lw          $a0, 0x18($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X18);
    // 0x150CE48C: lw          $t8, 0x20($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X20);
    // 0x150CE490: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150CE494: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150CE498: sltu        $at, $t8, $a0
    ctx->r1 = ctx->r24 < ctx->r4 ? 1 : 0;
    // 0x150CE49C: bne         $at, $zero, L_150CE4F0
    if (ctx->r1 != 0) {
        // 0x150CE4A0: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_150CE4F0;
    }
    // 0x150CE4A0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x150CE4A4: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x150CE4A8: addu        $a0, $s3, $t9
    ctx->r4 = ADD32(ctx->r19, ctx->r25);
    // 0x150CE4AC: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x150CE4B0: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x150CE4B4: sh          $a2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r6;
L_150CE4B8:
    // 0x150CE4B8: lw          $t1, 0x10($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X10);
    // 0x150CE4BC: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x150CE4C0: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x150CE4C4: bnel        $at, $zero, L_150CE4D8
    if (ctx->r1 != 0) {
        // 0x150CE4C8: lw          $t2, 0x20($s4)
        ctx->r10 = MEM_W(ctx->r20, 0X20);
            goto L_150CE4D8;
    }
    goto skip_1;
    // 0x150CE4C8: lw          $t2, 0x20($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X20);
    skip_1:
    // 0x150CE4CC: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x150CE4D0: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x150CE4D4: lw          $t2, 0x20($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X20);
L_150CE4D8:
    // 0x150CE4D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150CE4DC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x150CE4E0: sltu        $at, $t2, $v1
    ctx->r1 = ctx->r10 < ctx->r3 ? 1 : 0;
    // 0x150CE4E4: beql        $at, $zero, L_150CE4B8
    if (ctx->r1 == 0) {
        // 0x150CE4E8: sh          $a2, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r6;
            goto L_150CE4B8;
    }
    goto skip_2;
    // 0x150CE4E8: sh          $a2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r6;
    skip_2:
    // 0x150CE4EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150CE4F0:
    // 0x150CE4F0: lw          $t0, 0x1C($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X1C);
    // 0x150CE4F4: lw          $a3, 0x24($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X24);
    // 0x150CE4F8: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    // 0x150CE4FC: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x150CE500: sltu        $at, $a3, $t0
    ctx->r1 = ctx->r7 < ctx->r8 ? 1 : 0;
    // 0x150CE504: bne         $at, $zero, L_150CE558
    if (ctx->r1 != 0) {
        // 0x150CE508: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_150CE558;
    }
    // 0x150CE508: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x150CE50C: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x150CE510: addu        $a0, $s3, $t3
    ctx->r4 = ADD32(ctx->r19, ctx->r11);
    // 0x150CE514: addiu       $a0, $a0, 0x530
    ctx->r4 = ADD32(ctx->r4, 0X530);
    // 0x150CE518: sh          $a2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r6;
L_150CE51C:
    // 0x150CE51C: lw          $t4, 0x10($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X10);
    // 0x150CE520: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x150CE524: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x150CE528: bnel        $at, $zero, L_150CE53C
    if (ctx->r1 != 0) {
        // 0x150CE52C: lw          $t5, 0x24($s4)
        ctx->r13 = MEM_W(ctx->r20, 0X24);
            goto L_150CE53C;
    }
    goto skip_3;
    // 0x150CE52C: lw          $t5, 0x24($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X24);
    skip_3:
    // 0x150CE530: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x150CE534: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x150CE538: lw          $t5, 0x24($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X24);
L_150CE53C:
    // 0x150CE53C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150CE540: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x150CE544: sltu        $at, $t5, $v1
    ctx->r1 = ctx->r13 < ctx->r3 ? 1 : 0;
    // 0x150CE548: beql        $at, $zero, L_150CE51C
    if (ctx->r1 == 0) {
        // 0x150CE54C: sh          $a2, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r6;
            goto L_150CE51C;
    }
    goto skip_4;
    // 0x150CE54C: sh          $a2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r6;
    skip_4:
    // 0x150CE550: lw          $a3, 0x24($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X24);
    // 0x150CE554: lw          $t0, 0x1C($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X1C);
L_150CE558:
    // 0x150CE558: slt         $at, $a3, $t0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x150CE55C: bne         $at, $zero, L_150CE674
    if (ctx->r1 != 0) {
        // 0x150CE560: or          $s0, $a3, $zero
        ctx->r16 = ctx->r7 | 0;
            goto L_150CE674;
    }
    // 0x150CE560: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x150CE564: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x150CE568: addiu       $s1, $s1, -0x19E0
    ctx->r17 = ADD32(ctx->r17, -0X19E0);
    // 0x150CE56C: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
L_150CE570:
    // 0x150CE570: lw          $a3, 0x18($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X18);
    // 0x150CE574: lw          $t0, 0x20($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X20);
    // 0x150CE578: beq         $s0, $t6, L_150CE5E0
    if (ctx->r16 == ctx->r14) {
        // 0x150CE57C: sll         $t7, $s0, 1
        ctx->r15 = S32(ctx->r16 << 1);
            goto L_150CE5E0;
    }
    // 0x150CE57C: sll         $t7, $s0, 1
    ctx->r15 = S32(ctx->r16 << 1);
    // 0x150CE580: addu        $a2, $s3, $t7
    ctx->r6 = ADD32(ctx->r19, ctx->r15);
    // 0x150CE584: lh          $t9, 0x530($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X530);
    // 0x150CE588: lh          $t8, 0x532($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X532);
    // 0x150CE58C: addiu       $a2, $a2, 0x530
    ctx->r6 = ADD32(ctx->r6, 0X530);
    // 0x150CE590: bnel        $t8, $t9, L_150CE5E4
    if (ctx->r24 != ctx->r25) {
        // 0x150CE594: slt         $at, $t0, $a3
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_150CE5E4;
    }
    goto skip_5;
    // 0x150CE594: slt         $at, $t0, $a3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r7) ? 1 : 0;
    skip_5:
    // 0x150CE598: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x150CE59C: addiu       $t4, $s0, 0x1
    ctx->r12 = ADD32(ctx->r16, 0X1);
    // 0x150CE5A0: subu        $a2, $t0, $a3
    ctx->r6 = SUB32(ctx->r8, ctx->r7);
    // 0x150CE5A4: multu       $s0, $v0
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150CE5A8: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x150CE5AC: addiu       $a2, $t8, 0x2
    ctx->r6 = ADD32(ctx->r24, 0X2);
    // 0x150CE5B0: mflo        $t1
    ctx->r9 = lo;
    // 0x150CE5B4: addu        $t2, $t1, $a3
    ctx->r10 = ADD32(ctx->r9, ctx->r7);
    // 0x150CE5B8: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x150CE5BC: multu       $t4, $v0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150CE5C0: addu        $a0, $s2, $t3
    ctx->r4 = ADD32(ctx->r18, ctx->r11);
    // 0x150CE5C4: mflo        $t5
    ctx->r13 = lo;
    // 0x150CE5C8: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x150CE5CC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x150CE5D0: jal         0x10022EC0
    // 0x150CE5D4: addu        $a1, $s2, $t7
    ctx->r5 = ADD32(ctx->r18, ctx->r15);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x150CE5D4: addu        $a1, $s2, $t7
    ctx->r5 = ADD32(ctx->r18, ctx->r15);
    after_0:
    // 0x150CE5D8: b           L_150CE664
    // 0x150CE5DC: lw          $t3, 0x1C($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X1C);
        goto L_150CE664;
    // 0x150CE5DC: lw          $t3, 0x1C($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X1C);
L_150CE5E0:
    // 0x150CE5E0: slt         $at, $t0, $a3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r7) ? 1 : 0;
L_150CE5E4:
    // 0x150CE5E4: bne         $at, $zero, L_150CE660
    if (ctx->r1 != 0) {
        // 0x150CE5E8: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_150CE660;
    }
    // 0x150CE5E8: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x150CE5EC: sll         $a0, $t0, 1
    ctx->r4 = S32(ctx->r8 << 1);
    // 0x150CE5F0: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x150CE5F4: addu        $a2, $s3, $t9
    ctx->r6 = ADD32(ctx->r19, ctx->r25);
    // 0x150CE5F8: addu        $a1, $s3, $a0
    ctx->r5 = ADD32(ctx->r19, ctx->r4);
    // 0x150CE5FC: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x150CE600: addiu       $a2, $a2, 0x530
    ctx->r6 = ADD32(ctx->r6, 0X530);
    // 0x150CE604: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_150CE608:
    // 0x150CE608: lh          $t4, 0x0($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X0);
    // 0x150CE60C: lh          $t1, 0x0($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X0);
    // 0x150CE610: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x150CE614: multu       $t4, $v0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150CE618: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x150CE61C: addu        $t3, $s2, $t2
    ctx->r11 = ADD32(ctx->r18, ctx->r10);
    // 0x150CE620: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x150CE624: mflo        $t5
    ctx->r13 = lo;
    // 0x150CE628: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x150CE62C: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x150CE630: multu       $s0, $v0
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150CE634: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x150CE638: mflo        $t9
    ctx->r25 = lo;
    // 0x150CE63C: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x150CE640: addu        $t2, $s2, $t1
    ctx->r10 = ADD32(ctx->r18, ctx->r9);
    // 0x150CE644: addu        $t4, $t2, $a0
    ctx->r12 = ADD32(ctx->r10, ctx->r4);
    // 0x150CE648: sh          $t8, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r24;
    // 0x150CE64C: lw          $t5, 0x18($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X18);
    // 0x150CE650: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x150CE654: slt         $at, $v1, $t5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x150CE658: beql        $at, $zero, L_150CE608
    if (ctx->r1 == 0) {
        // 0x150CE65C: lw          $v0, 0x0($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X0);
            goto L_150CE608;
    }
    goto skip_6;
    // 0x150CE65C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    skip_6:
L_150CE660:
    // 0x150CE660: lw          $t3, 0x1C($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X1C);
L_150CE664:
    // 0x150CE664: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x150CE668: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x150CE66C: beql        $at, $zero, L_150CE570
    if (ctx->r1 == 0) {
        // 0x150CE670: lw          $t6, 0x24($s3)
        ctx->r14 = MEM_W(ctx->r19, 0X24);
            goto L_150CE570;
    }
    goto skip_7;
    // 0x150CE670: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    skip_7:
L_150CE674:
    // 0x150CE674: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150CE678:
    // 0x150CE678: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150CE67C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150CE680: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150CE684: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x150CE688: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x150CE68C: jr          $ra
    // 0x150CE690: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x150CE690: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1514DC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DC38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514DC3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DC40: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1514DC44: jal         0x1500EE18
    // 0x1514DC48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1500EE18(rdram, ctx);
        goto after_0;
    // 0x1514DC48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x1514DC4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514DC50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514DC54: jr          $ra
    // 0x1514DC58: nop

    return;
    return;
    // 0x1514DC58: nop

;}
RECOMP_FUNC void func_151C4510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C4510: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x151C4514: nop

    // 0x151C4518: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x151C451C: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x151C4520: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151C4524: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x151C4528: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151C452C: lwc1        $f8, 0x3C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151C4530: swc1        $f10, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f10.u32l;
    // 0x151C4534: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x151C4538: mul.s       $f6, $f18, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x151C453C: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x151C4540: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x151C4544: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x151C4548: mul.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x151C454C: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x151C4550: swc1        $f16, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f16.u32l;
    // 0x151C4554: jr          $ra
    // 0x151C4558: nop

    return;
    return;
    // 0x151C4558: nop

;}
RECOMP_FUNC void func_1514C678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514C678: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x1514C67C: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x1514C680: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x1514C684: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x1514C688: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x1514C68C: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x1514C690: mtc1        $a2, $f28
    ctx->f28.u32l = ctx->r6;
    // 0x1514C694: mov.s       $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    ctx->f24.fl = ctx->f14.fl;
    // 0x1514C698: mov.s       $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    ctx->f26.fl = ctx->f12.fl;
    // 0x1514C69C: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x1514C6A0: sw          $fp, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r30;
    // 0x1514C6A4: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x1514C6A8: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x1514C6AC: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x1514C6B0: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x1514C6B4: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x1514C6B8: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x1514C6BC: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x1514C6C0: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x1514C6C4: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x1514C6C8: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x1514C6CC: lh          $a0, 0xB6($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XB6);
    // 0x1514C6D0: lh          $a1, 0xB2($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XB2);
    // 0x1514C6D4: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1514C6D8: beq         $at, $zero, L_1514C700
    if (ctx->r1 == 0) {
        // 0x1514C6DC: lh          $s5, 0xBA($sp)
        ctx->r21 = MEM_H(ctx->r29, 0XBA);
            goto L_1514C700;
    }
    // 0x1514C6DC: lh          $s5, 0xBA($sp)
    ctx->r21 = MEM_H(ctx->r29, 0XBA);
    // 0x1514C6E0: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x1514C6E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1514C6E8: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x1514C6EC: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x1514C6F0: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x1514C6F4: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1514C6F8: b           L_1514C71C
    // 0x1514C6FC: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_1514C71C;
    // 0x1514C6FC: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_1514C700:
    // 0x1514C700: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    // 0x1514C704: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1514C708: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x1514C70C: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x1514C710: sra         $t1, $v1, 16
    ctx->r9 = S32(SIGNED(ctx->r3) >> 16);
    // 0x1514C714: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1514C718: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_1514C71C:
    // 0x1514C71C: blez        $s5, L_1514C810
    if (SIGNED(ctx->r21) <= 0) {
        // 0x1514C720: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_1514C810;
    }
    // 0x1514C720: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1514C724: lbu         $t2, 0xBF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XBF);
    // 0x1514C728: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x1514C72C: addiu       $t4, $t4, -0x5600
    ctx->r12 = ADD32(ctx->r12, -0X5600);
    // 0x1514C730: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x1514C734: addu        $s4, $t3, $t4
    ctx->r20 = ADD32(ctx->r11, ctx->r12);
    // 0x1514C738: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x1514C73C: or          $s3, $v1, $zero
    ctx->r19 = ctx->r3 | 0;
    // 0x1514C740: lwc1        $f30, 0xC4($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x1514C744: lbu         $fp, 0xCF($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0XCF);
    // 0x1514C748: lw          $s7, 0xC8($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XC8);
    // 0x1514C74C: lw          $s6, 0xC0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XC0);
L_1514C750:
    // 0x1514C750: jal         0x150ADA20
    // 0x1514C754: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1514C754: nop

    after_0:
    // 0x1514C758: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x1514C75C: mfhi        $t5
    ctx->r13 = hi;
    // 0x1514C760: addu        $a0, $t5, $s3
    ctx->r4 = ADD32(ctx->r13, ctx->r19);
    // 0x1514C764: andi        $s0, $a0, 0xFF
    ctx->r16 = ctx->r4 & 0XFF;
    // 0x1514C768: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1514C76C: bne         $s2, $zero, L_1514C778
    if (ctx->r18 != 0) {
        // 0x1514C770: nop
    
            goto L_1514C778;
    }
    // 0x1514C770: nop

    // 0x1514C774: break       7
    do_break(353683316);
L_1514C778:
    // 0x1514C778: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1514C77C: jal         0x151423D8
    // 0x1514C780: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x1514C780: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x1514C784: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x1514C788: jal         0x151423D8
    // 0x1514C78C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x1514C78C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
    // 0x1514C790: mul.s       $f4, $f22, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x1514C794: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x1514C798: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x1514C79C: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1514C7A0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x1514C7A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1514C7A8: beq         $v0, $zero, L_1514C7F8
    if (ctx->r2 == 0) {
        // 0x1514C7AC: add.s       $f2, $f4, $f28
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f28.fl;
            goto L_1514C7F8;
    }
    // 0x1514C7AC: add.s       $f2, $f4, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x1514C7B0: mul.s       $f6, $f22, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f20.fl);
    // 0x1514C7B4: lh          $t8, 0xB2($sp)
    ctx->r24 = MEM_H(ctx->r29, 0XB2);
    // 0x1514C7B8: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x1514C7BC: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x1514C7C0: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x1514C7C4: swc1        $f24, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f24.u32l;
    // 0x1514C7C8: swc1        $f28, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f28.u32l;
    // 0x1514C7CC: add.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f26.fl;
    // 0x1514C7D0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1514C7D4: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x1514C7D8: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x1514C7DC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x1514C7E0: swc1        $f30, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f30.u32l;
    // 0x1514C7E4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1514C7E8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1514C7EC: jalr        $v0
    // 0x1514C7F0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x1514C7F0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_3:
    // 0x1514C7F4: beq         $v0, $zero, L_1514C810
    if (ctx->r2 == 0) {
        // 0x1514C7F8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1514C810;
    }
L_1514C7F8:
    // 0x1514C7F8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1514C7FC: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
    // 0x1514C800: sra         $s1, $t9, 16
    ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1514C804: slt         $at, $s1, $s5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x1514C808: bne         $at, $zero, L_1514C750
    if (ctx->r1 != 0) {
        // 0x1514C80C: nop
    
            goto L_1514C750;
    }
    // 0x1514C80C: nop

L_1514C810:
    // 0x1514C810: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x1514C814: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x1514C818: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x1514C81C: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x1514C820: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x1514C824: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x1514C828: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x1514C82C: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x1514C830: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x1514C834: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x1514C838: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x1514C83C: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x1514C840: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x1514C844: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x1514C848: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x1514C84C: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x1514C850: jr          $ra
    // 0x1514C854: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    return;
    // 0x1514C854: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_15040920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040920: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040924: jr          $ra
    // 0x15040928: nop

    return;
    return;
    // 0x15040928: nop

;}
RECOMP_FUNC void func_15143E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15143E64: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15143E68: lwc1        $f12, 0x4($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15143E6C: lwc1        $f14, 0x8($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15143E70: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15143E74: nop

    // 0x15143E78: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15143E7C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15143E80: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15143E84: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15143E88: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15143E8C: jr          $ra
    // 0x15143E90: nop

    return;
    return;
    // 0x15143E90: nop

;}
RECOMP_FUNC void func_15179AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15179AB8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15179ABC: lh          $v0, -0x2BCA($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X2BCA);
    // 0x15179AC0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15179AC4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x15179AC8: bltz        $v0, L_15179B0C
    if (SIGNED(ctx->r2) < 0) {
        // 0x15179ACC: nop
    
            goto L_15179B0C;
    }
    // 0x15179ACC: nop

    // 0x15179AD0: lw          $t6, -0x2BC0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2BC0);
    // 0x15179AD4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x15179AD8: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
L_15179ADC:
    // 0x15179ADC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x15179AE0: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x15179AE4: beq         $v0, $zero, L_15179B04
    if (ctx->r2 == 0) {
        // 0x15179AE8: nop
    
            goto L_15179B04;
    }
    // 0x15179AE8: nop

    // 0x15179AEC: lw          $a1, 0x90($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X90);
    // 0x15179AF0: andi        $t7, $a1, 0x2
    ctx->r15 = ctx->r5 & 0X2;
    // 0x15179AF4: bne         $t7, $zero, L_15179B04
    if (ctx->r15 != 0) {
        // 0x15179AF8: ori         $t8, $a1, 0x2
        ctx->r24 = ctx->r5 | 0X2;
            goto L_15179B04;
    }
    // 0x15179AF8: ori         $t8, $a1, 0x2
    ctx->r24 = ctx->r5 | 0X2;
    // 0x15179AFC: jr          $ra
    // 0x15179B00: sw          $t8, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r24;
    return;
    return;
    // 0x15179B00: sw          $t8, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r24;
L_15179B04:
    // 0x15179B04: bgez        $v1, L_15179ADC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15179B08: addiu       $a0, $a0, -0x4
        ctx->r4 = ADD32(ctx->r4, -0X4);
            goto L_15179ADC;
    }
    // 0x15179B08: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
L_15179B0C:
    // 0x15179B0C: jr          $ra
    // 0x15179B10: nop

    return;
    return;
    // 0x15179B10: nop

;}
RECOMP_FUNC void func_150CB0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CB0E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150CB0E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150CB0E8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x150CB0EC: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x150CB0F0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x150CB0F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150CB0F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150CB0FC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x150CB100: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x150CB104: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x150CB108: beq         $v1, $a3, L_150CB124
    if (ctx->r3 == ctx->r7) {
        // 0x150CB10C: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_150CB124;
    }
    // 0x150CB10C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x150CB110: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150CB114: beq         $a3, $at, L_150CB124
    if (ctx->r7 == ctx->r1) {
        // 0x150CB118: nop
    
            goto L_150CB124;
    }
    // 0x150CB118: nop

    // 0x150CB11C: b           L_150CB1CC
    // 0x150CB120: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150CB1CC;
    // 0x150CB120: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150CB124:
    // 0x150CB124: bne         $v1, $v0, L_150CB138
    if (ctx->r3 != ctx->r2) {
        // 0x150CB128: lui         $a0, 0x800A
        ctx->r4 = S32(0X800A << 16);
            goto L_150CB138;
    }
    // 0x150CB128: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x150CB12C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x150CB130: b           L_150CB13C
    // 0x150CB134: addiu       $a0, $a0, 0x5EC
    ctx->r4 = ADD32(ctx->r4, 0X5EC);
        goto L_150CB13C;
    // 0x150CB134: addiu       $a0, $a0, 0x5EC
    ctx->r4 = ADD32(ctx->r4, 0X5EC);
L_150CB138:
    // 0x150CB138: addiu       $a0, $a0, 0x5E0
    ctx->r4 = ADD32(ctx->r4, 0X5E0);
L_150CB13C:
    // 0x150CB13C: bne         $v1, $v0, L_150CB154
    if (ctx->r3 != ctx->r2) {
        // 0x150CB140: lw          $t8, 0x3C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X3C);
            goto L_150CB154;
    }
    // 0x150CB140: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x150CB144: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x150CB148: lw          $a2, 0x1D4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X1D4);
    // 0x150CB14C: b           L_150CB15C
    // 0x150CB150: addiu       $a2, $a2, 0xA00
    ctx->r6 = ADD32(ctx->r6, 0XA00);
        goto L_150CB15C;
    // 0x150CB150: addiu       $a2, $a2, 0xA00
    ctx->r6 = ADD32(ctx->r6, 0XA00);
L_150CB154:
    // 0x150CB154: lw          $a2, 0x1D4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X1D4);
    // 0x150CB158: addiu       $a2, $a2, 0xBC0
    ctx->r6 = ADD32(ctx->r6, 0XBC0);
L_150CB15C:
    // 0x150CB15C: jal         0x15143134
    // 0x150CB160: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x150CB160: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x150CB164: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x150CB168: bnel        $a0, $zero, L_150CB17C
    if (ctx->r4 != 0) {
        // 0x150CB16C: lwc1        $f4, 0x0($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
            goto L_150CB17C;
    }
    goto skip_0;
    // 0x150CB16C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x150CB170: b           L_150CB1CC
    // 0x150CB174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150CB1CC;
    // 0x150CB174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150CB178: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
L_150CB17C:
    // 0x150CB17C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150CB180: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CB184: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x150CB188: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150CB18C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x150CB190: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CB194: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x150CB198: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150CB19C: jal         0x1504715C
    // 0x150CB1A0: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    func_1504715C(rdram, ctx);
        goto after_1;
    // 0x150CB1A0: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x150CB1A4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150CB1A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CB1AC: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150CB1B0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x150CB1B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150CB1B8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150CB1BC: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x150CB1C0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150CB1C4: jal         0x15046C80
    // 0x150CB1C8: nop

    func_15046C80(rdram, ctx);
        goto after_2;
    // 0x150CB1C8: nop

    after_2:
L_150CB1CC:
    // 0x150CB1CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150CB1D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150CB1D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150CB1D8: jr          $ra
    // 0x150CB1DC: nop

    return;
    return;
    // 0x150CB1DC: nop

;}
RECOMP_FUNC void func_1507EEB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507EEB8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1507EEBC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1507EEC0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1507EEC4: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
    // 0x1507EEC8: lbu         $t8, -0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, -0X2);
    // 0x1507EECC: lbu         $t9, -0x3($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X3);
    // 0x1507EED0: lbu         $t0, -0x4($v0)
    ctx->r8 = MEM_BU(ctx->r2, -0X4);
    // 0x1507EED4: lbu         $t7, -0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, -0X1);
    // 0x1507EED8: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x1507EEDC: sb          $t9, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r25;
    // 0x1507EEE0: sb          $t0, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r8;
    // 0x1507EEE4: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x1507EEE8: sb          $a0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r4;
    // 0x1507EEEC: jr          $ra
    // 0x1507EEF0: nop

    return;
    return;
    // 0x1507EEF0: nop

;}
RECOMP_FUNC void func_1519E61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519E61C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1519E620: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1519E624: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1519E628: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1519E62C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519E630: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1519E634: beq         $a2, $zero, L_1519E644
    if (ctx->r6 == 0) {
        // 0x1519E638: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_1519E644;
    }
    // 0x1519E638: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1519E63C: bnel        $a2, $at, L_1519E650
    if (ctx->r6 != ctx->r1) {
        // 0x1519E640: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1519E650;
    }
    goto skip_0;
    // 0x1519E640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_1519E644:
    // 0x1519E644: jal         0x1516972C
    // 0x1519E648: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x1519E648: nop

    after_0:
    // 0x1519E64C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1519E650:
    // 0x1519E650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1519E654: jr          $ra
    // 0x1519E658: nop

    return;
    return;
    // 0x1519E658: nop

;}
RECOMP_FUNC void func_150DEC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DEC90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150DEC94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150DEC98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150DEC9C: jal         0x15179008
    // 0x150DECA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15179008(rdram, ctx);
        goto after_0;
    // 0x150DECA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x150DECA4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150DECA8: sh          $zero, -0x2BBC($at)
    MEM_H(-0X2BBC, ctx->r1) = 0;
    // 0x150DECAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150DECB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150DECB4: jr          $ra
    // 0x150DECB8: nop

    return;
    return;
    // 0x150DECB8: nop

;}
RECOMP_FUNC void func_151D75C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D75C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151D75C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D75CC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151D75D0: lw          $v0, 0x40($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X40);
    // 0x151D75D4: addiu       $t0, $a3, 0x40
    ctx->r8 = ADD32(ctx->r7, 0X40);
    // 0x151D75D8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151D75DC: beq         $t6, $zero, L_151D75F4
    if (ctx->r14 == 0) {
        // 0x151D75E0: nop
    
            goto L_151D75F4;
    }
    // 0x151D75E0: nop

    // 0x151D75E4: lbu         $t7, 0x4($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X4);
    // 0x151D75E8: lbu         $t8, 0x3B($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3B);
    // 0x151D75EC: beql        $t7, $t8, L_151D7600
    if (ctx->r15 == ctx->r24) {
        // 0x151D75F0: lw          $t1, 0x1D4($v0)
        ctx->r9 = MEM_W(ctx->r2, 0X1D4);
            goto L_151D7600;
    }
    goto skip_0;
    // 0x151D75F0: lw          $t1, 0x1D4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X1D4);
    skip_0:
L_151D75F4:
    // 0x151D75F4: b           L_151D7714
    // 0x151D75F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D7714;
    // 0x151D75F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151D75FC: lw          $t1, 0x1D4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X1D4);
L_151D7600:
    // 0x151D7600: addiu       $v1, $a3, 0x28
    ctx->r3 = ADD32(ctx->r7, 0X28);
    // 0x151D7604: bnel        $t1, $zero, L_151D7624
    if (ctx->r9 != 0) {
        // 0x151D7608: lw          $v1, 0x31C($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X31C);
            goto L_151D7624;
    }
    goto skip_1;
    // 0x151D7608: lw          $v1, 0x31C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X31C);
    skip_1:
    // 0x151D760C: lbu         $t9, 0x5($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X5);
    // 0x151D7610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151D7614: andi        $t2, $t9, 0xFFFE
    ctx->r10 = ctx->r25 & 0XFFFE;
    // 0x151D7618: b           L_151D7714
    // 0x151D761C: sb          $t2, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r10;
        goto L_151D7714;
    // 0x151D761C: sb          $t2, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r10;
    // 0x151D7620: lw          $v1, 0x31C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X31C);
L_151D7624:
    // 0x151D7624: beql        $v1, $zero, L_151D7660
    if (ctx->r3 == 0) {
        // 0x151D7628: lbu         $t7, 0x7($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0X7);
            goto L_151D7660;
    }
    goto skip_2;
    // 0x151D7628: lbu         $t7, 0x7($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X7);
    skip_2:
    // 0x151D762C: lbu         $t3, 0x197($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X197);
    // 0x151D7630: beql        $t3, $zero, L_151D7660
    if (ctx->r11 == 0) {
        // 0x151D7634: lbu         $t7, 0x7($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0X7);
            goto L_151D7660;
    }
    goto skip_3;
    // 0x151D7634: lbu         $t7, 0x7($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X7);
    skip_3:
    // 0x151D7638: lw          $t4, 0x318($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X318);
    // 0x151D763C: addiu       $v1, $a3, 0x28
    ctx->r3 = ADD32(ctx->r7, 0X28);
    // 0x151D7640: beql        $t4, $zero, L_151D7660
    if (ctx->r12 == 0) {
        // 0x151D7644: lbu         $t7, 0x7($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0X7);
            goto L_151D7660;
    }
    goto skip_4;
    // 0x151D7644: lbu         $t7, 0x7($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X7);
    skip_4:
    // 0x151D7648: lbu         $t5, 0x5($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X5);
    // 0x151D764C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151D7650: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x151D7654: b           L_151D7714
    // 0x151D7658: sb          $t6, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r14;
        goto L_151D7714;
    // 0x151D7658: sb          $t6, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r14;
    // 0x151D765C: lbu         $t7, 0x7($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X7);
L_151D7660:
    // 0x151D7660: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151D7664: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x151D7668: beq         $t7, $at, L_151D7688
    if (ctx->r15 == ctx->r1) {
        // 0x151D766C: addiu       $t3, $t3, -0x4D80
        ctx->r11 = ADD32(ctx->r11, -0X4D80);
            goto L_151D7688;
    }
    // 0x151D766C: addiu       $t3, $t3, -0x4D80
    ctx->r11 = ADD32(ctx->r11, -0X4D80);
    // 0x151D7670: addiu       $v1, $a3, 0x28
    ctx->r3 = ADD32(ctx->r7, 0X28);
    // 0x151D7674: lbu         $t8, 0x5($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X5);
    // 0x151D7678: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151D767C: andi        $t9, $t8, 0xFFFE
    ctx->r25 = ctx->r24 & 0XFFFE;
    // 0x151D7680: b           L_151D7714
    // 0x151D7684: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
        goto L_151D7714;
    // 0x151D7684: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
L_151D7688:
    // 0x151D7688: lbu         $v0, 0x5($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X5);
    // 0x151D768C: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151D7690: addiu       $v1, $a3, 0x28
    ctx->r3 = ADD32(ctx->r7, 0X28);
    // 0x151D7694: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x151D7698: lbu         $t4, -0x4D2C($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X4D2C);
    // 0x151D769C: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x151D76A0: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x151D76A4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x151D76A8: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x151D76AC: addu        $a2, $t5, $t1
    ctx->r6 = ADD32(ctx->r13, ctx->r9);
    // 0x151D76B0: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x151D76B4: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x151D76B8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x151D76BC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x151D76C0: jal         0x15143134
    // 0x151D76C4: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x151D76C4: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_0:
    // 0x151D76C8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x151D76CC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x151D76D0: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x151D76D4: lbu         $t6, 0x5($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X5);
    // 0x151D76D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151D76DC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151D76E0: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x151D76E4: sb          $t7, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r15;
    // 0x151D76E8: lb          $v0, 0x6($t0)
    ctx->r2 = MEM_B(ctx->r8, 0X6);
    // 0x151D76EC: beq         $v0, $at, L_151D7710
    if (ctx->r2 == ctx->r1) {
        // 0x151D76F0: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_151D7710;
    }
    // 0x151D76F0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x151D76F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151D76F8: lw          $t9, -0x358($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X358);
    // 0x151D76FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x151D7700: jalr        $t9
    // 0x151D7704: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x151D7704: nop

    after_1:
    // 0x151D7708: b           L_151D7718
    // 0x151D770C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151D7718;
    // 0x151D770C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151D7710:
    // 0x151D7710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151D7714:
    // 0x151D7714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151D7718:
    // 0x151D7718: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151D771C: jr          $ra
    // 0x151D7720: nop

    return;
    return;
    // 0x151D7720: nop

;}
RECOMP_FUNC void func_15017FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15017FA4: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x15017FA8: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x15017FAC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15017FB0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15017FB4: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x15017FB8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x15017FBC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x15017FC0: sw          $a1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r5;
    // 0x15017FC4: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
    // 0x15017FC8: lbu         $v0, 0x15($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X15);
    // 0x15017FCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15017FD0: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x15017FD4: beql        $t6, $zero, L_15018004
    if (ctx->r14 == 0) {
        // 0x15017FD8: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_15018004;
    }
    goto skip_0;
    // 0x15017FD8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_0:
    // 0x15017FDC: beq         $t6, $at, L_1501809C
    if (ctx->r14 == ctx->r1) {
        // 0x15017FE0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1501809C;
    }
    // 0x15017FE0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15017FE4: beq         $t6, $at, L_150180D8
    if (ctx->r14 == ctx->r1) {
        // 0x15017FE8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_150180D8;
    }
    // 0x15017FE8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15017FEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15017FF0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x15017FF4: sw          $t7, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r15;
    // 0x15017FF8: b           L_15018178
    // 0x15017FFC: addiu       $s0, $sp, 0xAC
    ctx->r16 = ADD32(ctx->r29, 0XAC);
        goto L_15018178;
    // 0x15017FFC: addiu       $s0, $sp, 0xAC
    ctx->r16 = ADD32(ctx->r29, 0XAC);
    // 0x15018000: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_15018004:
    // 0x15018004: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15018008: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1501800C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x15018010: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x15018014: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x15018018: jal         0x150A7DA0
    // 0x1501801C: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    func_150A7DA0(rdram, ctx);
        goto after_0;
    // 0x1501801C: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    after_0:
    // 0x15018020: lh          $t9, 0x8($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X8);
    // 0x15018024: lh          $t8, 0x6($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X6);
    // 0x15018028: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1501802C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15018030: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15018034: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15018038: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1501803C: addiu       $s0, $sp, 0xAC
    ctx->r16 = ADD32(ctx->r29, 0XAC);
    // 0x15018040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15018044: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15018048: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1501804C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15018050: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15018054: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x15018058: jal         0x150A7CB0
    // 0x1501805C: nop

    func_150A7CB0(rdram, ctx);
        goto after_1;
    // 0x1501805C: nop

    after_1:
    // 0x15018060: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x15018064: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15018068: jal         0x150A7A48
    // 0x1501806C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_150A7A48(rdram, ctx);
        goto after_2;
    // 0x1501806C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x15018070: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x15018074: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x15018078: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
    // 0x1501807C: jal         0x150A8050
    // 0x15018080: lw          $a2, 0x10($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10);
    func_150A8050(rdram, ctx);
        goto after_3;
    // 0x15018080: lw          $a2, 0x10($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10);
    after_3:
    // 0x15018084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15018088: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x1501808C: jal         0x150A7A48
    // 0x15018090: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_150A7A48(rdram, ctx);
        goto after_4;
    // 0x15018090: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x15018094: b           L_1501817C
    // 0x15018098: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
        goto L_1501817C;
    // 0x15018098: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
L_1501809C:
    // 0x1501809C: lh          $t5, 0x6($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X6);
    // 0x150180A0: addiu       $s0, $sp, 0xAC
    ctx->r16 = ADD32(ctx->r29, 0XAC);
    // 0x150180A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150180A8: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x150180AC: nop

    // 0x150180B0: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150180B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x150180B8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x150180BC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150180C0: jal         0x150A7CB0
    // 0x150180C4: nop

    func_150A7CB0(rdram, ctx);
        goto after_5;
    // 0x150180C4: nop

    after_5:
    // 0x150180C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150180CC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150180D0: b           L_1501817C
    // 0x150180D4: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
        goto L_1501817C;
    // 0x150180D4: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
L_150180D8:
    // 0x150180D8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x150180DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150180E0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150180E4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x150180E8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x150180EC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x150180F0: jal         0x150A7DA0
    // 0x150180F4: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    func_150A7DA0(rdram, ctx);
        goto after_6;
    // 0x150180F4: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    after_6:
    // 0x150180F8: lh          $t6, 0x6($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X6);
    // 0x150180FC: lh          $t7, 0x8($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X8);
    // 0x15018100: lh          $t8, 0xA($s1)
    ctx->r24 = MEM_H(ctx->r17, 0XA);
    // 0x15018104: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x15018108: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x1501810C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15018110: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15018114: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15018118: addiu       $s0, $sp, 0xAC
    ctx->r16 = ADD32(ctx->r29, 0XAC);
    // 0x1501811C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15018120: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15018124: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x15018128: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x1501812C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15018130: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15018134: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x15018138: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x1501813C: jal         0x150A7CB0
    // 0x15018140: nop

    func_150A7CB0(rdram, ctx);
        goto after_7;
    // 0x15018140: nop

    after_7:
    // 0x15018144: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x15018148: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1501814C: jal         0x150A7A48
    // 0x15018150: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_150A7A48(rdram, ctx);
        goto after_8;
    // 0x15018150: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_8:
    // 0x15018154: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x15018158: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1501815C: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
    // 0x15018160: jal         0x150A8050
    // 0x15018164: lw          $a2, 0x10($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10);
    func_150A8050(rdram, ctx);
        goto after_9;
    // 0x15018164: lw          $a2, 0x10($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X10);
    after_9:
    // 0x15018168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1501816C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x15018170: jal         0x150A7A48
    // 0x15018174: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_150A7A48(rdram, ctx);
        goto after_10;
    // 0x15018174: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_10:
L_15018178:
    // 0x15018178: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
L_1501817C:
    // 0x1501817C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15018180: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15018184: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x15018188: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x1501818C: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x15018190: bne         $t9, $zero, L_15018360
    if (ctx->r25 != 0) {
        // 0x15018194: or          $t4, $zero, $zero
        ctx->r12 = 0 | 0;
            goto L_15018360;
    }
    // 0x15018194: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x15018198: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x1501819C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150181A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150181A4: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
L_150181A8:
    // 0x150181A8: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x150181AC: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x150181B0: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x150181B4: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150181B8: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150181BC: beq         $t5, $zero, L_150181CC
    if (ctx->r13 == 0) {
        // 0x150181C0: cvt.s.w     $f20, $f8
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
            goto L_150181CC;
    }
    // 0x150181C0: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150181C4: b           L_150181D0
    // 0x150181C8: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
        goto L_150181D0;
    // 0x150181C8: mov.s       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.fl = ctx->f22.fl;
L_150181CC:
    // 0x150181CC: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_150181D0:
    // 0x150181D0: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x150181D4: beq         $t6, $zero, L_150181E4
    if (ctx->r14 == 0) {
        // 0x150181D8: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_150181E4;
    }
    // 0x150181D8: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x150181DC: b           L_150181E8
    // 0x150181E0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
        goto L_150181E8;
    // 0x150181E0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
L_150181E4:
    // 0x150181E4: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
L_150181E8:
    // 0x150181E8: beq         $t7, $zero, L_150181F8
    if (ctx->r15 == 0) {
        // 0x150181EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150181F8;
    }
    // 0x150181EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150181F0: b           L_150181FC
    // 0x150181F4: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
        goto L_150181FC;
    // 0x150181F4: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_150181F8:
    // 0x150181F8: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_150181FC:
    // 0x150181FC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x15018200: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x15018204: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15018208: addiu       $t8, $sp, 0x5C
    ctx->r24 = ADD32(ctx->r29, 0X5C);
    // 0x1501820C: addiu       $t9, $sp, 0x58
    ctx->r25 = ADD32(ctx->r29, 0X58);
    // 0x15018210: addiu       $t5, $sp, 0x54
    ctx->r13 = ADD32(ctx->r29, 0X54);
    // 0x15018214: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15018218: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1501821C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15018220: sw          $v0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r2;
    // 0x15018224: sw          $v1, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r3;
    // 0x15018228: sw          $t0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r8;
    // 0x1501822C: sw          $t1, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r9;
    // 0x15018230: sw          $t2, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r10;
    // 0x15018234: sw          $t3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r11;
    // 0x15018238: sw          $t4, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r12;
    // 0x1501823C: swc1        $f14, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f14.u32l;
    // 0x15018240: jal         0x150A7960
    // 0x15018244: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    func_150A7960(rdram, ctx);
        goto after_11;
    // 0x15018244: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    after_11:
    // 0x15018248: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1501824C: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15018250: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x15018254: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15018258: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x1501825C: lw          $v0, 0x10C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10C);
    // 0x15018260: lw          $v1, 0xF0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF0);
    // 0x15018264: lw          $t0, 0xF8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF8);
    // 0x15018268: lw          $t1, 0x100($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X100);
    // 0x1501826C: lw          $t2, 0xEC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XEC);
    // 0x15018270: lw          $t3, 0xF4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF4);
    // 0x15018274: lw          $t4, 0xFC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XFC);
    // 0x15018278: bc1f        L_15018290
    if (!c1cs) {
        // 0x1501827C: lwc1        $f18, 0x48($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
            goto L_15018290;
    }
    // 0x1501827C: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15018280: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x15018284: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x15018288: b           L_150182BC
    // 0x1501828C: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
        goto L_150182BC;
    // 0x1501828C: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
L_15018290:
    // 0x15018290: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x15018294: nop

    // 0x15018298: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1501829C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x150182A0: nop

    // 0x150182A4: bc1fl       L_150182BC
    if (!c1cs) {
        // 0x150182A8: lwc1        $f0, 0x58($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
            goto L_150182BC;
    }
    goto skip_1;
    // 0x150182A8: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    skip_1:
    // 0x150182AC: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150182B0: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x150182B4: nop

    // 0x150182B8: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
L_150182BC:
    // 0x150182BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150182C0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x150182C4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x150182C8: nop

    // 0x150182CC: bc1fl       L_150182E8
    if (!c1cs) {
        // 0x150182D0: mtc1        $t3, $f4
        ctx->f4.u32l = ctx->r11;
            goto L_150182E8;
    }
    goto skip_2;
    // 0x150182D0: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    skip_2:
    // 0x150182D4: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150182D8: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x150182DC: b           L_15018310
    // 0x150182E0: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
        goto L_15018310;
    // 0x150182E0: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150182E4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
L_150182E8:
    // 0x150182E8: nop

    // 0x150182EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150182F0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x150182F4: nop

    // 0x150182F8: bc1fl       L_15018310
    if (!c1cs) {
        // 0x150182FC: lwc1        $f0, 0x54($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
            goto L_15018310;
    }
    goto skip_3;
    // 0x150182FC: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    skip_3:
    // 0x15018300: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x15018304: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x15018308: nop

    // 0x1501830C: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
L_15018310:
    // 0x15018310: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x15018314: nop

    // 0x15018318: bc1fl       L_15018334
    if (!c1cs) {
        // 0x1501831C: mtc1        $t2, $f4
        ctx->f4.u32l = ctx->r10;
            goto L_15018334;
    }
    goto skip_4;
    // 0x1501831C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    skip_4:
    // 0x15018320: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x15018324: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x15018328: b           L_15018358
    // 0x1501832C: nop

        goto L_15018358;
    // 0x1501832C: nop

    // 0x15018330: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
L_15018334:
    // 0x15018334: nop

    // 0x15018338: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1501833C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x15018340: nop

    // 0x15018344: bc1f        L_15018358
    if (!c1cs) {
        // 0x15018348: nop
    
            goto L_15018358;
    }
    // 0x15018348: nop

    // 0x1501834C: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x15018350: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x15018354: nop

L_15018358:
    // 0x15018358: bnel        $v0, $at, L_150181A8
    if (ctx->r2 != ctx->r1) {
        // 0x1501835C: mtc1        $t1, $f4
        ctx->f4.u32l = ctx->r9;
            goto L_150181A8;
    }
    goto skip_5;
    // 0x1501835C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    skip_5:
L_15018360:
    // 0x15018360: lh          $t7, 0x0($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X0);
    // 0x15018364: lw          $t9, 0x114($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X114);
    // 0x15018368: addu        $t8, $t7, $t1
    ctx->r24 = ADD32(ctx->r15, ctx->r9);
    // 0x1501836C: sh          $t8, 0x1A($t9)
    MEM_H(0X1A, ctx->r25) = ctx->r24;
    // 0x15018370: lh          $t5, 0x0($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X0);
    // 0x15018374: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x15018378: sh          $t6, 0x1C($t9)
    MEM_H(0X1C, ctx->r25) = ctx->r14;
    // 0x1501837C: lh          $t7, 0x2($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X2);
    // 0x15018380: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x15018384: sh          $t8, 0x1E($t9)
    MEM_H(0X1E, ctx->r25) = ctx->r24;
    // 0x15018388: lh          $t5, 0x2($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X2);
    // 0x1501838C: addu        $t6, $t5, $t3
    ctx->r14 = ADD32(ctx->r13, ctx->r11);
    // 0x15018390: sh          $t6, 0x20($t9)
    MEM_H(0X20, ctx->r25) = ctx->r14;
    // 0x15018394: lh          $t7, 0x4($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X4);
    // 0x15018398: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x1501839C: sh          $t8, 0x22($t9)
    MEM_H(0X22, ctx->r25) = ctx->r24;
    // 0x150183A0: lh          $t5, 0x4($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X4);
    // 0x150183A4: addu        $t6, $t5, $t2
    ctx->r14 = ADD32(ctx->r13, ctx->r10);
    // 0x150183A8: sh          $t6, 0x24($t9)
    MEM_H(0X24, ctx->r25) = ctx->r14;
    // 0x150183AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150183B0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150183B4: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x150183B8: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x150183BC: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x150183C0: jr          $ra
    // 0x150183C4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    return;
    // 0x150183C4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    // 0x150183C8: nop

    // 0x150183CC: nop

;}
RECOMP_FUNC void func_150DF920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DF920: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150DF924: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150DF928: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x150DF92C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x150DF930: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x150DF934: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x150DF938: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x150DF93C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150DF940: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150DF944: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150DF948: bne         $a0, $zero, L_150DFBA4
    if (ctx->r4 != 0) {
        // 0x150DF94C: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_150DFBA4;
    }
    // 0x150DF94C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x150DF950: jal         0x151749A0
    // 0x150DF954: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_151749A0(rdram, ctx);
        goto after_0;
    // 0x150DF954: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x150DF958: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
    // 0x150DF95C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x150DF960: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x150DF964: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
L_150DF968:
    // 0x150DF968: jal         0x15083E90
    // 0x150DF96C: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
    func_15083E90(rdram, ctx);
        goto after_1;
    // 0x150DF96C: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
    after_1:
    // 0x150DF970: beq         $v0, $zero, L_150DF9E0
    if (ctx->r2 == 0) {
        // 0x150DF974: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_150DF9E0;
    }
    // 0x150DF974: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150DF978: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150DF97C: jal         0x150A2864
    // 0x150DF980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150A2864(rdram, ctx);
        goto after_2;
    // 0x150DF980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x150DF984: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150DF988: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150DF98C: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150DF990: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150DF994: lwc1        $f12, 0x1C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150DF998: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150DF99C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150DF9A0: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x150DF9A4: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150DF9A8: trunc.w.s   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x150DF9AC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x150DF9B0: trunc.w.s   $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x150DF9B4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150DF9B8: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x150DF9BC: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150DF9C0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x150DF9C4: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x150DF9C8: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x150DF9CC: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x150DF9D0: jal         0x150A3444
    // 0x150DF9D4: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    func_150A3444(rdram, ctx);
        goto after_3;
    // 0x150DF9D4: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    after_3:
    // 0x150DF9D8: b           L_150DF9F4
    // 0x150DF9DC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_150DF9F4;
    // 0x150DF9DC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_150DF9E0:
    // 0x150DF9E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150DF9E4: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x150DF9E8: jal         0x150A2864
    // 0x150DF9EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_150A2864(rdram, ctx);
        goto after_4;
    // 0x150DF9EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x150DF9F0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_150DF9F4:
    // 0x150DF9F4: slti        $at, $s4, 0x2
    ctx->r1 = SIGNED(ctx->r20) < 0X2 ? 1 : 0;
    // 0x150DF9F8: bnel        $at, $zero, L_150DF968
    if (ctx->r1 != 0) {
        // 0x150DF9FC: andi        $a0, $s2, 0xFF
        ctx->r4 = ctx->r18 & 0XFF;
            goto L_150DF968;
    }
    goto skip_0;
    // 0x150DF9FC: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    skip_0:
    // 0x150DFA00: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x150DFA04: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x150DFA08: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x150DFA0C: lw          $a1, 0xE00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XE00);
    // 0x150DFA10: addiu       $s7, $s7, -0x161C
    ctx->r23 = ADD32(ctx->r23, -0X161C);
    // 0x150DFA14: addiu       $a3, $a3, -0x66B0
    ctx->r7 = ADD32(ctx->r7, -0X66B0);
    // 0x150DFA18: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x150DFA1C: lui         $s6, 0x200
    ctx->r22 = S32(0X200 << 16);
    // 0x150DFA20: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x150DFA24: addiu       $s3, $zero, -0xE
    ctx->r19 = ADD32(0, -0XE);
    // 0x150DFA28: addiu       $s2, $zero, -0x3
    ctx->r18 = ADD32(0, -0X3);
    // 0x150DFA2C: addiu       $s1, $zero, -0x21
    ctx->r17 = ADD32(0, -0X21);
L_150DFA30:
    // 0x150DFA30: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x150DFA34: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x150DFA38: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x150DFA3C: jal         0x150DF8C0
    // 0x150DFA40: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_150DF8C0(rdram, ctx);
        goto after_5;
    // 0x150DFA40: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_5:
    // 0x150DFA44: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x150DFA48: beq         $v0, $zero, L_150DFA84
    if (ctx->r2 == 0) {
        // 0x150DFA4C: lw          $a3, 0x38($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X38);
            goto L_150DFA84;
    }
    // 0x150DFA4C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x150DFA50: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x150DFA54: slti        $at, $v1, 0x60
    ctx->r1 = SIGNED(ctx->r3) < 0X60 ? 1 : 0;
    // 0x150DFA58: beql        $at, $zero, L_150DFA8C
    if (ctx->r1 == 0) {
        // 0x150DFA5C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_150DFA8C;
    }
    goto skip_1;
    // 0x150DFA5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x150DFA60: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x150DFA64: addiu       $t8, $zero, 0x60
    ctx->r24 = ADD32(0, 0X60);
    // 0x150DFA68: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x150DFA6C: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x150DFA70: slti        $at, $t7, 0x61
    ctx->r1 = SIGNED(ctx->r15) < 0X61 ? 1 : 0;
    // 0x150DFA74: bne         $at, $zero, L_150DFA88
    if (ctx->r1 != 0) {
        // 0x150DFA78: sb          $t6, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r14;
            goto L_150DFA88;
    }
    // 0x150DFA78: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
    // 0x150DFA7C: b           L_150DFA88
    // 0x150DFA80: sb          $t8, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r24;
        goto L_150DFA88;
    // 0x150DFA80: sb          $t8, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r24;
L_150DFA84:
    // 0x150DFA84: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
L_150DFA88:
    // 0x150DFA88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_150DFA8C:
    // 0x150DFA8C: sll         $t9, $s0, 3
    ctx->r25 = S32(ctx->r16 << 3);
    // 0x150DFA90: addu        $t0, $t9, $a1
    ctx->r8 = ADD32(ctx->r25, ctx->r5);
    // 0x150DFA94: lb          $v1, 0x0($t0)
    ctx->r3 = MEM_B(ctx->r8, 0X0);
    // 0x150DFA98: beq         $s2, $v1, L_150DFAC8
    if (ctx->r18 == ctx->r3) {
        // 0x150DFA9C: nop
    
            goto L_150DFAC8;
    }
    // 0x150DFA9C: nop

    // 0x150DFAA0: beq         $s1, $v1, L_150DFAC8
    if (ctx->r17 == ctx->r3) {
        // 0x150DFAA4: nop
    
            goto L_150DFAC8;
    }
    // 0x150DFAA4: nop

    // 0x150DFAA8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_150DFAAC:
    // 0x150DFAAC: sll         $t1, $s0, 3
    ctx->r9 = S32(ctx->r16 << 3);
    // 0x150DFAB0: addu        $t2, $t1, $a1
    ctx->r10 = ADD32(ctx->r9, ctx->r5);
    // 0x150DFAB4: lb          $v1, 0x0($t2)
    ctx->r3 = MEM_B(ctx->r10, 0X0);
    // 0x150DFAB8: beq         $s2, $v1, L_150DFAC8
    if (ctx->r18 == ctx->r3) {
        // 0x150DFABC: nop
    
            goto L_150DFAC8;
    }
    // 0x150DFABC: nop

    // 0x150DFAC0: bnel        $s1, $v1, L_150DFAAC
    if (ctx->r17 != ctx->r3) {
        // 0x150DFAC4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_150DFAAC;
    }
    goto skip_2;
    // 0x150DFAC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
L_150DFAC8:
    // 0x150DFAC8: bne         $s1, $v1, L_150DFAD8
    if (ctx->r17 != ctx->r3) {
        // 0x150DFACC: sll         $t5, $s0, 3
        ctx->r13 = S32(ctx->r16 << 3);
            goto L_150DFAD8;
    }
    // 0x150DFACC: sll         $t5, $s0, 3
    ctx->r13 = S32(ctx->r16 << 3);
    // 0x150DFAD0: b           L_150DFAF0
    // 0x150DFAD4: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
        goto L_150DFAF0;
    // 0x150DFAD4: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
L_150DFAD8:
    // 0x150DFAD8: addu        $t6, $a1, $t5
    ctx->r14 = ADD32(ctx->r5, ctx->r13);
    // 0x150DFADC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x150DFAE0: sll         $t3, $s4, 24
    ctx->r11 = S32(ctx->r20 << 24);
    // 0x150DFAE4: addu        $t4, $t3, $s6
    ctx->r12 = ADD32(ctx->r11, ctx->r22);
    // 0x150DFAE8: bnel        $t4, $t7, L_150DFA8C
    if (ctx->r12 != ctx->r15) {
        // 0x150DFAEC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_150DFA8C;
    }
    goto skip_3;
    // 0x150DFAEC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_3:
L_150DFAF0:
    // 0x150DFAF0: beq         $s0, $s5, L_150DFB98
    if (ctx->r16 == ctx->r21) {
        // 0x150DFAF4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_150DFB98;
    }
    // 0x150DFAF4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x150DFAF8: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x150DFAFC: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x150DFB00: lb          $v1, 0x0($t9)
    ctx->r3 = MEM_B(ctx->r25, 0X0);
    // 0x150DFB04: beq         $v1, $s3, L_150DFB24
    if (ctx->r3 == ctx->r19) {
        // 0x150DFB08: nop
    
            goto L_150DFB24;
    }
    // 0x150DFB08: nop

    // 0x150DFB0C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_150DFB10:
    // 0x150DFB10: sll         $t0, $s0, 3
    ctx->r8 = S32(ctx->r16 << 3);
    // 0x150DFB14: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x150DFB18: lb          $v1, 0x0($t1)
    ctx->r3 = MEM_B(ctx->r9, 0X0);
    // 0x150DFB1C: bnel        $v1, $s3, L_150DFB10
    if (ctx->r3 != ctx->r19) {
        // 0x150DFB20: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_150DFB10;
    }
    goto skip_4;
    // 0x150DFB20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_4:
L_150DFB24:
    // 0x150DFB24: beq         $s0, $s5, L_150DFB98
    if (ctx->r16 == ctx->r21) {
        // 0x150DFB28: sll         $t2, $s0, 3
        ctx->r10 = S32(ctx->r16 << 3);
            goto L_150DFB98;
    }
    // 0x150DFB28: sll         $t2, $s0, 3
    ctx->r10 = S32(ctx->r16 << 3);
    // 0x150DFB2C: beq         $v0, $zero, L_150DFB74
    if (ctx->r2 == 0) {
        // 0x150DFB30: addu        $a0, $a1, $t2
        ctx->r4 = ADD32(ctx->r5, ctx->r10);
            goto L_150DFB74;
    }
    // 0x150DFB30: addu        $a0, $a1, $t2
    ctx->r4 = ADD32(ctx->r5, ctx->r10);
    // 0x150DFB34: lbu         $t5, 0x0($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X0);
    // 0x150DFB38: lw          $t4, 0x0($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X0);
    // 0x150DFB3C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x150DFB40: srl         $a2, $v0, 12
    ctx->r6 = S32(U32(ctx->r2) >> 12);
    // 0x150DFB44: andi        $t3, $a2, 0xFFF
    ctx->r11 = ctx->r6 & 0XFFF;
    // 0x150DFB48: andi        $v1, $v0, 0xFFF
    ctx->r3 = ctx->r2 & 0XFFF;
    // 0x150DFB4C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x150DFB50: bgez        $t5, L_150DFB60
    if (SIGNED(ctx->r13) >= 0) {
        // 0x150DFB54: sra         $t6, $t5, 4
        ctx->r14 = S32(SIGNED(ctx->r13) >> 4);
            goto L_150DFB60;
    }
    // 0x150DFB54: sra         $t6, $t5, 4
    ctx->r14 = S32(SIGNED(ctx->r13) >> 4);
    // 0x150DFB58: addiu       $at, $t5, 0xF
    ctx->r1 = ADD32(ctx->r13, 0XF);
    // 0x150DFB5C: sra         $t6, $at, 4
    ctx->r14 = S32(SIGNED(ctx->r1) >> 4);
L_150DFB60:
    // 0x150DFB60: multu       $t6, $t4
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DFB64: mflo        $t7
    ctx->r15 = lo;
    // 0x150DFB68: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x150DFB6C: b           L_150DFB80
    // 0x150DFB70: andi        $t8, $a2, 0xFFF
    ctx->r24 = ctx->r6 & 0XFFF;
        goto L_150DFB80;
    // 0x150DFB70: andi        $t8, $a2, 0xFFF
    ctx->r24 = ctx->r6 & 0XFFF;
L_150DFB74:
    // 0x150DFB74: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x150DFB78: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x150DFB7C: andi        $t8, $a2, 0xFFF
    ctx->r24 = ctx->r6 & 0XFFF;
L_150DFB80:
    // 0x150DFB80: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x150DFB84: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x150DFB88: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x150DFB8C: andi        $t1, $v1, 0xFFF
    ctx->r9 = ctx->r3 & 0XFFF;
    // 0x150DFB90: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    // 0x150DFB94: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
L_150DFB98:
    // 0x150DFB98: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150DFB9C: bne         $s4, $at, L_150DFA30
    if (ctx->r20 != ctx->r1) {
        // 0x150DFBA0: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_150DFA30;
    }
    // 0x150DFBA0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_150DFBA4:
    // 0x150DFBA4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150DFBA8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x150DFBAC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x150DFBB0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x150DFBB4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x150DFBB8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x150DFBBC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x150DFBC0: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x150DFBC4: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x150DFBC8: jr          $ra
    // 0x150DFBCC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    return;
    // 0x150DFBCC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_1513472C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513472C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15134730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15134734: lbu         $v0, 0x3D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3D);
    // 0x15134738: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513473C: bgezl       $v0, L_1513474C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15134740: slti        $at, $v0, 0xA
        ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
            goto L_1513474C;
    }
    goto skip_0;
    // 0x15134740: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    skip_0:
    // 0x15134744: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15134748: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
L_1513474C:
    // 0x1513474C: bnel        $at, $zero, L_1513475C
    if (ctx->r1 != 0) {
        // 0x15134750: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_1513475C;
    }
    goto skip_1;
    // 0x15134750: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    skip_1:
    // 0x15134754: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15134758: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
L_1513475C:
    // 0x1513475C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x15134760: lw          $t9, -0x6554($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6554);
    // 0x15134764: jalr        $t9
    // 0x15134768: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15134768: nop

    after_0:
    // 0x1513476C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15134770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15134774: jr          $ra
    // 0x15134778: nop

    return;
    return;
    // 0x15134778: nop

;}
RECOMP_FUNC void func_151AB090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AB090: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151AB094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AB098: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151AB09C: lbu         $t6, 0xB4($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XB4);
    // 0x151AB0A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151AB0A4: addiu       $v1, $a1, 0xB0
    ctx->r3 = ADD32(ctx->r5, 0XB0);
    // 0x151AB0A8: bne         $t6, $zero, L_151AB0B4
    if (ctx->r14 != 0) {
        // 0x151AB0AC: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_151AB0B4;
    }
    // 0x151AB0AC: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151AB0B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_151AB0B4:
    // 0x151AB0B4: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    // 0x151AB0B8: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x151AB0BC: lh          $t7, 0x14($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X14);
    // 0x151AB0C0: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x151AB0C4: sh          $t9, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r25;
    // 0x151AB0C8: lh          $t0, 0x14($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X14);
    // 0x151AB0CC: bgezl       $t0, L_151AB144
    if (SIGNED(ctx->r8) >= 0) {
        // 0x151AB0D0: lw          $a0, 0x24($a1)
        ctx->r4 = MEM_W(ctx->r5, 0X24);
            goto L_151AB144;
    }
    goto skip_0;
    // 0x151AB0D0: lw          $a0, 0x24($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X24);
    skip_0:
    // 0x151AB0D4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x151AB0D8: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x151AB0DC: jal         0x150ADA20
    // 0x151AB0E0: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151AB0E0: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    after_0:
    // 0x151AB0E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x151AB0E8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151AB0EC: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x151AB0F0: lh          $t1, 0x18($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X18);
    // 0x151AB0F4: lh          $t4, 0x16($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X16);
    // 0x151AB0F8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x151AB0FC: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x151AB100: mfhi        $t3
    ctx->r11 = hi;
    // 0x151AB104: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x151AB108: bne         $t2, $zero, L_151AB114
    if (ctx->r10 != 0) {
        // 0x151AB10C: nop
    
            goto L_151AB114;
    }
    // 0x151AB10C: nop

    // 0x151AB110: break       7
    do_break(354070800);
L_151AB114:
    // 0x151AB114: sh          $t5, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r13;
    // 0x151AB118: jal         0x150ADA68
    // 0x151AB11C: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151AB11C: nop

    after_1:
    // 0x151AB120: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x151AB124: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151AB128: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x151AB12C: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151AB130: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151AB134: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151AB138: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AB13C: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x151AB140: lw          $a0, 0x24($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X24);
L_151AB144:
    // 0x151AB144: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x151AB148: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x151AB14C: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    // 0x151AB150: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151AB154: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151AB158: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x151AB15C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151AB160: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151AB164: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x151AB168: nop

    // 0x151AB16C: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x151AB170: sw          $t8, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r24;
    // 0x151AB174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AB178: jr          $ra
    // 0x151AB17C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x151AB17C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_100010F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100010F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x100010FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10001100: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x10001104: jal         0x10004470
    // 0x10001108: nop

    func_10004470(rdram, ctx);
        goto after_0;
    // 0x10001108: nop

    after_0:
    // 0x1000110C: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10001110: addiu       $t6, $t6, 0x18B0
    ctx->r14 = ADD32(ctx->r14, 0X18B0);
    // 0x10001114: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10001118: lui         $a2, 0x1000
    ctx->r6 = S32(0X1000 << 16);
    // 0x1000111C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x10001120: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x10001124: addiu       $a2, $a2, 0x1194
    ctx->r6 = ADD32(ctx->r6, 0X1194);
    // 0x10001128: addiu       $a0, $a0, 0x1AE0
    ctx->r4 = ADD32(ctx->r4, 0X1AE0);
    // 0x1000112C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x10001130: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x10001134: jal         0x100037F0
    // 0x10001138: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x10001138: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x1000113C: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10001140: lbu         $t8, -0x53A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X53A4);
    // 0x10001144: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x10001148: bne         $t8, $zero, L_1000116C
    if (ctx->r24 != 0) {
        // 0x1000114C: nop
    
            goto L_1000116C;
    }
    // 0x1000114C: nop

    // 0x10001150: lw          $t9, 0x310($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X310);
    // 0x10001154: addiu       $at, $zero, 0x17D9
    ctx->r1 = ADD32(0, 0X17D9);
    // 0x10001158: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x1000115C: bne         $t9, $at, L_1000116C
    if (ctx->r25 != ctx->r1) {
        // 0x10001160: nop
    
            goto L_1000116C;
    }
    // 0x10001160: nop

    // 0x10001164: jal         0x10022A60
    // 0x10001168: addiu       $a0, $a0, 0x1AE0
    ctx->r4 = ADD32(ctx->r4, 0X1AE0);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x10001168: addiu       $a0, $a0, 0x1AE0
    ctx->r4 = ADD32(ctx->r4, 0X1AE0);
    after_2:
L_1000116C:
    // 0x1000116C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10001170: addiu       $a0, $a0, 0x18B0
    ctx->r4 = ADD32(ctx->r4, 0X18B0);
    // 0x10001174: jal         0x10022BB0
    // 0x10001178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osSetThreadPri_recomp(rdram, ctx);
        goto after_3;
    // 0x10001178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_1000117C:
    // 0x1000117C: b           L_1000117C
    pause_self(rdram);
    // 0x10001180: nop

    // 0x10001184: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x10001188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1000118C: jr          $ra
    // 0x10001190: nop

    return;
    return;
    // 0x10001190: nop

;}
RECOMP_FUNC void func_1508108C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508108C: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x15081090: lhu         $t6, -0x42D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X42D0);
    // 0x15081094: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x15081098: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x1508109C: bne         $v0, $t6, L_150810AC
    if (ctx->r2 != ctx->r14) {
        // 0x150810A0: nop
    
            goto L_150810AC;
    }
    // 0x150810A0: nop

    // 0x150810A4: jr          $ra
    // 0x150810A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150810A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150810AC:
    // 0x150810AC: lhu         $t7, -0x42CC($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X42CC);
    // 0x150810B0: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150810B4: bne         $v0, $t7, L_150810C4
    if (ctx->r2 != ctx->r15) {
        // 0x150810B8: nop
    
            goto L_150810C4;
    }
    // 0x150810B8: nop

    // 0x150810BC: jr          $ra
    // 0x150810C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x150810C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150810C4:
    // 0x150810C4: lhu         $t8, -0x42C8($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X42C8);
    // 0x150810C8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x150810CC: addiu       $a0, $a0, -0x42C4
    ctx->r4 = ADD32(ctx->r4, -0X42C4);
    // 0x150810D0: bne         $v0, $t8, L_150810E0
    if (ctx->r2 != ctx->r24) {
        // 0x150810D4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_150810E0;
    }
    // 0x150810D4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x150810D8: jr          $ra
    // 0x150810DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    return;
    // 0x150810DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_150810E0:
    // 0x150810E0: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
L_150810E4:
    // 0x150810E4: lhu         $t9, 0x0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X0);
    // 0x150810E8: bnel        $v0, $t9, L_150810FC
    if (ctx->r2 != ctx->r25) {
        // 0x150810EC: lhu         $t0, 0x4($a0)
        ctx->r8 = MEM_HU(ctx->r4, 0X4);
            goto L_150810FC;
    }
    goto skip_0;
    // 0x150810EC: lhu         $t0, 0x4($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X4);
    skip_0:
    // 0x150810F0: jr          $ra
    // 0x150810F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x150810F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150810F8: lhu         $t0, 0x4($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X4);
L_150810FC:
    // 0x150810FC: bnel        $v0, $t0, L_15081110
    if (ctx->r2 != ctx->r8) {
        // 0x15081100: lhu         $t1, 0x8($a0)
        ctx->r9 = MEM_HU(ctx->r4, 0X8);
            goto L_15081110;
    }
    goto skip_1;
    // 0x15081100: lhu         $t1, 0x8($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X8);
    skip_1:
    // 0x15081104: jr          $ra
    // 0x15081108: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    return;
    // 0x15081108: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x1508110C: lhu         $t1, 0x8($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X8);
L_15081110:
    // 0x15081110: bnel        $v0, $t1, L_15081124
    if (ctx->r2 != ctx->r9) {
        // 0x15081114: lhu         $t2, 0xC($a0)
        ctx->r10 = MEM_HU(ctx->r4, 0XC);
            goto L_15081124;
    }
    goto skip_2;
    // 0x15081114: lhu         $t2, 0xC($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0XC);
    skip_2:
    // 0x15081118: jr          $ra
    // 0x1508111C: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    return;
    // 0x1508111C: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x15081120: lhu         $t2, 0xC($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0XC);
L_15081124:
    // 0x15081124: bnel        $v0, $t2, L_15081138
    if (ctx->r2 != ctx->r10) {
        // 0x15081128: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_15081138;
    }
    goto skip_3;
    // 0x15081128: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_3:
    // 0x1508112C: jr          $ra
    // 0x15081130: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    return;
    // 0x15081130: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    // 0x15081134: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_15081138:
    // 0x15081138: bne         $v1, $a1, L_150810E4
    if (ctx->r3 != ctx->r5) {
        // 0x1508113C: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_150810E4;
    }
    // 0x1508113C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x15081140: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x15081144: jr          $ra
    // 0x15081148: nop

    return;
    return;
    // 0x15081148: nop

;}
RECOMP_FUNC void func_1514F640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F640: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1514F644: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1514F648: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1514F64C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1514F650: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1514F654: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x1514F658: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
    // 0x1514F65C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1514F660: addiu       $a3, $s0, 0x4
    ctx->r7 = ADD32(ctx->r16, 0X4);
    // 0x1514F664: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x1514F668: lwc1        $f4, 0x20($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X20);
    // 0x1514F66C: addiu       $a2, $s0, 0x1C
    ctx->r6 = ADD32(ctx->r16, 0X1C);
    // 0x1514F670: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x1514F674: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1514F678: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1514F67C: jal         0x15144E80
    // 0x1514F680: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_15144E80(rdram, ctx);
        goto after_0;
    // 0x1514F680: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x1514F684: beq         $v0, $zero, L_1514F6D4
    if (ctx->r2 == 0) {
        // 0x1514F688: lw          $a3, 0x24($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X24);
            goto L_1514F6D4;
    }
    // 0x1514F688: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x1514F68C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1514F690: jal         0x15144A74
    // 0x1514F694: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_15144A74(rdram, ctx);
        goto after_1;
    // 0x1514F694: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x1514F698: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1514F69C: nop

    // 0x1514F6A0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x1514F6A4: nop

    // 0x1514F6A8: bc1fl       L_1514F6D8
    if (!c1cs) {
        // 0x1514F6AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1514F6D8;
    }
    goto skip_0;
    // 0x1514F6AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x1514F6B0: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1514F6B4: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1514F6B8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1514F6BC: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x1514F6C0: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x1514F6C4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x1514F6C8: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x1514F6CC: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x1514F6D0: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
L_1514F6D4:
    // 0x1514F6D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1514F6D8:
    // 0x1514F6D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1514F6DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1514F6E0: jr          $ra
    // 0x1514F6E4: nop

    return;
    return;
    // 0x1514F6E4: nop

;}
RECOMP_FUNC void func_15010600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15010600: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15010604: sb          $zero, -0x66DF($at)
    MEM_B(-0X66DF, ctx->r1) = 0;
    // 0x15010608: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1501060C: sb          $zero, -0x66E0($at)
    MEM_B(-0X66E0, ctx->r1) = 0;
    // 0x15010610: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15010614: sb          $zero, -0x66D8($at)
    MEM_B(-0X66D8, ctx->r1) = 0;
    // 0x15010618: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1501061C: sb          $zero, -0x66C8($at)
    MEM_B(-0X66C8, ctx->r1) = 0;
    // 0x15010620: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15010624: sb          $zero, -0x66D7($at)
    MEM_B(-0X66D7, ctx->r1) = 0;
    // 0x15010628: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1501062C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15010630: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15010634: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15010638: addiu       $v0, $v0, -0x66BA
    ctx->r2 = ADD32(ctx->r2, -0X66BA);
    // 0x1501063C: addiu       $a0, $a0, -0x66C6
    ctx->r4 = ADD32(ctx->r4, -0X66C6);
    // 0x15010640: addiu       $v1, $v1, -0x66D6
    ctx->r3 = ADD32(ctx->r3, -0X66D6);
    // 0x15010644: sb          $zero, -0x66C7($at)
    MEM_B(-0X66C7, ctx->r1) = 0;
L_15010648:
    // 0x15010648: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1501064C: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x15010650: sb          $zero, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = 0;
    // 0x15010654: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x15010658: sb          $zero, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = 0;
    // 0x1501065C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x15010660: sb          $zero, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = 0;
    // 0x15010664: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15010668: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
    // 0x1501066C: bne         $a0, $v0, L_15010648
    if (ctx->r4 != ctx->r2) {
        // 0x15010670: sb          $zero, -0x4($a0)
        MEM_B(-0X4, ctx->r4) = 0;
            goto L_15010648;
    }
    // 0x15010670: sb          $zero, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = 0;
    // 0x15010674: jr          $ra
    // 0x15010678: nop

    return;
    return;
    // 0x15010678: nop

    // 0x1501067C: nop

;}
RECOMP_FUNC void func_10003C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10003C6C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x10003C70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x10003C74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x10003C78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10003C7C: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x10003C80: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x10003C84: addiu       $v1, $sp, 0x38
    ctx->r3 = ADD32(ctx->r29, 0X38);
    // 0x10003C88: addiu       $t1, $sp, 0x2C
    ctx->r9 = ADD32(ctx->r29, 0X2C);
    // 0x10003C8C: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10003C90: addiu       $t6, $t6, -0x53CC
    ctx->r14 = ADD32(ctx->r14, -0X53CC);
    // 0x10003C94: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x10003C98: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10003C9C: addiu       $t8, $t8, -0x53C0
    ctx->r24 = ADD32(ctx->r24, -0X53C0);
    // 0x10003CA0: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x10003CA4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x10003CA8: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x10003CAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x10003CB0: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x10003CB4: lhu         $at, 0x8($t6)
    ctx->r1 = MEM_HU(ctx->r14, 0X8);
    // 0x10003CB8: sh          $at, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r1;
    // 0x10003CBC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x10003CC0: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x10003CC4: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x10003CC8: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x10003CCC: lhu         $at, 0x8($t8)
    ctx->r1 = MEM_HU(ctx->r24, 0X8);
    // 0x10003CD0: sh          $at, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r1;
    // 0x10003CD4: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x10003CD8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003CDC: sw          $s0, -0x7F40($at)
    MEM_W(-0X7F40, ctx->r1) = ctx->r16;
    // 0x10003CE0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003CE4: sw          $t6, -0x7F3C($at)
    MEM_W(-0X7F3C, ctx->r1) = ctx->r14;
    // 0x10003CE8: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x10003CEC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003CF0: sw          $a2, -0x7F38($at)
    MEM_W(-0X7F38, ctx->r1) = ctx->r6;
    // 0x10003CF4: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x10003CF8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003CFC: sw          $t7, -0x7F34($at)
    MEM_W(-0X7F34, ctx->r1) = ctx->r15;
    // 0x10003D00: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003D04: sw          $t8, -0x7F30($at)
    MEM_W(-0X7F30, ctx->r1) = ctx->r24;
    // 0x10003D08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x10003D0C: bne         $a2, $at, L_10003D24
    if (ctx->r6 != ctx->r1) {
        // 0x10003D10: addu        $t7, $v1, $v0
        ctx->r15 = ADD32(ctx->r3, ctx->r2);
            goto L_10003D24;
    }
    // 0x10003D10: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x10003D14: addiu       $s0, $s0, 0xF
    ctx->r16 = ADD32(ctx->r16, 0XF);
    // 0x10003D18: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x10003D1C: and         $t9, $s0, $at
    ctx->r25 = ctx->r16 & ctx->r1;
    // 0x10003D20: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_10003D24:
    // 0x10003D24: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x10003D28: beq         $at, $zero, L_10003D34
    if (ctx->r1 == 0) {
        // 0x10003D2C: addu        $t8, $t1, $v0
        ctx->r24 = ADD32(ctx->r9, ctx->r2);
            goto L_10003D34;
    }
    // 0x10003D2C: addu        $t8, $t1, $v0
    ctx->r24 = ADD32(ctx->r9, ctx->r2);
    // 0x10003D30: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
L_10003D34:
    // 0x10003D34: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x10003D38: addiu       $s0, $s0, 0x3
    ctx->r16 = ADD32(ctx->r16, 0X3);
    // 0x10003D3C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x10003D40: and         $t6, $s0, $at
    ctx->r14 = ctx->r16 & ctx->r1;
    // 0x10003D44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x10003D48: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x10003D4C: lh          $t3, 0x0($t7)
    ctx->r11 = MEM_H(ctx->r15, 0X0);
    // 0x10003D50: bne         $t9, $at, L_10003D74
    if (ctx->r25 != ctx->r1) {
        // 0x10003D54: lh          $t0, 0x0($t8)
        ctx->r8 = MEM_H(ctx->r24, 0X0);
            goto L_10003D74;
    }
    // 0x10003D54: lh          $t0, 0x0($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X0);
    // 0x10003D58: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10003D5C: lw          $t6, -0x53D0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X53D0);
    // 0x10003D60: slti        $at, $t6, 0x7800
    ctx->r1 = SIGNED(ctx->r14) < 0X7800 ? 1 : 0;
    // 0x10003D64: beql        $at, $zero, L_10003D78
    if (ctx->r1 == 0) {
        // 0x10003D68: sw          $t0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r8;
            goto L_10003D78;
    }
    goto skip_0;
    // 0x10003D68: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    skip_0:
    // 0x10003D6C: b           L_10004060
    // 0x10003D70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_10004060;
    // 0x10003D70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_10003D74:
    // 0x10003D74: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
L_10003D78:
    // 0x10003D78: jal         0x10024880
    // 0x10003D7C: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x10003D7C: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    after_0:
    // 0x10003D80: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x10003D84: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x10003D88: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x10003D8C: bne         $t2, $zero, L_10003DA8
    if (ctx->r10 != 0) {
        // 0x10003D90: sw          $v0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r2;
            goto L_10003DA8;
    }
    // 0x10003D90: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x10003D94: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x10003D98: lui         $ra, 0x8004
    ctx->r31 = S32(0X8004 << 16);
    // 0x10003D9C: addiu       $ra, $ra, -0x7F44
    ctx->r31 = ADD32(ctx->r31, -0X7F44);
    // 0x10003DA0: b           L_10003DB4
    // 0x10003DA4: lw          $a1, -0x7F48($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7F48);
        goto L_10003DB4;
    // 0x10003DA4: lw          $a1, -0x7F48($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7F48);
L_10003DA8:
    // 0x10003DA8: lui         $ra, 0x8004
    ctx->r31 = S32(0X8004 << 16);
    // 0x10003DAC: addiu       $ra, $ra, -0x7F44
    ctx->r31 = ADD32(ctx->r31, -0X7F44);
    // 0x10003DB0: lw          $a1, 0x0($ra)
    ctx->r5 = MEM_W(ctx->r31, 0X0);
L_10003DB4:
    // 0x10003DB4: bne         $a1, $zero, L_10003DE8
    if (ctx->r5 != 0) {
        // 0x10003DB8: addu        $t9, $a1, $t3
        ctx->r25 = ADD32(ctx->r5, ctx->r11);
            goto L_10003DE8;
    }
    // 0x10003DB8: addu        $t9, $a1, $t3
    ctx->r25 = ADD32(ctx->r5, ctx->r11);
    // 0x10003DBC: jal         0x10024880
    // 0x10003DC0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x10003DC0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x10003DC4: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x10003DC8: lui         $t8, 0xC00
    ctx->r24 = S32(0XC00 << 16);
    // 0x10003DCC: ori         $t8, $t8, 0x42
    ctx->r24 = ctx->r24 | 0X42;
    // 0x10003DD0: bne         $t7, $zero, L_10003DE0
    if (ctx->r15 != 0) {
        // 0x10003DD4: lui         $at, 0x8004
        ctx->r1 = S32(0X8004 << 16);
            goto L_10003DE0;
    }
    // 0x10003DD4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003DD8: jal         0x150AD770
    // 0x10003DDC: sw          $t8, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r24;
    func_150AD770(rdram, ctx);
        goto after_2;
    // 0x10003DDC: sw          $t8, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r24;
    after_2:
L_10003DE0:
    // 0x10003DE0: b           L_10004060
    // 0x10003DE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_10004060;
    // 0x10003DE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_10003DE8:
    // 0x10003DE8: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    // 0x10003DEC: addiu       $t6, $t9, 0xC
    ctx->r14 = ADD32(ctx->r25, 0XC);
    // 0x10003DF0: and         $v0, $t6, $t0
    ctx->r2 = ctx->r14 & ctx->r8;
    // 0x10003DF4: addu        $a0, $a1, $v1
    ctx->r4 = ADD32(ctx->r5, ctx->r3);
    // 0x10003DF8: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x10003DFC: addu        $t7, $v0, $s0
    ctx->r15 = ADD32(ctx->r2, ctx->r16);
    // 0x10003E00: sltu        $at, $a0, $t7
    ctx->r1 = ctx->r4 < ctx->r15 ? 1 : 0;
    // 0x10003E04: beq         $at, $zero, L_10003E24
    if (ctx->r1 == 0) {
        // 0x10003E08: nop
    
            goto L_10003E24;
    }
    // 0x10003E08: nop

    // 0x10003E0C: bne         $t2, $zero, L_10003E1C
    if (ctx->r10 != 0) {
        // 0x10003E10: nop
    
            goto L_10003E1C;
    }
    // 0x10003E10: nop

    // 0x10003E14: b           L_10003DB4
    // 0x10003E18: lw          $a1, 0xC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XC);
        goto L_10003DB4;
    // 0x10003E18: lw          $a1, 0xC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XC);
L_10003E1C:
    // 0x10003E1C: b           L_10003DB4
    // 0x10003E20: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
        goto L_10003DB4;
    // 0x10003E20: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
L_10003E24:
    // 0x10003E24: bne         $t2, $zero, L_10003E44
    if (ctx->r10 != 0) {
        // 0x10003E28: addu        $t9, $a1, $v1
        ctx->r25 = ADD32(ctx->r5, ctx->r3);
            goto L_10003E44;
    }
    // 0x10003E28: addu        $t9, $a1, $v1
    ctx->r25 = ADD32(ctx->r5, ctx->r3);
    // 0x10003E2C: addiu       $a3, $v0, -0xC
    ctx->r7 = ADD32(ctx->r2, -0XC);
    // 0x10003E30: addu        $a2, $a3, $s0
    ctx->r6 = ADD32(ctx->r7, ctx->r16);
    // 0x10003E34: addu        $t8, $a1, $v1
    ctx->r24 = ADD32(ctx->r5, ctx->r3);
    // 0x10003E38: addiu       $t1, $a2, 0xC
    ctx->r9 = ADD32(ctx->r6, 0XC);
    // 0x10003E3C: b           L_10003E5C
    // 0x10003E40: subu        $t5, $t8, $a2
    ctx->r13 = SUB32(ctx->r24, ctx->r6);
        goto L_10003E5C;
    // 0x10003E40: subu        $t5, $t8, $a2
    ctx->r13 = SUB32(ctx->r24, ctx->r6);
L_10003E44:
    // 0x10003E44: subu        $t6, $t9, $s0
    ctx->r14 = SUB32(ctx->r25, ctx->r16);
    // 0x10003E48: addiu       $t7, $t6, 0xC
    ctx->r15 = ADD32(ctx->r14, 0XC);
    // 0x10003E4C: and         $v0, $t7, $t0
    ctx->r2 = ctx->r15 & ctx->r8;
    // 0x10003E50: addiu       $a3, $v0, -0xC
    ctx->r7 = ADD32(ctx->r2, -0XC);
    // 0x10003E54: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x10003E58: subu        $t5, $a3, $a1
    ctx->r13 = SUB32(ctx->r7, ctx->r5);
L_10003E5C:
    // 0x10003E5C: lw          $t4, 0x4($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X4);
    // 0x10003E60: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x10003E64: bne         $t2, $zero, L_10003F40
    if (ctx->r10 != 0) {
        // 0x10003E68: lw          $a2, 0x10($a1)
        ctx->r6 = MEM_W(ctx->r5, 0X10);
            goto L_10003F40;
    }
    // 0x10003E68: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    // 0x10003E6C: sltiu       $at, $t5, 0x14
    ctx->r1 = ctx->r13 < 0X14 ? 1 : 0;
    // 0x10003E70: bne         $at, $zero, L_10003EC0
    if (ctx->r1 != 0) {
        // 0x10003E74: lw          $v0, 0x0($a1)
        ctx->r2 = MEM_W(ctx->r5, 0X0);
            goto L_10003EC0;
    }
    // 0x10003E74: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x10003E78: addiu       $t8, $t5, -0xC
    ctx->r24 = ADD32(ctx->r13, -0XC);
    // 0x10003E7C: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x10003E80: beq         $v0, $zero, L_10003E8C
    if (ctx->r2 == 0) {
        // 0x10003E84: sw          $t8, 0x8($t1)
        MEM_W(0X8, ctx->r9) = ctx->r24;
            goto L_10003E8C;
    }
    // 0x10003E84: sw          $t8, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r24;
    // 0x10003E88: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
L_10003E8C:
    // 0x10003E8C: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x10003E90: sw          $v1, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r3;
    // 0x10003E94: beq         $v1, $zero, L_10003EA4
    if (ctx->r3 == 0) {
        // 0x10003E98: sw          $a2, 0x10($t1)
        MEM_W(0X10, ctx->r9) = ctx->r6;
            goto L_10003EA4;
    }
    // 0x10003E98: sw          $a2, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r6;
    // 0x10003E9C: b           L_10003EA8
    // 0x10003EA0: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
        goto L_10003EA8;
    // 0x10003EA0: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
L_10003EA4:
    // 0x10003EA4: sw          $t1, 0x0($ra)
    MEM_W(0X0, ctx->r31) = ctx->r9;
L_10003EA8:
    // 0x10003EA8: beq         $a2, $zero, L_10003EB8
    if (ctx->r6 == 0) {
        // 0x10003EAC: lui         $at, 0x8004
        ctx->r1 = S32(0X8004 << 16);
            goto L_10003EB8;
    }
    // 0x10003EAC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003EB0: b           L_10003EE8
    // 0x10003EB4: sw          $t1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r9;
        goto L_10003EE8;
    // 0x10003EB4: sw          $t1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r9;
L_10003EB8:
    // 0x10003EB8: b           L_10003EE8
    // 0x10003EBC: sw          $t1, -0x7F48($at)
    MEM_W(-0X7F48, ctx->r1) = ctx->r9;
        goto L_10003EE8;
    // 0x10003EBC: sw          $t1, -0x7F48($at)
    MEM_W(-0X7F48, ctx->r1) = ctx->r9;
L_10003EC0:
    // 0x10003EC0: beq         $v1, $zero, L_10003ED0
    if (ctx->r3 == 0) {
        // 0x10003EC4: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_10003ED0;
    }
    // 0x10003EC4: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x10003EC8: b           L_10003ED4
    // 0x10003ECC: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
        goto L_10003ED4;
    // 0x10003ECC: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
L_10003ED0:
    // 0x10003ED0: sw          $a2, 0x0($ra)
    MEM_W(0X0, ctx->r31) = ctx->r6;
L_10003ED4:
    // 0x10003ED4: beq         $a2, $zero, L_10003EE4
    if (ctx->r6 == 0) {
        // 0x10003ED8: lui         $at, 0x8004
        ctx->r1 = S32(0X8004 << 16);
            goto L_10003EE4;
    }
    // 0x10003ED8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003EDC: b           L_10003EE8
    // 0x10003EE0: sw          $v1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r3;
        goto L_10003EE8;
    // 0x10003EE0: sw          $v1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r3;
L_10003EE4:
    // 0x10003EE4: sw          $v1, -0x7F48($at)
    MEM_W(-0X7F48, ctx->r1) = ctx->r3;
L_10003EE8:
    // 0x10003EE8: bne         $t4, $zero, L_10003EFC
    if (ctx->r12 != 0) {
        // 0x10003EEC: lui         $at, 0xFF00
        ctx->r1 = S32(0XFF00 << 16);
            goto L_10003EFC;
    }
    // 0x10003EEC: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x10003EF0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003EF4: b           L_10003F18
    // 0x10003EF8: sw          $a3, -0x7F4C($at)
    MEM_W(-0X7F4C, ctx->r1) = ctx->r7;
        goto L_10003F18;
    // 0x10003EF8: sw          $a3, -0x7F4C($at)
    MEM_W(-0X7F4C, ctx->r1) = ctx->r7;
L_10003EFC:
    // 0x10003EFC: lw          $t9, 0x8($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X8);
    // 0x10003F00: subu        $t7, $a3, $t4
    ctx->r15 = SUB32(ctx->r7, ctx->r12);
    // 0x10003F04: addiu       $t8, $t7, -0xC
    ctx->r24 = ADD32(ctx->r15, -0XC);
    // 0x10003F08: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x10003F0C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x10003F10: sw          $a3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r7;
    // 0x10003F14: sw          $t9, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r25;
L_10003F18:
    // 0x10003F18: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x10003F1C: sw          $t4, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r12;
    // 0x10003F20: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x10003F24: addu        $t8, $t5, $s0
    ctx->r24 = ADD32(ctx->r13, ctx->r16);
    // 0x10003F28: sll         $t6, $t7, 24
    ctx->r14 = S32(ctx->r15 << 24);
    // 0x10003F2C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x10003F30: beq         $t1, $zero, L_10004030
    if (ctx->r9 == 0) {
        // 0x10003F34: sw          $t9, 0x8($a3)
        MEM_W(0X8, ctx->r7) = ctx->r25;
            goto L_10004030;
    }
    // 0x10003F34: sw          $t9, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r25;
    // 0x10003F38: b           L_10004030
    // 0x10003F3C: sw          $a3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r7;
        goto L_10004030;
    // 0x10003F3C: sw          $a3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r7;
L_10003F40:
    // 0x10003F40: sltiu       $at, $t5, 0x14
    ctx->r1 = ctx->r13 < 0X14 ? 1 : 0;
    // 0x10003F44: bne         $at, $zero, L_10003F8C
    if (ctx->r1 != 0) {
        // 0x10003F48: addu        $t8, $a1, $t3
        ctx->r24 = ADD32(ctx->r5, ctx->r11);
            goto L_10003F8C;
    }
    // 0x10003F48: addu        $t8, $a1, $t3
    ctx->r24 = ADD32(ctx->r5, ctx->r11);
    // 0x10003F4C: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x10003F50: sw          $a1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r5;
    // 0x10003F54: subu        $t9, $a0, $a3
    ctx->r25 = SUB32(ctx->r4, ctx->r7);
    // 0x10003F58: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x10003F5C: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x10003F60: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x10003F64: addiu       $t7, $t9, -0xC
    ctx->r15 = ADD32(ctx->r25, -0XC);
    // 0x10003F68: sll         $t8, $t6, 24
    ctx->r24 = S32(ctx->r14 << 24);
    // 0x10003F6C: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x10003F70: beq         $v0, $zero, L_10003F7C
    if (ctx->r2 == 0) {
        // 0x10003F74: sw          $t6, 0x8($a3)
        MEM_W(0X8, ctx->r7) = ctx->r14;
            goto L_10003F7C;
    }
    // 0x10003F74: sw          $t6, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r14;
    // 0x10003F78: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
L_10003F7C:
    // 0x10003F7C: addiu       $t9, $t5, -0xC
    ctx->r25 = ADD32(ctx->r13, -0XC);
    // 0x10003F80: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x10003F84: b           L_10004030
    // 0x10003F88: sw          $t9, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r25;
        goto L_10004030;
    // 0x10003F88: sw          $t9, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r25;
L_10003F8C:
    // 0x10003F8C: addiu       $t7, $t8, 0xC
    ctx->r15 = ADD32(ctx->r24, 0XC);
    // 0x10003F90: and         $v0, $t7, $t0
    ctx->r2 = ctx->r15 & ctx->r8;
    // 0x10003F94: sw          $t1, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->r9;
    // 0x10003F98: sw          $t4, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r12;
    // 0x10003F9C: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x10003FA0: addiu       $v0, $v0, -0xC
    ctx->r2 = ADD32(ctx->r2, -0XC);
    // 0x10003FA4: subu        $t8, $a0, $v0
    ctx->r24 = SUB32(ctx->r4, ctx->r2);
    // 0x10003FA8: addiu       $t7, $t8, -0xC
    ctx->r15 = ADD32(ctx->r24, -0XC);
    // 0x10003FAC: sll         $t9, $t6, 24
    ctx->r25 = S32(ctx->r14 << 24);
    // 0x10003FB0: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x10003FB4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x10003FB8: beq         $v1, $zero, L_10003FC8
    if (ctx->r3 == 0) {
        // 0x10003FBC: sw          $t6, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->r14;
            goto L_10003FC8;
    }
    // 0x10003FBC: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    // 0x10003FC0: b           L_10003FCC
    // 0x10003FC4: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
        goto L_10003FCC;
    // 0x10003FC4: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
L_10003FC8:
    // 0x10003FC8: sw          $a2, 0x0($ra)
    MEM_W(0X0, ctx->r31) = ctx->r6;
L_10003FCC:
    // 0x10003FCC: beq         $a2, $zero, L_10003FDC
    if (ctx->r6 == 0) {
        // 0x10003FD0: lui         $at, 0x8004
        ctx->r1 = S32(0X8004 << 16);
            goto L_10003FDC;
    }
    // 0x10003FD0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003FD4: b           L_10003FE0
    // 0x10003FD8: sw          $v1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r3;
        goto L_10003FE0;
    // 0x10003FD8: sw          $v1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r3;
L_10003FDC:
    // 0x10003FDC: sw          $v1, -0x7F48($at)
    MEM_W(-0X7F48, ctx->r1) = ctx->r3;
L_10003FE0:
    // 0x10003FE0: bne         $t4, $zero, L_10003FF4
    if (ctx->r12 != 0) {
        // 0x10003FE4: lui         $at, 0xFF00
        ctx->r1 = S32(0XFF00 << 16);
            goto L_10003FF4;
    }
    // 0x10003FE4: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x10003FE8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003FEC: b           L_10004010
    // 0x10003FF0: sw          $v0, -0x7F4C($at)
    MEM_W(-0X7F4C, ctx->r1) = ctx->r2;
        goto L_10004010;
    // 0x10003FF0: sw          $v0, -0x7F4C($at)
    MEM_W(-0X7F4C, ctx->r1) = ctx->r2;
L_10003FF4:
    // 0x10003FF4: lw          $t8, 0x8($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X8);
    // 0x10003FF8: subu        $t7, $v0, $t4
    ctx->r15 = SUB32(ctx->r2, ctx->r12);
    // 0x10003FFC: addiu       $t6, $t7, -0xC
    ctx->r14 = ADD32(ctx->r15, -0XC);
    // 0x10004000: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x10004004: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x10004008: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
    // 0x1000400C: sw          $t8, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r24;
L_10004010:
    // 0x10004010: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x10004014: beql        $v1, $zero, L_10004024
    if (ctx->r3 == 0) {
        // 0x10004018: lw          $v1, 0x4($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X4);
            goto L_10004024;
    }
    goto skip_1;
    // 0x10004018: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    skip_1:
    // 0x1000401C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x10004020: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
L_10004024:
    // 0x10004024: beq         $v1, $zero, L_10004030
    if (ctx->r3 == 0) {
        // 0x10004028: nop
    
            goto L_10004030;
    }
    // 0x10004028: nop

    // 0x1000402C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_10004030:
    // 0x10004030: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x10004034: lw          $t7, -0x7F50($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7F50);
    // 0x10004038: bnel        $a1, $t7, L_10004050
    if (ctx->r5 != ctx->r15) {
        // 0x1000403C: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_10004050;
    }
    goto skip_2;
    // 0x1000403C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    skip_2:
    // 0x10004040: jal         0x1000440C
    // 0x10004044: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    func_1000440C(rdram, ctx);
        goto after_3;
    // 0x10004044: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    after_3:
    // 0x10004048: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x1000404C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_10004050:
    // 0x10004050: jal         0x10024880
    // 0x10004054: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    osSetIntMask_recomp(rdram, ctx);
        goto after_4;
    // 0x10004054: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    after_4:
    // 0x10004058: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x1000405C: addiu       $v0, $a3, 0xC
    ctx->r2 = ADD32(ctx->r7, 0XC);
L_10004060:
    // 0x10004060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x10004064: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x10004068: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x1000406C: jr          $ra
    // 0x10004070: nop

    return;
    return;
    // 0x10004070: nop

;}
RECOMP_FUNC void func_151E6BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E6BFC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E6C00: sb          $zero, 0xBD3($at)
    MEM_B(0XBD3, ctx->r1) = 0;
    // 0x151E6C04: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E6C08: sw          $zero, 0xBD4($at)
    MEM_W(0XBD4, ctx->r1) = 0;
    // 0x151E6C0C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E6C10: sw          $zero, -0x228($at)
    MEM_W(-0X228, ctx->r1) = 0;
    // 0x151E6C14: jr          $ra
    // 0x151E6C18: nop

    return;
    return;
    // 0x151E6C18: nop

;}
RECOMP_FUNC void func_15168C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15168C4C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15168C50: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x15168C54: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x15168C58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15168C5C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x15168C60: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15168C64: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x15168C68: lwc1        $f4, 0xC0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC0);
    // 0x15168C6C: lw          $a1, 0x9C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X9C);
    // 0x15168C70: lw          $a2, 0xA0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XA0);
    // 0x15168C74: lw          $a3, 0xA4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XA4);
    // 0x15168C78: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15168C7C: lwc1        $f6, 0xC4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC4);
    // 0x15168C80: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15168C84: lbu         $t6, -0x1640($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1640);
    // 0x15168C88: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x15168C8C: lwc1        $f8, 0xC8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC8);
    // 0x15168C90: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x15168C94: addu        $a0, $s1, $t7
    ctx->r4 = ADD32(ctx->r17, ctx->r15);
    // 0x15168C98: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x15168C9C: lwc1        $f10, 0x90($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X90);
    // 0x15168CA0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x15168CA4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x15168CA8: lwc1        $f16, 0x94($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X94);
    // 0x15168CAC: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x15168CB0: lwc1        $f18, 0x98($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X98);
    // 0x15168CB4: jal         0x15043D90
    // 0x15168CB8: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_15043D90(rdram, ctx);
        goto after_0;
    // 0x15168CB8: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x15168CBC: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x15168CC0: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15168CC4: addiu       $t0, $t0, -0x2E3E
    ctx->r8 = ADD32(ctx->r8, -0X2E3E);
    // 0x15168CC8: addiu       $a3, $a3, -0x2E3C
    ctx->r7 = ADD32(ctx->r7, -0X2E3C);
    // 0x15168CCC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15168CD0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x15168CD4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15168CD8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15168CDC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15168CE0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15168CE4: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x15168CE8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x15168CEC: lbu         $t2, 0xE5($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0XE5);
    // 0x15168CF0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15168CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15168CF8: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x15168CFC: lbu         $t3, 0xE5($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0XE5);
    // 0x15168D00: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15168D04: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15168D08: sh          $t3, -0x2E3A($at)
    MEM_H(-0X2E3A, ctx->r1) = ctx->r11;
    // 0x15168D0C: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    // 0x15168D10: lh          $t4, 0x0($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X0);
    // 0x15168D14: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15168D18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15168D1C: sh          $t4, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r12;
    // 0x15168D20: lh          $t5, 0x0($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X0);
    // 0x15168D24: lui         $t6, 0xFB00
    ctx->r14 = S32(0XFB00 << 16);
    // 0x15168D28: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15168D2C: sh          $t5, -0x2E40($at)
    MEM_H(-0X2E40, ctx->r1) = ctx->r13;
    // 0x15168D30: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x15168D34: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x15168D38: lbu         $t8, 0xE6($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0XE6);
    // 0x15168D3C: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x15168D40: ori         $at, $at, 0x2000
    ctx->r1 = ctx->r1 | 0X2000;
    // 0x15168D44: lui         $t1, 0x7
    ctx->r9 = S32(0X7 << 16);
    // 0x15168D48: ori         $t1, $t1, 0xE0FE
    ctx->r9 = ctx->r9 | 0XE0FE;
    // 0x15168D4C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x15168D50: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x15168D54: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x15168D58: lbu         $a2, 0xEC($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0XEC);
    // 0x15168D5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15168D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15168D64: beq         $a2, $at, L_15168D80
    if (ctx->r6 == ctx->r1) {
        // 0x15168D68: lui         $a1, 0x8
        ctx->r5 = S32(0X8 << 16);
            goto L_15168D80;
    }
    // 0x15168D68: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    // 0x15168D6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15168D70: beq         $a2, $at, L_15168D90
    if (ctx->r6 == ctx->r1) {
        // 0x15168D74: lui         $t3, 0x50
        ctx->r11 = S32(0X50 << 16);
            goto L_15168D90;
    }
    // 0x15168D74: lui         $t3, 0x50
    ctx->r11 = S32(0X50 << 16);
    // 0x15168D78: b           L_15168D9C
    // 0x15168D7C: sb          $zero, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = 0;
        goto L_15168D9C;
    // 0x15168D7C: sb          $zero, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = 0;
L_15168D80:
    // 0x15168D80: lui         $t2, 0x55
    ctx->r10 = S32(0X55 << 16);
    // 0x15168D84: ori         $t2, $t2, 0x2230
    ctx->r10 = ctx->r10 | 0X2230;
    // 0x15168D88: b           L_15168D98
    // 0x15168D8C: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
        goto L_15168D98;
    // 0x15168D8C: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
L_15168D90:
    // 0x15168D90: ori         $t3, $t3, 0x4A50
    ctx->r11 = ctx->r11 | 0X4A50;
    // 0x15168D94: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
L_15168D98:
    // 0x15168D98: sb          $zero, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = 0;
L_15168D9C:
    // 0x15168D9C: ori         $a1, $a1, 0xACA0
    ctx->r5 = ctx->r5 | 0XACA0;
    // 0x15168DA0: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x15168DA4: jal         0x15142FBC
    // 0x15168DA8: addiu       $a3, $sp, 0x5F
    ctx->r7 = ADD32(ctx->r29, 0X5F);
    func_15142FBC(rdram, ctx);
        goto after_1;
    // 0x15168DA8: addiu       $a3, $sp, 0x5F
    ctx->r7 = ADD32(ctx->r29, 0X5F);
    after_1:
    // 0x15168DAC: lbu         $t4, 0xED($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0XED);
    // 0x15168DB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15168DB4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15168DB8: bne         $t4, $at, L_15168DDC
    if (ctx->r12 != ctx->r1) {
        // 0x15168DBC: lui         $t7, 0xDA38
        ctx->r15 = S32(0XDA38 << 16);
            goto L_15168DDC;
    }
    // 0x15168DBC: lui         $t7, 0xDA38
    ctx->r15 = S32(0XDA38 << 16);
    // 0x15168DC0: lui         $t5, 0xFC12
    ctx->r13 = S32(0XFC12 << 16);
    // 0x15168DC4: lui         $t6, 0xFF73
    ctx->r14 = S32(0XFF73 << 16);
    // 0x15168DC8: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x15168DCC: ori         $t5, $t5, 0x3824
    ctx->r13 = ctx->r13 | 0X3824;
    // 0x15168DD0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x15168DD4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x15168DD8: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
L_15168DDC:
    // 0x15168DDC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15168DE0: ori         $t7, $t7, 0x3
    ctx->r15 = ctx->r15 | 0X3;
    // 0x15168DE4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x15168DE8: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15168DEC: lbu         $t8, -0x1640($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1640);
    // 0x15168DF0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15168DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15168DF8: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x15168DFC: addu        $t1, $s1, $t9
    ctx->r9 = ADD32(ctx->r17, ctx->r25);
    // 0x15168E00: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x15168E04: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x15168E08: lui         $t3, 0xDE00
    ctx->r11 = S32(0XDE00 << 16);
    // 0x15168E0C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x15168E10: lw          $t4, 0xD0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XD0);
    // 0x15168E14: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15168E18: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15168E1C: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x15168E20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15168E24: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x15168E28: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x15168E2C: jr          $ra
    // 0x15168E30: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x15168E30: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_1513E2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513E2AC: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x1513E2B0: sw          $a3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r7;
    // 0x1513E2B4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1513E2B8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1513E2BC: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x1513E2C0: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x1513E2C4: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x1513E2C8: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x1513E2CC: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x1513E2D0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x1513E2D4: sw          $a0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r4;
    // 0x1513E2D8: sw          $a1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r5;
    // 0x1513E2DC: sw          $a2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r6;
    // 0x1513E2E0: lbu         $a0, 0x133($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X133);
    // 0x1513E2E4: addiu       $v1, $a3, 0x40
    ctx->r3 = ADD32(ctx->r7, 0X40);
    // 0x1513E2E8: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    // 0x1513E2EC: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1513E2F0: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x1513E2F4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x1513E2F8: jal         0x151423D8
    // 0x1513E2FC: sw          $v1, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r3;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x1513E2FC: sw          $v1, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r3;
    after_0:
    // 0x1513E300: mov.s       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.fl = ctx->f0.fl;
    // 0x1513E304: jal         0x151423D8
    // 0x1513E308: lbu         $a0, 0x133($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X133);
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x1513E308: lbu         $a0, 0x133($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X133);
    after_1:
    // 0x1513E30C: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x1513E310: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x1513E314: lw          $t0, 0x10C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10C);
    // 0x1513E318: beq         $t6, $zero, L_1513E520
    if (ctx->r14 == 0) {
        // 0x1513E31C: mov.s       $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
            goto L_1513E520;
    }
    // 0x1513E31C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x1513E320: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1513E324: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    // 0x1513E328: addiu       $a2, $sp, 0xD4
    ctx->r6 = ADD32(ctx->r29, 0XD4);
    // 0x1513E32C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1513E330: jal         0x15144E80
    // 0x1513E334: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    func_15144E80(rdram, ctx);
        goto after_2;
    // 0x1513E334: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    after_2:
    // 0x1513E338: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x1513E33C: bne         $v0, $zero, L_1513E34C
    if (ctx->r2 != 0) {
        // 0x1513E340: addiu       $a0, $sp, 0xE0
        ctx->r4 = ADD32(ctx->r29, 0XE0);
            goto L_1513E34C;
    }
    // 0x1513E340: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x1513E344: b           L_1513E6C4
    // 0x1513E348: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513E6C4;
    // 0x1513E348: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513E34C:
    // 0x1513E34C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1513E350: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1513E354: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1513E358: jal         0x15145128
    // 0x1513E35C: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    func_15145128(rdram, ctx);
        goto after_3;
    // 0x1513E35C: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    after_3:
    // 0x1513E360: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x1513E364: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1513E368: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1513E36C: jal         0x15145128
    // 0x1513E370: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15145128(rdram, ctx);
        goto after_4;
    // 0x1513E370: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x1513E374: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x1513E378: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x1513E37C: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x1513E380: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x1513E384: mul.s       $f12, $f10, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1513E388: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x1513E38C: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x1513E390: mul.s       $f2, $f10, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x1513E394: nop

    // 0x1513E398: mul.s       $f8, $f12, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x1513E39C: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x1513E3A0: mul.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x1513E3A4: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x1513E3A8: add.s       $f24, $f8, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1513E3AC: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x1513E3B0: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x1513E3B4: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x1513E3B8: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x1513E3BC: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x1513E3C0: add.s       $f26, $f10, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1513E3C4: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x1513E3C8: mul.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x1513E3CC: nop

    // 0x1513E3D0: mul.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x1513E3D4: add.s       $f28, $f6, $f4
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f28.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1513E3D8: lwc1        $f6, 0x12C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1513E3DC: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x1513E3E0: mul.s       $f0, $f4, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x1513E3E4: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1513E3E8: lwc1        $f30, 0x120($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1513E3EC: mul.s       $f14, $f6, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x1513E3F0: sub.s       $f12, $f30, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f30.fl - ctx->f26.fl;
    // 0x1513E3F4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1513E3F8: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1513E3FC: mul.s       $f4, $f14, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x1513E400: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1513E404: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1513E408: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1513E40C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1513E410: mul.s       $f6, $f14, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x1513E414: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1513E418: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1513E41C: lwc1        $f10, 0x11C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1513E420: mul.s       $f6, $f14, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x1513E424: sub.s       $f2, $f10, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f24.fl;
    // 0x1513E428: add.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1513E42C: add.s       $f8, $f2, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x1513E430: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1513E434: add.s       $f6, $f12, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x1513E438: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1513E43C: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513E440: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x1513E444: add.s       $f0, $f30, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = ctx->f30.fl + ctx->f26.fl;
    // 0x1513E448: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1513E44C: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x1513E450: sh          $t1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r9;
    // 0x1513E454: lwc1        $f8, 0x124($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1513E458: sub.s       $f14, $f8, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f28.fl;
    // 0x1513E45C: add.s       $f4, $f14, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f20.fl;
    // 0x1513E460: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513E464: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x1513E468: add.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x1513E46C: sh          $t3, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r11;
    // 0x1513E470: lwc1        $f10, 0x11C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1513E474: add.s       $f22, $f10, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x1513E478: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513E47C: add.s       $f8, $f22, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f22.fl + ctx->f16.fl;
    // 0x1513E480: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x1513E484: sub.s       $f10, $f22, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f22.fl - ctx->f16.fl;
    // 0x1513E488: sh          $t7, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r15;
    // 0x1513E48C: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1513E490: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x1513E494: nop

    // 0x1513E498: sh          $t5, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r13;
    // 0x1513E49C: lwc1        $f8, 0x124($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1513E4A0: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x1513E4A4: add.s       $f0, $f8, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f28.fl;
    // 0x1513E4A8: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1513E4AC: add.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x1513E4B0: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x1513E4B4: sub.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x1513E4B8: sh          $t2, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r10;
    // 0x1513E4BC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513E4C0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x1513E4C4: nop

    // 0x1513E4C8: sh          $t9, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r25;
    // 0x1513E4CC: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1513E4D0: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x1513E4D4: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1513E4D8: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513E4DC: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x1513E4E0: sub.s       $f6, $f2, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x1513E4E4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x1513E4E8: sh          $t6, 0x24($v1)
    MEM_H(0X24, ctx->r3) = ctx->r14;
    // 0x1513E4EC: sub.s       $f8, $f12, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x1513E4F0: sh          $t4, 0x22($v1)
    MEM_H(0X22, ctx->r3) = ctx->r12;
    // 0x1513E4F4: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513E4F8: sub.s       $f6, $f14, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f20.fl;
    // 0x1513E4FC: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x1513E500: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1513E504: sh          $t8, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r24;
    // 0x1513E508: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513E50C: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x1513E510: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x1513E514: sh          $t1, 0x32($v1)
    MEM_H(0X32, ctx->r3) = ctx->r9;
    // 0x1513E518: b           L_1513E6C4
    // 0x1513E51C: sh          $t3, 0x34($v1)
    MEM_H(0X34, ctx->r3) = ctx->r11;
        goto L_1513E6C4;
    // 0x1513E51C: sh          $t3, 0x34($v1)
    MEM_H(0X34, ctx->r3) = ctx->r11;
L_1513E520:
    // 0x1513E520: lw          $a0, 0x114($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X114);
    // 0x1513E524: lw          $a1, 0x118($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X118);
    // 0x1513E528: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    // 0x1513E52C: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    // 0x1513E530: jal         0x1510E388
    // 0x1513E534: sw          $t0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r8;
    func_1510E388(rdram, ctx);
        goto after_5;
    // 0x1513E534: sw          $t0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r8;
    after_5:
    // 0x1513E538: bne         $v0, $zero, L_1513E548
    if (ctx->r2 != 0) {
        // 0x1513E53C: lw          $t0, 0x10C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X10C);
            goto L_1513E548;
    }
    // 0x1513E53C: lw          $t0, 0x10C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10C);
    // 0x1513E540: b           L_1513E6C4
    // 0x1513E544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513E6C4;
    // 0x1513E544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513E548:
    // 0x1513E548: lwc1        $f20, 0x128($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X128);
    // 0x1513E54C: lwc1        $f24, 0x12C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1513E550: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x1513E554: mul.s       $f12, $f20, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x1513E558: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x1513E55C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1513E560: mul.s       $f0, $f24, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = MUL_S(ctx->f24.fl, ctx->f30.fl);
    // 0x1513E564: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x1513E568: mul.s       $f14, $f24, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = MUL_S(ctx->f24.fl, ctx->f22.fl);
    // 0x1513E56C: neg.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
    // 0x1513E570: mul.s       $f2, $f20, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f30.fl);
    // 0x1513E574: lwc1        $f30, 0x120($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1513E578: sub.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x1513E57C: sub.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x1513E580: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x1513E584: add.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x1513E588: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x1513E58C: sub.s       $f10, $f14, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x1513E590: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x1513E594: neg.s       $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = -ctx->f14.fl;
    // 0x1513E598: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    // 0x1513E59C: add.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x1513E5A0: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x1513E5A4: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x1513E5A8: add.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x1513E5AC: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x1513E5B0: add.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x1513E5B4: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x1513E5B8: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    // 0x1513E5BC: sll         $t4, $v0, 3
    ctx->r12 = S32(ctx->r2 << 3);
L_1513E5C0:
    // 0x1513E5C0: addu        $v1, $a0, $t4
    ctx->r3 = ADD32(ctx->r4, ctx->r12);
    // 0x1513E5C4: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513E5C8: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1513E5CC: lwc1        $f14, 0x0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513E5D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1513E5D4: mul.s       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x1513E5D8: c.eq.s      $f28, $f14
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f28.fl == ctx->f14.fl;
    // 0x1513E5DC: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x1513E5E0: mul.s       $f22, $f2, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1513E5E4: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x1513E5E8: bc1t        L_1513E61C
    if (c1cs) {
        // 0x1513E5EC: abs.s       $f20, $f2
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = fabsf(ctx->f2.fl);
            goto L_1513E61C;
    }
    // 0x1513E5EC: abs.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = fabsf(ctx->f2.fl);
    // 0x1513E5F0: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x1513E5F4: abs.s       $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = fabsf(ctx->f14.fl);
    // 0x1513E5F8: mul.s       $f18, $f14, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x1513E5FC: nop

    // 0x1513E600: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1513E604: nop

    // 0x1513E608: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x1513E60C: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1513E610: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1513E614: b           L_1513E624
    // 0x1513E618: div.s       $f24, $f16, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
        goto L_1513E624;
    // 0x1513E618: div.s       $f24, $f16, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
L_1513E61C:
    // 0x1513E61C: mov.s       $f18, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    ctx->f18.fl = ctx->f26.fl;
    // 0x1513E620: mov.s       $f24, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    ctx->f24.fl = ctx->f26.fl;
L_1513E624:
    // 0x1513E624: c.eq.s      $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.fl == ctx->f2.fl;
    // 0x1513E628: mul.s       $f6, $f14, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x1513E62C: lwc1        $f10, 0x11C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1513E630: bc1tl       L_1513E650
    if (c1cs) {
        // 0x1513E634: mov.s       $f12, $f26
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
            goto L_1513E650;
    }
    goto skip_0;
    // 0x1513E634: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    skip_0:
    // 0x1513E638: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1513E63C: add.s       $f0, $f22, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f22.fl + ctx->f4.fl;
    // 0x1513E640: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1513E644: b           L_1513E654
    // 0x1513E648: div.s       $f2, $f20, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
        goto L_1513E654;
    // 0x1513E648: div.s       $f2, $f20, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x1513E64C: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
L_1513E650:
    // 0x1513E650: mov.s       $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    ctx->f2.fl = ctx->f26.fl;
L_1513E654:
    // 0x1513E654: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1513E658: mul.s       $f6, $f24, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x1513E65C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1513E660: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x1513E664: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1513E668: mul.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x1513E66C: add.s       $f10, $f6, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f30.fl;
    // 0x1513E670: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x1513E674: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1513E678: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x1513E67C: sh          $t6, -0x10($t0)
    MEM_H(-0X10, ctx->r8) = ctx->r14;
    // 0x1513E680: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1513E684: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1513E688: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1513E68C: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x1513E690: nop

    // 0x1513E694: sh          $t8, -0xE($t0)
    MEM_H(-0XE, ctx->r8) = ctx->r24;
    // 0x1513E698: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513E69C: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1513E6A0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1513E6A4: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1513E6A8: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1513E6AC: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x1513E6B0: nop

    // 0x1513E6B4: sh          $t1, -0xC($t0)
    MEM_H(-0XC, ctx->r8) = ctx->r9;
    // 0x1513E6B8: bnel        $at, $zero, L_1513E5C0
    if (ctx->r1 != 0) {
        // 0x1513E6BC: sll         $t4, $v0, 3
        ctx->r12 = S32(ctx->r2 << 3);
            goto L_1513E5C0;
    }
    goto skip_1;
    // 0x1513E6BC: sll         $t4, $v0, 3
    ctx->r12 = S32(ctx->r2 << 3);
    skip_1:
    // 0x1513E6C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1513E6C4:
    // 0x1513E6C4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1513E6C8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x1513E6CC: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x1513E6D0: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x1513E6D4: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x1513E6D8: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x1513E6DC: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x1513E6E0: jr          $ra
    // 0x1513E6E4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    return;
    // 0x1513E6E4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_15187F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15187F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15187F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15187F98: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15187F9C: addiu       $a0, $a0, -0x900
    ctx->r4 = ADD32(ctx->r4, -0X900);
    // 0x15187FA0: jal         0x100226F0
    // 0x15187FA4: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x15187FA4: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    after_0:
    // 0x15187FA8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15187FAC: sw          $zero, -0x84C($at)
    MEM_W(-0X84C, ctx->r1) = 0;
    // 0x15187FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15187FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15187FB8: jr          $ra
    // 0x15187FBC: nop

    return;
    return;
    // 0x15187FBC: nop

;}
RECOMP_FUNC void func_15191D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15191D54: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x15191D58: sw          $s4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r20;
    // 0x15191D5C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x15191D60: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x15191D64: sw          $s7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r23;
    // 0x15191D68: sw          $s6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r22;
    // 0x15191D6C: sw          $s5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r21;
    // 0x15191D70: sw          $s3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r19;
    // 0x15191D74: sw          $s2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r18;
    // 0x15191D78: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x15191D7C: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x15191D80: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x15191D84: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x15191D88: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x15191D8C: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x15191D90: lw          $s1, 0x28($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X28);
    // 0x15191D94: addiu       $s0, $s4, 0x28
    ctx->r16 = ADD32(ctx->r20, 0X28);
    // 0x15191D98: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x15191D9C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x15191DA0: beq         $t6, $zero, L_15191DB8
    if (ctx->r14 == 0) {
        // 0x15191DA4: nop
    
            goto L_15191DB8;
    }
    // 0x15191DA4: nop

    // 0x15191DA8: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x15191DAC: lbu         $t8, 0x3B($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X3B);
    // 0x15191DB0: beq         $t7, $t8, L_15191DC0
    if (ctx->r15 == ctx->r24) {
        // 0x15191DB4: nop
    
            goto L_15191DC0;
    }
    // 0x15191DB4: nop

L_15191DB8:
    // 0x15191DB8: b           L_15192000
    // 0x15191DBC: sh          $t9, 0xE($s4)
    MEM_H(0XE, ctx->r20) = ctx->r25;
        goto L_15192000;
    // 0x15191DBC: sh          $t9, 0xE($s4)
    MEM_H(0XE, ctx->r20) = ctx->r25;
L_15191DC0:
    // 0x15191DC0: jal         0x150ADA68
    // 0x15191DC4: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x15191DC4: nop

    after_0:
    // 0x15191DC8: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15191DCC: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15191DD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15191DD4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15191DD8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x15191DDC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15191DE0: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15191DE4: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15191DE8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15191DEC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15191DF0: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x15191DF4: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x15191DF8: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15191DFC: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x15191E00: nop

    // 0x15191E04: bc1fl       L_15192004
    if (!c1cs) {
        // 0x15191E08: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_15192004;
    }
    goto skip_0;
    // 0x15191E08: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_0:
    // 0x15191E0C: lw          $v0, 0x1D4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1D4);
    // 0x15191E10: addiu       $s7, $sp, 0xB4
    ctx->r23 = ADD32(ctx->r29, 0XB4);
    // 0x15191E14: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x15191E18: beql        $v0, $zero, L_15191FD8
    if (ctx->r2 == 0) {
        // 0x15191E1C: c.lt.s      $f22, $f2
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
            goto L_15191FD8;
    }
    goto skip_1;
    // 0x15191E1C: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    skip_1:
    // 0x15191E20: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x15191E24: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x15191E28: jal         0x15143134
    // 0x15191E2C: addu        $a2, $v0, $t0
    ctx->r6 = ADD32(ctx->r2, ctx->r8);
    func_15143134(rdram, ctx);
        goto after_1;
    // 0x15191E2C: addu        $a2, $v0, $t0
    ctx->r6 = ADD32(ctx->r2, ctx->r8);
    after_1:
    // 0x15191E30: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x15191E34: lwc1        $f8, 0x60($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X60);
    // 0x15191E38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15191E3C: c.lt.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl < ctx->f8.fl;
    // 0x15191E40: nop

    // 0x15191E44: bc1f        L_15191E98
    if (!c1cs) {
        // 0x15191E48: nop
    
            goto L_15191E98;
    }
    // 0x15191E48: nop

    // 0x15191E4C: jal         0x1514672C
    // 0x15191E50: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_1514672C(rdram, ctx);
        goto after_2;
    // 0x15191E50: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_2:
    // 0x15191E54: bne         $v0, $zero, L_15191E68
    if (ctx->r2 != 0) {
        // 0x15191E58: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_15191E68;
    }
    // 0x15191E58: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15191E5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15191E60: b           L_15191E9C
    // 0x15191E64: lwc1        $f26, -0x7F18($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X7F18);
        goto L_15191E9C;
    // 0x15191E64: lwc1        $f26, -0x7F18($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X7F18);
L_15191E68:
    // 0x15191E68: lwc1        $f20, -0x7F14($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X7F14);
    // 0x15191E6C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x15191E70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15191E74: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x15191E78: jal         0x15046F84
    // 0x15191E7C: addiu       $a3, $s0, 0x24
    ctx->r7 = ADD32(ctx->r16, 0X24);
    func_15046F84(rdram, ctx);
        goto after_3;
    // 0x15191E7C: addiu       $a3, $s0, 0x24
    ctx->r7 = ADD32(ctx->r16, 0X24);
    after_3:
    // 0x15191E80: beq         $v0, $zero, L_15191E90
    if (ctx->r2 == 0) {
        // 0x15191E84: nop
    
            goto L_15191E90;
    }
    // 0x15191E84: nop

    // 0x15191E88: b           L_15191E9C
    // 0x15191E8C: lwc1        $f26, 0x24($s0)
    ctx->f26.u32l = MEM_W(ctx->r16, 0X24);
        goto L_15191E9C;
    // 0x15191E8C: lwc1        $f26, 0x24($s0)
    ctx->f26.u32l = MEM_W(ctx->r16, 0X24);
L_15191E90:
    // 0x15191E90: b           L_15191E9C
    // 0x15191E94: mov.s       $f26, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    ctx->f26.fl = ctx->f20.fl;
        goto L_15191E9C;
    // 0x15191E94: mov.s       $f26, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    ctx->f26.fl = ctx->f20.fl;
L_15191E98:
    // 0x15191E98: lwc1        $f26, -0x7F10($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X7F10);
L_15191E9C:
    // 0x15191E9C: addiu       $s5, $s0, 0x28
    ctx->r21 = ADD32(ctx->r16, 0X28);
    // 0x15191EA0: addiu       $s6, $sp, 0xA4
    ctx->r22 = ADD32(ctx->r29, 0XA4);
L_15191EA4:
    // 0x15191EA4: jal         0x150ADA68
    // 0x15191EA8: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x15191EA8: nop

    after_4:
    // 0x15191EAC: lwc1        $f10, 0x60($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X60);
    // 0x15191EB0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15191EB4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x15191EB8: nop

    // 0x15191EBC: bc1f        L_15191ECC
    if (!c1cs) {
        // 0x15191EC0: nop
    
            goto L_15191ECC;
    }
    // 0x15191EC0: nop

    // 0x15191EC4: b           L_15191ECC
    // 0x15191EC8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_15191ECC;
    // 0x15191EC8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_15191ECC:
    // 0x15191ECC: swc1        $f24, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f24.u32l;
    // 0x15191ED0: swc1        $f24, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f24.u32l;
    // 0x15191ED4: jal         0x150ADA68
    // 0x15191ED8: swc1        $f24, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f24.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x15191ED8: swc1        $f24, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f24.u32l;
    after_5:
    // 0x15191EDC: jal         0x150ADA20
    // 0x15191EE0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x15191EE0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_6:
    // 0x15191EE4: jal         0x150ADA20
    // 0x15191EE8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15191EE8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_7:
    // 0x15191EEC: jal         0x150ADA68
    // 0x15191EF0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x15191EF0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    after_8:
    // 0x15191EF4: lh          $t1, 0x52($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X52);
    // 0x15191EF8: lbu         $t7, 0x55($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X55);
    // 0x15191EFC: lbu         $t0, 0x54($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X54);
    // 0x15191F00: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x15191F04: divu        $zero, $s2, $t2
    lo = S32(U32(ctx->r18) / U32(ctx->r10)); hi = S32(U32(ctx->r18) % U32(ctx->r10));
    // 0x15191F08: mfhi        $t3
    ctx->r11 = hi;
    // 0x15191F0C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x15191F10: lwc1        $f16, 0x4C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x15191F14: divu        $zero, $s3, $t8
    lo = S32(U32(ctx->r19) / U32(ctx->r24)); hi = S32(U32(ctx->r19) % U32(ctx->r24));
    // 0x15191F18: lwc1        $f18, 0x48($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X48);
    // 0x15191F1C: lh          $t4, 0x50($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X50);
    // 0x15191F20: mfhi        $t9
    ctx->r25 = hi;
    // 0x15191F24: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x15191F28: mul.s       $f6, $f20, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x15191F2C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15191F30: addu        $a3, $t3, $t4
    ctx->r7 = ADD32(ctx->r11, ctx->r12);
    // 0x15191F34: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x15191F38: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x15191F3C: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x15191F40: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x15191F44: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x15191F48: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x15191F4C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x15191F50: bne         $t2, $zero, L_15191F5C
    if (ctx->r10 != 0) {
        // 0x15191F54: nop
    
            goto L_15191F5C;
    }
    // 0x15191F54: nop

    // 0x15191F58: break       7
    do_break(353967960);
L_15191F5C:
    // 0x15191F5C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15191F60: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15191F64: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x15191F68: lwc1        $f16, 0x58($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X58);
    // 0x15191F6C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x15191F70: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15191F74: swc1        $f26, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f26.u32l;
    // 0x15191F78: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15191F7C: bne         $t8, $zero, L_15191F88
    if (ctx->r24 != 0) {
        // 0x15191F80: nop
    
            goto L_15191F88;
    }
    // 0x15191F80: nop

    // 0x15191F84: break       7
    do_break(353968004);
L_15191F88:
    // 0x15191F88: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15191F8C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x15191F90: lbu         $t3, 0x64($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X64);
    // 0x15191F94: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x15191F98: lbu         $t4, 0xC($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0XC);
    // 0x15191F9C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x15191FA0: lbu         $t5, 0x1($s4)
    ctx->r13 = MEM_BU(ctx->r20, 0X1);
    // 0x15191FA4: jal         0x1519203C
    // 0x15191FA8: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    func_1519203C(rdram, ctx);
        goto after_9;
    // 0x15191FA8: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    after_9:
    // 0x15191FAC: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15191FB0: sub.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f22.fl;
    // 0x15191FB4: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x15191FB8: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15191FBC: c.lt.s      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.fl < ctx->f8.fl;
    // 0x15191FC0: nop

    // 0x15191FC4: bc1t        L_15191EA4
    if (c1cs) {
        // 0x15191FC8: nop
    
            goto L_15191EA4;
    }
    // 0x15191FC8: nop

    // 0x15191FCC: b           L_15192004
    // 0x15191FD0: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
        goto L_15192004;
    // 0x15191FD0: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x15191FD4: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
L_15191FD8:
    // 0x15191FD8: nop

    // 0x15191FDC: bc1fl       L_15192004
    if (!c1cs) {
        // 0x15191FE0: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_15192004;
    }
    goto skip_2;
    // 0x15191FE0: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_2:
    // 0x15191FE4: sub.s       $f10, $f2, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f22.fl;
L_15191FE8:
    // 0x15191FE8: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
    // 0x15191FEC: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15191FF0: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x15191FF4: nop

    // 0x15191FF8: bc1tl       L_15191FE8
    if (c1cs) {
        // 0x15191FFC: sub.s       $f10, $f2, $f22
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f22.fl;
            goto L_15191FE8;
    }
    goto skip_3;
    // 0x15191FFC: sub.s       $f10, $f2, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f22.fl;
    skip_3:
L_15192000:
    // 0x15192000: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
L_15192004:
    // 0x15192004: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x15192008: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x1519200C: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x15192010: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x15192014: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x15192018: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x1519201C: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x15192020: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x15192024: lw          $s4, 0x6C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X6C);
    // 0x15192028: lw          $s5, 0x70($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X70);
    // 0x1519202C: lw          $s6, 0x74($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X74);
    // 0x15192030: lw          $s7, 0x78($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X78);
    // 0x15192034: jr          $ra
    // 0x15192038: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    return;
    // 0x15192038: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_15158AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15158AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15158AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15158AD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15158ADC: jal         0x15158A20
    // 0x15158AE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15158A20(rdram, ctx);
        goto after_0;
    // 0x15158AE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x15158AE4: jal         0x15169824
    // 0x15158AE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169824(rdram, ctx);
        goto after_1;
    // 0x15158AE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x15158AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15158AF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15158AF4: jr          $ra
    // 0x15158AF8: nop

    return;
    return;
    // 0x15158AF8: nop

;}
RECOMP_FUNC void func_151D09A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D09A8: addiu       $sp, $sp, -0x1E8
    ctx->r29 = ADD32(ctx->r29, -0X1E8);
    // 0x151D09AC: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x151D09B0: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x151D09B4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x151D09B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151D09BC: andi        $s2, $a1, 0xFF
    ctx->r18 = ctx->r5 & 0XFF;
    // 0x151D09C0: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x151D09C4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x151D09C8: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x151D09CC: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x151D09D0: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x151D09D4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x151D09D8: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x151D09DC: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x151D09E0: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x151D09E4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x151D09E8: sw          $a1, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->r5;
    // 0x151D09EC: lw          $t6, 0x1D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1D4);
    // 0x151D09F0: addiu       $s4, $sp, 0x1DC
    ctx->r20 = ADD32(ctx->r29, 0X1DC);
    // 0x151D09F4: addiu       $s5, $sp, 0x1D0
    ctx->r21 = ADD32(ctx->r29, 0X1D0);
    // 0x151D09F8: beq         $t6, $zero, L_151D0EA0
    if (ctx->r14 == 0) {
        // 0x151D09FC: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_151D0EA0;
    }
    // 0x151D09FC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151D0A00: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151D0A04: addiu       $t7, $t7, -0x507C
    ctx->r15 = ADD32(ctx->r15, -0X507C);
    // 0x151D0A08: addiu       $t8, $t8, -0x5070
    ctx->r24 = ADD32(ctx->r24, -0X5070);
    // 0x151D0A0C: sw          $t7, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r15;
    // 0x151D0A10: sw          $t8, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r24;
    // 0x151D0A14: sw          $s4, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r20;
    // 0x151D0A18: sw          $s5, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r21;
    // 0x151D0A1C: lw          $a2, 0x1D4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1D4);
    // 0x151D0A20: addiu       $a0, $sp, 0x178
    ctx->r4 = ADD32(ctx->r29, 0X178);
    // 0x151D0A24: addiu       $a1, $sp, 0x170
    ctx->r5 = ADD32(ctx->r29, 0X170);
    // 0x151D0A28: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x151D0A2C: jal         0x15145EA4
    // 0x151D0A30: addiu       $a2, $a2, 0x80
    ctx->r6 = ADD32(ctx->r6, 0X80);
    func_15145EA4(rdram, ctx);
        goto after_0;
    // 0x151D0A30: addiu       $a2, $a2, 0x80
    ctx->r6 = ADD32(ctx->r6, 0X80);
    after_0:
    // 0x151D0A34: lwc1        $f4, 0x1D0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1D0);
    // 0x151D0A38: lwc1        $f6, 0x1DC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1DC);
    // 0x151D0A3C: lwc1        $f10, 0x1D4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1D4);
    // 0x151D0A40: lwc1        $f16, 0x1E0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1E0);
    // 0x151D0A44: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151D0A48: lwc1        $f6, 0x1E4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1E4);
    // 0x151D0A4C: lwc1        $f4, 0x1D8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1D8);
    // 0x151D0A50: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151D0A54: swc1        $f8, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->f8.u32l;
    // 0x151D0A58: addiu       $s1, $sp, 0x1AC
    ctx->r17 = ADD32(ctx->r29, 0X1AC);
    // 0x151D0A5C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151D0A60: swc1        $f18, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->f18.u32l;
    // 0x151D0A64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151D0A68: swc1        $f8, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->f8.u32l;
    // 0x151D0A6C: jal         0x1504715C
    // 0x151D0A70: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1504715C(rdram, ctx);
        goto after_1;
    // 0x151D0A70: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x151D0A74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0A78: lwc1        $f22, -0x4F94($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X4F94);
    // 0x151D0A7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0A80: lwc1        $f26, -0x4F90($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X4F90);
    // 0x151D0A84: sb          $zero, 0x180($sp)
    MEM_B(0X180, ctx->r29) = 0;
    // 0x151D0A88: lw          $at, 0x0($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X0);
    // 0x151D0A8C: addiu       $t9, $sp, 0x184
    ctx->r25 = ADD32(ctx->r29, 0X184);
    // 0x151D0A90: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x151D0A94: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x151D0A98: lw          $t2, 0x4($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X4);
    // 0x151D0A9C: addiu       $s0, $s0, 0x5480
    ctx->r16 = ADD32(ctx->r16, 0X5480);
    // 0x151D0AA0: addiu       $v0, $sp, 0x64
    ctx->r2 = ADD32(ctx->r29, 0X64);
    // 0x151D0AA4: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
    // 0x151D0AA8: lw          $at, 0x8($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X8);
    // 0x151D0AAC: addiu       $t6, $sp, 0x19C
    ctx->r14 = ADD32(ctx->r29, 0X19C);
    // 0x151D0AB0: addiu       $t0, $sp, 0x190
    ctx->r8 = ADD32(ctx->r29, 0X190);
    // 0x151D0AB4: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151D0AB8: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x151D0ABC: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x151D0AC0: addiu       $s6, $sp, 0x180
    ctx->r22 = ADD32(ctx->r29, 0X180);
    // 0x151D0AC4: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x151D0AC8: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151D0ACC: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x151D0AD0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x151D0AD4: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x151D0AD8: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151D0ADC: addiu       $a1, $sp, 0x130
    ctx->r5 = ADD32(ctx->r29, 0X130);
    // 0x151D0AE0: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x151D0AE4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151D0AE8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x151D0AEC: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x151D0AF0: addiu       $t9, $zero, 0x9B
    ctx->r25 = ADD32(0, 0X9B);
    // 0x151D0AF4: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x151D0AF8: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151D0AFC: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x151D0B00: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x151D0B04: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151D0B08: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151D0B0C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x151D0B10: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151D0B14: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x151D0B18: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x151D0B1C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x151D0B20: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x151D0B24: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x151D0B28: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151D0B2C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151D0B30: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x151D0B34: lw          $at, 0x0($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X0);
    // 0x151D0B38: lw          $t8, 0x4($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X4);
    // 0x151D0B3C: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x151D0B40: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x151D0B44: lw          $at, 0x8($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X8);
    // 0x151D0B48: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x151D0B4C: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    // 0x151D0B50: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x151D0B54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0B58: lwc1        $f10, -0x4F8C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4F8C);
    // 0x151D0B5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0B60: lwc1        $f16, -0x4F88($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4F88);
    // 0x151D0B64: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0B68: lwc1        $f18, -0x4F84($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4F84);
    // 0x151D0B6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0B70: lwc1        $f4, -0x4F80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4F80);
    // 0x151D0B74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0B78: lwc1        $f6, -0x4F7C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4F7C);
    // 0x151D0B7C: sh          $t7, 0x13C($sp)
    MEM_H(0X13C, ctx->r29) = ctx->r15;
    // 0x151D0B80: sh          $t6, 0x13E($sp)
    MEM_H(0X13E, ctx->r29) = ctx->r14;
    // 0x151D0B84: swc1        $f26, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f26.u32l;
    // 0x151D0B88: sh          $t1, 0x148($sp)
    MEM_H(0X148, ctx->r29) = ctx->r9;
    // 0x151D0B8C: sh          $t2, 0x14A($sp)
    MEM_H(0X14A, ctx->r29) = ctx->r10;
    // 0x151D0B90: sb          $t9, 0x154($sp)
    MEM_B(0X154, ctx->r29) = ctx->r25;
    // 0x151D0B94: sb          $t0, 0x155($sp)
    MEM_B(0X155, ctx->r29) = ctx->r8;
    // 0x151D0B98: sb          $t4, 0x160($sp)
    MEM_B(0X160, ctx->r29) = ctx->r12;
    // 0x151D0B9C: sb          $t5, 0x161($sp)
    MEM_B(0X161, ctx->r29) = ctx->r13;
    // 0x151D0BA0: swc1        $f20, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f20.u32l;
    // 0x151D0BA4: sb          $t3, 0x168($sp)
    MEM_B(0X168, ctx->r29) = ctx->r11;
    // 0x151D0BA8: swc1        $f20, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f20.u32l;
    // 0x151D0BAC: swc1        $f22, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f22.u32l;
    // 0x151D0BB0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x151D0BB4: swc1        $f10, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f10.u32l;
    // 0x151D0BB8: swc1        $f16, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f16.u32l;
    // 0x151D0BBC: swc1        $f18, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f18.u32l;
    // 0x151D0BC0: swc1        $f4, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f4.u32l;
    // 0x151D0BC4: jal         0x1514FF44
    // 0x151D0BC8: swc1        $f6, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f6.u32l;
    func_1514FF44(rdram, ctx);
        goto after_2;
    // 0x151D0BC8: swc1        $f6, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x151D0BCC: addiu       $a1, $sp, 0xEC
    ctx->r5 = ADD32(ctx->r29, 0XEC);
    // 0x151D0BD0: lw          $at, 0x0($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X0);
    // 0x151D0BD4: lw          $t6, 0x4($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X4);
    // 0x151D0BD8: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x151D0BDC: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x151D0BE0: lw          $at, 0x8($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X8);
    // 0x151D0BE4: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x151D0BE8: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x151D0BEC: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x151D0BF0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151D0BF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151D0BF8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151D0BFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151D0C00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0C04: lwc1        $f16, -0x4F78($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4F78);
    // 0x151D0C08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0C0C: lwc1        $f18, -0x4F74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4F74);
    // 0x151D0C10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0C14: lwc1        $f4, -0x4F70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4F70);
    // 0x151D0C18: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0C1C: lwc1        $f6, -0x4F6C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4F6C);
    // 0x151D0C20: sh          $t1, 0x110($sp)
    MEM_H(0X110, ctx->r29) = ctx->r9;
    // 0x151D0C24: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x151D0C28: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x151D0C2C: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x151D0C30: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x151D0C34: addiu       $t3, $zero, 0x9B
    ctx->r11 = ADD32(0, 0X9B);
    // 0x151D0C38: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x151D0C3C: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x151D0C40: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x151D0C44: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x151D0C48: sh          $t2, 0x112($sp)
    MEM_H(0X112, ctx->r29) = ctx->r10;
    // 0x151D0C4C: sh          $t9, 0x114($sp)
    MEM_H(0X114, ctx->r29) = ctx->r25;
    // 0x151D0C50: sh          $t0, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r8;
    // 0x151D0C54: sh          $t4, 0x118($sp)
    MEM_H(0X118, ctx->r29) = ctx->r12;
    // 0x151D0C58: sh          $t5, 0x11A($sp)
    MEM_H(0X11A, ctx->r29) = ctx->r13;
    // 0x151D0C5C: sh          $t3, 0x11C($sp)
    MEM_H(0X11C, ctx->r29) = ctx->r11;
    // 0x151D0C60: sh          $t7, 0x11E($sp)
    MEM_H(0X11E, ctx->r29) = ctx->r15;
    // 0x151D0C64: swc1        $f20, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f20.u32l;
    // 0x151D0C68: sh          $t8, 0x128($sp)
    MEM_H(0X128, ctx->r29) = ctx->r24;
    // 0x151D0C6C: sh          $t6, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r14;
    // 0x151D0C70: sw          $zero, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = 0;
    // 0x151D0C74: sb          $t1, 0x120($sp)
    MEM_B(0X120, ctx->r29) = ctx->r9;
    // 0x151D0C78: swc1        $f22, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f22.u32l;
    // 0x151D0C7C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x151D0C80: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x151D0C84: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x151D0C88: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    // 0x151D0C8C: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    // 0x151D0C90: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    // 0x151D0C94: swc1        $f16, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f16.u32l;
    // 0x151D0C98: swc1        $f18, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f18.u32l;
    // 0x151D0C9C: swc1        $f4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f4.u32l;
    // 0x151D0CA0: jal         0x15153CCC
    // 0x151D0CA4: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    func_15153CCC(rdram, ctx);
        goto after_3;
    // 0x151D0CA4: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x151D0CA8: jal         0x1514F6E8
    // 0x151D0CAC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_1514F6E8(rdram, ctx);
        goto after_4;
    // 0x151D0CAC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_4:
    // 0x151D0CB0: beq         $v0, $zero, L_151D0EA0
    if (ctx->r2 == 0) {
        // 0x151D0CB4: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_151D0EA0;
    }
    // 0x151D0CB4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x151D0CB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151D0CBC: jal         0x150ADA20
    // 0x151D0CC0: swc1        $f8, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151D0CC0: swc1        $f8, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x151D0CC4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151D0CC8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151D0CCC: lui         $t0, 0x20
    ctx->r8 = S32(0X20 << 16);
    // 0x151D0CD0: addiu       $t2, $zero, 0x3E
    ctx->r10 = ADD32(0, 0X3E);
    // 0x151D0CD4: addiu       $t9, $zero, 0x2203
    ctx->r25 = ADD32(0, 0X2203);
    // 0x151D0CD8: ori         $t0, $t0, 0x5
    ctx->r8 = ctx->r8 | 0X5;
    // 0x151D0CDC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151D0CE0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151D0CE4: sb          $t2, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r10;
    // 0x151D0CE8: sh          $t9, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r25;
    // 0x151D0CEC: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x151D0CF0: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x151D0CF4: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x151D0CF8: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x151D0CFC: sb          $zero, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = 0;
    // 0x151D0D00: sb          $zero, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = 0;
    // 0x151D0D04: sb          $zero, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = 0;
    // 0x151D0D08: sb          $t4, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = ctx->r12;
    // 0x151D0D0C: sb          $zero, 0x90($sp)
    MEM_B(0X90, ctx->r29) = 0;
    // 0x151D0D10: sb          $zero, 0x91($sp)
    MEM_B(0X91, ctx->r29) = 0;
    // 0x151D0D14: sb          $zero, 0x92($sp)
    MEM_B(0X92, ctx->r29) = 0;
    // 0x151D0D18: sb          $zero, 0x93($sp)
    MEM_B(0X93, ctx->r29) = 0;
    // 0x151D0D1C: sb          $t5, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r13;
    // 0x151D0D20: lw          $at, 0x0($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X0);
    // 0x151D0D24: addiu       $t3, $sp, 0xA8
    ctx->r11 = ADD32(ctx->r29, 0XA8);
    // 0x151D0D28: addiu       $t1, $sp, 0xB4
    ctx->r9 = ADD32(ctx->r29, 0XB4);
    // 0x151D0D2C: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151D0D30: lw          $t6, 0x4($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X4);
    // 0x151D0D34: mfhi        $s1
    ctx->r17 = hi;
    // 0x151D0D38: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151D0D3C: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x151D0D40: lw          $at, 0x8($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X8);
    // 0x151D0D44: ori         $t5, $zero, 0xC007
    ctx->r13 = 0 | 0XC007;
    // 0x151D0D48: addiu       $s1, $s1, 0x5
    ctx->r17 = ADD32(ctx->r17, 0X5);
    // 0x151D0D4C: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151D0D50: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x151D0D54: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x151D0D58: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x151D0D5C: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x151D0D60: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151D0D64: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x151D0D68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151D0D6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151D0D70: sh          $t4, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r12;
    // 0x151D0D74: sw          $t5, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r13;
    // 0x151D0D78: jal         0x150ADA20
    // 0x151D0D7C: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151D0D7C: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x151D0D80: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x151D0D84: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151D0D88: mfhi        $t8
    ctx->r24 = hi;
    // 0x151D0D8C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0D90: lwc1        $f16, -0x4F68($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4F68);
    // 0x151D0D94: addiu       $t7, $t8, 0x28
    ctx->r15 = ADD32(ctx->r24, 0X28);
    // 0x151D0D98: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151D0D9C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151D0DA0: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x151D0DA4: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x151D0DA8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151D0DAC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x151D0DB0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151D0DB4: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x151D0DB8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151D0DBC: sh          $t7, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r15;
    // 0x151D0DC0: sh          $t3, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r11;
    // 0x151D0DC4: sh          $t6, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r14;
    // 0x151D0DC8: sb          $t9, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = ctx->r25;
    // 0x151D0DCC: sb          $t2, 0xD9($sp)
    MEM_B(0XD9, ctx->r29) = ctx->r10;
    // 0x151D0DD0: sb          $t1, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r9;
    // 0x151D0DD4: sb          $t0, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = ctx->r8;
    // 0x151D0DD8: sb          $t4, 0xDB($sp)
    MEM_B(0XDB, ctx->r29) = ctx->r12;
    // 0x151D0DDC: sb          $t5, 0xDD($sp)
    MEM_B(0XDD, ctx->r29) = ctx->r13;
    // 0x151D0DE0: sw          $zero, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = 0;
    // 0x151D0DE4: sb          $t8, 0xDE($sp)
    MEM_B(0XDE, ctx->r29) = ctx->r24;
    // 0x151D0DE8: sh          $zero, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = 0;
    // 0x151D0DEC: swc1        $f20, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f20.u32l;
    // 0x151D0DF0: swc1        $f20, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f20.u32l;
    // 0x151D0DF4: beq         $s1, $zero, L_151D0EA0
    if (ctx->r17 == 0) {
        // 0x151D0DF8: swc1        $f16, 0xE4($sp)
        MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
            goto L_151D0EA0;
    }
    // 0x151D0DF8: swc1        $f16, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
    // 0x151D0DFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0E00: lwc1        $f24, -0x4F64($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X4F64);
    // 0x151D0E04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0E08: lwc1        $f22, -0x4F60($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X4F60);
    // 0x151D0E0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D0E10: lwc1        $f20, -0x4F5C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X4F5C);
    // 0x151D0E14: addiu       $s5, $sp, 0x78
    ctx->r21 = ADD32(ctx->r29, 0X78);
    // 0x151D0E18: addiu       $s4, $sp, 0xC0
    ctx->r20 = ADD32(ctx->r29, 0XC0);
L_151D0E1C:
    // 0x151D0E1C: jal         0x150ADA68
    // 0x151D0E20: nop

    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x151D0E20: nop

    after_7:
    // 0x151D0E24: mul.s       $f18, $f0, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x151D0E28: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x151D0E2C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x151D0E30: add.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f20.fl;
    // 0x151D0E34: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x151D0E38: jal         0x1514F808
    // 0x151D0E3C: nop

    func_1514F808(rdram, ctx);
        goto after_8;
    // 0x151D0E3C: nop

    after_8:
    // 0x151D0E40: jal         0x150ADA68
    // 0x151D0E44: nop

    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x151D0E44: nop

    after_9:
    // 0x151D0E48: mul.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x151D0E4C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x151D0E50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151D0E54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151D0E58: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x151D0E5C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x151D0E60: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x151D0E64: add.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x151D0E68: jal         0x15130280
    // 0x151D0E6C: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    func_15130280(rdram, ctx);
        goto after_10;
    // 0x151D0E6C: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x151D0E70: beq         $v0, $zero, L_151D0E94
    if (ctx->r2 == 0) {
        // 0x151D0E74: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_151D0E94;
    }
    // 0x151D0E74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151D0E78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151D0E7C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x151D0E80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151D0E84: andi        $a3, $s2, 0xFF
    ctx->r7 = ctx->r18 & 0XFF;
    // 0x151D0E88: jal         0x151CEAAC
    // 0x151D0E8C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    func_151CEAAC(rdram, ctx);
        goto after_11;
    // 0x151D0E8C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_11:
    // 0x151D0E90: sw          $v0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r2;
L_151D0E94:
    // 0x151D0E94: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x151D0E98: bne         $s1, $zero, L_151D0E1C
    if (ctx->r17 != 0) {
        // 0x151D0E9C: nop
    
            goto L_151D0E1C;
    }
    // 0x151D0E9C: nop

L_151D0EA0:
    // 0x151D0EA0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x151D0EA4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x151D0EA8: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x151D0EAC: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x151D0EB0: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x151D0EB4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x151D0EB8: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x151D0EBC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x151D0EC0: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x151D0EC4: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x151D0EC8: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x151D0ECC: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x151D0ED0: jr          $ra
    // 0x151D0ED4: addiu       $sp, $sp, 0x1E8
    ctx->r29 = ADD32(ctx->r29, 0X1E8);
    return;
    return;
    // 0x151D0ED4: addiu       $sp, $sp, 0x1E8
    ctx->r29 = ADD32(ctx->r29, 0X1E8);
;}
RECOMP_FUNC void func_151103C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151103C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151103CC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151103D0: addiu       $v1, $v1, -0x4158
    ctx->r3 = ADD32(ctx->r3, -0X4158);
    // 0x151103D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151103D8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151103DC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151103E0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151103E4: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x151103E8: lw          $t7, 0x2FA4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2FA4);
    // 0x151103EC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151103F0: lw          $t6, -0x19D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X19D8);
    // 0x151103F4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151103F8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x151103FC: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x15110400: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x15110404: lwc1        $f4, 0x2C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x15110408: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x1511040C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15110410: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15110414: lwc1        $f16, 0x30($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X30);
    // 0x15110418: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1511041C: lbu         $t7, 0x2($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X2);
    // 0x15110420: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x15110424: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15110428: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    // 0x1511042C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15110430: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x15110434: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15110438: lbu         $t5, 0x1($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X1);
    // 0x1511043C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15110440: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x15110444: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x15110448: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1511044C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x15110450: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15110454: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x15110458: jal         0x15110544
    // 0x1511045C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_15110544(rdram, ctx);
        goto after_0;
    // 0x1511045C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_0:
    // 0x15110460: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x15110464: lw          $t6, 0x2FA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA0);
    // 0x15110468: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1511046C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15110470: beql        $t6, $zero, L_15110534
    if (ctx->r14 == 0) {
        // 0x15110474: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_15110534;
    }
    goto skip_0;
    // 0x15110474: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
    // 0x15110478: lw          $t8, 0x2FA4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2FA4);
    // 0x1511047C: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x15110480: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15110484: bne         $t8, $zero, L_15110530
    if (ctx->r24 != 0) {
        // 0x15110488: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_15110530;
    }
    // 0x15110488: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1511048C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15110490: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15110494: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15110498: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1511049C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151104A0: jal         0x1501A490
    // 0x151104A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1501A490(rdram, ctx);
        goto after_1;
    // 0x151104A4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x151104A8: lui         $t1, 0x1
    ctx->r9 = S32(0X1 << 16);
    // 0x151104AC: ori         $t1, $t1, 0x1
    ctx->r9 = ctx->r9 | 0X1;
    // 0x151104B0: lui         $t0, 0xF700
    ctx->r8 = S32(0XF700 << 16);
    // 0x151104B4: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x151104B8: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x151104BC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x151104C0: lw          $v1, -0x19DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X19DC);
    // 0x151104C4: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x151104C8: lw          $a3, -0x19E0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X19E0);
    // 0x151104CC: sra         $t2, $v1, 1
    ctx->r10 = S32(SIGNED(ctx->r3) >> 1);
    // 0x151104D0: addiu       $t3, $t2, 0x6
    ctx->r11 = ADD32(ctx->r10, 0X6);
    // 0x151104D4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151104D8: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x151104DC: addiu       $a2, $t2, -0x6
    ctx->r6 = ADD32(ctx->r10, -0X6);
    // 0x151104E0: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x151104E4: jal         0x1501A6CC
    // 0x151104E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1501A6CC(rdram, ctx);
        goto after_2;
    // 0x151104E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x151104EC: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x151104F0: lw          $t4, 0x2FA0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2FA0);
    // 0x151104F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151104F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151104FC: beq         $t4, $at, L_15110530
    if (ctx->r12 == ctx->r1) {
        // 0x15110500: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_15110530;
    }
    // 0x15110500: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15110504: lw          $v0, -0x19E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19E0);
    // 0x15110508: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1511050C: lw          $t7, -0x19DC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X19DC);
    // 0x15110510: sra         $t5, $v0, 1
    ctx->r13 = S32(SIGNED(ctx->r2) >> 1);
    // 0x15110514: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x15110518: addiu       $a1, $t5, -0x1
    ctx->r5 = ADD32(ctx->r13, -0X1);
    // 0x1511051C: addiu       $a3, $t5, 0x1
    ctx->r7 = ADD32(ctx->r13, 0X1);
    // 0x15110520: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15110524: jal         0x1501A6CC
    // 0x15110528: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_1501A6CC(rdram, ctx);
        goto after_3;
    // 0x15110528: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_3:
    // 0x1511052C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_15110530:
    // 0x15110530: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_15110534:
    // 0x15110534: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15110538: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1511053C: jr          $ra
    // 0x15110540: nop

    return;
    return;
    // 0x15110540: nop

;}
RECOMP_FUNC void func_10012934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10012934: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10012938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001293C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10012940: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x10012944: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x10012948: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1001294C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x10012950: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x10012954: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x10012958: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001295C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x10012960: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x10012964: addiu       $at, $zero, 0x4231
    ctx->r1 = ADD32(0, 0X4231);
    // 0x10012968: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x1001296C: beq         $t0, $at, L_1001297C
    if (ctx->r8 == ctx->r1) {
        // 0x10012970: nop
    
            goto L_1001297C;
    }
    // 0x10012970: nop

    // 0x10012974: b           L_10012A18
    // 0x10012978: nop

        goto L_10012A18;
    // 0x10012978: nop

L_1001297C:
    // 0x1001297C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x10012980: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x10012984: lh          $t2, 0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2);
    // 0x10012988: blez        $t2, L_10012A10
    if (SIGNED(ctx->r10) <= 0) {
        // 0x1001298C: nop
    
            goto L_10012A10;
    }
    // 0x1001298C: nop

L_10012990:
    // 0x10012990: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x10012994: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x10012998: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x1001299C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x100129A0: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x100129A4: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x100129A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x100129AC: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x100129B0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x100129B4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x100129B8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x100129BC: addu        $t4, $t0, $t2
    ctx->r12 = ADD32(ctx->r8, ctx->r10);
    // 0x100129C0: lw          $t3, 0x4($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X4);
    // 0x100129C4: beq         $t3, $zero, L_100129F0
    if (ctx->r11 == 0) {
        // 0x100129C8: nop
    
            goto L_100129F0;
    }
    // 0x100129C8: nop

    // 0x100129CC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x100129D0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x100129D4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x100129D8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x100129DC: addu        $t9, $t5, $t8
    ctx->r25 = ADD32(ctx->r13, ctx->r24);
    // 0x100129E0: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x100129E4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x100129E8: jal         0x10012A28
    // 0x100129EC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    func_10012A28(rdram, ctx);
        goto after_0;
    // 0x100129EC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    after_0:
L_100129F0:
    // 0x100129F0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x100129F4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x100129F8: addiu       $t1, $t6, 0x1
    ctx->r9 = ADD32(ctx->r14, 0X1);
    // 0x100129FC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x10012A00: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x10012A04: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x10012A08: bne         $at, $zero, L_10012990
    if (ctx->r1 != 0) {
        // 0x10012A0C: nop
    
            goto L_10012990;
    }
    // 0x10012A0C: nop

L_10012A10:
    // 0x10012A10: b           L_10012A18
    // 0x10012A14: nop

        goto L_10012A18;
    // 0x10012A14: nop

L_10012A18:
    // 0x10012A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10012A1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10012A20: jr          $ra
    // 0x10012A24: nop

    return;
    return;
    // 0x10012A24: nop

;}
RECOMP_FUNC void func_15133510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15133510: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15133514: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15133518: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1513351C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15133520: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x15133524: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x15133528: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x1513352C: lw          $a3, 0x20($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X20);
    // 0x15133530: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15133534: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15133538: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x1513353C: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15133540: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x15133544: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15133548: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x1513354C: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15133550: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x15133554: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15133558: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x1513355C: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15133560: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x15133564: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x15133568: jal         0x151424F4
    // 0x1513356C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_151424F4(rdram, ctx);
        goto after_0;
    // 0x1513356C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x15133570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15133574: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15133578: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x1513357C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15133580: jr          $ra
    // 0x15133584: nop

    return;
    return;
    // 0x15133584: nop

;}
RECOMP_FUNC void func_151CBB6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CBB6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151CBB70: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151CBB74: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151CBB78: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151CBB7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151CBB80: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x151CBB84: bne         $a2, $at, L_151CBBAC
    if (ctx->r6 != ctx->r1) {
        // 0x151CBB88: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_151CBBAC;
    }
    // 0x151CBB88: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151CBB8C: lw          $t7, 0x20($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X20);
    // 0x151CBB90: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x151CBB94: bnel        $t7, $t8, L_151CBBD4
    if (ctx->r15 != ctx->r24) {
        // 0x151CBB98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151CBBD4;
    }
    goto skip_0;
    // 0x151CBB98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151CBB9C: jal         0x1516972C
    // 0x151CBBA0: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151CBBA0: nop

    after_0:
    // 0x151CBBA4: b           L_151CBBD4
    // 0x151CBBA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151CBBD4;
    // 0x151CBBA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151CBBAC:
    // 0x151CBBAC: bnel        $v0, $zero, L_151CBBD4
    if (ctx->r2 != 0) {
        // 0x151CBBB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151CBBD4;
    }
    goto skip_1;
    // 0x151CBBB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x151CBBB4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x151CBBB8: lw          $t9, 0x20($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X20);
    // 0x151CBBBC: lw          $t0, 0x318($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X318);
    // 0x151CBBC0: bnel        $t9, $t0, L_151CBBD4
    if (ctx->r25 != ctx->r8) {
        // 0x151CBBC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151CBBD4;
    }
    goto skip_2;
    // 0x151CBBC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x151CBBC8: jal         0x1516972C
    // 0x151CBBCC: nop

    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x151CBBCC: nop

    after_1:
    // 0x151CBBD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151CBBD4:
    // 0x151CBBD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151CBBD8: jr          $ra
    // 0x151CBBDC: nop

    return;
    return;
    // 0x151CBBDC: nop

;}
RECOMP_FUNC void func_15042D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15042D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15042D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15042D58: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15042D5C: sw          $zero, -0x429C($at)
    MEM_W(-0X429C, ctx->r1) = 0;
    // 0x15042D60: jal         0x15043384
    // 0x15042D64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15043384(rdram, ctx);
        goto after_0;
    // 0x15042D64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x15042D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15042D6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15042D70: jr          $ra
    // 0x15042D74: nop

    return;
    return;
    // 0x15042D74: nop

;}
RECOMP_FUNC void func_151C1814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C1814: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151C1818: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151C181C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151C1820: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x151C1824: bne         $a2, $at, L_151C1858
    if (ctx->r6 != ctx->r1) {
        // 0x151C1828: addiu       $v0, $a0, 0x170
        ctx->r2 = ADD32(ctx->r4, 0X170);
            goto L_151C1858;
    }
    // 0x151C1828: addiu       $v0, $a0, 0x170
    ctx->r2 = ADD32(ctx->r4, 0X170);
    // 0x151C182C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151C1830: lw          $a2, 0x6C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X6C);
    // 0x151C1834: bnel        $v1, $a2, L_151C184C
    if (ctx->r3 != ctx->r6) {
        // 0x151C1838: lw          $t8, 0x4($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X4);
            goto L_151C184C;
    }
    goto skip_0;
    // 0x151C1838: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x151C183C: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x151C1840: jr          $ra
    // 0x151C1844: sw          $t7, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r15;
    return;
    return;
    // 0x151C1844: sw          $t7, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r15;
    // 0x151C1848: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
L_151C184C:
    // 0x151C184C: bne         $t8, $a2, L_151C1858
    if (ctx->r24 != ctx->r6) {
        // 0x151C1850: nop
    
            goto L_151C1858;
    }
    // 0x151C1850: nop

    // 0x151C1854: sw          $v1, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r3;
L_151C1858:
    // 0x151C1858: jr          $ra
    // 0x151C185C: nop

    return;
    return;
    // 0x151C185C: nop

;}
RECOMP_FUNC void func_15182768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15182768: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1518276C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15182770: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x15182774: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15182778: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1518277C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15182780: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x15182784: lbu         $t9, 0x2C($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X2C);
    // 0x15182788: addiu       $v0, $t8, 0x28
    ctx->r2 = ADD32(ctx->r24, 0X28);
    // 0x1518278C: bnel        $a2, $t9, L_151827BC
    if (ctx->r6 != ctx->r25) {
        // 0x15182790: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_151827BC;
    }
    goto skip_0;
    // 0x15182790: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
    // 0x15182794: lbu         $t0, 0x2($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X2);
    // 0x15182798: lbu         $a1, 0x3($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3);
    // 0x1518279C: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x151827A0: lbu         $a3, 0x1($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X1);
    // 0x151827A4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151827A8: lbu         $t1, 0x4($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X4);
    // 0x151827AC: jal         0x1517F08C
    // 0x151827B0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_1517F08C(rdram, ctx);
        goto after_0;
    // 0x151827B0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_0:
    // 0x151827B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151827B8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_151827BC:
    // 0x151827BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151827C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151827C4: jr          $ra
    // 0x151827C8: nop

    return;
    return;
    // 0x151827C8: nop

;}
RECOMP_FUNC void func_150D5440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D5440: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150D5444: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150D5448: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x150D544C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x150D5450: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x150D5454: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x150D5458: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150D545C: lbu         $t0, 0x47($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X47);
    // 0x150D5460: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x150D5464: lbu         $t7, 0x3B($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3B);
    // 0x150D5468: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x150D546C: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x150D5470: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x150D5474: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x150D5478: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150D547C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150D5480: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150D5484: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150D5488: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x150D548C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150D5490: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x150D5494: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x150D5498: sb          $t7, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r15;
    // 0x150D549C: jal         0x15149130
    // 0x150D54A0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x150D54A0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_0:
    // 0x150D54A4: beq         $v0, $zero, L_150D54B8
    if (ctx->r2 == 0) {
        // 0x150D54A8: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150D54B8;
    }
    // 0x150D54A8: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150D54AC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x150D54B0: jal         0x10022EC0
    // 0x150D54B4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150D54B4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_1:
L_150D54B8:
    // 0x150D54B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150D54BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x150D54C0: jr          $ra
    // 0x150D54C4: nop

    return;
    return;
    // 0x150D54C4: nop

;}
RECOMP_FUNC void func_1508A6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508A6FC: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x1508A700: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x1508A704: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x1508A708: addiu       $s1, $s1, 0x23B0
    ctx->r17 = ADD32(ctx->r17, 0X23B0);
    // 0x1508A70C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1508A710: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x1508A714: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x1508A718: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x1508A71C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x1508A720: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x1508A724: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x1508A728: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x1508A72C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1508A730: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1508A734: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x1508A738: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x1508A73C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1508A740: lw          $t6, 0x14($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X14);
    // 0x1508A744: addiu       $t8, $t1, 0xE64
    ctx->r24 = ADD32(ctx->r9, 0XE64);
    // 0x1508A748: addiu       $t9, $t1, 0x35C
    ctx->r25 = ADD32(ctx->r9, 0X35C);
    // 0x1508A74C: sw          $t6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r14;
    // 0x1508A750: lw          $t7, 0x18($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X18);
    // 0x1508A754: addiu       $t2, $t1, 0x31C
    ctx->r10 = ADD32(ctx->r9, 0X31C);
    // 0x1508A758: addiu       $t3, $t1, 0x19C
    ctx->r11 = ADD32(ctx->r9, 0X19C);
    // 0x1508A75C: sw          $t7, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r15;
    // 0x1508A760: lw          $a1, 0x10($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X10);
    // 0x1508A764: sw          $t8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r24;
    // 0x1508A768: sw          $t9, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r25;
    // 0x1508A76C: sw          $t2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r10;
    // 0x1508A770: addiu       $t4, $t1, 0x21C
    ctx->r12 = ADD32(ctx->r9, 0X21C);
    // 0x1508A774: addiu       $t5, $t1, 0x29C
    ctx->r13 = ADD32(ctx->r9, 0X29C);
    // 0x1508A778: addiu       $t6, $t1, 0x25C
    ctx->r14 = ADD32(ctx->r9, 0X25C);
    // 0x1508A77C: addiu       $t7, $t1, 0x41C
    ctx->r15 = ADD32(ctx->r9, 0X41C);
    // 0x1508A780: addiu       $t8, $t1, 0x3DC
    ctx->r24 = ADD32(ctx->r9, 0X3DC);
    // 0x1508A784: addiu       $t9, $t1, 0xDDC
    ctx->r25 = ADD32(ctx->r9, 0XDDC);
    // 0x1508A788: addiu       $t2, $t1, 0x1574
    ctx->r10 = ADD32(ctx->r9, 0X1574);
    // 0x1508A78C: sw          $t3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r11;
    // 0x1508A790: sw          $t4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r12;
    // 0x1508A794: sw          $t5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r13;
    // 0x1508A798: sw          $t6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r14;
    // 0x1508A79C: sw          $t7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r15;
    // 0x1508A7A0: sw          $t8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r24;
    // 0x1508A7A4: sw          $t9, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r25;
    // 0x1508A7A8: sw          $t2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r10;
    // 0x1508A7AC: addiu       $v0, $t1, 0x1C
    ctx->r2 = ADD32(ctx->r9, 0X1C);
    // 0x1508A7B0: addiu       $v1, $t1, 0x39C
    ctx->r3 = ADD32(ctx->r9, 0X39C);
    // 0x1508A7B4: blez        $a1, L_1508AFC8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1508A7B8: addiu       $a0, $t1, 0x9C
        ctx->r4 = ADD32(ctx->r9, 0X9C);
            goto L_1508AFC8;
    }
    // 0x1508A7B8: addiu       $a0, $t1, 0x9C
    ctx->r4 = ADD32(ctx->r9, 0X9C);
    // 0x1508A7BC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1508A7C0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1508A7C4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1508A7C8: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x1508A7CC: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    // 0x1508A7D0: sw          $a0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r4;
    // 0x1508A7D4: sw          $a1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r5;
L_1508A7D8:
    // 0x1508A7D8: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x1508A7DC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1508A7E0: sllv        $fp, $t4, $s2
    ctx->r30 = S32(ctx->r12 << (ctx->r18 & 31));
    // 0x1508A7E4: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
    // 0x1508A7E8: lw          $t5, 0xEC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XEC);
    // 0x1508A7EC: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x1508A7F0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x1508A7F4: and         $v0, $t5, $fp
    ctx->r2 = ctx->r13 & ctx->r30;
    // 0x1508A7F8: bne         $v0, $zero, L_1508A814
    if (ctx->r2 != 0) {
        // 0x1508A7FC: and         $t7, $t6, $fp
        ctx->r15 = ctx->r14 & ctx->r30;
            goto L_1508A814;
    }
    // 0x1508A7FC: and         $t7, $t6, $fp
    ctx->r15 = ctx->r14 & ctx->r30;
    // 0x1508A800: bne         $t7, $zero, L_1508A80C
    if (ctx->r15 != 0) {
        // 0x1508A804: lw          $t8, 0xE8($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XE8);
            goto L_1508A80C;
    }
    // 0x1508A804: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    // 0x1508A808: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_1508A80C:
    // 0x1508A80C: or          $t9, $t8, $fp
    ctx->r25 = ctx->r24 | ctx->r30;
    // 0x1508A810: sw          $t9, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r25;
L_1508A814:
    // 0x1508A814: bne         $v0, $zero, L_1508A824
    if (ctx->r2 != 0) {
        // 0x1508A818: lw          $t2, 0xDC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XDC);
            goto L_1508A824;
    }
    // 0x1508A818: lw          $t2, 0xDC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XDC);
    // 0x1508A81C: beq         $s4, $zero, L_1508AF80
    if (ctx->r20 == 0) {
        // 0x1508A820: lw          $t5, 0x60($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X60);
            goto L_1508AF80;
    }
    // 0x1508A820: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
L_1508A824:
    // 0x1508A824: sll         $t4, $s2, 2
    ctx->r12 = S32(ctx->r18 << 2);
    // 0x1508A828: subu        $t4, $t4, $s2
    ctx->r12 = SUB32(ctx->r12, ctx->r18);
    // 0x1508A82C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1508A830: addu        $t4, $t4, $s2
    ctx->r12 = ADD32(ctx->r12, ctx->r18);
    // 0x1508A834: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1508A838: subu        $t4, $t4, $s2
    ctx->r12 = SUB32(ctx->r12, ctx->r18);
    // 0x1508A83C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1508A840: subu        $t4, $t4, $s2
    ctx->r12 = SUB32(ctx->r12, ctx->r18);
    // 0x1508A844: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1508A848: addiu       $t5, $t5, -0x3D30
    ctx->r13 = ADD32(ctx->r13, -0X3D30);
    // 0x1508A84C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1508A850: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1508A854: addu        $s3, $t4, $t5
    ctx->r19 = ADD32(ctx->r12, ctx->r13);
    // 0x1508A858: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x1508A85C: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x1508A860: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x1508A864: lw          $s5, 0x0($t3)
    ctx->r21 = MEM_W(ctx->r11, 0X0);
    // 0x1508A868: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x1508A86C: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x1508A870: lw          $t5, 0xCC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XCC);
    // 0x1508A874: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x1508A878: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    // 0x1508A87C: addu        $v1, $t4, $s0
    ctx->r3 = ADD32(ctx->r12, ctx->r16);
    // 0x1508A880: addu        $t2, $t9, $s0
    ctx->r10 = ADD32(ctx->r25, ctx->r16);
    // 0x1508A884: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x1508A888: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x1508A88C: sw          $t2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r10;
    // 0x1508A890: lw          $t2, 0xD8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD8);
    // 0x1508A894: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1508A898: addu        $v0, $t3, $s0
    ctx->r2 = ADD32(ctx->r11, ctx->r16);
    // 0x1508A89C: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x1508A8A0: addu        $s7, $t8, $s0
    ctx->r23 = ADD32(ctx->r24, ctx->r16);
    // 0x1508A8A4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1508A8A8: addiu       $t9, $t9, 0xBB8
    ctx->r25 = ADD32(ctx->r25, 0XBB8);
    // 0x1508A8AC: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x1508A8B0: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x1508A8B4: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    // 0x1508A8B8: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x1508A8BC: addu        $a2, $s2, $t9
    ctx->r6 = ADD32(ctx->r18, ctx->r25);
    // 0x1508A8C0: sb          $t3, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r11;
    // 0x1508A8C4: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x1508A8C8: beq         $s5, $zero, L_1508A8EC
    if (ctx->r21 == 0) {
        // 0x1508A8CC: addu        $s6, $t2, $s0
        ctx->r22 = ADD32(ctx->r10, ctx->r16);
            goto L_1508A8EC;
    }
    // 0x1508A8CC: addu        $s6, $t2, $s0
    ctx->r22 = ADD32(ctx->r10, ctx->r16);
    // 0x1508A8D0: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x1508A8D4: addiu       $at, $zero, 0xB9
    ctx->r1 = ADD32(0, 0XB9);
    // 0x1508A8D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1508A8DC: lh          $t7, 0x16BC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X16BC);
    // 0x1508A8E0: bnel        $t7, $at, L_1508A8F0
    if (ctx->r15 != ctx->r1) {
        // 0x1508A8E4: lw          $a0, 0x7C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X7C);
            goto L_1508A8F0;
    }
    goto skip_0;
    // 0x1508A8E4: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    skip_0:
    // 0x1508A8E8: sb          $t8, 0x1E4($s3)
    MEM_B(0X1E4, ctx->r19) = ctx->r24;
L_1508A8EC:
    // 0x1508A8EC: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
L_1508A8F0:
    // 0x1508A8F0: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x1508A8F4: addiu       $a3, $a3, -0x161C
    ctx->r7 = ADD32(ctx->r7, -0X161C);
    // 0x1508A8F8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x1508A8FC: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x1508A900: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x1508A904: sw          $t9, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r25;
    // 0x1508A908: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x1508A90C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x1508A910: sw          $t4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r12;
    // 0x1508A914: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x1508A918: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x1508A91C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x1508A920: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x1508A924: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x1508A928: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x1508A92C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1508A930: subu        $t2, $t8, $t9
    ctx->r10 = SUB32(ctx->r24, ctx->r25);
    // 0x1508A934: bgtz        $t2, L_1508A944
    if (SIGNED(ctx->r10) > 0) {
        // 0x1508A938: sw          $t2, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r10;
            goto L_1508A944;
    }
    // 0x1508A938: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x1508A93C: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x1508A940: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
L_1508A944:
    // 0x1508A944: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x1508A948: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x1508A94C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1508A950: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x1508A954: bgtz        $t7, L_1508A960
    if (SIGNED(ctx->r15) > 0) {
        // 0x1508A958: sw          $t7, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r15;
            goto L_1508A960;
    }
    // 0x1508A958: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1508A95C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_1508A960:
    // 0x1508A960: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1508A964: lw          $t2, -0x161C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X161C);
    // 0x1508A968: subu        $t3, $t9, $t2
    ctx->r11 = SUB32(ctx->r25, ctx->r10);
    // 0x1508A96C: bgez        $t3, L_1508A978
    if (SIGNED(ctx->r11) >= 0) {
        // 0x1508A970: sw          $t3, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r11;
            goto L_1508A978;
    }
    // 0x1508A970: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x1508A974: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_1508A978:
    // 0x1508A978: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x1508A97C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1508A980: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x1508A984: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1508A988: bnel        $t6, $at, L_1508A9BC
    if (ctx->r14 != ctx->r1) {
        // 0x1508A98C: lbu         $t2, 0x0($a2)
        ctx->r10 = MEM_BU(ctx->r6, 0X0);
            goto L_1508A9BC;
    }
    goto skip_1;
    // 0x1508A98C: lbu         $t2, 0x0($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X0);
    skip_1:
    // 0x1508A990: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1508A994: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1508A998: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    // 0x1508A99C: andi        $t9, $t8, 0x1F
    ctx->r25 = ctx->r24 & 0X1F;
    // 0x1508A9A0: slti        $at, $t9, 0x1D
    ctx->r1 = SIGNED(ctx->r25) < 0X1D ? 1 : 0;
    // 0x1508A9A4: bnel        $at, $zero, L_1508A9BC
    if (ctx->r1 != 0) {
        // 0x1508A9A8: lbu         $t2, 0x0($a2)
        ctx->r10 = MEM_BU(ctx->r6, 0X0);
            goto L_1508A9BC;
    }
    goto skip_2;
    // 0x1508A9A8: lbu         $t2, 0x0($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X0);
    skip_2:
    // 0x1508A9AC: jal         0x1508EC5C
    // 0x1508A9B0: sw          $a2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r6;
    func_1508EC5C(rdram, ctx);
        goto after_0;
    // 0x1508A9B0: sw          $a2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r6;
    after_0:
    // 0x1508A9B4: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x1508A9B8: lbu         $t2, 0x0($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X0);
L_1508A9BC:
    // 0x1508A9BC: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x1508A9C0: addiu       $at, $zero, -0x4DC
    ctx->r1 = ADD32(0, -0X4DC);
    // 0x1508A9C4: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x1508A9C8: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x1508A9CC: lbu         $t4, 0x0($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X0);
    // 0x1508A9D0: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x1508A9D4: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x1508A9D8: andi        $t5, $t4, 0x7F
    ctx->r13 = ctx->r12 & 0X7F;
    // 0x1508A9DC: beq         $t1, $at, L_1508A9F4
    if (ctx->r9 == ctx->r1) {
        // 0x1508A9E0: sb          $t5, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r13;
            goto L_1508A9F4;
    }
    // 0x1508A9E0: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
    // 0x1508A9E4: lw          $t6, 0x31C($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X31C);
    // 0x1508A9E8: addu        $t8, $t1, $s0
    ctx->r24 = ADD32(ctx->r9, ctx->r16);
    // 0x1508A9EC: lbu         $t7, 0x19A($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X19A);
    // 0x1508A9F0: sw          $t7, 0x4DC($t8)
    MEM_W(0X4DC, ctx->r24) = ctx->r15;
L_1508A9F4:
    // 0x1508A9F4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x1508A9F8: jal         0x150859AC
    // 0x1508A9FC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_150859AC(rdram, ctx);
        goto after_1;
    // 0x1508A9FC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x1508AA00: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x1508AA04: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x1508AA08: jal         0x15085DA8
    // 0x1508AA0C: lwc1        $f12, 0x18($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X18);
    func_15085DA8(rdram, ctx);
        goto after_2;
    // 0x1508AA0C: lwc1        $f12, 0x18($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X18);
    after_2:
    // 0x1508AA10: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x1508AA14: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x1508AA18: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x1508AA1C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1508AA20: beql        $t5, $zero, L_1508AA40
    if (ctx->r13 == 0) {
        // 0x1508AA24: lw          $t7, 0x0($s6)
        ctx->r15 = MEM_W(ctx->r22, 0X0);
            goto L_1508AA40;
    }
    goto skip_3;
    // 0x1508AA24: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    skip_3:
    // 0x1508AA28: bnel        $s4, $zero, L_1508AA40
    if (ctx->r20 != 0) {
        // 0x1508AA2C: lw          $t7, 0x0($s6)
        ctx->r15 = MEM_W(ctx->r22, 0X0);
            goto L_1508AA40;
    }
    goto skip_4;
    // 0x1508AA2C: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    skip_4:
    // 0x1508AA30: lbu         $t6, 0x2FD($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X2FD);
    // 0x1508AA34: beql        $t6, $zero, L_1508AB44
    if (ctx->r14 == 0) {
        // 0x1508AA38: sw          $zero, 0x0($s6)
        MEM_W(0X0, ctx->r22) = 0;
            goto L_1508AB44;
    }
    goto skip_5;
    // 0x1508AA38: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    skip_5:
    // 0x1508AA3C: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
L_1508AA40:
    // 0x1508AA40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1508AA44: bnel        $t7, $zero, L_1508AB48
    if (ctx->r15 != 0) {
        // 0x1508AA48: lw          $t6, 0x54($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X54);
            goto L_1508AB48;
    }
    goto skip_6;
    // 0x1508AA48: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    skip_6:
    // 0x1508AA4C: lbu         $v0, 0x20F($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X20F);
    // 0x1508AA50: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1508AA54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1508AA58: beql        $v0, $at, L_1508AA74
    if (ctx->r2 == ctx->r1) {
        // 0x1508AA5C: lw          $t3, 0x0($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X0);
            goto L_1508AA74;
    }
    goto skip_7;
    // 0x1508AA5C: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    skip_7:
    // 0x1508AA60: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x1508AA64: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x1508AA68: b           L_1508AA80
    // 0x1508AA6C: sw          $v0, 0x59C($t9)
    MEM_W(0X59C, ctx->r25) = ctx->r2;
        goto L_1508AA80;
    // 0x1508AA6C: sw          $v0, 0x59C($t9)
    MEM_W(0X59C, ctx->r25) = ctx->r2;
    // 0x1508AA70: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
L_1508AA74:
    // 0x1508AA74: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x1508AA78: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x1508AA7C: sw          $t2, 0x59C($t4)
    MEM_W(0X59C, ctx->r12) = ctx->r10;
L_1508AA80:
    // 0x1508AA80: sw          $a0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r4;
    // 0x1508AA84: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x1508AA88: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x1508AA8C: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x1508AA90: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x1508AA94: sll         $t5, $s5, 2
    ctx->r13 = S32(ctx->r21 << 2);
    // 0x1508AA98: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x1508AA9C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1508AAA0: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x1508AAA4: sw          $a0, 0x5C($t8)
    MEM_W(0X5C, ctx->r24) = ctx->r4;
    // 0x1508AAA8: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x1508AAAC: addu        $t2, $t3, $s0
    ctx->r10 = ADD32(ctx->r11, ctx->r16);
    // 0x1508AAB0: sw          $t9, 0x11C($t2)
    MEM_W(0X11C, ctx->r10) = ctx->r25;
    // 0x1508AAB4: lw          $t4, 0xB0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB0);
    // 0x1508AAB8: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x1508AABC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1508AAC0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x1508AAC4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1508AAC8: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x1508AACC: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    // 0x1508AAD0: lw          $t2, 0xDC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XDC);
    // 0x1508AAD4: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x1508AAD8: andi        $t3, $v1, 0x7F
    ctx->r11 = ctx->r3 & 0X7F;
    // 0x1508AADC: slt         $at, $t3, $t9
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1508AAE0: beq         $at, $zero, L_1508AB0C
    if (ctx->r1 == 0) {
        // 0x1508AAE4: sll         $t4, $t3, 2
        ctx->r12 = S32(ctx->r11 << 2);
            goto L_1508AB0C;
    }
    // 0x1508AAE4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x1508AAE8: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x1508AAEC: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x1508AAF0: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x1508AAF4: beq         $s5, $a0, L_1508AB0C
    if (ctx->r21 == ctx->r4) {
        // 0x1508AAF8: sll         $t7, $a0, 2
        ctx->r15 = S32(ctx->r4 << 2);
            goto L_1508AB0C;
    }
    // 0x1508AAF8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x1508AAFC: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1508AB00: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x1508AB04: addiu       $t3, $t8, 0x1
    ctx->r11 = ADD32(ctx->r24, 0X1);
    // 0x1508AB08: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_1508AB0C:
    // 0x1508AB0C: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x1508AB10: addiu       $at, $zero, 0xB9
    ctx->r1 = ADD32(0, 0XB9);
    // 0x1508AB14: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1508AB18: lh          $t9, 0x16BC($t1)
    ctx->r25 = MEM_H(ctx->r9, 0X16BC);
    // 0x1508AB1C: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x1508AB20: beql        $t9, $at, L_1508AB34
    if (ctx->r25 == ctx->r1) {
        // 0x1508AB24: lw          $t4, 0x100($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X100);
            goto L_1508AB34;
    }
    goto skip_8;
    // 0x1508AB24: lw          $t4, 0x100($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X100);
    skip_8:
    // 0x1508AB28: jal         0x1508DAEC
    // 0x1508AB2C: sw          $zero, 0xFF0($t2)
    MEM_W(0XFF0, ctx->r10) = 0;
    func_1508DAEC(rdram, ctx);
        goto after_3;
    // 0x1508AB2C: sw          $zero, 0xFF0($t2)
    MEM_W(0XFF0, ctx->r10) = 0;
    after_3:
    // 0x1508AB30: lw          $t4, 0x100($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X100);
L_1508AB34:
    // 0x1508AB34: or          $t5, $t4, $fp
    ctx->r13 = ctx->r12 | ctx->r30;
    // 0x1508AB38: b           L_1508AB44
    // 0x1508AB3C: sw          $t5, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r13;
        goto L_1508AB44;
    // 0x1508AB3C: sw          $t5, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r13;
    // 0x1508AB40: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
L_1508AB44:
    // 0x1508AB44: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
L_1508AB48:
    // 0x1508AB48: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x1508AB4C: beql        $a0, $zero, L_1508AEEC
    if (ctx->r4 == 0) {
        // 0x1508AB50: lbu         $t2, 0xAB($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0XAB);
            goto L_1508AEEC;
    }
    goto skip_9;
    // 0x1508AB50: lbu         $t2, 0xAB($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XAB);
    skip_9:
    // 0x1508AB54: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1508AB58: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x1508AB5C: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x1508AB60: lh          $t8, 0x16BC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X16BC);
    // 0x1508AB64: beql        $t8, $at, L_1508AEEC
    if (ctx->r24 == ctx->r1) {
        // 0x1508AB68: lbu         $t2, 0xAB($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0XAB);
            goto L_1508AEEC;
    }
    goto skip_10;
    // 0x1508AB68: lbu         $t2, 0xAB($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XAB);
    skip_10:
    // 0x1508AB6C: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x1508AB70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1508AB74: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x1508AB78: beq         $t9, $at, L_1508ACF4
    if (ctx->r25 == ctx->r1) {
        // 0x1508AB7C: nop
    
            goto L_1508ACF4;
    }
    // 0x1508AB7C: nop

    // 0x1508AB80: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x1508AB84: slti        $at, $t2, 0x1E
    ctx->r1 = SIGNED(ctx->r10) < 0X1E ? 1 : 0;
    // 0x1508AB88: beq         $at, $zero, L_1508ACF4
    if (ctx->r1 == 0) {
        // 0x1508AB8C: nop
    
            goto L_1508ACF4;
    }
    // 0x1508AB8C: nop

    // 0x1508AB90: lbu         $v0, 0x232($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X232);
    // 0x1508AB94: addiu       $t4, $a0, -0x2
    ctx->r12 = ADD32(ctx->r4, -0X2);
    // 0x1508AB98: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1508AB9C: beq         $v0, $at, L_1508ABC0
    if (ctx->r2 == ctx->r1) {
        // 0x1508ABA0: sb          $t4, 0x222($s3)
        MEM_B(0X222, ctx->r19) = ctx->r12;
            goto L_1508ABC0;
    }
    // 0x1508ABA0: sb          $t4, 0x222($s3)
    MEM_B(0X222, ctx->r19) = ctx->r12;
    // 0x1508ABA4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1508ABA8: beq         $v0, $at, L_1508ABC0
    if (ctx->r2 == ctx->r1) {
        // 0x1508ABAC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_1508ABC0;
    }
    // 0x1508ABAC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1508ABB0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x1508ABB4: jal         0x1508EBF8
    // 0x1508ABB8: sw          $v0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r2;
    func_1508EBF8(rdram, ctx);
        goto after_4;
    // 0x1508ABB8: sw          $v0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r2;
    after_4:
    // 0x1508ABBC: lw          $v0, 0x104($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X104);
L_1508ABC0:
    // 0x1508ABC0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1508ABC4: bne         $v0, $at, L_1508ABD0
    if (ctx->r2 != ctx->r1) {
        // 0x1508ABC8: addiu       $t5, $zero, 0x1E
        ctx->r13 = ADD32(0, 0X1E);
            goto L_1508ABD0;
    }
    // 0x1508ABC8: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x1508ABCC: sw          $zero, 0x0($s7)
    MEM_W(0X0, ctx->r23) = 0;
L_1508ABD0:
    // 0x1508ABD0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1508ABD4: bne         $v0, $at, L_1508ACF4
    if (ctx->r2 != ctx->r1) {
        // 0x1508ABD8: lui         $t6, 0x800E
        ctx->r14 = S32(0X800E << 16);
            goto L_1508ACF4;
    }
    // 0x1508ABD8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1508ABDC: sw          $t5, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r13;
    // 0x1508ABE0: lb          $t6, 0xBD0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0XBD0);
    // 0x1508ABE4: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x1508ABE8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x1508ABEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1508ABF0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x1508ABF4: lwc1        $f4, 0x72F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X72F8);
    // 0x1508ABF8: addu        $t3, $t8, $s0
    ctx->r11 = ADD32(ctx->r24, ctx->r16);
    // 0x1508ABFC: jal         0x150ADA68
    // 0x1508AC00: swc1        $f4, 0x1868($t3)
    MEM_W(0X1868, ctx->r11) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x1508AC00: swc1        $f4, 0x1868($t3)
    MEM_W(0X1868, ctx->r11) = ctx->f4.u32l;
    after_5:
    // 0x1508AC04: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1508AC08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1508AC0C: lwc1        $f10, 0x14($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X14);
    // 0x1508AC10: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1508AC14: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1508AC18: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x1508AC1C: addu        $t2, $t9, $s0
    ctx->r10 = ADD32(ctx->r25, ctx->r16);
    // 0x1508AC20: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1508AC24: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1508AC28: swc1        $f16, 0x17A8($t2)
    MEM_W(0X17A8, ctx->r10) = ctx->f16.u32l;
    // 0x1508AC2C: lwc1        $f18, 0x18($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X18);
    // 0x1508AC30: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x1508AC34: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1508AC38: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x1508AC3C: jal         0x150ADA68
    // 0x1508AC40: swc1        $f6, 0x17E8($t5)
    MEM_W(0X17E8, ctx->r13) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x1508AC40: swc1        $f6, 0x17E8($t5)
    MEM_W(0X17E8, ctx->r13) = ctx->f6.u32l;
    after_6:
    // 0x1508AC44: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1508AC48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1508AC4C: lwc1        $f16, 0x1C($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x1508AC50: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x1508AC54: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1508AC58: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1508AC5C: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x1508AC60: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x1508AC64: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1508AC68: swc1        $f18, 0x1828($t7)
    MEM_W(0X1828, ctx->r15) = ctx->f18.u32l;
    // 0x1508AC6C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x1508AC70: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x1508AC74: addiu       $t3, $a0, -0x2
    ctx->r11 = ADD32(ctx->r4, -0X2);
    // 0x1508AC78: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x1508AC7C: bne         $at, $zero, L_1508ACF4
    if (ctx->r1 != 0) {
        // 0x1508AC80: sll         $t9, $a0, 2
        ctx->r25 = S32(ctx->r4 << 2);
            goto L_1508ACF4;
    }
    // 0x1508AC80: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x1508AC84: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x1508AC88: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1508AC8C: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x1508AC90: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1508AC94: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x1508AC98: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1508AC9C: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x1508ACA0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1508ACA4: addiu       $t2, $t9, -0x658
    ctx->r10 = ADD32(ctx->r25, -0X658);
    // 0x1508ACA8: addu        $v1, $t2, $t4
    ctx->r3 = ADD32(ctx->r10, ctx->r12);
    // 0x1508ACAC: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1508ACB0: lwc1        $f6, 0x14($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X14);
    // 0x1508ACB4: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x1508ACB8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1508ACBC: addu        $v0, $t5, $s0
    ctx->r2 = ADD32(ctx->r13, ctx->r16);
    // 0x1508ACC0: lwc1        $f16, 0x17A8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X17A8);
    // 0x1508ACC4: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x1508ACC8: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x1508ACCC: swc1        $f18, 0x17A8($v0)
    MEM_W(0X17A8, ctx->r2) = ctx->f18.u32l;
    // 0x1508ACD0: lwc1        $f6, 0x1C($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x1508ACD4: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1508ACD8: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x1508ACDC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1508ACE0: addu        $v0, $t6, $s0
    ctx->r2 = ADD32(ctx->r14, ctx->r16);
    // 0x1508ACE4: lwc1        $f10, 0x1828($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1828);
    // 0x1508ACE8: mul.s       $f16, $f8, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x1508ACEC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1508ACF0: swc1        $f18, 0x1828($v0)
    MEM_W(0X1828, ctx->r2) = ctx->f18.u32l;
L_1508ACF4:
    // 0x1508ACF4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1508ACF8: lb          $v1, 0xBD0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XBD0);
    // 0x1508ACFC: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x1508AD00: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x1508AD04: sb          $zero, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = 0;
    // 0x1508AD08: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x1508AD0C: lb          $t8, 0x72D0($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X72D0);
    // 0x1508AD10: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x1508AD14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1508AD18: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x1508AD1C: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1508AD20: beq         $at, $zero, L_1508AD40
    if (ctx->r1 == 0) {
        // 0x1508AD24: nop
    
            goto L_1508AD40;
    }
    // 0x1508AD24: nop

    // 0x1508AD28: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x1508AD2C: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x1508AD30: sw          $t3, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r11;
    // 0x1508AD34: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1508AD38: lb          $v1, 0xBD0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0XBD0);
    // 0x1508AD3C: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
L_1508AD40:
    // 0x1508AD40: bltz        $v0, L_1508AD58
    if (SIGNED(ctx->r2) < 0) {
        // 0x1508AD44: lw          $t1, 0x0($s1)
        ctx->r9 = MEM_W(ctx->r17, 0X0);
            goto L_1508AD58;
    }
    // 0x1508AD44: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x1508AD48: lw          $t2, 0xF8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF8);
    // 0x1508AD4C: bgezl       $t2, L_1508AD5C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x1508AD50: sll         $t4, $v1, 1
        ctx->r12 = S32(ctx->r3 << 1);
            goto L_1508AD5C;
    }
    goto skip_11;
    // 0x1508AD50: sll         $t4, $v1, 1
    ctx->r12 = S32(ctx->r3 << 1);
    skip_11:
    // 0x1508AD54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_1508AD58:
    // 0x1508AD58: sll         $t4, $v1, 1
    ctx->r12 = S32(ctx->r3 << 1);
L_1508AD5C:
    // 0x1508AD5C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1508AD60: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x1508AD64: lh          $v0, 0x72C4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X72C4);
    // 0x1508AD68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1508AD6C: beql        $v0, $at, L_1508AD8C
    if (ctx->r2 == ctx->r1) {
        // 0x1508AD70: addu        $v0, $t1, $s2
        ctx->r2 = ADD32(ctx->r9, ctx->r18);
            goto L_1508AD8C;
    }
    goto skip_12;
    // 0x1508AD70: addu        $v0, $t1, $s2
    ctx->r2 = ADD32(ctx->r9, ctx->r18);
    skip_12:
    // 0x1508AD74: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x1508AD78: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1508AD7C: bnel        $at, $zero, L_1508AD8C
    if (ctx->r1 != 0) {
        // 0x1508AD80: addu        $v0, $t1, $s2
        ctx->r2 = ADD32(ctx->r9, ctx->r18);
            goto L_1508AD8C;
    }
    goto skip_13;
    // 0x1508AD80: addu        $v0, $t1, $s2
    ctx->r2 = ADD32(ctx->r9, ctx->r18);
    skip_13:
    // 0x1508AD84: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x1508AD88: addu        $v0, $t1, $s2
    ctx->r2 = ADD32(ctx->r9, ctx->r18);
L_1508AD8C:
    // 0x1508AD8C: lb          $v1, 0x1725($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1725);
    // 0x1508AD90: lb          $t6, 0x1705($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X1705);
    // 0x1508AD94: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1508AD98: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x1508AD9C: subu        $t8, $t6, $v1
    ctx->r24 = SUB32(ctx->r14, ctx->r3);
    // 0x1508ADA0: sra         $t7, $t8, 2
    ctx->r15 = S32(SIGNED(ctx->r24) >> 2);
    // 0x1508ADA4: addu        $t3, $v1, $t7
    ctx->r11 = ADD32(ctx->r3, ctx->r15);
    // 0x1508ADA8: sb          $t3, 0x1725($v0)
    MEM_B(0X1725, ctx->r2) = ctx->r11;
    // 0x1508ADAC: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1508ADB0: addu        $v0, $t9, $s2
    ctx->r2 = ADD32(ctx->r25, ctx->r18);
    // 0x1508ADB4: lb          $t0, 0x1735($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X1735);
    // 0x1508ADB8: lb          $t2, 0x1715($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X1715);
    // 0x1508ADBC: subu        $t4, $t2, $t0
    ctx->r12 = SUB32(ctx->r10, ctx->r8);
    // 0x1508ADC0: sra         $t5, $t4, 2
    ctx->r13 = S32(SIGNED(ctx->r12) >> 2);
    // 0x1508ADC4: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x1508ADC8: sb          $t6, 0x1735($v0)
    MEM_B(0X1735, ctx->r2) = ctx->r14;
    // 0x1508ADCC: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1508ADD0: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x1508ADD4: addu        $v0, $t7, $s2
    ctx->r2 = ADD32(ctx->r15, ctx->r18);
    // 0x1508ADD8: lb          $t3, 0x1725($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X1725);
    // 0x1508ADDC: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x1508ADE0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1508ADE4: lb          $t9, 0x1735($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X1735);
    // 0x1508ADE8: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x1508ADEC: jal         0x1508CAD8
    // 0x1508ADF0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_1508CAD8(rdram, ctx);
        goto after_7;
    // 0x1508ADF0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_7:
    // 0x1508ADF4: beq         $v0, $zero, L_1508AE10
    if (ctx->r2 == 0) {
        // 0x1508ADF8: lw          $t2, 0x6C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X6C);
            goto L_1508AE10;
    }
    // 0x1508ADF8: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x1508ADFC: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x1508AE00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1508AE04: beql        $t4, $at, L_1508AE14
    if (ctx->r12 == ctx->r1) {
        // 0x1508AE08: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_1508AE14;
    }
    goto skip_14;
    // 0x1508AE08: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    skip_14:
    // 0x1508AE0C: sw          $zero, 0x0($s7)
    MEM_W(0X0, ctx->r23) = 0;
L_1508AE10:
    // 0x1508AE10: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
L_1508AE14:
    // 0x1508AE14: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1508AE18: bnel        $t6, $zero, L_1508AEEC
    if (ctx->r14 != 0) {
        // 0x1508AE1C: lbu         $t2, 0xAB($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0XAB);
            goto L_1508AEEC;
    }
    goto skip_15;
    // 0x1508AE1C: lbu         $t2, 0xAB($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XAB);
    skip_15:
    // 0x1508AE20: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x1508AE24: addu        $t7, $t8, $s2
    ctx->r15 = ADD32(ctx->r24, ctx->r18);
    // 0x1508AE28: sb          $zero, 0x1705($t7)
    MEM_B(0X1705, ctx->r15) = 0;
    // 0x1508AE2C: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x1508AE30: addu        $t9, $t3, $s2
    ctx->r25 = ADD32(ctx->r11, ctx->r18);
    // 0x1508AE34: jal         0x150ADA68
    // 0x1508AE38: sb          $zero, 0x1715($t9)
    MEM_B(0X1715, ctx->r25) = 0;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x1508AE38: sb          $zero, 0x1715($t9)
    MEM_B(0X1715, ctx->r25) = 0;
    after_8:
    // 0x1508AE3C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1508AE40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1508AE44: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x1508AE48: lb          $t2, 0xBD0($t2)
    ctx->r10 = MEM_B(ctx->r10, 0XBD0);
    // 0x1508AE4C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1508AE50: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x1508AE54: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x1508AE58: lb          $t4, 0x72E8($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X72E8);
    // 0x1508AE5C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1508AE60: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x1508AE64: nop

    // 0x1508AE68: slt         $at, $t4, $t6
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1508AE6C: beql        $at, $zero, L_1508AEEC
    if (ctx->r1 == 0) {
        // 0x1508AE70: lbu         $t2, 0xAB($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0XAB);
            goto L_1508AEEC;
    }
    goto skip_16;
    // 0x1508AE70: lbu         $t2, 0xAB($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XAB);
    skip_16:
    // 0x1508AE74: jal         0x150ADA68
    // 0x1508AE78: nop

    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x1508AE78: nop

    after_9:
    // 0x1508AE7C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x1508AE80: nop

    // 0x1508AE84: bc1fl       L_1508AEA4
    if (!c1cs) {
        // 0x1508AE88: lw          $t2, 0x0($s1)
        ctx->r10 = MEM_W(ctx->r17, 0X0);
            goto L_1508AEA4;
    }
    goto skip_17;
    // 0x1508AE88: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    skip_17:
    // 0x1508AE8C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1508AE90: addiu       $t8, $zero, -0x32
    ctx->r24 = ADD32(0, -0X32);
    // 0x1508AE94: addu        $t3, $t7, $s2
    ctx->r11 = ADD32(ctx->r15, ctx->r18);
    // 0x1508AE98: b           L_1508AEB0
    // 0x1508AE9C: sb          $t8, 0x1705($t3)
    MEM_B(0X1705, ctx->r11) = ctx->r24;
        goto L_1508AEB0;
    // 0x1508AE9C: sb          $t8, 0x1705($t3)
    MEM_B(0X1705, ctx->r11) = ctx->r24;
    // 0x1508AEA0: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
L_1508AEA4:
    // 0x1508AEA4: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x1508AEA8: addu        $t5, $t2, $s2
    ctx->r13 = ADD32(ctx->r10, ctx->r18);
    // 0x1508AEAC: sb          $t9, 0x1705($t5)
    MEM_B(0X1705, ctx->r13) = ctx->r25;
L_1508AEB0:
    // 0x1508AEB0: jal         0x150ADA68
    // 0x1508AEB4: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x1508AEB4: nop

    after_10:
    // 0x1508AEB8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x1508AEBC: nop

    // 0x1508AEC0: bc1fl       L_1508AEE0
    if (!c1cs) {
        // 0x1508AEC4: lw          $t8, 0x0($s1)
        ctx->r24 = MEM_W(ctx->r17, 0X0);
            goto L_1508AEE0;
    }
    goto skip_18;
    // 0x1508AEC4: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    skip_18:
    // 0x1508AEC8: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x1508AECC: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x1508AED0: addu        $t7, $t6, $s2
    ctx->r15 = ADD32(ctx->r14, ctx->r18);
    // 0x1508AED4: b           L_1508AEE8
    // 0x1508AED8: sb          $t4, 0x1715($t7)
    MEM_B(0X1715, ctx->r15) = ctx->r12;
        goto L_1508AEE8;
    // 0x1508AED8: sb          $t4, 0x1715($t7)
    MEM_B(0X1715, ctx->r15) = ctx->r12;
    // 0x1508AEDC: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
L_1508AEE0:
    // 0x1508AEE0: addu        $t3, $t8, $s2
    ctx->r11 = ADD32(ctx->r24, ctx->r18);
    // 0x1508AEE4: sb          $zero, 0x1715($t3)
    MEM_B(0X1715, ctx->r11) = 0;
L_1508AEE8:
    // 0x1508AEE8: lbu         $t2, 0xAB($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XAB);
L_1508AEEC:
    // 0x1508AEEC: beql        $t2, $zero, L_1508AF2C
    if (ctx->r10 == 0) {
        // 0x1508AEF0: lhu         $v0, 0x22C($s3)
        ctx->r2 = MEM_HU(ctx->r19, 0X22C);
            goto L_1508AF2C;
    }
    goto skip_19;
    // 0x1508AEF0: lhu         $v0, 0x22C($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X22C);
    skip_19:
    // 0x1508AEF4: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1508AEF8: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x1508AEFC: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1508AF00: lh          $t5, 0x16BC($t9)
    ctx->r13 = MEM_H(ctx->r25, 0X16BC);
    // 0x1508AF04: beql        $t5, $at, L_1508AF2C
    if (ctx->r13 == ctx->r1) {
        // 0x1508AF08: lhu         $v0, 0x22C($s3)
        ctx->r2 = MEM_HU(ctx->r19, 0X22C);
            goto L_1508AF2C;
    }
    goto skip_20;
    // 0x1508AF08: lhu         $v0, 0x22C($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X22C);
    skip_20:
    // 0x1508AF0C: lb          $t6, 0xBD0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0XBD0);
    // 0x1508AF10: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x1508AF14: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x1508AF18: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x1508AF1C: lb          $t4, 0x72E0($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X72E0);
    // 0x1508AF20: negu        $t7, $t4
    ctx->r15 = SUB32(0, ctx->r12);
    // 0x1508AF24: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x1508AF28: lhu         $v0, 0x22C($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X22C);
L_1508AF2C:
    // 0x1508AF2C: andi        $v1, $v0, 0x200
    ctx->r3 = ctx->r2 & 0X200;
    // 0x1508AF30: andi        $t3, $v0, 0xFDFF
    ctx->r11 = ctx->r2 & 0XFDFF;
    // 0x1508AF34: bne         $v1, $zero, L_1508AF50
    if (ctx->r3 != 0) {
        // 0x1508AF38: sh          $t3, 0x22C($s3)
        MEM_H(0X22C, ctx->r19) = ctx->r11;
            goto L_1508AF50;
    }
    // 0x1508AF38: sh          $t3, 0x22C($s3)
    MEM_H(0X22C, ctx->r19) = ctx->r11;
    // 0x1508AF3C: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x1508AF40: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x1508AF44: andi        $t5, $t9, 0x80
    ctx->r13 = ctx->r25 & 0X80;
    // 0x1508AF48: beql        $t5, $zero, L_1508AF68
    if (ctx->r13 == 0) {
        // 0x1508AF4C: lw          $t8, 0x31C($s3)
        ctx->r24 = MEM_W(ctx->r19, 0X31C);
            goto L_1508AF68;
    }
    goto skip_21;
    // 0x1508AF4C: lw          $t8, 0x31C($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X31C);
    skip_21:
L_1508AF50:
    // 0x1508AF50: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x1508AF54: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1508AF58: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x1508AF5C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x1508AF60: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
    // 0x1508AF64: lw          $t8, 0x31C($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X31C);
L_1508AF68:
    // 0x1508AF68: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x1508AF6C: lbu         $t3, 0x1AC($t8)
    ctx->r11 = MEM_BU(ctx->r24, 0X1AC);
    // 0x1508AF70: beq         $t3, $zero, L_1508AF90
    if (ctx->r11 == 0) {
        // 0x1508AF74: addiu       $t2, $zero, 0x14
        ctx->r10 = ADD32(0, 0X14);
            goto L_1508AF90;
    }
    // 0x1508AF74: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x1508AF78: b           L_1508AF90
    // 0x1508AF7C: sw          $t2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r10;
        goto L_1508AF90;
    // 0x1508AF7C: sw          $t2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r10;
L_1508AF80:
    // 0x1508AF80: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x1508AF84: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x1508AF88: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x1508AF8C: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
L_1508AF90:
    // 0x1508AF90: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x1508AF94: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x1508AF98: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x1508AF9C: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x1508AFA0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1508AFA4: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x1508AFA8: addiu       $t2, $t3, 0x4
    ctx->r10 = ADD32(ctx->r11, 0X4);
    // 0x1508AFAC: addiu       $t5, $t9, 0x4
    ctx->r13 = ADD32(ctx->r25, 0X4);
    // 0x1508AFB0: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x1508AFB4: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x1508AFB8: sw          $t8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r24;
    // 0x1508AFBC: bne         $s2, $t6, L_1508A7D8
    if (ctx->r18 != ctx->r14) {
        // 0x1508AFC0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_1508A7D8;
    }
    // 0x1508AFC0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1508AFC4: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
L_1508AFC8:
    // 0x1508AFC8: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x1508AFCC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1508AFD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1508AFD4: sw          $t4, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r12;
    // 0x1508AFD8: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x1508AFDC: beql        $v0, $zero, L_1508AFFC
    if (ctx->r2 == 0) {
        // 0x1508AFE0: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_1508AFFC;
    }
    goto skip_22;
    // 0x1508AFE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_22:
    // 0x1508AFE4: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x1508AFE8: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1508AFEC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508AFF0: b           L_1508B004
    // 0x1508AFF4: swc1        $f16, 0x16B4($t7)
    MEM_W(0X16B4, ctx->r15) = ctx->f16.u32l;
        goto L_1508B004;
    // 0x1508AFF4: swc1        $f16, 0x16B4($t7)
    MEM_W(0X16B4, ctx->r15) = ctx->f16.u32l;
    // 0x1508AFF8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_1508AFFC:
    // 0x1508AFFC: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x1508B000: swc1        $f18, 0x16B4($t8)
    MEM_W(0X16B4, ctx->r24) = ctx->f18.u32l;
L_1508B004:
    // 0x1508B004: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x1508B008: addiu       $at, $zero, -0x55C
    ctx->r1 = ADD32(0, -0X55C);
    // 0x1508B00C: beql        $t1, $at, L_1508B028
    if (ctx->r9 == ctx->r1) {
        // 0x1508B010: lh          $t3, 0x16BC($t1)
        ctx->r11 = MEM_H(ctx->r9, 0X16BC);
            goto L_1508B028;
    }
    goto skip_23;
    // 0x1508B010: lh          $t3, 0x16BC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X16BC);
    skip_23:
    // 0x1508B014: jal         0x1508B3F8
    // 0x1508B018: nop

    func_1508B3F8(rdram, ctx);
        goto after_11;
    // 0x1508B018: nop

    after_11:
    // 0x1508B01C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1508B020: lw          $t1, 0x23B0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X23B0);
    // 0x1508B024: lh          $t3, 0x16BC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X16BC);
L_1508B028:
    // 0x1508B028: addiu       $at, $zero, 0xB9
    ctx->r1 = ADD32(0, 0XB9);
    // 0x1508B02C: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x1508B030: bne         $t3, $at, L_1508B15C
    if (ctx->r11 != ctx->r1) {
        // 0x1508B034: addiu       $s4, $s4, -0x19D8
        ctx->r20 = ADD32(ctx->r20, -0X19D8);
            goto L_1508B15C;
    }
    // 0x1508B034: addiu       $s4, $s4, -0x19D8
    ctx->r20 = ADD32(ctx->r20, -0X19D8);
    // 0x1508B038: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x1508B03C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x1508B040: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1508B044: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1508B048: lwc1        $f6, 0x2C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x1508B04C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1508B050: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x1508B054: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1508B058: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1508B05C: mfc1        $s3, $f10
    ctx->r19 = (int32_t)ctx->f10.u32l;
    // 0x1508B060: nop

    // 0x1508B064: sra         $t9, $s3, 1
    ctx->r25 = S32(SIGNED(ctx->r19) >> 1);
    // 0x1508B068: jal         0x1504332C
    // 0x1508B06C: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
    func_1504332C(rdram, ctx);
        goto after_12;
    // 0x1508B06C: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
    after_12:
    // 0x1508B070: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1508B074: lw          $v0, 0x2FA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2FA0);
    // 0x1508B078: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1508B07C: addiu       $t0, $t0, -0x3D30
    ctx->r8 = ADD32(ctx->r8, -0X3D30);
    // 0x1508B080: bltz        $v0, L_1508B15C
    if (SIGNED(ctx->r2) < 0) {
        // 0x1508B084: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1508B15C;
    }
    // 0x1508B084: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1508B088: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x1508B08C: addiu       $s1, $s1, -0x25E0
    ctx->r17 = ADD32(ctx->r17, -0X25E0);
    // 0x1508B090: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
    // 0x1508B094: addiu       $s0, $zero, 0x180
    ctx->r16 = ADD32(0, 0X180);
L_1508B098:
    // 0x1508B098: lbu         $t5, 0x128($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X128);
    // 0x1508B09C: bnel        $t5, $zero, L_1508B150
    if (ctx->r13 != 0) {
        // 0x1508B0A0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_1508B150;
    }
    goto skip_24;
    // 0x1508B0A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_24:
    // 0x1508B0A4: multu       $v1, $s0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1508B0A8: lw          $t3, 0xAC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XAC);
    // 0x1508B0AC: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x1508B0B0: mtc1        $s3, $f18
    ctx->f18.u32l = ctx->r19;
    // 0x1508B0B4: addu        $t9, $t3, $t2
    ctx->r25 = ADD32(ctx->r11, ctx->r10);
    // 0x1508B0B8: lw          $t5, 0x0($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X0);
    // 0x1508B0BC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x1508B0C0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1508B0C4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x1508B0C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1508B0CC: mflo        $t4
    ctx->r12 = lo;
    // 0x1508B0D0: addu        $v0, $t6, $t4
    ctx->r2 = ADD32(ctx->r14, ctx->r12);
    // 0x1508B0D4: lwc1        $f16, 0x2C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x1508B0D8: div         $zero, $t5, $s2
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r18)));
    // 0x1508B0DC: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x1508B0E0: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x1508B0E4: mflo        $t6
    ctx->r14 = lo;
    // 0x1508B0E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1508B0EC: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x1508B0F0: sw          $t0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r8;
    // 0x1508B0F4: sw          $v1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r3;
    // 0x1508B0F8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1508B0FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1508B100: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x1508B104: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1508B108: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x1508B10C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x1508B110: bne         $s2, $zero, L_1508B11C
    if (ctx->r18 != 0) {
        // 0x1508B114: nop
    
            goto L_1508B11C;
    }
    // 0x1508B114: nop

    // 0x1508B118: break       7
    do_break(352891160);
L_1508B11C:
    // 0x1508B11C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1508B120: bne         $s2, $at, L_1508B134
    if (ctx->r18 != ctx->r1) {
        // 0x1508B124: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1508B134;
    }
    // 0x1508B124: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1508B128: bne         $t5, $at, L_1508B134
    if (ctx->r13 != ctx->r1) {
        // 0x1508B12C: nop
    
            goto L_1508B134;
    }
    // 0x1508B12C: nop

    // 0x1508B130: break       6
    do_break(352891184);
L_1508B134:
    // 0x1508B134: jal         0x15042D94
    // 0x1508B138: nop

    func_15042D94(rdram, ctx);
        goto after_13;
    // 0x1508B138: nop

    after_13:
    // 0x1508B13C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1508B140: lw          $v0, 0x2FA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2FA0);
    // 0x1508B144: lw          $v1, 0xA0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA0);
    // 0x1508B148: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x1508B14C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_1508B150:
    // 0x1508B150: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1508B154: beq         $at, $zero, L_1508B098
    if (ctx->r1 == 0) {
        // 0x1508B158: addiu       $t0, $t0, 0x32C
        ctx->r8 = ADD32(ctx->r8, 0X32C);
            goto L_1508B098;
    }
    // 0x1508B158: addiu       $t0, $t0, 0x32C
    ctx->r8 = ADD32(ctx->r8, 0X32C);
L_1508B15C:
    // 0x1508B15C: lw          $v0, 0x100($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X100);
    // 0x1508B160: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1508B164: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1508B168: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1508B16C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x1508B170: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x1508B174: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x1508B178: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x1508B17C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x1508B180: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x1508B184: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x1508B188: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x1508B18C: jr          $ra
    // 0x1508B190: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    return;
    // 0x1508B190: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_150B709C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B709C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x150B70A0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x150B70A4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150B70A8: bne         $v0, $a1, L_150B70D8
    if (ctx->r2 != ctx->r5) {
        // 0x150B70AC: nop
    
            goto L_150B70D8;
    }
    // 0x150B70AC: nop

    // 0x150B70B0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150B70B4: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x150B70B8: lbu         $v1, 0x45($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X45);
    // 0x150B70BC: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x150B70C0: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x150B70C4: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x150B70C8: bnel        $at, $zero, L_150B70D8
    if (ctx->r1 != 0) {
        // 0x150B70CC: sb          $v1, 0x45($a0)
        MEM_B(0X45, ctx->r4) = ctx->r3;
            goto L_150B70D8;
    }
    goto skip_0;
    // 0x150B70CC: sb          $v1, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r3;
    skip_0:
    // 0x150B70D0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150B70D4: sb          $v1, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r3;
L_150B70D8:
    // 0x150B70D8: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x150B70DC: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x150B70E0: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x150B70E4: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x150B70E8: bnel        $at, $zero, L_150B70F8
    if (ctx->r1 != 0) {
        // 0x150B70EC: negu        $at, $v0
        ctx->r1 = SUB32(0, ctx->r2);
            goto L_150B70F8;
    }
    goto skip_1;
    // 0x150B70EC: negu        $at, $v0
    ctx->r1 = SUB32(0, ctx->r2);
    skip_1:
    // 0x150B70F0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x150B70F4: negu        $at, $v0
    ctx->r1 = SUB32(0, ctx->r2);
L_150B70F8:
    // 0x150B70F8: sll         $t0, $at, 2
    ctx->r8 = S32(ctx->r1 << 2);
    // 0x150B70FC: addu        $t0, $t0, $at
    ctx->r8 = ADD32(ctx->r8, ctx->r1);
    // 0x150B7100: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150B7104: addu        $t0, $t0, $at
    ctx->r8 = ADD32(ctx->r8, ctx->r1);
    // 0x150B7108: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150B710C: div         $zero, $t0, $a1
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r5)));
    // 0x150B7110: mflo        $t1
    ctx->r9 = lo;
    // 0x150B7114: addiu       $t2, $t1, 0xE6
    ctx->r10 = ADD32(ctx->r9, 0XE6);
    // 0x150B7118: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x150B711C: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x150B7120: bne         $a1, $zero, L_150B712C
    if (ctx->r5 != 0) {
        // 0x150B7124: nop
    
            goto L_150B712C;
    }
    // 0x150B7124: nop

    // 0x150B7128: break       7
    do_break(353071400);
L_150B712C:
    // 0x150B712C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150B7130: bne         $a1, $at, L_150B7144
    if (ctx->r5 != ctx->r1) {
        // 0x150B7134: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150B7144;
    }
    // 0x150B7134: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150B7138: bne         $t0, $at, L_150B7144
    if (ctx->r8 != ctx->r1) {
        // 0x150B713C: nop
    
            goto L_150B7144;
    }
    // 0x150B713C: nop

    // 0x150B7140: break       6
    do_break(353071424);
L_150B7144:
    // 0x150B7144: negu        $at, $v0
    ctx->r1 = SUB32(0, ctx->r2);
    // 0x150B7148: sll         $t3, $at, 2
    ctx->r11 = S32(ctx->r1 << 2);
    // 0x150B714C: subu        $t3, $t3, $at
    ctx->r11 = SUB32(ctx->r11, ctx->r1);
    // 0x150B7150: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x150B7154: addu        $t3, $t3, $at
    ctx->r11 = ADD32(ctx->r11, ctx->r1);
    // 0x150B7158: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x150B715C: div         $zero, $t3, $a1
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r5)));
    // 0x150B7160: mflo        $t4
    ctx->r12 = lo;
    // 0x150B7164: addiu       $t5, $t4, 0xAA
    ctx->r13 = ADD32(ctx->r12, 0XAA);
    // 0x150B7168: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x150B716C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B7170: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150B7174: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
    // 0x150B7178: bne         $a1, $zero, L_150B7184
    if (ctx->r5 != 0) {
        // 0x150B717C: nop
    
            goto L_150B7184;
    }
    // 0x150B717C: nop

    // 0x150B7180: break       7
    do_break(353071488);
L_150B7184:
    // 0x150B7184: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150B7188: bne         $a1, $at, L_150B719C
    if (ctx->r5 != ctx->r1) {
        // 0x150B718C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150B719C;
    }
    // 0x150B718C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150B7190: bne         $t3, $at, L_150B719C
    if (ctx->r11 != ctx->r1) {
        // 0x150B7194: nop
    
            goto L_150B719C;
    }
    // 0x150B7194: nop

    // 0x150B7198: break       6
    do_break(353071512);
L_150B719C:
    // 0x150B719C: swc1        $f10, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f10.u32l;
    // 0x150B71A0: jr          $ra
    // 0x150B71A4: nop

    return;
    return;
    // 0x150B71A4: nop

;}
RECOMP_FUNC void func_151D0F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D0F08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D0F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D0F10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D0F14: jal         0x151D0ED8
    // 0x151D0F18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151D0ED8(rdram, ctx);
        goto after_0;
    // 0x151D0F18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151D0F1C: jal         0x1513173C
    // 0x151D0F20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1513173C(rdram, ctx);
        goto after_1;
    // 0x151D0F20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151D0F24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D0F28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D0F2C: jr          $ra
    // 0x151D0F30: nop

    return;
    return;
    // 0x151D0F30: nop

;}
RECOMP_FUNC void func_15116984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15116984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15116988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1511698C: lbu         $t6, 0x73($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X73);
    // 0x15116990: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x15116994: beql        $t7, $zero, L_151169A8
    if (ctx->r15 == 0) {
        // 0x15116998: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151169A8;
    }
    goto skip_0;
    // 0x15116998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1511699C: jal         0x151169B4
    // 0x151169A0: nop

    func_151169B4(rdram, ctx);
        goto after_0;
    // 0x151169A0: nop

    after_0:
    // 0x151169A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151169A8:
    // 0x151169A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151169AC: jr          $ra
    // 0x151169B0: nop

    return;
    return;
    // 0x151169B0: nop

;}
RECOMP_FUNC void func_15018DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15018DFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15018E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15018E04: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15018E08: jal         0x150A09D0
    // 0x15018E0C: lw          $a0, -0x161C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X161C);
    func_150A09D0(rdram, ctx);
        goto after_0;
    // 0x15018E0C: lw          $a0, -0x161C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X161C);
    after_0:
    // 0x15018E10: jal         0x150619A8
    // 0x15018E14: nop

    func_150619A8(rdram, ctx);
        goto after_1;
    // 0x15018E14: nop

    after_1:
    // 0x15018E18: jal         0x1501C870
    // 0x15018E1C: nop

    func_1501C870(rdram, ctx);
        goto after_2;
    // 0x15018E1C: nop

    after_2:
    // 0x15018E20: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15018E24: lbu         $t6, -0x1540($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1540);
    // 0x15018E28: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15018E2C: bne         $t6, $zero, L_15018E68
    if (ctx->r14 != 0) {
        // 0x15018E30: nop
    
            goto L_15018E68;
    }
    // 0x15018E30: nop

    // 0x15018E34: lbu         $t7, 0x35EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35EA);
    // 0x15018E38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15018E3C: bne         $t7, $at, L_15018E54
    if (ctx->r15 != ctx->r1) {
        // 0x15018E40: nop
    
            goto L_15018E54;
    }
    // 0x15018E40: nop

    // 0x15018E44: jal         0x1502378C
    // 0x15018E48: nop

    func_1502378C(rdram, ctx);
        goto after_3;
    // 0x15018E48: nop

    after_3:
    // 0x15018E4C: b           L_15018E5C
    // 0x15018E50: nop

        goto L_15018E5C;
    // 0x15018E50: nop

L_15018E54:
    // 0x15018E54: jal         0x1504A730
    // 0x15018E58: nop

    func_1504A730(rdram, ctx);
        goto after_4;
    // 0x15018E58: nop

    after_4:
L_15018E5C:
    // 0x15018E5C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15018E60: jal         0x15085ABC
    // 0x15018E64: lh          $a0, 0x2340($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X2340);
    func_15085ABC(rdram, ctx);
        goto after_5;
    // 0x15018E64: lh          $a0, 0x2340($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X2340);
    after_5:
L_15018E68:
    // 0x15018E68: jal         0x1507C370
    // 0x15018E6C: nop

    func_1507C370(rdram, ctx);
        goto after_6;
    // 0x15018E6C: nop

    after_6:
    // 0x15018E70: jal         0x1507C8FC
    // 0x15018E74: nop

    func_1507C8FC(rdram, ctx);
        goto after_7;
    // 0x15018E74: nop

    after_7:
    // 0x15018E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15018E7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15018E80: jr          $ra
    // 0x15018E84: nop

    return;
    return;
    // 0x15018E84: nop

;}
RECOMP_FUNC void func_10011E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10011E88: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x10011E8C: jr          $ra
    // 0x10011E90: nop

    return;
    return;
    // 0x10011E90: nop

;}
RECOMP_FUNC void func_1519203C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519203C: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x15192040: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x15192044: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15192048: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1519204C: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x15192050: lbu         $t9, 0xDB($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XDB);
    // 0x15192054: lbu         $t0, 0xDF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XDF);
    // 0x15192058: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x1519205C: addiu       $t6, $zero, 0x4401
    ctx->r14 = ADD32(0, 0X4401);
    // 0x15192060: ori         $t7, $t7, 0x5
    ctx->r15 = ctx->r15 | 0X5;
    // 0x15192064: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15192068: sh          $t6, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r14;
    // 0x1519206C: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x15192070: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x15192074: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x15192078: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x1519207C: sb          $zero, 0x68($sp)
    MEM_B(0X68, ctx->r29) = 0;
    // 0x15192080: sb          $zero, 0x69($sp)
    MEM_B(0X69, ctx->r29) = 0;
    // 0x15192084: sb          $zero, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = 0;
    // 0x15192088: sb          $t8, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r24;
    // 0x1519208C: sb          $zero, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = 0;
    // 0x15192090: sb          $zero, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = 0;
    // 0x15192094: sb          $zero, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = 0;
    // 0x15192098: sb          $t9, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r25;
    // 0x1519209C: sb          $t0, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r8;
    // 0x151920A0: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151920A4: addiu       $t1, $sp, 0x84
    ctx->r9 = ADD32(ctx->r29, 0X84);
    // 0x151920A8: addiu       $t5, $sp, 0x9C
    ctx->r13 = ADD32(ctx->r29, 0X9C);
    // 0x151920AC: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x151920B0: lw          $t4, 0x4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X4);
    // 0x151920B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151920B8: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x151920BC: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151920C0: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x151920C4: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x151920C8: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x151920CC: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x151920D0: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x151920D4: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x151920D8: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x151920DC: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x151920E0: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x151920E4: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x151920E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151920EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151920F0: swc1        $f12, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f12.u32l;
    // 0x151920F4: sh          $t9, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r25;
    // 0x151920F8: jal         0x150ADA20
    // 0x151920FC: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151920FC: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x15192100: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x15192104: beql        $t0, $zero, L_15192118
    if (ctx->r8 == 0) {
        // 0x15192108: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15192118;
    }
    goto skip_0;
    // 0x15192108: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_0:
    // 0x1519210C: b           L_15192118
    // 0x15192110: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_15192118;
    // 0x15192110: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x15192114: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15192118:
    // 0x15192118: jal         0x150ADA20
    // 0x1519211C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1519211C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x15192120: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x15192124: beq         $t3, $zero, L_15192134
    if (ctx->r11 == 0) {
        // 0x15192128: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_15192134;
    }
    // 0x15192128: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x1519212C: b           L_15192138
    // 0x15192130: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_15192138;
    // 0x15192130: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_15192134:
    // 0x15192134: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15192138:
    // 0x15192138: ori         $t2, $v0, 0xC207
    ctx->r10 = ctx->r2 | 0XC207;
    // 0x1519213C: or          $t1, $t2, $v1
    ctx->r9 = ctx->r10 | ctx->r3;
    // 0x15192140: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x15192144: lh          $t7, 0xD6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0XD6);
    // 0x15192148: or          $t4, $t1, $at
    ctx->r12 = ctx->r9 | ctx->r1;
    // 0x1519214C: sw          $t4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r12;
    // 0x15192150: addiu       $t5, $zero, 0x12
    ctx->r13 = ADD32(0, 0X12);
    // 0x15192154: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x15192158: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x1519215C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x15192160: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x15192164: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x15192168: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1519216C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x15192170: addiu       $t6, $t7, 0x12
    ctx->r14 = ADD32(ctx->r15, 0X12);
    // 0x15192174: sh          $t6, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r14;
    // 0x15192178: sh          $t5, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r13;
    // 0x1519217C: sh          $t8, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r24;
    // 0x15192180: sb          $t9, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r25;
    // 0x15192184: sb          $t0, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r8;
    // 0x15192188: sb          $t3, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = ctx->r11;
    // 0x1519218C: sb          $t2, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = ctx->r10;
    // 0x15192190: sb          $t1, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r9;
    // 0x15192194: jal         0x150ADA20
    // 0x15192198: sb          $t4, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15192198: sb          $t4, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r12;
    after_2:
    // 0x1519219C: jal         0x150ADA20
    // 0x151921A0: sb          $v0, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151921A0: sb          $v0, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r2;
    after_3:
    // 0x151921A4: lbu         $t5, 0xF3($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XF3);
    // 0x151921A8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151921AC: sb          $v0, 0x31($sp)
    MEM_B(0X31, ctx->r29) = ctx->r2;
    // 0x151921B0: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x151921B4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151921B8: lw          $t9, -0x330($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X330);
    // 0x151921BC: jalr        $t9
    // 0x151921C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x151921C0: nop

    after_4:
    // 0x151921C4: lwc1        $f0, 0xE0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151921C8: sb          $v0, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r2;
    // 0x151921CC: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x151921D0: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x151921D4: jal         0x150ADA20
    // 0x151921D8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151921D8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x151921DC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151921E0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151921E4: mfhi        $t0
    ctx->r8 = hi;
    // 0x151921E8: addiu       $t3, $t0, 0x5
    ctx->r11 = ADD32(ctx->r8, 0X5);
    // 0x151921EC: jal         0x150ADA20
    // 0x151921F0: sb          $t3, 0x32($sp)
    MEM_B(0X32, ctx->r29) = ctx->r11;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151921F0: sb          $t3, 0x32($sp)
    MEM_B(0X32, ctx->r29) = ctx->r11;
    after_6:
    // 0x151921F4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151921F8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151921FC: mfhi        $t2
    ctx->r10 = hi;
    // 0x15192200: addiu       $t1, $t2, 0x5
    ctx->r9 = ADD32(ctx->r10, 0X5);
    // 0x15192204: jal         0x150ADA68
    // 0x15192208: sb          $t1, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r9;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x15192208: sb          $t1, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r9;
    after_7:
    // 0x1519220C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x15192210: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15192214: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15192218: lwc1        $f10, -0x7F0C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X7F0C);
    // 0x1519221C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15192220: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15192224: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15192228: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1519222C: jal         0x150ADA68
    // 0x15192230: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x15192230: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x15192234: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x15192238: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1519223C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15192240: lwc1        $f10, -0x7F08($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X7F08);
    // 0x15192244: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15192248: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1519224C: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x15192250: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x15192254: addiu       $t4, $sp, 0x40
    ctx->r12 = ADD32(ctx->r29, 0X40);
    // 0x15192258: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x1519225C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x15192260: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15192264: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15192268: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x1519226C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15192270: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x15192274: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x15192278: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x1519227C: swl         $at, 0x0($t4)
    do_swl(rdram, 0X0, ctx->r12, ctx->r1);
    // 0x15192280: swr         $at, 0x3($t4)
    do_swr(rdram, 0X3, ctx->r12, ctx->r1);
    // 0x15192284: lwl         $t8, 0x4($t7)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r15, 0X4);
    // 0x15192288: lwr         $t8, 0x7($t7)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r15, 0X7);
    // 0x1519228C: swl         $t8, 0x4($t4)
    do_swl(rdram, 0X4, ctx->r12, ctx->r24);
    // 0x15192290: swr         $t8, 0x7($t4)
    do_swr(rdram, 0X7, ctx->r12, ctx->r24);
    // 0x15192294: lwl         $at, 0x8($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X8);
    // 0x15192298: lwr         $at, 0xB($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0XB);
    // 0x1519229C: swl         $at, 0x8($t4)
    do_swl(rdram, 0X8, ctx->r12, ctx->r1);
    // 0x151922A0: swr         $at, 0xB($t4)
    do_swr(rdram, 0XB, ctx->r12, ctx->r1);
    // 0x151922A4: lwl         $t8, 0xC($t7)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r15, 0XC);
    // 0x151922A8: lwr         $t8, 0xF($t7)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r15, 0XF);
    // 0x151922AC: swl         $t8, 0xC($t4)
    do_swl(rdram, 0XC, ctx->r12, ctx->r24);
    // 0x151922B0: swr         $t8, 0xF($t4)
    do_swr(rdram, 0XF, ctx->r12, ctx->r24);
    // 0x151922B4: lhu         $at, 0x10($t7)
    ctx->r1 = MEM_HU(ctx->r15, 0X10);
    // 0x151922B8: sh          $at, 0x10($t4)
    MEM_H(0X10, ctx->r12) = ctx->r1;
    // 0x151922BC: lbu         $t9, 0xF3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XF3);
    // 0x151922C0: lw          $t0, 0xF8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF8);
    // 0x151922C4: lbu         $a3, 0xF7($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XF7);
    // 0x151922C8: sb          $t9, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r25;
    // 0x151922CC: jal         0x15130374
    // 0x151922D0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_15130374(rdram, ctx);
        goto after_9;
    // 0x151922D0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_9:
    // 0x151922D4: beq         $v0, $zero, L_151922F4
    if (ctx->r2 == 0) {
        // 0x151922D8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151922F4;
    }
    // 0x151922D8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151922DC: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x151922E0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151922E4: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x151922E8: jal         0x10022EC0
    // 0x151922EC: sw          $v0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x151922EC: sw          $v0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r2;
    after_10:
    // 0x151922F0: lw          $v1, 0xC4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XC4);
L_151922F4:
    // 0x151922F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151922F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151922FC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x15192300: jr          $ra
    // 0x15192304: nop

    return;
    return;
    // 0x15192304: nop

;}
RECOMP_FUNC void func_15174690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15174690: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x15174694: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15174698: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x1517469C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x151746A0: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x151746A4: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x151746A8: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x151746AC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x151746B0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x151746B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151746B8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x151746BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151746C0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x151746C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151746C8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x151746CC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x151746D0: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x151746D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151746D8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x151746DC: lbu         $t8, 0xAD($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XAD);
    // 0x151746E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151746E4: bnel        $t8, $zero, L_15174910
    if (ctx->r24 != 0) {
        // 0x151746E8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_15174910;
    }
    goto skip_0;
    // 0x151746E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x151746EC: lwc1        $f4, 0x7160($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7160);
    // 0x151746F0: lwc1        $f6, 0x118($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X118);
    // 0x151746F4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151746F8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x151746FC: nop

    // 0x15174700: bc1fl       L_15174910
    if (!c1cs) {
        // 0x15174704: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_15174910;
    }
    goto skip_1;
    // 0x15174704: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x15174708: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1517470C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15174710: lwc1        $f4, 0x7164($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7164);
    // 0x15174714: lwc1        $f18, 0x40($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X40);
    // 0x15174718: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1517471C: lwc1        $f20, 0x14($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15174720: mul.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15174724: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15174728: lwc1        $f22, 0x1C($v0)
    ctx->f22.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1517472C: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x15174730: jal         0x15047D60
    // 0x15174734: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x15174734: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x15174738: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1517473C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15174740: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x15174744: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15174748: jal         0x15047C00
    // 0x1517474C: sub.s       $f20, $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f8.fl;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x1517474C: sub.s       $f20, $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f8.fl;
    after_1:
    // 0x15174750: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15174754: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15174758: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x1517475C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15174760: beq         $t9, $zero, L_15174800
    if (ctx->r25 == 0) {
        // 0x15174764: sub.s       $f22, $f22, $f16
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f16.fl;
            goto L_15174800;
    }
    // 0x15174764: sub.s       $f22, $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f16.fl;
    // 0x15174768: jal         0x150ADA20
    // 0x1517476C: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1517476C: nop

    after_2:
    // 0x15174770: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x15174774: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15174778: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1517477C: div         $zero, $v0, $t0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r8)));
    // 0x15174780: mfhi        $t1
    ctx->r9 = hi;
    // 0x15174784: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x15174788: bne         $t0, $zero, L_15174794
    if (ctx->r8 != 0) {
        // 0x1517478C: nop
    
            goto L_15174794;
    }
    // 0x1517478C: nop

    // 0x15174790: break       7
    do_break(353847184);
L_15174794:
    // 0x15174794: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15174798: bne         $t0, $at, L_151747AC
    if (ctx->r8 != ctx->r1) {
        // 0x1517479C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151747AC;
    }
    // 0x1517479C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151747A0: bne         $v1, $at, L_151747AC
    if (ctx->r3 != ctx->r1) {
        // 0x151747A4: nop
    
            goto L_151747AC;
    }
    // 0x151747A4: nop

    // 0x151747A8: break       6
    do_break(353847208);
L_151747AC:
    // 0x151747AC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151747B0: sw          $a0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r4;
    // 0x151747B4: jal         0x150ADA20
    // 0x151747B8: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151747B8: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
    after_3:
    // 0x151747BC: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x151747C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151747C4: sw          $a0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r4;
    // 0x151747C8: div         $zero, $v0, $t2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r10)));
    // 0x151747CC: mfhi        $t3
    ctx->r11 = hi;
    // 0x151747D0: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x151747D4: bne         $t2, $zero, L_151747E0
    if (ctx->r10 != 0) {
        // 0x151747D8: nop
    
            goto L_151747E0;
    }
    // 0x151747D8: nop

    // 0x151747DC: break       7
    do_break(353847260);
L_151747E0:
    // 0x151747E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151747E4: bne         $t2, $at, L_151747F8
    if (ctx->r10 != ctx->r1) {
        // 0x151747E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151747F8;
    }
    // 0x151747E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151747EC: bne         $a0, $at, L_151747F8
    if (ctx->r4 != ctx->r1) {
        // 0x151747F0: nop
    
            goto L_151747F8;
    }
    // 0x151747F0: nop

    // 0x151747F4: break       6
    do_break(353847284);
L_151747F8:
    // 0x151747F8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151747FC: add.s       $f22, $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f8.fl;
L_15174800:
    // 0x15174800: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x15174804: beql        $t4, $zero, L_1517483C
    if (ctx->r12 == 0) {
        // 0x15174808: lwc1        $f16, 0x84($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
            goto L_1517483C;
    }
    goto skip_2;
    // 0x15174808: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    skip_2:
    // 0x1517480C: jal         0x150ADA20
    // 0x15174810: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15174810: nop

    after_4:
    // 0x15174814: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x15174818: lw          $t5, 0x98($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X98);
    // 0x1517481C: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x15174820: mfhi        $t7
    ctx->r15 = hi;
    // 0x15174824: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x15174828: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
    // 0x1517482C: bne         $t6, $zero, L_15174838
    if (ctx->r14 != 0) {
        // 0x15174830: nop
    
            goto L_15174838;
    }
    // 0x15174830: nop

    // 0x15174834: break       7
    do_break(353847348);
L_15174838:
    // 0x15174838: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
L_1517483C:
    // 0x1517483C: trunc.w.s   $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    ctx->f10.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x15174840: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x15174844: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15174848: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1517484C: lw          $t9, -0x35B4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X35B4);
    // 0x15174850: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x15174854: trunc.w.s   $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    ctx->f4.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x15174858: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x1517485C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x15174860: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x15174864: addiu       $t2, $zero, 0x100
    ctx->r10 = ADD32(0, 0X100);
    // 0x15174868: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x1517486C: sh          $t5, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r13;
    // 0x15174870: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x15174874: lw          $t0, 0xA8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA8);
    // 0x15174878: lbu         $t5, 0xAF($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XAF);
    // 0x1517487C: lw          $t7, 0xB0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB0);
    // 0x15174880: sh          $t2, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r10;
    // 0x15174884: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x15174888: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x1517488C: sh          $t4, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r12;
    // 0x15174890: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x15174894: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x15174898: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1517489C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151748A0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151748A4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151748A8: sh          $zero, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = 0;
    // 0x151748AC: sh          $zero, 0x56($sp)
    MEM_H(0X56, ctx->r29) = 0;
    // 0x151748B0: sh          $zero, 0x58($sp)
    MEM_H(0X58, ctx->r29) = 0;
    // 0x151748B4: sh          $zero, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = 0;
    // 0x151748B8: sb          $t9, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r25;
    // 0x151748BC: sh          $zero, 0x62($sp)
    MEM_H(0X62, ctx->r29) = 0;
    // 0x151748C0: sh          $t1, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r9;
    // 0x151748C4: sb          $zero, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = 0;
    // 0x151748C8: sb          $zero, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = 0;
    // 0x151748CC: sb          $t2, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r10;
    // 0x151748D0: sb          $t3, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r11;
    // 0x151748D4: sb          $t4, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = ctx->r12;
    // 0x151748D8: sb          $t6, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r14;
    // 0x151748DC: sh          $zero, 0x74($sp)
    MEM_H(0X74, ctx->r29) = 0;
    // 0x151748E0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x151748E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151748E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151748EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151748F0: sh          $v0, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r2;
    // 0x151748F4: sh          $v0, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r2;
    // 0x151748F8: sh          $t8, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r24;
    // 0x151748FC: sh          $t0, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r8;
    // 0x15174900: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x15174904: jal         0x15167D84
    // 0x15174908: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_15167D84(rdram, ctx);
        goto after_5;
    // 0x15174908: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_5:
    // 0x1517490C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_15174910:
    // 0x15174910: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15174914: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x15174918: jr          $ra
    // 0x1517491C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    return;
    // 0x1517491C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_15034420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15034420: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x15034424: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x15034428: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503442C: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x15034430: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15034434: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x15034438: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503443C: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x15034440: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15034444: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15034448: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1503444C: lw          $t7, -0x3A4C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A4C);
    // 0x15034450: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15034454: lwc1        $f8, 0x7D18($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7D18);
    // 0x15034458: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1503445C: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x15034460: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x15034464: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15034468: sh          $t6, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r14;
    // 0x1503446C: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x15034470: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15034474: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15034478: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x1503447C: nop

    // 0x15034480: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x15034484: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15034488: sra         $t1, $t0, 4
    ctx->r9 = S32(SIGNED(ctx->r8) >> 4);
    // 0x1503448C: subu        $t5, $t0, $t1
    ctx->r13 = SUB32(ctx->r8, ctx->r9);
    // 0x15034490: sh          $t1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r9;
    // 0x15034494: sh          $t5, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r13;
    // 0x15034498: jr          $ra
    // 0x1503449C: nop

    return;
    return;
    // 0x1503449C: nop

;}
RECOMP_FUNC void func_1509D054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509D054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509D058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509D05C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1509D060: lw          $v0, 0x2FB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2FB0);
    // 0x1509D064: beql        $v0, $zero, L_1509D080
    if (ctx->r2 == 0) {
        // 0x1509D068: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1509D080;
    }
    goto skip_0;
    // 0x1509D068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1509D06C: jal         0x10004074
    // 0x1509D070: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_10004074(rdram, ctx);
        goto after_0;
    // 0x1509D070: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_0:
    // 0x1509D074: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509D078: sw          $zero, 0x2FB0($at)
    MEM_W(0X2FB0, ctx->r1) = 0;
    // 0x1509D07C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509D080:
    // 0x1509D080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1509D084: jr          $ra
    // 0x1509D088: nop

    return;
    return;
    // 0x1509D088: nop

;}
RECOMP_FUNC void func_1519C9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519C9C4: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x1519C9C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1519C9CC: lui         $at, 0xC35A
    ctx->r1 = S32(0XC35A << 16);
    // 0x1519C9D0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1519C9D4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x1519C9D8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1519C9DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519C9E0: lwc1        $f14, -0x7504($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X7504);
    // 0x1519C9E4: addiu       $sp, $sp, -0x148
    ctx->r29 = ADD32(ctx->r29, -0X148);
    // 0x1519C9E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519C9EC: lwc1        $f16, -0x7500($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X7500);
    // 0x1519C9F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519C9F4: sw          $a0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r4;
    // 0x1519C9F8: lw          $t6, 0x148($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X148);
    // 0x1519C9FC: lui         $at, 0xC313
    ctx->r1 = S32(0XC313 << 16);
    // 0x1519CA00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1519CA04: lw          $v0, 0x28($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X28);
    // 0x1519CA08: lui         $at, 0x4258
    ctx->r1 = S32(0X4258 << 16);
    // 0x1519CA0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1519CA10: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x1519CA14: lbu         $t7, 0x3B($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3B);
    // 0x1519CA18: lui         $at, 0xC364
    ctx->r1 = S32(0XC364 << 16);
    // 0x1519CA1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1519CA20: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1519CA24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1519CA28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CA2C: lwc1        $f18, -0x74FC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X74FC);
    // 0x1519CA30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CA34: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x1519CA38: lwc1        $f4, -0x74F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X74F8);
    // 0x1519CA3C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CA40: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x1519CA44: lwc1        $f6, -0x74F4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X74F4);
    // 0x1519CA48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CA4C: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x1519CA50: lwc1        $f8, -0x74F0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X74F0);
    // 0x1519CA54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CA58: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x1519CA5C: lwc1        $f10, -0x74EC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X74EC);
    // 0x1519CA60: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CA64: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x1519CA68: lwc1        $f18, -0x74E8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X74E8);
    // 0x1519CA6C: lui         $at, 0xC36A
    ctx->r1 = S32(0XC36A << 16);
    // 0x1519CA70: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x1519CA74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1519CA78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CA7C: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x1519CA80: lwc1        $f6, -0x74E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X74E4);
    // 0x1519CA84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CA88: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x1519CA8C: lwc1        $f8, -0x74E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X74E0);
    // 0x1519CA90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CA94: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x1519CA98: lwc1        $f10, -0x74DC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X74DC);
    // 0x1519CA9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CAA0: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x1519CAA4: lwc1        $f18, -0x74D8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X74D8);
    // 0x1519CAA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CAAC: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x1519CAB0: lwc1        $f4, -0x74D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X74D4);
    // 0x1519CAB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CAB8: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x1519CABC: lwc1        $f6, -0x74D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X74D0);
    // 0x1519CAC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CAC4: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x1519CAC8: lwc1        $f8, -0x74CC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X74CC);
    // 0x1519CACC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CAD0: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x1519CAD4: lwc1        $f10, -0x74C8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X74C8);
    // 0x1519CAD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CADC: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x1519CAE0: lwc1        $f18, -0x74C4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X74C4);
    // 0x1519CAE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CAE8: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x1519CAEC: lwc1        $f4, -0x74C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X74C0);
    // 0x1519CAF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CAF4: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x1519CAF8: lwc1        $f6, -0x74BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X74BC);
    // 0x1519CAFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CB00: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x1519CB04: lwc1        $f8, -0x74B8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X74B8);
    // 0x1519CB08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CB0C: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x1519CB10: lwc1        $f10, -0x74B4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X74B4);
    // 0x1519CB14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CB18: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x1519CB1C: lwc1        $f18, -0x74B0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X74B0);
    // 0x1519CB20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CB24: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    // 0x1519CB28: lwc1        $f4, -0x74AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X74AC);
    // 0x1519CB2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CB30: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x1519CB34: lwc1        $f6, -0x74A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X74A8);
    // 0x1519CB38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CB3C: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x1519CB40: lwc1        $f8, -0x74A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X74A4);
    // 0x1519CB44: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1519CB48: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x1519CB4C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1519CB50: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x1519CB54: swc1        $f18, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f18.u32l;
    // 0x1519CB58: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1519CB5C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1519CB60: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x1519CB64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1519CB68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CB6C: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    // 0x1519CB70: lwc1        $f6, -0x74A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X74A0);
    // 0x1519CB74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CB78: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    // 0x1519CB7C: lwc1        $f8, -0x749C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X749C);
    // 0x1519CB80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CB84: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x1519CB88: lwc1        $f10, -0x7498($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X7498);
    // 0x1519CB8C: lui         $at, 0x4306
    ctx->r1 = S32(0X4306 << 16);
    // 0x1519CB90: swc1        $f18, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f18.u32l;
    // 0x1519CB94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1519CB98: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x1519CB9C: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x1519CBA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1519CBA4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CBA8: swc1        $f6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f6.u32l;
    // 0x1519CBAC: lwc1        $f6, -0x7494($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7494);
    // 0x1519CBB0: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x1519CBB4: lui         $at, 0x422C
    ctx->r1 = S32(0X422C << 16);
    // 0x1519CBB8: swc1        $f8, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f8.u32l;
    // 0x1519CBBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1519CBC0: sb          $t8, 0x31($sp)
    MEM_B(0X31, ctx->r29) = ctx->r24;
    // 0x1519CBC4: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x1519CBC8: lui         $at, 0xBE80
    ctx->r1 = S32(0XBE80 << 16);
    // 0x1519CBCC: sb          $t7, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r15;
    // 0x1519CBD0: swc1        $f10, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f10.u32l;
    // 0x1519CBD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1519CBD8: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x1519CBDC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x1519CBE0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1519CBE4: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x1519CBE8: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x1519CBEC: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x1519CBF0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1519CBF4: addiu       $t6, $zero, 0xEB
    ctx->r14 = ADD32(0, 0XEB);
    // 0x1519CBF8: addiu       $t7, $zero, 0x52
    ctx->r15 = ADD32(0, 0X52);
    // 0x1519CBFC: sh          $t8, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r24;
    // 0x1519CC00: sb          $t9, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r25;
    // 0x1519CC04: sb          $t0, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r8;
    // 0x1519CC08: sb          $t1, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r9;
    // 0x1519CC0C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x1519CC10: sb          $t3, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r11;
    // 0x1519CC14: sb          $t4, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r12;
    // 0x1519CC18: sb          $t5, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r13;
    // 0x1519CC1C: sb          $t6, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = ctx->r14;
    // 0x1519CC20: sb          $t7, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r15;
    // 0x1519CC24: addiu       $t8, $zero, 0x50
    ctx->r24 = ADD32(0, 0X50);
    // 0x1519CC28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519CC2C: swc1        $f18, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f18.u32l;
    // 0x1519CC30: lwc1        $f18, -0x7490($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X7490);
    // 0x1519CC34: addiu       $t9, $zero, 0xD
    ctx->r25 = ADD32(0, 0XD);
    // 0x1519CC38: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x1519CC3C: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
    // 0x1519CC40: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x1519CC44: addiu       $t3, $zero, 0x50
    ctx->r11 = ADD32(0, 0X50);
    // 0x1519CC48: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x1519CC4C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x1519CC50: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x1519CC54: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x1519CC58: sh          $t8, 0x100($sp)
    MEM_H(0X100, ctx->r29) = ctx->r24;
    // 0x1519CC5C: lw          $t8, 0x148($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X148);
    // 0x1519CC60: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    // 0x1519CC64: sh          $t0, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r8;
    // 0x1519CC68: sh          $t1, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r9;
    // 0x1519CC6C: sb          $t2, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r10;
    // 0x1519CC70: sb          $t3, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r11;
    // 0x1519CC74: sw          $t4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r12;
    // 0x1519CC78: sw          $t5, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r13;
    // 0x1519CC7C: sh          $t6, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = ctx->r14;
    // 0x1519CC80: sh          $t7, 0xE2($sp)
    MEM_H(0XE2, ctx->r29) = ctx->r15;
    // 0x1519CC84: addiu       $t9, $zero, 0xAF
    ctx->r25 = ADD32(0, 0XAF);
    // 0x1519CC88: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
    // 0x1519CC8C: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x1519CC90: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x1519CC94: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x1519CC98: addiu       $t4, $zero, 0x9B
    ctx->r12 = ADD32(0, 0X9B);
    // 0x1519CC9C: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x1519CCA0: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x1519CCA4: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x1519CCA8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x1519CCAC: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x1519CCB0: sb          $zero, 0x61($sp)
    MEM_B(0X61, ctx->r29) = 0;
    // 0x1519CCB4: sb          $zero, 0x63($sp)
    MEM_B(0X63, ctx->r29) = 0;
    // 0x1519CCB8: sb          $zero, 0x64($sp)
    MEM_B(0X64, ctx->r29) = 0;
    // 0x1519CCBC: sb          $zero, 0x65($sp)
    MEM_B(0X65, ctx->r29) = 0;
    // 0x1519CCC0: sb          $zero, 0x74($sp)
    MEM_B(0X74, ctx->r29) = 0;
    // 0x1519CCC4: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x1519CCC8: swc1        $f2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f2.u32l;
    // 0x1519CCCC: swc1        $f12, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f12.u32l;
    // 0x1519CCD0: swc1        $f14, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f14.u32l;
    // 0x1519CCD4: swc1        $f14, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f14.u32l;
    // 0x1519CCD8: sh          $t9, 0x102($sp)
    MEM_H(0X102, ctx->r29) = ctx->r25;
    // 0x1519CCDC: sh          $t0, 0x104($sp)
    MEM_H(0X104, ctx->r29) = ctx->r8;
    // 0x1519CCE0: sh          $t1, 0x106($sp)
    MEM_H(0X106, ctx->r29) = ctx->r9;
    // 0x1519CCE4: swc1        $f0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f0.u32l;
    // 0x1519CCE8: swc1        $f2, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f2.u32l;
    // 0x1519CCEC: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x1519CCF0: swc1        $f16, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f16.u32l;
    // 0x1519CCF4: sh          $t2, 0x11C($sp)
    MEM_H(0X11C, ctx->r29) = ctx->r10;
    // 0x1519CCF8: sh          $t3, 0x11E($sp)
    MEM_H(0X11E, ctx->r29) = ctx->r11;
    // 0x1519CCFC: sh          $t4, 0x120($sp)
    MEM_H(0X120, ctx->r29) = ctx->r12;
    // 0x1519CD00: sh          $t5, 0x122($sp)
    MEM_H(0X122, ctx->r29) = ctx->r13;
    // 0x1519CD04: swc1        $f16, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f16.u32l;
    // 0x1519CD08: sh          $t6, 0x140($sp)
    MEM_H(0X140, ctx->r29) = ctx->r14;
    // 0x1519CD0C: sh          $t7, 0x142($sp)
    MEM_H(0X142, ctx->r29) = ctx->r15;
    // 0x1519CD10: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    // 0x1519CD14: swc1        $f6, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f6.u32l;
    // 0x1519CD18: swc1        $f8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f8.u32l;
    // 0x1519CD1C: swc1        $f10, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f10.u32l;
    // 0x1519CD20: swc1        $f18, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f18.u32l;
    // 0x1519CD24: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x1519CD28: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x1519CD2C: lbu         $a3, 0x1($t8)
    ctx->r7 = MEM_BU(ctx->r24, 0X1);
    // 0x1519CD30: jal         0x151994B8
    // 0x1519CD34: lbu         $a2, 0xC($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0XC);
    func_151994B8(rdram, ctx);
        goto after_0;
    // 0x1519CD34: lbu         $a2, 0xC($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0XC);
    after_0:
    // 0x1519CD38: beq         $v0, $zero, L_1519CD54
    if (ctx->r2 == 0) {
        // 0x1519CD3C: lw          $a1, 0x148($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X148);
            goto L_1519CD54;
    }
    // 0x1519CD3C: lw          $a1, 0x148($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X148);
    // 0x1519CD40: lw          $v0, 0x98($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X98);
    // 0x1519CD44: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x1519CD48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x1519CD4C: jal         0x10022EC0
    // 0x1519CD50: addiu       $a0, $v0, 0x158
    ctx->r4 = ADD32(ctx->r2, 0X158);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1519CD50: addiu       $a0, $v0, 0x158
    ctx->r4 = ADD32(ctx->r2, 0X158);
    after_1:
L_1519CD54:
    // 0x1519CD54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1519CD58: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
    // 0x1519CD5C: jr          $ra
    // 0x1519CD60: nop

    return;
    return;
    // 0x1519CD60: nop

;}
RECOMP_FUNC void func_150A6354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A6354: mtc1        $t1, $f20
    ctx->f20.u32l = ctx->r9;
    // 0x150A6358: jr          $ra
    // 0x150A635C: mtc1        $t2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r10;
    return;
    return;
    // 0x150A635C: mtc1        $t2, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r10;
;}
RECOMP_FUNC void func_15095760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15095760: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15095764: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15095768: lh          $t8, 0x4($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X4);
    // 0x1509576C: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x15095770: lh          $t7, 0x2($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X2);
    // 0x15095774: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15095778: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x1509577C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15095780: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15095784: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x15095788: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1509578C: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x15095790: addiu       $t1, $sp, 0x3C
    ctx->r9 = ADD32(ctx->r29, 0X3C);
    // 0x15095794: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15095798: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x1509579C: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x150957A0: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    // 0x150957A4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150957A8: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150957AC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x150957B0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150957B4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x150957B8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x150957BC: jal         0x1509563C
    // 0x150957C0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_1509563C(rdram, ctx);
        goto after_0;
    // 0x150957C0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x150957C4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x150957C8: bne         $v0, $zero, L_150957D8
    if (ctx->r2 != 0) {
        // 0x150957CC: lw          $a1, 0x4C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X4C);
            goto L_150957D8;
    }
    // 0x150957CC: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x150957D0: b           L_150958A0
    // 0x150957D4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_150958A0;
    // 0x150957D4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_150957D8:
    // 0x150957D8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x150957DC: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x150957E0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x150957E4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x150957E8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x150957EC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x150957F0: lui         $t4, 0xEE00
    ctx->r12 = S32(0XEE00 << 16);
    // 0x150957F4: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x150957F8: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150957FC: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15095800: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x15095804: lw          $t6, 0x2FA4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA4);
    // 0x15095808: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1509580C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15095810: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15095814: lbu         $t9, -0x1640($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1640);
    // 0x15095818: lw          $t5, -0x19D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X19D8);
    // 0x1509581C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15095820: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15095824: sll         $t7, $t7, 7
    ctx->r15 = S32(ctx->r15 << 7);
    // 0x15095828: sll         $t1, $t9, 4
    ctx->r9 = S32(ctx->r25 << 4);
    // 0x1509582C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x15095830: addu        $t0, $t8, $t1
    ctx->r8 = ADD32(ctx->r24, ctx->r9);
    // 0x15095834: lh          $t2, 0x44($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X44);
    // 0x15095838: lh          $t3, 0x4C($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X4C);
    // 0x1509583C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x15095840: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x15095844: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x15095848: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1509584C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15095850: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15095854: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15095858: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1509585C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15095860: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x15095864: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x15095868: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1509586C: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x15095870: nop

    // 0x15095874: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x15095878: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x1509587C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15095880: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x15095884: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x15095888: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1509588C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15095890: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15095894: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15095898: jal         0x15095A90
    // 0x1509589C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_15095A90(rdram, ctx);
        goto after_1;
    // 0x1509589C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_1:
L_150958A0:
    // 0x150958A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150958A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150958A8: jr          $ra
    // 0x150958AC: nop

    return;
    return;
    // 0x150958AC: nop

;}
RECOMP_FUNC void func_1503378C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503378C: lbu         $t6, 0x1($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1);
    // 0x15033790: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x15033794: lhu         $v0, 0x84($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X84);
    // 0x15033798: bne         $t6, $at, L_150337D8
    if (ctx->r14 != ctx->r1) {
        // 0x1503379C: addiu       $at, $zero, 0x3E
        ctx->r1 = ADD32(0, 0X3E);
            goto L_150337D8;
    }
    // 0x1503379C: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x150337A0: beq         $v0, $at, L_150337D0
    if (ctx->r2 == ctx->r1) {
        // 0x150337A4: addiu       $at, $zero, 0x3D
        ctx->r1 = ADD32(0, 0X3D);
            goto L_150337D0;
    }
    // 0x150337A4: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x150337A8: beq         $v0, $at, L_150337D0
    if (ctx->r2 == ctx->r1) {
        // 0x150337AC: addiu       $at, $zero, 0x41
        ctx->r1 = ADD32(0, 0X41);
            goto L_150337D0;
    }
    // 0x150337AC: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x150337B0: beq         $v0, $at, L_150337D0
    if (ctx->r2 == ctx->r1) {
        // 0x150337B4: addiu       $at, $zero, 0xD9
        ctx->r1 = ADD32(0, 0XD9);
            goto L_150337D0;
    }
    // 0x150337B4: addiu       $at, $zero, 0xD9
    ctx->r1 = ADD32(0, 0XD9);
    // 0x150337B8: beq         $v0, $at, L_150337D0
    if (ctx->r2 == ctx->r1) {
        // 0x150337BC: addiu       $at, $zero, 0x138
        ctx->r1 = ADD32(0, 0X138);
            goto L_150337D0;
    }
    // 0x150337BC: addiu       $at, $zero, 0x138
    ctx->r1 = ADD32(0, 0X138);
    // 0x150337C0: beq         $v0, $at, L_150337D0
    if (ctx->r2 == ctx->r1) {
        // 0x150337C4: addiu       $at, $zero, 0x139
        ctx->r1 = ADD32(0, 0X139);
            goto L_150337D0;
    }
    // 0x150337C4: addiu       $at, $zero, 0x139
    ctx->r1 = ADD32(0, 0X139);
    // 0x150337C8: bnel        $v0, $at, L_150337DC
    if (ctx->r2 != ctx->r1) {
        // 0x150337CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150337DC;
    }
    goto skip_0;
    // 0x150337CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
L_150337D0:
    // 0x150337D0: jr          $ra
    // 0x150337D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150337D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150337D8:
    // 0x150337D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150337DC:
    // 0x150337DC: jr          $ra
    // 0x150337E0: nop

    return;
    return;
    // 0x150337E0: nop

;}
RECOMP_FUNC void func_150407C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150407C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150407C4: jr          $ra
    // 0x150407C8: nop

    return;
    return;
    // 0x150407C8: nop

;}
RECOMP_FUNC void func_1519A9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519A9A4: addiu       $sp, $sp, -0x210
    ctx->r29 = ADD32(ctx->r29, -0X210);
    // 0x1519A9A8: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x1519A9AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1519A9B0: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x1519A9B4: sw          $s5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r21;
    // 0x1519A9B8: sw          $s4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r20;
    // 0x1519A9BC: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x1519A9C0: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x1519A9C4: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x1519A9C8: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x1519A9CC: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x1519A9D0: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x1519A9D4: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x1519A9D8: lw          $s1, 0x98($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X98);
    // 0x1519A9DC: lw          $s4, 0x94($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X94);
    // 0x1519A9E0: lbu         $t6, 0x150($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X150);
    // 0x1519A9E4: lwc1        $f22, 0x28($s1)
    ctx->f22.u32l = MEM_W(ctx->r17, 0X28);
    // 0x1519A9E8: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x1519A9EC: beql        $t7, $zero, L_1519AAE0
    if (ctx->r15 == 0) {
        // 0x1519A9F0: lb          $v0, 0x2C($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X2C);
            goto L_1519AAE0;
    }
    goto skip_0;
    // 0x1519A9F0: lb          $v0, 0x2C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2C);
    skip_0:
    // 0x1519A9F4: lb          $t8, 0x2C($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X2C);
    // 0x1519A9F8: addiu       $t4, $sp, 0x1EC
    ctx->r12 = ADD32(ctx->r29, 0X1EC);
    // 0x1519A9FC: addiu       $t5, $sp, 0x1F0
    ctx->r13 = ADD32(ctx->r29, 0X1F0);
    // 0x1519AA00: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x1519AA04: bne         $at, $zero, L_1519AADC
    if (ctx->r1 != 0) {
        // 0x1519AA08: addiu       $t6, $sp, 0x1F4
        ctx->r14 = ADD32(ctx->r29, 0X1F4);
            goto L_1519AADC;
    }
    // 0x1519AA08: addiu       $t6, $sp, 0x1F4
    ctx->r14 = ADD32(ctx->r29, 0X1F4);
    // 0x1519AA0C: lhu         $t9, 0x1E($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1E);
    // 0x1519AA10: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x1519AA14: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x1519AA18: andi        $t2, $t9, 0x2
    ctx->r10 = ctx->r25 & 0X2;
    // 0x1519AA1C: beq         $t2, $zero, L_1519AA2C
    if (ctx->r10 == 0) {
        // 0x1519AA20: lui         $at, 0x4240
        ctx->r1 = S32(0X4240 << 16);
            goto L_1519AA2C;
    }
    // 0x1519AA20: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x1519AA24: b           L_1519AA58
    // 0x1519AA28: addiu       $v1, $s0, 0x10
    ctx->r3 = ADD32(ctx->r16, 0X10);
        goto L_1519AA58;
    // 0x1519AA28: addiu       $v1, $s0, 0x10
    ctx->r3 = ADD32(ctx->r16, 0X10);
L_1519AA2C:
    // 0x1519AA2C: lb          $v0, 0x2E($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2E);
    // 0x1519AA30: addiu       $s5, $zero, 0x28
    ctx->r21 = ADD32(0, 0X28);
    // 0x1519AA34: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1519AA38: bgez        $v0, L_1519AA48
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1519AA3C: nop
    
            goto L_1519AA48;
    }
    // 0x1519AA3C: nop

    // 0x1519AA40: lbu         $v0, 0x25($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X25);
    // 0x1519AA44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_1519AA48:
    // 0x1519AA48: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519AA4C: mflo        $t3
    ctx->r11 = lo;
    // 0x1519AA50: addu        $v1, $t3, $s4
    ctx->r3 = ADD32(ctx->r11, ctx->r20);
    // 0x1519AA54: nop

L_1519AA58:
    // 0x1519AA58: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1519AA5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1519AA60: lwc1        $f0, 0x1C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x1519AA64: lwc1        $f12, 0x14($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1519AA68: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1519AA6C: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1519AA70: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1519AA74: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1519AA78: sub.s       $f2, $f8, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x1519AA7C: addiu       $t7, $sp, 0x1D4
    ctx->r15 = ADD32(ctx->r29, 0X1D4);
    // 0x1519AA80: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x1519AA84: sub.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x1519AA88: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x1519AA8C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x1519AA90: sub.s       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x1519AA94: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x1519AA98: swc1        $f24, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f24.u32l;
    // 0x1519AA9C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1519AAA0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x1519AAA4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1519AAA8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x1519AAAC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x1519AAB0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x1519AAB4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1519AAB8: jal         0x150AC9C0
    // 0x1519AABC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_150AC9C0(rdram, ctx);
        goto after_0;
    // 0x1519AABC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x1519AAC0: beq         $v0, $zero, L_1519AADC
    if (ctx->r2 == 0) {
        // 0x1519AAC4: lwc1        $f0, 0x1D4($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1D4);
            goto L_1519AADC;
    }
    // 0x1519AAC4: lwc1        $f0, 0x1D4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1D4);
    // 0x1519AAC8: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x1519AACC: nop

    // 0x1519AAD0: bc1fl       L_1519AAE0
    if (!c1cs) {
        // 0x1519AAD4: lb          $v0, 0x2C($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X2C);
            goto L_1519AAE0;
    }
    goto skip_1;
    // 0x1519AAD4: lb          $v0, 0x2C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2C);
    skip_1:
    // 0x1519AAD8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
L_1519AADC:
    // 0x1519AADC: lb          $v0, 0x2C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2C);
L_1519AAE0:
    // 0x1519AAE0: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x1519AAE4: addiu       $s5, $zero, 0x28
    ctx->r21 = ADD32(0, 0X28);
    // 0x1519AAE8: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x1519AAEC: bnel        $at, $zero, L_1519AC8C
    if (ctx->r1 != 0) {
        // 0x1519AAF0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1519AC8C;
    }
    goto skip_2;
    // 0x1519AAF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_2:
    // 0x1519AAF4: lb          $a1, 0x2E($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X2E);
    // 0x1519AAF8: swc1        $f24, 0x14C($s1)
    MEM_W(0X14C, ctx->r17) = ctx->f24.u32l;
    // 0x1519AAFC: lhu         $t8, 0x1E($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X1E);
    // 0x1519AB00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1519AB04: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1519AB08: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x1519AB0C: beq         $t9, $zero, L_1519AB1C
    if (ctx->r25 == 0) {
        // 0x1519AB10: addiu       $s2, $sp, 0x1BC
        ctx->r18 = ADD32(ctx->r29, 0X1BC);
            goto L_1519AB1C;
    }
    // 0x1519AB10: addiu       $s2, $sp, 0x1BC
    ctx->r18 = ADD32(ctx->r29, 0X1BC);
    // 0x1519AB14: b           L_1519AB40
    // 0x1519AB18: addiu       $v0, $s0, 0x10
    ctx->r2 = ADD32(ctx->r16, 0X10);
        goto L_1519AB40;
    // 0x1519AB18: addiu       $v0, $s0, 0x10
    ctx->r2 = ADD32(ctx->r16, 0X10);
L_1519AB1C:
    // 0x1519AB1C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x1519AB20: bgez        $a1, L_1519AB30
    if (SIGNED(ctx->r5) >= 0) {
        // 0x1519AB24: nop
    
            goto L_1519AB30;
    }
    // 0x1519AB24: nop

    // 0x1519AB28: lbu         $a1, 0x25($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X25);
    // 0x1519AB2C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_1519AB30:
    // 0x1519AB30: multu       $a1, $s5
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519AB34: mflo        $t2
    ctx->r10 = lo;
    // 0x1519AB38: addu        $v0, $t2, $s4
    ctx->r2 = ADD32(ctx->r10, ctx->r20);
    // 0x1519AB3C: nop

L_1519AB40:
    // 0x1519AB40: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_1519AB44:
    // 0x1519AB44: bgez        $a1, L_1519AB54
    if (SIGNED(ctx->r5) >= 0) {
        // 0x1519AB48: nop
    
            goto L_1519AB54;
    }
    // 0x1519AB48: nop

    // 0x1519AB4C: lbu         $a1, 0x25($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X25);
    // 0x1519AB50: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_1519AB54:
    // 0x1519AB54: multu       $a1, $s5
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519AB58: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1519AB5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1519AB60: mflo        $t3
    ctx->r11 = lo;
    // 0x1519AB64: addu        $v1, $t3, $s4
    ctx->r3 = ADD32(ctx->r11, ctx->r20);
    // 0x1519AB68: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1519AB6C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1519AB70: swc1        $f10, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f10.u32l;
    // 0x1519AB74: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1519AB78: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1519AB7C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1519AB80: swc1        $f8, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f8.u32l;
    // 0x1519AB84: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1519AB88: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1519AB8C: sw          $a1, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->r5;
    // 0x1519AB90: sw          $v1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r3;
    // 0x1519AB94: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1519AB98: jal         0x15143E64
    // 0x1519AB9C: swc1        $f6, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f6.u32l;
    func_15143E64(rdram, ctx);
        goto after_1;
    // 0x1519AB9C: swc1        $f6, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x1519ABA0: lw          $v1, 0x88($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X88);
    // 0x1519ABA4: lw          $a1, 0x1C8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C8);
    // 0x1519ABA8: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x1519ABAC: lwc1        $f8, 0x14C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X14C);
    // 0x1519ABB0: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x1519ABB4: swc1        $f10, 0x14C($s1)
    MEM_W(0X14C, ctx->r17) = ctx->f10.u32l;
    // 0x1519ABB8: lwc1        $f16, 0x14C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X14C);
    // 0x1519ABBC: c.lt.s      $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f22.fl < ctx->f16.fl;
    // 0x1519ABC0: nop

    // 0x1519ABC4: bc1fl       L_1519AC78
    if (!c1cs) {
        // 0x1519ABC8: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1519AC78;
    }
    goto skip_3;
    // 0x1519ABC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_3:
    // 0x1519ABCC: lwc1        $f2, 0x1C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1519ABD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1519ABD4: nop

    // 0x1519ABD8: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x1519ABDC: nop

    // 0x1519ABE0: bc1tl       L_1519AC3C
    if (c1cs) {
        // 0x1519ABE4: lb          $v0, 0x2D($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X2D);
            goto L_1519AC3C;
    }
    goto skip_4;
    // 0x1519ABE4: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    skip_4:
    // 0x1519ABE8: sub.s       $f6, $f16, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f22.fl;
    // 0x1519ABEC: lwc1        $f10, 0x1BC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x1519ABF0: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1519ABF4: div.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1519ABF8: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1519ABFC: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1519AC00: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1519AC04: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x1519AC08: lwc1        $f8, 0x1C0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x1519AC0C: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1519AC10: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1519AC14: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1519AC18: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x1519AC1C: lwc1        $f10, 0x1C4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C4);
    // 0x1519AC20: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1519AC24: sub.s       $f10, $f26, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f26.fl - ctx->f0.fl;
    // 0x1519AC28: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1519AC2C: mul.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x1519AC30: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x1519AC34: swc1        $f8, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f8.u32l;
    // 0x1519AC38: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
L_1519AC3C:
    // 0x1519AC3C: beq         $a1, $v0, L_1519AC70
    if (ctx->r5 == ctx->r2) {
        // 0x1519AC40: addiu       $t4, $v0, 0x1
        ctx->r12 = ADD32(ctx->r2, 0X1);
            goto L_1519AC70;
    }
L_1519AC40:
    // 0x1519AC40: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x1519AC44: sb          $t4, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r12;
    // 0x1519AC48: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x1519AC4C: lbu         $t5, 0x25($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X25);
    // 0x1519AC50: bnel        $t5, $v0, L_1519AC64
    if (ctx->r13 != ctx->r2) {
        // 0x1519AC54: lb          $t6, 0x2C($s0)
        ctx->r14 = MEM_B(ctx->r16, 0X2C);
            goto L_1519AC64;
    }
    goto skip_5;
    // 0x1519AC54: lb          $t6, 0x2C($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2C);
    skip_5:
    // 0x1519AC58: sb          $zero, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = 0;
    // 0x1519AC5C: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x1519AC60: lb          $t6, 0x2C($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2C);
L_1519AC64:
    // 0x1519AC64: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x1519AC68: bne         $a1, $v0, L_1519AC40
    if (ctx->r5 != ctx->r2) {
        // 0x1519AC6C: sb          $t7, 0x2C($s0)
        MEM_B(0X2C, ctx->r16) = ctx->r15;
            goto L_1519AC40;
    }
    // 0x1519AC6C: sb          $t7, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r15;
L_1519AC70:
    // 0x1519AC70: swc1        $f22, 0x14C($s1)
    MEM_W(0X14C, ctx->r17) = ctx->f22.u32l;
    // 0x1519AC74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1519AC78:
    // 0x1519AC78: lb          $t8, 0x2D($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X2D);
    // 0x1519AC7C: bnel        $a1, $t8, L_1519AB44
    if (ctx->r5 != ctx->r24) {
        // 0x1519AC80: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_1519AB44;
    }
    goto skip_6;
    // 0x1519AC80: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    skip_6:
    // 0x1519AC84: lb          $v0, 0x2C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2C);
    // 0x1519AC88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_1519AC8C:
    // 0x1519AC8C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1519AC90: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x1519AC94: bnel        $at, $zero, L_1519ADB8
    if (ctx->r1 != 0) {
        // 0x1519AC98: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_1519ADB8;
    }
    goto skip_7;
    // 0x1519AC98: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    skip_7:
    // 0x1519AC9C: lwc1        $f16, 0x14C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X14C);
    // 0x1519ACA0: lwc1        $f4, 0x3C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x1519ACA4: mov.s       $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    ctx->f0.fl = ctx->f24.fl;
    // 0x1519ACA8: lb          $v0, 0x2E($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2E);
    // 0x1519ACAC: mul.s       $f2, $f16, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x1519ACB0: sub.s       $f12, $f16, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x1519ACB4: div.s       $f14, $f26, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = DIV_S(ctx->f26.fl, ctx->f12.fl);
    // 0x1519ACB8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_1519ACBC:
    // 0x1519ACBC: bgez        $v0, L_1519ACCC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1519ACC0: nop
    
            goto L_1519ACCC;
    }
    // 0x1519ACC0: nop

    // 0x1519ACC4: lbu         $v0, 0x25($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X25);
    // 0x1519ACC8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_1519ACCC:
    // 0x1519ACCC: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519ACD0: mflo        $t9
    ctx->r25 = lo;
    // 0x1519ACD4: addu        $v1, $t9, $s4
    ctx->r3 = ADD32(ctx->r25, ctx->r20);
    // 0x1519ACD8: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1519ACDC: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x1519ACE0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1519ACE4: nop

    // 0x1519ACE8: bc1fl       L_1519ADA0
    if (!c1cs) {
        // 0x1519ACEC: lbu         $t4, 0x3A($s1)
        ctx->r12 = MEM_BU(ctx->r17, 0X3A);
            goto L_1519ADA0;
    }
    goto skip_8;
    // 0x1519ACEC: lbu         $t4, 0x3A($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X3A);
    skip_8:
    // 0x1519ACF0: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x1519ACF4: lwc1        $f10, 0x140($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X140);
    // 0x1519ACF8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1519ACFC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1519AD00: sub.s       $f4, $f12, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x1519AD04: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x1519AD08: nop

    // 0x1519AD0C: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1519AD10: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x1519AD14: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x1519AD18: nop

    // 0x1519AD1C: cvt.w.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = CVT_W_S(ctx->f8.fl);
    // 0x1519AD20: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x1519AD24: nop

    // 0x1519AD28: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x1519AD2C: beq         $t3, $zero, L_1519AD78
    if (ctx->r11 == 0) {
        // 0x1519AD30: nop
    
            goto L_1519AD78;
    }
    // 0x1519AD30: nop

    // 0x1519AD34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1519AD38: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1519AD3C: sub.s       $f4, $f8, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1519AD40: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x1519AD44: nop

    // 0x1519AD48: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x1519AD4C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x1519AD50: nop

    // 0x1519AD54: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x1519AD58: bne         $t3, $zero, L_1519AD70
    if (ctx->r11 != 0) {
        // 0x1519AD5C: nop
    
            goto L_1519AD70;
    }
    // 0x1519AD5C: nop

    // 0x1519AD60: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x1519AD64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1519AD68: b           L_1519AD88
    // 0x1519AD6C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_1519AD88;
    // 0x1519AD6C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_1519AD70:
    // 0x1519AD70: b           L_1519AD88
    // 0x1519AD74: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_1519AD88;
    // 0x1519AD74: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_1519AD78:
    // 0x1519AD78: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x1519AD7C: nop

    // 0x1519AD80: bltz        $t3, L_1519AD70
    if (SIGNED(ctx->r11) < 0) {
        // 0x1519AD84: nop
    
            goto L_1519AD70;
    }
    // 0x1519AD84: nop

L_1519AD88:
    // 0x1519AD88: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x1519AD8C: sb          $t3, 0x20($v1)
    MEM_B(0X20, ctx->r3) = ctx->r11;
    // 0x1519AD90: nop

    // 0x1519AD94: b           L_1519ADA8
    // 0x1519AD98: lb          $t5, 0x2D($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2D);
        goto L_1519ADA8;
    // 0x1519AD98: lb          $t5, 0x2D($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2D);
    // 0x1519AD9C: lbu         $t4, 0x3A($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X3A);
L_1519ADA0:
    // 0x1519ADA0: sb          $t4, 0x20($v1)
    MEM_B(0X20, ctx->r3) = ctx->r12;
    // 0x1519ADA4: lb          $t5, 0x2D($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2D);
L_1519ADA8:
    // 0x1519ADA8: bnel        $v0, $t5, L_1519ACBC
    if (ctx->r2 != ctx->r13) {
        // 0x1519ADAC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_1519ACBC;
    }
    goto skip_9;
    // 0x1519ADAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_9:
    // 0x1519ADB0: lb          $v0, 0x2C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2C);
    // 0x1519ADB4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
L_1519ADB8:
    // 0x1519ADB8: bne         $at, $zero, L_1519AE6C
    if (ctx->r1 != 0) {
        // 0x1519ADBC: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_1519AE6C;
    }
    // 0x1519ADBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519ADC0: lwc1        $f20, -0x7518($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X7518);
    // 0x1519ADC4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1519ADC8: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1519ADCC: lwc1        $f10, 0x40($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X40);
    // 0x1519ADD0: lwc1        $f4, 0x144($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X144);
    // 0x1519ADD4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x1519ADD8: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1519ADDC: lui         $a2, 0xC680
    ctx->r6 = S32(0XC680 << 16);
    // 0x1519ADE0: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1519ADE4: swc1        $f10, 0x144($s1)
    MEM_W(0X144, ctx->r17) = ctx->f10.u32l;
    // 0x1519ADE8: jal         0x15144528
    // 0x1519ADEC: lwc1        $f12, 0x144($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X144);
    func_15144528(rdram, ctx);
        goto after_2;
    // 0x1519ADEC: lwc1        $f12, 0x144($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X144);
    after_2:
    // 0x1519ADF0: swc1        $f0, 0x144($s1)
    MEM_W(0X144, ctx->r17) = ctx->f0.u32l;
    // 0x1519ADF4: lb          $v0, 0x2E($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2E);
    // 0x1519ADF8: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
    // 0x1519ADFC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_1519AE00:
    // 0x1519AE00: bgez        $v0, L_1519AE10
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1519AE04: nop
    
            goto L_1519AE10;
    }
    // 0x1519AE04: nop

    // 0x1519AE08: lbu         $v0, 0x25($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X25);
    // 0x1519AE0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_1519AE10:
    // 0x1519AE10: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519AE14: lwc1        $f8, 0x44($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X44);
    // 0x1519AE18: lwc1        $f4, 0x144($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X144);
    // 0x1519AE1C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x1519AE20: lui         $a2, 0xC680
    ctx->r6 = S32(0XC680 << 16);
    // 0x1519AE24: mflo        $t6
    ctx->r14 = lo;
    // 0x1519AE28: addu        $v1, $t6, $s4
    ctx->r3 = ADD32(ctx->r14, ctx->r20);
    // 0x1519AE2C: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1519AE30: sw          $v1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r3;
    // 0x1519AE34: sw          $v0, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r2;
    // 0x1519AE38: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x1519AE3C: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x1519AE40: swc1        $f2, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f2.u32l;
    // 0x1519AE44: jal         0x15144528
    // 0x1519AE48: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    func_15144528(rdram, ctx);
        goto after_3;
    // 0x1519AE48: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    after_3:
    // 0x1519AE4C: lw          $v1, 0x88($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X88);
    // 0x1519AE50: lw          $v0, 0x194($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X194);
    // 0x1519AE54: lwc1        $f2, 0x190($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X190);
    // 0x1519AE58: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x1519AE5C: lb          $t7, 0x2D($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X2D);
    // 0x1519AE60: bnel        $v0, $t7, L_1519AE00
    if (ctx->r2 != ctx->r15) {
        // 0x1519AE64: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_1519AE00;
    }
    goto skip_10;
    // 0x1519AE64: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_10:
    // 0x1519AE68: lb          $v0, 0x2C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2C);
L_1519AE6C:
    // 0x1519AE6C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x1519AE70: bnel        $at, $zero, L_1519B398
    if (ctx->r1 != 0) {
        // 0x1519AE74: lb          $v0, 0x35($s1)
        ctx->r2 = MEM_B(ctx->r17, 0X35);
            goto L_1519B398;
    }
    goto skip_11;
    // 0x1519AE74: lb          $v0, 0x35($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X35);
    skip_11:
    // 0x1519AE78: lbu         $v0, 0x150($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X150);
    // 0x1519AE7C: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x1519AE80: beq         $t8, $zero, L_1519AE90
    if (ctx->r24 == 0) {
        // 0x1519AE84: andi        $t9, $v0, 0x10
        ctx->r25 = ctx->r2 & 0X10;
            goto L_1519AE90;
    }
    // 0x1519AE84: andi        $t9, $v0, 0x10
    ctx->r25 = ctx->r2 & 0X10;
    // 0x1519AE88: bnel        $t9, $zero, L_1519B398
    if (ctx->r25 != 0) {
        // 0x1519AE8C: lb          $v0, 0x35($s1)
        ctx->r2 = MEM_B(ctx->r17, 0X35);
            goto L_1519B398;
    }
    goto skip_12;
    // 0x1519AE8C: lb          $v0, 0x35($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X35);
    skip_12:
L_1519AE90:
    // 0x1519AE90: lwc1        $f6, 0x14C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14C);
    // 0x1519AE94: c.le.s      $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f22.fl <= ctx->f6.fl;
    // 0x1519AE98: nop

    // 0x1519AE9C: bc1fl       L_1519B398
    if (!c1cs) {
        // 0x1519AEA0: lb          $v0, 0x35($s1)
        ctx->r2 = MEM_B(ctx->r17, 0X35);
            goto L_1519B398;
    }
    goto skip_13;
    // 0x1519AEA0: lb          $v0, 0x35($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X35);
    skip_13:
    // 0x1519AEA4: jal         0x150ADA68
    // 0x1519AEA8: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x1519AEA8: nop

    after_4:
    // 0x1519AEAC: lb          $t2, 0x2D($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2D);
    // 0x1519AEB0: lwc1        $f4, 0x50($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X50);
    // 0x1519AEB4: lwc1        $f8, 0x4C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x1519AEB8: multu       $t2, $s5
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519AEBC: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1519AEC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1519AEC4: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1519AEC8: lwc1        $f10, -0x165C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1519AECC: mflo        $t3
    ctx->r11 = lo;
    // 0x1519AED0: addu        $t4, $s4, $t3
    ctx->r12 = ADD32(ctx->r20, ctx->r11);
    // 0x1519AED4: lwc1        $f4, 0x18($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X18);
    // 0x1519AED8: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x1519AEDC: lwc1        $f4, 0x134($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X134);
    // 0x1519AEE0: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1519AEE4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1519AEE8: swc1        $f8, 0x134($s1)
    MEM_W(0X134, ctx->r17) = ctx->f8.u32l;
    // 0x1519AEEC: lwc1        $f10, 0x134($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X134);
    // 0x1519AEF0: c.lt.s      $f26, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f26.fl < ctx->f10.fl;
    // 0x1519AEF4: nop

    // 0x1519AEF8: bc1fl       L_1519B398
    if (!c1cs) {
        // 0x1519AEFC: lb          $v0, 0x35($s1)
        ctx->r2 = MEM_B(ctx->r17, 0X35);
            goto L_1519B398;
    }
    goto skip_14;
    // 0x1519AEFC: lb          $v0, 0x35($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X35);
    skip_14:
    // 0x1519AF00: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x1519AF04: lbu         $t5, 0x25($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X25);
    // 0x1519AF08: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    // 0x1519AF0C: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x1519AF10: bne         $t1, $t5, L_1519AF1C
    if (ctx->r9 != ctx->r13) {
        // 0x1519AF14: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_1519AF1C;
    }
    // 0x1519AF14: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x1519AF18: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_1519AF1C:
    // 0x1519AF1C: lwc1        $f4, 0x14C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X14C);
    // 0x1519AF20: lwc1        $f6, 0x84($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X84);
    // 0x1519AF24: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    // 0x1519AF28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519AF2C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1519AF30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1519AF34: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    // 0x1519AF38: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    // 0x1519AF3C: lb          $a1, 0x2E($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X2E);
    // 0x1519AF40: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_1519AF44:
    // 0x1519AF44: bgez        $a1, L_1519AF54
    if (SIGNED(ctx->r5) >= 0) {
        // 0x1519AF48: nop
    
            goto L_1519AF54;
    }
    // 0x1519AF48: nop

    // 0x1519AF4C: lbu         $a1, 0x25($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X25);
    // 0x1519AF50: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_1519AF54:
    // 0x1519AF54: multu       $a1, $s5
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519AF58: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x1519AF5C: mflo        $t6
    ctx->r14 = lo;
    // 0x1519AF60: addu        $v1, $t6, $s4
    ctx->r3 = ADD32(ctx->r14, ctx->r20);
    // 0x1519AF64: lwc1        $f18, 0x1C($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1519AF68: add.s       $f20, $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x1519AF6C: c.le.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl <= ctx->f20.fl;
    // 0x1519AF70: nop

    // 0x1519AF74: bc1fl       L_1519B068
    if (!c1cs) {
        // 0x1519AF78: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_1519B068;
    }
    goto skip_15;
    // 0x1519AF78: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    skip_15:
    // 0x1519AF7C: beq         $a0, $zero, L_1519B038
    if (ctx->r4 == 0) {
        // 0x1519AF80: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_1519B038;
    }
    // 0x1519AF80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1519AF84: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1519AF88: nop

    // 0x1519AF8C: c.eq.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl == ctx->f18.fl;
    // 0x1519AF90: nop

    // 0x1519AF94: bc1tl       L_1519B03C
    if (c1cs) {
        // 0x1519AF98: lw          $at, 0x0($v1)
        ctx->r1 = MEM_W(ctx->r3, 0X0);
            goto L_1519B03C;
    }
    goto skip_16;
    // 0x1519AF98: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    skip_16:
    // 0x1519AF9C: sub.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f10.fl;
    // 0x1519AFA0: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1519AFA4: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1519AFA8: div.s       $f0, $f6, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x1519AFAC: sub.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x1519AFB0: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519AFB4: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x1519AFB8: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x1519AFBC: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1519AFC0: lwc1        $f12, 0x4($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1519AFC4: sub.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x1519AFC8: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519AFCC: add.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x1519AFD0: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
    // 0x1519AFD4: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1519AFD8: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1519AFDC: sub.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x1519AFE0: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519AFE4: add.s       $f6, $f14, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x1519AFE8: swc1        $f6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f6.u32l;
    // 0x1519AFEC: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1519AFF0: lwc1        $f2, 0x18($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1519AFF4: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1519AFF8: sub.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x1519AFFC: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1519B000: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519B004: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1519B008: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    // 0x1519B00C: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1519B010: add.s       $f22, $f2, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x1519B014: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1519B018: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1519B01C: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
    // 0x1519B020: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1519B024: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1519B028: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1519B02C: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x1519B030: b           L_1519B064
    // 0x1519B034: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
        goto L_1519B064;
    // 0x1519B034: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
L_1519B038:
    // 0x1519B038: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
L_1519B03C:
    // 0x1519B03C: sw          $at, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r1;
    // 0x1519B040: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x1519B044: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x1519B048: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x1519B04C: sw          $at, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r1;
    // 0x1519B050: lwc1        $f22, 0x18($v1)
    ctx->f22.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1519B054: swc1        $f24, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f24.u32l;
    // 0x1519B058: swc1        $f24, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f24.u32l;
    // 0x1519B05C: swc1        $f24, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f24.u32l;
    // 0x1519B060: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
L_1519B064:
    // 0x1519B064: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_1519B068:
    // 0x1519B068: beql        $a1, $v0, L_1519B07C
    if (ctx->r5 == ctx->r2) {
        // 0x1519B06C: sw          $zero, 0x13C($sp)
        MEM_W(0X13C, ctx->r29) = 0;
            goto L_1519B07C;
    }
    goto skip_17;
    // 0x1519B06C: sw          $zero, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = 0;
    skip_17:
    // 0x1519B070: beql        $a2, $zero, L_1519AF44
    if (ctx->r6 == 0) {
        // 0x1519B074: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_1519AF44;
    }
    goto skip_18;
    // 0x1519B074: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    skip_18:
    // 0x1519B078: sw          $zero, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = 0;
L_1519B07C:
    // 0x1519B07C: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    // 0x1519B080: lwc1        $f8, 0x78($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X78);
    // 0x1519B084: addiu       $t4, $zero, 0x2203
    ctx->r12 = ADD32(0, 0X2203);
    // 0x1519B088: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1519B08C: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
    // 0x1519B090: lwc1        $f4, 0x7C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x1519B094: lui         $t9, 0x40CC
    ctx->r25 = S32(0X40CC << 16);
    // 0x1519B098: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1519B09C: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    // 0x1519B0A0: lwc1        $f10, 0x8C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8C);
    // 0x1519B0A4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1519B0A8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1519B0AC: swc1        $f10, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f10.u32l;
    // 0x1519B0B0: lh          $t2, 0x80($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X80);
    // 0x1519B0B4: ori         $t9, $t9, 0x5E1
    ctx->r25 = ctx->r25 | 0X5E1;
    // 0x1519B0B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519B0BC: sh          $t2, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r10;
    // 0x1519B0C0: lh          $t3, 0x82($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X82);
    // 0x1519B0C4: sh          $t4, 0x136($sp)
    MEM_H(0X136, ctx->r29) = ctx->r12;
    // 0x1519B0C8: sb          $t5, 0x144($sp)
    MEM_B(0X144, ctx->r29) = ctx->r13;
    // 0x1519B0CC: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x1519B0D0: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x1519B0D4: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x1519B0D8: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x1519B0DC: sh          $t3, 0x132($sp)
    MEM_H(0X132, ctx->r29) = ctx->r11;
    // 0x1519B0E0: swc1        $f24, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f24.u32l;
    // 0x1519B0E4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1519B0E8: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x1519B0EC: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x1519B0F0: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x1519B0F4: sb          $zero, 0x135($sp)
    MEM_B(0X135, ctx->r29) = 0;
    // 0x1519B0F8: sb          $t6, 0x145($sp)
    MEM_B(0X145, ctx->r29) = ctx->r14;
    // 0x1519B0FC: sb          $t8, 0x146($sp)
    MEM_B(0X146, ctx->r29) = ctx->r24;
    // 0x1519B100: sb          $t7, 0x147($sp)
    MEM_B(0X147, ctx->r29) = ctx->r15;
    // 0x1519B104: swc1        $f26, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f26.u32l;
    // 0x1519B108: swc1        $f26, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f26.u32l;
    // 0x1519B10C: sw          $t9, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r25;
    // 0x1519B110: sb          $t2, 0x179($sp)
    MEM_B(0X179, ctx->r29) = ctx->r10;
    // 0x1519B114: sb          $zero, 0x17A($sp)
    MEM_B(0X17A, ctx->r29) = 0;
    // 0x1519B118: sb          $t3, 0x17B($sp)
    MEM_B(0X17B, ctx->r29) = ctx->r11;
    // 0x1519B11C: sw          $zero, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = 0;
    // 0x1519B120: addu        $s2, $t4, $s4
    ctx->r18 = ADD32(ctx->r12, ctx->r20);
    // 0x1519B124: addu        $s3, $t5, $s4
    ctx->r19 = ADD32(ctx->r13, ctx->r20);
    // 0x1519B128: lwc1        $f24, -0x7514($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X7514);
L_1519B12C:
    // 0x1519B12C: jal         0x150ADA68
    // 0x1519B130: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x1519B130: nop

    after_5:
    // 0x1519B134: lwc1        $f6, 0x60($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X60);
    // 0x1519B138: lwc1        $f4, 0x58($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X58);
    // 0x1519B13C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1519B140: jal         0x150ADA68
    // 0x1519B144: add.s       $f20, $f8, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f4.fl;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x1519B144: add.s       $f20, $f8, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f4.fl;
    after_6:
    // 0x1519B148: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x1519B14C: lwc1        $f8, 0x5C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x1519B150: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1519B154: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1519B158: jal         0x150ADA68
    // 0x1519B15C: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x1519B15C: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x1519B160: lwc1        $f10, 0x6C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X6C);
    // 0x1519B164: lwc1        $f8, 0x68($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X68);
    // 0x1519B168: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519B16C: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1519B170: lwc1        $f10, -0x7510($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X7510);
    // 0x1519B174: mul.s       $f4, $f24, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x1519B178: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1519B17C: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1519B180: swc1        $f4, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f4.u32l;
    // 0x1519B184: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1519B188: swc1        $f8, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f8.u32l;
    // 0x1519B18C: lwc1        $f4, 0xC($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0XC);
    // 0x1519B190: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1519B194: swc1        $f10, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f10.u32l;
    // 0x1519B198: lwc1        $f6, 0x10($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X10);
    // 0x1519B19C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1519B1A0: swc1        $f8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f8.u32l;
    // 0x1519B1A4: lwc1        $f4, 0x14($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X14);
    // 0x1519B1A8: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1519B1AC: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    // 0x1519B1B0: lwc1        $f6, 0xC($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0XC);
    // 0x1519B1B4: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1519B1B8: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    // 0x1519B1BC: lwc1        $f4, 0x10($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X10);
    // 0x1519B1C0: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1519B1C4: swc1        $f10, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f10.u32l;
    // 0x1519B1C8: lwc1        $f6, 0x14($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X14);
    // 0x1519B1CC: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1519B1D0: jal         0x150ADA68
    // 0x1519B1D4: swc1        $f8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x1519B1D4: swc1        $f8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x1519B1D8: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
    // 0x1519B1DC: lwc1        $f6, 0x70($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X70);
    // 0x1519B1E0: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1519B1E4: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1519B1E8: jal         0x150ADA20
    // 0x1519B1EC: swc1        $f8, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x1519B1EC: swc1        $f8, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x1519B1F0: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x1519B1F4: beq         $t6, $zero, L_1519B208
    if (ctx->r14 == 0) {
        // 0x1519B1F8: addiu       $t7, $zero, 0x14
        ctx->r15 = ADD32(0, 0X14);
            goto L_1519B208;
    }
    // 0x1519B1F8: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x1519B1FC: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x1519B200: b           L_1519B20C
    // 0x1519B204: sb          $t8, 0x134($sp)
    MEM_B(0X134, ctx->r29) = ctx->r24;
        goto L_1519B20C;
    // 0x1519B204: sb          $t8, 0x134($sp)
    MEM_B(0X134, ctx->r29) = ctx->r24;
L_1519B208:
    // 0x1519B208: sb          $t7, 0x134($sp)
    MEM_B(0X134, ctx->r29) = ctx->r15;
L_1519B20C:
    // 0x1519B20C: jal         0x150ADA20
    // 0x1519B210: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x1519B210: nop

    after_10:
    // 0x1519B214: lh          $t9, 0x56($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X56);
    // 0x1519B218: lh          $t4, 0x54($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X54);
    // 0x1519B21C: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x1519B220: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x1519B224: mfhi        $t3
    ctx->r11 = hi;
    // 0x1519B228: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x1519B22C: bne         $t2, $zero, L_1519B238
    if (ctx->r10 != 0) {
        // 0x1519B230: nop
    
            goto L_1519B238;
    }
    // 0x1519B230: nop

    // 0x1519B234: break       7
    do_break(354005556);
L_1519B238:
    // 0x1519B238: sh          $t5, 0x138($sp)
    MEM_H(0X138, ctx->r29) = ctx->r13;
    // 0x1519B23C: jal         0x150ADA20
    // 0x1519B240: nop

    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x1519B240: nop

    after_11:
    // 0x1519B244: jal         0x150ADA20
    // 0x1519B248: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x1519B248: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    after_12:
    // 0x1519B24C: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x1519B250: andi        $a1, $v0, 0x7F
    ctx->r5 = ctx->r2 & 0X7F;
    // 0x1519B254: addiu       $a1, $a1, -0x3F
    ctx->r5 = ADD32(ctx->r5, -0X3F);
    // 0x1519B258: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1519B25C: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x1519B260: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x1519B264: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x1519B268: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1519B26C: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    // 0x1519B270: jal         0x15143794
    // 0x1519B274: addiu       $a3, $sp, 0xA8
    ctx->r7 = ADD32(ctx->r29, 0XA8);
    func_15143794(rdram, ctx);
        goto after_13;
    // 0x1519B274: addiu       $a3, $sp, 0xA8
    ctx->r7 = ADD32(ctx->r29, 0XA8);
    after_13:
    // 0x1519B278: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x1519B27C: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x1519B280: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x1519B284: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1519B288: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1519B28C: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x1519B290: lwc1        $f4, 0xF4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x1519B294: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1519B298: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x1519B29C: swc1        $f0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f0.u32l;
    // 0x1519B2A0: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1519B2A4: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x1519B2A8: swc1        $f2, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f2.u32l;
    // 0x1519B2AC: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x1519B2B0: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x1519B2B4: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    // 0x1519B2B8: add.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x1519B2BC: swc1        $f8, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f8.u32l;
    // 0x1519B2C0: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x1519B2C4: swc1        $f10, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f10.u32l;
    // 0x1519B2C8: jal         0x150ADA20
    // 0x1519B2CC: swc1        $f8, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_14;
    // 0x1519B2CC: swc1        $f8, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x1519B2D0: lbu         $t3, 0x89($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X89);
    // 0x1519B2D4: lbu         $t6, 0x88($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X88);
    // 0x1519B2D8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x1519B2DC: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x1519B2E0: mfhi        $t5
    ctx->r13 = hi;
    // 0x1519B2E4: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x1519B2E8: bne         $t4, $zero, L_1519B2F4
    if (ctx->r12 != 0) {
        // 0x1519B2EC: nop
    
            goto L_1519B2F4;
    }
    // 0x1519B2EC: nop

    // 0x1519B2F0: break       7
    do_break(354005744);
L_1519B2F4:
    // 0x1519B2F4: sb          $t8, 0x178($sp)
    MEM_B(0X178, ctx->r29) = ctx->r24;
    // 0x1519B2F8: jal         0x150ADA20
    // 0x1519B2FC: nop

    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x1519B2FC: nop

    after_15:
    // 0x1519B300: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x1519B304: beq         $t7, $zero, L_1519B314
    if (ctx->r15 == 0) {
        // 0x1519B308: addiu       $a0, $sp, 0x134
        ctx->r4 = ADD32(ctx->r29, 0X134);
            goto L_1519B314;
    }
    // 0x1519B308: addiu       $a0, $sp, 0x134
    ctx->r4 = ADD32(ctx->r29, 0X134);
    // 0x1519B30C: b           L_1519B318
    // 0x1519B310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1519B318;
    // 0x1519B310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519B314:
    // 0x1519B314: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1519B318:
    // 0x1519B318: addiu       $t9, $zero, 0x1A
    ctx->r25 = ADD32(0, 0X1A);
    // 0x1519B31C: ori         $t2, $v0, 0x2
    ctx->r10 = ctx->r2 | 0X2;
    // 0x1519B320: addiu       $t3, $zero, 0x2C
    ctx->r11 = ADD32(0, 0X2C);
    // 0x1519B324: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x1519B328: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x1519B32C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1519B330: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1519B334: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1519B338: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1519B33C: lbu         $t4, 0xC($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XC);
    // 0x1519B340: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x1519B344: addiu       $a1, $a1, 0x4AA0
    ctx->r5 = ADD32(ctx->r5, 0X4AA0);
    // 0x1519B348: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x1519B34C: lbu         $t5, 0x1($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1);
    // 0x1519B350: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x1519B354: addiu       $a3, $zero, 0x22
    ctx->r7 = ADD32(0, 0X22);
    // 0x1519B358: jal         0x1513D2F0
    // 0x1519B35C: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    func_1513D2F0(rdram, ctx);
        goto after_16;
    // 0x1519B35C: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    after_16:
    // 0x1519B360: beq         $v0, $zero, L_1519B374
    if (ctx->r2 == 0) {
        // 0x1519B364: addiu       $a0, $v0, 0x110
        ctx->r4 = ADD32(ctx->r2, 0X110);
            goto L_1519B374;
    }
    // 0x1519B364: addiu       $a0, $v0, 0x110
    ctx->r4 = ADD32(ctx->r2, 0X110);
    // 0x1519B368: addiu       $a1, $sp, 0x108
    ctx->r5 = ADD32(ctx->r29, 0X108);
    // 0x1519B36C: jal         0x10022EC0
    // 0x1519B370: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x1519B370: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_17:
L_1519B374:
    // 0x1519B374: lwc1        $f4, 0x134($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X134);
    // 0x1519B378: sub.s       $f10, $f4, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f26.fl;
    // 0x1519B37C: swc1        $f10, 0x134($s1)
    MEM_W(0X134, ctx->r17) = ctx->f10.u32l;
    // 0x1519B380: lwc1        $f6, 0x134($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X134);
    // 0x1519B384: c.lt.s      $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f26.fl < ctx->f6.fl;
    // 0x1519B388: nop

    // 0x1519B38C: bc1t        L_1519B12C
    if (c1cs) {
        // 0x1519B390: nop
    
            goto L_1519B12C;
    }
    // 0x1519B390: nop

    // 0x1519B394: lb          $v0, 0x35($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X35);
L_1519B398:
    // 0x1519B398: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1519B39C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1519B3A0: beq         $v0, $at, L_1519B3BC
    if (ctx->r2 == ctx->r1) {
        // 0x1519B3A4: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_1519B3BC;
    }
    // 0x1519B3A4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1519B3A8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x1519B3AC: lw          $t9, -0x758($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X758);
    // 0x1519B3B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1519B3B4: jalr        $t9
    // 0x1519B3B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x1519B3B8: nop

    after_18:
L_1519B3BC:
    // 0x1519B3BC: lbu         $t8, 0x150($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X150);
    // 0x1519B3C0: andi        $t7, $t8, 0x2
    ctx->r15 = ctx->r24 & 0X2;
    // 0x1519B3C4: beql        $t7, $zero, L_1519B484
    if (ctx->r15 == 0) {
        // 0x1519B3C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1519B484;
    }
    goto skip_19;
    // 0x1519B3C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_19:
    // 0x1519B3CC: lb          $t2, 0x2C($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2C);
    // 0x1519B3D0: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x1519B3D4: bnel        $at, $zero, L_1519B484
    if (ctx->r1 != 0) {
        // 0x1519B3D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1519B484;
    }
    goto skip_20;
    // 0x1519B3D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_20:
    // 0x1519B3DC: lhu         $t3, 0x1E($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X1E);
    // 0x1519B3E0: lwc1        $f16, 0x14C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X14C);
    // 0x1519B3E4: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x1519B3E8: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x1519B3EC: beql        $t4, $zero, L_1519B400
    if (ctx->r12 == 0) {
        // 0x1519B3F0: lb          $v1, 0x2E($s0)
        ctx->r3 = MEM_B(ctx->r16, 0X2E);
            goto L_1519B400;
    }
    goto skip_21;
    // 0x1519B3F0: lb          $v1, 0x2E($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2E);
    skip_21:
    // 0x1519B3F4: b           L_1519B424
    // 0x1519B3F8: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
        goto L_1519B424;
    // 0x1519B3F8: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x1519B3FC: lb          $v1, 0x2E($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2E);
L_1519B400:
    // 0x1519B400: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x1519B404: bgez        $v1, L_1519B414
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1519B408: nop
    
            goto L_1519B414;
    }
    // 0x1519B408: nop

    // 0x1519B40C: lbu         $v1, 0x25($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X25);
    // 0x1519B410: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_1519B414:
    // 0x1519B414: multu       $v1, $s5
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519B418: mflo        $t5
    ctx->r13 = lo;
    // 0x1519B41C: addu        $a0, $t5, $s4
    ctx->r4 = ADD32(ctx->r13, ctx->r20);
    // 0x1519B420: nop

L_1519B424:
    // 0x1519B424: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519B428: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1519B42C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1519B430: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1519B434: mflo        $t6
    ctx->r14 = lo;
    // 0x1519B438: addu        $v1, $t6, $s4
    ctx->r3 = ADD32(ctx->r14, ctx->r20);
    // 0x1519B43C: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1519B440: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1519B444: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1519B448: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1519B44C: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1519B450: mul.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1519B454: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1519B458: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1519B45C: mul.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519B460: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1519B464: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1519B468: nop

    // 0x1519B46C: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1519B470: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x1519B474: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x1519B478: jal         0x1508B20C
    // 0x1519B47C: nop

    func_1508B20C(rdram, ctx);
        goto after_19;
    // 0x1519B47C: nop

    after_19:
    // 0x1519B480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519B484:
    // 0x1519B484: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x1519B488: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x1519B48C: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x1519B490: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x1519B494: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x1519B498: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x1519B49C: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x1519B4A0: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x1519B4A4: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x1519B4A8: lw          $s4, 0x74($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X74);
    // 0x1519B4AC: lw          $s5, 0x78($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X78);
    // 0x1519B4B0: jr          $ra
    // 0x1519B4B4: addiu       $sp, $sp, 0x210
    ctx->r29 = ADD32(ctx->r29, 0X210);
    return;
    return;
    // 0x1519B4B4: addiu       $sp, $sp, 0x210
    ctx->r29 = ADD32(ctx->r29, 0X210);
;}
RECOMP_FUNC void func_150DF820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DF820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150DF824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150DF828: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x150DF82C: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x150DF830: lw          $t2, 0x3D0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X3D0);
    // 0x150DF834: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x150DF838: ori         $t9, $t7, 0x4
    ctx->r25 = ctx->r15 | 0X4;
    // 0x150DF83C: sw          $t7, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r15;
    // 0x150DF840: addiu       $at, $zero, -0x1011
    ctx->r1 = ADD32(0, -0X1011);
    // 0x150DF844: sw          $t9, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r25;
    // 0x150DF848: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x150DF84C: sw          $t1, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r9;
    // 0x150DF850: lbu         $t3, 0xAD($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XAD);
    // 0x150DF854: ori         $t5, $t1, 0x1010
    ctx->r13 = ctx->r9 | 0X1010;
    // 0x150DF858: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF85C: beq         $t3, $zero, L_150DF884
    if (ctx->r11 == 0) {
        // 0x150DF860: nop
    
            goto L_150DF884;
    }
    // 0x150DF860: nop

    // 0x150DF864: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x150DF868: and         $t7, $t5, $at
    ctx->r15 = ctx->r13 & ctx->r1;
    // 0x150DF86C: sw          $t5, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r13;
    // 0x150DF870: sw          $t7, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r15;
    // 0x150DF874: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF878: lwc1        $f4, 0xF60($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XF60);
    // 0x150DF87C: b           L_150DF8A8
    // 0x150DF880: swc1        $f4, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f4.u32l;
        goto L_150DF8A8;
    // 0x150DF880: swc1        $f4, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f4.u32l;
L_150DF884:
    // 0x150DF884: lwc1        $f6, 0xF64($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XF64);
    // 0x150DF888: lwc1        $f8, 0x374($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X374);
    // 0x150DF88C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x150DF890: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x150DF894: nop

    // 0x150DF898: bc1fl       L_150DF8AC
    if (!c1cs) {
        // 0x150DF89C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150DF8AC;
    }
    goto skip_0;
    // 0x150DF89C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150DF8A0: jal         0x15124B18
    // 0x150DF8A4: sh          $t8, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r24;
    func_15124B18(rdram, ctx);
        goto after_0;
    // 0x150DF8A4: sh          $t8, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r24;
    after_0:
L_150DF8A8:
    // 0x150DF8A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150DF8AC:
    // 0x150DF8AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150DF8B0: jr          $ra
    // 0x150DF8B4: nop

    return;
    return;
    // 0x150DF8B4: nop

;}
RECOMP_FUNC void func_15145EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15145EA4: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x15145EA8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x15145EAC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x15145EB0: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x15145EB4: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x15145EB8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15145EBC: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x15145EC0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x15145EC4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x15145EC8: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x15145ECC: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x15145ED0: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x15145ED4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15145ED8: lbu         $t6, 0x3E90($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3E90);
    // 0x15145EDC: addiu       $s4, $sp, 0x5C
    ctx->r20 = ADD32(ctx->r29, 0X5C);
    // 0x15145EE0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15145EE4: beq         $t6, $zero, L_15145FA8
    if (ctx->r14 == 0) {
        // 0x15145EE8: nop
    
            goto L_15145FA8;
    }
    // 0x15145EE8: nop

    // 0x15145EEC: jal         0x151EFEB8
    // 0x15145EF0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    guMtxL2F(rdram, ctx);
        goto after_0;
    // 0x15145EF0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x15145EF4: blez        $s1, L_15146054
    if (SIGNED(ctx->r17) <= 0) {
        // 0x15145EF8: lw          $s2, 0xA0($sp)
        ctx->r18 = MEM_W(ctx->r29, 0XA0);
            goto L_15146054;
    }
    // 0x15145EF8: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x15145EFC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15145F00: lw          $s0, 0xA4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA4);
L_15145F04:
    // 0x15145F04: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x15145F08: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15145F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15145F10: beq         $v1, $zero, L_15145F88
    if (ctx->r3 == 0) {
        // 0x15145F14: nop
    
            goto L_15145F88;
    }
    // 0x15145F14: nop

    // 0x15145F18: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15145F1C: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x15145F20: nop

    // 0x15145F24: bc1fl       L_15145F58
    if (!c1cs) {
        // 0x15145F28: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_15145F58;
    }
    goto skip_0;
    // 0x15145F28: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x15145F2C: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15145F30: c.eq.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl == ctx->f4.fl;
    // 0x15145F34: nop

    // 0x15145F38: bc1fl       L_15145F58
    if (!c1cs) {
        // 0x15145F3C: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_15145F58;
    }
    goto skip_1;
    // 0x15145F3C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x15145F40: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15145F44: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x15145F48: nop

    // 0x15145F4C: bc1t        L_15145F88
    if (c1cs) {
        // 0x15145F50: nop
    
            goto L_15145F88;
    }
    // 0x15145F50: nop

    // 0x15145F54: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_15145F58:
    // 0x15145F58: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x15145F5C: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    // 0x15145F60: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15145F64: addiu       $t7, $v0, 0x4
    ctx->r15 = ADD32(ctx->r2, 0X4);
    // 0x15145F68: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x15145F6C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15145F70: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15145F74: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15145F78: jal         0x150A7960
    // 0x15145F7C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x15145F7C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x15145F80: b           L_15145F94
    // 0x15145F84: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
        goto L_15145F94;
    // 0x15145F84: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_15145F88:
    // 0x15145F88: jal         0x15142314
    // 0x15145F8C: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    func_15142314(rdram, ctx);
        goto after_2;
    // 0x15145F8C: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    after_2:
    // 0x15145F90: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_15145F94:
    // 0x15145F94: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x15145F98: bgtz        $s1, L_15145F04
    if (SIGNED(ctx->r17) > 0) {
        // 0x15145F9C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_15145F04;
    }
    // 0x15145F9C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15145FA0: b           L_15146058
    // 0x15145FA4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_15146058;
    // 0x15145FA4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_15145FA8:
    // 0x15145FA8: blez        $s1, L_15146054
    if (SIGNED(ctx->r17) <= 0) {
        // 0x15145FAC: lw          $s2, 0xA0($sp)
        ctx->r18 = MEM_W(ctx->r29, 0XA0);
            goto L_15146054;
    }
    // 0x15145FAC: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x15145FB0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15145FB4: lw          $s0, 0xA4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA4);
L_15145FB8:
    // 0x15145FB8: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x15145FBC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15145FC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15145FC4: beq         $v1, $zero, L_1514603C
    if (ctx->r3 == 0) {
        // 0x15145FC8: nop
    
            goto L_1514603C;
    }
    // 0x15145FC8: nop

    // 0x15145FCC: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15145FD0: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x15145FD4: nop

    // 0x15145FD8: bc1fl       L_1514600C
    if (!c1cs) {
        // 0x15145FDC: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_1514600C;
    }
    goto skip_2;
    // 0x15145FDC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x15145FE0: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15145FE4: c.eq.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl == ctx->f8.fl;
    // 0x15145FE8: nop

    // 0x15145FEC: bc1fl       L_1514600C
    if (!c1cs) {
        // 0x15145FF0: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_1514600C;
    }
    goto skip_3;
    // 0x15145FF0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x15145FF4: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15145FF8: c.eq.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl == ctx->f10.fl;
    // 0x15145FFC: nop

    // 0x15146000: bc1t        L_1514603C
    if (c1cs) {
        // 0x15146004: nop
    
            goto L_1514603C;
    }
    // 0x15146004: nop

    // 0x15146008: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_1514600C:
    // 0x1514600C: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x15146010: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    // 0x15146014: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15146018: addiu       $t9, $v0, 0x4
    ctx->r25 = ADD32(ctx->r2, 0X4);
    // 0x1514601C: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x15146020: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15146024: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15146028: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1514602C: jal         0x150A7960
    // 0x15146030: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_150A7960(rdram, ctx);
        goto after_3;
    // 0x15146030: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x15146034: b           L_15146048
    // 0x15146038: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
        goto L_15146048;
    // 0x15146038: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_1514603C:
    // 0x1514603C: jal         0x15142314
    // 0x15146040: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    func_15142314(rdram, ctx);
        goto after_4;
    // 0x15146040: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    after_4:
    // 0x15146044: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_15146048:
    // 0x15146048: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x1514604C: bgtz        $s1, L_15145FB8
    if (SIGNED(ctx->r17) > 0) {
        // 0x15146050: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_15145FB8;
    }
    // 0x15146050: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_15146054:
    // 0x15146054: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_15146058:
    // 0x15146058: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x1514605C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15146060: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x15146064: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x15146068: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x1514606C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x15146070: jr          $ra
    // 0x15146074: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    return;
    // 0x15146074: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_150C7020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C7020: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150C7024: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x150C7028: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150C702C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C7030: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x150C7034: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x150C7038: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x150C703C: beq         $a3, $zero, L_150C71B0
    if (ctx->r7 == 0) {
        // 0x150C7040: addiu       $a0, $zero, 0x29
        ctx->r4 = ADD32(0, 0X29);
            goto L_150C71B0;
    }
    // 0x150C7040: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    // 0x150C7044: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x150C7048: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x150C704C: jal         0x1516962C
    // 0x150C7050: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    func_1516962C(rdram, ctx);
        goto after_0;
    // 0x150C7050: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    after_0:
    // 0x150C7054: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x150C7058: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x150C705C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150C7060: lbu         $t6, 0x3B($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X3B);
    // 0x150C7064: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150C7068: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C706C: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x150C7070: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C7074: lh          $v0, 0x5E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X5E);
    // 0x150C7078: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150C707C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C7080: lwc1        $f8, 0x490($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X490);
    // 0x150C7084: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x150C7088: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150C708C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150C7090: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150C7094: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x150C7098: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150C709C: sb          $t7, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r15;
    // 0x150C70A0: sb          $zero, 0x40($sp)
    MEM_B(0X40, ctx->r29) = 0;
    // 0x150C70A4: sb          $t8, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r24;
    // 0x150C70A8: sb          $t9, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r25;
    // 0x150C70AC: sb          $t0, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r8;
    // 0x150C70B0: sb          $t1, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r9;
    // 0x150C70B4: sb          $t2, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r10;
    // 0x150C70B8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x150C70BC: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    // 0x150C70C0: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x150C70C4: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x150C70C8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x150C70CC: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x150C70D0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x150C70D4: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x150C70D8: beq         $v0, $zero, L_150C70F0
    if (ctx->r2 == 0) {
        // 0x150C70DC: swc1        $f8, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
            goto L_150C70F0;
    }
    // 0x150C70DC: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x150C70E0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150C70E4: sh          $v0, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r2;
    // 0x150C70E8: b           L_150C70F8
    // 0x150C70EC: sb          $t3, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r11;
        goto L_150C70F8;
    // 0x150C70EC: sb          $t3, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r11;
L_150C70F0:
    // 0x150C70F0: addiu       $t4, $zero, 0x12C
    ctx->r12 = ADD32(0, 0X12C);
    // 0x150C70F4: sh          $t4, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r12;
L_150C70F8:
    // 0x150C70F8: jal         0x150ADA20
    // 0x150C70FC: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150C70FC: nop

    after_1:
    // 0x150C7100: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x150C7104: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150C7108: mfhi        $t5
    ctx->r13 = hi;
    // 0x150C710C: addiu       $t6, $t5, 0x23
    ctx->r14 = ADD32(ctx->r13, 0X23);
    // 0x150C7110: jal         0x150ADA20
    // 0x150C7114: sh          $t6, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150C7114: sh          $t6, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r14;
    after_2:
    // 0x150C7118: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x150C711C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150C7120: mfhi        $t7
    ctx->r15 = hi;
    // 0x150C7124: addiu       $t8, $t7, 0x19
    ctx->r24 = ADD32(ctx->r15, 0X19);
    // 0x150C7128: sh          $t8, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r24;
    // 0x150C712C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x150C7130: jal         0x15134DAC
    // 0x150C7134: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15134DAC(rdram, ctx);
        goto after_3;
    // 0x150C7134: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x150C7138: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x150C713C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150C7140: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x150C7144: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C7148: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150C714C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150C7150: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C7154: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x150C7158: sb          $t9, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r25;
    // 0x150C715C: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x150C7160: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x150C7164: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x150C7168: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x150C716C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x150C7170: jal         0x150ADA20
    // 0x150C7174: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150C7174: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x150C7178: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x150C717C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150C7180: mfhi        $t0
    ctx->r8 = hi;
    // 0x150C7184: addiu       $t1, $t0, 0x23
    ctx->r9 = ADD32(ctx->r8, 0X23);
    // 0x150C7188: jal         0x150ADA20
    // 0x150C718C: sh          $t1, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150C718C: sh          $t1, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r9;
    after_5:
    // 0x150C7190: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x150C7194: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150C7198: mfhi        $t2
    ctx->r10 = hi;
    // 0x150C719C: addiu       $t3, $t2, 0x19
    ctx->r11 = ADD32(ctx->r10, 0X19);
    // 0x150C71A0: sh          $t3, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r11;
    // 0x150C71A4: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x150C71A8: jal         0x15134DAC
    // 0x150C71AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15134DAC(rdram, ctx);
        goto after_6;
    // 0x150C71AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_150C71B0:
    // 0x150C71B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C71B4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x150C71B8: jr          $ra
    // 0x150C71BC: nop

    return;
    return;
    // 0x150C71BC: nop

;}
RECOMP_FUNC void func_151857B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151857B0: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151857B4: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151857B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151857BC: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x151857C0: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x151857C4: nop

    // 0x151857C8: bc1f        L_151857D4
    if (!c1cs) {
        // 0x151857CC: nop
    
            goto L_151857D4;
    }
    // 0x151857CC: nop

    // 0x151857D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151857D4:
    // 0x151857D4: jr          $ra
    // 0x151857D8: nop

    return;
    return;
    // 0x151857D8: nop

;}
RECOMP_FUNC void func_151AE6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AE6B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151AE6B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151AE6B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151AE6BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151AE6C0: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x151AE6C4: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x151AE6C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AE6CC: lwc1        $f6, -0x6290($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6290);
    // 0x151AE6D0: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x151AE6D4: lwc1        $f0, 0x118($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X118);
    // 0x151AE6D8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x151AE6DC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151AE6E0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x151AE6E4: nop

    // 0x151AE6E8: bc1fl       L_151AE70C
    if (!c1cs) {
        // 0x151AE6EC: lwc1        $f16, 0x18($v1)
        ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
            goto L_151AE70C;
    }
    goto skip_0;
    // 0x151AE6EC: lwc1        $f16, 0x18($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
    skip_0:
    // 0x151AE6F0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151AE6F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AE6F8: nop

    // 0x151AE6FC: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x151AE700: b           L_151AE71C
    // 0x151AE704: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
        goto L_151AE71C;
    // 0x151AE704: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x151AE708: lwc1        $f16, 0x18($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
L_151AE70C:
    // 0x151AE70C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151AE710: nop

    // 0x151AE714: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151AE718: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
L_151AE71C:
    // 0x151AE71C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x151AE720: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151AE724: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151AE728: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x151AE72C: addiu       $a3, $s0, 0x34
    ctx->r7 = ADD32(ctx->r16, 0X34);
    // 0x151AE730: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151AE734: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x151AE738: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x151AE73C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151AE740: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x151AE744: jal         0x15045800
    // 0x151AE748: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    func_15045800(rdram, ctx);
        goto after_0;
    // 0x151AE748: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x151AE74C: beq         $v0, $zero, L_151AE79C
    if (ctx->r2 == 0) {
        // 0x151AE750: lw          $v1, 0x3C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X3C);
            goto L_151AE79C;
    }
    // 0x151AE750: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x151AE754: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151AE758: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151AE75C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151AE760: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x151AE764: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x151AE768: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x151AE76C: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x151AE770: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x151AE774: jal         0x151ABE40
    // 0x151AE778: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_151ABE40(rdram, ctx);
        goto after_1;
    // 0x151AE778: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x151AE77C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x151AE780: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151AE784: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x151AE788: addiu       $a2, $zero, 0x5208
    ctx->r6 = ADD32(0, 0X5208);
    // 0x151AE78C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151AE790: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151AE794: jal         0x10010FFC
    // 0x151AE798: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    func_10010FFC(rdram, ctx);
        goto after_2;
    // 0x151AE798: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_2:
L_151AE79C:
    // 0x151AE79C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151AE7A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151AE7A4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x151AE7A8: jr          $ra
    // 0x151AE7AC: nop

    return;
    return;
    // 0x151AE7AC: nop

;}
RECOMP_FUNC void func_1513F6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513F6C0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1513F6C4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x1513F6C8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1513F6CC: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x1513F6D0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x1513F6D4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1513F6D8: sb          $a1, 0x80($a0)
    MEM_B(0X80, ctx->r4) = ctx->r5;
    // 0x1513F6DC: sb          $a2, 0x81($a0)
    MEM_B(0X81, ctx->r4) = ctx->r6;
    // 0x1513F6E0: jr          $ra
    // 0x1513F6E4: nop

    return;
    return;
    // 0x1513F6E4: nop

;}
RECOMP_FUNC void func_1517F814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517F814: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1517F818: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1517F81C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x1517F820: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1517F824: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x1517F828: bne         $a0, $zero, L_1517F918
    if (ctx->r4 != 0) {
        // 0x1517F82C: lui         $t5, 0x800C
        ctx->r13 = S32(0X800C << 16);
            goto L_1517F918;
    }
    // 0x1517F82C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1517F830: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x1517F834: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1517F838: addiu       $t8, $t8, -0x62F0
    ctx->r24 = ADD32(ctx->r24, -0X62F0);
    // 0x1517F83C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x1517F840: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x1517F844: addiu       $t9, $sp, 0x3C
    ctx->r25 = ADD32(ctx->r29, 0X3C);
    // 0x1517F848: addiu       $t0, $sp, 0x38
    ctx->r8 = ADD32(ctx->r29, 0X38);
    // 0x1517F84C: addiu       $t1, $sp, 0x34
    ctx->r9 = ADD32(ctx->r29, 0X34);
    // 0x1517F850: addiu       $t2, $sp, 0x30
    ctx->r10 = ADD32(ctx->r29, 0X30);
    // 0x1517F854: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x1517F858: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x1517F85C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x1517F860: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1517F864: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1517F868: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1517F86C: jal         0x150A7A00
    // 0x1517F870: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    func_150A7A00(rdram, ctx);
        goto after_0;
    // 0x1517F870: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    after_0:
    // 0x1517F874: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1517F878: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1517F87C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x1517F880: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1517F884: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x1517F888: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x1517F88C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1517F890: subu        $t4, $t4, $a0
    ctx->r12 = SUB32(ctx->r12, ctx->r4);
    // 0x1517F894: bc1f        L_1517F8A8
    if (!c1cs) {
        // 0x1517F898: nop
    
            goto L_1517F8A8;
    }
    // 0x1517F898: nop

    // 0x1517F89C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1517F8A0: nop

    // 0x1517F8A4: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
L_1517F8A8:
    // 0x1517F8A8: lw          $t3, -0x19D8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X19D8);
    // 0x1517F8AC: sll         $t4, $t4, 7
    ctx->r12 = S32(ctx->r12 << 7);
    // 0x1517F8B0: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1517F8B4: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x1517F8B8: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x1517F8BC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1517F8C0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1517F8C4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1517F8C8: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1517F8CC: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x1517F8D0: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1517F8D4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1517F8D8: div.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x1517F8DC: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x1517F8E0: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x1517F8E4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1517F8E8: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x1517F8EC: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1517F8F0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1517F8F4: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x1517F8F8: lwc1        $f6, 0x2C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x1517F8FC: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1517F900: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1517F904: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x1517F908: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x1517F90C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1517F910: b           L_1517F938
    // 0x1517F914: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
        goto L_1517F938;
    // 0x1517F914: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
L_1517F918:
    // 0x1517F918: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x1517F91C: lw          $t5, -0x19D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X19D8);
    // 0x1517F920: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    // 0x1517F924: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1517F928: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1517F92C: sll         $t6, $t6, 7
    ctx->r14 = S32(ctx->r14 << 7);
    // 0x1517F930: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    // 0x1517F934: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
L_1517F938:
    // 0x1517F938: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1517F93C: lwc1        $f0, 0x7280($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7280);
    // 0x1517F940: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1517F944: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1517F948: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1517F94C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x1517F950: nop

    // 0x1517F954: bc1f        L_1517F96C
    if (!c1cs) {
        // 0x1517F958: nop
    
            goto L_1517F96C;
    }
    // 0x1517F958: nop

    // 0x1517F95C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1517F960: lwc1        $f2, 0x7284($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7284);
    // 0x1517F964: b           L_1517F984
    // 0x1517F968: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
        goto L_1517F984;
    // 0x1517F968: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
L_1517F96C:
    // 0x1517F96C: lwc1        $f2, 0x7288($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7288);
    // 0x1517F970: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x1517F974: nop

    // 0x1517F978: bc1fl       L_1517F988
    if (!c1cs) {
        // 0x1517F97C: lwc1        $f8, 0x38($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
            goto L_1517F988;
    }
    goto skip_0;
    // 0x1517F97C: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x1517F980: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
L_1517F984:
    // 0x1517F984: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
L_1517F988:
    // 0x1517F988: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1517F98C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x1517F990: nop

    // 0x1517F994: bc1fl       L_1517F9A8
    if (!c1cs) {
        // 0x1517F998: c.lt.s      $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
            goto L_1517F9A8;
    }
    goto skip_1;
    // 0x1517F998: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    skip_1:
    // 0x1517F99C: b           L_1517F9B8
    // 0x1517F9A0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
        goto L_1517F9B8;
    // 0x1517F9A0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x1517F9A4: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
L_1517F9A8:
    // 0x1517F9A8: nop

    // 0x1517F9AC: bc1fl       L_1517F9BC
    if (!c1cs) {
        // 0x1517F9B0: lwc1        $f18, 0x3C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_1517F9BC;
    }
    goto skip_2;
    // 0x1517F9B0: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    skip_2:
    // 0x1517F9B4: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
L_1517F9B8:
    // 0x1517F9B8: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
L_1517F9BC:
    // 0x1517F9BC: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x1517F9C0: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1517F9C4: addiu       $t8, $t8, -0x2218
    ctx->r24 = ADD32(ctx->r24, -0X2218);
    // 0x1517F9C8: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x1517F9CC: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x1517F9D0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x1517F9D4: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1517F9D8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x1517F9DC: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1517F9E0: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1517F9E4: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x1517F9E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1517F9EC: jr          $ra
    // 0x1517F9F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x1517F9F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_151C1654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C1654: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151C1658: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151C165C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151C1660: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151C1664: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x151C1668: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x151C166C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x151C1670: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151C1674: lw          $v0, 0x934($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X934);
    // 0x151C1678: beql        $v0, $zero, L_151C16B0
    if (ctx->r2 == 0) {
        // 0x151C167C: lbu         $v0, 0x3F($sp)
        ctx->r2 = MEM_BU(ctx->r29, 0X3F);
            goto L_151C16B0;
    }
    goto skip_0;
    // 0x151C167C: lbu         $v0, 0x3F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X3F);
    skip_0:
    // 0x151C1680: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151C1684: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151C1688: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151C168C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C1690: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C1694: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x151C1698: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151C169C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x151C16A0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x151C16A4: jalr        $v0
    // 0x151C16A8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x151C16A8: nop

    after_0:
    // 0x151C16AC: lbu         $v0, 0x3F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X3F);
L_151C16B0:
    // 0x151C16B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151C16B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C16B8: beq         $v0, $zero, L_151C175C
    if (ctx->r2 == 0) {
        // 0x151C16BC: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_151C175C;
    }
    // 0x151C16BC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x151C16C0: beq         $v0, $at, L_151C16E8
    if (ctx->r2 == ctx->r1) {
        // 0x151C16C4: lw          $a2, 0x38($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X38);
            goto L_151C16E8;
    }
    // 0x151C16C4: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x151C16C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151C16CC: beq         $v0, $at, L_151C1708
    if (ctx->r2 == ctx->r1) {
        // 0x151C16D0: lw          $a2, 0x38($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X38);
            goto L_151C1708;
    }
    // 0x151C16D0: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x151C16D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151C16D8: beq         $v0, $at, L_151C1728
    if (ctx->r2 == ctx->r1) {
        // 0x151C16DC: lw          $a2, 0x38($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X38);
            goto L_151C1728;
    }
    // 0x151C16DC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x151C16E0: b           L_151C1760
    // 0x151C16E4: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
        goto L_151C1760;
    // 0x151C16E4: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
L_151C16E8:
    // 0x151C16E8: addiu       $t9, $zero, 0x24
    ctx->r25 = ADD32(0, 0X24);
    // 0x151C16EC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151C16F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C16F4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x151C16F8: jal         0x151D42E8
    // 0x151C16FC: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_151D42E8(rdram, ctx);
        goto after_1;
    // 0x151C16FC: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x151C1700: b           L_151C1788
    // 0x151C1704: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_151C1788;
    // 0x151C1704: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151C1708:
    // 0x151C1708: addiu       $t0, $zero, 0x25
    ctx->r8 = ADD32(0, 0X25);
    // 0x151C170C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151C1710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C1714: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x151C1718: jal         0x151D42E8
    // 0x151C171C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_151D42E8(rdram, ctx);
        goto after_2;
    // 0x151C171C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x151C1720: b           L_151C1788
    // 0x151C1724: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_151C1788;
    // 0x151C1724: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151C1728:
    // 0x151C1728: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x151C172C: addiu       $t2, $zero, 0x16
    ctx->r10 = ADD32(0, 0X16);
    // 0x151C1730: addiu       $t3, $zero, 0x26
    ctx->r11 = ADD32(0, 0X26);
    // 0x151C1734: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x151C1738: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151C173C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C1740: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x151C1744: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151C1748: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C174C: jal         0x151D40D4
    // 0x151C1750: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_151D40D4(rdram, ctx);
        goto after_3;
    // 0x151C1750: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_3:
    // 0x151C1754: b           L_151C1788
    // 0x151C1758: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_151C1788;
    // 0x151C1758: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151C175C:
    // 0x151C175C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
L_151C1760:
    // 0x151C1760: addiu       $t5, $zero, 0x16
    ctx->r13 = ADD32(0, 0X16);
    // 0x151C1764: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x151C1768: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151C176C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151C1770: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x151C1774: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151C1778: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C177C: jal         0x151D40D4
    // 0x151C1780: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_151D40D4(rdram, ctx);
        goto after_4;
    // 0x151C1780: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_4:
    // 0x151C1784: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151C1788:
    // 0x151C1788: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151C178C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151C1790: jr          $ra
    // 0x151C1794: nop

    return;
    return;
    // 0x151C1794: nop

;}
RECOMP_FUNC void func_15149318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15149318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514931C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15149320: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15149324: jal         0x151D5E30
    // 0x15149328: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    func_151D5E30(rdram, ctx);
        goto after_0;
    // 0x15149328: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x1514932C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15149330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15149334: jr          $ra
    // 0x15149338: nop

    return;
    return;
    // 0x15149338: nop

;}
RECOMP_FUNC void func_1501FE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501FE68: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x1501FE6C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1501FE70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1501FE74: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x1501FE78: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501FE7C: addiu       $t6, $t6, 0x35C8
    ctx->r14 = ADD32(ctx->r14, 0X35C8);
    // 0x1501FE80: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x1501FE84: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x1501FE88: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1501FE8C: sll         $t0, $a0, 1
    ctx->r8 = S32(ctx->r4 << 1);
    // 0x1501FE90: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1501FE94: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x1501FE98: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x1501FE9C: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x1501FEA0: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x1501FEA4: bne         $at, $zero, L_1501FFD8
    if (ctx->r1 != 0) {
        // 0x1501FEA8: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_1501FFD8;
    }
    // 0x1501FEA8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1501FEAC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1501FEB0: nop

    // 0x1501FEB4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x1501FEB8: nop

    // 0x1501FEBC: bc1fl       L_1501FECC
    if (!c1cs) {
        // 0x1501FEC0: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_1501FECC;
    }
    goto skip_0;
    // 0x1501FEC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x1501FEC4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x1501FEC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_1501FECC:
    // 0x1501FECC: nop

    // 0x1501FED0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x1501FED4: nop

    // 0x1501FED8: bc1f        L_1501FEE4
    if (!c1cs) {
        // 0x1501FEDC: nop
    
            goto L_1501FEE4;
    }
    // 0x1501FEDC: nop

    // 0x1501FEE0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_1501FEE4:
    // 0x1501FEE4: lw          $t1, 0x3A50($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3A50);
    // 0x1501FEE8: sll         $t2, $a0, 6
    ctx->r10 = S32(ctx->r4 << 6);
    // 0x1501FEEC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501FEF0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x1501FEF4: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x1501FEF8: lwc1        $f8, 0x69D8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X69D8);
    // 0x1501FEFC: addiu       $t4, $sp, 0x60
    ctx->r12 = ADD32(ctx->r29, 0X60);
    // 0x1501FF00: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1501FF04: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1501FF08: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x1501FF0C: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x1501FF10: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x1501FF14: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x1501FF18: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x1501FF1C: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1501FF20: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x1501FF24: jal         0x1501F72C
    // 0x1501FF28: nop

    func_1501F72C(rdram, ctx);
        goto after_0;
    // 0x1501FF28: nop

    after_0:
    // 0x1501FF2C: lw          $a3, 0x94($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X94);
    // 0x1501FF30: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x1501FF34: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1501FF38: sll         $t5, $a3, 4
    ctx->r13 = S32(ctx->r7 << 4);
    // 0x1501FF3C: subu        $t5, $t5, $a3
    ctx->r13 = SUB32(ctx->r13, ctx->r7);
    // 0x1501FF40: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x1501FF44: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1501FF48: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x1501FF4C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x1501FF50: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x1501FF54: lw          $a1, 0x3868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3868);
    // 0x1501FF58: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x1501FF5C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x1501FF60: addu        $t1, $a1, $t9
    ctx->r9 = ADD32(ctx->r5, ctx->r25);
    // 0x1501FF64: lhu         $t2, 0x6($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X6);
    // 0x1501FF68: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x1501FF6C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1501FF70: bne         $t2, $zero, L_1501FF8C
    if (ctx->r10 != 0) {
        // 0x1501FF74: lwc1        $f16, 0x78($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
            goto L_1501FF8C;
    }
    // 0x1501FF74: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1501FF78: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1501FF7C: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1501FF80: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1501FF84: b           L_1501FFBC
    // 0x1501FF88: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
        goto L_1501FFBC;
    // 0x1501FF88: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
L_1501FF8C:
    // 0x1501FF8C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x1501FF90: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x1501FF94: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x1501FF98: addu        $t4, $t3, $t0
    ctx->r12 = ADD32(ctx->r11, ctx->r8);
    // 0x1501FF9C: jal         0x1501FFE8
    // 0x1501FFA0: lhu         $a3, 0x0($t4)
    ctx->r7 = MEM_HU(ctx->r12, 0X0);
    func_1501FFE8(rdram, ctx);
        goto after_1;
    // 0x1501FFA0: lhu         $a3, 0x0($t4)
    ctx->r7 = MEM_HU(ctx->r12, 0X0);
    after_1:
    // 0x1501FFA4: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1501FFA8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1501FFAC: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1501FFB0: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1501FFB4: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1501FFB8: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
L_1501FFBC:
    // 0x1501FFBC: jal         0x150484A0
    // 0x1501FFC0: nop

    func_150484A0(rdram, ctx);
        goto after_2;
    // 0x1501FFC0: nop

    after_2:
    // 0x1501FFC4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501FFC8: lwc1        $f18, 0x69DC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X69DC);
    // 0x1501FFCC: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x1501FFD0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1501FFD4: swc1        $f4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f4.u32l;
L_1501FFD8:
    // 0x1501FFD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1501FFDC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x1501FFE0: jr          $ra
    // 0x1501FFE4: nop

    return;
    return;
    // 0x1501FFE4: nop

;}
RECOMP_FUNC void func_151BF81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BF81C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151BF820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151BF824: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151BF828: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151BF82C: lbu         $t6, -0x153F($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X153F);
    // 0x151BF830: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151BF834: bnel        $t6, $zero, L_151BF850
    if (ctx->r14 != 0) {
        // 0x151BF838: lbu         $t9, 0xD($a1)
        ctx->r25 = MEM_BU(ctx->r5, 0XD);
            goto L_151BF850;
    }
    goto skip_0;
    // 0x151BF838: lbu         $t9, 0xD($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0XD);
    skip_0:
    // 0x151BF83C: lbu         $t7, -0x1540($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1540);
    // 0x151BF840: addiu       $v1, $a1, 0x28
    ctx->r3 = ADD32(ctx->r5, 0X28);
    // 0x151BF844: beql        $t7, $zero, L_151BF868
    if (ctx->r15 == 0) {
        // 0x151BF848: lbu         $t1, 0x14($v1)
        ctx->r9 = MEM_BU(ctx->r3, 0X14);
            goto L_151BF868;
    }
    goto skip_1;
    // 0x151BF848: lbu         $t1, 0x14($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X14);
    skip_1:
    // 0x151BF84C: lbu         $t9, 0xD($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0XD);
L_151BF850:
    // 0x151BF850: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151BF854: sh          $t8, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r24;
    // 0x151BF858: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x151BF85C: b           L_151BFB1C
    // 0x151BF860: sb          $t0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r8;
        goto L_151BFB1C;
    // 0x151BF860: sb          $t0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r8;
    // 0x151BF864: lbu         $t1, 0x14($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X14);
L_151BF868:
    // 0x151BF868: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x151BF86C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x151BF870: bne         $t2, $zero, L_151BF8DC
    if (ctx->r10 != 0) {
        // 0x151BF874: nop
    
            goto L_151BF8DC;
    }
    // 0x151BF874: nop

    // 0x151BF878: lbu         $t3, 0x35EA($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X35EA);
    // 0x151BF87C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151BF880: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151BF884: beql        $t3, $at, L_151BFB20
    if (ctx->r11 == ctx->r1) {
        // 0x151BF888: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151BFB20;
    }
    goto skip_2;
    // 0x151BF888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x151BF88C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x151BF890: jal         0x15181CC8
    // 0x151BF894: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    func_15181CC8(rdram, ctx);
        goto after_0;
    // 0x151BF894: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_0:
    // 0x151BF898: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x151BF89C: beq         $v0, $zero, L_151BFB1C
    if (ctx->r2 == 0) {
        // 0x151BF8A0: lw          $a1, 0x28($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X28);
            goto L_151BFB1C;
    }
    // 0x151BF8A0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151BF8A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151BF8A8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x151BF8AC: jal         0x1517EF00
    // 0x151BF8B0: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    func_1517EF00(rdram, ctx);
        goto after_1;
    // 0x151BF8B0: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_1:
    // 0x151BF8B4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x151BF8B8: bne         $v0, $zero, L_151BFB1C
    if (ctx->r2 != 0) {
        // 0x151BF8BC: lw          $a1, 0x28($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X28);
            goto L_151BFB1C;
    }
    // 0x151BF8BC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151BF8C0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x151BF8C4: lbu         $t4, -0x164C($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X164C);
    // 0x151BF8C8: bnel        $t4, $zero, L_151BFB20
    if (ctx->r12 != 0) {
        // 0x151BF8CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151BFB20;
    }
    goto skip_3;
    // 0x151BF8CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x151BF8D0: lbu         $t5, 0x14($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X14);
    // 0x151BF8D4: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x151BF8D8: sb          $t6, 0x14($v1)
    MEM_B(0X14, ctx->r3) = ctx->r14;
L_151BF8DC:
    // 0x151BF8DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BF8E0: lwc1        $f4, -0x56E8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X56E8);
    // 0x151BF8E4: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151BF8E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BF8EC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x151BF8F0: nop

    // 0x151BF8F4: bc1f        L_151BF934
    if (!c1cs) {
        // 0x151BF8F8: nop
    
            goto L_151BF934;
    }
    // 0x151BF8F8: nop

    // 0x151BF8FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BF900: lwc1        $f6, -0x56E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X56E4);
    // 0x151BF904: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BF908: lwc1        $f10, -0x56E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X56E0);
    // 0x151BF90C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151BF910: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x151BF914: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x151BF918: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151BF91C: jal         0x15047D60
    // 0x151BF920: nop

    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x151BF920: nop

    after_2:
    // 0x151BF924: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x151BF928: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151BF92C: b           L_151BF990
    // 0x151BF930: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_151BF990;
    // 0x151BF930: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_151BF934:
    // 0x151BF934: lwc1        $f16, -0x56DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X56DC);
    // 0x151BF938: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x151BF93C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x151BF940: nop

    // 0x151BF944: bc1fl       L_151BF990
    if (!c1cs) {
        // 0x151BF948: lwc1        $f2, 0x10($v1)
        ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
            goto L_151BF990;
    }
    goto skip_4;
    // 0x151BF948: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    skip_4:
    // 0x151BF94C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151BF950: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BF954: lwc1        $f6, -0x56D8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X56D8);
    // 0x151BF958: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x151BF95C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BF960: lwc1        $f10, -0x56D4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X56D4);
    // 0x151BF964: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x151BF968: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151BF96C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x151BF970: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151BF974: jal         0x15047D60
    // 0x151BF978: nop

    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x151BF978: nop

    after_3:
    // 0x151BF97C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x151BF980: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151BF984: b           L_151BF990
    // 0x151BF988: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_151BF990;
    // 0x151BF988: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x151BF98C: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
L_151BF990:
    // 0x151BF990: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x151BF994: lui         $at, 0xC2AA
    ctx->r1 = S32(0XC2AA << 16);
    // 0x151BF998: beql        $v0, $zero, L_151BF9F4
    if (ctx->r2 == 0) {
        // 0x151BF99C: lui         $at, 0xC2AA
        ctx->r1 = S32(0XC2AA << 16);
            goto L_151BF9F4;
    }
    goto skip_5;
    // 0x151BF99C: lui         $at, 0xC2AA
    ctx->r1 = S32(0XC2AA << 16);
    skip_5:
    // 0x151BF9A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151BF9A4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x151BF9A8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151BF9AC: mul.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x151BF9B0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x151BF9B4: addiu       $a0, $a0, 0x2458
    ctx->r4 = ADD32(ctx->r4, 0X2458);
    // 0x151BF9B8: lui         $at, 0x429E
    ctx->r1 = S32(0X429E << 16);
    // 0x151BF9BC: add.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x151BF9C0: swc1        $f18, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f18.u32l;
    // 0x151BF9C4: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x151BF9C8: beql        $t7, $zero, L_151BF9E8
    if (ctx->r15 == 0) {
        // 0x151BF9CC: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_151BF9E8;
    }
    goto skip_6;
    // 0x151BF9CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_6:
    // 0x151BF9D0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x151BF9D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BF9D8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x151BF9DC: b           L_151BF9F0
    // 0x151BF9E0: swc1        $f4, 0x58($t8)
    MEM_W(0X58, ctx->r24) = ctx->f4.u32l;
        goto L_151BF9F0;
    // 0x151BF9E0: swc1        $f4, 0x58($t8)
    MEM_W(0X58, ctx->r24) = ctx->f4.u32l;
    // 0x151BF9E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_151BF9E8:
    // 0x151BF9E8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x151BF9EC: swc1        $f6, 0x58($t9)
    MEM_W(0X58, ctx->r25) = ctx->f6.u32l;
L_151BF9F0:
    // 0x151BF9F0: lui         $at, 0xC2AA
    ctx->r1 = S32(0XC2AA << 16);
L_151BF9F4:
    // 0x151BF9F4: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x151BF9F8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151BF9FC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x151BFA00: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151BFA04: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x151BFA08: beq         $v0, $zero, L_151BFA70
    if (ctx->r2 == 0) {
        // 0x151BFA0C: addiu       $a0, $a0, 0x2458
        ctx->r4 = ADD32(ctx->r4, 0X2458);
            goto L_151BFA70;
    }
    // 0x151BFA0C: addiu       $a0, $a0, 0x2458
    ctx->r4 = ADD32(ctx->r4, 0X2458);
    // 0x151BFA10: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x151BFA14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151BFA18: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151BFA1C: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x151BFA20: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BFA24: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x151BFA28: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x151BFA2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151BFA30: lui         $at, 0xC278
    ctx->r1 = S32(0XC278 << 16);
    // 0x151BFA34: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151BFA38: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151BFA3C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151BFA40: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x151BFA44: lbu         $t0, 0x0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X0);
    // 0x151BFA48: beql        $t0, $zero, L_151BFA68
    if (ctx->r8 == 0) {
        // 0x151BFA4C: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_151BFA68;
    }
    goto skip_7;
    // 0x151BFA4C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_7:
    // 0x151BFA50: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x151BFA54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151BFA58: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x151BFA5C: b           L_151BFA70
    // 0x151BFA60: swc1        $f16, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f16.u32l;
        goto L_151BFA70;
    // 0x151BFA60: swc1        $f16, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f16.u32l;
    // 0x151BFA64: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_151BFA68:
    // 0x151BFA68: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x151BFA6C: swc1        $f18, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f18.u32l;
L_151BFA70:
    // 0x151BFA70: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x151BFA74: beq         $v0, $zero, L_151BFADC
    if (ctx->r2 == 0) {
        // 0x151BFA78: nop
    
            goto L_151BFADC;
    }
    // 0x151BFA78: nop

    // 0x151BFA7C: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x151BFA80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151BFA84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151BFA88: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x151BFA8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151BFA90: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x151BFA94: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x151BFA98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BFA9C: lui         $at, 0xC278
    ctx->r1 = S32(0XC278 << 16);
    // 0x151BFAA0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151BFAA4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151BFAA8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151BFAAC: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x151BFAB0: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x151BFAB4: beql        $t3, $zero, L_151BFAD4
    if (ctx->r11 == 0) {
        // 0x151BFAB8: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_151BFAD4;
    }
    goto skip_8;
    // 0x151BFAB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_8:
    // 0x151BFABC: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x151BFAC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151BFAC4: lw          $t4, 0x8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X8);
    // 0x151BFAC8: b           L_151BFADC
    // 0x151BFACC: swc1        $f8, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f8.u32l;
        goto L_151BFADC;
    // 0x151BFACC: swc1        $f8, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f8.u32l;
    // 0x151BFAD0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_151BFAD4:
    // 0x151BFAD4: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x151BFAD8: swc1        $f10, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f10.u32l;
L_151BFADC:
    // 0x151BFADC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151BFAE0: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151BFAE4: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151BFAE8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151BFAEC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151BFAF0: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x151BFAF4: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151BFAF8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x151BFAFC: nop

    // 0x151BFB00: bc1fl       L_151BFB20
    if (!c1cs) {
        // 0x151BFB04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151BFB20;
    }
    goto skip_9;
    // 0x151BFB04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_9:
    // 0x151BFB08: lbu         $t7, 0xD($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0XD);
    // 0x151BFB0C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x151BFB10: sh          $t6, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r14;
    // 0x151BFB14: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x151BFB18: sb          $t8, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r24;
L_151BFB1C:
    // 0x151BFB1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151BFB20:
    // 0x151BFB20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151BFB24: jr          $ra
    // 0x151BFB28: nop

    return;
    return;
    // 0x151BFB28: nop

;}
RECOMP_FUNC void func_150722F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150722F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150722F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150722F8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150722FC: jal         0x150721E8
    // 0x15072300: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_150721E8(rdram, ctx);
        goto after_0;
    // 0x15072300: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x15072304: beq         $v0, $zero, L_1507232C
    if (ctx->r2 == 0) {
        // 0x15072308: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1507232C;
    }
    // 0x15072308: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1507230C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15072310: lw          $t0, 0x1580($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X1580);
    // 0x15072314: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15072318: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1507231C: sra         $v1, $t0, 8
    ctx->r3 = S32(SIGNED(ctx->r8) >> 8);
    // 0x15072320: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    // 0x15072324: jal         0x1506160C
    // 0x15072328: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    func_1506160C(rdram, ctx);
        goto after_1;
    // 0x15072328: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    after_1:
L_1507232C:
    // 0x1507232C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15072330: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15072334: jr          $ra
    // 0x15072338: nop

    return;
    return;
    // 0x15072338: nop

;}
RECOMP_FUNC void func_15048F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15048F90: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15048F94: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15048F98: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15048F9C: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x15048FA0: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15048FA4: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x15048FA8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15048FAC: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    // 0x15048FB0: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15048FB4: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x15048FB8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15048FBC: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    // 0x15048FC0: jr          $ra
    // 0x15048FC4: nop

    return;
    return;
    // 0x15048FC4: nop

;}
RECOMP_FUNC void func_150950D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150950D4: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x150950D8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150950DC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150950E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150950E4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x150950E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150950EC: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x150950F0: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x150950F4: lbu         $t6, 0xA($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XA);
    // 0x150950F8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150950FC: addiu       $t1, $t1, 0x2CA0
    ctx->r9 = ADD32(ctx->r9, 0X2CA0);
    // 0x15095100: bnel        $t6, $zero, L_15095110
    if (ctx->r14 != 0) {
        // 0x15095104: lhu         $t7, 0x4($s1)
        ctx->r15 = MEM_HU(ctx->r17, 0X4);
            goto L_15095110;
    }
    goto skip_0;
    // 0x15095104: lhu         $t7, 0x4($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X4);
    skip_0:
    // 0x15095108: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x1509510C: lhu         $t7, 0x4($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X4);
L_15095110:
    // 0x15095110: lhu         $t8, 0x6($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X6);
    // 0x15095114: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x15095118: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x1509511C: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15095120: lbu         $t6, 0x8($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X8);
    // 0x15095124: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x15095128: lbu         $t9, -0x2150($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X2150);
    // 0x1509512C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15095130: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x15095134: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x15095138: mflo        $v1
    ctx->r3 = lo;
    // 0x1509513C: addu        $t3, $t9, $v1
    ctx->r11 = ADD32(ctx->r25, ctx->r3);
    // 0x15095140: bnel        $t6, $at, L_15095160
    if (ctx->r14 != ctx->r1) {
        // 0x15095144: lw          $t9, 0x0($s1)
        ctx->r25 = MEM_W(ctx->r17, 0X0);
            goto L_15095160;
    }
    goto skip_1;
    // 0x15095144: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    skip_1:
    // 0x15095148: bgez        $v1, L_15095158
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1509514C: sra         $t7, $v1, 2
        ctx->r15 = S32(SIGNED(ctx->r3) >> 2);
            goto L_15095158;
    }
    // 0x1509514C: sra         $t7, $v1, 2
    ctx->r15 = S32(SIGNED(ctx->r3) >> 2);
    // 0x15095150: addiu       $at, $v1, 0x3
    ctx->r1 = ADD32(ctx->r3, 0X3);
    // 0x15095154: sra         $t7, $at, 2
    ctx->r15 = S32(SIGNED(ctx->r1) >> 2);
L_15095158:
    // 0x15095158: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x1509515C: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
L_15095160:
    // 0x15095160: lbu         $t8, -0x214C($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X214C);
    // 0x15095164: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x15095168: sltu        $at, $t9, $at
    ctx->r1 = ctx->r25 < ctx->r1 ? 1 : 0;
    // 0x1509516C: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x15095170: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x15095174: beq         $at, $zero, L_150951B0
    if (ctx->r1 == 0) {
        // 0x15095178: srav        $t3, $t3, $t8
        ctx->r11 = S32(SIGNED(ctx->r11) >> (ctx->r24 & 31));
            goto L_150951B0;
    }
    // 0x15095178: srav        $t3, $t3, $t8
    ctx->r11 = S32(SIGNED(ctx->r11) >> (ctx->r24 & 31));
    // 0x1509517C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x15095180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15095184: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x15095188: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1509518C: jal         0x1510D0EC
    // 0x15095190: sw          $t3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r11;
    func_1510D0EC(rdram, ctx);
        goto after_0;
    // 0x15095190: sw          $t3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r11;
    after_0:
    // 0x15095194: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15095198: sw          $v0, 0x2CA0($at)
    MEM_W(0X2CA0, ctx->r1) = ctx->r2;
    // 0x1509519C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150951A0: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150951A4: addiu       $t1, $t1, 0x2CA0
    ctx->r9 = ADD32(ctx->r9, 0X2CA0);
    // 0x150951A8: lw          $v1, 0x2CA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2CA0);
    // 0x150951AC: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
L_150951B0:
    // 0x150951B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150951B4: beq         $v1, $at, L_150951D4
    if (ctx->r3 == ctx->r1) {
        // 0x150951B8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_150951D4;
    }
    // 0x150951B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150951BC: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x150951C0: addu        $t6, $t3, $t3
    ctx->r14 = ADD32(ctx->r11, ctx->r11);
    // 0x150951C4: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150951C8: mflo        $t8
    ctx->r24 = lo;
    // 0x150951CC: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x150951D0: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
L_150951D4:
    // 0x150951D4: lbu         $t6, 0x9($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X9);
    // 0x150951D8: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x150951DC: addiu       $t4, $t4, -0x2144
    ctx->r12 = ADD32(ctx->r12, -0X2144);
    // 0x150951E0: bnel        $t6, $zero, L_150951FC
    if (ctx->r14 != 0) {
        // 0x150951E4: lhu         $v1, 0x4($s1)
        ctx->r3 = MEM_HU(ctx->r17, 0X4);
            goto L_150951FC;
    }
    goto skip_2;
    // 0x150951E4: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    skip_2:
    // 0x150951E8: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x150951EC: sra         $t7, $v1, 1
    ctx->r15 = S32(SIGNED(ctx->r3) >> 1);
    // 0x150951F0: b           L_15095200
    // 0x150951F4: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
        goto L_15095200;
    // 0x150951F4: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
    // 0x150951F8: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
L_150951FC:
    // 0x150951FC: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
L_15095200:
    // 0x15095200: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x15095204: bne         $at, $zero, L_15095224
    if (ctx->r1 != 0) {
        // 0x15095208: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_15095224;
    }
    // 0x15095208: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_1509520C:
    // 0x1509520C: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x15095210: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15095214: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x15095218: bne         $at, $zero, L_1509520C
    if (ctx->r1 != 0) {
        // 0x1509521C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_1509520C;
    }
    // 0x1509521C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x15095220: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_15095224:
    // 0x15095224: lhu         $v1, 0x6($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6);
    // 0x15095228: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1509522C: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x15095230: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x15095234: bne         $at, $zero, L_1509524C
    if (ctx->r1 != 0) {
        // 0x15095238: sll         $t9, $v0, 1
        ctx->r25 = S32(ctx->r2 << 1);
            goto L_1509524C;
    }
L_15095238:
    // 0x15095238: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x1509523C: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15095240: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x15095244: bne         $at, $zero, L_15095238
    if (ctx->r1 != 0) {
        // 0x15095248: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_15095238;
    }
    // 0x15095248: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_1509524C:
    // 0x1509524C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x15095250: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15095254: beql        $v0, $at, L_15095268
    if (ctx->r2 == ctx->r1) {
        // 0x15095258: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_15095268;
    }
    goto skip_3;
    // 0x15095258: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    skip_3:
    // 0x1509525C: b           L_15095268
    // 0x15095260: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_15095268;
    // 0x15095260: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x15095264: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_15095268:
    // 0x15095268: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1509526C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x15095270: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15095274: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15095278: lbu         $t8, 0x9($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X9);
    // 0x1509527C: andi        $a3, $t0, 0x7
    ctx->r7 = ctx->r8 & 0X7;
    // 0x15095280: sll         $t7, $a3, 21
    ctx->r15 = S32(ctx->r7 << 21);
    // 0x15095284: addu        $t9, $t4, $t8
    ctx->r25 = ADD32(ctx->r12, ctx->r24);
    // 0x15095288: lbu         $t6, 0x0($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X0);
    // 0x1509528C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x15095290: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x15095294: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x15095298: sll         $t8, $t7, 19
    ctx->r24 = S32(ctx->r15 << 19);
    // 0x1509529C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x150952A0: or          $t6, $t9, $a3
    ctx->r14 = ctx->r25 | ctx->r7;
    // 0x150952A4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150952A8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x150952AC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150952B0: lw          $t7, 0x2CA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2CA0);
    // 0x150952B4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150952B8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x150952BC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x150952C0: lbu         $t9, 0x9($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X9);
    // 0x150952C4: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x150952C8: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x150952CC: addu        $t6, $t4, $t9
    ctx->r14 = ADD32(ctx->r12, ctx->r25);
    // 0x150952D0: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x150952D4: andi        $t8, $t1, 0x1FF
    ctx->r24 = ctx->r9 & 0X1FF;
    // 0x150952D8: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x150952DC: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x150952E0: sll         $t9, $t8, 19
    ctx->r25 = S32(ctx->r24 << 19);
    // 0x150952E4: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x150952E8: or          $t7, $t6, $a3
    ctx->r15 = ctx->r14 | ctx->r7;
    // 0x150952EC: or          $t8, $t7, $t1
    ctx->r24 = ctx->r15 | ctx->r9;
    // 0x150952F0: lui         $t9, 0x700
    ctx->r25 = S32(0X700 << 16);
    // 0x150952F4: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x150952F8: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x150952FC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15095300: addiu       $v0, $t3, -0x1
    ctx->r2 = ADD32(ctx->r11, -0X1);
    // 0x15095304: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x15095308: or          $t2, $s0, $zero
    ctx->r10 = ctx->r16 | 0;
    // 0x1509530C: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x15095310: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x15095314: beq         $at, $zero, L_15095324
    if (ctx->r1 == 0) {
        // 0x15095318: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_15095324;
    }
    // 0x15095318: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1509531C: b           L_15095328
    // 0x15095320: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_15095328;
    // 0x15095320: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_15095324:
    // 0x15095324: addiu       $t0, $zero, 0x7FF
    ctx->r8 = ADD32(0, 0X7FF);
L_15095328:
    // 0x15095328: andi        $t7, $t0, 0xFFF
    ctx->r15 = ctx->r8 & 0XFFF;
    // 0x1509532C: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x15095330: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x15095334: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x15095338: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x1509533C: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x15095340: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x15095344: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x15095348: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x1509534C: lbu         $t6, -0x2148($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X2148);
    // 0x15095350: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x15095354: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15095358: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1509535C: andi        $t5, $a0, 0xF
    ctx->r13 = ctx->r4 & 0XF;
    // 0x15095360: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15095364: mflo        $t8
    ctx->r24 = lo;
    // 0x15095368: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x1509536C: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x15095370: andi        $t7, $t6, 0x1FF
    ctx->r15 = ctx->r14 & 0X1FF;
    // 0x15095374: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x15095378: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x1509537C: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x15095380: sll         $t8, $t7, 19
    ctx->r24 = S32(ctx->r15 << 19);
    // 0x15095384: or          $t6, $t9, $a3
    ctx->r14 = ctx->r25 | ctx->r7;
    // 0x15095388: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x1509538C: or          $t7, $t9, $t1
    ctx->r15 = ctx->r25 | ctx->r9;
    // 0x15095390: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x15095394: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x15095398: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x1509539C: sll         $t7, $t5, 14
    ctx->r15 = S32(ctx->r13 << 14);
    // 0x150953A0: andi        $t9, $a2, 0x3
    ctx->r25 = ctx->r6 & 0X3;
    // 0x150953A4: andi        $t6, $t3, 0x7
    ctx->r14 = ctx->r11 & 0X7;
    // 0x150953A8: sll         $t3, $t6, 24
    ctx->r11 = S32(ctx->r14 << 24);
    // 0x150953AC: andi        $t6, $a1, 0xF
    ctx->r14 = ctx->r5 & 0XF;
    // 0x150953B0: sll         $t4, $t9, 18
    ctx->r12 = S32(ctx->r25 << 18);
    // 0x150953B4: sll         $ra, $t9, 8
    ctx->r31 = S32(ctx->r25 << 8);
    // 0x150953B8: or          $t9, $t3, $t4
    ctx->r25 = ctx->r11 | ctx->r12;
    // 0x150953BC: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x150953C0: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
    // 0x150953C4: or          $t7, $t9, $t7
    ctx->r15 = ctx->r25 | ctx->r15;
    // 0x150953C8: or          $t6, $t7, $ra
    ctx->r14 = ctx->r15 | ctx->r31;
    // 0x150953CC: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x150953D0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x150953D4: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x150953D8: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x150953DC: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x150953E0: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x150953E4: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x150953E8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x150953EC: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x150953F0: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    // 0x150953F4: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x150953F8: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x150953FC: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x15095400: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x15095404: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x15095408: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x1509540C: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x15095410: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x15095414: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x15095418: lhu         $t8, 0x4($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X4);
    // 0x1509541C: lw          $a2, 0xAC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XAC);
    // 0x15095420: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x15095424: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x15095428: addu        $t6, $t8, $a2
    ctx->r14 = ADD32(ctx->r24, ctx->r6);
    // 0x1509542C: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x15095430: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x15095434: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x15095438: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x1509543C: lhu         $t8, 0x6($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X6);
    // 0x15095440: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x15095444: or          $t7, $t3, $t9
    ctx->r15 = ctx->r11 | ctx->r25;
    // 0x15095448: addu        $t6, $t8, $a1
    ctx->r14 = ADD32(ctx->r24, ctx->r5);
    // 0x1509544C: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x15095450: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x15095454: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x15095458: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x1509545C: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x15095460: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15095464: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x15095468: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x1509546C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15095470: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x15095474: bne         $v0, $at, L_1509555C
    if (ctx->r2 != ctx->r1) {
        // 0x15095478: lw          $t6, 0x8C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X8C);
            goto L_1509555C;
    }
    // 0x15095478: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x1509547C: lbu         $t7, -0x2148($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X2148);
    // 0x15095480: sra         $t9, $t6, 1
    ctx->r25 = S32(SIGNED(ctx->r14) >> 1);
    // 0x15095484: lui         $at, 0xF580
    ctx->r1 = S32(0XF580 << 16);
    // 0x15095488: multu       $t7, $t9
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1509548C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15095490: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15095494: mflo        $t8
    ctx->r24 = lo;
    // 0x15095498: addiu       $t7, $t8, 0x7
    ctx->r15 = ADD32(ctx->r24, 0X7);
    // 0x1509549C: sra         $t9, $t7, 3
    ctx->r25 = S32(SIGNED(ctx->r15) >> 3);
    // 0x150954A0: andi        $t8, $t9, 0x1FF
    ctx->r24 = ctx->r25 & 0X1FF;
    // 0x150954A4: sll         $t7, $t8, 9
    ctx->r15 = S32(ctx->r24 << 9);
    // 0x150954A8: lhu         $t8, 0x6($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X6);
    // 0x150954AC: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x150954B0: multu       $t6, $t8
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150954B4: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x150954B8: mflo        $t7
    ctx->r15 = lo;
    // 0x150954BC: bgez        $t7, L_150954CC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x150954C0: sra         $t6, $t7, 2
        ctx->r14 = S32(SIGNED(ctx->r15) >> 2);
            goto L_150954CC;
    }
    // 0x150954C0: sra         $t6, $t7, 2
    ctx->r14 = S32(SIGNED(ctx->r15) >> 2);
    // 0x150954C4: addiu       $at, $t7, 0x3
    ctx->r1 = ADD32(ctx->r15, 0X3);
    // 0x150954C8: sra         $t6, $at, 2
    ctx->r14 = S32(SIGNED(ctx->r1) >> 2);
L_150954CC:
    // 0x150954CC: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x150954D0: andi        $t8, $t7, 0x1FF
    ctx->r24 = ctx->r15 & 0X1FF;
    // 0x150954D4: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x150954D8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x150954DC: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x150954E0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x150954E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150954E8: andi        $t7, $v1, 0x7
    ctx->r15 = ctx->r3 & 0X7;
    // 0x150954EC: sll         $v1, $t7, 24
    ctx->r3 = S32(ctx->r15 << 24);
    // 0x150954F0: or          $t8, $v1, $t4
    ctx->r24 = ctx->r3 | ctx->r12;
    // 0x150954F4: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x150954F8: or          $t7, $t6, $ra
    ctx->r15 = ctx->r14 | ctx->r31;
    // 0x150954FC: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x15095500: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x15095504: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x15095508: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x1509550C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15095510: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x15095514: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x15095518: lhu         $t8, 0x4($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X4);
    // 0x1509551C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15095520: addu        $t6, $t8, $a2
    ctx->r14 = ADD32(ctx->r24, ctx->r6);
    // 0x15095524: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x15095528: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x1509552C: addu        $t8, $t9, $a3
    ctx->r24 = ADD32(ctx->r25, ctx->r7);
    // 0x15095530: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x15095534: lhu         $t8, 0x6($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X6);
    // 0x15095538: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x1509553C: or          $t9, $v1, $t7
    ctx->r25 = ctx->r3 | ctx->r15;
    // 0x15095540: addu        $t6, $t8, $a1
    ctx->r14 = ADD32(ctx->r24, ctx->r5);
    // 0x15095544: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x15095548: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1509554C: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x15095550: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x15095554: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x15095558: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
L_1509555C:
    // 0x1509555C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15095560: bne         $v0, $at, L_1509561C
    if (ctx->r2 != ctx->r1) {
        // 0x15095564: lui         $t9, 0xFD10
        ctx->r25 = S32(0XFD10 << 16);
            goto L_1509561C;
    }
    // 0x15095564: lui         $t9, 0xFD10
    ctx->r25 = S32(0XFD10 << 16);
    // 0x15095568: lbu         $t8, 0x9($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X9);
    // 0x1509556C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x15095570: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15095574: bne         $t8, $zero, L_15095588
    if (ctx->r24 != 0) {
        // 0x15095578: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_15095588;
    }
    // 0x15095578: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1509557C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x15095580: b           L_15095588
    // 0x15095584: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
        goto L_15095588;
    // 0x15095584: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
L_15095588:
    // 0x15095588: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1509558C: lhu         $t7, 0x6($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X6);
    // 0x15095590: lhu         $t6, 0x4($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X4);
    // 0x15095594: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15095598: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1509559C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150955A0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150955A4: lw          $t7, 0x2CA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2CA0);
    // 0x150955A8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150955AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150955B0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150955B4: mflo        $t8
    ctx->r24 = lo;
    // 0x150955B8: nop

    // 0x150955BC: nop

    // 0x150955C0: multu       $t8, $a1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150955C4: mflo        $t9
    ctx->r25 = lo;
    // 0x150955C8: bgez        $t9, L_150955D8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x150955CC: sra         $t6, $t9, 3
        ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
            goto L_150955D8;
    }
    // 0x150955CC: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x150955D0: addiu       $at, $t9, 0x7
    ctx->r1 = ADD32(ctx->r25, 0X7);
    // 0x150955D4: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_150955D8:
    // 0x150955D8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x150955DC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x150955E0: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x150955E4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x150955E8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x150955EC: andi        $t7, $a2, 0x3FF
    ctx->r15 = ctx->r6 & 0X3FF;
    // 0x150955F0: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x150955F4: lui         $at, 0x600
    ctx->r1 = S32(0X600 << 16);
    // 0x150955F8: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x150955FC: lui         $t6, 0xF000
    ctx->r14 = S32(0XF000 << 16);
    // 0x15095600: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x15095604: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x15095608: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x1509560C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15095610: sw          $t6, 0x2C9C($at)
    MEM_W(0X2C9C, ctx->r1) = ctx->r14;
    // 0x15095614: b           L_15095628
    // 0x15095618: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_15095628;
    // 0x15095618: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1509561C:
    // 0x1509561C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15095620: sw          $zero, 0x2C9C($at)
    MEM_W(0X2C9C, ctx->r1) = 0;
    // 0x15095624: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15095628:
    // 0x15095628: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1509562C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15095630: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15095634: jr          $ra
    // 0x15095638: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    return;
    // 0x15095638: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_100014A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100014A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x100014A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100014A8: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x100014AC: jal         0x10022E00
    // 0x100014B0: addiu       $a0, $a0, 0x1AE0
    ctx->r4 = ADD32(ctx->r4, 0X1AE0);
    osStopThread_recomp(rdram, ctx);
        goto after_0;
    // 0x100014B0: addiu       $a0, $a0, 0x1AE0
    ctx->r4 = ADD32(ctx->r4, 0X1AE0);
    after_0:
    // 0x100014B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x100014B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x100014BC: jr          $ra
    // 0x100014C0: nop

    return;
    return;
    // 0x100014C0: nop

;}
RECOMP_FUNC void func_150B9D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B9D14: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150B9D18: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x150B9D1C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x150B9D20: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150B9D24: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x150B9D28: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x150B9D2C: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x150B9D30: lw          $a3, 0x2C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X2C);
    // 0x150B9D34: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150B9D38: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x150B9D3C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x150B9D40: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150B9D44: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x150B9D48: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150B9D4C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x150B9D50: lwc1        $f16, 0x40($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X40);
    // 0x150B9D54: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x150B9D58: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150B9D5C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x150B9D60: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x150B9D64: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x150B9D68: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150B9D6C: jal         0x15142600
    // 0x150B9D70: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_15142600(rdram, ctx);
        goto after_0;
    // 0x150B9D70: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x150B9D74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150B9D78: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150B9D7C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x150B9D80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x150B9D84: jr          $ra
    // 0x150B9D88: nop

    return;
    return;
    // 0x150B9D88: nop

;}
RECOMP_FUNC void func_150097A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150097A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150097A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150097AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150097B0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150097B4: jal         0x15161540
    // 0x150097B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15161540(rdram, ctx);
        goto after_0;
    // 0x150097B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x150097BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150097C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150097C4: jr          $ra
    // 0x150097C8: nop

    return;
    return;
    // 0x150097C8: nop

;}
RECOMP_FUNC void func_150DEB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DEB58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150DEB5C: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x150DEB60: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x150DEB64: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x150DEB68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150DEB6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150DEB70: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x150DEB74: lw          $t8, 0x2FA0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2FA0);
    // 0x150DEB78: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x150DEB7C: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x150DEB80: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x150DEB84: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x150DEB88: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150DEB8C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x150DEB90: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150DEB94: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x150DEB98: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x150DEB9C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150DEBA0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x150DEBA4: lwc1        $f4, 0x388($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X388);
    // 0x150DEBA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150DEBAC: addiu       $a1, $a0, 0x120
    ctx->r5 = ADD32(ctx->r4, 0X120);
    // 0x150DEBB0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150DEBB4: nop

    // 0x150DEBB8: bc1f        L_150DEBC8
    if (!c1cs) {
        // 0x150DEBBC: nop
    
            goto L_150DEBC8;
    }
    // 0x150DEBBC: nop

    // 0x150DEBC0: b           L_150DEBD0
    // 0x150DEBC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150DEBD0;
    // 0x150DEBC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150DEBC8:
    // 0x150DEBC8: jal         0x15140410
    // 0x150DEBCC: addiu       $a2, $a0, 0x12C
    ctx->r6 = ADD32(ctx->r4, 0X12C);
    func_15140410(rdram, ctx);
        goto after_0;
    // 0x150DEBCC: addiu       $a2, $a0, 0x12C
    ctx->r6 = ADD32(ctx->r4, 0X12C);
    after_0:
L_150DEBD0:
    // 0x150DEBD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150DEBD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150DEBD8: jr          $ra
    // 0x150DEBDC: nop

    return;
    return;
    // 0x150DEBDC: nop

;}
RECOMP_FUNC void func_15149104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15149104: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15149108: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514910C: jal         0x151478F4
    // 0x15149110: nop

    func_151478F4(rdram, ctx);
        goto after_0;
    // 0x15149110: nop

    after_0:
    // 0x15149114: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15149118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514911C: jr          $ra
    // 0x15149120: nop

    return;
    return;
    // 0x15149120: nop

;}
RECOMP_FUNC void func_151D13E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D13E0: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x151D13E4: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x151D13E8: beq         $t6, $zero, L_151D1440
    if (ctx->r14 == 0) {
        // 0x151D13EC: nop
    
            goto L_151D1440;
    }
    // 0x151D13EC: nop

    // 0x151D13F0: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x151D13F4: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x151D13F8: lw          $v1, 0x98($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X98);
    // 0x151D13FC: sb          $zero, 0x30($a1)
    MEM_B(0X30, ctx->r5) = 0;
    // 0x151D1400: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x151D1404: lhu         $t7, 0x1E($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X1E);
    // 0x151D1408: andi        $t8, $t7, 0xFFFD
    ctx->r24 = ctx->r15 & 0XFFFD;
    // 0x151D140C: sh          $t8, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r24;
    // 0x151D1410: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x151D1414: lhu         $t9, 0x1E($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X1E);
    // 0x151D1418: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x151D141C: sh          $t0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r8;
    // 0x151D1420: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x151D1424: lhu         $t1, 0x1E($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X1E);
    // 0x151D1428: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x151D142C: sh          $t2, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r10;
    // 0x151D1430: lw          $t4, 0x8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8);
    // 0x151D1434: sh          $t3, 0x1C($t4)
    MEM_H(0X1C, ctx->r12) = ctx->r11;
    // 0x151D1438: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x151D143C: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
L_151D1440:
    // 0x151D1440: jr          $ra
    // 0x151D1444: nop

    return;
    return;
    // 0x151D1444: nop

;}
RECOMP_FUNC void func_15079F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15079F24: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15079F28: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15079F2C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15079F30: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15079F34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15079F38: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15079F3C: lwc1        $f4, 0x1898($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1898);
    // 0x15079F40: lw          $t8, 0x154C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X154C);
    // 0x15079F44: swc1        $f4, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f4.u32l;
    // 0x15079F48: jr          $ra
    // 0x15079F4C: nop

    return;
    return;
    // 0x15079F4C: nop

;}
RECOMP_FUNC void func_151DB3D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DB3D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151DB3DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151DB3E0: sb          $zero, 0x14($a0)
    MEM_B(0X14, ctx->r4) = 0;
    // 0x151DB3E4: jal         0x150ADA20
    // 0x151DB3E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151DB3E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151DB3EC: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151DB3F0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB3F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151DB3F8: mfhi        $v1
    ctx->r3 = hi;
    // 0x151DB3FC: addiu       $v1, $v1, 0x50
    ctx->r3 = ADD32(ctx->r3, 0X50);
    // 0x151DB400: sb          $v1, 0x16($a0)
    MEM_B(0X16, ctx->r4) = ctx->r3;
    // 0x151DB404: sb          $v1, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r3;
    // 0x151DB408: jal         0x150ADA20
    // 0x151DB40C: sb          $zero, 0x18($a0)
    MEM_B(0X18, ctx->r4) = 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151DB40C: sb          $zero, 0x18($a0)
    MEM_B(0X18, ctx->r4) = 0;
    after_1:
    // 0x151DB410: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x151DB414: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB418: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151DB41C: mfhi        $v1
    ctx->r3 = hi;
    // 0x151DB420: addiu       $v1, $v1, 0xB4
    ctx->r3 = ADD32(ctx->r3, 0XB4);
    // 0x151DB424: sb          $v1, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r3;
    // 0x151DB428: sb          $v1, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r3;
    // 0x151DB42C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151DB430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151DB434: jr          $ra
    // 0x151DB438: nop

    return;
    return;
    // 0x151DB438: nop

;}
RECOMP_FUNC void func_1000E654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000E654: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1000E658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000E65C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1000E660: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1000E664: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x1000E668: jal         0x1000B1FC
    // 0x1000E66C: nop

    func_1000B1FC(rdram, ctx);
        goto after_0;
    // 0x1000E66C: nop

    after_0:
    // 0x1000E670: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x1000E674: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1000E678: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1000E67C: bltz        $a1, L_1000E698
    if (SIGNED(ctx->r5) < 0) {
        // 0x1000E680: nop
    
            goto L_1000E698;
    }
    // 0x1000E680: nop

    // 0x1000E684: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x1000E688: jal         0x1000B1FC
    // 0x1000E68C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_1000B1FC(rdram, ctx);
        goto after_1;
    // 0x1000E68C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x1000E690: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x1000E694: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_1000E698:
    // 0x1000E698: beq         $v1, $zero, L_1000E6F4
    if (ctx->r3 == 0) {
        // 0x1000E69C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1000E6F4;
    }
    // 0x1000E69C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1000E6A0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x1000E6A4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1000E6A8: bnel        $a1, $zero, L_1000E6E0
    if (ctx->r5 != 0) {
        // 0x1000E6AC: sw          $t7, 0x24($v1)
        MEM_W(0X24, ctx->r3) = ctx->r15;
            goto L_1000E6E0;
    }
    goto skip_0;
    // 0x1000E6AC: sw          $t7, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r15;
    skip_0:
    // 0x1000E6B0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1000E6B4: bltzl       $v0, L_1000E6E0
    if (SIGNED(ctx->r2) < 0) {
        // 0x1000E6B8: sw          $t7, 0x24($v1)
        MEM_W(0X24, ctx->r3) = ctx->r15;
            goto L_1000E6E0;
    }
    goto skip_1;
    // 0x1000E6B8: sw          $t7, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r15;
    skip_1:
    // 0x1000E6BC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x1000E6C0: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x1000E6C4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x1000E6C8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x1000E6CC: jal         0x10008C6C
    // 0x1000E6D0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_10008C6C(rdram, ctx);
        goto after_2;
    // 0x1000E6D0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_2:
    // 0x1000E6D4: b           L_1000E6F4
    // 0x1000E6D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000E6F4;
    // 0x1000E6D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1000E6DC: sw          $t7, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r15;
L_1000E6E0:
    // 0x1000E6E0: beq         $a0, $zero, L_1000E6EC
    if (ctx->r4 == 0) {
        // 0x1000E6E4: sw          $a1, 0x20($v1)
        MEM_W(0X20, ctx->r3) = ctx->r5;
            goto L_1000E6EC;
    }
    // 0x1000E6E4: sw          $a1, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r5;
    // 0x1000E6E8: sw          $a0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r4;
L_1000E6EC:
    // 0x1000E6EC: b           L_1000E6F4
    // 0x1000E6F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000E6F4;
    // 0x1000E6F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000E6F4:
    // 0x1000E6F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000E6F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1000E6FC: jr          $ra
    // 0x1000E700: nop

    return;
    return;
    // 0x1000E700: nop

;}
RECOMP_FUNC void func_151623F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151623F4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151623F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151623FC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x15162400: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x15162404: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x15162408: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x1516240C: lbu         $t6, 0x57($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X57);
    // 0x15162410: lbu         $v0, 0x57($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X57);
    // 0x15162414: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x15162418: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x1516241C: bne         $at, $zero, L_1516242C
    if (ctx->r1 != 0) {
        // 0x15162420: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_1516242C;
    }
    // 0x15162420: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15162424: b           L_15162500
    // 0x15162428: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15162500;
    // 0x15162428: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1516242C:
    // 0x1516242C: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x15162430: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15162434: addiu       $t9, $t9, 0x670C
    ctx->r25 = ADD32(ctx->r25, 0X670C);
    // 0x15162438: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x1516243C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x15162440: addiu       $t8, $sp, 0x30
    ctx->r24 = ADD32(ctx->r29, 0X30);
    // 0x15162444: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x15162448: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x1516244C: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x15162450: addiu       $t4, $t4, 0x6730
    ctx->r12 = ADD32(ctx->r12, 0X6730);
    // 0x15162454: addu        $t5, $t7, $t4
    ctx->r13 = ADD32(ctx->r15, ctx->r12);
    // 0x15162458: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x1516245C: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x15162460: addiu       $t3, $sp, 0x3C
    ctx->r11 = ADD32(ctx->r29, 0X3C);
    // 0x15162464: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15162468: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x1516246C: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x15162470: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x15162474: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x15162478: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x1516247C: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x15162480: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x15162484: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x15162488: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x1516248C: lbu         $t9, 0x57($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X57);
    // 0x15162490: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15162494: lbu         $t8, 0x5F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5F);
    // 0x15162498: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x1516249C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x151624A0: lwc1        $f6, 0x6754($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6754);
    // 0x151624A4: lb          $t0, 0x63($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X63);
    // 0x151624A8: lh          $t2, 0x66($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X66);
    // 0x151624AC: lbu         $t4, 0x5B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X5B);
    // 0x151624B0: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x151624B4: lbu         $a3, 0x6B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X6B);
    // 0x151624B8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x151624BC: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x151624C0: sb          $t8, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r24;
    // 0x151624C4: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x151624C8: sb          $t0, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r8;
    // 0x151624CC: sh          $t2, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r10;
    // 0x151624D0: sb          $t4, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r12;
    // 0x151624D4: jal         0x1516037C
    // 0x151624D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_1516037C(rdram, ctx);
        goto after_0;
    // 0x151624D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x151624DC: beq         $v0, $zero, L_151624FC
    if (ctx->r2 == 0) {
        // 0x151624E0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151624FC;
    }
    // 0x151624E0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151624E4: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x151624E8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x151624EC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x151624F0: jal         0x10022EC0
    // 0x151624F4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151624F4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x151624F8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_151624FC:
    // 0x151624FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15162500:
    // 0x15162500: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15162504: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x15162508: jr          $ra
    // 0x1516250C: nop

    return;
    return;
    // 0x1516250C: nop

;}
RECOMP_FUNC void func_15074F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15074F30: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15074F34: lbu         $t6, 0x109($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X109);
    // 0x15074F38: sw          $zero, 0x218($a0)
    MEM_W(0X218, ctx->r4) = 0;
    // 0x15074F3C: sb          $t6, 0x232($a0)
    MEM_B(0X232, ctx->r4) = ctx->r14;
    // 0x15074F40: jr          $ra
    // 0x15074F44: nop

    return;
    return;
    // 0x15074F44: nop

;}
RECOMP_FUNC void func_15169824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15169824: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15169828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516982C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15169830: jal         0x15168A9C
    // 0x15169834: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15168A9C(rdram, ctx);
        goto after_0;
    // 0x15169834: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x15169838: jal         0x10004074
    // 0x1516983C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_10004074(rdram, ctx);
        goto after_1;
    // 0x1516983C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x15169840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15169844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15169848: jr          $ra
    // 0x1516984C: nop

    return;
    return;
    // 0x1516984C: nop

;}
RECOMP_FUNC void func_15077DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077DA0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15077DA4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15077DA8: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15077DAC: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15077DB0: sb          $t6, 0x21E($t7)
    MEM_B(0X21E, ctx->r15) = ctx->r14;
    // 0x15077DB4: jr          $ra
    // 0x15077DB8: nop

    return;
    return;
    // 0x15077DB8: nop

;}
RECOMP_FUNC void func_15044A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15044A28: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15044A2C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x15044A30: lui         $s7, 0x800D
    ctx->r23 = S32(0X800D << 16);
    // 0x15044A34: addiu       $s7, $s7, -0x4200
    ctx->r23 = ADD32(ctx->r23, -0X4200);
    // 0x15044A38: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15044A3C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x15044A40: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x15044A44: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x15044A48: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x15044A4C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x15044A50: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15044A54: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15044A58: lw          $s0, 0x0($s7)
    ctx->r16 = MEM_W(ctx->r23, 0X0);
    // 0x15044A5C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15044A60: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x15044A64: beq         $s0, $zero, L_15044B4C
    if (ctx->r16 == 0) {
        // 0x15044A68: lui         $s5, 0x8008
        ctx->r21 = S32(0X8008 << 16);
            goto L_15044B4C;
    }
    // 0x15044A68: lui         $s5, 0x8008
    ctx->r21 = S32(0X8008 << 16);
    // 0x15044A6C: lui         $s4, 0x8008
    ctx->r20 = S32(0X8008 << 16);
    // 0x15044A70: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x15044A74: addiu       $s3, $s3, -0x161C
    ctx->r19 = ADD32(ctx->r19, -0X161C);
    // 0x15044A78: addiu       $s4, $s4, 0x5E80
    ctx->r20 = ADD32(ctx->r20, 0X5E80);
    // 0x15044A7C: addiu       $s5, $s5, 0x5E8C
    ctx->r21 = ADD32(ctx->r21, 0X5E8C);
L_15044A80:
    // 0x15044A80: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x15044A84: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x15044A88: lw          $s2, 0x0($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X0);
    // 0x15044A8C: bne         $v1, $zero, L_15044AD0
    if (ctx->r3 != 0) {
        // 0x15044A90: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_15044AD0;
    }
    // 0x15044A90: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15044A94: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x15044A98: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x15044A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15044AA0: jalr        $t9
    // 0x15044AA4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15044AA4: nop

    after_0:
    // 0x15044AA8: beql        $v0, $zero, L_15044AEC
    if (ctx->r2 == 0) {
        // 0x15044AAC: lh          $v0, 0x4($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X4);
            goto L_15044AEC;
    }
    goto skip_0;
    // 0x15044AAC: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    skip_0:
    // 0x15044AB0: lbu         $t8, 0xD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD);
    // 0x15044AB4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x15044AB8: addu        $t1, $s5, $t0
    ctx->r9 = ADD32(ctx->r21, ctx->r8);
    // 0x15044ABC: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x15044AC0: jalr        $t9
    // 0x15044AC4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x15044AC4: nop

    after_1:
    // 0x15044AC8: b           L_15044AEC
    // 0x15044ACC: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
        goto L_15044AEC;
    // 0x15044ACC: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
L_15044AD0:
    // 0x15044AD0: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x15044AD4: subu        $v0, $v1, $t2
    ctx->r2 = SUB32(ctx->r3, ctx->r10);
    // 0x15044AD8: bgezl       $v0, L_15044AE8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15044ADC: sb          $v0, 0xE($s0)
        MEM_B(0XE, ctx->r16) = ctx->r2;
            goto L_15044AE8;
    }
    goto skip_1;
    // 0x15044ADC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    skip_1:
    // 0x15044AE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15044AE4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_15044AE8:
    // 0x15044AE8: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
L_15044AEC:
    // 0x15044AEC: beql        $v0, $s6, L_15044B44
    if (ctx->r2 == ctx->r22) {
        // 0x15044AF0: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_15044B44;
    }
    goto skip_2;
    // 0x15044AF0: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    skip_2:
    // 0x15044AF4: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x15044AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15044AFC: subu        $v0, $v0, $t3
    ctx->r2 = SUB32(ctx->r2, ctx->r11);
    // 0x15044B00: bgtzl       $v0, L_15044B38
    if (SIGNED(ctx->r2) > 0) {
        // 0x15044B04: sh          $v0, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r2;
            goto L_15044B38;
    }
    goto skip_3;
    // 0x15044B04: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    skip_3:
    // 0x15044B08: bnel        $s1, $zero, L_15044B20
    if (ctx->r17 != 0) {
        // 0x15044B0C: lw          $t5, 0x0($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X0);
            goto L_15044B20;
    }
    goto skip_4;
    // 0x15044B0C: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    skip_4:
    // 0x15044B10: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x15044B14: b           L_15044B24
    // 0x15044B18: sw          $t4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r12;
        goto L_15044B24;
    // 0x15044B18: sw          $t4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r12;
    // 0x15044B1C: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
L_15044B20:
    // 0x15044B20: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
L_15044B24:
    // 0x15044B24: jal         0x100043B4
    // 0x15044B28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_100043B4(rdram, ctx);
        goto after_2;
    // 0x15044B28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x15044B2C: b           L_15044B44
    // 0x15044B30: nop

        goto L_15044B44;
    // 0x15044B30: nop

    // 0x15044B34: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_15044B38:
    // 0x15044B38: b           L_15044B44
    // 0x15044B3C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
        goto L_15044B44;
    // 0x15044B3C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x15044B40: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_15044B44:
    // 0x15044B44: bne         $s2, $zero, L_15044A80
    if (ctx->r18 != 0) {
        // 0x15044B48: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_15044A80;
    }
    // 0x15044B48: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_15044B4C:
    // 0x15044B4C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15044B50: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15044B54: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15044B58: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x15044B5C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x15044B60: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x15044B64: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x15044B68: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x15044B6C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x15044B70: jr          $ra
    // 0x15044B74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x15044B74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_151012D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151012D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151012DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151012E0: lw          $v0, 0x170($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X170);
    // 0x151012E4: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x151012E8: jal         0x151411A4
    // 0x151012EC: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    func_151411A4(rdram, ctx);
        goto after_0;
    // 0x151012EC: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    after_0:
    // 0x151012F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151012F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151012F8: jr          $ra
    // 0x151012FC: nop

    return;
    return;
    // 0x151012FC: nop

;}
RECOMP_FUNC void func_1508C194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508C194: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1508C198: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1508C19C: jr          $ra
    // 0x1508C1A0: nop

    return;
    return;
    // 0x1508C1A0: nop

;}
RECOMP_FUNC void func_1519C26C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519C26C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x1519C270: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1519C274: addiu       $a1, $a1, -0x165C
    ctx->r5 = ADD32(ctx->r5, -0X165C);
    // 0x1519C278: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x1519C27C: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x1519C280: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x1519C284: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1519C288: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x1519C28C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1519C290: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x1519C294: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
    // 0x1519C298: mul.s       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1519C29C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x1519C2A0: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x1519C2A4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1519C2A8: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1519C2AC: lw          $at, 0x11C($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X11C);
    // 0x1519C2B0: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x1519C2B4: lw          $t3, 0x120($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X120);
    // 0x1519C2B8: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x1519C2BC: lw          $at, 0x124($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X124);
    // 0x1519C2C0: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x1519C2C4: lwc1        $f12, 0x128($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X128);
    // 0x1519C2C8: lwc1        $f4, 0x114($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X114);
    // 0x1519C2CC: lwc1        $f10, 0x120($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X120);
    // 0x1519C2D0: mul.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1519C2D4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1519C2D8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1519C2DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1519C2E0: swc1        $f8, 0x114($a0)
    MEM_W(0X114, ctx->r4) = ctx->f8.u32l;
    // 0x1519C2E4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1519C2E8: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x1519C2EC: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1519C2F0: swc1        $f8, 0x120($a0)
    MEM_W(0X120, ctx->r4) = ctx->f8.u32l;
    // 0x1519C2F4: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x1519C2F8: blez        $v1, L_1519C358
    if (SIGNED(ctx->r3) <= 0) {
        // 0x1519C2FC: nop
    
            goto L_1519C358;
    }
    // 0x1519C2FC: nop

    // 0x1519C300: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1519C304: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
L_1519C308:
    // 0x1519C308: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1519C30C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1519C310: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x1519C314: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1519C318: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1519C31C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1519C320: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1519C324: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x1519C328: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1519C32C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1519C330: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x1519C334: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1519C338: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1519C33C: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x1519C340: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1519C344: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x1519C348: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1519C34C: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x1519C350: bgtz        $v1, L_1519C308
    if (SIGNED(ctx->r3) > 0) {
        // 0x1519C354: swc1        $f8, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
            goto L_1519C308;
    }
    // 0x1519C354: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
L_1519C358:
    // 0x1519C358: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1519C35C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1519C360: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1519C364: lwc1        $f12, -0x1658($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1658);
    // 0x1519C368: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1519C36C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1519C370: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1519C374: mul.s       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1519C378: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1519C37C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1519C380: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1519C384: mul.s       $f14, $f6, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1519C388: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1519C38C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1519C390: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1519C394: mul.s       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1519C398: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1519C39C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1519C3A0: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1519C3A4: mul.s       $f18, $f6, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1519C3A8: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1519C3AC: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1519C3B0: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1519C3B4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x1519C3B8: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1519C3BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1519C3C0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1519C3C4: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1519C3C8: mul.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x1519C3CC: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x1519C3D0: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1519C3D4: nop

    // 0x1519C3D8: mul.s       $f4, $f20, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x1519C3DC: nop

    // 0x1519C3E0: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519C3E4: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x1519C3E8: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1519C3EC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1519C3F0: swc1        $f8, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f8.u32l;
    // 0x1519C3F4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1519C3F8: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1519C3FC: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1519C400: nop

    // 0x1519C404: mul.s       $f8, $f20, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x1519C408: nop

    // 0x1519C40C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1519C410: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1519C414: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1519C418: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1519C41C: swc1        $f6, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f6.u32l;
    // 0x1519C420: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1519C424: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1519C428: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x1519C42C: nop

    // 0x1519C430: mul.s       $f6, $f20, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x1519C434: nop

    // 0x1519C438: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1519C43C: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1519C440: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1519C444: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1519C448: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x1519C44C: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1519C450: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1519C454: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1519C458: nop

    // 0x1519C45C: mul.s       $f4, $f20, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x1519C460: nop

    // 0x1519C464: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519C468: lwc1        $f4, 0x40($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X40);
    // 0x1519C46C: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1519C470: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1519C474: swc1        $f8, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f8.u32l;
    // 0x1519C478: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1519C47C: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1519C480: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1519C484: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1519C488: nop

    // 0x1519C48C: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x1519C490: nop

    // 0x1519C494: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1519C498: lwc1        $f10, 0x44($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X44);
    // 0x1519C49C: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1519C4A0: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1519C4A4: swc1        $f6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f6.u32l;
    // 0x1519C4A8: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1519C4AC: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1519C4B0: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1519C4B4: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1519C4B8: nop

    // 0x1519C4BC: mul.s       $f4, $f20, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x1519C4C0: nop

    // 0x1519C4C4: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519C4C8: lwc1        $f4, 0x48($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X48);
    // 0x1519C4CC: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1519C4D0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1519C4D4: swc1        $f8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f8.u32l;
    // 0x1519C4D8: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x1519C4DC: jr          $ra
    // 0x1519C4E0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    return;
    // 0x1519C4E0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}

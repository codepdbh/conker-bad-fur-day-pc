#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_151596BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151596BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151596C0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x151596C4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151596C8: addiu       $v0, $v0, -0x161C
    ctx->r2 = ADD32(ctx->r2, -0X161C);
    // 0x151596CC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151596D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151596D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151596D8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x151596DC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151596E0: sb          $t6, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r14;
    // 0x151596E4: lb          $t7, 0xAE($s1)
    ctx->r15 = MEM_B(ctx->r17, 0XAE);
    // 0x151596E8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x151596EC: lbu         $t0, 0xAC($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0XAC);
    // 0x151596F0: lb          $t2, 0xAF($s1)
    ctx->r10 = MEM_B(ctx->r17, 0XAF);
    // 0x151596F4: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151596F8: lbu         $t5, 0xAD($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0XAD);
    // 0x151596FC: mflo        $t9
    ctx->r25 = lo;
    // 0x15159700: addu        $a0, $t0, $t9
    ctx->r4 = ADD32(ctx->r8, ctx->r25);
    // 0x15159704: sb          $a0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r4;
    // 0x15159708: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x1515970C: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x15159710: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x15159714: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15159718: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x1515971C: mflo        $t4
    ctx->r12 = lo;
    // 0x15159720: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x15159724: jal         0x151423D8
    // 0x15159728: sb          $t6, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r14;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x15159728: sb          $t6, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r14;
    after_0:
    // 0x1515972C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x15159730: addiu       $s0, $s1, 0xA8
    ctx->r16 = ADD32(ctx->r17, 0XA8);
    // 0x15159734: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x15159738: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1515973C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x15159740: jal         0x151423D8
    // 0x15159744: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x15159744: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x15159748: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1515974C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15159750: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15159754: lwc1        $f2, 0x5C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x15159758: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1515975C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15159760: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15159764: swc1        $f16, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f16.u32l;
    // 0x15159768: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1515976C: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15159770: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x15159774: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15159778: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x1515977C: bc1f        L_15159844
    if (!c1cs) {
        // 0x15159780: swc1        $f10, 0x3C($s1)
        MEM_W(0X3C, ctx->r17) = ctx->f10.u32l;
            goto L_15159844;
    }
    // 0x15159780: swc1        $f10, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f10.u32l;
    // 0x15159784: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15159788: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1515978C: nop

    // 0x15159790: bc1fl       L_151597A4
    if (!c1cs) {
        // 0x15159794: lwc1        $f16, 0x14($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
            goto L_151597A4;
    }
    goto skip_0;
    // 0x15159794: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    skip_0:
    // 0x15159798: swc1        $f0, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->f0.u32l;
    // 0x1515979C: lwc1        $f2, 0x5C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x151597A0: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
L_151597A4:
    // 0x151597A4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151597A8: addiu       $v0, $v0, -0x161C
    ctx->r2 = ADD32(ctx->r2, -0X161C);
    // 0x151597AC: mul.s       $f4, $f2, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x151597B0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x151597B4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x151597B8: lbu         $t0, 0x1A($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1A);
    // 0x151597BC: lbu         $t2, 0x18($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X18);
    // 0x151597C0: lbu         $t5, 0x1B($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1B);
    // 0x151597C4: multu       $t0, $t9
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151597C8: lbu         $t7, 0x19($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X19);
    // 0x151597CC: mflo        $t1
    ctx->r9 = lo;
    // 0x151597D0: addu        $a0, $t2, $t1
    ctx->r4 = ADD32(ctx->r10, ctx->r9);
    // 0x151597D4: sb          $a0, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r4;
    // 0x151597D8: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x151597DC: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151597E0: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x151597E4: multu       $t5, $t4
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151597E8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x151597EC: mflo        $t6
    ctx->r14 = lo;
    // 0x151597F0: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x151597F4: jal         0x151423D8
    // 0x151597F8: sb          $t8, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r24;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x151597F8: sb          $t8, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r24;
    after_2:
    // 0x151597FC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x15159800: lbu         $a0, 0x19($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X19);
    // 0x15159804: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x15159808: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x1515980C: jal         0x151423D8
    // 0x15159810: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x15159810: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_3:
    // 0x15159814: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15159818: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1515981C: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15159820: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x15159824: nop

    // 0x15159828: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1515982C: swc1        $f8, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f8.u32l;
    // 0x15159830: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15159834: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15159838: nop

    // 0x1515983C: mul.s       $f18, $f4, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15159840: swc1        $f18, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->f18.u32l;
L_15159844:
    // 0x15159844: lw          $t2, 0x68($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X68);
    // 0x15159848: andi        $t1, $t2, 0x2000
    ctx->r9 = ctx->r10 & 0X2000;
    // 0x1515984C: beql        $t1, $zero, L_1515987C
    if (ctx->r9 == 0) {
        // 0x15159850: lbu         $v0, 0x2B($sp)
        ctx->r2 = MEM_BU(ctx->r29, 0X2B);
            goto L_1515987C;
    }
    goto skip_1;
    // 0x15159850: lbu         $v0, 0x2B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2B);
    skip_1:
    // 0x15159854: lwc1        $f10, 0x50($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X50);
    // 0x15159858: lwc1        $f8, 0x44($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X44);
    // 0x1515985C: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x15159860: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15159864: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x15159868: nop

    // 0x1515986C: bc1fl       L_1515987C
    if (!c1cs) {
        // 0x15159870: lbu         $v0, 0x2B($sp)
        ctx->r2 = MEM_BU(ctx->r29, 0X2B);
            goto L_1515987C;
    }
    goto skip_2;
    // 0x15159870: lbu         $v0, 0x2B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2B);
    skip_2:
    // 0x15159874: sb          $zero, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = 0;
    // 0x15159878: lbu         $v0, 0x2B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2B);
L_1515987C:
    // 0x1515987C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15159880: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15159884: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15159888: jr          $ra
    // 0x1515988C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x1515988C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_150B67E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B67E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150B67E4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x150B67E8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150B67EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150B67F0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x150B67F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150B67F8: addiu       $a1, $zero, 0x503C
    ctx->r5 = ADD32(0, 0X503C);
    // 0x150B67FC: jal         0x1509BE40
    // 0x150B6800: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    func_1509BE40(rdram, ctx);
        goto after_0;
    // 0x150B6800: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_0:
    // 0x150B6804: bne         $v0, $zero, L_150B6880
    if (ctx->r2 != 0) {
        // 0x150B6808: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_150B6880;
    }
    // 0x150B6808: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150B680C: lw          $a1, 0x2C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X2C);
    // 0x150B6810: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B6814: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150B6818: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B681C: jal         0x15123934
    // 0x150B6820: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_1;
    // 0x150B6820: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x150B6824: beq         $v0, $zero, L_150B685C
    if (ctx->r2 == 0) {
        // 0x150B6828: lui         $at, 0x2
        ctx->r1 = S32(0X2 << 16);
            goto L_150B685C;
    }
    // 0x150B6828: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x150B682C: lw          $t6, 0x84($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X84);
    // 0x150B6830: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x150B6834: sh          $t0, 0x1B4($s1)
    MEM_H(0X1B4, ctx->r17) = ctx->r8;
    // 0x150B6838: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x150B683C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x150B6840: sw          $t7, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r15;
    // 0x150B6844: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x150B6848: sw          $t9, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r25;
    // 0x150B684C: jal         0x15124B18
    // 0x150B6850: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15124B18(rdram, ctx);
        goto after_2;
    // 0x150B6850: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x150B6854: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150B6858: sb          $t1, 0x23C($s1)
    MEM_B(0X23C, ctx->r17) = ctx->r9;
L_150B685C:
    // 0x150B685C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B6860: lwc1        $f4, -0x310($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X310);
    // 0x150B6864: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x150B6868: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B686C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B6870: swc1        $f4, 0x374($s1)
    MEM_W(0X374, ctx->r17) = ctx->f4.u32l;
    // 0x150B6874: swc1        $f6, 0x348($s1)
    MEM_W(0X348, ctx->r17) = ctx->f6.u32l;
    // 0x150B6878: b           L_150B6A68
    // 0x150B687C: swc1        $f8, 0x34C($s1)
    MEM_W(0X34C, ctx->r17) = ctx->f8.u32l;
        goto L_150B6A68;
    // 0x150B687C: swc1        $f8, 0x34C($s1)
    MEM_W(0X34C, ctx->r17) = ctx->f8.u32l;
L_150B6880:
    // 0x150B6880: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    // 0x150B6884: jal         0x1509BFB0
    // 0x150B6888: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_3;
    // 0x150B6888: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x150B688C: lw          $t2, 0x2C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X2C);
    // 0x150B6890: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150B6894: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150B6898: bnel        $t2, $at, L_150B68C0
    if (ctx->r10 != ctx->r1) {
        // 0x150B689C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150B68C0;
    }
    goto skip_0;
    // 0x150B689C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x150B68A0: jal         0x151239CC
    // 0x150B68A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151239CC(rdram, ctx);
        goto after_4;
    // 0x150B68A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x150B68A8: beq         $v0, $zero, L_150B68BC
    if (ctx->r2 == 0) {
        // 0x150B68AC: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_150B68BC;
    }
    // 0x150B68AC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150B68B0: sh          $t3, 0x1B4($s1)
    MEM_H(0X1B4, ctx->r17) = ctx->r11;
    // 0x150B68B4: jal         0x15124B18
    // 0x150B68B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15124B18(rdram, ctx);
        goto after_5;
    // 0x150B68B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
L_150B68BC:
    // 0x150B68BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_150B68C0:
    // 0x150B68C0: addiu       $a1, $zero, 0x4024
    ctx->r5 = ADD32(0, 0X4024);
    // 0x150B68C4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150B68C8: jal         0x1509BE40
    // 0x150B68CC: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_6;
    // 0x150B68CC: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_6:
    // 0x150B68D0: beq         $v0, $zero, L_150B68E8
    if (ctx->r2 == 0) {
        // 0x150B68D4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150B68E8;
    }
    // 0x150B68D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150B68D8: ori         $t4, $zero, 0x9003
    ctx->r12 = 0 | 0X9003;
    // 0x150B68DC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150B68E0: b           L_150B6958
    // 0x150B68E4: sw          $t4, -0x78F0($at)
    MEM_W(-0X78F0, ctx->r1) = ctx->r12;
        goto L_150B6958;
    // 0x150B68E4: sw          $t4, -0x78F0($at)
    MEM_W(-0X78F0, ctx->r1) = ctx->r12;
L_150B68E8:
    // 0x150B68E8: addiu       $a1, $zero, 0x4025
    ctx->r5 = ADD32(0, 0X4025);
    // 0x150B68EC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150B68F0: jal         0x1509BE40
    // 0x150B68F4: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_7;
    // 0x150B68F4: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_7:
    // 0x150B68F8: beq         $v0, $zero, L_150B6910
    if (ctx->r2 == 0) {
        // 0x150B68FC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150B6910;
    }
    // 0x150B68FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150B6900: ori         $t5, $zero, 0x9009
    ctx->r13 = 0 | 0X9009;
    // 0x150B6904: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150B6908: b           L_150B6958
    // 0x150B690C: sw          $t5, -0x78F0($at)
    MEM_W(-0X78F0, ctx->r1) = ctx->r13;
        goto L_150B6958;
    // 0x150B690C: sw          $t5, -0x78F0($at)
    MEM_W(-0X78F0, ctx->r1) = ctx->r13;
L_150B6910:
    // 0x150B6910: addiu       $a1, $zero, 0x4026
    ctx->r5 = ADD32(0, 0X4026);
    // 0x150B6914: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150B6918: jal         0x1509BE40
    // 0x150B691C: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_8;
    // 0x150B691C: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_8:
    // 0x150B6920: beq         $v0, $zero, L_150B6938
    if (ctx->r2 == 0) {
        // 0x150B6924: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150B6938;
    }
    // 0x150B6924: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150B6928: ori         $t6, $zero, 0x900A
    ctx->r14 = 0 | 0X900A;
    // 0x150B692C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150B6930: b           L_150B6958
    // 0x150B6934: sw          $t6, -0x78F0($at)
    MEM_W(-0X78F0, ctx->r1) = ctx->r14;
        goto L_150B6958;
    // 0x150B6934: sw          $t6, -0x78F0($at)
    MEM_W(-0X78F0, ctx->r1) = ctx->r14;
L_150B6938:
    // 0x150B6938: addiu       $a1, $zero, 0x4027
    ctx->r5 = ADD32(0, 0X4027);
    // 0x150B693C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150B6940: jal         0x1509BE40
    // 0x150B6944: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_9;
    // 0x150B6944: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_9:
    // 0x150B6948: beq         $v0, $zero, L_150B6958
    if (ctx->r2 == 0) {
        // 0x150B694C: ori         $t7, $zero, 0x900B
        ctx->r15 = 0 | 0X900B;
            goto L_150B6958;
    }
    // 0x150B694C: ori         $t7, $zero, 0x900B
    ctx->r15 = 0 | 0X900B;
    // 0x150B6950: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150B6954: sw          $t7, -0x78F0($at)
    MEM_W(-0X78F0, ctx->r1) = ctx->r15;
L_150B6958:
    // 0x150B6958: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x150B695C: lw          $t8, -0x78F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X78F0);
    // 0x150B6960: addiu       $at, $zero, 0x3E7
    ctx->r1 = ADD32(0, 0X3E7);
    // 0x150B6964: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x150B6968: beq         $t8, $at, L_150B6990
    if (ctx->r24 == ctx->r1) {
        // 0x150B696C: addiu       $a1, $zero, 0x4000
        ctx->r5 = ADD32(0, 0X4000);
            goto L_150B6990;
    }
    // 0x150B696C: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    // 0x150B6970: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x150B6974: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150B6978: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x150B697C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x150B6980: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B6984: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150B6988: jal         0x1509BFB0
    // 0x150B698C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_1509BFB0(rdram, ctx);
        goto after_10;
    // 0x150B698C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_10:
L_150B6990:
    // 0x150B6990: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150B6994: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_150B6998:
    // 0x150B6998: addiu       $a1, $s0, 0x400C
    ctx->r5 = ADD32(ctx->r16, 0X400C);
    // 0x150B699C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150B69A0: jal         0x1509BE40
    // 0x150B69A4: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_11;
    // 0x150B69A4: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_11:
    // 0x150B69A8: bne         $v0, $zero, L_150B69C4
    if (ctx->r2 != 0) {
        // 0x150B69AC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150B69C4;
    }
    // 0x150B69AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150B69B0: addiu       $a1, $zero, 0x4014
    ctx->r5 = ADD32(0, 0X4014);
    // 0x150B69B4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150B69B8: jal         0x1509BE40
    // 0x150B69BC: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_12;
    // 0x150B69BC: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_12:
    // 0x150B69C0: beq         $v0, $zero, L_150B69D8
    if (ctx->r2 == 0) {
        // 0x150B69C4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150B69D8;
    }
L_150B69C4:
    // 0x150B69C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150B69C8: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x150B69CC: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    // 0x150B69D0: jal         0x1509BFB0
    // 0x150B69D4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_1509BFB0(rdram, ctx);
        goto after_13;
    // 0x150B69D4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_13:
L_150B69D8:
    // 0x150B69D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150B69DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150B69E0: bnel        $s0, $at, L_150B6998
    if (ctx->r16 != ctx->r1) {
        // 0x150B69E4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150B6998;
    }
    goto skip_1;
    // 0x150B69E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
    // 0x150B69E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150B69EC: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    // 0x150B69F0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150B69F4: jal         0x1509BE40
    // 0x150B69F8: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_14;
    // 0x150B69F8: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_14:
    // 0x150B69FC: beq         $v0, $zero, L_150B6A3C
    if (ctx->r2 == 0) {
        // 0x150B6A00: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_150B6A3C;
    }
    // 0x150B6A00: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x150B6A04: lui         $t0, 0x8
    ctx->r8 = S32(0X8 << 16);
    // 0x150B6A08: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150B6A0C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x150B6A10: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x150B6A14: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150B6A18: jal         0x1509BFB0
    // 0x150B6A1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_1509BFB0(rdram, ctx);
        goto after_15;
    // 0x150B6A1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_15:
    // 0x150B6A20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150B6A24: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x150B6A28: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x150B6A2C: jal         0x1509BFB0
    // 0x150B6A30: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_1509BFB0(rdram, ctx);
        goto after_16;
    // 0x150B6A30: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_16:
    // 0x150B6A34: b           L_150B6A6C
    // 0x150B6A38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_150B6A6C;
    // 0x150B6A38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_150B6A3C:
    // 0x150B6A3C: lui         $t1, 0x8
    ctx->r9 = S32(0X8 << 16);
    // 0x150B6A40: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150B6A44: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x150B6A48: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150B6A4C: jal         0x1509BFB0
    // 0x150B6A50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_17;
    // 0x150B6A50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
    // 0x150B6A54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150B6A58: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x150B6A5C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x150B6A60: jal         0x1509BFB0
    // 0x150B6A64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_18;
    // 0x150B6A64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
L_150B6A68:
    // 0x150B6A68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_150B6A6C:
    // 0x150B6A6C: addiu       $a1, $zero, 0x200A
    ctx->r5 = ADD32(0, 0X200A);
    // 0x150B6A70: jal         0x1509BE40
    // 0x150B6A74: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    func_1509BE40(rdram, ctx);
        goto after_19;
    // 0x150B6A74: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    after_19:
    // 0x150B6A78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150B6A7C: ori         $a1, $v0, 0x2000
    ctx->r5 = ctx->r2 | 0X2000;
    // 0x150B6A80: jal         0x1509BE40
    // 0x150B6A84: addiu       $a2, $zero, 0xBC
    ctx->r6 = ADD32(0, 0XBC);
    func_1509BE40(rdram, ctx);
        goto after_20;
    // 0x150B6A84: addiu       $a2, $zero, 0xBC
    ctx->r6 = ADD32(0, 0XBC);
    after_20:
    // 0x150B6A88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150B6A8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150B6A90: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x150B6A94: jal         0x1509BE40
    // 0x150B6A98: addiu       $a2, $zero, 0xBB
    ctx->r6 = ADD32(0, 0XBB);
    func_1509BE40(rdram, ctx);
        goto after_21;
    // 0x150B6A98: addiu       $a2, $zero, 0xBB
    ctx->r6 = ADD32(0, 0XBB);
    after_21:
    // 0x150B6A9C: beq         $s0, $zero, L_150B6ABC
    if (ctx->r16 == 0) {
        // 0x150B6AA0: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_150B6ABC;
    }
    // 0x150B6AA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150B6AA4: beql        $v0, $at, L_150B6AC0
    if (ctx->r2 == ctx->r1) {
        // 0x150B6AA8: lw          $t4, 0x5F0($s1)
        ctx->r12 = MEM_W(ctx->r17, 0X5F0);
            goto L_150B6AC0;
    }
    goto skip_2;
    // 0x150B6AA8: lw          $t4, 0x5F0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X5F0);
    skip_2:
    // 0x150B6AAC: lw          $t2, 0x5F0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X5F0);
    // 0x150B6AB0: ori         $t3, $t2, 0x100
    ctx->r11 = ctx->r10 | 0X100;
    // 0x150B6AB4: b           L_150B6ACC
    // 0x150B6AB8: sw          $t3, 0x5F0($s1)
    MEM_W(0X5F0, ctx->r17) = ctx->r11;
        goto L_150B6ACC;
    // 0x150B6AB8: sw          $t3, 0x5F0($s1)
    MEM_W(0X5F0, ctx->r17) = ctx->r11;
L_150B6ABC:
    // 0x150B6ABC: lw          $t4, 0x5F0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X5F0);
L_150B6AC0:
    // 0x150B6AC0: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x150B6AC4: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x150B6AC8: sw          $t5, 0x5F0($s1)
    MEM_W(0X5F0, ctx->r17) = ctx->r13;
L_150B6ACC:
    // 0x150B6ACC: beq         $s0, $zero, L_150B6B78
    if (ctx->r16 == 0) {
        // 0x150B6AD0: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_150B6B78;
    }
    // 0x150B6AD0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150B6AD4: beq         $v0, $at, L_150B6B78
    if (ctx->r2 == ctx->r1) {
        // 0x150B6AD8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_150B6B78;
    }
    // 0x150B6AD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150B6ADC: lw          $a1, 0x2C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X2C);
    // 0x150B6AE0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150B6AE4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150B6AE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B6AEC: jal         0x15123934
    // 0x150B6AF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_22;
    // 0x150B6AF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_22:
    // 0x150B6AF4: beq         $v0, $zero, L_150B6B2C
    if (ctx->r2 == 0) {
        // 0x150B6AF8: lui         $at, 0x10
        ctx->r1 = S32(0X10 << 16);
            goto L_150B6B2C;
    }
    // 0x150B6AF8: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x150B6AFC: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x150B6B00: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150B6B04: lw          $t9, 0x3D0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X3D0);
    // 0x150B6B08: ori         $at, $at, 0x2
    ctx->r1 = ctx->r1 | 0X2;
    // 0x150B6B0C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x150B6B10: sw          $t8, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r24;
    // 0x150B6B14: swc1        $f10, 0x674($s1)
    MEM_W(0X674, ctx->r17) = ctx->f10.u32l;
    // 0x150B6B18: lbu         $a1, 0x65($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X65);
    // 0x150B6B1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150B6B20: jal         0x151254F4
    // 0x150B6B24: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_151254F4(rdram, ctx);
        goto after_23;
    // 0x150B6B24: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_23:
    // 0x150B6B28: sw          $zero, 0x134($s1)
    MEM_W(0X134, ctx->r17) = 0;
L_150B6B2C:
    // 0x150B6B2C: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x150B6B30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B6B34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B6B38: lwc1        $f16, -0x30C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X30C);
    // 0x150B6B3C: lw          $t0, 0x36C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X36C);
    // 0x150B6B40: swc1        $f0, 0x34C($s1)
    MEM_W(0X34C, ctx->r17) = ctx->f0.u32l;
    // 0x150B6B44: swc1        $f0, 0x348($s1)
    MEM_W(0X348, ctx->r17) = ctx->f0.u32l;
    // 0x150B6B48: swc1        $f16, 0x374($s1)
    MEM_W(0X374, ctx->r17) = ctx->f16.u32l;
    // 0x150B6B4C: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x150B6B50: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x150B6B54: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x150B6B58: beql        $t2, $zero, L_150B6B70
    if (ctx->r10 == 0) {
        // 0x150B6B5C: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_150B6B70;
    }
    goto skip_3;
    // 0x150B6B5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_3:
    // 0x150B6B60: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150B6B64: b           L_150B6BA4
    // 0x150B6B68: swc1        $f18, 0x190($s1)
    MEM_W(0X190, ctx->r17) = ctx->f18.u32l;
        goto L_150B6BA4;
    // 0x150B6B68: swc1        $f18, 0x190($s1)
    MEM_W(0X190, ctx->r17) = ctx->f18.u32l;
    // 0x150B6B6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_150B6B70:
    // 0x150B6B70: b           L_150B6BA4
    // 0x150B6B74: swc1        $f4, 0x190($s1)
    MEM_W(0X190, ctx->r17) = ctx->f4.u32l;
        goto L_150B6BA4;
    // 0x150B6B74: swc1        $f4, 0x190($s1)
    MEM_W(0X190, ctx->r17) = ctx->f4.u32l;
L_150B6B78:
    // 0x150B6B78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150B6B7C: jal         0x151239CC
    // 0x150B6B80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_151239CC(rdram, ctx);
        goto after_24;
    // 0x150B6B80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_24:
    // 0x150B6B84: beq         $v0, $zero, L_150B6BA4
    if (ctx->r2 == 0) {
        // 0x150B6B88: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_150B6BA4;
    }
    // 0x150B6B88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150B6B8C: jal         0x151254F4
    // 0x150B6B90: lbu         $a1, 0x23D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X23D);
    func_151254F4(rdram, ctx);
        goto after_25;
    // 0x150B6B90: lbu         $a1, 0x23D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X23D);
    after_25:
    // 0x150B6B94: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150B6B98: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150B6B9C: swc1        $f6, 0x674($s1)
    MEM_W(0X674, ctx->r17) = ctx->f6.u32l;
    // 0x150B6BA0: swc1        $f8, 0x190($s1)
    MEM_W(0X190, ctx->r17) = ctx->f8.u32l;
L_150B6BA4:
    // 0x150B6BA4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150B6BA8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x150B6BAC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x150B6BB0: jr          $ra
    // 0x150B6BB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x150B6BB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1514EBA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514EBA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1514EBA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1514EBAC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1514EBB0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1514EBB4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1514EBB8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x1514EBBC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1514EBC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1514EBC4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1514EBC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1514EBCC: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x1514EBD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1514EBD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1514EBD8: jal         0x15167A68
    // 0x1514EBDC: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x1514EBDC: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    after_0:
    // 0x1514EBE0: bne         $v0, $zero, L_1514EBF0
    if (ctx->r2 != 0) {
        // 0x1514EBE4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1514EBF0;
    }
    // 0x1514EBE4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1514EBE8: b           L_1514EC0C
    // 0x1514EBEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1514EC0C;
    // 0x1514EBEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1514EBF0:
    // 0x1514EBF0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1514EBF4: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x1514EBF8: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
    // 0x1514EBFC: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
    // 0x1514EC00: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x1514EC04: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1514EC08: sh          $t9, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r25;
L_1514EC0C:
    // 0x1514EC0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1514EC10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1514EC14: jr          $ra
    // 0x1514EC18: nop

    return;
    return;
    // 0x1514EC18: nop

;}
RECOMP_FUNC void func_150DBC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DBC60: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150DBC64: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150DBC68: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150DBC6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150DBC70: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150DBC74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBC78: lwc1        $f4, 0xC24($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XC24);
    // 0x150DBC7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBC80: lwc1        $f6, 0xC28($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC28);
    // 0x150DBC84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBC88: lwc1        $f8, 0xC2C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XC2C);
    // 0x150DBC8C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x150DBC90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150DBC94: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150DBC98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150DBC9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBCA0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x150DBCA4: lwc1        $f18, 0xC30($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XC30);
    // 0x150DBCA8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150DBCAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150DBCB0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x150DBCB4: addiu       $t8, $zero, -0x4B
    ctx->r24 = ADD32(0, -0X4B);
    // 0x150DBCB8: addiu       $t9, $zero, -0x26
    ctx->r25 = ADD32(0, -0X26);
    // 0x150DBCBC: sh          $t6, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r14;
    // 0x150DBCC0: sh          $t7, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r15;
    // 0x150DBCC4: sh          $t8, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r24;
    // 0x150DBCC8: sh          $t9, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r25;
    // 0x150DBCCC: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
    // 0x150DBCD0: addiu       $t1, $zero, 0x23
    ctx->r9 = ADD32(0, 0X23);
    // 0x150DBCD4: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150DBCD8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150DBCDC: addiu       $t4, $zero, 0x29
    ctx->r12 = ADD32(0, 0X29);
    // 0x150DBCE0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x150DBCE4: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x150DBCE8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150DBCEC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150DBCF0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150DBCF4: sh          $t0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r8;
    // 0x150DBCF8: sh          $t1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r9;
    // 0x150DBCFC: sh          $t2, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r10;
    // 0x150DBD00: sh          $t3, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r11;
    // 0x150DBD04: sh          $t4, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r12;
    // 0x150DBD08: sh          $zero, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = 0;
    // 0x150DBD0C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x150DBD10: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x150DBD14: sb          $t5, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r13;
    // 0x150DBD18: sb          $t6, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r14;
    // 0x150DBD1C: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x150DBD20: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x150DBD24: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x150DBD28: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x150DBD2C: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x150DBD30: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x150DBD34: sb          $t8, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r24;
    // 0x150DBD38: sb          $t9, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r25;
    // 0x150DBD3C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x150DBD40: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x150DBD44: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x150DBD48: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x150DBD4C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x150DBD50: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x150DBD54: lbu         $a1, 0xC($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0XC);
    // 0x150DBD58: jal         0x15152F70
    // 0x150DBD5C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_15152F70(rdram, ctx);
        goto after_0;
    // 0x150DBD5C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x150DBD60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150DBD64: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x150DBD68: jr          $ra
    // 0x150DBD6C: nop

    return;
    return;
    // 0x150DBD6C: nop

;}
RECOMP_FUNC void func_15199954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15199954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15199958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519995C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15199960: jal         0x15199980
    // 0x15199964: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15199980(rdram, ctx);
        goto after_0;
    // 0x15199964: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x15199968: jal         0x15147928
    // 0x1519996C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15147928(rdram, ctx);
        goto after_1;
    // 0x1519996C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x15199970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15199974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15199978: jr          $ra
    // 0x1519997C: nop

    return;
    return;
    // 0x1519997C: nop

;}
RECOMP_FUNC void func_15033BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15033BDC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15033BE0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x15033BE4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15033BE8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15033BEC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x15033BF0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x15033BF4: lw          $t0, 0x18($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X18);
    // 0x15033BF8: lw          $v1, 0x1C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X1C);
    // 0x15033BFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15033C00: beq         $t0, $zero, L_15033DF0
    if (ctx->r8 == 0) {
        // 0x15033C04: nop
    
            goto L_15033DF0;
    }
    // 0x15033C04: nop

    // 0x15033C08: beq         $v1, $zero, L_15033DF0
    if (ctx->r3 == 0) {
        // 0x15033C0C: nop
    
            goto L_15033DF0;
    }
    // 0x15033C0C: nop

    // 0x15033C10: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15033C14: beq         $t6, $zero, L_15033DF0
    if (ctx->r14 == 0) {
        // 0x15033C18: nop
    
            goto L_15033DF0;
    }
    // 0x15033C18: nop

    // 0x15033C1C: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x15033C20: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15033C24: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x15033C28: nop

    // 0x15033C2C: sh          $t8, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r24;
    // 0x15033C30: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x15033C34: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15033C38: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x15033C3C: nop

    // 0x15033C40: sh          $t1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r9;
    // 0x15033C44: lwc1        $f16, 0x1C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x15033C48: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15033C4C: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x15033C50: nop

    // 0x15033C54: sh          $t3, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r11;
    // 0x15033C58: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x15033C5C: beql        $t4, $zero, L_15033DB8
    if (ctx->r12 == 0) {
        // 0x15033C60: lbu         $t6, 0x1($t0)
        ctx->r14 = MEM_BU(ctx->r8, 0X1);
            goto L_15033DB8;
    }
    goto skip_0;
    // 0x15033C60: lbu         $t6, 0x1($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X1);
    skip_0:
    // 0x15033C64: lbu         $t5, 0x1($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X1);
    // 0x15033C68: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x15033C6C: bnel        $t5, $at, L_15033CF4
    if (ctx->r13 != ctx->r1) {
        // 0x15033C70: lw          $v0, 0x31C($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X31C);
            goto L_15033CF4;
    }
    goto skip_1;
    // 0x15033C70: lw          $v0, 0x31C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X31C);
    skip_1:
    // 0x15033C74: lw          $v0, 0x38($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X38);
    // 0x15033C78: lhu         $a0, 0x84($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X84);
    // 0x15033C7C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15033C80: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x15033C84: beq         $t6, $a0, L_15033CB0
    if (ctx->r14 == ctx->r4) {
        // 0x15033C88: addiu       $at, $zero, 0x15F
        ctx->r1 = ADD32(0, 0X15F);
            goto L_15033CB0;
    }
    // 0x15033C88: addiu       $at, $zero, 0x15F
    ctx->r1 = ADD32(0, 0X15F);
    // 0x15033C8C: bnel        $a0, $at, L_15033CB4
    if (ctx->r4 != ctx->r1) {
        // 0x15033C90: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_15033CB4;
    }
    goto skip_2;
    // 0x15033C90: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    skip_2:
    // 0x15033C94: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x15033C98: jal         0x150ADA20
    // 0x15033C9C: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15033C9C: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    after_0:
    // 0x15033CA0: andi        $a1, $v0, 0x3
    ctx->r5 = ctx->r2 & 0X3;
    // 0x15033CA4: addiu       $a1, $a1, 0x444
    ctx->r5 = ADD32(ctx->r5, 0X444);
    // 0x15033CA8: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x15033CAC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
L_15033CB0:
    // 0x15033CB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_15033CB4:
    // 0x15033CB4: beq         $a1, $at, L_15033CE0
    if (ctx->r5 == ctx->r1) {
        // 0x15033CB8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15033CE0;
    }
    // 0x15033CB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15033CBC: addiu       $a2, $zero, 0x5DC0
    ctx->r6 = ADD32(0, 0X5DC0);
    // 0x15033CC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15033CC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15033CC8: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x15033CCC: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x15033CD0: jal         0x10010FFC
    // 0x15033CD4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    func_10010FFC(rdram, ctx);
        goto after_1;
    // 0x15033CD4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    after_1:
    // 0x15033CD8: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x15033CDC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
L_15033CE0:
    // 0x15033CE0: lhu         $t7, 0x84($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X84);
    // 0x15033CE4: sw          $t7, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r15;
    // 0x15033CE8: b           L_15033DF0
    // 0x15033CEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15033DF0;
    // 0x15033CEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15033CF0: lw          $v0, 0x31C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X31C);
L_15033CF4:
    // 0x15033CF4: beq         $v0, $zero, L_15033DAC
    if (ctx->r2 == 0) {
        // 0x15033CF8: nop
    
            goto L_15033DAC;
    }
    // 0x15033CF8: nop

    // 0x15033CFC: lhu         $t8, 0x19C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X19C);
    // 0x15033D00: slti        $at, $t8, 0x78
    ctx->r1 = SIGNED(ctx->r24) < 0X78 ? 1 : 0;
    // 0x15033D04: beq         $at, $zero, L_15033DAC
    if (ctx->r1 == 0) {
        // 0x15033D08: nop
    
            goto L_15033DAC;
    }
    // 0x15033D08: nop

    // 0x15033D0C: lw          $t9, 0x38($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X38);
    // 0x15033D10: addiu       $at, $zero, 0x513
    ctx->r1 = ADD32(0, 0X513);
    // 0x15033D14: addiu       $t1, $zero, 0x3A1
    ctx->r9 = ADD32(0, 0X3A1);
    // 0x15033D18: bne         $t9, $at, L_15033DAC
    if (ctx->r25 != ctx->r1) {
        // 0x15033D1C: addiu       $a0, $zero, 0x3A1
        ctx->r4 = ADD32(0, 0X3A1);
            goto L_15033DAC;
    }
    // 0x15033D1C: addiu       $a0, $zero, 0x3A1
    ctx->r4 = ADD32(0, 0X3A1);
    // 0x15033D20: sw          $t1, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r9;
    // 0x15033D24: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x15033D28: lwc1        $f16, 0x1C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x15033D2C: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x15033D30: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15033D34: lui         $t5, 0x1503
    ctx->r13 = S32(0X1503 << 16);
    // 0x15033D38: addiu       $t5, $t5, 0x3BDC
    ctx->r13 = ADD32(ctx->r13, 0X3BDC);
    // 0x15033D3C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15033D40: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15033D44: addiu       $t2, $zero, 0x7D00
    ctx->r10 = ADD32(0, 0X7D00);
    // 0x15033D48: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15033D4C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x15033D50: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x15033D54: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x15033D58: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15033D5C: addiu       $t3, $zero, 0x3E8
    ctx->r11 = ADD32(0, 0X3E8);
    // 0x15033D60: addiu       $t4, $zero, 0x1F4
    ctx->r12 = ADD32(0, 0X1F4);
    // 0x15033D64: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x15033D68: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x15033D6C: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15033D70: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15033D74: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x15033D78: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15033D7C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15033D80: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x15033D84: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x15033D88: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15033D8C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15033D90: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x15033D94: jal         0x1000FA64
    // 0x15033D98: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_1000FA64(rdram, ctx);
        goto after_2;
    // 0x15033D98: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_2:
    // 0x15033D9C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x15033DA0: sw          $v0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r2;
    // 0x15033DA4: b           L_15033DF0
    // 0x15033DA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15033DF0;
    // 0x15033DA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15033DAC:
    // 0x15033DAC: b           L_15033DF0
    // 0x15033DB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15033DF0;
    // 0x15033DB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15033DB4: lbu         $t6, 0x1($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X1);
L_15033DB8:
    // 0x15033DB8: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x15033DBC: bne         $t6, $at, L_15033DF0
    if (ctx->r14 != ctx->r1) {
        // 0x15033DC0: nop
    
            goto L_15033DF0;
    }
    // 0x15033DC0: nop

    // 0x15033DC4: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x15033DC8: beql        $a0, $zero, L_15033DE4
    if (ctx->r4 == 0) {
        // 0x15033DCC: lw          $t7, 0x58($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X58);
            goto L_15033DE4;
    }
    goto skip_3;
    // 0x15033DCC: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    skip_3:
    // 0x15033DD0: jal         0x100111C8
    // 0x15033DD4: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    func_100111C8(rdram, ctx);
        goto after_3;
    // 0x15033DD4: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    after_3:
    // 0x15033DD8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x15033DDC: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
    // 0x15033DE0: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
L_15033DE4:
    // 0x15033DE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15033DE8: b           L_15033DF0
    // 0x15033DEC: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
        goto L_15033DF0;
    // 0x15033DEC: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
L_15033DF0:
    // 0x15033DF0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15033DF4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15033DF8: jr          $ra
    // 0x15033DFC: nop

    return;
    return;
    // 0x15033DFC: nop

;}
RECOMP_FUNC void func_151B19A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B19A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B19A8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151B19AC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151B19B0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151B19B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B19B8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151B19BC: lw          $v1, 0x28($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X28);
    // 0x151B19C0: beq         $a2, $zero, L_151B19D4
    if (ctx->r6 == 0) {
        // 0x151B19C4: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_151B19D4;
    }
    // 0x151B19C4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151B19C8: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x151B19CC: bnel        $a2, $at, L_151B1A04
    if (ctx->r6 != ctx->r1) {
        // 0x151B19D0: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_151B1A04;
    }
    goto skip_0;
    // 0x151B19D0: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    skip_0:
L_151B19D4:
    // 0x151B19D4: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x151B19D8: beq         $v1, $t7, L_151B19F0
    if (ctx->r3 == ctx->r15) {
        // 0x151B19DC: nop
    
            goto L_151B19F0;
    }
    // 0x151B19DC: nop

    // 0x151B19E0: lbu         $t8, 0x2C($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X2C);
    // 0x151B19E4: lbu         $t9, 0x4($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X4);
    // 0x151B19E8: bnel        $t8, $t9, L_151B1A4C
    if (ctx->r24 != ctx->r25) {
        // 0x151B19EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151B1A4C;
    }
    goto skip_1;
    // 0x151B19EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_151B19F0:
    // 0x151B19F0: jal         0x1516972C
    // 0x151B19F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151B19F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x151B19F8: b           L_151B1A4C
    // 0x151B19FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151B1A4C;
    // 0x151B19FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B1A00: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
L_151B1A04:
    // 0x151B1A04: bne         $v0, $at, L_151B1A48
    if (ctx->r2 != ctx->r1) {
        // 0x151B1A08: addiu       $v0, $a3, 0x28
        ctx->r2 = ADD32(ctx->r7, 0X28);
            goto L_151B1A48;
    }
    // 0x151B1A08: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x151B1A0C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x151B1A10: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151B1A14: bnel        $v1, $a0, L_151B1A34
    if (ctx->r3 != ctx->r4) {
        // 0x151B1A18: lw          $t2, 0x4($a1)
        ctx->r10 = MEM_W(ctx->r5, 0X4);
            goto L_151B1A34;
    }
    goto skip_2;
    // 0x151B1A18: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
    skip_2:
    // 0x151B1A1C: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x151B1A20: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x151B1A24: lbu         $t1, 0x9($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X9);
    // 0x151B1A28: b           L_151B1A48
    // 0x151B1A2C: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
        goto L_151B1A48;
    // 0x151B1A2C: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x151B1A30: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
L_151B1A34:
    // 0x151B1A34: bnel        $t2, $a0, L_151B1A4C
    if (ctx->r10 != ctx->r4) {
        // 0x151B1A38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151B1A4C;
    }
    goto skip_3;
    // 0x151B1A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x151B1A3C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x151B1A40: lbu         $t3, 0x8($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X8);
    // 0x151B1A44: sb          $t3, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r11;
L_151B1A48:
    // 0x151B1A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151B1A4C:
    // 0x151B1A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B1A50: jr          $ra
    // 0x151B1A54: nop

    return;
    return;
    // 0x151B1A54: nop

;}
RECOMP_FUNC void func_15062B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15062B84: lh          $v0, 0xD4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XD4);
    // 0x15062B88: beql        $v0, $zero, L_15062BC8
    if (ctx->r2 == 0) {
        // 0x15062B8C: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_15062BC8;
    }
    goto skip_0;
    // 0x15062B8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x15062B90: lh          $v1, 0xD2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XD2);
    // 0x15062B94: beql        $v1, $zero, L_15062BC8
    if (ctx->r3 == 0) {
        // 0x15062B98: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_15062BC8;
    }
    goto skip_1;
    // 0x15062B98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_1:
    // 0x15062B9C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x15062BA0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x15062BA4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15062BA8: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15062BAC: div.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x15062BB0: div.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x15062BB4: swc1        $f8, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f8.u32l;
    // 0x15062BB8: swc1        $f10, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f10.u32l;
    // 0x15062BBC: jr          $ra
    // 0x15062BC0: nop

    return;
    return;
    // 0x15062BC0: nop

    // 0x15062BC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_15062BC8:
    // 0x15062BC8: nop

    // 0x15062BCC: swc1        $f0, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f0.u32l;
    // 0x15062BD0: swc1        $f0, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f0.u32l;
    // 0x15062BD4: jr          $ra
    // 0x15062BD8: nop

    return;
    return;
    // 0x15062BD8: nop

;}
RECOMP_FUNC void func_151B3040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B3040: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151B3044: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151B3048: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151B304C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151B3050: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151B3054: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x151B3058: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x151B305C: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x151B3060: addiu       $a2, $t6, 0x150
    ctx->r6 = ADD32(ctx->r14, 0X150);
    // 0x151B3064: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151B3068: addiu       $a3, $t6, 0x154
    ctx->r7 = ADD32(ctx->r14, 0X154);
    // 0x151B306C: jal         0x15169850
    // 0x151B3070: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x151B3070: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x151B3074: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x151B3078: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x151B307C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x151B3080: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x151B3084: addiu       $a2, $v0, 0x14
    ctx->r6 = ADD32(ctx->r2, 0X14);
    // 0x151B3088: addiu       $a3, $v0, 0x18
    ctx->r7 = ADD32(ctx->r2, 0X18);
    // 0x151B308C: jal         0x15169850
    // 0x151B3090: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_15169850(rdram, ctx);
        goto after_1;
    // 0x151B3090: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x151B3094: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151B3098: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151B309C: jr          $ra
    // 0x151B30A0: nop

    return;
    return;
    // 0x151B30A0: nop

;}
RECOMP_FUNC void func_151C0644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C0644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151C0648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151C064C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151C0650: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151C0654: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151C0658: jal         0x150ADA20
    // 0x151C065C: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151C065C: nop

    after_0:
    // 0x151C0660: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x151C0664: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C0668: mfhi        $a1
    ctx->r5 = hi;
    // 0x151C066C: addiu       $a1, $a1, 0x78
    ctx->r5 = ADD32(ctx->r5, 0X78);
    // 0x151C0670: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x151C0674: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151C0678: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151C067C: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x151C0680: jal         0x150E83AC
    // 0x151C0684: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    func_150E83AC(rdram, ctx);
        goto after_1;
    // 0x151C0684: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x151C0688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151C068C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151C0690: jr          $ra
    // 0x151C0694: nop

    return;
    return;
    // 0x151C0694: nop

;}
RECOMP_FUNC void func_15197A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15197A0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15197A10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15197A14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15197A18: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x15197A1C: addiu       $t6, $t6, -0x75B8
    ctx->r14 = ADD32(ctx->r14, -0X75B8);
    // 0x15197A20: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x15197A24: addiu       $t7, $zero, 0x8CC
    ctx->r15 = ADD32(0, 0X8CC);
    // 0x15197A28: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15197A2C: addiu       $a1, $a1, -0x75C0
    ctx->r5 = ADD32(ctx->r5, -0X75C0);
    // 0x15197A30: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15197A34: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x15197A38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15197A3C: jal         0x151422C0
    // 0x15197A40: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    func_151422C0(rdram, ctx);
        goto after_0;
    // 0x15197A40: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    after_0:
    // 0x15197A44: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15197A48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15197A4C: lwc1        $f8, -0x7558($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7558);
    // 0x15197A50: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15197A54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15197A58: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15197A5C: nop

    // 0x15197A60: jr          $ra
    // 0x15197A64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x15197A64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_150DE310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DE310: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150DE314: jr          $ra
    // 0x150DE318: nop

    return;
    return;
    // 0x150DE318: nop

;}
RECOMP_FUNC void func_15087350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15087350: addiu       $sp, $sp, -0x1C8
    ctx->r29 = ADD32(ctx->r29, -0X1C8);
    // 0x15087354: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15087358: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x1508735C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x15087360: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x15087364: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x15087368: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x1508736C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x15087370: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x15087374: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15087378: sw          $a0, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->r4;
    // 0x1508737C: sw          $a1, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->r5;
    // 0x15087380: sw          $a2, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->r6;
    // 0x15087384: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x15087388: lw          $v0, 0x72A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X72A0);
    // 0x1508738C: lw          $t8, 0x1C8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C8);
    // 0x15087390: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x15087394: beq         $v0, $zero, L_15087C94
    if (ctx->r2 == 0) {
        // 0x15087398: sll         $t7, $t8, 5
        ctx->r15 = S32(ctx->r24 << 5);
            goto L_15087C94;
    }
    // 0x15087398: sll         $t7, $t8, 5
    ctx->r15 = S32(ctx->r24 << 5);
    // 0x1508739C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x150873A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150873A4: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x150873A8: addu        $s1, $t7, $v0
    ctx->r17 = ADD32(ctx->r15, ctx->r2);
    // 0x150873AC: lb          $t9, 0x31($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X31);
    // 0x150873B0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150873B4: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x150873B8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x150873BC: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x150873C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150873C4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x150873C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150873CC: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x150873D0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150873D4: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x150873D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150873DC: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x150873E0: sw          $t7, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r15;
    // 0x150873E4: lwc1        $f8, 0x14($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X14);
    // 0x150873E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150873EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150873F0: swc1        $f8, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f8.u32l;
    // 0x150873F4: lwc1        $f10, 0x1C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x150873F8: sb          $zero, 0x2390($at)
    MEM_B(0X2390, ctx->r1) = 0;
    // 0x150873FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15087400: swc1        $f10, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f10.u32l;
    // 0x15087404: lb          $t9, 0x30($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X30);
    // 0x15087408: addiu       $s4, $sp, 0x164
    ctx->r20 = ADD32(ctx->r29, 0X164);
    // 0x1508740C: addiu       $s3, $sp, 0x184
    ctx->r19 = ADD32(ctx->r29, 0X184);
    // 0x15087410: bnel        $t9, $zero, L_1508742C
    if (ctx->r25 != 0) {
        // 0x15087414: lwc1        $f0, 0x0($s1)
        ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
            goto L_1508742C;
    }
    goto skip_0;
    // 0x15087414: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    skip_0:
    // 0x15087418: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1508741C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x15087420: b           L_15087484
    // 0x15087424: swc1        $f24, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f24.u32l;
        goto L_15087484;
    // 0x15087424: swc1        $f24, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f24.u32l;
    // 0x15087428: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
L_1508742C:
    // 0x1508742C: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x15087430: lwc1        $f2, -0x2620($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2620);
    // 0x15087434: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x15087438: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x1508743C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15087440: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15087444: mul.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15087448: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x1508744C: nop

    // 0x15087450: bc1f        L_1508745C
    if (!c1cs) {
        // 0x15087454: nop
    
            goto L_1508745C;
    }
    // 0x15087454: nop

    // 0x15087458: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
L_1508745C:
    // 0x1508745C: lwc1        $f2, -0x261C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X261C);
    // 0x15087460: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x15087464: nop

    // 0x15087468: bc1fl       L_15087478
    if (!c1cs) {
        // 0x1508746C: add.s       $f10, $f0, $f20
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f20.fl;
            goto L_15087478;
    }
    goto skip_1;
    // 0x1508746C: add.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f20.fl;
    skip_1:
    // 0x15087470: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x15087474: add.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f20.fl;
L_15087478:
    // 0x15087478: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1508747C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x15087480: swc1        $f10, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f10.u32l;
L_15087484:
    // 0x15087484: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15087488: lwc1        $f4, -0x2618($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2618);
    // 0x1508748C: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x15087490: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x15087494: sb          $t6, 0x15A($sp)
    MEM_B(0X15A, ctx->r29) = ctx->r14;
    // 0x15087498: swc1        $f4, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f4.u32l;
    // 0x1508749C: lb          $t8, 0x15A($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X15A);
L_150874A0:
    // 0x150874A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150874A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150874A8: beq         $t8, $zero, L_150874F0
    if (ctx->r24 == 0) {
        // 0x150874AC: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_150874F0;
    }
    // 0x150874AC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x150874B0: addiu       $a2, $sp, 0x174
    ctx->r6 = ADD32(ctx->r29, 0X174);
    // 0x150874B4: jal         0x15088F30
    // 0x150874B8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_15088F30(rdram, ctx);
        goto after_0;
    // 0x150874B8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_0:
    // 0x150874BC: lwc1        $f6, 0x18C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x150874C0: lwc1        $f8, 0x188($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X188);
    // 0x150874C4: lwc1        $f10, 0x16C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x150874C8: lwc1        $f4, 0x168($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X168);
    // 0x150874CC: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150874D0: sub.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150874D4: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x150874D8: swc1        $f12, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f12.u32l;
    // 0x150874DC: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150874E0: swc1        $f2, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f2.u32l;
    // 0x150874E4: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150874E8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150874EC: swc1        $f0, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f0.u32l;
L_150874F0:
    // 0x150874F0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150874F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150874F8: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x150874FC: jal         0x150498A4
    // 0x15087500: addiu       $a3, $sp, 0x1B4
    ctx->r7 = ADD32(ctx->r29, 0X1B4);
    func_150498A4(rdram, ctx);
        goto after_1;
    // 0x15087500: addiu       $a3, $sp, 0x1B4
    ctx->r7 = ADD32(ctx->r29, 0X1B4);
    after_1:
    // 0x15087504: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x15087508: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x1508750C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15087510: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x15087514: jal         0x150498A4
    // 0x15087518: addiu       $a3, $sp, 0x1B0
    ctx->r7 = ADD32(ctx->r29, 0X1B0);
    func_150498A4(rdram, ctx);
        goto after_2;
    // 0x15087518: addiu       $a3, $sp, 0x1B0
    ctx->r7 = ADD32(ctx->r29, 0X1B0);
    after_2:
    // 0x1508751C: lwc1        $f10, 0x1B4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x15087520: lwc1        $f6, 0x1B0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x15087524: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x15087528: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1508752C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x15087530: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x15087534: add.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15087538: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1508753C: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x15087540: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15087544: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15087548: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1508754C: nop

    // 0x15087550: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x15087554: swc1        $f8, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f8.u32l;
    // 0x15087558: swc1        $f4, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f4.u32l;
    // 0x1508755C: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x15087560: lwc1        $f10, 0x1B0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x15087564: swc1        $f10, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f10.u32l;
    // 0x15087568: lwc1        $f6, 0x1B4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x1508756C: lwc1        $f8, 0x1B0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x15087570: mul.s       $f4, $f20, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x15087574: nop

    // 0x15087578: mul.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x1508757C: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15087580: lwc1        $f4, 0x1BC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x15087584: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x15087588: lwc1        $f6, 0x1B8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x1508758C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x15087590: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x15087594: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15087598: swc1        $f12, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f12.u32l;
    // 0x1508759C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150875A0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150875A4: add.s       $f14, $f8, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x150875A8: lwc1        $f8, 0x1A0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x150875AC: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x150875B0: mov.s       $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = ctx->f14.fl;
    // 0x150875B4: bc1t        L_150875D4
    if (c1cs) {
        // 0x150875B8: nop
    
            goto L_150875D4;
    }
    // 0x150875B8: nop

    // 0x150875BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150875C0: nop

    // 0x150875C4: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x150875C8: nop

    // 0x150875CC: bc1fl       L_15087674
    if (!c1cs) {
        // 0x150875D0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_15087674;
    }
    goto skip_2;
    // 0x150875D0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
L_150875D4:
    // 0x150875D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150875D8: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x150875DC: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x150875E0: nop

    // 0x150875E4: bc1fl       L_150875F4
    if (!c1cs) {
        // 0x150875E8: c.lt.s      $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
            goto L_150875F4;
    }
    goto skip_3;
    // 0x150875E8: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    skip_3:
    // 0x150875EC: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    // 0x150875F0: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
L_150875F4:
    // 0x150875F4: nop

    // 0x150875F8: bc1f        L_15087608
    if (!c1cs) {
        // 0x150875FC: nop
    
            goto L_15087608;
    }
    // 0x150875FC: nop

    // 0x15087600: mul.s       $f22, $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x15087604: nop

L_15087608:
    // 0x15087608: mul.s       $f6, $f14, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f22.fl);
    // 0x1508760C: lwc1        $f10, 0x19C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x15087610: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x15087614: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15087618: swc1        $f12, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f12.u32l;
    // 0x1508761C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x15087620: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x15087624: div.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x15087628: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x1508762C: nop

    // 0x15087630: bc1fl       L_15087644
    if (!c1cs) {
        // 0x15087634: c.lt.s      $f24, $f2
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl < ctx->f2.fl;
            goto L_15087644;
    }
    goto skip_4;
    // 0x15087634: c.lt.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl < ctx->f2.fl;
    skip_4:
    // 0x15087638: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1508763C: nop

    // 0x15087640: c.lt.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl < ctx->f2.fl;
L_15087644:
    // 0x15087644: nop

    // 0x15087648: bc1fl       L_15087658
    if (!c1cs) {
        // 0x1508764C: neg.s       $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
            goto L_15087658;
    }
    goto skip_5;
    // 0x1508764C: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    skip_5:
    // 0x15087650: mov.s       $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    ctx->f2.fl = ctx->f24.fl;
    // 0x15087654: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
L_15087658:
    // 0x15087658: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1508765C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x15087660: jal         0x15088A08
    // 0x15087664: swc1        $f18, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f18.u32l;
    func_15088A08(rdram, ctx);
        goto after_3;
    // 0x15087664: swc1        $f18, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x15087668: lwc1        $f18, 0x1A8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x1508766C: sb          $v0, 0x15A($sp)
    MEM_B(0X15A, ctx->r29) = ctx->r2;
    // 0x15087670: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_15087674:
    // 0x15087674: sll         $t7, $s2, 24
    ctx->r15 = S32(ctx->r18 << 24);
    // 0x15087678: sra         $s2, $t7, 24
    ctx->r18 = S32(SIGNED(ctx->r15) >> 24);
    // 0x1508767C: slti        $at, $s2, 0xB
    ctx->r1 = SIGNED(ctx->r18) < 0XB ? 1 : 0;
    // 0x15087680: bne         $at, $zero, L_1508768C
    if (ctx->r1 != 0) {
        // 0x15087684: nop
    
            goto L_1508768C;
    }
    // 0x15087684: nop

    // 0x15087688: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1508768C:
    // 0x1508768C: bnel        $s0, $zero, L_150874A0
    if (ctx->r16 != 0) {
        // 0x15087690: lb          $t8, 0x15A($sp)
        ctx->r24 = MEM_B(ctx->r29, 0X15A);
            goto L_150874A0;
    }
    goto skip_6;
    // 0x15087690: lb          $t8, 0x15A($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X15A);
    skip_6:
    // 0x15087694: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x15087698: jal         0x15042D78
    // 0x1508769C: swc1        $f18, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f18.u32l;
    func_15042D78(rdram, ctx);
        goto after_4;
    // 0x1508769C: swc1        $f18, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x150876A0: lb          $t6, 0x33($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X33);
    // 0x150876A4: lwc1        $f18, 0x1A8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x150876A8: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150876AC: sb          $t6, 0x32($s1)
    MEM_B(0X32, ctx->r17) = ctx->r14;
    // 0x150876B0: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x150876B4: lb          $t9, 0x32($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X32);
    // 0x150876B8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150876BC: sb          $t8, 0x33($s1)
    MEM_B(0X33, ctx->r17) = ctx->r24;
    // 0x150876C0: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x150876C4: lwc1        $f10, 0x1B4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x150876C8: lwc1        $f8, 0x1B0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x150876CC: lwc1        $f6, 0x2C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x150876D0: lb          $t6, 0x30($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X30);
    // 0x150876D4: addiu       $s0, $sp, 0xD4
    ctx->r16 = ADD32(ctx->r29, 0XD4);
    // 0x150876D8: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150876DC: lwc1        $f6, 0x34($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X34);
    // 0x150876E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150876E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150876E8: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x150876EC: lwc1        $f6, 0x1AC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x150876F0: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150876F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150876F8: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x150876FC: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15087700: sub.s       $f12, $f4, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x15087704: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15087708: mul.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x1508770C: div.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x15087710: beq         $t6, $zero, L_15087940
    if (ctx->r14 == 0) {
        // 0x15087714: swc1        $f10, 0x14($s1)
        MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
            goto L_15087940;
    }
    // 0x15087714: swc1        $f10, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
    // 0x15087718: jal         0x10023A10
    // 0x1508771C: addiu       $a2, $zero, 0x84
    ctx->r6 = ADD32(0, 0X84);
    bcopy_recomp(rdram, ctx);
        goto after_5;
    // 0x1508771C: addiu       $a2, $zero, 0x84
    ctx->r6 = ADD32(0, 0X84);
    after_5:
    // 0x15087720: lwc1        $f6, 0x1D0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1D0);
    // 0x15087724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15087728: add.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f6.fl;
    // 0x1508772C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x15087730: jal         0x15088A08
    // 0x15087734: nop

    func_15088A08(rdram, ctx);
        goto after_6;
    // 0x15087734: nop

    after_6:
    // 0x15087738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1508773C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15087740: addiu       $a2, $sp, 0x174
    ctx->r6 = ADD32(ctx->r29, 0X174);
    // 0x15087744: jal         0x15088F30
    // 0x15087748: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_15088F30(rdram, ctx);
        goto after_7;
    // 0x15087748: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_7:
    // 0x1508774C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15087750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15087754: jal         0x150497E0
    // 0x15087758: lw          $a2, 0xDC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XDC);
    func_150497E0(rdram, ctx);
        goto after_8;
    // 0x15087758: lw          $a2, 0xDC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XDC);
    after_8:
    // 0x1508775C: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x15087760: addiu       $s2, $s2, 0x239C
    ctx->r18 = ADD32(ctx->r18, 0X239C);
    // 0x15087764: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x15087768: addiu       $a0, $sp, 0x174
    ctx->r4 = ADD32(ctx->r29, 0X174);
    // 0x1508776C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15087770: jal         0x150497E0
    // 0x15087774: lw          $a2, 0xDC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XDC);
    func_150497E0(rdram, ctx);
        goto after_9;
    // 0x15087774: lw          $a2, 0xDC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XDC);
    after_9:
    // 0x15087778: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x1508777C: addiu       $s3, $s3, 0x23A0
    ctx->r19 = ADD32(ctx->r19, 0X23A0);
    // 0x15087780: swc1        $f0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f0.u32l;
    // 0x15087784: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15087788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1508778C: jal         0x150497E0
    // 0x15087790: lw          $a2, 0xDC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XDC);
    func_150497E0(rdram, ctx);
        goto after_10;
    // 0x15087790: lw          $a2, 0xDC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XDC);
    after_10:
    // 0x15087794: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x15087798: addiu       $s0, $s0, 0x2398
    ctx->r16 = ADD32(ctx->r16, 0X2398);
    // 0x1508779C: lb          $t7, 0x0($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X0);
    // 0x150877A0: lw          $t8, 0x1C8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C8);
    // 0x150877A4: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x150877A8: addiu       $s4, $s4, 0x23A4
    ctx->r20 = ADD32(ctx->r20, 0X23A4);
    // 0x150877AC: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x150877B0: beq         $at, $zero, L_15087A68
    if (ctx->r1 == 0) {
        // 0x150877B4: swc1        $f0, 0x0($s4)
        MEM_W(0X0, ctx->r20) = ctx->f0.u32l;
            goto L_15087A68;
    }
    // 0x150877B4: swc1        $f0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f0.u32l;
    // 0x150877B8: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x150877BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150877C0: bnel        $t9, $zero, L_15087830
    if (ctx->r25 != 0) {
        // 0x150877C4: lwc1        $f8, 0x0($s2)
        ctx->f8.u32l = MEM_W(ctx->r18, 0X0);
            goto L_15087830;
    }
    goto skip_7;
    // 0x150877C4: lwc1        $f8, 0x0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X0);
    skip_7:
    // 0x150877C8: lwc1        $f4, -0x3CF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3CF0);
    // 0x150877CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150877D0: ldc1        $f6, -0x2610($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X2610);
    // 0x150877D4: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x150877D8: mul.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x150877DC: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
    // 0x150877E0: jal         0x15047D60
    // 0x150877E4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_11;
    // 0x150877E4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_11:
    // 0x150877E8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150877EC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150877F0: lw          $t6, 0x15C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X15C);
    // 0x150877F4: lw          $t8, 0x15C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X15C);
    // 0x150877F8: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150877FC: lwc1        $f10, 0x14($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X14);
    // 0x15087800: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x15087804: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15087808: swc1        $f6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f6.u32l;
    // 0x1508780C: lwc1        $f8, 0x18($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X18);
    // 0x15087810: jal         0x15047C00
    // 0x15087814: swc1        $f8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f8.u32l;
    cosf_recomp(rdram, ctx);
        goto after_12;
    // 0x15087814: swc1        $f8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f8.u32l;
    after_12:
    // 0x15087818: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x1508781C: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x15087820: lwc1        $f10, 0x1C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x15087824: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15087828: swc1        $f6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f6.u32l;
    // 0x1508782C: lwc1        $f8, 0x0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X0);
L_15087830:
    // 0x15087830: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x15087834: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15087838: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1508783C: lbu         $t9, 0x13F($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X13F);
    // 0x15087840: addiu       $v1, $v1, 0x2104
    ctx->r3 = ADD32(ctx->r3, 0X2104);
    // 0x15087844: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x15087848: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x1508784C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15087850: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15087854: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x15087858: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x1508785C: addu        $t6, $t8, $t6
    ctx->r14 = ADD32(ctx->r24, ctx->r14);
    // 0x15087860: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x15087864: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x15087868: sh          $t9, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r25;
    // 0x1508786C: lwc1        $f10, 0x0($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X0);
    // 0x15087870: lbu         $t6, 0x13F($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X13F);
    // 0x15087874: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x15087878: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1508787C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x15087880: nop

    // 0x15087884: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x15087888: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x1508788C: addu        $t9, $t8, $t9
    ctx->r25 = ADD32(ctx->r24, ctx->r25);
    // 0x15087890: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x15087894: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x15087898: sh          $t6, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r14;
    // 0x1508789C: lwc1        $f8, 0x0($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X0);
    // 0x150878A0: lbu         $t9, 0x13F($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X13F);
    // 0x150878A4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x150878A8: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150878AC: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x150878B0: nop

    // 0x150878B4: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x150878B8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x150878BC: addu        $t6, $t8, $t6
    ctx->r14 = ADD32(ctx->r24, ctx->r14);
    // 0x150878C0: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x150878C4: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x150878C8: sh          $t9, 0xC($t8)
    MEM_H(0XC, ctx->r24) = ctx->r25;
    // 0x150878CC: lw          $t6, 0x1CC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1CC);
    // 0x150878D0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x150878D4: nop

    // 0x150878D8: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150878DC: swc1        $f6, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f6.u32l;
    // 0x150878E0: lb          $v0, 0x2390($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X2390);
    // 0x150878E4: bne         $v0, $at, L_150878F8
    if (ctx->r2 != ctx->r1) {
        // 0x150878E8: lui         $at, 0x4296
        ctx->r1 = S32(0X4296 << 16);
            goto L_150878F8;
    }
    // 0x150878E8: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x150878EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150878F0: b           L_15087930
    // 0x150878F4: swc1        $f8, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f8.u32l;
        goto L_15087930;
    // 0x150878F4: swc1        $f8, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f8.u32l;
L_150878F8:
    // 0x150878F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150878FC: bne         $v0, $at, L_15087914
    if (ctx->r2 != ctx->r1) {
        // 0x15087900: lw          $t9, 0x15C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X15C);
            goto L_15087914;
    }
    // 0x15087900: lw          $t9, 0x15C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X15C);
    // 0x15087904: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x15087908: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1508790C: b           L_15087930
    // 0x15087910: swc1        $f4, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f4.u32l;
        goto L_15087930;
    // 0x15087910: swc1        $f4, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f4.u32l;
L_15087914:
    // 0x15087914: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15087918: bne         $v0, $at, L_15087930
    if (ctx->r2 != ctx->r1) {
        // 0x1508791C: lw          $t8, 0x15C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X15C);
            goto L_15087930;
    }
    // 0x1508791C: lw          $t8, 0x15C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X15C);
    // 0x15087920: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x15087924: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15087928: nop

    // 0x1508792C: swc1        $f10, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f10.u32l;
L_15087930:
    // 0x15087930: lw          $t6, 0x15C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X15C);
    // 0x15087934: sb          $zero, 0x21E($t6)
    MEM_B(0X21E, ctx->r14) = 0;
    // 0x15087938: b           L_15087A6C
    // 0x1508793C: lw          $t7, 0x1CC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1CC);
        goto L_15087A6C;
    // 0x1508793C: lw          $t7, 0x1CC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1CC);
L_15087940:
    // 0x15087940: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15087944: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15087948: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x1508794C: addiu       $a2, $sp, 0x174
    ctx->r6 = ADD32(ctx->r29, 0X174);
    // 0x15087950: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x15087954: jal         0x15088F30
    // 0x15087958: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    func_15088F30(rdram, ctx);
        goto after_13;
    // 0x15087958: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    after_13:
    // 0x1508795C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15087960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15087964: jal         0x150497E0
    // 0x15087968: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    func_150497E0(rdram, ctx);
        goto after_14;
    // 0x15087968: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    after_14:
    // 0x1508796C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x15087970: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15087974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15087978: jal         0x150497E0
    // 0x1508797C: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    func_150497E0(rdram, ctx);
        goto after_15;
    // 0x1508797C: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    after_15:
    // 0x15087980: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15087984: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x15087988: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1508798C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15087990: swc1        $f22, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f22.u32l;
    // 0x15087994: swc1        $f0, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f0.u32l;
    // 0x15087998: addiu       $a2, $sp, 0x174
    ctx->r6 = ADD32(ctx->r29, 0X174);
    // 0x1508799C: jal         0x15088F30
    // 0x150879A0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_15088F30(rdram, ctx);
        goto after_16;
    // 0x150879A0: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_16:
    // 0x150879A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150879A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150879AC: jal         0x150497E0
    // 0x150879B0: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    func_150497E0(rdram, ctx);
        goto after_17;
    // 0x150879B0: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    after_17:
    // 0x150879B4: sub.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x150879B8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x150879BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150879C0: swc1        $f8, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f8.u32l;
    // 0x150879C4: jal         0x150497E0
    // 0x150879C8: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    func_150497E0(rdram, ctx);
        goto after_18;
    // 0x150879C8: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    after_18:
    // 0x150879CC: lwc1        $f16, 0x1C0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x150879D0: lwc1        $f4, 0x1B4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x150879D4: sub.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x150879D8: mul.s       $f10, $f4, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x150879DC: nop

    // 0x150879E0: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150879E4: swc1        $f2, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f2.u32l;
    // 0x150879E8: add.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x150879EC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150879F0: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x150879F4: nop

    // 0x150879F8: bc1f        L_15087A58
    if (!c1cs) {
        // 0x150879FC: nop
    
            goto L_15087A58;
    }
    // 0x150879FC: nop

    // 0x15087A00: div.s       $f18, $f22, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f22.fl, ctx->f0.fl);
    // 0x15087A04: lwc1        $f10, 0x1B0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x15087A08: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x15087A0C: addiu       $s0, $s0, 0x2398
    ctx->r16 = ADD32(ctx->r16, 0X2398);
    // 0x15087A10: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x15087A14: lwc1        $f4, 0x1BC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x15087A18: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15087A1C: nop

    // 0x15087A20: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x15087A24: lwc1        $f4, 0x1B8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x15087A28: swc1        $f8, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f8.u32l;
    // 0x15087A2C: swc1        $f6, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f6.u32l;
    // 0x15087A30: mul.s       $f4, $f6, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x15087A34: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15087A38: mul.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x15087A3C: nop

    // 0x15087A40: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x15087A44: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15087A48: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15087A4C: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x15087A50: b           L_15087A68
    // 0x15087A54: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
        goto L_15087A68;
    // 0x15087A54: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
L_15087A58:
    // 0x15087A58: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15087A5C: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x15087A60: addiu       $s0, $s0, 0x2398
    ctx->r16 = ADD32(ctx->r16, 0X2398);
    // 0x15087A64: swc1        $f10, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f10.u32l;
L_15087A68:
    // 0x15087A68: lw          $t7, 0x1CC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1CC);
L_15087A6C:
    // 0x15087A6C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15087A70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15087A74: sb          $t7, 0x48($s1)
    MEM_B(0X48, ctx->r17) = ctx->r15;
    // 0x15087A78: sb          $t9, 0x23A9($at)
    MEM_B(0X23A9, ctx->r1) = ctx->r25;
    // 0x15087A7C: lb          $v0, 0x30($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X30);
    // 0x15087A80: bnel        $v0, $zero, L_15087ACC
    if (ctx->r2 != 0) {
        // 0x15087A84: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_15087ACC;
    }
    goto skip_8;
    // 0x15087A84: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    skip_8:
    // 0x15087A88: lbu         $t8, 0x48($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X48);
    // 0x15087A8C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15087A90: blezl       $t8, L_15087ACC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x15087A94: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_15087ACC;
    }
    goto skip_9;
    // 0x15087A94: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    skip_9:
    // 0x15087A98: lb          $t7, 0x31($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X31);
    // 0x15087A9C: lhu         $t6, 0x18A0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X18A0);
    // 0x15087AA0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15087AA4: sllv        $t8, $t9, $t7
    ctx->r24 = S32(ctx->r25 << (ctx->r15 & 31));
    // 0x15087AA8: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x15087AAC: bne         $t9, $zero, L_15087AC8
    if (ctx->r25 != 0) {
        // 0x15087AB0: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_15087AC8;
    }
    // 0x15087AB0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15087AB4: lw          $t7, 0x1C($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X1C);
    // 0x15087AB8: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x15087ABC: lb          $v0, 0x30($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X30);
    // 0x15087AC0: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x15087AC4: sw          $t8, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r24;
L_15087AC8:
    // 0x15087AC8: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
L_15087ACC:
    // 0x15087ACC: bnel        $at, $zero, L_15087AFC
    if (ctx->r1 != 0) {
        // 0x15087AD0: lw          $t8, 0x68($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X68);
            goto L_15087AFC;
    }
    goto skip_10;
    // 0x15087AD0: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    skip_10:
    // 0x15087AD4: lw          $t9, 0x15C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X15C);
    // 0x15087AD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15087ADC: lw          $t7, 0x31C($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X31C);
    // 0x15087AE0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x15087AE4: lbu         $t6, 0x84($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X84);
    // 0x15087AE8: bnel        $t6, $zero, L_15087AFC
    if (ctx->r14 != 0) {
        // 0x15087AEC: lw          $t8, 0x68($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X68);
            goto L_15087AFC;
    }
    goto skip_11;
    // 0x15087AEC: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    skip_11:
    // 0x15087AF0: jal         0x1508802C
    // 0x15087AF4: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_1508802C(rdram, ctx);
        goto after_19;
    // 0x15087AF4: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_19:
    // 0x15087AF8: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
L_15087AFC:
    // 0x15087AFC: bnel        $t8, $zero, L_15087C98
    if (ctx->r24 != 0) {
        // 0x15087B00: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_15087C98;
    }
    goto skip_12;
    // 0x15087B00: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_12:
    // 0x15087B04: lb          $t5, 0x0($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X0);
    // 0x15087B08: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15087B0C: addiu       $t4, $sp, 0x70
    ctx->r12 = ADD32(ctx->r29, 0X70);
    // 0x15087B10: blez        $t5, L_15087BD8
    if (SIGNED(ctx->r13) <= 0) {
        // 0x15087B14: addiu       $t3, $t5, -0x1
        ctx->r11 = ADD32(ctx->r13, -0X1);
            goto L_15087BD8;
    }
    // 0x15087B14: addiu       $t3, $t5, -0x1
    ctx->r11 = ADD32(ctx->r13, -0X1);
    // 0x15087B18: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x15087B1C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15087B20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15087B24: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15087B28: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x15087B2C: lw          $v0, 0x72A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X72A0);
    // 0x15087B30: lhu         $t1, 0x18A0($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X18A0);
    // 0x15087B34: lwc1        $f0, -0x2608($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2608);
    // 0x15087B38: addiu       $a3, $sp, 0xB4
    ctx->r7 = ADD32(ctx->r29, 0XB4);
    // 0x15087B3C: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x15087B40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15087B44: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
L_15087B48:
    // 0x15087B48: sb          $t0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r8;
    // 0x15087B4C: lh          $t7, 0x24($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X24);
    // 0x15087B50: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15087B54: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x15087B58: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x15087B5C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x15087B60: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x15087B64: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15087B68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15087B6C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15087B70: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x15087B74: lb          $v1, 0x2A($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X2A);
    // 0x15087B78: beql        $a0, $v1, L_15087BA0
    if (ctx->r4 == ctx->r3) {
        // 0x15087B7C: lb          $v1, 0x31($v0)
        ctx->r3 = MEM_B(ctx->r2, 0X31);
            goto L_15087BA0;
    }
    goto skip_13;
    // 0x15087B7C: lb          $v1, 0x31($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X31);
    skip_13:
    // 0x15087B80: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x15087B84: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x15087B88: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15087B8C: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15087B90: sub.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x15087B94: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15087B98: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x15087B9C: lb          $v1, 0x31($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X31);
L_15087BA0:
    // 0x15087BA0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15087BA4: addiu       $v0, $v0, 0x84
    ctx->r2 = ADD32(ctx->r2, 0X84);
    // 0x15087BA8: sllv        $t9, $t6, $v1
    ctx->r25 = S32(ctx->r14 << (ctx->r3 & 31));
    // 0x15087BAC: and         $t8, $t1, $t9
    ctx->r24 = ctx->r9 & ctx->r25;
    // 0x15087BB0: beql        $t8, $zero, L_15087BCC
    if (ctx->r24 == 0) {
        // 0x15087BB4: slt         $at, $t0, $t5
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r13) ? 1 : 0;
            goto L_15087BCC;
    }
    goto skip_14;
    // 0x15087BB4: slt         $at, $t0, $t5
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r13) ? 1 : 0;
    skip_14:
    // 0x15087BB8: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x15087BBC: lwc1        $f4, -0x2604($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2604);
    // 0x15087BC0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15087BC4: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x15087BC8: slt         $at, $t0, $t5
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r13) ? 1 : 0;
L_15087BCC:
    // 0x15087BCC: bne         $at, $zero, L_15087B48
    if (ctx->r1 != 0) {
        // 0x15087BD0: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_15087B48;
    }
    // 0x15087BD0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x15087BD4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_15087BD8:
    // 0x15087BD8: addiu       $t1, $sp, 0xB4
    ctx->r9 = ADD32(ctx->r29, 0XB4);
L_15087BDC:
    // 0x15087BDC: blez        $t3, L_15087C48
    if (SIGNED(ctx->r11) <= 0) {
        // 0x15087BE0: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_15087C48;
    }
    // 0x15087BE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15087BE4: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x15087BE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_15087BEC:
    // 0x15087BEC: lwc1        $f2, 0x0($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X0);
    // 0x15087BF0: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x15087BF4: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x15087BF8: addu        $a3, $t1, $t0
    ctx->r7 = ADD32(ctx->r9, ctx->r8);
    // 0x15087BFC: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x15087C00: addu        $v1, $t4, $t6
    ctx->r3 = ADD32(ctx->r12, ctx->r14);
    // 0x15087C04: addu        $v0, $t1, $a1
    ctx->r2 = ADD32(ctx->r9, ctx->r5);
    // 0x15087C08: bc1fl       L_15087C34
    if (!c1cs) {
        // 0x15087C0C: or          $t0, $a1, $zero
        ctx->r8 = ctx->r5 | 0;
            goto L_15087C34;
    }
    goto skip_15;
    // 0x15087C0C: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    skip_15:
    // 0x15087C10: lb          $t7, 0x0($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X0);
    // 0x15087C14: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15087C18: lb          $a0, 0x0($a3)
    ctx->r4 = MEM_B(ctx->r7, 0X0);
    // 0x15087C1C: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
    // 0x15087C20: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x15087C24: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x15087C28: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    // 0x15087C2C: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x15087C30: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
L_15087C34:
    // 0x15087C34: slt         $at, $t0, $t3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x15087C38: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x15087C3C: bne         $at, $zero, L_15087BEC
    if (ctx->r1 != 0) {
        // 0x15087C40: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_15087BEC;
    }
    // 0x15087C40: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x15087C44: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_15087C48:
    // 0x15087C48: beq         $t2, $zero, L_15087BDC
    if (ctx->r10 == 0) {
        // 0x15087C4C: nop
    
            goto L_15087BDC;
    }
    // 0x15087C4C: nop

    // 0x15087C50: blez        $t5, L_15087C94
    if (SIGNED(ctx->r13) <= 0) {
        // 0x15087C54: addiu       $a3, $sp, 0xB4
        ctx->r7 = ADD32(ctx->r29, 0XB4);
            goto L_15087C94;
    }
    // 0x15087C54: addiu       $a3, $sp, 0xB4
    ctx->r7 = ADD32(ctx->r29, 0XB4);
    // 0x15087C58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_15087C5C:
    // 0x15087C5C: lb          $t8, 0x0($a3)
    ctx->r24 = MEM_B(ctx->r7, 0X0);
    // 0x15087C60: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x15087C64: lw          $t9, 0x72A0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X72A0);
    // 0x15087C68: sll         $t7, $t8, 5
    ctx->r15 = S32(ctx->r24 << 5);
    // 0x15087C6C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x15087C70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15087C74: addu        $t6, $t9, $t7
    ctx->r14 = ADD32(ctx->r25, ctx->r15);
    // 0x15087C78: sb          $a1, 0x29($t6)
    MEM_B(0X29, ctx->r14) = ctx->r5;
    // 0x15087C7C: lb          $t8, 0x0($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X0);
    // 0x15087C80: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x15087C84: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x15087C88: slt         $at, $t0, $t8
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x15087C8C: bne         $at, $zero, L_15087C5C
    if (ctx->r1 != 0) {
        // 0x15087C90: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_15087C5C;
    }
    // 0x15087C90: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_15087C94:
    // 0x15087C94: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_15087C98:
    // 0x15087C98: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15087C9C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x15087CA0: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x15087CA4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15087CA8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x15087CAC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x15087CB0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x15087CB4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x15087CB8: jr          $ra
    // 0x15087CBC: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
    return;
    return;
    // 0x15087CBC: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
;}
RECOMP_FUNC void func_1516979C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516979C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151697A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151697A4: jal         0x151696DC
    // 0x151697A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_151696DC(rdram, ctx);
        goto after_0;
    // 0x151697A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151697AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151697B0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151697B4: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x151697B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151697BC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x151697C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151697C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x151697C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151697CC: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x151697D0: lw          $v0, -0x4B2C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4B2C);
    // 0x151697D4: beq         $v0, $zero, L_151697EC
    if (ctx->r2 == 0) {
        // 0x151697D8: nop
    
            goto L_151697EC;
    }
    // 0x151697D8: nop

    // 0x151697DC: jalr        $v0
    // 0x151697E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x151697E0: nop

    after_1:
    // 0x151697E4: b           L_151697F8
    // 0x151697E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151697F8;
    // 0x151697E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151697EC:
    // 0x151697EC: jal         0x15169824
    // 0x151697F0: nop

    func_15169824(rdram, ctx);
        goto after_2;
    // 0x151697F0: nop

    after_2:
    // 0x151697F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151697F8:
    // 0x151697F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151697FC: jr          $ra
    // 0x15169800: nop

    return;
    return;
    // 0x15169800: nop

;}
RECOMP_FUNC void func_151D710C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D710C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D7110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D7114: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151D7118: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x151D711C: lbu         $t6, 0x43($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X43);
    // 0x151D7120: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151D7124: addiu       $a1, $zero, 0xC3
    ctx->r5 = ADD32(0, 0XC3);
    // 0x151D7128: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x151D712C: beq         $at, $zero, L_151D715C
    if (ctx->r1 == 0) {
        // 0x151D7130: addiu       $a2, $zero, 0x6
        ctx->r6 = ADD32(0, 0X6);
            goto L_151D715C;
    }
    // 0x151D7130: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x151D7134: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151D7138: lui         $t7, 0xDB06
    ctx->r15 = S32(0XDB06 << 16);
    // 0x151D713C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x151D7140: addiu       $t8, $t8, 0x3740
    ctx->r24 = ADD32(ctx->r24, 0X3740);
    // 0x151D7144: ori         $t7, $t7, 0x20
    ctx->r15 = ctx->r15 | 0X20;
    // 0x151D7148: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x151D714C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x151D7150: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D7154: b           L_151D7178
    // 0x151D7158: nop

        goto L_151D7178;
    // 0x151D7158: nop

L_151D715C:
    // 0x151D715C: lui         $t9, 0xDB06
    ctx->r25 = S32(0XDB06 << 16);
    // 0x151D7160: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x151D7164: addiu       $t0, $t0, 0x38C0
    ctx->r8 = ADD32(ctx->r8, 0X38C0);
    // 0x151D7168: ori         $t9, $t9, 0x20
    ctx->r25 = ctx->r25 | 0X20;
    // 0x151D716C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x151D7170: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x151D7174: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_151D7178:
    // 0x151D7178: jal         0x15133EEC
    // 0x151D717C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_15133EEC(rdram, ctx);
        goto after_0;
    // 0x151D717C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x151D7180: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151D7184: addiu       $a1, $zero, 0xC3
    ctx->r5 = ADD32(0, 0XC3);
    // 0x151D7188: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x151D718C: jal         0x15133EEC
    // 0x151D7190: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_15133EEC(rdram, ctx);
        goto after_1;
    // 0x151D7190: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x151D7194: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x151D7198: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151D719C: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
    // 0x151D71A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D71A4: jr          $ra
    // 0x151D71A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x151D71A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1506AFE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506AFE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506AFE4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506AFE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1506AFEC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506AFF0: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506AFF4: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    // 0x1506AFF8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1506AFFC: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x1506B000: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1506B004: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1506B008: jal         0x1505E650
    // 0x1506B00C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x1506B00C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x1506B010: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1506B014: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506B018: jr          $ra
    // 0x1506B01C: nop

    return;
    return;
    // 0x1506B01C: nop

;}
RECOMP_FUNC void func_15075DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075DC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15075DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15075DD0: jal         0x15075CA0
    // 0x15075DD4: nop

    func_15075CA0(rdram, ctx);
        goto after_0;
    // 0x15075DD4: nop

    after_0:
    // 0x15075DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15075DDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15075DE0: jr          $ra
    // 0x15075DE4: nop

    return;
    return;
    // 0x15075DE4: nop

;}
RECOMP_FUNC void func_150C52CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C52CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C52D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C52D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150C52D8: jal         0x150C5280
    // 0x150C52DC: nop

    func_150C5280(rdram, ctx);
        goto after_0;
    // 0x150C52DC: nop

    after_0:
    // 0x150C52E0: beq         $v0, $zero, L_150C52F0
    if (ctx->r2 == 0) {
        // 0x150C52E4: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_150C52F0;
    }
    // 0x150C52E4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150C52E8: b           L_150C5300
    // 0x150C52EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150C5300;
    // 0x150C52EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C52F0:
    // 0x150C52F0: lw          $t9, -0x5258($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5258);
    // 0x150C52F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150C52F8: jalr        $t9
    // 0x150C52FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x150C52FC: nop

    after_1:
L_150C5300:
    // 0x150C5300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C5304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C5308: jr          $ra
    // 0x150C530C: nop

    return;
    return;
    // 0x150C530C: nop

;}
RECOMP_FUNC void func_150039BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150039BC: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150039C0: addiu       $v1, $v1, -0x41A4
    ctx->r3 = ADD32(ctx->r3, -0X41A4);
    // 0x150039C4: beq         $a0, $zero, L_150039D4
    if (ctx->r4 == 0) {
        // 0x150039C8: sw          $a0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r4;
            goto L_150039D4;
    }
    // 0x150039C8: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x150039CC: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x150039D0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_150039D4:
    // 0x150039D4: jr          $ra
    // 0x150039D8: nop

    return;
    return;
    // 0x150039D8: nop

;}
RECOMP_FUNC void func_15106F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15106F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15106F54: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15106F58: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15106F5C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15106F60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15106F64: lbu         $t7, 0x5C($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X5C);
    // 0x15106F68: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x15106F6C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15106F70: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x15106F74: lw          $v0, -0x73D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X73D8);
    // 0x15106F78: beql        $v0, $zero, L_15106F8C
    if (ctx->r2 == 0) {
        // 0x15106F7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15106F8C;
    }
    goto skip_0;
    // 0x15106F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15106F80: jalr        $v0
    // 0x15106F84: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x15106F84: nop

    after_0:
    // 0x15106F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15106F8C:
    // 0x15106F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15106F90: jr          $ra
    // 0x15106F94: nop

    return;
    return;
    // 0x15106F94: nop

;}
RECOMP_FUNC void func_151AF338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AF338: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151AF33C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151AF340: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x151AF344: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x151AF348: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x151AF34C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x151AF350: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x151AF354: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x151AF358: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x151AF35C: lbu         $t7, 0xC($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XC);
    // 0x151AF360: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x151AF364: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x151AF368: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x151AF36C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x151AF370: jal         0x151AF388
    // 0x151AF374: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_151AF388(rdram, ctx);
        goto after_0;
    // 0x151AF374: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x151AF378: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151AF37C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151AF380: jr          $ra
    // 0x151AF384: nop

    return;
    return;
    // 0x151AF384: nop

;}
RECOMP_FUNC void func_15088824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15088824: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15088828: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1508882C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15088830: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x15088834: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15088838: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1508883C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x15088840: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x15088844: sb          $zero, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = 0;
    // 0x15088848: sb          $zero, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = 0;
    // 0x1508884C: sb          $zero, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = 0;
    // 0x15088850: sb          $zero, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = 0;
    // 0x15088854: sb          $zero, 0x28($a0)
    MEM_B(0X28, ctx->r4) = 0;
    // 0x15088858: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x1508885C: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x15088860: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
    // 0x15088864: sb          $zero, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = 0;
    // 0x15088868: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x1508886C: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x15088870: swc1        $f2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
    // 0x15088874: sh          $zero, 0x24($a0)
    MEM_H(0X24, ctx->r4) = 0;
    // 0x15088878: sb          $zero, 0x26($a0)
    MEM_B(0X26, ctx->r4) = 0;
    // 0x1508887C: sb          $zero, 0x27($a0)
    MEM_B(0X27, ctx->r4) = 0;
    // 0x15088880: sb          $zero, 0x31($a0)
    MEM_B(0X31, ctx->r4) = 0;
    // 0x15088884: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x15088888: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x1508888C: sb          $t7, 0x33($a0)
    MEM_B(0X33, ctx->r4) = ctx->r15;
    // 0x15088890: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x15088894: sb          $t8, 0x2A($a0)
    MEM_B(0X2A, ctx->r4) = ctx->r24;
    // 0x15088898: sb          $zero, 0x49($a0)
    MEM_B(0X49, ctx->r4) = 0;
    // 0x1508889C: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
    // 0x150888A0: jr          $ra
    // 0x150888A4: nop

    return;
    return;
    // 0x150888A4: nop

;}
RECOMP_FUNC void func_1515F25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515F25C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x1515F260: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    // 0x1515F264: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x1515F268: jr          $ra
    // 0x1515F26C: nop

    return;
    return;
    // 0x1515F26C: nop

;}
RECOMP_FUNC void func_150E3414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E3414: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150E3418: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150E341C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x150E3420: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x150E3424: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x150E3428: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x150E342C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x150E3430: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x150E3434: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x150E3438: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150E343C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x150E3440: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x150E3444: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x150E3448: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x150E344C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150E3450: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x150E3454: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x150E3458: addiu       $t1, $zero, -0x63
    ctx->r9 = ADD32(0, -0X63);
    // 0x150E345C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x150E3460: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150E3464: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x150E3468: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x150E346C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x150E3470: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x150E3474: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150E3478: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x150E347C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150E3480: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150E3484: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150E3488: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150E348C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x150E3490: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150E3494: jal         0x150E3020
    // 0x150E3498: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_150E3020(rdram, ctx);
        goto after_0;
    // 0x150E3498: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_0:
    // 0x150E349C: beq         $v0, $zero, L_150E3500
    if (ctx->r2 == 0) {
        // 0x150E34A0: addiu       $a0, $zero, 0x2D0
        ctx->r4 = ADD32(0, 0X2D0);
            goto L_150E3500;
    }
    // 0x150E34A0: addiu       $a0, $zero, 0x2D0
    ctx->r4 = ADD32(0, 0X2D0);
    // 0x150E34A4: lui         $t5, 0x150E
    ctx->r13 = S32(0X150E << 16);
    // 0x150E34A8: addiu       $t5, $t5, 0x33CC
    ctx->r13 = ADD32(ctx->r13, 0X33CC);
    // 0x150E34AC: addiu       $t2, $zero, 0x5DC0
    ctx->r10 = ADD32(0, 0X5DC0);
    // 0x150E34B0: addiu       $t3, $zero, 0x1770
    ctx->r11 = ADD32(0, 0X1770);
    // 0x150E34B4: addiu       $t4, $zero, 0x3E8
    ctx->r12 = ADD32(0, 0X3E8);
    // 0x150E34B8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150E34BC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150E34C0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150E34C4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x150E34C8: lh          $a1, 0x4A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X4A);
    // 0x150E34CC: lh          $a2, 0x4E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X4E);
    // 0x150E34D0: lh          $a3, 0x52($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X52);
    // 0x150E34D4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150E34D8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150E34DC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150E34E0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150E34E4: jal         0x1000FA64
    // 0x150E34E8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_1000FA64(rdram, ctx);
        goto after_1;
    // 0x150E34E8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_1:
    // 0x150E34EC: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x150E34F0: sh          $v0, 0x4A($v1)
    MEM_H(0X4A, ctx->r3) = ctx->r2;
    // 0x150E34F4: lbu         $v0, 0x48($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X48);
    // 0x150E34F8: b           L_150E3504
    // 0x150E34FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_150E3504;
    // 0x150E34FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_150E3500:
    // 0x150E3500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150E3504:
    // 0x150E3504: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150E3508: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150E350C: jr          $ra
    // 0x150E3510: nop

    return;
    return;
    // 0x150E3510: nop

;}
RECOMP_FUNC void func_1512D2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512D2E4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1512D2E8: sw          $a1, 0x850($a0)
    MEM_W(0X850, ctx->r4) = ctx->r5;
    // 0x1512D2EC: sb          $t6, 0x84D($a0)
    MEM_B(0X84D, ctx->r4) = ctx->r14;
    // 0x1512D2F0: jr          $ra
    // 0x1512D2F4: nop

    return;
    return;
    // 0x1512D2F4: nop

;}
RECOMP_FUNC void func_151150B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151150B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x151150B4: jr          $ra
    // 0x151150B8: nop

    return;
    return;
    // 0x151150B8: nop

;}
RECOMP_FUNC void func_1515FC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515FC34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1515FC38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515FC3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1515FC40: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x1515FC44: ori         $a2, $zero, 0xC000
    ctx->r6 = 0 | 0XC000;
    // 0x1515FC48: jal         0x1505D024
    // 0x1515FC4C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_1505D024(rdram, ctx);
        goto after_0;
    // 0x1515FC4C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x1515FC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515FC54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1515FC58: jr          $ra
    // 0x1515FC5C: nop

    return;
    return;
    // 0x1515FC5C: nop

;}
RECOMP_FUNC void func_151580B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151580B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151580B4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x151580B8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x151580BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151580C0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x151580C4: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x151580C8: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x151580CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151580D0: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x151580D4: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x151580D8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151580DC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x151580E0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x151580E4: beq         $a3, $zero, L_151580F4
    if (ctx->r7 == 0) {
        // 0x151580E8: lw          $a1, 0x50($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X50);
            goto L_151580F4;
    }
    // 0x151580E8: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x151580EC: b           L_151580F8
    // 0x151580F0: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
        goto L_151580F8;
    // 0x151580F0: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
L_151580F4:
    // 0x151580F4: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
L_151580F8:
    // 0x151580F8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x151580FC: lbu         $t7, 0x4F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4F);
    // 0x15158100: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15158104: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15158108: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1515810C: addiu       $a2, $a2, 0xF8
    ctx->r6 = ADD32(ctx->r6, 0XF8);
    // 0x15158110: jal         0x15167A68
    // 0x15158114: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x15158114: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x15158118: bne         $v0, $zero, L_15158128
    if (ctx->r2 != 0) {
        // 0x1515811C: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_15158128;
    }
    // 0x1515811C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x15158120: b           L_151581B8
    // 0x15158124: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151581B8;
    // 0x15158124: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15158128:
    // 0x15158128: addiu       $a0, $s4, 0x10
    ctx->r4 = ADD32(ctx->r20, 0X10);
    // 0x1515812C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15158130: jal         0x10022EC0
    // 0x15158134: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15158134: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    after_1:
    // 0x15158138: sw          $s3, 0xD8($s4)
    MEM_W(0XD8, ctx->r20) = ctx->r19;
    // 0x1515813C: sw          $s2, 0xF4($s4)
    MEM_W(0XF4, ctx->r20) = ctx->r18;
    // 0x15158140: sb          $zero, 0xDC($s4)
    MEM_B(0XDC, ctx->r20) = 0;
    // 0x15158144: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15158148: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
L_1515814C:
    // 0x1515814C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15158150: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x15158154: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15158158: bne         $at, $zero, L_1515814C
    if (ctx->r1 != 0) {
        // 0x1515815C: sw          $zero, 0xDC($s0)
        MEM_W(0XDC, ctx->r16) = 0;
            goto L_1515814C;
    }
    // 0x1515815C: sw          $zero, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = 0;
    // 0x15158160: beq         $s3, $zero, L_151581B4
    if (ctx->r19 == 0) {
        // 0x15158164: sw          $zero, 0xF0($s4)
        MEM_W(0XF0, ctx->r20) = 0;
            goto L_151581B4;
    }
    // 0x15158164: sw          $zero, 0xF0($s4)
    MEM_W(0XF0, ctx->r20) = 0;
    // 0x15158168: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x1515816C: addiu       $s2, $s2, 0x2FA0
    ctx->r18 = ADD32(ctx->r18, 0X2FA0);
    // 0x15158170: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x15158174: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15158178: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x1515817C: bltz        $t9, L_151581A8
    if (SIGNED(ctx->r25) < 0) {
        // 0x15158180: nop
    
            goto L_151581A8;
    }
    // 0x15158180: nop

L_15158184:
    // 0x15158184: jal         0x1515D480
    // 0x15158188: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_1515D480(rdram, ctx);
        goto after_2;
    // 0x15158188: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x1515818C: sw          $v0, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r2;
    // 0x15158190: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x15158194: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15158198: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1515819C: slt         $at, $t0, $s1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x151581A0: beq         $at, $zero, L_15158184
    if (ctx->r1 == 0) {
        // 0x151581A4: nop
    
            goto L_15158184;
    }
    // 0x151581A4: nop

L_151581A8:
    // 0x151581A8: jal         0x1515D440
    // 0x151581AC: nop

    func_1515D440(rdram, ctx);
        goto after_3;
    // 0x151581AC: nop

    after_3:
    // 0x151581B0: sw          $v0, 0xF0($s4)
    MEM_W(0XF0, ctx->r20) = ctx->r2;
L_151581B4:
    // 0x151581B4: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_151581B8:
    // 0x151581B8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151581BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151581C0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x151581C4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x151581C8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x151581CC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x151581D0: jr          $ra
    // 0x151581D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x151581D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_15015E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15015E80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15015E84: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x15015E88: addiu       $t0, $t0, 0xDF0
    ctx->r8 = ADD32(ctx->r8, 0XDF0);
    // 0x15015E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15015E90: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x15015E94: addiu       $t6, $zero, 0x1F40
    ctx->r14 = ADD32(0, 0X1F40);
    // 0x15015E98: lhu         $v1, 0x1C($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X1C);
    // 0x15015E9C: bnel        $v1, $zero, L_15015EB4
    if (ctx->r3 != 0) {
        // 0x15015EA0: addiu       $t7, $v1, 0x190
        ctx->r15 = ADD32(ctx->r3, 0X190);
            goto L_15015EB4;
    }
    goto skip_0;
    // 0x15015EA0: addiu       $t7, $v1, 0x190
    ctx->r15 = ADD32(ctx->r3, 0X190);
    skip_0:
    // 0x15015EA4: sh          $t6, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r14;
    // 0x15015EA8: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x15015EAC: lhu         $v1, 0x1C($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X1C);
    // 0x15015EB0: addiu       $t7, $v1, 0x190
    ctx->r15 = ADD32(ctx->r3, 0X190);
L_15015EB4:
    // 0x15015EB4: sh          $t7, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r15;
    // 0x15015EB8: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x15015EBC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15015EC0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15015EC4: lhu         $a0, 0x1C($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X1C);
    // 0x15015EC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15015ECC: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x15015ED0: jal         0x10003C40
    // 0x15015ED4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15015ED4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_0:
    // 0x15015ED8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15015EDC: addiu       $v1, $v1, -0x1638
    ctx->r3 = ADD32(ctx->r3, -0X1638);
    // 0x15015EE0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x15015EE4: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x15015EE8: lw          $t1, 0xDF0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XDF0);
    // 0x15015EEC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15015EF0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15015EF4: lhu         $a0, 0x1C($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X1C);
    // 0x15015EF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15015EFC: sll         $t2, $a0, 3
    ctx->r10 = S32(ctx->r4 << 3);
    // 0x15015F00: jal         0x10003C40
    // 0x15015F04: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x15015F04: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_1:
    // 0x15015F08: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15015F0C: addiu       $v1, $v1, -0x1638
    ctx->r3 = ADD32(ctx->r3, -0X1638);
    // 0x15015F10: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x15015F14: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x15015F18: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15015F1C: subu        $t5, $v0, $t4
    ctx->r13 = SUB32(ctx->r2, ctx->r12);
    // 0x15015F20: sra         $t6, $t5, 3
    ctx->r14 = S32(SIGNED(ctx->r13) >> 3);
    // 0x15015F24: addiu       $t7, $t6, -0x190
    ctx->r15 = ADD32(ctx->r14, -0X190);
    // 0x15015F28: sw          $t7, -0x145C($at)
    MEM_W(-0X145C, ctx->r1) = ctx->r15;
    // 0x15015F2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15015F30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15015F34: jr          $ra
    // 0x15015F38: nop

    return;
    return;
    // 0x15015F38: nop

;}
RECOMP_FUNC void func_15133894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15133894: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15133898: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1513389C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151338A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151338A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151338A8: sb          $t6, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r14;
    // 0x151338AC: lw          $at, 0x38($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X38);
    // 0x151338B0: addiu       $t7, $sp, 0x40
    ctx->r15 = ADD32(ctx->r29, 0X40);
    // 0x151338B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151338B8: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151338BC: lw          $t0, 0x3C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X3C);
    // 0x151338C0: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x151338C4: lw          $at, 0x40($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X40);
    // 0x151338C8: jal         0x151337C0
    // 0x151338CC: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    func_151337C0(rdram, ctx);
        goto after_0;
    // 0x151338CC: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    after_0:
    // 0x151338D0: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x151338D4: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x151338D8: beql        $t2, $zero, L_151339C0
    if (ctx->r10 == 0) {
        // 0x151338DC: lb          $v0, 0x4F($sp)
        ctx->r2 = MEM_B(ctx->r29, 0X4F);
            goto L_151339C0;
    }
    goto skip_0;
    // 0x151338DC: lb          $v0, 0x4F($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X4F);
    skip_0:
    // 0x151338E0: lbu         $t3, 0x73($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X73);
    // 0x151338E4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151338E8: beql        $t3, $zero, L_151339C0
    if (ctx->r11 == 0) {
        // 0x151338EC: lb          $v0, 0x4F($sp)
        ctx->r2 = MEM_B(ctx->r29, 0X4F);
            goto L_151339C0;
    }
    goto skip_1;
    // 0x151338EC: lb          $v0, 0x4F($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X4F);
    skip_1:
    // 0x151338F0: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151338F4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x151338F8: nop

    // 0x151338FC: bc1fl       L_151339C0
    if (!c1cs) {
        // 0x15133900: lb          $v0, 0x4F($sp)
        ctx->r2 = MEM_B(ctx->r29, 0X4F);
            goto L_151339C0;
    }
    goto skip_2;
    // 0x15133900: lb          $v0, 0x4F($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X4F);
    skip_2:
    // 0x15133904: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15133908: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x1513390C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15133910: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x15133914: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15133918: addiu       $a3, $s0, 0x110
    ctx->r7 = ADD32(ctx->r16, 0X110);
    // 0x1513391C: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15133920: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x15133924: lwc1        $f18, 0x40($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X40);
    // 0x15133928: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x1513392C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15133930: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15133934: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15133938: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x1513393C: jal         0x15046C80
    // 0x15133940: nop

    func_15046C80(rdram, ctx);
        goto after_1;
    // 0x15133940: nop

    after_1:
    // 0x15133944: beql        $v0, $zero, L_151339C0
    if (ctx->r2 == 0) {
        // 0x15133948: lb          $v0, 0x4F($sp)
        ctx->r2 = MEM_B(ctx->r29, 0X4F);
            goto L_151339C0;
    }
    goto skip_3;
    // 0x15133948: lb          $v0, 0x4F($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X4F);
    skip_3:
    // 0x1513394C: lw          $a0, 0x130($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X130);
    // 0x15133950: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15133954: beq         $a0, $zero, L_15133974
    if (ctx->r4 == 0) {
        // 0x15133958: nop
    
            goto L_15133974;
    }
    // 0x15133958: nop

    // 0x1513395C: lbu         $t4, 0x4F($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X4F);
    // 0x15133960: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x15133964: andi        $t5, $t4, 0x60
    ctx->r13 = ctx->r12 & 0X60;
    // 0x15133968: bne         $t5, $at, L_15133974
    if (ctx->r13 != ctx->r1) {
        // 0x1513396C: nop
    
            goto L_15133974;
    }
    // 0x1513396C: nop

    // 0x15133970: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15133974:
    // 0x15133974: bnel        $v1, $zero, L_151339C0
    if (ctx->r3 != 0) {
        // 0x15133978: lb          $v0, 0x4F($sp)
        ctx->r2 = MEM_B(ctx->r29, 0X4F);
            goto L_151339C0;
    }
    goto skip_4;
    // 0x15133978: lb          $v0, 0x4F($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X4F);
    skip_4:
    // 0x1513397C: lwc1        $f6, 0x110($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X110);
    // 0x15133980: addiu       $t6, $s0, 0x114
    ctx->r14 = ADD32(ctx->r16, 0X114);
    // 0x15133984: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15133988: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x1513398C: lbu         $t9, 0x73($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X73);
    // 0x15133990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15133994: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x15133998: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x1513399C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151339A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151339A4: lw          $t9, -0x66CC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X66CC);
    // 0x151339A8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x151339AC: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x151339B0: jalr        $t9
    // 0x151339B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x151339B4: nop

    after_2:
    // 0x151339B8: sb          $v0, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r2;
    // 0x151339BC: lb          $v0, 0x4F($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X4F);
L_151339C0:
    // 0x151339C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151339C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151339C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151339CC: jr          $ra
    // 0x151339D0: nop

    return;
    return;
    // 0x151339D0: nop

;}
RECOMP_FUNC void func_100107F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100107F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x100107FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10010800: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x10010804: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x10010808: bnel        $t6, $zero, L_1001081C
    if (ctx->r14 != 0) {
        // 0x1001080C: lw          $t7, 0x318($a1)
        ctx->r15 = MEM_W(ctx->r5, 0X318);
            goto L_1001081C;
    }
    goto skip_0;
    // 0x1001080C: lw          $t7, 0x318($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X318);
    skip_0:
    // 0x10010810: b           L_10010884
    // 0x10010814: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_10010884;
    // 0x10010814: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x10010818: lw          $t7, 0x318($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X318);
L_1001081C:
    // 0x1001081C: lui         $a0, 0x1001
    ctx->r4 = S32(0X1001 << 16);
    // 0x10010820: addiu       $a0, $a0, -0x1190
    ctx->r4 = ADD32(ctx->r4, -0X1190);
    // 0x10010824: beql        $t7, $zero, L_10010854
    if (ctx->r15 == 0) {
        // 0x10010828: lbu         $a2, 0x3B($a1)
        ctx->r6 = MEM_BU(ctx->r5, 0X3B);
            goto L_10010854;
    }
    goto skip_1;
    // 0x10010828: lbu         $a2, 0x3B($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X3B);
    skip_1:
    // 0x1001082C: lhu         $a0, 0x8E($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X8E);
    // 0x10010830: beql        $a0, $zero, L_10010880
    if (ctx->r4 == 0) {
        // 0x10010834: sh          $zero, 0x8E($a1)
        MEM_H(0X8E, ctx->r5) = 0;
            goto L_10010880;
    }
    goto skip_2;
    // 0x10010834: sh          $zero, 0x8E($a1)
    MEM_H(0X8E, ctx->r5) = 0;
    skip_2:
    // 0x10010838: jal         0x1000F3D0
    // 0x1001083C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_1000F3D0(rdram, ctx);
        goto after_0;
    // 0x1001083C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x10010840: beq         $v0, $zero, L_1001087C
    if (ctx->r2 == 0) {
        // 0x10010844: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_1001087C;
    }
    // 0x10010844: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x10010848: b           L_10010884
    // 0x1001084C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_10010884;
    // 0x1001084C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x10010850: lbu         $a2, 0x3B($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X3B);
L_10010854:
    // 0x10010854: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x10010858: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x1001085C: or          $t8, $a2, $at
    ctx->r24 = ctx->r6 | ctx->r1;
    // 0x10010860: jal         0x1000FF90
    // 0x10010864: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    func_1000FF90(rdram, ctx);
        goto after_1;
    // 0x10010864: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    after_1:
    // 0x10010868: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1001086C: beq         $v0, $at, L_1001087C
    if (ctx->r2 == ctx->r1) {
        // 0x10010870: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_1001087C;
    }
    // 0x10010870: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x10010874: b           L_10010884
    // 0x10010878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_10010884;
    // 0x10010878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1001087C:
    // 0x1001087C: sh          $zero, 0x8E($a1)
    MEM_H(0X8E, ctx->r5) = 0;
L_10010880:
    // 0x10010880: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_10010884:
    // 0x10010884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10010888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1001088C: jr          $ra
    // 0x10010890: nop

    return;
    return;
    // 0x10010890: nop

;}
RECOMP_FUNC void func_1501A39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501A39C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1501A3A0: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x1501A3A4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x1501A3A8: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x1501A3AC: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x1501A3B0: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x1501A3B4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1501A3B8: lui         $a3, 0x8003
    ctx->r7 = S32(0X8003 << 16);
    // 0x1501A3BC: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1501A3C0: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x1501A3C4: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x1501A3C8: lui         $s2, 0xDC08
    ctx->r18 = S32(0XDC08 << 16);
    // 0x1501A3CC: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x1501A3D0: addiu       $s1, $s1, -0x163C
    ctx->r17 = ADD32(ctx->r17, -0X163C);
    // 0x1501A3D4: ori         $s2, $s2, 0x8
    ctx->r18 = ctx->r18 | 0X8;
    // 0x1501A3D8: addiu       $s3, $s3, -0x19D8
    ctx->r19 = ADD32(ctx->r19, -0X19D8);
    // 0x1501A3DC: addiu       $s4, $s4, -0x1620
    ctx->r20 = ADD32(ctx->r20, -0X1620);
    // 0x1501A3E0: addiu       $t3, $t3, -0x1628
    ctx->r11 = ADD32(ctx->r11, -0X1628);
    // 0x1501A3E4: addiu       $a3, $a3, -0x36D0
    ctx->r7 = ADD32(ctx->r7, -0X36D0);
    // 0x1501A3E8: addiu       $v1, $v1, -0x1638
    ctx->r3 = ADD32(ctx->r3, -0X1638);
    // 0x1501A3EC: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x1501A3F0: lui         $s0, 0xFE00
    ctx->r16 = S32(0XFE00 << 16);
    // 0x1501A3F4: lui         $t5, 0xDE00
    ctx->r13 = S32(0XDE00 << 16);
    // 0x1501A3F8: lui         $t4, 0xDB06
    ctx->r12 = S32(0XDB06 << 16);
L_1501A3FC:
    // 0x1501A3FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1501A400: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1501A404: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x1501A408: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x1501A40C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1501A410: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1501A414: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x1501A418: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x1501A41C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1501A420: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x1501A424: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x1501A428: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    // 0x1501A42C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1501A430: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x1501A434: sw          $s0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r16;
    // 0x1501A438: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x1501A43C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1501A440: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x1501A444: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x1501A448: sw          $s2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r18;
    // 0x1501A44C: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x1501A450: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1501A454: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1501A458: addu        $t8, $t7, $t2
    ctx->r24 = ADD32(ctx->r15, ctx->r10);
    // 0x1501A45C: addiu       $t9, $t8, 0x40
    ctx->r25 = ADD32(ctx->r24, 0X40);
    // 0x1501A460: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x1501A464: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x1501A468: addiu       $t2, $t2, 0x10
    ctx->r10 = ADD32(ctx->r10, 0X10);
    // 0x1501A46C: bne         $t3, $s4, L_1501A3FC
    if (ctx->r11 != ctx->r20) {
        // 0x1501A470: sw          $v0, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r2;
            goto L_1501A3FC;
    }
    // 0x1501A470: sw          $v0, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r2;
    // 0x1501A474: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x1501A478: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x1501A47C: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x1501A480: lw          $s3, 0x10($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X10);
    // 0x1501A484: lw          $s4, 0x14($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X14);
    // 0x1501A488: jr          $ra
    // 0x1501A48C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1501A48C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_10005B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10005B04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x10005B08: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x10005B0C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x10005B10: mtc0        $zero, Context
    // mtc0 cop0 reg 4
    // 0x10005B14: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x10005B18: mtc0        $t0, Wired
    // mtc0 cop0 reg 6
    // 0x10005B1C: addiu       $t0, $zero, 0x1FC
    ctx->r8 = ADD32(0, 0X1FC);
    // 0x10005B20: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10005B24: sh          $t0, -0x4180($at)
    MEM_H(-0X4180, ctx->r1) = ctx->r8;
    // 0x10005B28: addiu       $t1, $zero, 0x3FF
    ctx->r9 = ADD32(0, 0X3FF);
    // 0x10005B2C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10005B30: sh          $t1, -0x417E($at)
    MEM_H(-0X417E, ctx->r1) = ctx->r9;
    // 0x10005B34: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x10005B38: lh          $s0, -0x4188($s0)
    ctx->r16 = MEM_H(ctx->r16, -0X4188);
L_10005B3C:
    // 0x10005B3C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10005B40: sh          $a0, -0x4188($at)
    MEM_H(-0X4188, ctx->r1) = ctx->r4;
    // 0x10005B44: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    // 0x10005B48: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x10005B4C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x10005B50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x10005B54: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x10005B58: jal         0x10003C6C
    // 0x10005B5C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_10003C6C(rdram, ctx);
        goto after_0;
    // 0x10005B5C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
    // 0x10005B60: bne         $v0, $zero, L_10005B70
    if (ctx->r2 != 0) {
        // 0x10005B64: nop
    
            goto L_10005B70;
    }
    // 0x10005B64: nop

    // 0x10005B68: j           L_10005B3C
    // 0x10005B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_10005B3C;
    // 0x10005B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_10005B70:
    // 0x10005B70: lui         $t0, 0xFFF
    ctx->r8 = S32(0XFFF << 16);
    // 0x10005B74: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x10005B78: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x10005B7C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10005B80: sw          $v0, -0x418C($at)
    MEM_W(-0X418C, ctx->r1) = ctx->r2;
    // 0x10005B84: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10005B88: lh          $a0, -0x4188($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X4188);
    // 0x10005B8C: addiu       $a0, $a0, 0x7
    ctx->r4 = ADD32(ctx->r4, 0X7);
    // 0x10005B90: sra         $a0, $a0, 3
    ctx->r4 = S32(SIGNED(ctx->r4) >> 3);
    // 0x10005B94: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x10005B98: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x10005B9C: jal         0x10003C40
    // 0x10005BA0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x10005BA0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x10005BA4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10005BA8: sw          $v0, -0x4190($at)
    MEM_W(-0X4190, ctx->r1) = ctx->r2;
    // 0x10005BAC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10005BB0: lh          $a0, -0x4188($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X4188);
    // 0x10005BB4: addiu       $a0, $a0, 0x7
    ctx->r4 = ADD32(ctx->r4, 0X7);
    // 0x10005BB8: sra         $a0, $a0, 3
    ctx->r4 = S32(SIGNED(ctx->r4) >> 3);
    // 0x10005BBC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x10005BC0: addu        $v1, $v0, $a0
    ctx->r3 = ADD32(ctx->r2, ctx->r4);
    // 0x10005BC4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10005BC8: sw          $v1, -0x4184($at)
    MEM_W(-0X4184, ctx->r1) = ctx->r3;
    // 0x10005BCC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x10005BD0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x10005BD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x10005BD8: jr          $ra
    // 0x10005BDC: nop

    return;
    return;
    // 0x10005BDC: nop

;}
RECOMP_FUNC void func_151875E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151875E0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151875E4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x151875E8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x151875EC: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x151875F0: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x151875F4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151875F8: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x151875FC: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x15187600: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x15187604: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x15187608: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x1518760C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x15187610: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x15187614: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15187618: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x1518761C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x15187620: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15187624: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15187628: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1518762C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15187630: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x15187634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15187638: addiu       $a2, $zero, 0xB0
    ctx->r6 = ADD32(0, 0XB0);
    // 0x1518763C: jal         0x15167A68
    // 0x15187640: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x15187640: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x15187644: beq         $v0, $zero, L_15187944
    if (ctx->r2 == 0) {
        // 0x15187648: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_15187944;
    }
    // 0x15187648: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1518764C: addiu       $a0, $zero, 0x780
    ctx->r4 = ADD32(0, 0X780);
    // 0x15187650: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15187654: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15187658: jal         0x10003C40
    // 0x1518765C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x1518765C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x15187660: bne         $v0, $zero, L_15187678
    if (ctx->r2 != 0) {
        // 0x15187664: sw          $v0, 0xA4($s1)
        MEM_W(0XA4, ctx->r17) = ctx->r2;
            goto L_15187678;
    }
    // 0x15187664: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x15187668: jal         0x1516972C
    // 0x1518766C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x1518766C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x15187670: b           L_15187948
    // 0x15187674: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_15187948;
    // 0x15187674: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_15187678:
    // 0x15187678: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x1518767C: swc1        $f20, 0x90($s1)
    MEM_W(0X90, ctx->r17) = ctx->f20.u32l;
    // 0x15187680: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15187684: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15187688: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1518768C: swc1        $f4, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->f4.u32l;
    // 0x15187690: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15187694: sh          $zero, 0xA8($s1)
    MEM_H(0XA8, ctx->r17) = 0;
    // 0x15187698: sh          $s6, 0xAA($s1)
    MEM_H(0XAA, ctx->r17) = ctx->r22;
    // 0x1518769C: swc1        $f6, 0x98($s1)
    MEM_W(0X98, ctx->r17) = ctx->f6.u32l;
    // 0x151876A0: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x151876A4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x151876A8: addiu       $fp, $zero, 0x438
    ctx->r30 = ADD32(0, 0X438);
    // 0x151876AC: swc1        $f8, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->f8.u32l;
    // 0x151876B0: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x151876B4: addiu       $s5, $zero, 0x7
    ctx->r21 = ADD32(0, 0X7);
    // 0x151876B8: swc1        $f10, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->f10.u32l;
    // 0x151876BC: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
L_151876C0:
    // 0x151876C0: slti        $at, $s3, 0x168
    ctx->r1 = SIGNED(ctx->r19) < 0X168 ? 1 : 0;
    // 0x151876C4: beql        $at, $zero, L_15187758
    if (ctx->r1 == 0) {
        // 0x151876C8: slti        $at, $s3, 0x2D0
        ctx->r1 = SIGNED(ctx->r19) < 0X2D0 ? 1 : 0;
            goto L_15187758;
    }
    goto skip_0;
    // 0x151876C8: slti        $at, $s3, 0x2D0
    ctx->r1 = SIGNED(ctx->r19) < 0X2D0 ? 1 : 0;
    skip_0:
    // 0x151876CC: jal         0x150ADA20
    // 0x151876D0: addiu       $s2, $s3, -0x1E
    ctx->r18 = ADD32(ctx->r19, -0X1E);
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151876D0: addiu       $s2, $s3, -0x1E
    ctx->r18 = ADD32(ctx->r19, -0X1E);
    after_3:
    // 0x151876D4: andi        $t8, $v0, 0xF
    ctx->r24 = ctx->r2 & 0XF;
    // 0x151876D8: subu        $t9, $s5, $t8
    ctx->r25 = SUB32(ctx->r21, ctx->r24);
    // 0x151876DC: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x151876E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151876E4: bgez        $t9, L_151876F8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x151876E8: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_151876F8;
    }
    // 0x151876E8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151876EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151876F0: nop

    // 0x151876F4: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_151876F8:
    // 0x151876F8: lw          $t0, 0xA4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XA4);
    // 0x151876FC: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x15187700: swc1        $f18, 0x80($t1)
    MEM_W(0X80, ctx->r9) = ctx->f18.u32l;
    // 0x15187704: lw          $t2, 0xA4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XA4);
    // 0x15187708: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x1518770C: jal         0x150ADA20
    // 0x15187710: swc1        $f20, 0x84($t3)
    MEM_W(0X84, ctx->r11) = ctx->f20.u32l;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15187710: swc1        $f20, 0x84($t3)
    MEM_W(0X84, ctx->r11) = ctx->f20.u32l;
    after_4:
    // 0x15187714: andi        $t4, $v0, 0x3F
    ctx->r12 = ctx->r2 & 0X3F;
    // 0x15187718: addu        $t5, $t4, $s2
    ctx->r13 = ADD32(ctx->r12, ctx->r18);
    // 0x1518771C: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x15187720: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15187724: bgez        $t5, L_15187738
    if (SIGNED(ctx->r13) >= 0) {
        // 0x15187728: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_15187738;
    }
    // 0x15187728: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1518772C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15187730: nop

    // 0x15187734: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_15187738:
    // 0x15187738: lw          $t6, 0xA4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XA4);
    // 0x1518773C: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x15187740: swc1        $f8, 0x88($t7)
    MEM_W(0X88, ctx->r15) = ctx->f8.u32l;
    // 0x15187744: lw          $t8, 0xA4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XA4);
    // 0x15187748: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x1518774C: b           L_15187874
    // 0x15187750: sb          $zero, 0x98($t9)
    MEM_B(0X98, ctx->r25) = 0;
        goto L_15187874;
    // 0x15187750: sb          $zero, 0x98($t9)
    MEM_B(0X98, ctx->r25) = 0;
    // 0x15187754: slti        $at, $s3, 0x2D0
    ctx->r1 = SIGNED(ctx->r19) < 0X2D0 ? 1 : 0;
L_15187758:
    // 0x15187758: beq         $at, $zero, L_151877E8
    if (ctx->r1 == 0) {
        // 0x1518775C: nop
    
            goto L_151877E8;
    }
    // 0x1518775C: nop

    // 0x15187760: lw          $t0, 0xA4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XA4);
    // 0x15187764: addiu       $s2, $s3, -0x23A
    ctx->r18 = ADD32(ctx->r19, -0X23A);
    // 0x15187768: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x1518776C: jal         0x150ADA20
    // 0x15187770: swc1        $f20, 0x80($t1)
    MEM_W(0X80, ctx->r9) = ctx->f20.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15187770: swc1        $f20, 0x80($t1)
    MEM_W(0X80, ctx->r9) = ctx->f20.u32l;
    after_5:
    // 0x15187774: andi        $t2, $v0, 0x3F
    ctx->r10 = ctx->r2 & 0X3F;
    // 0x15187778: addu        $t3, $t2, $s2
    ctx->r11 = ADD32(ctx->r10, ctx->r18);
    // 0x1518777C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x15187780: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15187784: bgez        $t3, L_15187798
    if (SIGNED(ctx->r11) >= 0) {
        // 0x15187788: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_15187798;
    }
    // 0x15187788: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1518778C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15187790: nop

    // 0x15187794: add.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f18.fl;
L_15187798:
    // 0x15187798: lw          $t4, 0xA4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XA4);
    // 0x1518779C: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x151877A0: jal         0x150ADA20
    // 0x151877A4: swc1        $f4, 0x84($t5)
    MEM_W(0X84, ctx->r13) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151877A4: swc1        $f4, 0x84($t5)
    MEM_W(0X84, ctx->r13) = ctx->f4.u32l;
    after_6:
    // 0x151877A8: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x151877AC: subu        $t7, $s5, $t6
    ctx->r15 = SUB32(ctx->r21, ctx->r14);
    // 0x151877B0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x151877B4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151877B8: bgez        $t7, L_151877CC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x151877BC: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_151877CC;
    }
    // 0x151877BC: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151877C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151877C4: nop

    // 0x151877C8: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_151877CC:
    // 0x151877CC: lw          $t8, 0xA4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XA4);
    // 0x151877D0: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x151877D4: swc1        $f10, 0x88($t9)
    MEM_W(0X88, ctx->r25) = ctx->f10.u32l;
    // 0x151877D8: lw          $t0, 0xA4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XA4);
    // 0x151877DC: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x151877E0: b           L_15187874
    // 0x151877E4: sb          $zero, 0x98($t1)
    MEM_B(0X98, ctx->r9) = 0;
        goto L_15187874;
    // 0x151877E4: sb          $zero, 0x98($t1)
    MEM_B(0X98, ctx->r9) = 0;
L_151877E8:
    // 0x151877E8: jal         0x150ADA20
    // 0x151877EC: addiu       $s2, $s3, -0x1E
    ctx->r18 = ADD32(ctx->r19, -0X1E);
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151877EC: addiu       $s2, $s3, -0x1E
    ctx->r18 = ADD32(ctx->r19, -0X1E);
    after_7:
    // 0x151877F0: andi        $t2, $v0, 0x3F
    ctx->r10 = ctx->r2 & 0X3F;
    // 0x151877F4: addu        $t3, $t2, $s2
    ctx->r11 = ADD32(ctx->r10, ctx->r18);
    // 0x151877F8: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x151877FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15187800: bgez        $t3, L_15187814
    if (SIGNED(ctx->r11) >= 0) {
        // 0x15187804: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_15187814;
    }
    // 0x15187804: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15187808: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1518780C: nop

    // 0x15187810: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_15187814:
    // 0x15187814: lw          $t4, 0xA4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XA4);
    // 0x15187818: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x1518781C: jal         0x150ADA20
    // 0x15187820: swc1        $f18, 0x80($t5)
    MEM_W(0X80, ctx->r13) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x15187820: swc1        $f18, 0x80($t5)
    MEM_W(0X80, ctx->r13) = ctx->f18.u32l;
    after_8:
    // 0x15187824: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x15187828: addiu       $t7, $zero, 0x61
    ctx->r15 = ADD32(0, 0X61);
    // 0x1518782C: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x15187830: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x15187834: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15187838: bgez        $t8, L_1518784C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1518783C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1518784C;
    }
    // 0x1518783C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15187840: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15187844: nop

    // 0x15187848: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_1518784C:
    // 0x1518784C: lw          $t9, 0xA4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XA4);
    // 0x15187850: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15187854: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x15187858: swc1        $f8, 0x84($t0)
    MEM_W(0X84, ctx->r8) = ctx->f8.u32l;
    // 0x1518785C: lw          $t1, 0xA4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XA4);
    // 0x15187860: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x15187864: swc1        $f20, 0x88($t2)
    MEM_W(0X88, ctx->r10) = ctx->f20.u32l;
    // 0x15187868: lw          $t4, 0xA4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XA4);
    // 0x1518786C: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x15187870: sb          $t3, 0x98($t5)
    MEM_B(0X98, ctx->r13) = ctx->r11;
L_15187874:
    // 0x15187874: slti        $at, $s4, 0x4
    ctx->r1 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x15187878: bnel        $at, $zero, L_151878D0
    if (ctx->r1 != 0) {
        // 0x1518787C: mtc1        $s4, $f6
        ctx->f6.u32l = ctx->r20;
            goto L_151878D0;
    }
    goto skip_1;
    // 0x1518787C: mtc1        $s4, $f6
    ctx->f6.u32l = ctx->r20;
    skip_1:
    // 0x15187880: jal         0x150ADA20
    // 0x15187884: sra         $s2, $s4, 2
    ctx->r18 = S32(SIGNED(ctx->r20) >> 2);
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x15187884: sra         $s2, $s4, 2
    ctx->r18 = S32(SIGNED(ctx->r20) >> 2);
    after_9:
    // 0x15187888: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x1518788C: mfhi        $t7
    ctx->r15 = hi;
    // 0x15187890: addu        $t6, $t7, $s4
    ctx->r14 = ADD32(ctx->r15, ctx->r20);
    // 0x15187894: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x15187898: bne         $s2, $zero, L_151878A4
    if (ctx->r18 != 0) {
        // 0x1518789C: nop
    
            goto L_151878A4;
    }
    // 0x1518789C: nop

    // 0x151878A0: break       7
    do_break(353925280);
L_151878A4:
    // 0x151878A4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151878A8: bgez        $t6, L_151878BC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x151878AC: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_151878BC;
    }
    // 0x151878AC: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151878B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151878B4: nop

    // 0x151878B8: add.s       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f18.fl;
L_151878BC:
    // 0x151878BC: lw          $t8, 0xA4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XA4);
    // 0x151878C0: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x151878C4: b           L_151878E0
    // 0x151878C8: swc1        $f4, 0x8C($t9)
    MEM_W(0X8C, ctx->r25) = ctx->f4.u32l;
        goto L_151878E0;
    // 0x151878C8: swc1        $f4, 0x8C($t9)
    MEM_W(0X8C, ctx->r25) = ctx->f4.u32l;
    // 0x151878CC: mtc1        $s4, $f6
    ctx->f6.u32l = ctx->r20;
L_151878D0:
    // 0x151878D0: lw          $t0, 0xA4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XA4);
    // 0x151878D4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151878D8: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x151878DC: swc1        $f10, 0x8C($t1)
    MEM_W(0X8C, ctx->r9) = ctx->f10.u32l;
L_151878E0:
    // 0x151878E0: jal         0x150ADA20
    // 0x151878E4: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x151878E4: nop

    after_10:
    // 0x151878E8: andi        $t2, $v0, 0xF
    ctx->r10 = ctx->r2 & 0XF;
    // 0x151878EC: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x151878F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151878F4: bgez        $t2, L_15187908
    if (SIGNED(ctx->r10) >= 0) {
        // 0x151878F8: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_15187908;
    }
    // 0x151878F8: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151878FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15187900: nop

    // 0x15187904: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_15187908:
    // 0x15187908: lw          $t4, 0xA4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XA4);
    // 0x1518790C: addu        $t3, $t4, $s0
    ctx->r11 = ADD32(ctx->r12, ctx->r16);
    // 0x15187910: swc1        $f16, 0x90($t3)
    MEM_W(0X90, ctx->r11) = ctx->f16.u32l;
    // 0x15187914: lw          $t5, 0xA4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XA4);
    // 0x15187918: addu        $t7, $t5, $s0
    ctx->r15 = ADD32(ctx->r13, ctx->r16);
    // 0x1518791C: jal         0x150ADA20
    // 0x15187920: sh          $zero, 0x94($t7)
    MEM_H(0X94, ctx->r15) = 0;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x15187920: sh          $zero, 0x94($t7)
    MEM_H(0X94, ctx->r15) = 0;
    after_11:
    // 0x15187924: lw          $t9, 0xA4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XA4);
    // 0x15187928: and         $t6, $v0, $s7
    ctx->r14 = ctx->r2 & ctx->r23;
    // 0x1518792C: addiu       $s3, $s3, 0x5A
    ctx->r19 = ADD32(ctx->r19, 0X5A);
    // 0x15187930: subu        $t8, $s6, $t6
    ctx->r24 = SUB32(ctx->r22, ctx->r14);
    // 0x15187934: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x15187938: addiu       $s0, $s0, 0xA0
    ctx->r16 = ADD32(ctx->r16, 0XA0);
    // 0x1518793C: bne         $s3, $fp, L_151876C0
    if (ctx->r19 != ctx->r30) {
        // 0x15187940: sh          $t8, 0x96($t0)
        MEM_H(0X96, ctx->r8) = ctx->r24;
            goto L_151876C0;
    }
    // 0x15187940: sh          $t8, 0x96($t0)
    MEM_H(0X96, ctx->r8) = ctx->r24;
L_15187944:
    // 0x15187944: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_15187948:
    // 0x15187948: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1518794C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15187950: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x15187954: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x15187958: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x1518795C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x15187960: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x15187964: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x15187968: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x1518796C: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x15187970: jr          $ra
    // 0x15187974: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x15187974: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_151643A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151643A8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151643AC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151643B0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151643B4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151643B8: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x151643BC: bne         $a2, $at, L_151643D8
    if (ctx->r6 != ctx->r1) {
        // 0x151643C0: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_151643D8;
    }
    // 0x151643C0: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151643C4: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x151643C8: lbu         $t7, 0x24($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X24);
    // 0x151643CC: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x151643D0: jr          $ra
    // 0x151643D4: sb          $t8, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r24;
    return;
    return;
    // 0x151643D4: sb          $t8, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r24;
L_151643D8:
    // 0x151643D8: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x151643DC: bne         $v0, $at, L_151643F0
    if (ctx->r2 != ctx->r1) {
        // 0x151643E0: addiu       $v0, $a0, 0x18
        ctx->r2 = ADD32(ctx->r4, 0X18);
            goto L_151643F0;
    }
    // 0x151643E0: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x151643E4: lbu         $t9, 0x24($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X24);
    // 0x151643E8: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x151643EC: sb          $t0, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r8;
L_151643F0:
    // 0x151643F0: jr          $ra
    // 0x151643F4: nop

    return;
    return;
    // 0x151643F4: nop

;}
RECOMP_FUNC void func_1507FF94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507FF94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1507FF98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507FF9C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1507FFA0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1507FFA4: lbu         $t6, 0x3B($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3B);
    // 0x1507FFA8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x1507FFAC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x1507FFB0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x1507FFB4: jal         0x15191B8C
    // 0x1507FFB8: sb          $t6, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r14;
    func_15191B8C(rdram, ctx);
        goto after_0;
    // 0x1507FFB8: sb          $t6, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r14;
    after_0:
    // 0x1507FFBC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x1507FFC0: jal         0x151494E0
    // 0x1507FFC4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_151494E0(rdram, ctx);
        goto after_1;
    // 0x1507FFC4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_1:
    // 0x1507FFC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507FFCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1507FFD0: jr          $ra
    // 0x1507FFD4: nop

    return;
    return;
    // 0x1507FFD4: nop

;}
RECOMP_FUNC void func_151B5240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B5240: addiu       $sp, $sp, -0x5E0
    ctx->r29 = ADD32(ctx->r29, -0X5E0);
    // 0x151B5244: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151B5248: sw          $a0, 0x5E0($sp)
    MEM_W(0X5E0, ctx->r29) = ctx->r4;
    // 0x151B524C: sw          $a1, 0x5E4($sp)
    MEM_W(0X5E4, ctx->r29) = ctx->r5;
    // 0x151B5250: sw          $a2, 0x5E8($sp)
    MEM_W(0X5E8, ctx->r29) = ctx->r6;
    // 0x151B5254: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x151B5258: addiu       $t7, $zero, 0x16
    ctx->r15 = ADD32(0, 0X16);
    // 0x151B525C: sb          $t6, 0x5B4($sp)
    MEM_B(0X5B4, ctx->r29) = ctx->r14;
    // 0x151B5260: sb          $t7, 0x5BC($sp)
    MEM_B(0X5BC, ctx->r29) = ctx->r15;
    // 0x151B5264: jal         0x15083E90
    // 0x151B5268: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_15083E90(rdram, ctx);
        goto after_0;
    // 0x151B5268: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_0:
    // 0x151B526C: sw          $v0, 0x5B0($sp)
    MEM_W(0X5B0, ctx->r29) = ctx->r2;
    // 0x151B5270: jal         0x15083E90
    // 0x151B5274: lbu         $a0, 0x5BC($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5BC);
    func_15083E90(rdram, ctx);
        goto after_1;
    // 0x151B5274: lbu         $a0, 0x5BC($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5BC);
    after_1:
    // 0x151B5278: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x151B527C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151B5280: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x151B5284: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B5288: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B528C: lwc1        $f8, -0x5BE8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5BE8);
    // 0x151B5290: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151B5294: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151B5298: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151B529C: lbu         $t1, 0x5E7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X5E7);
    // 0x151B52A0: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151B52A4: lw          $t2, 0x5E8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5E8);
    // 0x151B52A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151B52AC: addiu       $t9, $zero, 0x15
    ctx->r25 = ADD32(0, 0X15);
    // 0x151B52B0: addiu       $t0, $zero, 0x5A8
    ctx->r8 = ADD32(0, 0X5A8);
    // 0x151B52B4: sw          $v0, 0x5B8($sp)
    MEM_W(0X5B8, ctx->r29) = ctx->r2;
    // 0x151B52B8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151B52BC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151B52C0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151B52C4: lh          $a0, 0x5E2($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X5E2);
    // 0x151B52C8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151B52CC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x151B52D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151B52D4: swc1        $f0, 0x5C8($sp)
    MEM_W(0X5C8, ctx->r29) = ctx->f0.u32l;
    // 0x151B52D8: swc1        $f4, 0x5C0($sp)
    MEM_W(0X5C0, ctx->r29) = ctx->f4.u32l;
    // 0x151B52DC: swc1        $f8, 0x5D0($sp)
    MEM_W(0X5D0, ctx->r29) = ctx->f8.u32l;
    // 0x151B52E0: swc1        $f6, 0x5C4($sp)
    MEM_W(0X5C4, ctx->r29) = ctx->f6.u32l;
    // 0x151B52E4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x151B52E8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x151B52EC: jal         0x15149130
    // 0x151B52F0: swc1        $f16, 0x5CC($sp)
    MEM_W(0X5CC, ctx->r29) = ctx->f16.u32l;
    func_15149130(rdram, ctx);
        goto after_2;
    // 0x151B52F0: swc1        $f16, 0x5CC($sp)
    MEM_W(0X5CC, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x151B52F4: beq         $v0, $zero, L_151B5314
    if (ctx->r2 == 0) {
        // 0x151B52F8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151B5314;
    }
    // 0x151B52F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151B52FC: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151B5300: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x151B5304: addiu       $a2, $zero, 0x5A8
    ctx->r6 = ADD32(0, 0X5A8);
    // 0x151B5308: jal         0x10022EC0
    // 0x151B530C: sw          $v0, 0x5DC($sp)
    MEM_W(0X5DC, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151B530C: sw          $v0, 0x5DC($sp)
    MEM_W(0X5DC, ctx->r29) = ctx->r2;
    after_3:
    // 0x151B5310: lw          $v1, 0x5DC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5DC);
L_151B5314:
    // 0x151B5314: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151B5318: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151B531C: addiu       $sp, $sp, 0x5E0
    ctx->r29 = ADD32(ctx->r29, 0X5E0);
    // 0x151B5320: jr          $ra
    // 0x151B5324: nop

    return;
    return;
    // 0x151B5324: nop

;}
RECOMP_FUNC void func_1514C2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514C2F0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x1514C2F4: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x1514C2F8: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x1514C2FC: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x1514C300: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x1514C304: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x1514C308: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x1514C30C: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x1514C310: mtc1        $a2, $f28
    ctx->f28.u32l = ctx->r6;
    // 0x1514C314: mov.s       $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    ctx->f24.fl = ctx->f14.fl;
    // 0x1514C318: mov.s       $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    ctx->f26.fl = ctx->f12.fl;
    // 0x1514C31C: lbu         $s4, 0xB3($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0XB3);
    // 0x1514C320: lh          $s5, 0xBA($sp)
    ctx->r21 = MEM_H(ctx->r29, 0XBA);
    // 0x1514C324: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x1514C328: sw          $fp, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r30;
    // 0x1514C32C: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x1514C330: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x1514C334: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x1514C338: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x1514C33C: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x1514C340: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x1514C344: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x1514C348: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x1514C34C: andi        $s0, $s4, 0xFF
    ctx->r16 = ctx->r20 & 0XFF;
    // 0x1514C350: blez        $s5, L_1514C428
    if (SIGNED(ctx->r21) <= 0) {
        // 0x1514C354: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_1514C428;
    }
    // 0x1514C354: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1514C358: lbu         $t6, 0xBF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XBF);
    // 0x1514C35C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x1514C360: addiu       $t8, $t8, -0x5600
    ctx->r24 = ADD32(ctx->r24, -0X5600);
    // 0x1514C364: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1514C368: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x1514C36C: lwc1        $f30, 0xC4($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x1514C370: lbu         $fp, 0xCF($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0XCF);
    // 0x1514C374: lw          $s7, 0xC8($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XC8);
    // 0x1514C378: lw          $s6, 0xC0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XC0);
L_1514C37C:
    // 0x1514C37C: addiu       $a0, $s0, -0x40
    ctx->r4 = ADD32(ctx->r16, -0X40);
    // 0x1514C380: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x1514C384: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x1514C388: jal         0x151423D8
    // 0x1514C38C: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x1514C38C: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    after_0:
    // 0x1514C390: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x1514C394: jal         0x151423D8
    // 0x1514C398: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x1514C398: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_1:
    // 0x1514C39C: mul.s       $f4, $f22, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x1514C3A0: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x1514C3A4: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x1514C3A8: sra         $t0, $a1, 16
    ctx->r8 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1514C3AC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x1514C3B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1514C3B4: beq         $v0, $zero, L_1514C404
    if (ctx->r2 == 0) {
        // 0x1514C3B8: add.s       $f2, $f4, $f28
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f28.fl;
            goto L_1514C404;
    }
    // 0x1514C3B8: add.s       $f2, $f4, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x1514C3BC: mul.s       $f6, $f22, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f20.fl);
    // 0x1514C3C0: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x1514C3C4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x1514C3C8: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x1514C3CC: swc1        $f24, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f24.u32l;
    // 0x1514C3D0: swc1        $f28, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f28.u32l;
    // 0x1514C3D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1514C3D8: add.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f26.fl;
    // 0x1514C3DC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x1514C3E0: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x1514C3E4: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x1514C3E8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x1514C3EC: swc1        $f30, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f30.u32l;
    // 0x1514C3F0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1514C3F4: jalr        $v0
    // 0x1514C3F8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x1514C3F8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    after_2:
    // 0x1514C3FC: beql        $v0, $zero, L_1514C42C
    if (ctx->r2 == 0) {
        // 0x1514C400: lw          $ra, 0x9C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X9C);
            goto L_1514C42C;
    }
    goto skip_0;
    // 0x1514C400: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    skip_0:
L_1514C404:
    // 0x1514C404: lb          $t3, 0xB7($sp)
    ctx->r11 = MEM_B(ctx->r29, 0XB7);
    // 0x1514C408: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1514C40C: sll         $t1, $s1, 16
    ctx->r9 = S32(ctx->r17 << 16);
    // 0x1514C410: sra         $s1, $t1, 16
    ctx->r17 = S32(SIGNED(ctx->r9) >> 16);
    // 0x1514C414: addu        $s0, $s2, $t3
    ctx->r16 = ADD32(ctx->r18, ctx->r11);
    // 0x1514C418: andi        $t4, $s0, 0xFF
    ctx->r12 = ctx->r16 & 0XFF;
    // 0x1514C41C: slt         $at, $s1, $s5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x1514C420: bne         $at, $zero, L_1514C37C
    if (ctx->r1 != 0) {
        // 0x1514C424: or          $s0, $t4, $zero
        ctx->r16 = ctx->r12 | 0;
            goto L_1514C37C;
    }
    // 0x1514C424: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
L_1514C428:
    // 0x1514C428: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
L_1514C42C:
    // 0x1514C42C: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x1514C430: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x1514C434: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x1514C438: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x1514C43C: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x1514C440: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x1514C444: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x1514C448: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x1514C44C: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x1514C450: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x1514C454: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x1514C458: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x1514C45C: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x1514C460: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x1514C464: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x1514C468: jr          $ra
    // 0x1514C46C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    return;
    // 0x1514C46C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_15037698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15037698: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1503769C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x150376A0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150376A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150376A8: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x150376AC: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x150376B0: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x150376B4: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x150376B8: beq         $t6, $zero, L_150376E0
    if (ctx->r14 == 0) {
        // 0x150376BC: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_150376E0;
    }
    // 0x150376BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150376C0: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x150376C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150376C8: swc1        $f14, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f14.u32l;
    // 0x150376CC: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150376D0: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x150376D4: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150376D8: b           L_15037870
    // 0x150376DC: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
        goto L_15037870;
    // 0x150376DC: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
L_150376E0:
    // 0x150376E0: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x150376E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150376E8: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x150376EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150376F0: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x150376F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150376F8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150376FC: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x15037700: lw          $a0, -0x3B5C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3B5C);
    // 0x15037704: sll         $t8, $a1, 6
    ctx->r24 = S32(ctx->r5 << 6);
    // 0x15037708: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1503770C: bne         $a0, $zero, L_1503771C
    if (ctx->r4 != 0) {
        // 0x15037710: addu        $v1, $a0, $t8
        ctx->r3 = ADD32(ctx->r4, ctx->r24);
            goto L_1503771C;
    }
    // 0x15037710: addu        $v1, $a0, $t8
    ctx->r3 = ADD32(ctx->r4, ctx->r24);
    // 0x15037714: b           L_15037870
    // 0x15037718: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15037870;
    // 0x15037718: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1503771C:
    // 0x1503771C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15037720: sll         $t9, $a2, 6
    ctx->r25 = S32(ctx->r6 << 6);
    // 0x15037724: addu        $v0, $a0, $t9
    ctx->r2 = ADD32(ctx->r4, ctx->r25);
    // 0x15037728: swc1        $f0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f0.u32l;
    // 0x1503772C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x15037730: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x15037734: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15037738: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x1503773C: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x15037740: swc1        $f0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f0.u32l;
    // 0x15037744: swc1        $f2, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f2.u32l;
    // 0x15037748: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1503774C: swc1        $f2, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f2.u32l;
    // 0x15037750: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x15037754: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x15037758: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1503775C: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x15037760: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x15037764: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x15037768: lwc1        $f16, 0x18($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1503776C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x15037770: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x15037774: lwc1        $f18, 0x30($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X30);
    // 0x15037778: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1503777C: sub.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x15037780: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x15037784: lwc1        $f8, 0x34($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X34);
    // 0x15037788: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1503778C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15037790: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x15037794: lwc1        $f18, 0x38($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X38);
    // 0x15037798: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1503779C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x150377A0: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150377A4: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150377A8: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150377AC: nop

    // 0x150377B0: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x150377B4: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x150377B8: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150377BC: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x150377C0: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x150377C4: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x150377C8: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x150377CC: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150377D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x150377D4: mul.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x150377D8: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150377DC: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150377E0: mul.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x150377E4: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x150377E8: add.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150377EC: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150377F0: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x150377F4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x150377F8: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x150377FC: lwc1        $f10, 0x28($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X28);
    // 0x15037800: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    // 0x15037804: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x15037808: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1503780C: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x15037810: add.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x15037814: jal         0x15038468
    // 0x15037818: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    func_15038468(rdram, ctx);
        goto after_0;
    // 0x15037818: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x1503781C: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15037820: lwc1        $f2, 0x84($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15037824: lwc1        $f14, 0x74($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X74);
    // 0x15037828: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1503782C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15037830: nop

    // 0x15037834: bc1f        L_15037870
    if (!c1cs) {
        // 0x15037838: nop
    
            goto L_15037870;
    }
    // 0x15037838: nop

    // 0x1503783C: neg.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = -ctx->f2.fl;
    // 0x15037840: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x15037844: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x15037848: nop

    // 0x1503784C: bc1f        L_15037870
    if (!c1cs) {
        // 0x15037850: nop
    
            goto L_15037870;
    }
    // 0x15037850: nop

    // 0x15037854: swc1        $f14, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f14.u32l;
    // 0x15037858: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1503785C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15037860: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x15037864: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15037868: b           L_15037870
    // 0x1503786C: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
        goto L_15037870;
    // 0x1503786C: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
L_15037870:
    // 0x15037870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15037874: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x15037878: jr          $ra
    // 0x1503787C: nop

    return;
    return;
    // 0x1503787C: nop

;}
RECOMP_FUNC void func_15183BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15183BA4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15183BA8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x15183BAC: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x15183BB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x15183BB4: addiu       $a2, $a2, 0x72D0
    ctx->r6 = ADD32(ctx->r6, 0X72D0);
    // 0x15183BB8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15183BBC: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
L_15183BC0:
    // 0x15183BC0: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x15183BC4: bnel        $a1, $t6, L_15183BD8
    if (ctx->r5 != ctx->r14) {
        // 0x15183BC8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15183BD8;
    }
    goto skip_0;
    // 0x15183BC8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x15183BCC: b           L_15183BE0
    // 0x15183BD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15183BE0;
    // 0x15183BD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15183BD4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_15183BD8:
    // 0x15183BD8: bne         $v1, $a3, L_15183BC0
    if (ctx->r3 != ctx->r7) {
        // 0x15183BDC: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_15183BC0;
    }
    // 0x15183BDC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_15183BE0:
    // 0x15183BE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15183BE4: beq         $v0, $at, L_15183C1C
    if (ctx->r2 == ctx->r1) {
        // 0x15183BE8: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_15183C1C;
    }
    // 0x15183BE8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15183BEC: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15183BF0: addiu       $t8, $t8, -0x2088
    ctx->r24 = ADD32(ctx->r24, -0X2088);
    // 0x15183BF4: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x15183BF8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x15183BFC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15183C00: lui         $t0, 0xDE00
    ctx->r8 = S32(0XDE00 << 16);
    // 0x15183C04: beql        $t9, $zero, L_15183C20
    if (ctx->r25 == 0) {
        // 0x15183C08: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_15183C20;
    }
    goto skip_1;
    // 0x15183C08: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_1:
    // 0x15183C0C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x15183C10: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x15183C14: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15183C18: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
L_15183C1C:
    // 0x15183C1C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_15183C20:
    // 0x15183C20: jr          $ra
    // 0x15183C24: nop

    return;
    return;
    // 0x15183C24: nop

;}
RECOMP_FUNC void func_151937F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151937F4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151937F8: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x151937FC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15193800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15193804: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x15193808: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x1519380C: beql        $a2, $zero, L_151938D8
    if (ctx->r6 == 0) {
        // 0x15193810: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151938D8;
    }
    goto skip_0;
    // 0x15193810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15193814: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x15193818: lui         $at, 0xC1E0
    ctx->r1 = S32(0XC1E0 << 16);
    // 0x1519381C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x15193820: beq         $t6, $zero, L_151938D4
    if (ctx->r14 == 0) {
        // 0x15193824: addiu       $t9, $zero, 0x1E
        ctx->r25 = ADD32(0, 0X1E);
            goto L_151938D4;
    }
    // 0x15193824: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x15193828: lbu         $t7, 0x3B($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X3B);
    // 0x1519382C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15193830: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x15193834: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15193838: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1519383C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15193840: lui         $at, 0xC268
    ctx->r1 = S32(0XC268 << 16);
    // 0x15193844: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15193848: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x1519384C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15193850: lui         $at, 0xC1F8
    ctx->r1 = S32(0XC1F8 << 16);
    // 0x15193854: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15193858: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519385C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x15193860: lwc1        $f4, -0x7E1C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7E1C);
    // 0x15193864: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
    // 0x15193868: addiu       $t1, $zero, 0x2EE
    ctx->r9 = ADD32(0, 0X2EE);
    // 0x1519386C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x15193870: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x15193874: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x15193878: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x1519387C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x15193880: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15193884: sb          $zero, 0x24($sp)
    MEM_B(0X24, ctx->r29) = 0;
    // 0x15193888: sb          $t8, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r24;
    // 0x1519388C: sh          $t9, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r25;
    // 0x15193890: sh          $t0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r8;
    // 0x15193894: sh          $t1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r9;
    // 0x15193898: sb          $t2, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r10;
    // 0x1519389C: sb          $t3, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r11;
    // 0x151938A0: sb          $t4, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r12;
    // 0x151938A4: sb          $t5, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r13;
    // 0x151938A8: sb          $t6, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r14;
    // 0x151938AC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151938B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151938B4: sb          $t7, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r15;
    // 0x151938B8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x151938BC: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x151938C0: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x151938C4: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x151938C8: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x151938CC: jal         0x15134DAC
    // 0x151938D0: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    func_15134DAC(rdram, ctx);
        goto after_0;
    // 0x151938D0: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    after_0:
L_151938D4:
    // 0x151938D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151938D8:
    // 0x151938D8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151938DC: jr          $ra
    // 0x151938E0: nop

    return;
    return;
    // 0x151938E0: nop

;}
RECOMP_FUNC void func_150BA424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BA424: lwc1        $f4, 0x38($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X38);
    // 0x150BA428: lwc1        $f6, 0x124($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X124);
    // 0x150BA42C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150BA430: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150BA434: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x150BA438: nop

    // 0x150BA43C: bc1fl       L_150BA450
    if (!c1cs) {
        // 0x150BA440: trunc.w.s   $f10, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_150BA450;
    }
    goto skip_0;
    // 0x150BA440: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_0:
    // 0x150BA444: jr          $ra
    // 0x150BA448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150BA448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150BA44C: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
L_150BA450:
    // 0x150BA450: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x150BA454: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x150BA458: slti        $at, $t6, 0x100
    ctx->r1 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x150BA45C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x150BA460: bne         $at, $zero, L_150BA46C
    if (ctx->r1 != 0) {
        // 0x150BA464: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_150BA46C;
    }
    // 0x150BA464: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x150BA468: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_150BA46C:
    // 0x150BA46C: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x150BA470: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x150BA474: bnel        $at, $zero, L_150BA484
    if (ctx->r1 != 0) {
        // 0x150BA478: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_150BA484;
    }
    goto skip_1;
    // 0x150BA478: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    skip_1:
    // 0x150BA47C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x150BA480: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
L_150BA484:
    // 0x150BA484: beql        $at, $zero, L_150BA498
    if (ctx->r1 == 0) {
        // 0x150BA488: sb          $v0, 0x5C($a0)
        MEM_B(0X5C, ctx->r4) = ctx->r2;
            goto L_150BA498;
    }
    goto skip_2;
    // 0x150BA488: sb          $v0, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r2;
    skip_2:
    // 0x150BA48C: b           L_150BA498
    // 0x150BA490: sb          $v1, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r3;
        goto L_150BA498;
    // 0x150BA490: sb          $v1, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r3;
    // 0x150BA494: sb          $v0, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r2;
L_150BA498:
    // 0x150BA498: lbu         $t9, 0x5C($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X5C);
    // 0x150BA49C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150BA4A0: bgez        $t9, L_150BA4B0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x150BA4A4: nop
    
            goto L_150BA4B0;
    }
    // 0x150BA4A4: nop

    // 0x150BA4A8: jr          $ra
    // 0x150BA4AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150BA4AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150BA4B0:
    // 0x150BA4B0: jr          $ra
    // 0x150BA4B4: nop

    return;
    return;
    // 0x150BA4B4: nop

;}
RECOMP_FUNC void func_151DB15C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DB15C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151DB160: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151DB164: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151DB168: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151DB16C: jal         0x150ADA20
    // 0x151DB170: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151DB170: nop

    after_0:
    // 0x151DB174: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151DB178: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB17C: mfhi        $t6
    ctx->r14 = hi;
    // 0x151DB180: addiu       $t7, $t6, 0x50
    ctx->r15 = ADD32(ctx->r14, 0X50);
    // 0x151DB184: jal         0x150ADA20
    // 0x151DB188: sb          $t7, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151DB188: sb          $t7, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r15;
    after_1:
    // 0x151DB18C: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151DB190: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB194: mfhi        $t8
    ctx->r24 = hi;
    // 0x151DB198: addiu       $t9, $t8, 0x50
    ctx->r25 = ADD32(ctx->r24, 0X50);
    // 0x151DB19C: sb          $t9, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r25;
    // 0x151DB1A0: jal         0x150ADA20
    // 0x151DB1A4: sb          $zero, 0x16($s0)
    MEM_B(0X16, ctx->r16) = 0;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151DB1A4: sb          $zero, 0x16($s0)
    MEM_B(0X16, ctx->r16) = 0;
    after_2:
    // 0x151DB1A8: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x151DB1AC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB1B0: mfhi        $t0
    ctx->r8 = hi;
    // 0x151DB1B4: addiu       $t1, $t0, 0xB4
    ctx->r9 = ADD32(ctx->r8, 0XB4);
    // 0x151DB1B8: jal         0x150ADA20
    // 0x151DB1BC: sb          $t1, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151DB1BC: sb          $t1, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r9;
    after_3:
    // 0x151DB1C0: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x151DB1C4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB1C8: mfhi        $t2
    ctx->r10 = hi;
    // 0x151DB1CC: addiu       $t3, $t2, 0xB4
    ctx->r11 = ADD32(ctx->r10, 0XB4);
    // 0x151DB1D0: sb          $t3, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r11;
    // 0x151DB1D4: sb          $zero, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = 0;
    // 0x151DB1D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151DB1DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151DB1E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151DB1E4: jr          $ra
    // 0x151DB1E8: nop

    return;
    return;
    // 0x151DB1E8: nop

;}
RECOMP_FUNC void func_15125594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15125594: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15125598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1512559C: jal         0x1512523C
    // 0x151255A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1512523C(rdram, ctx);
        goto after_0;
    // 0x151255A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151255A4: jal         0x15125330
    // 0x151255A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15125330(rdram, ctx);
        goto after_1;
    // 0x151255A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151255AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151255B0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x151255B4: lwc1        $f0, 0x37C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X37C);
    // 0x151255B8: lwc1        $f2, 0x5E8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X5E8);
    // 0x151255BC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x151255C0: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x151255C4: bc1f        L_151255E0
    if (!c1cs) {
        // 0x151255C8: swc1        $f4, 0x380($a0)
        MEM_W(0X380, ctx->r4) = ctx->f4.u32l;
            goto L_151255E0;
    }
    // 0x151255C8: swc1        $f4, 0x380($a0)
    MEM_W(0X380, ctx->r4) = ctx->f4.u32l;
    // 0x151255CC: lwc1        $f6, 0x380($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X380);
    // 0x151255D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151255D4: nop

    // 0x151255D8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151255DC: swc1        $f10, 0x380($a0)
    MEM_W(0X380, ctx->r4) = ctx->f10.u32l;
L_151255E0:
    // 0x151255E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151255E4: lwc1        $f18, 0x3530($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3530);
    // 0x151255E8: lwc1        $f16, 0x380($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X380);
    // 0x151255EC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151255F0: jal         0x15124AB4
    // 0x151255F4: swc1        $f4, 0x3A0($a0)
    MEM_W(0X3A0, ctx->r4) = ctx->f4.u32l;
    func_15124AB4(rdram, ctx);
        goto after_2;
    // 0x151255F4: swc1        $f4, 0x3A0($a0)
    MEM_W(0X3A0, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x151255F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151255FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15125600: jr          $ra
    // 0x15125604: nop

    return;
    return;
    // 0x15125604: nop

;}
RECOMP_FUNC void func_1514F308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F308: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1514F30C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1514F310: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x1514F314: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x1514F318: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x1514F31C: addiu       $t6, $t6, 0x5970
    ctx->r14 = ADD32(ctx->r14, 0X5970);
    // 0x1514F320: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x1514F324: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x1514F328: addiu       $t0, $t0, 0x597C
    ctx->r8 = ADD32(ctx->r8, 0X597C);
    // 0x1514F32C: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x1514F330: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x1514F334: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x1514F338: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x1514F33C: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x1514F340: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x1514F344: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1514F348: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514F34C: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    // 0x1514F350: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x1514F354: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1514F358: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1514F35C: sw          $at, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r1;
    // 0x1514F360: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x1514F364: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1514F368: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514F36C: sw          $t3, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r11;
    // 0x1514F370: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x1514F374: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1514F378: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1514F37C: sw          $at, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r1;
    // 0x1514F380: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514F384: lwc1        $f4, 0x5E58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5E58);
    // 0x1514F388: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x1514F38C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x1514F390: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1514F394: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1514F398: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x1514F39C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x1514F3A0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1514F3A4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x1514F3A8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1514F3AC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x1514F3B0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x1514F3B4: jal         0x15160CDC
    // 0x1514F3B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_15160CDC(rdram, ctx);
        goto after_0;
    // 0x1514F3B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1514F3BC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1514F3C0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x1514F3C4: jr          $ra
    // 0x1514F3C8: nop

    return;
    return;
    // 0x1514F3C8: nop

;}
RECOMP_FUNC void func_15169070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15169070: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15169074: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x15169078: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1516907C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x15169080: andi        $s3, $a3, 0xFF
    ctx->r19 = ctx->r7 & 0XFF;
    // 0x15169084: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15169088: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1516908C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x15169090: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x15169094: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x15169098: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1516909C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x151690A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151690A4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x151690A8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x151690AC: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x151690B0: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x151690B4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x151690B8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x151690BC: jal         0x15143D18
    // 0x151690C0: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_15143D18(rdram, ctx);
        goto after_0;
    // 0x151690C0: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_0:
    // 0x151690C4: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x151690C8: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x151690CC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151690D0: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x151690D4: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151690D8: beq         $at, $zero, L_15169230
    if (ctx->r1 == 0) {
        // 0x151690DC: subu        $t7, $t7, $v1
        ctx->r15 = SUB32(ctx->r15, ctx->r3);
            goto L_15169230;
    }
    // 0x151690DC: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x151690E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151690E4: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x151690E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151690EC: addiu       $t8, $t8, -0x4B58
    ctx->r24 = ADD32(ctx->r24, -0X4B58);
    // 0x151690F0: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x151690F4: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x151690F8: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x151690FC: addiu       $s4, $s4, -0x2E70
    ctx->r20 = ADD32(ctx->r20, -0X2E70);
    // 0x15169100: addiu       $s5, $s5, -0x2E68
    ctx->r21 = ADD32(ctx->r21, -0X2E68);
    // 0x15169104: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x15169108: addu        $s6, $t7, $t8
    ctx->r22 = ADD32(ctx->r15, ctx->r24);
L_1516910C:
    // 0x1516910C: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x15169110: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15169114: addiu       $fp, $t0, -0x31B0
    ctx->r30 = ADD32(ctx->r8, -0X31B0);
    // 0x15169118: addu        $s7, $t1, $fp
    ctx->r23 = ADD32(ctx->r9, ctx->r30);
L_1516911C:
    // 0x1516911C: lw          $t2, 0x1C($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X1C);
    // 0x15169120: beql        $t2, $zero, L_151691A0
    if (ctx->r10 == 0) {
        // 0x15169124: lb          $t3, 0x0($s4)
        ctx->r11 = MEM_B(ctx->r20, 0X0);
            goto L_151691A0;
    }
    goto skip_0;
    // 0x15169124: lb          $t3, 0x0($s4)
    ctx->r11 = MEM_B(ctx->r20, 0X0);
    skip_0:
    // 0x15169128: lb          $t3, 0x0($s4)
    ctx->r11 = MEM_B(ctx->r20, 0X0);
    // 0x1516912C: lw          $s0, 0x0($s7)
    ctx->r16 = MEM_W(ctx->r23, 0X0);
    // 0x15169130: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x15169134: beq         $s0, $zero, L_1516918C
    if (ctx->r16 == 0) {
        // 0x15169138: sb          $t4, 0x0($s4)
        MEM_B(0X0, ctx->r20) = ctx->r12;
            goto L_1516918C;
    }
    // 0x15169138: sb          $t4, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r12;
    // 0x1516913C: lb          $t5, 0x0($s4)
    ctx->r13 = MEM_B(ctx->r20, 0X0);
    // 0x15169140: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x15169144: addu        $s1, $s5, $t6
    ctx->r17 = ADD32(ctx->r21, ctx->r14);
    // 0x15169148: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
L_1516914C:
    // 0x1516914C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15169150: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x15169154: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    // 0x15169158: jal         0x1516968C
    // 0x1516915C: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    func_1516968C(rdram, ctx);
        goto after_1;
    // 0x1516915C: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    after_1:
    // 0x15169160: lw          $t9, 0x1C($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X1C);
    // 0x15169164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15169168: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x1516916C: jalr        $t9
    // 0x15169170: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x15169170: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    after_2:
    // 0x15169174: lb          $t8, 0x0($s4)
    ctx->r24 = MEM_B(ctx->r20, 0X0);
    // 0x15169178: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x1516917C: addu        $s1, $s5, $t1
    ctx->r17 = ADD32(ctx->r21, ctx->r9);
    // 0x15169180: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x15169184: bnel        $s0, $zero, L_1516914C
    if (ctx->r16 != 0) {
        // 0x15169188: lw          $t7, 0x8($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X8);
            goto L_1516914C;
    }
    goto skip_1;
    // 0x15169188: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    skip_1:
L_1516918C:
    // 0x1516918C: lb          $t0, 0x0($s4)
    ctx->r8 = MEM_B(ctx->r20, 0X0);
    // 0x15169190: addiu       $t2, $t0, -0x1
    ctx->r10 = ADD32(ctx->r8, -0X1);
    // 0x15169194: b           L_151691F8
    // 0x15169198: sb          $t2, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r10;
        goto L_151691F8;
    // 0x15169198: sb          $t2, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r10;
    // 0x1516919C: lb          $t3, 0x0($s4)
    ctx->r11 = MEM_B(ctx->r20, 0X0);
L_151691A0:
    // 0x151691A0: lw          $s0, 0x0($s7)
    ctx->r16 = MEM_W(ctx->r23, 0X0);
    // 0x151691A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x151691A8: beq         $s0, $zero, L_151691EC
    if (ctx->r16 == 0) {
        // 0x151691AC: sb          $t4, 0x0($s4)
        MEM_B(0X0, ctx->r20) = ctx->r12;
            goto L_151691EC;
    }
    // 0x151691AC: sb          $t4, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r12;
    // 0x151691B0: lb          $t5, 0x0($s4)
    ctx->r13 = MEM_B(ctx->r20, 0X0);
    // 0x151691B4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x151691B8: addu        $s1, $s5, $t6
    ctx->r17 = ADD32(ctx->r21, ctx->r14);
    // 0x151691BC: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
L_151691C0:
    // 0x151691C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151691C4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x151691C8: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    // 0x151691CC: jal         0x1516968C
    // 0x151691D0: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    func_1516968C(rdram, ctx);
        goto after_3;
    // 0x151691D0: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    after_3:
    // 0x151691D4: lb          $t9, 0x0($s4)
    ctx->r25 = MEM_B(ctx->r20, 0X0);
    // 0x151691D8: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x151691DC: addu        $s1, $s5, $t8
    ctx->r17 = ADD32(ctx->r21, ctx->r24);
    // 0x151691E0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x151691E4: bnel        $s0, $zero, L_151691C0
    if (ctx->r16 != 0) {
        // 0x151691E8: lw          $t7, 0x8($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X8);
            goto L_151691C0;
    }
    goto skip_2;
    // 0x151691E8: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    skip_2:
L_151691EC:
    // 0x151691EC: lb          $t1, 0x0($s4)
    ctx->r9 = MEM_B(ctx->r20, 0X0);
    // 0x151691F0: addiu       $t0, $t1, -0x1
    ctx->r8 = ADD32(ctx->r9, -0X1);
    // 0x151691F4: sb          $t0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r8;
L_151691F8:
    // 0x151691F8: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151691FC: addiu       $t2, $t2, -0x2E70
    ctx->r10 = ADD32(ctx->r10, -0X2E70);
    // 0x15169200: addiu       $fp, $fp, 0x1A0
    ctx->r30 = ADD32(ctx->r30, 0X1A0);
    // 0x15169204: bne         $fp, $t2, L_1516911C
    if (ctx->r30 != ctx->r10) {
        // 0x15169208: addiu       $s7, $s7, 0x1A0
        ctx->r23 = ADD32(ctx->r23, 0X1A0);
            goto L_1516911C;
    }
    // 0x15169208: addiu       $s7, $s7, 0x1A0
    ctx->r23 = ADD32(ctx->r23, 0X1A0);
    // 0x1516920C: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x15169210: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x15169214: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x15169218: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x1516921C: addiu       $t5, $t4, 0x4
    ctx->r13 = ADD32(ctx->r12, 0X4);
    // 0x15169220: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15169224: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x15169228: bne         $at, $zero, L_1516910C
    if (ctx->r1 != 0) {
        // 0x1516922C: addiu       $s6, $s6, 0x34
        ctx->r22 = ADD32(ctx->r22, 0X34);
            goto L_1516910C;
    }
    // 0x1516922C: addiu       $s6, $s6, 0x34
    ctx->r22 = ADD32(ctx->r22, 0X34);
L_15169230:
    // 0x15169230: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15169234: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15169238: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1516923C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15169240: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15169244: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15169248: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1516924C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15169250: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15169254: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15169258: jr          $ra
    // 0x1516925C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    return;
    // 0x1516925C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_10009B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10009B90: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x10009B94: bne         $t6, $zero, L_10009BDC
    if (ctx->r14 != 0) {
        // 0x10009B98: nop
    
            goto L_10009BDC;
    }
    // 0x10009B98: nop

    // 0x10009B9C: lbu         $t7, 0x15($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X15);
    // 0x10009BA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x10009BA4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x10009BA8: bnel        $v0, $t7, L_10009BD4
    if (ctx->r2 != ctx->r15) {
        // 0x10009BAC: lb          $t2, 0x14($a0)
        ctx->r10 = MEM_B(ctx->r4, 0X14);
            goto L_10009BD4;
    }
    goto skip_0;
    // 0x10009BAC: lb          $t2, 0x14($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X14);
    skip_0:
    // 0x10009BB0: lbu         $t8, 0x16($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X16);
    // 0x10009BB4: bne         $v0, $t8, L_10009BC8
    if (ctx->r2 != ctx->r24) {
        // 0x10009BB8: nop
    
            goto L_10009BC8;
    }
    // 0x10009BB8: nop

    // 0x10009BBC: lb          $t9, 0x14($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X14);
    // 0x10009BC0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x10009BC4: sb          $t0, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r8;
L_10009BC8:
    // 0x10009BC8: jr          $ra
    // 0x10009BCC: sb          $t1, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r9;
    return;
    return;
    // 0x10009BCC: sb          $t1, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r9;
    // 0x10009BD0: lb          $t2, 0x14($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X14);
L_10009BD4:
    // 0x10009BD4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x10009BD8: sb          $t3, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r11;
L_10009BDC:
    // 0x10009BDC: jr          $ra
    // 0x10009BE0: nop

    return;
    return;
    // 0x10009BE0: nop

;}
RECOMP_FUNC void func_15080BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15080BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15080BEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15080BF0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15080BF4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15080BF8: sb          $zero, 0x1941($at)
    MEM_B(0X1941, ctx->r1) = 0;
    // 0x15080BFC: jal         0x1516D2E0
    // 0x15080C00: lw          $a0, 0x1950($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1950);
    func_1516D2E0(rdram, ctx);
        goto after_0;
    // 0x15080C00: lw          $a0, 0x1950($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1950);
    after_0:
    // 0x15080C04: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15080C08: jal         0x10004074
    // 0x15080C0C: lw          $a0, 0x1944($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1944);
    func_10004074(rdram, ctx);
        goto after_1;
    // 0x15080C0C: lw          $a0, 0x1944($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1944);
    after_1:
    // 0x15080C10: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15080C14: lw          $v0, 0x1948($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1948);
    // 0x15080C18: beql        $v0, $zero, L_15080C4C
    if (ctx->r2 == 0) {
        // 0x15080C1C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15080C4C;
    }
    goto skip_0;
    // 0x15080C1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_0:
    // 0x15080C20: jal         0x10004074
    // 0x15080C24: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_10004074(rdram, ctx);
        goto after_2;
    // 0x15080C24: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x15080C28: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15080C2C: jal         0x10004074
    // 0x15080C30: lw          $a0, 0x194C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X194C);
    func_10004074(rdram, ctx);
        goto after_3;
    // 0x15080C30: lw          $a0, 0x194C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X194C);
    after_3:
    // 0x15080C34: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15080C38: jal         0x10004074
    // 0x15080C3C: lw          $a0, 0x1998($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1998);
    func_10004074(rdram, ctx);
        goto after_4;
    // 0x15080C3C: lw          $a0, 0x1998($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1998);
    after_4:
    // 0x15080C40: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15080C44: sw          $zero, 0x1948($at)
    MEM_W(0X1948, ctx->r1) = 0;
    // 0x15080C48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_15080C4C:
    // 0x15080C4C: jal         0x151F2D6C
    // 0x15080C50: addiu       $a1, $zero, 0x5622
    ctx->r5 = ADD32(0, 0X5622);
    func_151F2D6C(rdram, ctx);
        goto after_5;
    // 0x15080C50: addiu       $a1, $zero, 0x5622
    ctx->r5 = ADD32(0, 0X5622);
    after_5:
    // 0x15080C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15080C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15080C5C: jr          $ra
    // 0x15080C60: nop

    return;
    return;
    // 0x15080C60: nop

;}
RECOMP_FUNC void func_15083384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15083384: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15083388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1508338C: addiu       $t7, $a1, -0x9
    ctx->r15 = ADD32(ctx->r5, -0X9);
    // 0x15083390: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x15083394: sltiu       $at, $t7, 0x1E
    ctx->r1 = ctx->r15 < 0X1E ? 1 : 0;
    // 0x15083398: beq         $at, $zero, L_1508353C
    if (ctx->r1 == 0) {
        // 0x1508339C: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_1508353C;
    }
    // 0x1508339C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x150833A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150833A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150833A8: addu        $at, $at, $t7
    gpr jr_addend_150833B0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x150833AC: lw          $t7, -0x32AC($at)
    ctx->r15 = ADD32(ctx->r1, -0X32AC);
    // 0x150833B0: jr          $t7
    // 0x150833B4: nop

    switch (jr_addend_150833B0 >> 2) {
        case 0: goto L_150833D0; break;
        case 1: goto L_1508353C; break;
        case 2: goto L_1508353C; break;
        case 3: goto L_1508353C; break;
        case 4: goto L_150833E0; break;
        case 5: goto L_150833EC; break;
        case 6: goto L_150833F8; break;
        case 7: goto L_1508353C; break;
        case 8: goto L_15083468; break;
        case 9: goto L_15083468; break;
        case 10: goto L_15083468; break;
        case 11: goto L_15083468; break;
        case 12: goto L_15083468; break;
        case 13: goto L_15083468; break;
        case 14: goto L_15083468; break;
        case 15: goto L_15083468; break;
        case 16: goto L_15083468; break;
        case 17: goto L_15083468; break;
        case 18: goto L_15083468; break;
        case 19: goto L_15083468; break;
        case 20: goto L_15083410; break;
        case 21: goto L_15083410; break;
        case 22: goto L_15083410; break;
        case 23: goto L_15083410; break;
        case 24: goto L_1508353C; break;
        case 25: goto L_1508353C; break;
        case 26: goto L_1508353C; break;
        case 27: goto L_1508353C; break;
        case 28: goto L_150833B8; break;
        case 29: goto L_150833B8; break;
        default: switch_error(__func__, 0x150833B0, 0x8009CD54);
    }
    // 0x150833B4: nop

L_150833B8:
    // 0x150833B8: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x150833BC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150833C0: beql        $v0, $zero, L_15083540
    if (ctx->r2 == 0) {
        // 0x150833C4: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_15083540;
    }
    goto skip_0;
    // 0x150833C4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x150833C8: b           L_1508353C
    // 0x150833CC: sb          $t8, 0x1B2($v0)
    MEM_B(0X1B2, ctx->r2) = ctx->r24;
        goto L_1508353C;
    // 0x150833CC: sb          $t8, 0x1B2($v0)
    MEM_B(0X1B2, ctx->r2) = ctx->r24;
L_150833D0:
    // 0x150833D0: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x150833D4: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x150833D8: b           L_1508353C
    // 0x150833DC: sw          $t0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r8;
        goto L_1508353C;
    // 0x150833DC: sw          $t0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r8;
L_150833E0:
    // 0x150833E0: addiu       $t1, $zero, 0x76
    ctx->r9 = ADD32(0, 0X76);
    // 0x150833E4: b           L_1508353C
    // 0x150833E8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
        goto L_1508353C;
    // 0x150833E8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_150833EC:
    // 0x150833EC: addiu       $t2, $zero, 0x78
    ctx->r10 = ADD32(0, 0X78);
    // 0x150833F0: b           L_1508353C
    // 0x150833F4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
        goto L_1508353C;
    // 0x150833F4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_150833F8:
    // 0x150833F8: addiu       $t3, $zero, 0x77
    ctx->r11 = ADD32(0, 0X77);
    // 0x150833FC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x15083400: lw          $t4, 0x94($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X94);
    // 0x15083404: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x15083408: b           L_1508353C
    // 0x1508340C: sw          $t5, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r13;
        goto L_1508353C;
    // 0x1508340C: sw          $t5, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r13;
L_15083410:
    // 0x15083410: addiu       $v1, $a1, -0x1D
    ctx->r3 = ADD32(ctx->r5, -0X1D);
    // 0x15083414: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x15083418: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x1508341C: beq         $at, $zero, L_15083434
    if (ctx->r1 == 0) {
        // 0x15083420: sw          $t6, 0x94($a0)
        MEM_W(0X94, ctx->r4) = ctx->r14;
            goto L_15083434;
    }
    // 0x15083420: sw          $t6, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r14;
    // 0x15083424: addiu       $at, $zero, -0x15
    ctx->r1 = ADD32(0, -0X15);
    // 0x15083428: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x1508342C: b           L_15083444
    // 0x15083430: sw          $t8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r24;
        goto L_15083444;
    // 0x15083430: sw          $t8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r24;
L_15083434:
    // 0x15083434: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x15083438: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x1508343C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x15083440: sw          $t0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r8;
L_15083444:
    // 0x15083444: sra         $t1, $v1, 1
    ctx->r9 = S32(SIGNED(ctx->r3) >> 1);
    // 0x15083448: beql        $t1, $zero, L_15083540
    if (ctx->r9 == 0) {
        // 0x1508344C: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_15083540;
    }
    goto skip_1;
    // 0x1508344C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x15083450: lw          $t2, 0x94($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X94);
    // 0x15083454: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x15083458: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x1508345C: sw          $t3, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r11;
    // 0x15083460: b           L_15083540
    // 0x15083464: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
        goto L_15083540;
    // 0x15083464: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_15083468:
    // 0x15083468: addiu       $v1, $a1, -0x11
    ctx->r3 = ADD32(ctx->r5, -0X11);
    // 0x1508346C: addiu       $t4, $zero, 0x3E
    ctx->r12 = ADD32(0, 0X3E);
    // 0x15083470: sra         $t5, $v1, 2
    ctx->r13 = S32(SIGNED(ctx->r3) >> 2);
    // 0x15083474: sw          $t4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r12;
    // 0x15083478: beq         $t5, $zero, L_1508349C
    if (ctx->r13 == 0) {
        // 0x1508347C: or          $v1, $t5, $zero
        ctx->r3 = ctx->r13 | 0;
            goto L_1508349C;
    }
    // 0x1508347C: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x15083480: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15083484: beq         $t5, $at, L_150834B0
    if (ctx->r13 == ctx->r1) {
        // 0x15083488: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_150834B0;
    }
    // 0x15083488: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1508348C: beql        $t5, $at, L_150834C8
    if (ctx->r13 == ctx->r1) {
        // 0x15083490: lw          $t0, 0x94($a0)
        ctx->r8 = MEM_W(ctx->r4, 0X94);
            goto L_150834C8;
    }
    goto skip_2;
    // 0x15083490: lw          $t0, 0x94($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X94);
    skip_2:
    // 0x15083494: b           L_150834D8
    // 0x15083498: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
        goto L_150834D8;
    // 0x15083498: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
L_1508349C:
    // 0x1508349C: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x150834A0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x150834A4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x150834A8: b           L_150834D4
    // 0x150834AC: sw          $t7, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r15;
        goto L_150834D4;
    // 0x150834AC: sw          $t7, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r15;
L_150834B0:
    // 0x150834B0: lw          $t8, 0x94($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X94);
    // 0x150834B4: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x150834B8: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x150834BC: b           L_150834D4
    // 0x150834C0: sw          $t9, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r25;
        goto L_150834D4;
    // 0x150834C0: sw          $t9, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r25;
    // 0x150834C4: lw          $t0, 0x94($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X94);
L_150834C8:
    // 0x150834C8: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x150834CC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x150834D0: sw          $t1, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r9;
L_150834D4:
    // 0x150834D4: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
L_150834D8:
    // 0x150834D8: subu        $v0, $a1, $t2
    ctx->r2 = SUB32(ctx->r5, ctx->r10);
    // 0x150834DC: addiu       $v0, $v0, -0x11
    ctx->r2 = ADD32(ctx->r2, -0X11);
    // 0x150834E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150834E4: beq         $v0, $at, L_15083504
    if (ctx->r2 == ctx->r1) {
        // 0x150834E8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15083504;
    }
    // 0x150834E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150834EC: beq         $v0, $at, L_15083518
    if (ctx->r2 == ctx->r1) {
        // 0x150834F0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15083518;
    }
    // 0x150834F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150834F4: beql        $v0, $at, L_15083530
    if (ctx->r2 == ctx->r1) {
        // 0x150834F8: lw          $t7, 0x94($a0)
        ctx->r15 = MEM_W(ctx->r4, 0X94);
            goto L_15083530;
    }
    goto skip_3;
    // 0x150834F8: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
    skip_3:
    // 0x150834FC: b           L_15083540
    // 0x15083500: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
        goto L_15083540;
    // 0x15083500: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_15083504:
    // 0x15083504: lw          $t3, 0x94($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X94);
    // 0x15083508: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x1508350C: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x15083510: b           L_1508353C
    // 0x15083514: sw          $t4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r12;
        goto L_1508353C;
    // 0x15083514: sw          $t4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r12;
L_15083518:
    // 0x15083518: lw          $t5, 0x94($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X94);
    // 0x1508351C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x15083520: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x15083524: b           L_1508353C
    // 0x15083528: sw          $t6, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r14;
        goto L_1508353C;
    // 0x15083528: sw          $t6, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r14;
    // 0x1508352C: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
L_15083530:
    // 0x15083530: addiu       $at, $zero, -0x23
    ctx->r1 = ADD32(0, -0X23);
    // 0x15083534: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x15083538: sw          $t8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r24;
L_1508353C:
    // 0x1508353C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_15083540:
    // 0x15083540: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15083544: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x15083548: beq         $t9, $at, L_15083558
    if (ctx->r25 == ctx->r1) {
        // 0x1508354C: or          $a1, $t9, $zero
        ctx->r5 = ctx->r25 | 0;
            goto L_15083558;
    }
    // 0x1508354C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x15083550: jal         0x15083568
    // 0x15083554: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15083568(rdram, ctx);
        goto after_0;
    // 0x15083554: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
L_15083558:
    // 0x15083558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1508355C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15083560: jr          $ra
    // 0x15083564: nop

    return;
    return;
    // 0x15083564: nop

;}
RECOMP_FUNC void func_100046E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100046E4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x100046E8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x100046EC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x100046F0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x100046F4: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x100046F8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x100046FC: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x10004700: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x10004704: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x10004708: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x1000470C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x10004710: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x10004714: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x10004718: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1000471C: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10004720: lw          $t6, -0x4200($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4200);
    // 0x10004724: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x10004728: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1000472C: lw          $s0, 0x14($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X14);
    // 0x10004730: addiu       $s0, $s0, -0x3
    ctx->r16 = ADD32(ctx->r16, -0X3);
    // 0x10004734: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x10004738: beql        $at, $zero, L_1000474C
    if (ctx->r1 == 0) {
        // 0x1000473C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_1000474C;
    }
    goto skip_0;
    // 0x1000473C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_0:
    // 0x10004740: bgez        $s0, L_1000474C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x10004744: nop
    
            goto L_1000474C;
    }
    // 0x10004744: nop

    // 0x10004748: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1000474C:
    // 0x1000474C: jal         0x10022D10
    // 0x10004750: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    osInvalDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x10004750: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_0:
    // 0x10004754: beq         $s6, $zero, L_100047DC
    if (ctx->r22 == 0) {
        // 0x10004758: sll         $t7, $s0, 2
        ctx->r15 = S32(ctx->r16 << 2);
            goto L_100047DC;
    }
    // 0x10004758: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x1000475C: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x10004760: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x10004764: addiu       $t8, $t8, -0x76F8
    ctx->r24 = ADD32(ctx->r24, -0X76F8);
    // 0x10004768: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x1000476C: lui         $s5, 0x1
    ctx->r21 = S32(0X1 << 16);
    // 0x10004770: ori         $s5, $s5, 0x4000
    ctx->r21 = ctx->r21 | 0X4000;
    // 0x10004774: addu        $s4, $t7, $t8
    ctx->r20 = ADD32(ctx->r15, ctx->r24);
    // 0x10004778: addiu       $fp, $sp, 0x64
    ctx->r30 = ADD32(ctx->r29, 0X64);
    // 0x1000477C: addiu       $s7, $sp, 0x68
    ctx->r23 = ADD32(ctx->r29, 0X68);
L_10004780:
    // 0x10004780: subu        $v0, $s6, $s1
    ctx->r2 = SUB32(ctx->r22, ctx->r17);
    // 0x10004784: sltu        $at, $v0, $s5
    ctx->r1 = ctx->r2 < ctx->r21 ? 1 : 0;
    // 0x10004788: beq         $at, $zero, L_10004798
    if (ctx->r1 == 0) {
        // 0x1000478C: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_10004798;
    }
    // 0x1000478C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x10004790: b           L_1000479C
    // 0x10004794: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_1000479C;
    // 0x10004794: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_10004798:
    // 0x10004798: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
L_1000479C:
    // 0x1000479C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x100047A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x100047A4: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x100047A8: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x100047AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x100047B0: jal         0x10024920
    // 0x100047B4: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    osPiStartDma_recomp(rdram, ctx);
        goto after_1;
    // 0x100047B4: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    after_1:
    // 0x100047B8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x100047BC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x100047C0: jal         0x10023440
    // 0x100047C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x100047C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x100047C8: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x100047CC: sltu        $at, $s1, $s6
    ctx->r1 = ctx->r17 < ctx->r22 ? 1 : 0;
    // 0x100047D0: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
    // 0x100047D4: bne         $at, $zero, L_10004780
    if (ctx->r1 != 0) {
        // 0x100047D8: addu        $s2, $s2, $s0
        ctx->r18 = ADD32(ctx->r18, ctx->r16);
            goto L_10004780;
    }
    // 0x100047D8: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
L_100047DC:
    // 0x100047DC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x100047E0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x100047E4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x100047E8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x100047EC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x100047F0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x100047F4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x100047F8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x100047FC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x10004800: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x10004804: jr          $ra
    // 0x10004808: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x10004808: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_151EDB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151EDB58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151EDB5C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x151EDB60: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x151EDB64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151EDB68: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x151EDB6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151EDB70: beql        $s2, $zero, L_151EDBC8
    if (ctx->r18 == 0) {
        // 0x151EDB74: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151EDBC8;
    }
    goto skip_0;
    // 0x151EDB74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x151EDB78: jal         0x1503F7B8
    // 0x151EDB7C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_1503F7B8(rdram, ctx);
        goto after_0;
    // 0x151EDB7C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_0:
    // 0x151EDB80: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151EDB84: jal         0x100043B4
    // 0x151EDB88: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_100043B4(rdram, ctx);
        goto after_1;
    // 0x151EDB88: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x151EDB8C: lbu         $t6, 0x14($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X14);
    // 0x151EDB90: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151EDB94: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x151EDB98: blezl       $t6, L_151EDBC8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x151EDB9C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151EDBC8;
    }
    goto skip_1;
    // 0x151EDB9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x151EDBA0: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
L_151EDBA4:
    // 0x151EDBA4: jal         0x100043B4
    // 0x151EDBA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_100043B4(rdram, ctx);
        goto after_2;
    // 0x151EDBA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x151EDBAC: lbu         $t7, 0x14($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X14);
    // 0x151EDBB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151EDBB4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x151EDBB8: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x151EDBBC: bnel        $at, $zero, L_151EDBA4
    if (ctx->r1 != 0) {
        // 0x151EDBC0: lw          $a0, 0x4($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X4);
            goto L_151EDBA4;
    }
    goto skip_2;
    // 0x151EDBC0: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    skip_2:
    // 0x151EDBC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151EDBC8:
    // 0x151EDBC8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151EDBCC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x151EDBD0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x151EDBD4: jr          $ra
    // 0x151EDBD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x151EDBD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void n_alEvtqPostEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001C224: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1001C228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001C22C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1001C230: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1001C234: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1001C238: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x1001C23C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1001C240: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x1001C244: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x1001C248: beq         $t7, $zero, L_1001C25C
    if (ctx->r15 == 0) {
        // 0x1001C24C: nop
    
            goto L_1001C25C;
    }
    // 0x1001C24C: nop

    // 0x1001C250: jal         0x10024880
    // 0x1001C254: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x1001C254: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x1001C258: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_1001C25C:
    // 0x1001C25C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x1001C260: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1001C264: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x1001C268: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C26C: bne         $t0, $zero, L_1001C294
    if (ctx->r8 != 0) {
        // 0x1001C270: nop
    
            goto L_1001C294;
    }
    // 0x1001C270: nop

    // 0x1001C274: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x1001C278: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x1001C27C: beq         $t2, $zero, L_1001C28C
    if (ctx->r10 == 0) {
        // 0x1001C280: nop
    
            goto L_1001C28C;
    }
    // 0x1001C280: nop

    // 0x1001C284: jal         0x10024880
    // 0x1001C288: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x1001C288: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_1:
L_1001C28C:
    // 0x1001C28C: b           L_1001C4E0
    // 0x1001C290: nop

        goto L_1001C4E0;
    // 0x1001C290: nop

L_1001C294:
    // 0x1001C294: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C298: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1001C29C: bne         $t4, $zero, L_1001C2D4
    if (ctx->r12 != 0) {
        // 0x1001C2A0: nop
    
            goto L_1001C2D4;
    }
    // 0x1001C2A0: nop

    // 0x1001C2A4: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x1001C2A8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x1001C2AC: bne         $t6, $zero, L_1001C2D4
    if (ctx->r14 != 0) {
        // 0x1001C2B0: nop
    
            goto L_1001C2D4;
    }
    // 0x1001C2B0: nop

    // 0x1001C2B4: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x1001C2B8: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x1001C2BC: beq         $t8, $zero, L_1001C2CC
    if (ctx->r24 == 0) {
        // 0x1001C2C0: nop
    
            goto L_1001C2CC;
    }
    // 0x1001C2C0: nop

    // 0x1001C2C4: jal         0x10024880
    // 0x1001C2C8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_2;
    // 0x1001C2C8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_2:
L_1001C2CC:
    // 0x1001C2CC: b           L_1001C4E0
    // 0x1001C2D0: nop

        goto L_1001C4E0;
    // 0x1001C2D0: nop

L_1001C2D4:
    // 0x1001C2D4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C2D8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x1001C2DC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1001C2E0: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x1001C2E4: beq         $t1, $zero, L_1001C2FC
    if (ctx->r9 == 0) {
        // 0x1001C2E8: nop
    
            goto L_1001C2FC;
    }
    // 0x1001C2E8: nop

    // 0x1001C2EC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1001C2F0: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x1001C2F4: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x1001C2F8: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
L_1001C2FC:
    // 0x1001C2FC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001C300: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x1001C304: beq         $t6, $zero, L_1001C31C
    if (ctx->r14 == 0) {
        // 0x1001C308: nop
    
            goto L_1001C31C;
    }
    // 0x1001C308: nop

    // 0x1001C30C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1001C310: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1001C314: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x1001C318: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_1001C31C:
    // 0x1001C31C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C320: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x1001C324: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x1001C328: jal         0x10023A10
    // 0x1001C32C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    bcopy_recomp(rdram, ctx);
        goto after_3;
    // 0x1001C32C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_3:
    // 0x1001C330: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x1001C334: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x1001C338: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x1001C33C: bne         $t0, $at, L_1001C34C
    if (ctx->r8 != ctx->r1) {
        // 0x1001C340: nop
    
            goto L_1001C34C;
    }
    // 0x1001C340: nop

    // 0x1001C344: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1001C348: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_1001C34C:
    // 0x1001C34C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x1001C350: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x1001C354: beq         $t3, $zero, L_1001C4C0
    if (ctx->r11 == 0) {
        // 0x1001C358: sw          $t3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r11;
            goto L_1001C4C0;
    }
    // 0x1001C358: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_1001C35C:
    // 0x1001C35C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x1001C360: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1001C364: bne         $t5, $zero, L_1001C3F8
    if (ctx->r13 != 0) {
        // 0x1001C368: nop
    
            goto L_1001C3F8;
    }
    // 0x1001C368: nop

    // 0x1001C36C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1001C370: beq         $t6, $zero, L_1001C384
    if (ctx->r14 == 0) {
        // 0x1001C374: nop
    
            goto L_1001C384;
    }
    // 0x1001C374: nop

    // 0x1001C378: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C37C: b           L_1001C390
    // 0x1001C380: sw          $zero, 0x8($t7)
    MEM_W(0X8, ctx->r15) = 0;
        goto L_1001C390;
    // 0x1001C380: sw          $zero, 0x8($t7)
    MEM_W(0X8, ctx->r15) = 0;
L_1001C384:
    // 0x1001C384: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x1001C388: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C38C: sw          $t8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r24;
L_1001C390:
    // 0x1001C390: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C394: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x1001C398: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x1001C39C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x1001C3A0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x1001C3A4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x1001C3A8: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x1001C3AC: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x1001C3B0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x1001C3B4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x1001C3B8: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x1001C3BC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001C3C0: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1001C3C4: beq         $t8, $zero, L_1001C3DC
    if (ctx->r24 == 0) {
        // 0x1001C3C8: nop
    
            goto L_1001C3DC;
    }
    // 0x1001C3C8: nop

    // 0x1001C3CC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1001C3D0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x1001C3D4: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x1001C3D8: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
L_1001C3DC:
    // 0x1001C3DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001C3E0: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1001C3E4: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x1001C3E8: b           L_1001C4C0
    // 0x1001C3EC: nop

        goto L_1001C4C0;
    // 0x1001C3EC: nop

    // 0x1001C3F0: b           L_1001C4B0
    // 0x1001C3F4: nop

        goto L_1001C4B0;
    // 0x1001C3F4: nop

L_1001C3F8:
    // 0x1001C3F8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x1001C3FC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1001C400: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x1001C404: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x1001C408: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x1001C40C: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x1001C410: slt         $at, $t6, $t8
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x1001C414: beq         $at, $zero, L_1001C49C
    if (ctx->r1 == 0) {
        // 0x1001C418: nop
    
            goto L_1001C49C;
    }
    // 0x1001C418: nop

    // 0x1001C41C: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x1001C420: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C424: sw          $t0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r8;
    // 0x1001C428: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x1001C42C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x1001C430: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x1001C434: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x1001C438: sw          $t4, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r12;
    // 0x1001C43C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x1001C440: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x1001C444: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1001C448: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1001C44C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x1001C450: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C454: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x1001C458: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x1001C45C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x1001C460: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C464: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x1001C468: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x1001C46C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1001C470: beq         $t4, $zero, L_1001C488
    if (ctx->r12 == 0) {
        // 0x1001C474: nop
    
            goto L_1001C488;
    }
    // 0x1001C474: nop

    // 0x1001C478: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x1001C47C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C480: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x1001C484: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
L_1001C488:
    // 0x1001C488: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C48C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x1001C490: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
    // 0x1001C494: b           L_1001C4C0
    // 0x1001C498: nop

        goto L_1001C4C0;
    // 0x1001C498: nop

L_1001C49C:
    // 0x1001C49C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x1001C4A0: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x1001C4A4: lw          $t2, 0x8($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X8);
    // 0x1001C4A8: subu        $t3, $t0, $t2
    ctx->r11 = SUB32(ctx->r8, ctx->r10);
    // 0x1001C4AC: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
L_1001C4B0:
    // 0x1001C4B0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x1001C4B4: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1001C4B8: bne         $t5, $zero, L_1001C35C
    if (ctx->r13 != 0) {
        // 0x1001C4BC: sw          $t5, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r13;
            goto L_1001C35C;
    }
    // 0x1001C4BC: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
L_1001C4C0:
    // 0x1001C4C0: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x1001C4C4: andi        $t7, $t1, 0x2
    ctx->r15 = ctx->r9 & 0X2;
    // 0x1001C4C8: beq         $t7, $zero, L_1001C4D8
    if (ctx->r15 == 0) {
        // 0x1001C4CC: nop
    
            goto L_1001C4D8;
    }
    // 0x1001C4CC: nop

    // 0x1001C4D0: jal         0x10024880
    // 0x1001C4D4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_4;
    // 0x1001C4D4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_4:
L_1001C4D8:
    // 0x1001C4D8: b           L_1001C4E0
    // 0x1001C4DC: nop

        goto L_1001C4E0;
    // 0x1001C4DC: nop

L_1001C4E0:
    // 0x1001C4E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001C4E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1001C4E8: jr          $ra
    // 0x1001C4EC: nop

    return;
    return;
    // 0x1001C4EC: nop

;}
RECOMP_FUNC void func_1502B9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502B9B4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1502B9B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1502B9BC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1502B9C0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1502B9C4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1502B9C8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1502B9CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1502B9D0: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x1502B9D4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x1502B9D8: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x1502B9DC: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x1502B9E0: lui         $s1, 0xAB
    ctx->r17 = S32(0XAB << 16);
    // 0x1502B9E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1502B9E8: addiu       $s1, $s1, 0x1950
    ctx->r17 = ADD32(ctx->r17, 0X1950);
    // 0x1502B9EC: addiu       $s0, $sp, 0x6C
    ctx->r16 = ADD32(ctx->r29, 0X6C);
    // 0x1502B9F0: beq         $a0, $zero, L_1502BA48
    if (ctx->r4 == 0) {
        // 0x1502B9F4: sw          $a0, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r4;
            goto L_1502BA48;
    }
    // 0x1502B9F4: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x1502B9F8: lui         $s4, 0xFFF
    ctx->r20 = S32(0XFFF << 16);
    // 0x1502B9FC: ori         $s4, $s4, 0xFFFF
    ctx->r20 = ctx->r20 | 0XFFFF;
    // 0x1502BA00: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x1502BA04: addiu       $s3, $sp, 0x54
    ctx->r19 = ADD32(ctx->r29, 0X54);
    // 0x1502BA08: addiu       $s2, $zero, -0x4
    ctx->r18 = ADD32(0, -0X4);
L_1502BA0C:
    // 0x1502BA0C: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
    // 0x1502BA10: and         $s0, $t6, $s2
    ctx->r16 = ctx->r14 & ctx->r18;
    // 0x1502BA14: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1502BA18: beq         $v1, $zero, L_1502BA30
    if (ctx->r3 == 0) {
        // 0x1502BA1C: lw          $a1, -0x4($s0)
        ctx->r5 = MEM_W(ctx->r16, -0X4);
            goto L_1502BA30;
    }
    // 0x1502BA1C: lw          $a1, -0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X4);
    // 0x1502BA20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502BA24: jal         0x1502AC88
    // 0x1502BA28: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_1502AC88(rdram, ctx);
        goto after_0;
    // 0x1502BA28: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_0:
    // 0x1502BA2C: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
L_1502BA30:
    // 0x1502BA30: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x1502BA34: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x1502BA38: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x1502BA3C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x1502BA40: bne         $a0, $zero, L_1502BA0C
    if (ctx->r4 != 0) {
        // 0x1502BA44: and         $v1, $v0, $s4
        ctx->r3 = ctx->r2 & ctx->r20;
            goto L_1502BA0C;
    }
    // 0x1502BA44: and         $v1, $v0, $s4
    ctx->r3 = ctx->r2 & ctx->r20;
L_1502BA48:
    // 0x1502BA48: lui         $s4, 0xFFF
    ctx->r20 = S32(0XFFF << 16);
    // 0x1502BA4C: ori         $s4, $s4, 0xFFFF
    ctx->r20 = ctx->r20 | 0XFFFF;
    // 0x1502BA50: beq         $v1, $zero, L_1502BAA4
    if (ctx->r3 == 0) {
        // 0x1502BA54: lw          $v0, 0x54($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X54);
            goto L_1502BAA4;
    }
    // 0x1502BA54: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x1502BA58: and         $v1, $v0, $s4
    ctx->r3 = ctx->r2 & ctx->r20;
    // 0x1502BA5C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1502BA60: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x1502BA64: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x1502BA68: lui         $at, 0x7000
    ctx->r1 = S32(0X7000 << 16);
    // 0x1502BA6C: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x1502BA70: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x1502BA74: bne         $t8, $at, L_1502BAA4
    if (ctx->r24 != ctx->r1) {
        // 0x1502BA78: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_1502BAA4;
    }
    // 0x1502BA78: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x1502BA7C: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x1502BA80: andi        $t9, $s0, 0x8
    ctx->r25 = ctx->r16 & 0X8;
    // 0x1502BA84: beq         $t9, $zero, L_1502BA90
    if (ctx->r25 == 0) {
        // 0x1502BA88: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1502BA90;
    }
    // 0x1502BA88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502BA8C: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
L_1502BA90:
    // 0x1502BA90: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1502BA94: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x1502BA98: jal         0x10004514
    // 0x1502BA9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_10004514(rdram, ctx);
        goto after_1;
    // 0x1502BA9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x1502BAA0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
L_1502BAA4:
    // 0x1502BAA4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1502BAA8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1502BAAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1502BAB0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1502BAB4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1502BAB8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1502BABC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1502BAC0: jr          $ra
    // 0x1502BAC4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x1502BAC4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x1502BAC8: nop

    // 0x1502BACC: nop

;}
RECOMP_FUNC void func_150F6484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F6484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F6488: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F648C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F6490: jal         0x150F6478
    // 0x150F6494: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F6478(rdram, ctx);
        goto after_0;
    // 0x150F6494: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F6498: jal         0x151411A4
    // 0x150F649C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151411A4(rdram, ctx);
        goto after_1;
    // 0x150F649C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F64A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F64A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F64A8: jr          $ra
    // 0x150F64AC: nop

    return;
    return;
    // 0x150F64AC: nop

;}
RECOMP_FUNC void func_150761F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150761F4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150761F8: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x150761FC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15076200: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x15076204: sb          $t6, 0x223($t7)
    MEM_B(0X223, ctx->r15) = ctx->r14;
    // 0x15076208: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1507620C: lhu         $t8, 0x22C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X22C);
    // 0x15076210: andi        $t9, $t8, 0xFFFE
    ctx->r25 = ctx->r24 & 0XFFFE;
    // 0x15076214: sh          $t9, 0x22C($v0)
    MEM_H(0X22C, ctx->r2) = ctx->r25;
    // 0x15076218: jr          $ra
    // 0x1507621C: nop

    return;
    return;
    // 0x1507621C: nop

;}
RECOMP_FUNC void func_150F9720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F9720: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150F9724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F9728: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x150F972C: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x150F9730: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150F9734: addiu       $t7, $t7, 0x1C40
    ctx->r15 = ADD32(ctx->r15, 0X1C40);
    // 0x150F9738: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
    // 0x150F973C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x150F9740: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x150F9744: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x150F9748: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150F974C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F9750: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x150F9754: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    // 0x150F9758: jal         0x151494E0
    // 0x150F975C: sb          $t8, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r24;
    func_151494E0(rdram, ctx);
        goto after_0;
    // 0x150F975C: sb          $t8, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r24;
    after_0:
    // 0x150F9760: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x150F9764: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150F9768: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    // 0x150F976C: lbu         $t9, 0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1);
    // 0x150F9770: jal         0x151494E0
    // 0x150F9774: sb          $t9, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r25;
    func_151494E0(rdram, ctx);
        goto after_1;
    // 0x150F9774: sb          $t9, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r25;
    after_1:
    // 0x150F9778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F977C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150F9780: jr          $ra
    // 0x150F9784: nop

    return;
    return;
    // 0x150F9784: nop

;}
RECOMP_FUNC void func_1502FBE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502FBE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1502FBEC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1502FBF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1502FBF4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1502FBF8: lbu         $v1, 0x1C9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1C9);
    // 0x1502FBFC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1502FC00: addiu       $t2, $t2, -0x3D30
    ctx->r10 = ADD32(ctx->r10, -0X3D30);
    // 0x1502FC04: beq         $v1, $zero, L_1502FD5C
    if (ctx->r3 == 0) {
        // 0x1502FC08: subu        $a0, $s0, $t2
        ctx->r4 = SUB32(ctx->r16, ctx->r10);
            goto L_1502FD5C;
    }
    // 0x1502FC08: subu        $a0, $s0, $t2
    ctx->r4 = SUB32(ctx->r16, ctx->r10);
    // 0x1502FC0C: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x1502FC10: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x1502FC14: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1502FC18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1502FC1C: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x1502FC20: bne         $v1, $at, L_1502FC34
    if (ctx->r3 != ctx->r1) {
        // 0x1502FC24: lw          $a3, 0x1588($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X1588);
            goto L_1502FC34;
    }
    // 0x1502FC24: lw          $a3, 0x1588($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X1588);
    // 0x1502FC28: sb          $zero, 0x1C9($s0)
    MEM_B(0X1C9, ctx->r16) = 0;
    // 0x1502FC2C: b           L_1502FC50
    // 0x1502FC30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1502FC50;
    // 0x1502FC30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1502FC34:
    // 0x1502FC34: lbu         $t8, 0x2C9($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2C9);
    // 0x1502FC38: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x1502FC3C: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x1502FC40: beql        $at, $zero, L_1502FD60
    if (ctx->r1 == 0) {
        // 0x1502FC44: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1502FD60;
    }
    goto skip_0;
    // 0x1502FC44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x1502FC48: lbu         $t9, 0x1C8($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1C8);
    // 0x1502FC4C: beq         $v0, $t9, L_1502FD5C
    if (ctx->r2 == ctx->r25) {
        // 0x1502FC50: addiu       $at, $zero, 0x32C
        ctx->r1 = ADD32(0, 0X32C);
            goto L_1502FD5C;
    }
L_1502FC50:
    // 0x1502FC50: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1502FC54: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x1502FC58: lw          $t0, 0x2C4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X2C4);
    // 0x1502FC5C: mflo        $a0
    ctx->r4 = lo;
    // 0x1502FC60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1502FC64: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x1502FC68: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    // 0x1502FC6C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x1502FC70: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x1502FC74: jal         0x150837D4
    // 0x1502FC78: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_150837D4(rdram, ctx);
        goto after_0;
    // 0x1502FC78: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x1502FC7C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x1502FC80: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x1502FC84: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x1502FC88: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1502FC8C: sb          $v0, 0x1C8($s0)
    MEM_B(0X1C8, ctx->r16) = ctx->r2;
    // 0x1502FC90: lbu         $v1, 0x35EA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X35EA);
    // 0x1502FC94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1502FC98: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1502FC9C: bne         $v1, $at, L_1502FCAC
    if (ctx->r3 != ctx->r1) {
        // 0x1502FCA0: sll         $t4, $a1, 2
        ctx->r12 = S32(ctx->r5 << 2);
            goto L_1502FCAC;
    }
    // 0x1502FCA0: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x1502FCA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1502FCA8: sb          $zero, 0x3638($at)
    MEM_B(0X3638, ctx->r1) = 0;
L_1502FCAC:
    // 0x1502FCAC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x1502FCB0: lw          $t5, 0x1588($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1588);
    // 0x1502FCB4: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x1502FCB8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1502FCBC: beq         $a3, $t5, L_1502FD40
    if (ctx->r7 == ctx->r13) {
        // 0x1502FCC0: addu        $t7, $t7, $t6
        ctx->r15 = ADD32(ctx->r15, ctx->r14);
            goto L_1502FD40;
    }
    // 0x1502FCC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1502FCC4: lhu         $v1, 0x84($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X84);
    // 0x1502FCC8: lhu         $t7, 0x5A90($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X5A90);
    // 0x1502FCCC: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x1502FCD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502FCD4: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1502FCD8: bne         $at, $zero, L_1502FD18
    if (ctx->r1 != 0) {
        // 0x1502FCDC: andi        $a1, $v1, 0xFFFF
        ctx->r5 = ctx->r3 & 0XFFFF;
            goto L_1502FD18;
    }
    // 0x1502FCDC: andi        $a1, $v1, 0xFFFF
    ctx->r5 = ctx->r3 & 0XFFFF;
    // 0x1502FCE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1502FCE4: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x1502FCE8: sh          $t8, 0x84($s0)
    MEM_H(0X84, ctx->r16) = ctx->r24;
    // 0x1502FCEC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1502FCF0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1502FCF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502FCF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1502FCFC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1502FD00: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1502FD04: jal         0x1505E650
    // 0x1502FD08: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_1;
    // 0x1502FD08: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x1502FD0C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1502FD10: b           L_1502FD40
    // 0x1502FD14: lbu         $v1, 0x35EA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X35EA);
        goto L_1502FD40;
    // 0x1502FD14: lbu         $v1, 0x35EA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X35EA);
L_1502FD18:
    // 0x1502FD18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1502FD1C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1502FD20: sh          $t9, 0x84($s0)
    MEM_H(0X84, ctx->r16) = ctx->r25;
    // 0x1502FD24: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1502FD28: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1502FD2C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1502FD30: jal         0x1505E650
    // 0x1502FD34: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_2;
    // 0x1502FD34: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x1502FD38: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1502FD3C: lbu         $v1, 0x35EA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X35EA);
L_1502FD40:
    // 0x1502FD40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1502FD44: bne         $v1, $at, L_1502FD54
    if (ctx->r3 != ctx->r1) {
        // 0x1502FD48: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_1502FD54;
    }
    // 0x1502FD48: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1502FD4C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1502FD50: sb          $t0, 0x3638($at)
    MEM_B(0X3638, ctx->r1) = ctx->r8;
L_1502FD54:
    // 0x1502FD54: jal         0x1507EABC
    // 0x1502FD58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1507EABC(rdram, ctx);
        goto after_3;
    // 0x1502FD58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_1502FD5C:
    // 0x1502FD5C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1502FD60:
    // 0x1502FD60: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1502FD64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1502FD68: jr          $ra
    // 0x1502FD6C: nop

    return;
    return;
    // 0x1502FD6C: nop

;}
RECOMP_FUNC void func_151CEAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CEAAC: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x151CEAB0: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x151CEAB4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151CEAB8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151CEABC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151CEAC0: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x151CEAC4: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x151CEAC8: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x151CEACC: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x151CEAD0: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x151CEAD4: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x151CEAD8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x151CEADC: sb          $t7, 0x81($sp)
    MEM_B(0X81, ctx->r29) = ctx->r15;
    // 0x151CEAE0: sh          $t8, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r24;
    // 0x151CEAE4: sh          $t9, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r25;
    // 0x151CEAE8: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
    // 0x151CEAEC: sb          $t1, 0x80($sp)
    MEM_B(0X80, ctx->r29) = ctx->r9;
    // 0x151CEAF0: beq         $a0, $zero, L_151CEB04
    if (ctx->r4 == 0) {
        // 0x151CEAF4: sw          $a0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r4;
            goto L_151CEB04;
    }
    // 0x151CEAF4: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x151CEAF8: lbu         $t2, 0x3B($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X3B);
    // 0x151CEAFC: b           L_151CEB08
    // 0x151CEB00: sb          $t2, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r10;
        goto L_151CEB08;
    // 0x151CEB00: sb          $t2, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r10;
L_151CEB04:
    // 0x151CEB04: sb          $zero, 0x48($sp)
    MEM_B(0X48, ctx->r29) = 0;
L_151CEB08:
    // 0x151CEB08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151CEB0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151CEB10: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151CEB14: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x151CEB18: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x151CEB1C: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x151CEB20: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x151CEB24: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x151CEB28: beq         $a2, $zero, L_151CEB38
    if (ctx->r6 == 0) {
        // 0x151CEB2C: swc1        $f2, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
            goto L_151CEB38;
    }
    // 0x151CEB2C: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x151CEB30: b           L_151CEB3C
    // 0x151CEB34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_151CEB3C;
    // 0x151CEB34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151CEB38:
    // 0x151CEB38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151CEB3C:
    // 0x151CEB3C: sb          $v0, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r2;
    // 0x151CEB40: jal         0x150ADA68
    // 0x151CEB44: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151CEB44: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    after_0:
    // 0x151CEB48: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x151CEB4C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151CEB50: nop

    // 0x151CEB54: mul.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x151CEB58: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x151CEB5C: jal         0x150ADA68
    // 0x151CEB60: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151CEB60: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x151CEB64: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x151CEB68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CEB6C: lwc1        $f10, -0x4FF8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4FF8);
    // 0x151CEB70: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x151CEB74: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x151CEB78: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151CEB7C: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    // 0x151CEB80: jal         0x151CEC10
    // 0x151CEB84: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    func_151CEC10(rdram, ctx);
        goto after_2;
    // 0x151CEB84: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x151CEB88: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151CEB8C: bne         $v0, $zero, L_151CEBA0
    if (ctx->r2 != 0) {
        // 0x151CEB90: addiu       $a0, $sp, 0x6C
        ctx->r4 = ADD32(ctx->r29, 0X6C);
            goto L_151CEBA0;
    }
    // 0x151CEB90: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x151CEB94: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x151CEB98: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x151CEB9C: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
L_151CEBA0:
    // 0x151CEBA0: lbu         $t6, 0x97($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X97);
    // 0x151CEBA4: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x151CEBA8: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x151CEBAC: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x151CEBB0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151CEBB4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151CEBB8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x151CEBBC: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x151CEBC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CEBC4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151CEBC8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151CEBCC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151CEBD0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x151CEBD4: jal         0x15147A80
    // 0x151CEBD8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    func_15147A80(rdram, ctx);
        goto after_3;
    // 0x151CEBD8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_3:
    // 0x151CEBDC: beq         $v0, $zero, L_151CEBFC
    if (ctx->r2 == 0) {
        // 0x151CEBE0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151CEBFC;
    }
    // 0x151CEBE0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151CEBE4: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x151CEBE8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x151CEBEC: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x151CEBF0: jal         0x10022EC0
    // 0x151CEBF4: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x151CEBF4: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_4:
    // 0x151CEBF8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
L_151CEBFC:
    // 0x151CEBFC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151CEC00: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151CEC04: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x151CEC08: jr          $ra
    // 0x151CEC0C: nop

    return;
    return;
    // 0x151CEC0C: nop

;}
RECOMP_FUNC void func_150D3A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D3A68: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x150D3A6C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150D3A70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150D3A74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150D3A78: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
    // 0x150D3A7C: lw          $t0, 0x98($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X98);
    // 0x150D3A80: sw          $t6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r14;
    // 0x150D3A84: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x150D3A88: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x150D3A8C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x150D3A90: beq         $t7, $zero, L_150D3AAC
    if (ctx->r15 == 0) {
        // 0x150D3A94: nop
    
            goto L_150D3AAC;
    }
    // 0x150D3A94: nop

    // 0x150D3A98: lbu         $t8, 0x4($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X4);
    // 0x150D3A9C: lbu         $t9, 0x3B($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X3B);
    // 0x150D3AA0: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x150D3AA4: beq         $t8, $t9, L_150D3AB4
    if (ctx->r24 == ctx->r25) {
        // 0x150D3AA8: nop
    
            goto L_150D3AB4;
    }
    // 0x150D3AA8: nop

L_150D3AAC:
    // 0x150D3AAC: b           L_150D3FC0
    // 0x150D3AB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150D3FC0;
    // 0x150D3AB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150D3AB4:
    // 0x150D3AB4: lw          $t1, -0x161C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X161C);
    // 0x150D3AB8: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x150D3ABC: blezl       $t1, L_150D3FA0
    if (SIGNED(ctx->r9) <= 0) {
        // 0x150D3AC0: lwc1        $f0, 0x14($t0)
        ctx->f0.u32l = MEM_W(ctx->r8, 0X14);
            goto L_150D3FA0;
    }
    goto skip_0;
    // 0x150D3AC0: lwc1        $f0, 0x14($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X14);
    skip_0:
    // 0x150D3AC4: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x150D3AC8: addiu       $t2, $sp, 0x6C
    ctx->r10 = ADD32(ctx->r29, 0X6C);
    // 0x150D3ACC: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x150D3AD0: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x150D3AD4: lw          $t4, 0x4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X4);
    // 0x150D3AD8: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
    // 0x150D3ADC: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x150D3AE0: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x150D3AE4: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    // 0x150D3AE8: sw          $a2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r6;
    // 0x150D3AEC: jal         0x150D4AE0
    // 0x150D3AF0: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    func_150D4AE0(rdram, ctx);
        goto after_0;
    // 0x150D3AF0: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_0:
    // 0x150D3AF4: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x150D3AF8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x150D3AFC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x150D3B00: beq         $v0, $zero, L_150D3B24
    if (ctx->r2 == 0) {
        // 0x150D3B04: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_150D3B24;
    }
    // 0x150D3B04: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x150D3B08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150D3B0C: beq         $v0, $at, L_150D3B70
    if (ctx->r2 == ctx->r1) {
        // 0x150D3B10: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_150D3B70;
    }
    // 0x150D3B10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150D3B14: beql        $v0, $at, L_150D3C74
    if (ctx->r2 == ctx->r1) {
        // 0x150D3B18: lhu         $v1, 0x1E($s0)
        ctx->r3 = MEM_HU(ctx->r16, 0X1E);
            goto L_150D3C74;
    }
    goto skip_1;
    // 0x150D3B18: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    skip_1:
    // 0x150D3B1C: b           L_150D3CE0
    // 0x150D3B20: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
        goto L_150D3CE0;
    // 0x150D3B20: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
L_150D3B24:
    // 0x150D3B24: lw          $v0, 0xC($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XC);
    // 0x150D3B28: beql        $v0, $zero, L_150D3B44
    if (ctx->r2 == 0) {
        // 0x150D3B2C: lw          $v0, 0x10($t0)
        ctx->r2 = MEM_W(ctx->r8, 0X10);
            goto L_150D3B44;
    }
    goto skip_2;
    // 0x150D3B2C: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
    skip_2:
    // 0x150D3B30: lw          $t5, 0x58($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X58);
    // 0x150D3B34: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x150D3B38: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x150D3B3C: sw          $t6, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r14;
    // 0x150D3B40: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
L_150D3B44:
    // 0x150D3B44: beql        $v0, $zero, L_150D3B60
    if (ctx->r2 == 0) {
        // 0x150D3B48: lhu         $t9, 0x1E($s0)
        ctx->r25 = MEM_HU(ctx->r16, 0X1E);
            goto L_150D3B60;
    }
    goto skip_3;
    // 0x150D3B48: lhu         $t9, 0x1E($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1E);
    skip_3:
    // 0x150D3B4C: lw          $t7, 0x58($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X58);
    // 0x150D3B50: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x150D3B54: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x150D3B58: sw          $t8, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r24;
    // 0x150D3B5C: lhu         $t9, 0x1E($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1E);
L_150D3B60:
    // 0x150D3B60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150D3B64: andi        $t1, $t9, 0xFFFB
    ctx->r9 = ctx->r25 & 0XFFFB;
    // 0x150D3B68: b           L_150D3FC0
    // 0x150D3B6C: sh          $t1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r9;
        goto L_150D3FC0;
    // 0x150D3B6C: sh          $t1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r9;
L_150D3B70:
    // 0x150D3B70: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x150D3B74: andi        $t3, $v1, 0x4
    ctx->r11 = ctx->r3 & 0X4;
    // 0x150D3B78: bnel        $t3, $zero, L_150D3BA0
    if (ctx->r11 != 0) {
        // 0x150D3B7C: ori         $t5, $v1, 0x4
        ctx->r13 = ctx->r3 | 0X4;
            goto L_150D3BA0;
    }
    goto skip_4;
    // 0x150D3B7C: ori         $t5, $v1, 0x4
    ctx->r13 = ctx->r3 | 0X4;
    skip_4:
    // 0x150D3B80: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x150D3B84: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x150D3B88: lw          $t4, 0x4($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X4);
    // 0x150D3B8C: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x150D3B90: lw          $at, 0x8($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X8);
    // 0x150D3B94: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x150D3B98: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x150D3B9C: ori         $t5, $v1, 0x4
    ctx->r13 = ctx->r3 | 0X4;
L_150D3BA0:
    // 0x150D3BA0: sh          $t5, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r13;
    // 0x150D3BA4: lw          $v0, 0xC($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XC);
    // 0x150D3BA8: beql        $v0, $zero, L_150D3C0C
    if (ctx->r2 == 0) {
        // 0x150D3BAC: lw          $v0, 0x10($t0)
        ctx->r2 = MEM_W(ctx->r8, 0X10);
            goto L_150D3C0C;
    }
    goto skip_5;
    // 0x150D3BAC: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
    skip_5:
    // 0x150D3BB0: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x150D3BB4: sw          $at, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r1;
    // 0x150D3BB8: lw          $t7, 0x4($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X4);
    // 0x150D3BBC: sw          $t7, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r15;
    // 0x150D3BC0: lw          $at, 0x8($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X8);
    // 0x150D3BC4: sw          $at, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r1;
    // 0x150D3BC8: lw          $t8, 0xC($t0)
    ctx->r24 = MEM_W(ctx->r8, 0XC);
    // 0x150D3BCC: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x150D3BD0: sw          $at, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->r1;
    // 0x150D3BD4: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    // 0x150D3BD8: sw          $t1, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->r9;
    // 0x150D3BDC: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x150D3BE0: sw          $at, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->r1;
    // 0x150D3BE4: lw          $v0, 0xC($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XC);
    // 0x150D3BE8: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x150D3BEC: lw          $t3, 0x58($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X58);
    // 0x150D3BF0: and         $t2, $t3, $at
    ctx->r10 = ctx->r11 & ctx->r1;
    // 0x150D3BF4: sw          $t2, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r10;
    // 0x150D3BF8: lw          $v0, 0xC($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XC);
    // 0x150D3BFC: lw          $t4, 0x58($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X58);
    // 0x150D3C00: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x150D3C04: sw          $t5, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r13;
    // 0x150D3C08: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
L_150D3C0C:
    // 0x150D3C0C: beql        $v0, $zero, L_150D3CE0
    if (ctx->r2 == 0) {
        // 0x150D3C10: lwc1        $f4, 0x10($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
            goto L_150D3CE0;
    }
    goto skip_6;
    // 0x150D3C10: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    skip_6:
    // 0x150D3C14: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x150D3C18: sw          $at, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r1;
    // 0x150D3C1C: lw          $t7, 0x4($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X4);
    // 0x150D3C20: sw          $t7, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r15;
    // 0x150D3C24: lw          $at, 0x8($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X8);
    // 0x150D3C28: sw          $at, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r1;
    // 0x150D3C2C: lw          $t9, 0x10($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X10);
    // 0x150D3C30: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x150D3C34: sw          $at, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->r1;
    // 0x150D3C38: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    // 0x150D3C3C: sw          $t1, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->r9;
    // 0x150D3C40: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x150D3C44: sw          $at, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->r1;
    // 0x150D3C48: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
    // 0x150D3C4C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x150D3C50: lw          $t3, 0x58($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X58);
    // 0x150D3C54: and         $t2, $t3, $at
    ctx->r10 = ctx->r11 & ctx->r1;
    // 0x150D3C58: sw          $t2, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r10;
    // 0x150D3C5C: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
    // 0x150D3C60: lw          $t4, 0x58($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X58);
    // 0x150D3C64: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x150D3C68: b           L_150D3CDC
    // 0x150D3C6C: sw          $t5, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r13;
        goto L_150D3CDC;
    // 0x150D3C6C: sw          $t5, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r13;
    // 0x150D3C70: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
L_150D3C74:
    // 0x150D3C74: andi        $t6, $v1, 0x4
    ctx->r14 = ctx->r3 & 0X4;
    // 0x150D3C78: bnel        $t6, $zero, L_150D3CA0
    if (ctx->r14 != 0) {
        // 0x150D3C7C: ori         $t9, $v1, 0x4
        ctx->r25 = ctx->r3 | 0X4;
            goto L_150D3CA0;
    }
    goto skip_7;
    // 0x150D3C7C: ori         $t9, $v1, 0x4
    ctx->r25 = ctx->r3 | 0X4;
    skip_7:
    // 0x150D3C80: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x150D3C84: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x150D3C88: lw          $t8, 0x4($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X4);
    // 0x150D3C8C: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x150D3C90: lw          $at, 0x8($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X8);
    // 0x150D3C94: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x150D3C98: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x150D3C9C: ori         $t9, $v1, 0x4
    ctx->r25 = ctx->r3 | 0X4;
L_150D3CA0:
    // 0x150D3CA0: sh          $t9, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r25;
    // 0x150D3CA4: lw          $v0, 0xC($t0)
    ctx->r2 = MEM_W(ctx->r8, 0XC);
    // 0x150D3CA8: beql        $v0, $zero, L_150D3CC4
    if (ctx->r2 == 0) {
        // 0x150D3CAC: lw          $v0, 0x10($t0)
        ctx->r2 = MEM_W(ctx->r8, 0X10);
            goto L_150D3CC4;
    }
    goto skip_8;
    // 0x150D3CAC: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
    skip_8:
    // 0x150D3CB0: lw          $t1, 0x58($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X58);
    // 0x150D3CB4: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x150D3CB8: and         $t3, $t1, $at
    ctx->r11 = ctx->r9 & ctx->r1;
    // 0x150D3CBC: sw          $t3, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r11;
    // 0x150D3CC0: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
L_150D3CC4:
    // 0x150D3CC4: beql        $v0, $zero, L_150D3CE0
    if (ctx->r2 == 0) {
        // 0x150D3CC8: lwc1        $f4, 0x10($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
            goto L_150D3CE0;
    }
    goto skip_9;
    // 0x150D3CC8: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    skip_9:
    // 0x150D3CCC: lw          $t2, 0x58($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X58);
    // 0x150D3CD0: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x150D3CD4: and         $t4, $t2, $at
    ctx->r12 = ctx->r10 & ctx->r1;
    // 0x150D3CD8: sw          $t4, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r12;
L_150D3CDC:
    // 0x150D3CDC: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
L_150D3CE0:
    // 0x150D3CE0: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150D3CE4: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x150D3CE8: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x150D3CEC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150D3CF0: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x150D3CF4: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x150D3CF8: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150D3CFC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150D3D00: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x150D3D04: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150D3D08: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    // 0x150D3D0C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150D3D10: jal         0x15143E64
    // 0x150D3D14: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    func_15143E64(rdram, ctx);
        goto after_1;
    // 0x150D3D14: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x150D3D18: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x150D3D1C: lb          $t5, 0x2E($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2E);
    // 0x150D3D20: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x150D3D24: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x150D3D28: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x150D3D2C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x150D3D30: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x150D3D34: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150D3D38: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x150D3D3C: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x150D3D40: lw          $t3, 0x4($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X4);
    // 0x150D3D44: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x150D3D48: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x150D3D4C: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x150D3D50: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x150D3D54: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150D3D58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D3D5C: nop

    // 0x150D3D60: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x150D3D64: lb          $t2, 0x2E($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2E);
    // 0x150D3D68: lbu         $t5, 0x25($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X25);
    // 0x150D3D6C: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x150D3D70: sb          $t4, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r12;
    // 0x150D3D74: lb          $v1, 0x2E($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2E);
    // 0x150D3D78: bnel        $t5, $v1, L_150D3D8C
    if (ctx->r13 != ctx->r3) {
        // 0x150D3D7C: lb          $t6, 0x2C($s0)
        ctx->r14 = MEM_B(ctx->r16, 0X2C);
            goto L_150D3D8C;
    }
    goto skip_10;
    // 0x150D3D7C: lb          $t6, 0x2C($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2C);
    skip_10:
    // 0x150D3D80: sb          $zero, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = 0;
    // 0x150D3D84: lb          $v1, 0x2E($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2E);
    // 0x150D3D88: lb          $t6, 0x2C($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2C);
L_150D3D8C:
    // 0x150D3D8C: lb          $v0, 0x2D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2D);
    // 0x150D3D90: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x150D3D94: bne         $v0, $v1, L_150D3DC4
    if (ctx->r2 != ctx->r3) {
        // 0x150D3D98: sb          $t7, 0x2C($s0)
        MEM_B(0X2C, ctx->r16) = ctx->r15;
            goto L_150D3DC4;
    }
    // 0x150D3D98: sb          $t7, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r15;
    // 0x150D3D9C: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x150D3DA0: sb          $t1, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r9;
    // 0x150D3DA4: lb          $t8, 0x2D($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X2D);
    // 0x150D3DA8: lbu         $t9, 0x25($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X25);
    // 0x150D3DAC: bnel        $t9, $t8, L_150D3DBC
    if (ctx->r25 != ctx->r24) {
        // 0x150D3DB0: lb          $t3, 0x2C($s0)
        ctx->r11 = MEM_B(ctx->r16, 0X2C);
            goto L_150D3DBC;
    }
    goto skip_11;
    // 0x150D3DB0: lb          $t3, 0x2C($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X2C);
    skip_11:
    // 0x150D3DB4: sb          $zero, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = 0;
    // 0x150D3DB8: lb          $t3, 0x2C($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X2C);
L_150D3DBC:
    // 0x150D3DBC: addiu       $t2, $t3, -0x1
    ctx->r10 = ADD32(ctx->r11, -0X1);
    // 0x150D3DC0: sb          $t2, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r10;
L_150D3DC4:
    // 0x150D3DC4: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x150D3DC8: lw          $v1, 0x31C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X31C);
    // 0x150D3DCC: beql        $v1, $zero, L_150D3FA0
    if (ctx->r3 == 0) {
        // 0x150D3DD0: lwc1        $f0, 0x14($t0)
        ctx->f0.u32l = MEM_W(ctx->r8, 0X14);
            goto L_150D3FA0;
    }
    goto skip_12;
    // 0x150D3DD0: lwc1        $f0, 0x14($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X14);
    skip_12:
    // 0x150D3DD4: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
    // 0x150D3DD8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150D3DDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150D3DE0: beq         $v0, $zero, L_150D3DF0
    if (ctx->r2 == 0) {
        // 0x150D3DE4: addiu       $t7, $t7, -0x3D30
        ctx->r15 = ADD32(ctx->r15, -0X3D30);
            goto L_150D3DF0;
    }
    // 0x150D3DE4: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x150D3DE8: b           L_150D3DF0
    // 0x150D3DEC: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
        goto L_150D3DF0;
    // 0x150D3DEC: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
L_150D3DF0:
    // 0x150D3DF0: lbu         $t4, 0x84($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X84);
    // 0x150D3DF4: lbu         $a1, 0x5($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X5);
    // 0x150D3DF8: subu        $v0, $a2, $t7
    ctx->r2 = SUB32(ctx->r6, ctx->r15);
    // 0x150D3DFC: beq         $t4, $zero, L_150D3E58
    if (ctx->r12 == 0) {
        // 0x150D3E00: addiu       $at, $zero, 0x32C
        ctx->r1 = ADD32(0, 0X32C);
            goto L_150D3E58;
    }
    // 0x150D3E00: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x150D3E04: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150D3E08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150D3E0C: lwc1        $f0, 0x44($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X44);
    // 0x150D3E10: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150D3E14: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x150D3E18: nop

    // 0x150D3E1C: bc1fl       L_150D3E30
    if (!c1cs) {
        // 0x150D3E20: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_150D3E30;
    }
    goto skip_13;
    // 0x150D3E20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_13:
    // 0x150D3E24: b           L_150D3EC0
    // 0x150D3E28: sb          $zero, 0x5($t0)
    MEM_B(0X5, ctx->r8) = 0;
        goto L_150D3EC0;
    // 0x150D3E28: sb          $zero, 0x5($t0)
    MEM_B(0X5, ctx->r8) = 0;
    // 0x150D3E2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_150D3E30:
    // 0x150D3E30: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150D3E34: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150D3E38: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x150D3E3C: nop

    // 0x150D3E40: bc1f        L_150D3E50
    if (!c1cs) {
        // 0x150D3E44: nop
    
            goto L_150D3E50;
    }
    // 0x150D3E44: nop

    // 0x150D3E48: b           L_150D3EC0
    // 0x150D3E4C: sb          $t5, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r13;
        goto L_150D3EC0;
    // 0x150D3E4C: sb          $t5, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r13;
L_150D3E50:
    // 0x150D3E50: b           L_150D3EC0
    // 0x150D3E54: sb          $t6, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r14;
        goto L_150D3EC0;
    // 0x150D3E54: sb          $t6, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r14;
L_150D3E58:
    // 0x150D3E58: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x150D3E5C: mflo        $t1
    ctx->r9 = lo;
    // 0x150D3E60: andi        $v0, $t1, 0xFF
    ctx->r2 = ctx->r9 & 0XFF;
    // 0x150D3E64: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x150D3E68: bne         $at, $zero, L_150D3E7C
    if (ctx->r1 != 0) {
        // 0x150D3E6C: lui         $t3, 0x800C
        ctx->r11 = S32(0X800C << 16);
            goto L_150D3E7C;
    }
    // 0x150D3E6C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x150D3E70: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150D3E74: b           L_150D3EC0
    // 0x150D3E78: sb          $t8, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r24;
        goto L_150D3EC0;
    // 0x150D3E78: sb          $t8, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r24;
L_150D3E7C:
    // 0x150D3E7C: lw          $t3, -0x18D8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X18D8);
    // 0x150D3E80: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x150D3E84: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x150D3E88: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x150D3E8C: lb          $v1, 0x3($t5)
    ctx->r3 = MEM_B(ctx->r13, 0X3);
    // 0x150D3E90: slti        $at, $v1, 0x15
    ctx->r1 = SIGNED(ctx->r3) < 0X15 ? 1 : 0;
    // 0x150D3E94: bnel        $at, $zero, L_150D3EA8
    if (ctx->r1 != 0) {
        // 0x150D3E98: slti        $at, $v1, -0x14
        ctx->r1 = SIGNED(ctx->r3) < -0X14 ? 1 : 0;
            goto L_150D3EA8;
    }
    goto skip_14;
    // 0x150D3E98: slti        $at, $v1, -0x14
    ctx->r1 = SIGNED(ctx->r3) < -0X14 ? 1 : 0;
    skip_14:
    // 0x150D3E9C: b           L_150D3EC0
    // 0x150D3EA0: sb          $zero, 0x5($t0)
    MEM_B(0X5, ctx->r8) = 0;
        goto L_150D3EC0;
    // 0x150D3EA0: sb          $zero, 0x5($t0)
    MEM_B(0X5, ctx->r8) = 0;
    // 0x150D3EA4: slti        $at, $v1, -0x14
    ctx->r1 = SIGNED(ctx->r3) < -0X14 ? 1 : 0;
L_150D3EA8:
    // 0x150D3EA8: beq         $at, $zero, L_150D3EBC
    if (ctx->r1 == 0) {
        // 0x150D3EAC: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_150D3EBC;
    }
    // 0x150D3EAC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150D3EB0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150D3EB4: b           L_150D3EC0
    // 0x150D3EB8: sb          $t6, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r14;
        goto L_150D3EC0;
    // 0x150D3EB8: sb          $t6, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r14;
L_150D3EBC:
    // 0x150D3EBC: sb          $t7, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r15;
L_150D3EC0:
    // 0x150D3EC0: lbu         $v0, 0x5($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X5);
    // 0x150D3EC4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150D3EC8: bne         $v0, $zero, L_150D3F48
    if (ctx->r2 != 0) {
        // 0x150D3ECC: nop
    
            goto L_150D3F48;
    }
    // 0x150D3ECC: nop

    // 0x150D3ED0: beq         $a0, $zero, L_150D3EE4
    if (ctx->r4 == 0) {
        // 0x150D3ED4: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_150D3EE4;
    }
    // 0x150D3ED4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D3ED8: lwc1        $f4, 0xA04($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XA04);
    // 0x150D3EDC: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    // 0x150D3EE0: lbu         $v0, 0x5($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X5);
L_150D3EE4:
    // 0x150D3EE4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150D3EE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D3EEC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x150D3EF0: beq         $v0, $a1, L_150D3F9C
    if (ctx->r2 == ctx->r5) {
        // 0x150D3EF4: swc1        $f6, 0x18($t0)
        MEM_W(0X18, ctx->r8) = ctx->f6.u32l;
            goto L_150D3F9C;
    }
    // 0x150D3EF4: swc1        $f6, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f6.u32l;
    // 0x150D3EF8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x150D3EFC: jal         0x1515C0F8
    // 0x150D3F00: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    func_1515C0F8(rdram, ctx);
        goto after_2;
    // 0x150D3F00: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    after_2:
    // 0x150D3F04: bne         $v0, $zero, L_150D3F18
    if (ctx->r2 != 0) {
        // 0x150D3F08: lw          $t0, 0x84($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X84);
            goto L_150D3F18;
    }
    // 0x150D3F08: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x150D3F0C: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x150D3F10: addiu       $t1, $t1, 0x5480
    ctx->r9 = ADD32(ctx->r9, 0X5480);
    // 0x150D3F14: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
L_150D3F18:
    // 0x150D3F18: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x150D3F1C: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    // 0x150D3F20: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x150D3F24: lw          $a2, 0x40($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X40);
    // 0x150D3F28: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    // 0x150D3F2C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x150D3F30: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x150D3F34: jal         0x150D4D58
    // 0x150D3F38: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_150D4D58(rdram, ctx);
        goto after_3;
    // 0x150D3F38: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
    // 0x150D3F3C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x150D3F40: b           L_150D3FA0
    // 0x150D3F44: lwc1        $f0, 0x14($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X14);
        goto L_150D3FA0;
    // 0x150D3F44: lwc1        $f0, 0x14($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X14);
L_150D3F48:
    // 0x150D3F48: bnel        $v0, $at, L_150D3F80
    if (ctx->r2 != ctx->r1) {
        // 0x150D3F4C: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_150D3F80;
    }
    goto skip_15;
    // 0x150D3F4C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_15:
    // 0x150D3F50: beq         $a0, $zero, L_150D3F64
    if (ctx->r4 == 0) {
        // 0x150D3F54: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_150D3F64;
    }
    // 0x150D3F54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D3F58: lwc1        $f8, 0xA08($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XA08);
    // 0x150D3F5C: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x150D3F60: lbu         $v0, 0x5($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X5);
L_150D3F64:
    // 0x150D3F64: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150D3F68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D3F6C: beq         $v0, $a1, L_150D3F9C
    if (ctx->r2 == ctx->r5) {
        // 0x150D3F70: swc1        $f10, 0x18($t0)
        MEM_W(0X18, ctx->r8) = ctx->f10.u32l;
            goto L_150D3F9C;
    }
    // 0x150D3F70: swc1        $f10, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f10.u32l;
    // 0x150D3F74: b           L_150D3FA0
    // 0x150D3F78: lwc1        $f0, 0x14($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X14);
        goto L_150D3FA0;
    // 0x150D3F78: lwc1        $f0, 0x14($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X14);
    // 0x150D3F7C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
L_150D3F80:
    // 0x150D3F80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150D3F84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150D3F88: beq         $a0, $zero, L_150D3F9C
    if (ctx->r4 == 0) {
        // 0x150D3F8C: swc1        $f16, 0x18($t0)
        MEM_W(0X18, ctx->r8) = ctx->f16.u32l;
            goto L_150D3F9C;
    }
    // 0x150D3F8C: swc1        $f16, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f16.u32l;
    // 0x150D3F90: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D3F94: nop

    // 0x150D3F98: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
L_150D3F9C:
    // 0x150D3F9C: lwc1        $f0, 0x14($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X14);
L_150D3FA0:
    // 0x150D3FA0: lwc1        $f4, 0x18($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X18);
    // 0x150D3FA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D3FA8: lwc1        $f8, 0xA0C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XA0C);
    // 0x150D3FAC: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x150D3FB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150D3FB4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150D3FB8: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x150D3FBC: swc1        $f16, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f16.u32l;
L_150D3FC0:
    // 0x150D3FC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150D3FC4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150D3FC8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x150D3FCC: jr          $ra
    // 0x150D3FD0: nop

    return;
    return;
    // 0x150D3FD0: nop

;}
RECOMP_FUNC void func_15199834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15199834: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15199838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519983C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15199840: beq         $a2, $zero, L_1519985C
    if (ctx->r6 == 0) {
        // 0x15199844: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_1519985C;
    }
    // 0x15199844: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15199848: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x1519984C: lbu         $t6, 0x3B($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3B);
    // 0x15199850: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x15199854: jal         0x15147D64
    // 0x15199858: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    func_15147D64(rdram, ctx);
        goto after_0;
    // 0x15199858: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    after_0:
L_1519985C:
    // 0x1519985C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15199860: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15199864: jr          $ra
    // 0x15199868: nop

    return;
    return;
    // 0x15199868: nop

;}
RECOMP_FUNC void func_151B9964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B9964: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x151B9968: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x151B996C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151B9970: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151B9974: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x151B9978: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151B997C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151B9980: bnel        $a2, $at, L_151B9A6C
    if (ctx->r6 != ctx->r1) {
        // 0x151B9984: lw          $v1, 0x14($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X14);
            goto L_151B9A6C;
    }
    goto skip_0;
    // 0x151B9984: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    skip_0:
    // 0x151B9988: lh          $t0, 0x2A($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2A);
    // 0x151B998C: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x151B9990: lbu         $a0, 0x3B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3B);
    // 0x151B9994: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x151B9998: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x151B999C: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x151B99A0: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x151B99A4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151B99A8: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x151B99AC: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x151B99B0: sb          $t9, 0x3B($s0)
    MEM_B(0X3B, ctx->r16) = ctx->r25;
    // 0x151B99B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B99B8: lwc1        $f8, -0x5A7C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5A7C);
    // 0x151B99BC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x151B99C0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151B99C4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B99C8: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x151B99CC: nop

    // 0x151B99D0: sh          $t2, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r10;
    // 0x151B99D4: lh          $t3, 0x2A($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X2A);
    // 0x151B99D8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x151B99DC: sb          $t9, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r25;
    // 0x151B99E0: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x151B99E4: nop

    // 0x151B99E8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151B99EC: jal         0x15048A40
    // 0x151B99F0: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    func_15048A40(rdram, ctx);
        goto after_0;
    // 0x151B99F0: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151B99F4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x151B99F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151B99FC: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151B9A00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B9A04: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x151B9A08: lwc1        $f18, -0x5A78($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5A78);
    // 0x151B9A0C: lbu         $a0, 0x4F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4F);
    // 0x151B9A10: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151B9A14: nop

    // 0x151B9A18: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151B9A1C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B9A20: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x151B9A24: jal         0x150489B0
    // 0x151B9A28: sh          $t5, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r13;
    func_150489B0(rdram, ctx);
        goto after_1;
    // 0x151B9A28: sh          $t5, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r13;
    after_1:
    // 0x151B9A2C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x151B9A30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151B9A34: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151B9A38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B9A3C: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x151B9A40: lwc1        $f4, -0x5A74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5A74);
    // 0x151B9A44: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x151B9A48: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x151B9A4C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B9A50: nop

    // 0x151B9A54: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151B9A58: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B9A5C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151B9A60: b           L_151B9AA8
    // 0x151B9A64: sh          $t7, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r15;
        goto L_151B9AA8;
    // 0x151B9A64: sh          $t7, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r15;
    // 0x151B9A68: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
L_151B9A6C:
    // 0x151B9A6C: lh          $a1, 0x34($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X34);
    // 0x151B9A70: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151B9A74: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x151B9A78: beql        $a0, $a1, L_151B9AAC
    if (ctx->r4 == ctx->r5) {
        // 0x151B9A7C: lh          $v0, 0x22($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X22);
            goto L_151B9AAC;
    }
    goto skip_1;
    // 0x151B9A7C: lh          $v0, 0x22($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X22);
    skip_1:
    // 0x151B9A80: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x151B9A84: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151B9A88: subu        $v0, $a1, $t9
    ctx->r2 = SUB32(ctx->r5, ctx->r25);
    // 0x151B9A8C: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x151B9A90: beql        $at, $zero, L_151B9AA0
    if (ctx->r1 == 0) {
        // 0x151B9A94: sh          $v0, 0x36($s0)
        MEM_H(0X36, ctx->r16) = ctx->r2;
            goto L_151B9AA0;
    }
    goto skip_2;
    // 0x151B9A94: sh          $v0, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r2;
    skip_2:
    // 0x151B9A98: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151B9A9C: sh          $v0, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r2;
L_151B9AA0:
    // 0x151B9AA0: sh          $v0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r2;
    // 0x151B9AA4: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
L_151B9AA8:
    // 0x151B9AA8: lh          $v0, 0x22($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X22);
L_151B9AAC:
    // 0x151B9AAC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x151B9AB0: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x151B9AB4: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x151B9AB8: slt         $at, $t1, $v0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x151B9ABC: bne         $at, $zero, L_151B9BBC
    if (ctx->r1 != 0) {
        // 0x151B9AC0: or          $a0, $t1, $zero
        ctx->r4 = ctx->r9 | 0;
            goto L_151B9BBC;
    }
    // 0x151B9AC0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x151B9AC4: bne         $a2, $zero, L_151B9BDC
    if (ctx->r6 != 0) {
        // 0x151B9AC8: sh          $zero, 0x38($s0)
        MEM_H(0X38, ctx->r16) = 0;
            goto L_151B9BDC;
    }
    // 0x151B9AC8: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
    // 0x151B9ACC: jal         0x150ADA20
    // 0x151B9AD0: sh          $t1, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151B9AD0: sh          $t1, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r9;
    after_2:
    // 0x151B9AD4: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x151B9AD8: slti        $at, $t2, 0x40
    ctx->r1 = SIGNED(ctx->r10) < 0X40 ? 1 : 0;
    // 0x151B9ADC: beq         $at, $zero, L_151B9B54
    if (ctx->r1 == 0) {
        // 0x151B9AE0: lh          $t4, 0x5A($sp)
        ctx->r12 = MEM_H(ctx->r29, 0X5A);
            goto L_151B9B54;
    }
    // 0x151B9AE0: lh          $t4, 0x5A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X5A);
    // 0x151B9AE4: lh          $t5, 0x24($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X24);
    // 0x151B9AE8: lh          $t3, 0x20($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X20);
    // 0x151B9AEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151B9AF0: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x151B9AF4: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x151B9AF8: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x151B9AFC: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x151B9B00: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x151B9B04: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151B9B08: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x151B9B0C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x151B9B10: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x151B9B14: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151B9B18: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151B9B1C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151B9B20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B9B24: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x151B9B28: lbu         $t0, 0xC($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XC);
    // 0x151B9B2C: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x151B9B30: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x151B9B34: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x151B9B38: lbu         $t1, 0x1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1);
    // 0x151B9B3C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x151B9B40: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x151B9B44: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151B9B48: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x151B9B4C: jal         0x15171D4C
    // 0x151B9B50: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    func_15171D4C(rdram, ctx);
        goto after_3;
    // 0x151B9B50: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_3:
L_151B9B54:
    // 0x151B9B54: jal         0x150ADA20
    // 0x151B9B58: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151B9B58: nop

    after_4:
    // 0x151B9B5C: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x151B9B60: slti        $at, $t2, 0xF
    ctx->r1 = SIGNED(ctx->r10) < 0XF ? 1 : 0;
    // 0x151B9B64: beql        $at, $zero, L_151B9BE0
    if (ctx->r1 == 0) {
        // 0x151B9B68: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_151B9BE0;
    }
    goto skip_3;
    // 0x151B9B68: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_3:
    // 0x151B9B6C: jal         0x150ADA20
    // 0x151B9B70: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151B9B70: nop

    after_5:
    // 0x151B9B74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B9B78: lh          $t3, 0x20($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X20);
    // 0x151B9B7C: lh          $t4, 0x5A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X5A);
    // 0x151B9B80: addiu       $t6, $zero, 0x1F4
    ctx->r14 = ADD32(0, 0X1F4);
    // 0x151B9B84: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x151B9B88: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151B9B8C: lh          $t5, 0x24($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X24);
    // 0x151B9B90: addiu       $t7, $zero, 0x7D0
    ctx->r15 = ADD32(0, 0X7D0);
    // 0x151B9B94: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x151B9B98: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x151B9B9C: addiu       $a0, $zero, 0x70
    ctx->r4 = ADD32(0, 0X70);
    // 0x151B9BA0: addiu       $a1, $zero, 0x1388
    ctx->r5 = ADD32(0, 0X1388);
    // 0x151B9BA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151B9BA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151B9BAC: jal         0x10010F88
    // 0x151B9BB0: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    func_10010F88(rdram, ctx);
        goto after_6;
    // 0x151B9BB0: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    after_6:
    // 0x151B9BB4: b           L_151B9BE0
    // 0x151B9BB8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_151B9BE0;
    // 0x151B9BB8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_151B9BBC:
    // 0x151B9BBC: lh          $t8, 0x30($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X30);
    // 0x151B9BC0: subu        $v1, $v0, $a0
    ctx->r3 = SUB32(ctx->r2, ctx->r4);
    // 0x151B9BC4: slti        $at, $v1, 0x40
    ctx->r1 = SIGNED(ctx->r3) < 0X40 ? 1 : 0;
    // 0x151B9BC8: bgezl       $t8, L_151B9BE0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x151B9BCC: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_151B9BE0;
    }
    goto skip_4;
    // 0x151B9BCC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_4:
    // 0x151B9BD0: beq         $at, $zero, L_151B9BDC
    if (ctx->r1 == 0) {
        // 0x151B9BD4: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_151B9BDC;
    }
    // 0x151B9BD4: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x151B9BD8: sb          $t9, 0x3F($s0)
    MEM_B(0X3F, ctx->r16) = ctx->r25;
L_151B9BDC:
    // 0x151B9BDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_151B9BE0:
    // 0x151B9BE0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x151B9BE4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x151B9BE8: jr          $ra
    // 0x151B9BEC: nop

    return;
    return;
    // 0x151B9BEC: nop

;}
RECOMP_FUNC void func_1515E544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515E544: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x1515E548: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x1515E54C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x1515E550: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x1515E554: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x1515E558: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1515E55C: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x1515E560: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x1515E564: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x1515E568: andi        $t2, $a3, 0x7F
    ctx->r10 = ctx->r7 & 0X7F;
    // 0x1515E56C: beq         $t2, $a3, L_1515E57C
    if (ctx->r10 == ctx->r7) {
        // 0x1515E570: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_1515E57C;
    }
    // 0x1515E570: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x1515E574: b           L_1515E580
    // 0x1515E578: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_1515E580;
    // 0x1515E578: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_1515E57C:
    // 0x1515E57C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_1515E580:
    // 0x1515E580: addiu       $t0, $zero, 0x30
    ctx->r8 = ADD32(0, 0X30);
    // 0x1515E584: multu       $t2, $t0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E588: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1515E58C: subu        $a2, $t2, $t1
    ctx->r6 = SUB32(ctx->r10, ctx->r9);
    // 0x1515E590: lui         $t7, 0xDB02
    ctx->r15 = S32(0XDB02 << 16);
    // 0x1515E594: addiu       $a3, $a2, -0x1
    ctx->r7 = ADD32(ctx->r6, -0X1);
    // 0x1515E598: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x1515E59C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1515E5A0: andi        $t9, $a3, 0x3
    ctx->r25 = ctx->r7 & 0X3;
    // 0x1515E5A4: addiu       $t5, $a2, -0x1
    ctx->r13 = ADD32(ctx->r6, -0X1);
    // 0x1515E5A8: mflo        $t8
    ctx->r24 = lo;
    // 0x1515E5AC: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x1515E5B0: nop

    // 0x1515E5B4: blez        $t5, L_1515E794
    if (SIGNED(ctx->r13) <= 0) {
        // 0x1515E5B8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1515E794;
    }
    // 0x1515E5B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1515E5BC: beq         $t9, $zero, L_1515E634
    if (ctx->r25 == 0) {
        // 0x1515E5C0: or          $t2, $t9, $zero
        ctx->r10 = ctx->r25 | 0;
            goto L_1515E634;
    }
    // 0x1515E5C0: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x1515E5C4: sll         $t4, $zero, 2
    ctx->r12 = S32(0 << 2);
    // 0x1515E5C8: subu        $t4, $t4, $zero
    ctx->r12 = SUB32(ctx->r12, 0);
    // 0x1515E5CC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x1515E5D0: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x1515E5D4: addiu       $a3, $a3, -0x1640
    ctx->r7 = ADD32(ctx->r7, -0X1640);
    // 0x1515E5D8: addiu       $t4, $t4, 0x60
    ctx->r12 = ADD32(ctx->r12, 0X60);
    // 0x1515E5DC: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x1515E5E0: lui         $a2, 0xDC28
    ctx->r6 = S32(0XDC28 << 16);
L_1515E5E4:
    // 0x1515E5E4: srl         $t6, $t4, 3
    ctx->r14 = S32(U32(ctx->r12) >> 3);
    // 0x1515E5E8: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x1515E5EC: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x1515E5F0: or          $t9, $t8, $a2
    ctx->r25 = ctx->r24 | ctx->r6;
    // 0x1515E5F4: ori         $t6, $t9, 0xA
    ctx->r14 = ctx->r25 | 0XA;
    // 0x1515E5F8: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x1515E5FC: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x1515E600: lbu         $t7, 0x0($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X0);
    // 0x1515E604: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1515E608: addiu       $t4, $t4, 0x30
    ctx->r12 = ADD32(ctx->r12, 0X30);
    // 0x1515E60C: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E610: mflo        $t8
    ctx->r24 = lo;
    // 0x1515E614: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x1515E618: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1515E61C: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E620: mflo        $t6
    ctx->r14 = lo;
    // 0x1515E624: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x1515E628: bne         $t2, $v1, L_1515E5E4
    if (ctx->r10 != ctx->r3) {
        // 0x1515E62C: sw          $t7, 0x4($t3)
        MEM_W(0X4, ctx->r11) = ctx->r15;
            goto L_1515E5E4;
    }
    // 0x1515E62C: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x1515E630: beq         $v1, $t5, L_1515E794
    if (ctx->r3 == ctx->r13) {
        // 0x1515E634: sll         $t3, $v1, 2
        ctx->r11 = S32(ctx->r3 << 2);
            goto L_1515E794;
    }
L_1515E634:
    // 0x1515E634: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x1515E638: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x1515E63C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x1515E640: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x1515E644: subu        $t2, $v0, $t1
    ctx->r10 = SUB32(ctx->r2, ctx->r9);
    // 0x1515E648: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x1515E64C: addiu       $a3, $a3, -0x1640
    ctx->r7 = ADD32(ctx->r7, -0X1640);
    // 0x1515E650: addiu       $t4, $t3, 0x60
    ctx->r12 = ADD32(ctx->r11, 0X60);
    // 0x1515E654: addiu       $t5, $t3, 0x90
    ctx->r13 = ADD32(ctx->r11, 0X90);
    // 0x1515E658: addiu       $s1, $t3, 0xC0
    ctx->r17 = ADD32(ctx->r11, 0XC0);
    // 0x1515E65C: addiu       $s2, $t3, 0xF0
    ctx->r18 = ADD32(ctx->r11, 0XF0);
    // 0x1515E660: lui         $a2, 0xDC28
    ctx->r6 = S32(0XDC28 << 16);
    // 0x1515E664: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
L_1515E668:
    // 0x1515E668: srl         $t8, $t4, 3
    ctx->r24 = S32(U32(ctx->r12) >> 3);
    // 0x1515E66C: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x1515E670: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x1515E674: or          $t7, $t6, $a2
    ctx->r15 = ctx->r14 | ctx->r6;
    // 0x1515E678: ori         $t8, $t7, 0xA
    ctx->r24 = ctx->r15 | 0XA;
    // 0x1515E67C: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x1515E680: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x1515E684: lbu         $t9, 0x0($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X0);
    // 0x1515E688: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1515E68C: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E690: mflo        $t6
    ctx->r14 = lo;
    // 0x1515E694: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1515E698: srl         $t6, $t5, 3
    ctx->r14 = S32(U32(ctx->r13) >> 3);
    // 0x1515E69C: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E6A0: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x1515E6A4: mflo        $t8
    ctx->r24 = lo;
    // 0x1515E6A8: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x1515E6AC: sw          $t9, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r25;
    // 0x1515E6B0: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x1515E6B4: or          $t9, $t8, $a2
    ctx->r25 = ctx->r24 | ctx->r6;
    // 0x1515E6B8: ori         $t6, $t9, 0xA
    ctx->r14 = ctx->r25 | 0XA;
    // 0x1515E6BC: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x1515E6C0: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x1515E6C4: lbu         $t7, 0x0($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X0);
    // 0x1515E6C8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1515E6CC: addiu       $t4, $t4, 0xC0
    ctx->r12 = ADD32(ctx->r12, 0XC0);
    // 0x1515E6D0: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E6D4: addiu       $t5, $t5, 0xC0
    ctx->r13 = ADD32(ctx->r13, 0XC0);
    // 0x1515E6D8: mflo        $t8
    ctx->r24 = lo;
    // 0x1515E6DC: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x1515E6E0: nop

    // 0x1515E6E4: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E6E8: srl         $t9, $s1, 3
    ctx->r25 = S32(U32(ctx->r17) >> 3);
    // 0x1515E6EC: addiu       $s1, $s1, 0xC0
    ctx->r17 = ADD32(ctx->r17, 0XC0);
    // 0x1515E6F0: mflo        $t6
    ctx->r14 = lo;
    // 0x1515E6F4: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x1515E6F8: addiu       $t8, $t7, 0x30
    ctx->r24 = ADD32(ctx->r15, 0X30);
    // 0x1515E6FC: andi        $t6, $t9, 0xFF
    ctx->r14 = ctx->r25 & 0XFF;
    // 0x1515E700: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x1515E704: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x1515E708: or          $t8, $t7, $a2
    ctx->r24 = ctx->r15 | ctx->r6;
    // 0x1515E70C: ori         $t9, $t8, 0xA
    ctx->r25 = ctx->r24 | 0XA;
    // 0x1515E710: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x1515E714: sw          $t9, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r25;
    // 0x1515E718: lbu         $t6, 0x0($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X0);
    // 0x1515E71C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1515E720: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E724: mflo        $t7
    ctx->r15 = lo;
    // 0x1515E728: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x1515E72C: nop

    // 0x1515E730: multu       $t8, $t0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E734: srl         $t8, $s2, 3
    ctx->r24 = S32(U32(ctx->r18) >> 3);
    // 0x1515E738: addiu       $s2, $s2, 0xC0
    ctx->r18 = ADD32(ctx->r18, 0XC0);
    // 0x1515E73C: mflo        $t9
    ctx->r25 = lo;
    // 0x1515E740: addu        $t6, $t9, $s0
    ctx->r14 = ADD32(ctx->r25, ctx->r16);
    // 0x1515E744: addiu       $t7, $t6, 0x60
    ctx->r15 = ADD32(ctx->r14, 0X60);
    // 0x1515E748: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x1515E74C: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x1515E750: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x1515E754: or          $t7, $t6, $a2
    ctx->r15 = ctx->r14 | ctx->r6;
    // 0x1515E758: ori         $t8, $t7, 0xA
    ctx->r24 = ctx->r15 | 0XA;
    // 0x1515E75C: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x1515E760: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x1515E764: lbu         $t9, 0x0($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X0);
    // 0x1515E768: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1515E76C: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E770: mflo        $t6
    ctx->r14 = lo;
    // 0x1515E774: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1515E778: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1515E77C: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E780: mflo        $t8
    ctx->r24 = lo;
    // 0x1515E784: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x1515E788: addiu       $t6, $t9, 0x90
    ctx->r14 = ADD32(ctx->r25, 0X90);
    // 0x1515E78C: bne         $v1, $t2, L_1515E668
    if (ctx->r3 != ctx->r10) {
        // 0x1515E790: sw          $t6, 0x4($t3)
        MEM_W(0X4, ctx->r11) = ctx->r14;
            goto L_1515E668;
    }
    // 0x1515E790: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
L_1515E794:
    // 0x1515E794: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x1515E798: addiu       $a3, $a3, -0x1640
    ctx->r7 = ADD32(ctx->r7, -0X1640);
    // 0x1515E79C: lui         $a2, 0xDC28
    ctx->r6 = S32(0XDC28 << 16);
    // 0x1515E7A0: beq         $t1, $zero, L_1515E7E0
    if (ctx->r9 == 0) {
        // 0x1515E7A4: lbu         $a1, 0x1B($sp)
        ctx->r5 = MEM_BU(ctx->r29, 0X1B);
            goto L_1515E7E0;
    }
    // 0x1515E7A4: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x1515E7A8: multu       $v1, $t0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E7AC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1515E7B0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1515E7B4: mflo        $t7
    ctx->r15 = lo;
    // 0x1515E7B8: addiu       $t8, $t7, 0x60
    ctx->r24 = ADD32(ctx->r15, 0X60);
    // 0x1515E7BC: srl         $t9, $t8, 3
    ctx->r25 = S32(U32(ctx->r24) >> 3);
    // 0x1515E7C0: andi        $t6, $t9, 0xFF
    ctx->r14 = ctx->r25 & 0XFF;
    // 0x1515E7C4: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x1515E7C8: or          $t8, $t7, $a2
    ctx->r24 = ctx->r15 | ctx->r6;
    // 0x1515E7CC: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1515E7D0: addiu       $t6, $t6, -0x32C0
    ctx->r14 = ADD32(ctx->r14, -0X32C0);
    // 0x1515E7D4: ori         $t9, $t8, 0xA
    ctx->r25 = ctx->r24 | 0XA;
    // 0x1515E7D8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1515E7DC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_1515E7E0:
    // 0x1515E7E0: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
    // 0x1515E7E4: addu        $t3, $v1, $t1
    ctx->r11 = ADD32(ctx->r3, ctx->r9);
    // 0x1515E7E8: addiu       $t7, $t3, 0x1
    ctx->r15 = ADD32(ctx->r11, 0X1);
    // 0x1515E7EC: multu       $t7, $t5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E7F0: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x1515E7F4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1515E7F8: mflo        $t8
    ctx->r24 = lo;
    // 0x1515E7FC: addiu       $t9, $t8, 0x30
    ctx->r25 = ADD32(ctx->r24, 0X30);
    // 0x1515E800: srl         $t6, $t9, 3
    ctx->r14 = S32(U32(ctx->r25) >> 3);
    // 0x1515E804: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x1515E808: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x1515E80C: or          $t9, $t8, $a2
    ctx->r25 = ctx->r24 | ctx->r6;
    // 0x1515E810: ori         $t6, $t9, 0xA
    ctx->r14 = ctx->r25 | 0XA;
    // 0x1515E814: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x1515E818: lbu         $t7, 0x0($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X0);
    // 0x1515E81C: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E820: mflo        $t8
    ctx->r24 = lo;
    // 0x1515E824: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x1515E828: addiu       $t8, $t3, 0x2
    ctx->r24 = ADD32(ctx->r11, 0X2);
    // 0x1515E82C: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E830: mflo        $t6
    ctx->r14 = lo;
    // 0x1515E834: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x1515E838: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x1515E83C: multu       $t8, $t5
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E840: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x1515E844: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1515E848: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1515E84C: mflo        $t9
    ctx->r25 = lo;
    // 0x1515E850: addiu       $t6, $t9, 0x30
    ctx->r14 = ADD32(ctx->r25, 0X30);
    // 0x1515E854: srl         $t7, $t6, 3
    ctx->r15 = S32(U32(ctx->r14) >> 3);
    // 0x1515E858: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x1515E85C: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x1515E860: or          $t6, $t9, $a2
    ctx->r14 = ctx->r25 | ctx->r6;
    // 0x1515E864: ori         $t7, $t6, 0xA
    ctx->r15 = ctx->r14 | 0XA;
    // 0x1515E868: sw          $t7, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r15;
    // 0x1515E86C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1515E870: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x1515E874: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x1515E878: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x1515E87C: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x1515E880: jr          $ra
    // 0x1515E884: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x1515E884: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_150F22D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F22D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F22D4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150F22D8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150F22DC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150F22E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F22E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150F22E8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150F22EC: addiu       $t7, $a2, -0x3
    ctx->r15 = ADD32(ctx->r6, -0X3);
    // 0x150F22F0: sltiu       $at, $t7, 0x6
    ctx->r1 = ctx->r15 < 0X6 ? 1 : 0;
    // 0x150F22F4: beq         $at, $zero, L_150F2340
    if (ctx->r1 == 0) {
        // 0x150F22F8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_150F2340;
    }
    // 0x150F22F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150F22FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F2300: addu        $at, $at, $t7
    gpr jr_addend_150F2308 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x150F2304: lw          $t7, 0x192C($at)
    ctx->r15 = ADD32(ctx->r1, 0X192C);
    // 0x150F2308: jr          $t7
    // 0x150F230C: nop

    switch (jr_addend_150F2308 >> 2) {
        case 0: goto L_150F2310; break;
        case 1: goto L_150F2318; break;
        case 2: goto L_150F2320; break;
        case 3: goto L_150F2328; break;
        case 4: goto L_150F2330; break;
        case 5: goto L_150F2338; break;
        default: switch_error(__func__, 0x150F2308, 0x800A192C);
    }
    // 0x150F230C: nop

L_150F2310:
    // 0x150F2310: b           L_150F2348
    // 0x150F2314: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
        goto L_150F2348;
    // 0x150F2314: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_150F2318:
    // 0x150F2318: b           L_150F2348
    // 0x150F231C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
        goto L_150F2348;
    // 0x150F231C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
L_150F2320:
    // 0x150F2320: b           L_150F2348
    // 0x150F2324: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
        goto L_150F2348;
    // 0x150F2324: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
L_150F2328:
    // 0x150F2328: b           L_150F2348
    // 0x150F232C: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
        goto L_150F2348;
    // 0x150F232C: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
L_150F2330:
    // 0x150F2330: b           L_150F2348
    // 0x150F2334: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
        goto L_150F2348;
    // 0x150F2334: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
L_150F2338:
    // 0x150F2338: b           L_150F2348
    // 0x150F233C: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
        goto L_150F2348;
    // 0x150F233C: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
L_150F2340:
    // 0x150F2340: b           L_150F236C
    // 0x150F2344: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150F236C;
    // 0x150F2344: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150F2348:
    // 0x150F2348: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x150F234C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x150F2350: sll         $t0, $v0, 6
    ctx->r8 = S32(ctx->r2 << 6);
    // 0x150F2354: lw          $t9, 0x1D4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1D4);
    // 0x150F2358: addiu       $a0, $a0, 0x1920
    ctx->r4 = ADD32(ctx->r4, 0X1920);
    // 0x150F235C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x150F2360: jal         0x15143134
    // 0x150F2364: addu        $a2, $t9, $t0
    ctx->r6 = ADD32(ctx->r25, ctx->r8);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x150F2364: addu        $a2, $t9, $t0
    ctx->r6 = ADD32(ctx->r25, ctx->r8);
    after_0:
    // 0x150F2368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150F236C:
    // 0x150F236C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F2370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F2374: jr          $ra
    // 0x150F2378: nop

    return;
    return;
    // 0x150F2378: nop

;}
RECOMP_FUNC void func_150490A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150490A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150490AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150490B0: lwc1        $f14, 0x0($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150490B4: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x150490B8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150490BC: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x150490C0: nop

    // 0x150490C4: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150490C8: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150490CC: sqrt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = sqrtf(ctx->f0.fl);
    // 0x150490D0: c.eq.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl == ctx->f8.fl;
    // 0x150490D4: nop

    // 0x150490D8: bc1f        L_150490E8
    if (!c1cs) {
        // 0x150490DC: nop
    
            goto L_150490E8;
    }
    // 0x150490DC: nop

    // 0x150490E0: b           L_15049138
    // 0x150490E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15049138;
    // 0x150490E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150490E8:
    // 0x150490E8: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
    // 0x150490EC: jal         0x15048864
    // 0x150490F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15048864(rdram, ctx);
        goto after_0;
    // 0x150490F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150490F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150490F8: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150490FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15049100: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15049104: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x15049108: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x1504910C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15049110: slti        $at, $v0, 0x40
    ctx->r1 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x15049114: bc1fl       L_15049138
    if (!c1cs) {
        // 0x15049118: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_15049138;
    }
    goto skip_0;
    // 0x15049118: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x1504911C: beq         $at, $zero, L_15049130
    if (ctx->r1 == 0) {
        // 0x15049120: addiu       $t8, $zero, 0x180
        ctx->r24 = ADD32(0, 0X180);
            goto L_15049130;
    }
    // 0x15049120: addiu       $t8, $zero, 0x180
    ctx->r24 = ADD32(0, 0X180);
    // 0x15049124: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x15049128: b           L_15049134
    // 0x1504912C: subu        $v1, $t7, $v0
    ctx->r3 = SUB32(ctx->r15, ctx->r2);
        goto L_15049134;
    // 0x1504912C: subu        $v1, $t7, $v0
    ctx->r3 = SUB32(ctx->r15, ctx->r2);
L_15049130:
    // 0x15049130: subu        $v1, $t8, $v0
    ctx->r3 = SUB32(ctx->r24, ctx->r2);
L_15049134:
    // 0x15049134: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15049138:
    // 0x15049138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1504913C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15049140: jr          $ra
    // 0x15049144: nop

    return;
    return;
    // 0x15049144: nop

;}
RECOMP_FUNC void func_151A8F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A8F1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151A8F20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151A8F24: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151A8F28: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x151A8F2C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x151A8F30: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151A8F34: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x151A8F38: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x151A8F3C: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    // 0x151A8F40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151A8F44: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x151A8F48: jal         0x151432BC
    // 0x151A8F4C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_151432BC(rdram, ctx);
        goto after_0;
    // 0x151A8F4C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x151A8F50: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x151A8F54: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x151A8F58: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x151A8F5C: swc1        $f4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f4.u32l;
    // 0x151A8F60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151A8F64: jr          $ra
    // 0x151A8F68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151A8F68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_151E51EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E51EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151E51F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151E51F4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151E51F8: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x151E51FC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151E5200: lbu         $t6, 0xB94($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XB94);
    // 0x151E5204: sw          $t7, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r15;
    // 0x151E5208: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E520C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151E5210: sb          $t8, 0xBDC($at)
    MEM_B(0XBDC, ctx->r1) = ctx->r24;
    // 0x151E5214: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x151E5218: jal         0x15042D78
    // 0x151E521C: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
    func_15042D78(rdram, ctx);
        goto after_0;
    // 0x151E521C: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
    after_0:
    // 0x151E5220: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151E5224: addiu       $a0, $a0, -0x1D8
    ctx->r4 = ADD32(ctx->r4, -0X1D8);
    // 0x151E5228: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x151E522C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151E5230: lhu         $t9, -0x16D0($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X16D0);
    // 0x151E5234: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E5238: addiu       $v1, $v1, 0xB9A
    ctx->r3 = ADD32(ctx->r3, 0XB9A);
    // 0x151E523C: beq         $v0, $zero, L_151E5250
    if (ctx->r2 == 0) {
        // 0x151E5240: sh          $t9, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r25;
            goto L_151E5250;
    }
    // 0x151E5240: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x151E5244: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x151E5248: sb          $t0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r8;
    // 0x151E524C: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
L_151E5250:
    // 0x151E5250: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E5254: lbu         $v0, 0xB94($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB94);
    // 0x151E5258: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x151E525C: bne         $v0, $zero, L_151E5274
    if (ctx->r2 != 0) {
        // 0x151E5260: nop
    
            goto L_151E5274;
    }
    // 0x151E5260: nop

    // 0x151E5264: jal         0x151E6964
    // 0x151E5268: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_151E6964(rdram, ctx);
        goto after_1;
    // 0x151E5268: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x151E526C: b           L_151E5294
    // 0x151E5270: nop

        goto L_151E5294;
    // 0x151E5270: nop

L_151E5274:
    // 0x151E5274: bne         $v0, $at, L_151E528C
    if (ctx->r2 != ctx->r1) {
        // 0x151E5278: nop
    
            goto L_151E528C;
    }
    // 0x151E5278: nop

    // 0x151E527C: jal         0x151E6964
    // 0x151E5280: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_151E6964(rdram, ctx);
        goto after_2;
    // 0x151E5280: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x151E5284: b           L_151E5294
    // 0x151E5288: nop

        goto L_151E5294;
    // 0x151E5288: nop

L_151E528C:
    // 0x151E528C: jal         0x151E6964
    // 0x151E5290: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_151E6964(rdram, ctx);
        goto after_3;
    // 0x151E5290: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
L_151E5294:
    // 0x151E5294: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151E5298: lbu         $t1, 0xB94($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0XB94);
    // 0x151E529C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151E52A0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151E52A4: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x151E52A8: lw          $t9, -0x214($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X214);
    // 0x151E52AC: jalr        $t9
    // 0x151E52B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x151E52B0: nop

    after_4:
    // 0x151E52B4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E52B8: lbu         $v0, 0xB94($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB94);
    // 0x151E52BC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151E52C0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E52C4: beq         $v0, $at, L_151E52F4
    if (ctx->r2 == ctx->r1) {
        // 0x151E52C8: addiu       $v1, $v1, 0xA90
        ctx->r3 = ADD32(ctx->r3, 0XA90);
            goto L_151E52F4;
    }
    // 0x151E52C8: addiu       $v1, $v1, 0xA90
    ctx->r3 = ADD32(ctx->r3, 0XA90);
    // 0x151E52CC: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x151E52D0: lw          $t4, -0x161C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X161C);
    // 0x151E52D4: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x151E52D8: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x151E52DC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E52E0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x151E52E4: beq         $a0, $v0, L_151E52F4
    if (ctx->r4 == ctx->r2) {
        // 0x151E52E8: sw          $t5, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r13;
            goto L_151E52F4;
    }
    // 0x151E52E8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x151E52EC: sb          $a0, 0xB95($at)
    MEM_B(0XB95, ctx->r1) = ctx->r4;
    // 0x151E52F0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_151E52F4:
    // 0x151E52F4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151E52F8: sw          $zero, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = 0;
    // 0x151E52FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151E5300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151E5304: jr          $ra
    // 0x151E5308: nop

    return;
    return;
    // 0x151E5308: nop

;}
RECOMP_FUNC void func_150FB324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FB324: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x150FB328: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150FB32C: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x150FB330: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x150FB334: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x150FB338: addiu       $v0, $sp, 0x68
    ctx->r2 = ADD32(ctx->r29, 0X68);
    // 0x150FB33C: addiu       $v1, $sp, 0x50
    ctx->r3 = ADD32(ctx->r29, 0X50);
    // 0x150FB340: addiu       $t0, $sp, 0x44
    ctx->r8 = ADD32(ctx->r29, 0X44);
    // 0x150FB344: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x150FB348: addiu       $t6, $t6, 0x1D30
    ctx->r14 = ADD32(ctx->r14, 0X1D30);
    // 0x150FB34C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x150FB350: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x150FB354: addiu       $t2, $t2, 0x1D3C
    ctx->r10 = ADD32(ctx->r10, 0X1D3C);
    // 0x150FB358: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x150FB35C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x150FB360: addiu       $t1, $sp, 0x5C
    ctx->r9 = ADD32(ctx->r29, 0X5C);
    // 0x150FB364: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150FB368: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x150FB36C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x150FB370: addiu       $t8, $t8, 0x1D48
    ctx->r24 = ADD32(ctx->r24, 0X1D48);
    // 0x150FB374: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x150FB378: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x150FB37C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x150FB380: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x150FB384: addiu       $t4, $t4, 0x1D54
    ctx->r12 = ADD32(ctx->r12, 0X1D54);
    // 0x150FB388: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150FB38C: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x150FB390: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x150FB394: addiu       $t7, $sp, 0x94
    ctx->r15 = ADD32(ctx->r29, 0X94);
    // 0x150FB398: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x150FB39C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x150FB3A0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x150FB3A4: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x150FB3A8: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x150FB3AC: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x150FB3B0: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x150FB3B4: addiu       $t8, $sp, 0x88
    ctx->r24 = ADD32(ctx->r29, 0X88);
    // 0x150FB3B8: addiu       $t9, $sp, 0x7C
    ctx->r25 = ADD32(ctx->r29, 0X7C);
    // 0x150FB3BC: sw          $at, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r1;
    // 0x150FB3C0: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x150FB3C4: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x150FB3C8: lw          $t2, 0x4($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X4);
    // 0x150FB3CC: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x150FB3D0: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x150FB3D4: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x150FB3D8: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x150FB3DC: lw          $t6, 0x1D4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X1D4);
    // 0x150FB3E0: beql        $t6, $zero, L_150FB4AC
    if (ctx->r14 == 0) {
        // 0x150FB3E4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150FB4AC;
    }
    goto skip_0;
    // 0x150FB3E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x150FB3E8: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x150FB3EC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x150FB3F0: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x150FB3F4: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x150FB3F8: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x150FB3FC: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x150FB400: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x150FB404: lw          $a2, 0x1D4($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X1D4);
    // 0x150FB408: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x150FB40C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x150FB410: addiu       $a2, $a2, 0x380
    ctx->r6 = ADD32(ctx->r6, 0X380);
    // 0x150FB414: jal         0x15145EA4
    // 0x150FB418: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    func_15145EA4(rdram, ctx);
        goto after_0;
    // 0x150FB418: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    after_0:
    // 0x150FB41C: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150FB420: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x150FB424: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150FB428: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x150FB42C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150FB430: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x150FB434: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x150FB438: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150FB43C: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x150FB440: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x150FB444: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150FB448: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x150FB44C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x150FB450: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x150FB454: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x150FB458: lbu         $t4, 0xA7($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XA7);
    // 0x150FB45C: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x150FB460: addiu       $t3, $sp, 0x94
    ctx->r11 = ADD32(ctx->r29, 0X94);
    // 0x150FB464: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150FB468: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    // 0x150FB46C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150FB470: jal         0x150FEC28
    // 0x150FB474: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_150FEC28(rdram, ctx);
        goto after_1;
    // 0x150FB474: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_1:
    // 0x150FB478: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150FB47C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150FB480: lbu         $t5, 0xA7($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XA7);
    // 0x150FB484: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x150FB488: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x150FB48C: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x150FB490: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x150FB494: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x150FB498: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x150FB49C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x150FB4A0: jal         0x151D4408
    // 0x150FB4A4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_151D4408(rdram, ctx);
        goto after_2;
    // 0x150FB4A4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_2:
    // 0x150FB4A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150FB4AC:
    // 0x150FB4AC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x150FB4B0: jr          $ra
    // 0x150FB4B4: nop

    return;
    return;
    // 0x150FB4B4: nop

;}
RECOMP_FUNC void func_15052EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15052EF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15052EF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15052EF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15052EFC: lhu         $t7, 0x7A($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X7A);
    // 0x15052F00: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x15052F04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15052F08: addiu       $t8, $t7, 0x4000
    ctx->r24 = ADD32(ctx->r15, 0X4000);
    // 0x15052F0C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x15052F10: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15052F14: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x15052F18: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x15052F1C: sb          $t6, 0x125($a0)
    MEM_B(0X125, ctx->r4) = ctx->r14;
    // 0x15052F20: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15052F24: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15052F28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15052F2C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x15052F30: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15052F34: swc1        $f10, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f10.u32l;
    // 0x15052F38: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15052F3C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x15052F40: jal         0x1505E650
    // 0x15052F44: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x15052F44: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x15052F48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15052F4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15052F50: jr          $ra
    // 0x15052F54: nop

    return;
    return;
    // 0x15052F54: nop

;}
RECOMP_FUNC void func_15071B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071B18: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x15071B1C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15071B20: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x15071B24: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15071B28: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15071B2C: lw          $t6, 0x1D4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1D4);
    // 0x15071B30: beql        $t6, $zero, L_15071CFC
    if (ctx->r14 == 0) {
        // 0x15071B34: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15071CFC;
    }
    goto skip_0;
    // 0x15071B34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x15071B38: lbu         $t7, 0x74($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X74);
    // 0x15071B3C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15071B40: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x15071B44: beql        $t8, $at, L_15071CFC
    if (ctx->r24 == ctx->r1) {
        // 0x15071B48: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15071CFC;
    }
    goto skip_1;
    // 0x15071B48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x15071B4C: jal         0x150ADA20
    // 0x15071B50: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15071B50: nop

    after_0:
    // 0x15071B54: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15071B58: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15071B5C: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x15071B60: lw          $t2, 0x154C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X154C);
    // 0x15071B64: mfhi        $t9
    ctx->r25 = hi;
    // 0x15071B68: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x15071B6C: lw          $a2, 0x1D4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X1D4);
    // 0x15071B70: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x15071B74: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x15071B78: addiu       $t1, $t1, -0x6438
    ctx->r9 = ADD32(ctx->r9, -0X6438);
    // 0x15071B7C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15071B80: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x15071B84: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x15071B88: jal         0x15143134
    // 0x15071B8C: addiu       $a2, $a2, 0x1C0
    ctx->r6 = ADD32(ctx->r6, 0X1C0);
    func_15143134(rdram, ctx);
        goto after_1;
    // 0x15071B8C: addiu       $a2, $a2, 0x1C0
    ctx->r6 = ADD32(ctx->r6, 0X1C0);
    after_1:
    // 0x15071B90: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15071B94: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    // 0x15071B98: jal         0x1504715C
    // 0x15071B9C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_1504715C(rdram, ctx);
        goto after_2;
    // 0x15071B9C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_2:
    // 0x15071BA0: jal         0x150ADA20
    // 0x15071BA4: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15071BA4: nop

    after_3:
    // 0x15071BA8: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x15071BAC: beq         $t3, $zero, L_15071C04
    if (ctx->r11 == 0) {
        // 0x15071BB0: nop
    
            goto L_15071C04;
    }
    // 0x15071BB0: nop

    // 0x15071BB4: jal         0x150ADA20
    // 0x15071BB8: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15071BB8: nop

    after_4:
    // 0x15071BBC: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x15071BC0: beq         $t4, $zero, L_15071BEC
    if (ctx->r12 == 0) {
        // 0x15071BC4: addiu       $a0, $sp, 0x94
        ctx->r4 = ADD32(ctx->r29, 0X94);
            goto L_15071BEC;
    }
    // 0x15071BC4: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x15071BC8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15071BCC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x15071BD0: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x15071BD4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x15071BD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15071BDC: jal         0x151DC260
    // 0x15071BE0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151DC260(rdram, ctx);
        goto after_5;
    // 0x15071BE0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_5:
    // 0x15071BE4: b           L_15071C04
    // 0x15071BE8: nop

        goto L_15071C04;
    // 0x15071BE8: nop

L_15071BEC:
    // 0x15071BEC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15071BF0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15071BF4: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x15071BF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15071BFC: jal         0x151DC484
    // 0x15071C00: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151DC484(rdram, ctx);
        goto after_6;
    // 0x15071C00: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_6:
L_15071C04:
    // 0x15071C04: jal         0x150ADA20
    // 0x15071C08: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15071C08: nop

    after_7:
    // 0x15071C0C: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x15071C10: beq         $t7, $zero, L_15071CF8
    if (ctx->r15 == 0) {
        // 0x15071C14: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_15071CF8;
    }
    // 0x15071C14: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15071C18: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15071C1C: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x15071C20: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x15071C24: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x15071C28: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x15071C2C: addiu       $t1, $sp, 0x94
    ctx->r9 = ADD32(ctx->r29, 0X94);
    // 0x15071C30: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x15071C34: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
    // 0x15071C38: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15071C3C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x15071C40: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x15071C44: addiu       $t6, $zero, -0x40
    ctx->r14 = ADD32(0, -0X40);
    // 0x15071C48: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x15071C4C: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x15071C50: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x15071C54: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x15071C58: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x15071C5C: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x15071C60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15071C64: lwc1        $f4, -0x60CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X60CC);
    // 0x15071C68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15071C6C: lwc1        $f6, -0x60C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X60C8);
    // 0x15071C70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15071C74: lwc1        $f8, -0x60C4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X60C4);
    // 0x15071C78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15071C7C: lwc1        $f10, -0x60C0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X60C0);
    // 0x15071C80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15071C84: lwc1        $f16, -0x60BC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X60BC);
    // 0x15071C88: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x15071C8C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15071C90: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x15071C94: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x15071C98: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15071C9C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15071CA0: sh          $zero, 0x48($sp)
    MEM_H(0X48, ctx->r29) = 0;
    // 0x15071CA4: sh          $t5, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r13;
    // 0x15071CA8: sh          $t6, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r14;
    // 0x15071CAC: sh          $t7, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r15;
    // 0x15071CB0: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x15071CB4: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x15071CB8: sh          $t8, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r24;
    // 0x15071CBC: sh          $t9, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r25;
    // 0x15071CC0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x15071CC4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x15071CC8: addiu       $a2, $a2, -0x63FC
    ctx->r6 = ADD32(ctx->r6, -0X63FC);
    // 0x15071CCC: addiu       $a1, $a1, -0x6414
    ctx->r5 = ADD32(ctx->r5, -0X6414);
    // 0x15071CD0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15071CD4: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x15071CD8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x15071CDC: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x15071CE0: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x15071CE4: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x15071CE8: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x15071CEC: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x15071CF0: jal         0x15152190
    // 0x15071CF4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_15152190(rdram, ctx);
        goto after_8;
    // 0x15071CF4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_8:
L_15071CF8:
    // 0x15071CF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15071CFC:
    // 0x15071CFC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x15071D00: jr          $ra
    // 0x15071D04: nop

    return;
    return;
    // 0x15071D04: nop

;}
RECOMP_FUNC void func_150C3574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C3574: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150C3578: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150C357C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150C3580: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150C3584: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150C3588: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150C358C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150C3590: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C3594: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x150C3598: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x150C359C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x150C35A0: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x150C35A4: sb          $t6, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r14;
    // 0x150C35A8: bnel        $t7, $at, L_150C3604
    if (ctx->r15 != ctx->r1) {
        // 0x150C35AC: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_150C3604;
    }
    goto skip_0;
    // 0x150C35AC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_0:
    // 0x150C35B0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150C35B4: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x150C35B8: addiu       $t8, $s0, 0x168
    ctx->r24 = ADD32(ctx->r16, 0X168);
    // 0x150C35BC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150C35C0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x150C35C4: addiu       $a3, $s0, 0x164
    ctx->r7 = ADD32(ctx->r16, 0X164);
    // 0x150C35C8: jal         0x1505A250
    // 0x150C35CC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_1505A250(rdram, ctx);
        goto after_0;
    // 0x150C35CC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_0:
    // 0x150C35D0: lbu         $t9, 0x87($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X87);
    // 0x150C35D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C35D8: lwc1        $f0, 0x320($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X320);
    // 0x150C35DC: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x150C35E0: beql        $t0, $zero, L_150C3600
    if (ctx->r8 == 0) {
        // 0x150C35E4: sh          $zero, 0x160($s0)
        MEM_H(0X160, ctx->r16) = 0;
            goto L_150C3600;
    }
    goto skip_1;
    // 0x150C35E4: sh          $zero, 0x160($s0)
    MEM_H(0X160, ctx->r16) = 0;
    skip_1:
    // 0x150C35E8: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C35EC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150C35F0: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x150C35F4: nop

    // 0x150C35F8: sh          $t2, 0x224($s0)
    MEM_H(0X224, ctx->r16) = ctx->r10;
    // 0x150C35FC: sh          $zero, 0x160($s0)
    MEM_H(0X160, ctx->r16) = 0;
L_150C3600:
    // 0x150C3600: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_150C3604:
    // 0x150C3604: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150C3608: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150C360C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x150C3610: jal         0x1505A3A8
    // 0x150C3614: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1505A3A8(rdram, ctx);
        goto after_1;
    // 0x150C3614: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x150C3618: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150C361C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C3620: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x150C3624: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x150C3628: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    // 0x150C362C: bne         $v0, $at, L_150C3640
    if (ctx->r2 != ctx->r1) {
        // 0x150C3630: lui         $at, 0x3EC0
        ctx->r1 = S32(0X3EC0 << 16);
            goto L_150C3640;
    }
    // 0x150C3630: lui         $at, 0x3EC0
    ctx->r1 = S32(0X3EC0 << 16);
    // 0x150C3634: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150C3638: nop

    // 0x150C363C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
L_150C3640:
    // 0x150C3640: addiu       $at, $zero, 0xAC
    ctx->r1 = ADD32(0, 0XAC);
    // 0x150C3644: bne         $v0, $at, L_150C3658
    if (ctx->r2 != ctx->r1) {
        // 0x150C3648: lwc1        $f0, 0x28($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
            goto L_150C3658;
    }
    // 0x150C3648: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150C364C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x150C3650: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150C3654: nop

L_150C3658:
    // 0x150C3658: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x150C365C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C3660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C3664: mul.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150C3668: jal         0x15056B08
    // 0x150C366C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_15056B08(rdram, ctx);
        goto after_2;
    // 0x150C366C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x150C3670: lbu         $t3, 0x13D($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X13D);
    // 0x150C3674: beq         $t3, $zero, L_150C3684
    if (ctx->r11 == 0) {
        // 0x150C3678: nop
    
            goto L_150C3684;
    }
    // 0x150C3678: nop

    // 0x150C367C: jal         0x150562FC
    // 0x150C3680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150562FC(rdram, ctx);
        goto after_3;
    // 0x150C3680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_150C3684:
    // 0x150C3684: jal         0x15059140
    // 0x150C3688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15059140(rdram, ctx);
        goto after_4;
    // 0x150C3688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x150C368C: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150C3690: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150C3694: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150C3698: addiu       $v0, $v0, -0x1658
    ctx->r2 = ADD32(ctx->r2, -0X1658);
    // 0x150C369C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150C36A0: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150C36A4: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x150C36A8: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150C36AC: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150C36B0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150C36B4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150C36B8: swc1        $f18, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f18.u32l;
    // 0x150C36BC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150C36C0: lwc1        $f2, 0xBC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x150C36C4: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150C36C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C36CC: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150C36D0: swc1        $f18, 0x148($s0)
    MEM_W(0X148, ctx->r16) = ctx->f18.u32l;
    // 0x150C36D4: lwc1        $f12, 0x148($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X148);
    // 0x150C36D8: lwc1        $f18, 0x3C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150C36DC: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x150C36E0: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150C36E4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150C36E8: add.s       $f14, $f0, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x150C36EC: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x150C36F0: add.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x150C36F4: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x150C36F8: nop

    // 0x150C36FC: bc1fl       L_150C3710
    if (!c1cs) {
        // 0x150C3700: lbu         $v0, 0x87($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X87);
            goto L_150C3710;
    }
    goto skip_2;
    // 0x150C3700: lbu         $v0, 0x87($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X87);
    skip_2:
    // 0x150C3704: add.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x150C3708: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
    // 0x150C370C: lbu         $v0, 0x87($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X87);
L_150C3710:
    // 0x150C3710: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150C3714: lui         $t4, 0xFF02
    ctx->r12 = S32(0XFF02 << 16);
    // 0x150C3718: bne         $v0, $at, L_150C3768
    if (ctx->r2 != ctx->r1) {
        // 0x150C371C: ori         $t4, $t4, 0x133
        ctx->r12 = ctx->r12 | 0X133;
            goto L_150C3768;
    }
    // 0x150C371C: ori         $t4, $t4, 0x133
    ctx->r12 = ctx->r12 | 0X133;
    // 0x150C3720: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150C3724: sw          $t4, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r12;
    // 0x150C3728: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150C372C: addiu       $t5, $t5, -0x3D30
    ctx->r13 = ADD32(ctx->r13, -0X3D30);
    // 0x150C3730: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150C3734: sw          $t5, 0x154C($at)
    MEM_W(0X154C, ctx->r1) = ctx->r13;
    // 0x150C3738: jal         0x1506E8D8
    // 0x150C373C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    func_1506E8D8(rdram, ctx);
        goto after_5;
    // 0x150C373C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x150C3740: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150C3744: sw          $s0, 0x154C($at)
    MEM_W(0X154C, ctx->r1) = ctx->r16;
    // 0x150C3748: lwc1        $f6, 0xBC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x150C374C: lwc1        $f8, 0x148($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X148);
    // 0x150C3750: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150C3754: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150C3758: lbu         $v0, 0x87($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X87);
    // 0x150C375C: swc1        $f6, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->f6.u32l;
    // 0x150C3760: swc1        $f8, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->f8.u32l;
    // 0x150C3764: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
L_150C3768:
    // 0x150C3768: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150C376C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C3770: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x150C3774: sb          $t6, 0x87($s0)
    MEM_B(0X87, ctx->r16) = ctx->r14;
    // 0x150C3778: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x150C377C: nop

    // 0x150C3780: bc1fl       L_150C37C4
    if (!c1cs) {
        // 0x150C3784: lhu         $v0, 0x78($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X78);
            goto L_150C37C4;
    }
    goto skip_3;
    // 0x150C3784: lhu         $v0, 0x78($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X78);
    skip_3:
    // 0x150C3788: lbu         $t7, 0x13D($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X13D);
    // 0x150C378C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150C3790: bnel        $t7, $zero, L_150C37C4
    if (ctx->r15 != 0) {
        // 0x150C3794: lhu         $v0, 0x78($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X78);
            goto L_150C37C4;
    }
    goto skip_4;
    // 0x150C3794: lhu         $v0, 0x78($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X78);
    skip_4:
    // 0x150C3798: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150C379C: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150C37A0: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x150C37A4: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150C37A8: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x150C37AC: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150C37B0: jal         0x1505A630
    // 0x150C37B4: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_1505A630(rdram, ctx);
        goto after_6;
    // 0x150C37B4: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_6:
    // 0x150C37B8: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150C37BC: sh          $v0, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r2;
    // 0x150C37C0: lhu         $v0, 0x78($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X78);
L_150C37C4:
    // 0x150C37C4: lhu         $t8, 0x7A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X7A);
    // 0x150C37C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C37CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x150C37D0: subu        $t9, $t8, $v0
    ctx->r25 = SUB32(ctx->r24, ctx->r2);
    // 0x150C37D4: addiu       $t0, $t9, -0x4000
    ctx->r8 = ADD32(ctx->r25, -0X4000);
    // 0x150C37D8: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x150C37DC: beq         $t1, $zero, L_150C37EC
    if (ctx->r9 == 0) {
        // 0x150C37E0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_150C37EC;
    }
    // 0x150C37E0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150C37E4: b           L_150C37F8
    // 0x150C37E8: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
        goto L_150C37F8;
    // 0x150C37E8: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
L_150C37EC:
    // 0x150C37EC: xori        $a2, $v1, 0x8000
    ctx->r6 = ctx->r3 ^ 0X8000;
    // 0x150C37F0: andi        $t2, $a2, 0xFFFF
    ctx->r10 = ctx->r6 & 0XFFFF;
    // 0x150C37F4: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
L_150C37F8:
    // 0x150C37F8: jal         0x150599C8
    // 0x150C37FC: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    func_150599C8(rdram, ctx);
        goto after_7;
    // 0x150C37FC: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x150C3800: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150C3804: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C3808: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150C380C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150C3810: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C3814: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x150C3818: nop

    // 0x150C381C: bc1fl       L_150C383C
    if (!c1cs) {
        // 0x150C3820: add.s       $f18, $f16, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f16.fl;
            goto L_150C383C;
    }
    goto skip_5;
    // 0x150C3820: add.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f16.fl;
    skip_5:
    // 0x150C3824: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150C3828: lwc1        $f8, 0x324($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X324);
    // 0x150C382C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150C3830: b           L_150C3840
    // 0x150C3834: swc1        $f10, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f10.u32l;
        goto L_150C3840;
    // 0x150C3834: swc1        $f10, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f10.u32l;
    // 0x150C3838: add.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f16.fl;
L_150C383C:
    // 0x150C383C: swc1        $f18, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f18.u32l;
L_150C3840:
    // 0x150C3840: lbu         $t3, 0x13D($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X13D);
    // 0x150C3844: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150C3848: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C384C: beql        $t3, $zero, L_150C3864
    if (ctx->r11 == 0) {
        // 0x150C3850: lwc1        $f8, 0x14C($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X14C);
            goto L_150C3864;
    }
    goto skip_6;
    // 0x150C3850: lwc1        $f8, 0x14C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14C);
    skip_6:
    // 0x150C3854: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150C3858: nop

    // 0x150C385C: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x150C3860: lwc1        $f8, 0x14C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14C);
L_150C3864:
    // 0x150C3864: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150C3868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C386C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150C3870: lhu         $a1, 0x78($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X78);
    // 0x150C3874: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x150C3878: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x150C387C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x150C3880: jal         0x15052490
    // 0x150C3884: nop

    func_15052490(rdram, ctx);
        goto after_8;
    // 0x150C3884: nop

    after_8:
    // 0x150C3888: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C388C: lwc1        $f8, 0x328($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X328);
    // 0x150C3890: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150C3894: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x150C3898: nop

    // 0x150C389C: bc1f        L_150C38B4
    if (!c1cs) {
        // 0x150C38A0: nop
    
            goto L_150C38B4;
    }
    // 0x150C38A0: nop

    // 0x150C38A4: jal         0x100109D0
    // 0x150C38A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_100109D0(rdram, ctx);
        goto after_9;
    // 0x150C38A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x150C38AC: b           L_150C395C
    // 0x150C38B0: nop

        goto L_150C395C;
    // 0x150C38B0: nop

L_150C38B4:
    // 0x150C38B4: jal         0x100107F8
    // 0x150C38B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_100107F8(rdram, ctx);
        goto after_10;
    // 0x150C38B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x150C38BC: bne         $v0, $zero, L_150C3914
    if (ctx->r2 != 0) {
        // 0x150C38C0: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_150C3914;
    }
    // 0x150C38C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C38C4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x150C38C8: addiu       $at, $zero, 0xAC
    ctx->r1 = ADD32(0, 0XAC);
    // 0x150C38CC: addiu       $t4, $zero, 0x630
    ctx->r12 = ADD32(0, 0X630);
    // 0x150C38D0: bne         $v0, $at, L_150C38E0
    if (ctx->r2 != ctx->r1) {
        // 0x150C38D4: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_150C38E0;
    }
    // 0x150C38D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150C38D8: b           L_150C3904
    // 0x150C38DC: sw          $t4, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r12;
        goto L_150C3904;
    // 0x150C38DC: sw          $t4, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r12;
L_150C38E0:
    // 0x150C38E0: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x150C38E4: bne         $v0, $at, L_150C38FC
    if (ctx->r2 != ctx->r1) {
        // 0x150C38E8: addiu       $t6, $zero, 0x62A
        ctx->r14 = ADD32(0, 0X62A);
            goto L_150C38FC;
    }
    // 0x150C38E8: addiu       $t6, $zero, 0x62A
    ctx->r14 = ADD32(0, 0X62A);
    // 0x150C38EC: addiu       $t5, $zero, 0x67A
    ctx->r13 = ADD32(0, 0X67A);
    // 0x150C38F0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150C38F4: b           L_150C3904
    // 0x150C38F8: sw          $t5, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r13;
        goto L_150C3904;
    // 0x150C38F8: sw          $t5, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r13;
L_150C38FC:
    // 0x150C38FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150C3900: sw          $t6, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r14;
L_150C3904:
    // 0x150C3904: jal         0x1506E5FC
    // 0x150C3908: nop

    func_1506E5FC(rdram, ctx);
        goto after_11;
    // 0x150C3908: nop

    after_11:
    // 0x150C390C: b           L_150C395C
    // 0x150C3910: nop

        goto L_150C395C;
    // 0x150C3910: nop

L_150C3914:
    // 0x150C3914: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150C3918: lwc1        $f18, 0x32C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X32C);
    // 0x150C391C: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x150C3920: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C3924: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x150C3928: nop

    // 0x150C392C: slti        $at, $a1, 0x6D61
    ctx->r1 = SIGNED(ctx->r5) < 0X6D61 ? 1 : 0;
    // 0x150C3930: bnel        $at, $zero, L_150C3940
    if (ctx->r1 != 0) {
        // 0x150C3934: lbu         $t8, 0x4($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X4);
            goto L_150C3940;
    }
    goto skip_7;
    // 0x150C3934: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
    skip_7:
    // 0x150C3938: addiu       $a1, $zero, 0x6D60
    ctx->r5 = ADD32(0, 0X6D60);
    // 0x150C393C: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
L_150C3940:
    // 0x150C3940: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x150C3944: sra         $t9, $a1, 1
    ctx->r25 = S32(SIGNED(ctx->r5) >> 1);
    // 0x150C3948: bne         $t8, $at, L_150C3954
    if (ctx->r24 != ctx->r1) {
        // 0x150C394C: nop
    
            goto L_150C3954;
    }
    // 0x150C394C: nop

    // 0x150C3950: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_150C3954:
    // 0x150C3954: jal         0x1001091C
    // 0x150C3958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1001091C(rdram, ctx);
        goto after_12;
    // 0x150C3958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_150C395C:
    // 0x150C395C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C3960: lwc1        $f10, 0x330($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X330);
    // 0x150C3964: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150C3968: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x150C396C: nop

    // 0x150C3970: bc1fl       L_150C3984
    if (!c1cs) {
        // 0x150C3974: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150C3984;
    }
    goto skip_8;
    // 0x150C3974: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_8:
    // 0x150C3978: jal         0x100109D0
    // 0x150C397C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_100109D0(rdram, ctx);
        goto after_13;
    // 0x150C397C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x150C3980: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150C3984:
    // 0x150C3984: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150C3988: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150C398C: jr          $ra
    // 0x150C3990: nop

    return;
    return;
    // 0x150C3990: nop

;}
RECOMP_FUNC void func_151742EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151742EC: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x151742F0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151742F4: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x151742F8: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x151742FC: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x15174300: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x15174304: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x15174308: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x1517430C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x15174310: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x15174314: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15174318: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x1517431C: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x15174320: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x15174324: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x15174328: addiu       $s0, $s0, -0x2CB8
    ctx->r16 = ADD32(ctx->r16, -0X2CB8);
    // 0x1517432C: beq         $t6, $zero, L_1517433C
    if (ctx->r14 == 0) {
        // 0x15174330: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_1517433C;
    }
    // 0x15174330: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x15174334: b           L_151745C0
    // 0x15174338: lw          $v0, 0xB8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB8);
        goto L_151745C0;
    // 0x15174338: lw          $v0, 0xB8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB8);
L_1517433C:
    // 0x1517433C: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x15174340: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x15174344: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x15174348: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x1517434C: addiu       $s3, $s3, -0x69D0
    ctx->r19 = ADD32(ctx->r19, -0X69D0);
    // 0x15174350: addiu       $s4, $s4, -0x2D00
    ctx->r20 = ADD32(ctx->r20, -0X2D00);
    // 0x15174354: addiu       $s5, $s5, -0x2CC0
    ctx->r21 = ADD32(ctx->r21, -0X2CC0);
    // 0x15174358: addiu       $s7, $s7, -0x5F80
    ctx->r23 = ADD32(ctx->r23, -0X5F80);
    // 0x1517435C: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
L_15174360:
    // 0x15174360: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15174364: lbu         $t7, -0x1640($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1640);
    // 0x15174368: lbu         $t9, 0xC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XC);
    // 0x1517436C: sll         $s1, $s2, 3
    ctx->r17 = S32(ctx->r18 << 3);
    // 0x15174370: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x15174374: bne         $t8, $t9, L_15174430
    if (ctx->r24 != ctx->r25) {
        // 0x15174378: lui         $a0, 0x800E
        ctx->r4 = S32(0X800E << 16);
            goto L_15174430;
    }
    // 0x15174378: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1517437C: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x15174380: lhu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X2CF0);
    // 0x15174384: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x15174388: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x1517438C: sra         $t0, $a0, 13
    ctx->r8 = S32(SIGNED(ctx->r4) >> 13);
    // 0x15174390: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x15174394: addu        $v1, $s3, $t1
    ctx->r3 = ADD32(ctx->r19, ctx->r9);
    // 0x15174398: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x1517439C: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x151743A0: sra         $t2, $a0, 2
    ctx->r10 = S32(SIGNED(ctx->r4) >> 2);
    // 0x151743A4: andi        $t3, $t2, 0x7FF
    ctx->r11 = ctx->r10 & 0X7FF;
    // 0x151743A8: sllv        $t5, $t3, $t4
    ctx->r13 = S32(ctx->r11 << (ctx->r12 & 31));
    // 0x151743AC: addu        $a1, $t6, $t5
    ctx->r5 = ADD32(ctx->r14, ctx->r13);
    // 0x151743B0: srl         $t7, $a1, 3
    ctx->r15 = S32(U32(ctx->r5) >> 3);
    // 0x151743B4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x151743B8: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x151743BC: subu        $a2, $a1, $t0
    ctx->r6 = SUB32(ctx->r5, ctx->r8);
    // 0x151743C0: bgez        $a2, L_151743D0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x151743C4: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_151743D0;
    }
    // 0x151743C4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151743C8: b           L_151743D0
    // 0x151743CC: negu        $v0, $a2
    ctx->r2 = SUB32(0, ctx->r6);
        goto L_151743D0;
    // 0x151743CC: negu        $v0, $a2
    ctx->r2 = SUB32(0, ctx->r6);
L_151743D0:
    // 0x151743D0: slti        $at, $v0, 0x12C
    ctx->r1 = SIGNED(ctx->r2) < 0X12C ? 1 : 0;
    // 0x151743D4: beq         $at, $zero, L_1517442C
    if (ctx->r1 == 0) {
        // 0x151743D8: lui         $v0, 0x800E
        ctx->r2 = S32(0X800E << 16);
            goto L_1517442C;
    }
    // 0x151743D8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151743DC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x151743E0: lhu         $v0, -0x2CD8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2CD8);
    // 0x151743E4: lb          $v1, 0x34($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X34);
    // 0x151743E8: sra         $a1, $v0, 8
    ctx->r5 = S32(SIGNED(ctx->r2) >> 8);
    // 0x151743EC: sra         $a2, $v0, 3
    ctx->r6 = S32(SIGNED(ctx->r2) >> 3);
    // 0x151743F0: sll         $a3, $v0, 2
    ctx->r7 = S32(ctx->r2 << 2);
    // 0x151743F4: andi        $t1, $a1, 0xF8
    ctx->r9 = ctx->r5 & 0XF8;
    // 0x151743F8: andi        $t2, $a2, 0xF8
    ctx->r10 = ctx->r6 & 0XF8;
    // 0x151743FC: andi        $t3, $a3, 0xF8
    ctx->r11 = ctx->r7 & 0XF8;
    // 0x15174400: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x15174404: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x15174408: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x1517440C: beq         $s6, $v1, L_1517442C
    if (ctx->r22 == ctx->r3) {
        // 0x15174410: sw          $v0, 0x0($s5)
        MEM_W(0X0, ctx->r21) = ctx->r2;
            goto L_1517442C;
    }
    // 0x15174410: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x15174414: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x15174418: addu        $t6, $s7, $t4
    ctx->r14 = ADD32(ctx->r23, ctx->r12);
    // 0x1517441C: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x15174420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15174424: jalr        $t9
    // 0x15174428: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15174428: nop

    after_0:
L_1517442C:
    // 0x1517442C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_15174430:
    // 0x15174430: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15174434: slti        $at, $s2, 0x3
    ctx->r1 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x15174438: bne         $at, $zero, L_15174360
    if (ctx->r1 != 0) {
        // 0x1517443C: addiu       $s0, $s0, 0x3C
        ctx->r16 = ADD32(ctx->r16, 0X3C);
            goto L_15174360;
    }
    // 0x1517443C: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
    // 0x15174440: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x15174444: addiu       $s0, $s0, -0x2CB8
    ctx->r16 = ADD32(ctx->r16, -0X2CB8);
    // 0x15174448: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1517444C: ori         $fp, $zero, 0xFFFF
    ctx->r30 = 0 | 0XFFFF;
    // 0x15174450: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
L_15174454:
    // 0x15174454: lbu         $t5, 0xC($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XC);
    // 0x15174458: lw          $v0, 0xBC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XBC);
    // 0x1517445C: sll         $s1, $s2, 3
    ctx->r17 = S32(ctx->r18 << 3);
    // 0x15174460: bne         $s7, $t5, L_151745B0
    if (ctx->r23 != ctx->r13) {
        // 0x15174464: lui         $t7, 0x800E
        ctx->r15 = S32(0X800E << 16);
            goto L_151745B0;
    }
    // 0x15174464: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15174468: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x1517446C: addu        $s3, $s1, $t7
    ctx->r19 = ADD32(ctx->r17, ctx->r15);
    // 0x15174470: sh          $fp, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r30;
    // 0x15174474: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15174478: lbu         $t8, -0x1640($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1640);
    // 0x1517447C: sll         $s5, $v0, 16
    ctx->r21 = S32(ctx->r2 << 16);
    // 0x15174480: sra         $t1, $s5, 16
    ctx->r9 = S32(SIGNED(ctx->r21) >> 16);
    // 0x15174484: sll         $a0, $t1, 16
    ctx->r4 = S32(ctx->r9 << 16);
    // 0x15174488: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x1517448C: sll         $s6, $v0, 2
    ctx->r22 = S32(ctx->r2 << 2);
    // 0x15174490: subu        $s6, $s6, $v0
    ctx->r22 = SUB32(ctx->r22, ctx->r2);
    // 0x15174494: addiu       $t5, $t5, -0x2D00
    ctx->r13 = ADD32(ctx->r13, -0X2D00);
    // 0x15174498: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x1517449C: addiu       $t3, $sp, 0xB4
    ctx->r11 = ADD32(ctx->r29, 0XB4);
    // 0x151744A0: addiu       $t4, $sp, 0xB0
    ctx->r12 = ADD32(ctx->r29, 0XB0);
    // 0x151744A4: addiu       $t6, $sp, 0xAC
    ctx->r14 = ADD32(ctx->r29, 0XAC);
    // 0x151744A8: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x151744AC: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x151744B0: sb          $t0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r8;
    // 0x151744B4: addu        $s4, $t9, $t5
    ctx->r20 = ADD32(ctx->r25, ctx->r13);
    // 0x151744B8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151744BC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151744C0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151744C4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x151744C8: sll         $s6, $s6, 7
    ctx->r22 = S32(ctx->r22 << 7);
    // 0x151744CC: or          $s5, $t1, $zero
    ctx->r21 = ctx->r9 | 0;
    // 0x151744D0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x151744D4: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x151744D8: jal         0x1501A764
    // 0x151744DC: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    func_1501A764(rdram, ctx);
        goto after_1;
    // 0x151744DC: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    after_1:
    // 0x151744E0: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x151744E4: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x151744E8: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x151744EC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151744F0: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x151744F4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151744F8: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x151744FC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15174500: sw          $t1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r9;
    // 0x15174504: lw          $t2, -0x19D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X19D8);
    // 0x15174508: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x1517450C: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x15174510: addu        $v0, $t2, $s6
    ctx->r2 = ADD32(ctx->r10, ctx->r22);
    // 0x15174514: lwc1        $f4, 0x2C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x15174518: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x1517451C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15174520: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15174524: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x15174528: nop

    // 0x1517452C: slt         $at, $v1, $t4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x15174530: bnel        $at, $zero, L_151745B4
    if (ctx->r1 != 0) {
        // 0x15174534: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_151745B4;
    }
    goto skip_0;
    // 0x15174534: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x15174538: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1517453C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15174540: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x15174544: nop

    // 0x15174548: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1517454C: beql        $at, $zero, L_151745B4
    if (ctx->r1 == 0) {
        // 0x15174550: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_151745B4;
    }
    goto skip_1;
    // 0x15174550: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x15174554: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x15174558: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1517455C: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x15174560: nop

    // 0x15174564: slt         $at, $a0, $t7
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x15174568: bnel        $at, $zero, L_151745B4
    if (ctx->r1 != 0) {
        // 0x1517456C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_151745B4;
    }
    goto skip_2;
    // 0x1517456C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x15174570: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x15174574: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15174578: addiu       $t1, $t1, -0x2CD8
    ctx->r9 = ADD32(ctx->r9, -0X2CD8);
    // 0x1517457C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15174580: addu        $t2, $s1, $t1
    ctx->r10 = ADD32(ctx->r17, ctx->r9);
    // 0x15174584: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15174588: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x1517458C: nop

    // 0x15174590: slt         $at, $a0, $t0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x15174594: beq         $at, $zero, L_151745B0
    if (ctx->r1 == 0) {
        // 0x15174598: lw          $a0, 0xB8($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XB8);
            goto L_151745B0;
    }
    // 0x15174598: lw          $a0, 0xB8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB8);
    // 0x1517459C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x151745A0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151745A4: jal         0x15173D00
    // 0x151745A8: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    func_15173D00(rdram, ctx);
        goto after_2;
    // 0x151745A8: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    after_2:
    // 0x151745AC: sw          $v0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r2;
L_151745B0:
    // 0x151745B0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_151745B4:
    // 0x151745B4: bne         $s2, $s7, L_15174454
    if (ctx->r18 != ctx->r23) {
        // 0x151745B8: addiu       $s0, $s0, 0x3C
        ctx->r16 = ADD32(ctx->r16, 0X3C);
            goto L_15174454;
    }
    // 0x151745B8: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
    // 0x151745BC: lw          $v0, 0xB8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB8);
L_151745C0:
    // 0x151745C0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x151745C4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151745C8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x151745CC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x151745D0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x151745D4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x151745D8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x151745DC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x151745E0: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x151745E4: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x151745E8: jr          $ra
    // 0x151745EC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x151745EC: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_1506E848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506E84C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506E850: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506E854: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506E858: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1506E85C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506E860: jal         0x1506E46C
    // 0x1506E864: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1506E864: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x1506E868: beq         $v0, $zero, L_1506E888
    if (ctx->r2 == 0) {
        // 0x1506E86C: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_1506E888;
    }
    // 0x1506E86C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506E870: jal         0x1000F4D8
    // 0x1506E874: lhu         $a0, 0x1582($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X1582);
    func_1000F4D8(rdram, ctx);
        goto after_1;
    // 0x1506E874: lhu         $a0, 0x1582($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X1582);
    after_1:
    // 0x1506E878: bne         $v0, $zero, L_1506E888
    if (ctx->r2 != 0) {
        // 0x1506E87C: addiu       $a0, $zero, 0x50
        ctx->r4 = ADD32(0, 0X50);
            goto L_1506E888;
    }
    // 0x1506E87C: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x1506E880: jal         0x1506BA4C
    // 0x1506E884: addiu       $a1, $zero, 0x320
    ctx->r5 = ADD32(0, 0X320);
    func_1506BA4C(rdram, ctx);
        goto after_2;
    // 0x1506E884: addiu       $a1, $zero, 0x320
    ctx->r5 = ADD32(0, 0X320);
    after_2:
L_1506E888:
    // 0x1506E888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506E88C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506E890: jr          $ra
    // 0x1506E894: nop

    return;
    return;
    // 0x1506E894: nop

;}
RECOMP_FUNC void func_151E8620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E8620: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151E8624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151E8628: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E862C: lbu         $v1, 0xB94($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB94);
    // 0x151E8630: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151E8634: lui         $t6, 0x900
    ctx->r14 = S32(0X900 << 16);
    // 0x151E8638: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x151E863C: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x151E8640: lw          $a1, -0x40($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X40);
    // 0x151E8644: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151E8648: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151E864C: beq         $a1, $zero, L_151E866C
    if (ctx->r5 == 0) {
        // 0x151E8650: sw          $t6, -0x3720($at)
        MEM_W(-0X3720, ctx->r1) = ctx->r14;
            goto L_151E866C;
    }
    // 0x151E8650: sw          $t6, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r14;
    // 0x151E8654: jalr        $a1
    // 0x151E8658: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r5)(rdram, ctx);
        goto after_0;
    // 0x151E8658: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x151E865C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E8660: lbu         $v1, 0xB94($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB94);
    // 0x151E8664: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x151E8668: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_151E866C:
    // 0x151E866C: beq         $v1, $zero, L_151E8684
    if (ctx->r3 == 0) {
        // 0x151E8670: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_151E8684;
    }
    // 0x151E8670: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151E8674: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E8678: sw          $zero, 0x58($at)
    MEM_W(0X58, ctx->r1) = 0;
    // 0x151E867C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E8680: sh          $zero, 0xC78($at)
    MEM_H(0XC78, ctx->r1) = 0;
L_151E8684:
    // 0x151E8684: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151E8688: lbu         $t9, -0x1640($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1640);
    // 0x151E868C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x151E8690: lw          $t8, -0x145C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X145C);
    // 0x151E8694: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x151E8698: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x151E869C: lw          $t1, -0x1638($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1638);
    // 0x151E86A0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151E86A4: sw          $zero, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = 0;
    // 0x151E86A8: subu        $t2, $a0, $t1
    ctx->r10 = SUB32(ctx->r4, ctx->r9);
    // 0x151E86AC: sra         $t3, $t2, 3
    ctx->r11 = S32(SIGNED(ctx->r10) >> 3);
    // 0x151E86B0: slt         $at, $t8, $t3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x151E86B4: beq         $at, $zero, L_151E86C4
    if (ctx->r1 == 0) {
        // 0x151E86B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151E86C4;
    }
    // 0x151E86B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151E86BC: b           L_151E86C8
    // 0x151E86C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151E86C8;
    // 0x151E86C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151E86C4:
    // 0x151E86C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151E86C8:
    // 0x151E86C8: beql        $v0, $zero, L_151E86DC
    if (ctx->r2 == 0) {
        // 0x151E86CC: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_151E86DC;
    }
    goto skip_0;
    // 0x151E86CC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
    // 0x151E86D0: b           L_151E86DC
    // 0x151E86D4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
        goto L_151E86DC;
    // 0x151E86D4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151E86D8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_151E86DC:
    // 0x151E86DC: jr          $ra
    // 0x151E86E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151E86E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_151E4BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E4BD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151E4BDC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151E4BE0: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x151E4BE4: addiu       $a3, $a3, -0x240
    ctx->r7 = ADD32(ctx->r7, -0X240);
    // 0x151E4BE8: addiu       $a0, $a0, -0x4974
    ctx->r4 = ADD32(ctx->r4, -0X4974);
    // 0x151E4BEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151E4BF0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x151E4BF4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4BF8: sb          $zero, -0x1D4($at)
    MEM_B(-0X1D4, ctx->r1) = 0;
    // 0x151E4BFC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151E4C00: sb          $zero, -0x153F($at)
    MEM_B(-0X153F, ctx->r1) = 0;
    // 0x151E4C04: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4C08: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151E4C0C: lw          $v1, -0x22C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X22C);
    // 0x151E4C10: sb          $zero, -0x25C($at)
    MEM_B(-0X25C, ctx->r1) = 0;
    // 0x151E4C14: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4C18: sw          $zero, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = 0;
    // 0x151E4C1C: lb          $t6, 0x42($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X42);
    // 0x151E4C20: lhu         $t9, 0x0($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X0);
    // 0x151E4C24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151E4C28: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E4C2C: andi        $t0, $t9, 0xF369
    ctx->r8 = ctx->r25 & 0XF369;
    // 0x151E4C30: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x151E4C34: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x151E4C38: mflo        $t7
    ctx->r15 = lo;
    // 0x151E4C3C: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x151E4C40: lb          $a2, 0x7($t8)
    ctx->r6 = MEM_B(ctx->r24, 0X7);
    // 0x151E4C44: sh          $t0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r8;
    // 0x151E4C48: lb          $t1, 0x42($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X42);
    // 0x151E4C4C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x151E4C50: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E4C54: multu       $t1, $a1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E4C58: mflo        $t2
    ctx->r10 = lo;
    // 0x151E4C5C: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x151E4C60: lb          $t4, 0x5($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X5);
    // 0x151E4C64: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x151E4C68: bltz        $t4, L_151E4CE4
    if (SIGNED(ctx->r12) < 0) {
        // 0x151E4C6C: nop
    
            goto L_151E4CE4;
    }
    // 0x151E4C6C: nop

    // 0x151E4C70: lb          $t5, 0xAC0($t5)
    ctx->r13 = MEM_B(ctx->r13, 0XAC0);
    // 0x151E4C74: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151E4C78: bne         $v1, $t5, L_151E4C8C
    if (ctx->r3 != ctx->r13) {
        // 0x151E4C7C: nop
    
            goto L_151E4C8C;
    }
    // 0x151E4C7C: nop

    // 0x151E4C80: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x151E4C84: sra         $t6, $v0, 24
    ctx->r14 = S32(SIGNED(ctx->r2) >> 24);
    // 0x151E4C88: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_151E4C8C:
    // 0x151E4C8C: lb          $t7, 0xAC1($t7)
    ctx->r15 = MEM_B(ctx->r15, 0XAC1);
    // 0x151E4C90: bne         $v1, $t7, L_151E4CA4
    if (ctx->r3 != ctx->r15) {
        // 0x151E4C94: nop
    
            goto L_151E4CA4;
    }
    // 0x151E4C94: nop

    // 0x151E4C98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151E4C9C: sll         $t8, $v0, 24
    ctx->r24 = S32(ctx->r2 << 24);
    // 0x151E4CA0: sra         $v0, $t8, 24
    ctx->r2 = S32(SIGNED(ctx->r24) >> 24);
L_151E4CA4:
    // 0x151E4CA4: lb          $t0, 0xAC2($t0)
    ctx->r8 = MEM_B(ctx->r8, 0XAC2);
    // 0x151E4CA8: bne         $v1, $t0, L_151E4CBC
    if (ctx->r3 != ctx->r8) {
        // 0x151E4CAC: nop
    
            goto L_151E4CBC;
    }
    // 0x151E4CAC: nop

    // 0x151E4CB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151E4CB4: sll         $t1, $v0, 24
    ctx->r9 = S32(ctx->r2 << 24);
    // 0x151E4CB8: sra         $v0, $t1, 24
    ctx->r2 = S32(SIGNED(ctx->r9) >> 24);
L_151E4CBC:
    // 0x151E4CBC: lb          $t3, 0xAC3($t3)
    ctx->r11 = MEM_B(ctx->r11, 0XAC3);
    // 0x151E4CC0: bnel        $v1, $t3, L_151E4CD8
    if (ctx->r3 != ctx->r11) {
        // 0x151E4CC4: slti        $t6, $v0, 0x2
        ctx->r14 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_151E4CD8;
    }
    goto skip_0;
    // 0x151E4CC4: slti        $t6, $v0, 0x2
    ctx->r14 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    skip_0:
    // 0x151E4CC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151E4CCC: sll         $t4, $v0, 24
    ctx->r12 = S32(ctx->r2 << 24);
    // 0x151E4CD0: sra         $v0, $t4, 24
    ctx->r2 = S32(SIGNED(ctx->r12) >> 24);
    // 0x151E4CD4: slti        $t6, $v0, 0x2
    ctx->r14 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
L_151E4CD8:
    // 0x151E4CD8: xori        $t6, $t6, 0x1
    ctx->r14 = ctx->r14 ^ 0X1;
    // 0x151E4CDC: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x151E4CE0: sra         $v0, $t7, 24
    ctx->r2 = S32(SIGNED(ctx->r15) >> 24);
L_151E4CE4:
    // 0x151E4CE4: bltz        $a2, L_151E4CF4
    if (SIGNED(ctx->r6) < 0) {
        // 0x151E4CE8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_151E4CF4;
    }
    // 0x151E4CE8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151E4CEC: beq         $v0, $zero, L_151E4D58
    if (ctx->r2 == 0) {
        // 0x151E4CF0: sll         $t5, $a2, 2
        ctx->r13 = S32(ctx->r6 << 2);
            goto L_151E4D58;
    }
    // 0x151E4CF0: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
L_151E4CF4:
    // 0x151E4CF4: bne         $a2, $at, L_151E4D24
    if (ctx->r6 != ctx->r1) {
        // 0x151E4CF8: lui         $t9, 0x800E
        ctx->r25 = S32(0X800E << 16);
            goto L_151E4D24;
    }
    // 0x151E4CF8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151E4CFC: lb          $t9, 0xA86($t9)
    ctx->r25 = MEM_B(ctx->r25, 0XA86);
    // 0x151E4D00: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x151E4D04: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4D08: bne         $t9, $zero, L_151E4D24
    if (ctx->r25 != 0) {
        // 0x151E4D0C: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_151E4D24;
    }
    // 0x151E4D0C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x151E4D10: sb          $t0, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r8;
    // 0x151E4D14: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4D18: sb          $t1, -0x280($at)
    MEM_B(-0X280, ctx->r1) = ctx->r9;
    // 0x151E4D1C: b           L_151E4DB4
    // 0x151E4D20: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
        goto L_151E4DB4;
    // 0x151E4D20: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
L_151E4D24:
    // 0x151E4D24: bne         $v0, $zero, L_151E4D3C
    if (ctx->r2 != 0) {
        // 0x151E4D28: addiu       $a1, $zero, 0x1D
        ctx->r5 = ADD32(0, 0X1D);
            goto L_151E4D3C;
    }
    // 0x151E4D28: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x151E4D2C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x151E4D30: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4D34: b           L_151E4D7C
    // 0x151E4D38: sb          $t2, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r10;
        goto L_151E4D7C;
    // 0x151E4D38: sb          $t2, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r10;
L_151E4D3C:
    // 0x151E4D3C: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x151E4D40: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4D44: sb          $t3, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r11;
    // 0x151E4D48: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4D4C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x151E4D50: b           L_151E4D7C
    // 0x151E4D54: sb          $t4, -0x280($at)
    MEM_B(-0X280, ctx->r1) = ctx->r12;
        goto L_151E4D7C;
    // 0x151E4D54: sb          $t4, -0x280($at)
    MEM_B(-0X280, ctx->r1) = ctx->r12;
L_151E4D58:
    // 0x151E4D58: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x151E4D5C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4D60: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x151E4D64: sb          $t6, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r14;
    // 0x151E4D68: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x151E4D6C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4D70: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151E4D74: lh          $a1, -0x4844($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X4844);
    // 0x151E4D78: sb          $t7, -0x280($at)
    MEM_B(-0X280, ctx->r1) = ctx->r15;
L_151E4D7C:
    // 0x151E4D7C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x151E4D80: sb          $zero, 0x2E40($at)
    MEM_B(0X2E40, ctx->r1) = 0;
    // 0x151E4D84: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x151E4D88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E4D8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E4D90: jal         0x1501C730
    // 0x151E4D94: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_1501C730(rdram, ctx);
        goto after_0;
    // 0x151E4D94: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x151E4D98: jal         0x151E557C
    // 0x151E4D9C: nop

    func_151E557C(rdram, ctx);
        goto after_1;
    // 0x151E4D9C: nop

    after_1:
    // 0x151E4DA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151E4DA4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4DA8: sb          $v1, -0x274($at)
    MEM_B(-0X274, ctx->r1) = ctx->r3;
    // 0x151E4DAC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4DB0: sb          $v1, -0x270($at)
    MEM_B(-0X270, ctx->r1) = ctx->r3;
L_151E4DB4:
    // 0x151E4DB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151E4DB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151E4DBC: jr          $ra
    // 0x151E4DC0: nop

    return;
    return;
    // 0x151E4DC0: nop

;}
RECOMP_FUNC void func_10019D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10019D98: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x10019D9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10019DA0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x10019DA4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x10019DA8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x10019DAC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x10019DB0: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x10019DB4: lw          $t7, 0x60($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X60);
    // 0x10019DB8: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x10019DBC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x10019DC0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x10019DC4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x10019DC8: lb          $t1, 0x15($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X15);
    // 0x10019DCC: addiu       $t2, $t1, -0x40
    ctx->r10 = ADD32(ctx->r9, -0X40);
    // 0x10019DD0: sb          $t2, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r10;
    // 0x10019DD4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x10019DD8: lbu         $t5, 0x37($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X37);
    // 0x10019DDC: lw          $t4, 0x60($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X60);
    // 0x10019DE0: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x10019DE4: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x10019DE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x10019DEC: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x10019DF0: lwc1        $f4, 0x18($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X18);
    // 0x10019DF4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x10019DF8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x10019DFC: lw          $t9, 0x64($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X64);
    // 0x10019E00: beq         $t9, $zero, L_10019EBC
    if (ctx->r25 == 0) {
        // 0x10019E04: sw          $t9, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r25;
            goto L_10019EBC;
    }
    // 0x10019E04: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_10019E08:
    // 0x10019E08: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x10019E0C: lbu         $t2, 0x37($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X37);
    // 0x10019E10: lbu         $t1, 0x35($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X35);
    // 0x10019E14: bne         $t1, $t2, L_10019EAC
    if (ctx->r9 != ctx->r10) {
        // 0x10019E18: nop
    
            goto L_10019EAC;
    }
    // 0x10019E18: nop

    // 0x10019E1C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x10019E20: lbu         $t4, 0x37($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X37);
    // 0x10019E24: lw          $t5, 0x60($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X60);
    // 0x10019E28: sll         $t6, $t4, 4
    ctx->r14 = S32(ctx->r12 << 4);
    // 0x10019E2C: subu        $t6, $t6, $t4
    ctx->r14 = SUB32(ctx->r14, ctx->r12);
    // 0x10019E30: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x10019E34: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x10019E38: lbu         $t7, 0x14($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X14);
    // 0x10019E3C: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x10019E40: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x10019E44: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x10019E48: jal         0x1001CB40
    // 0x10019E4C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    n_alSynSetPan(rdram, ctx);
        goto after_0;
    // 0x10019E4C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x10019E50: lh          $t9, 0x2A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2A);
    // 0x10019E54: beq         $t9, $zero, L_10019EAC
    if (ctx->r25 == 0) {
        // 0x10019E58: nop
    
            goto L_10019EAC;
    }
    // 0x10019E58: nop

    // 0x10019E5C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x10019E60: lb          $t6, 0x29($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X29);
    // 0x10019E64: lw          $t2, 0x24($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X24);
    // 0x10019E68: lbu         $t1, 0x36($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X36);
    // 0x10019E6C: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x10019E70: lbu         $t4, 0x4($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X4);
    // 0x10019E74: subu        $t5, $t1, $t4
    ctx->r13 = SUB32(ctx->r9, ctx->r12);
    // 0x10019E78: jal         0x1001CEA4
    // 0x10019E7C: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    func_1001CEA4(rdram, ctx);
        goto after_1;
    // 0x10019E7C: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    after_1:
    // 0x10019E80: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
    // 0x10019E84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x10019E88: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x10019E8C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x10019E90: mul.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x10019E94: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x10019E98: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x10019E9C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x10019EA0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x10019EA4: jal         0x1001CA90
    // 0x10019EA8: nop

    func_1001CA90(rdram, ctx);
        goto after_2;
    // 0x10019EA8: nop

    after_2:
L_10019EAC:
    // 0x10019EAC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x10019EB0: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x10019EB4: bne         $t7, $zero, L_10019E08
    if (ctx->r15 != 0) {
        // 0x10019EB8: sw          $t7, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r15;
            goto L_10019E08;
    }
    // 0x10019EB8: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_10019EBC:
    // 0x10019EBC: b           L_10019EC4
    // 0x10019EC0: nop

        goto L_10019EC4;
    // 0x10019EC0: nop

L_10019EC4:
    // 0x10019EC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x10019EC8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x10019ECC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x10019ED0: jr          $ra
    // 0x10019ED4: nop

    return;
    return;
    // 0x10019ED4: nop

;}
RECOMP_FUNC void func_15152874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15152874: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x15152878: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1515287C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15152880: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15152884: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15152888: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x1515288C: andi        $s5, $a1, 0xFF
    ctx->r21 = ctx->r5 & 0XFF;
    // 0x15152890: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15152894: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x15152898: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1515289C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x151528A0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x151528A4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x151528A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x151528AC: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x151528B0: jal         0x150ADA20
    // 0x151528B4: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151528B4: nop

    after_0:
    // 0x151528B8: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x151528BC: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151528C0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x151528C4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x151528C8: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x151528CC: addiu       $s6, $sp, 0x58
    ctx->r22 = ADD32(ctx->r29, 0X58);
    // 0x151528D0: sw          $at, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r1;
    // 0x151528D4: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x151528D8: mfhi        $t8
    ctx->r24 = hi;
    // 0x151528DC: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x151528E0: sw          $t2, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r10;
    // 0x151528E4: lw          $at, 0x10($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X10);
    // 0x151528E8: bne         $t7, $zero, L_151528F4
    if (ctx->r15 != 0) {
        // 0x151528EC: nop
    
            goto L_151528F4;
    }
    // 0x151528EC: nop

    // 0x151528F0: break       7
    do_break(353708272);
L_151528F4:
    // 0x151528F4: sw          $at, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r1;
    // 0x151528F8: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x151528FC: andi        $s4, $s1, 0xFF
    ctx->r20 = ctx->r17 & 0XFF;
    // 0x15152900: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
    // 0x15152904: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x15152908: lwc1        $f6, 0x48($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X48);
    // 0x1515290C: addiu       $s7, $sp, 0x64
    ctx->r23 = ADD32(ctx->r29, 0X64);
    // 0x15152910: beq         $s3, $zero, L_15152A8C
    if (ctx->r19 == 0) {
        // 0x15152914: swc1        $f6, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
            goto L_15152A8C;
    }
    // 0x15152914: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
L_15152918:
    // 0x15152918: jal         0x150ADA20
    // 0x1515291C: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1515291C: nop

    after_1:
    // 0x15152920: jal         0x150ADA20
    // 0x15152924: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15152924: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_2:
    // 0x15152928: jal         0x150ADA68
    // 0x1515292C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x1515292C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_3:
    // 0x15152930: lh          $t3, 0x16($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X16);
    // 0x15152934: lh          $t9, 0x1A($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X1A);
    // 0x15152938: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1515293C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x15152940: divu        $zero, $s1, $t4
    lo = S32(U32(ctx->r17) / U32(ctx->r12)); hi = S32(U32(ctx->r17) % U32(ctx->r12));
    // 0x15152944: mfhi        $t5
    ctx->r13 = hi;
    // 0x15152948: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x1515294C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15152950: divu        $zero, $s2, $t1
    lo = S32(U32(ctx->r18) / U32(ctx->r9)); hi = S32(U32(ctx->r18) % U32(ctx->r9));
    // 0x15152954: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15152958: lh          $t6, 0x14($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X14);
    // 0x1515295C: lh          $t2, 0x18($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X18);
    // 0x15152960: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15152964: mfhi        $t0
    ctx->r8 = hi;
    // 0x15152968: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x1515296C: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x15152970: addu        $a1, $t0, $t2
    ctx->r5 = ADD32(ctx->r8, ctx->r10);
    // 0x15152974: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x15152978: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1515297C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x15152980: bne         $t4, $zero, L_1515298C
    if (ctx->r12 != 0) {
        // 0x15152984: nop
    
            goto L_1515298C;
    }
    // 0x15152984: nop

    // 0x15152988: break       7
    do_break(353708424);
L_1515298C:
    // 0x1515298C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x15152990: bne         $t1, $zero, L_1515299C
    if (ctx->r9 != 0) {
        // 0x15152994: nop
    
            goto L_1515299C;
    }
    // 0x15152994: nop

    // 0x15152998: break       7
    do_break(353708440);
L_1515299C:
    // 0x1515299C: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x151529A0: jal         0x15143794
    // 0x151529A4: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    func_15143794(rdram, ctx);
        goto after_4;
    // 0x151529A4: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_4:
    // 0x151529A8: jal         0x150ADA68
    // 0x151529AC: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x151529AC: nop

    after_5:
    // 0x151529B0: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151529B4: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151529B8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151529BC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151529C0: jal         0x150ADA20
    // 0x151529C4: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151529C4: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x151529C8: lh          $t5, 0x34($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X34);
    // 0x151529CC: lh          $t8, 0x32($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X32);
    // 0x151529D0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x151529D4: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x151529D8: mfhi        $t7
    ctx->r15 = hi;
    // 0x151529DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x151529E0: bne         $t6, $zero, L_151529EC
    if (ctx->r14 != 0) {
        // 0x151529E4: nop
    
            goto L_151529EC;
    }
    // 0x151529E4: nop

    // 0x151529E8: break       7
    do_break(353708520);
L_151529EC:
    // 0x151529EC: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
    // 0x151529F0: jal         0x150ADA68
    // 0x151529F4: nop

    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x151529F4: nop

    after_7:
    // 0x151529F8: lwc1        $f16, 0x40($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151529FC: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15152A00: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15152A04: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15152A08: jal         0x150ADA68
    // 0x15152A0C: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x15152A0C: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x15152A10: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x15152A14: lwc1        $f16, 0x3C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15152A18: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15152A1C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15152A20: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x15152A24: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15152A28: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15152A2C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15152A30: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15152A34: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x15152A38: lb          $v0, 0x30($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X30);
    // 0x15152A3C: beq         $fp, $v0, L_15152A60
    if (ctx->r30 == ctx->r2) {
        // 0x15152A40: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_15152A60;
    }
    // 0x15152A40: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x15152A44: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x15152A48: lw          $t9, -0x53A0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X53A0);
    // 0x15152A4C: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x15152A50: jalr        $t9
    // 0x15152A54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x15152A54: nop

    after_9:
    // 0x15152A58: b           L_15152A74
    // 0x15152A5C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
        goto L_15152A74;
    // 0x15152A5C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_15152A60:
    // 0x15152A60: sb          $t0, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r8;
    // 0x15152A64: sb          $t2, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r10;
    // 0x15152A68: sb          $t3, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = ctx->r11;
    // 0x15152A6C: sb          $t4, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r12;
    // 0x15152A70: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_15152A74:
    // 0x15152A74: andi        $a1, $s5, 0xFF
    ctx->r5 = ctx->r21 & 0XFF;
    // 0x15152A78: jal         0x150CCEB0
    // 0x15152A7C: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    func_150CCEB0(rdram, ctx);
        goto after_10;
    // 0x15152A7C: andi        $a2, $s4, 0xFF
    ctx->r6 = ctx->r20 & 0XFF;
    after_10:
    // 0x15152A80: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x15152A84: bne         $s3, $zero, L_15152918
    if (ctx->r19 != 0) {
        // 0x15152A88: nop
    
            goto L_15152918;
    }
    // 0x15152A88: nop

L_15152A8C:
    // 0x15152A8C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15152A90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15152A94: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15152A98: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15152A9C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15152AA0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15152AA4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15152AA8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15152AAC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15152AB0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15152AB4: jr          $ra
    // 0x15152AB8: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    return;
    // 0x15152AB8: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_150A23E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A23E4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150A23E8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x150A23EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150A23F0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150A23F4: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x150A23F8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150A23FC: bnel        $t6, $zero, L_150A24AC
    if (ctx->r14 != 0) {
        // 0x150A2400: sw          $t9, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r25;
            goto L_150A24AC;
    }
    goto skip_0;
    // 0x150A2400: sw          $t9, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r25;
    skip_0:
    // 0x150A2404: lbu         $t7, 0x15($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X15);
    // 0x150A2408: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150A240C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x150A2410: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x150A2414: bnel        $t8, $zero, L_150A2424
    if (ctx->r24 != 0) {
        // 0x150A2418: lbu         $t1, 0x17($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X17);
            goto L_150A2424;
    }
    goto skip_1;
    // 0x150A2418: lbu         $t1, 0x17($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X17);
    skip_1:
    // 0x150A241C: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x150A2420: lbu         $t1, 0x17($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X17);
L_150A2424:
    // 0x150A2424: sra         $t9, $t1, 7
    ctx->r25 = S32(SIGNED(ctx->r9) >> 7);
    // 0x150A2428: beq         $t9, $zero, L_150A2434
    if (ctx->r25 == 0) {
        // 0x150A242C: andi        $t3, $t1, 0x7F
        ctx->r11 = ctx->r9 & 0X7F;
            goto L_150A2434;
    }
    // 0x150A242C: andi        $t3, $t1, 0x7F
    ctx->r11 = ctx->r9 & 0X7F;
    // 0x150A2430: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
L_150A2434:
    // 0x150A2434: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x150A2438: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x150A243C: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x150A2440: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x150A2444: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x150A2448: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x150A244C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x150A2450: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x150A2454: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x150A2458: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x150A245C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150A2460: lw          $t5, 0x18($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X18);
    // 0x150A2464: srl         $a0, $v0, 16
    ctx->r4 = S32(U32(ctx->r2) >> 16);
    // 0x150A2468: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x150A246C: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x150A2470: or          $t6, $t5, $v1
    ctx->r14 = ctx->r13 | ctx->r3;
    // 0x150A2474: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150A2478: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150A247C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x150A2480: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150A2484: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x150A2488: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150A248C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150A2490: jal         0x1000FA64
    // 0x150A2494: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_1000FA64(rdram, ctx);
        goto after_0;
    // 0x150A2494: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x150A2498: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150A249C: sw          $t8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r24;
    // 0x150A24A0: b           L_150A24B0
    // 0x150A24A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_150A24B0;
    // 0x150A24A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150A24A8: sw          $t9, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r25;
L_150A24AC:
    // 0x150A24AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_150A24B0:
    // 0x150A24B0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x150A24B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x150A24B8: jr          $ra
    // 0x150A24BC: nop

    return;
    return;
    // 0x150A24BC: nop

;}
RECOMP_FUNC void func_151349D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151349D0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x151349D4: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x151349D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151349DC: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x151349E0: sw          $s1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r17;
    // 0x151349E4: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x151349E8: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x151349EC: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x151349F0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x151349F4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x151349F8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x151349FC: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x15134A00: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x15134A04: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x15134A08: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x15134A0C: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x15134A10: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x15134A14: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    // 0x15134A18: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x15134A1C: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x15134A20: lbu         $t9, 0x26($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X26);
    // 0x15134A24: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x15134A28: beql        $t0, $zero, L_15134A74
    if (ctx->r8 == 0) {
        // 0x15134A2C: lbu         $v0, 0x26($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X26);
            goto L_15134A74;
    }
    goto skip_0;
    // 0x15134A2C: lbu         $v0, 0x26($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X26);
    skip_0:
    // 0x15134A30: lb          $v0, 0x29($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X29);
    // 0x15134A34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15134A38: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15134A3C: beq         $v0, $at, L_15134A70
    if (ctx->r2 == ctx->r1) {
        // 0x15134A40: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_15134A70;
    }
    // 0x15134A40: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x15134A44: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x15134A48: lw          $t9, -0x64E8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X64E8);
    // 0x15134A4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15134A50: jalr        $t9
    // 0x15134A54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15134A54: nop

    after_0:
    // 0x15134A58: bnel        $v0, $zero, L_15134A74
    if (ctx->r2 != 0) {
        // 0x15134A5C: lbu         $v0, 0x26($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X26);
            goto L_15134A74;
    }
    goto skip_1;
    // 0x15134A5C: lbu         $v0, 0x26($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X26);
    skip_1:
    // 0x15134A60: jal         0x1516972C
    // 0x15134A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x15134A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x15134A68: b           L_15134C70
    // 0x15134A6C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
        goto L_15134C70;
    // 0x15134A6C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_15134A70:
    // 0x15134A70: lbu         $v0, 0x26($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X26);
L_15134A74:
    // 0x15134A74: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15134A78: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15134A7C: andi        $t2, $v0, 0x2
    ctx->r10 = ctx->r2 & 0X2;
    // 0x15134A80: beq         $t2, $zero, L_15134A90
    if (ctx->r10 == 0) {
        // 0x15134A84: andi        $t3, $v0, 0xFFFD
        ctx->r11 = ctx->r2 & 0XFFFD;
            goto L_15134A90;
    }
    // 0x15134A84: andi        $t3, $v0, 0xFFFD
    ctx->r11 = ctx->r2 & 0XFFFD;
    // 0x15134A88: b           L_15134C1C
    // 0x15134A8C: sb          $t3, 0x26($s0)
    MEM_B(0X26, ctx->r16) = ctx->r11;
        goto L_15134C1C;
    // 0x15134A8C: sb          $t3, 0x26($s0)
    MEM_B(0X26, ctx->r16) = ctx->r11;
L_15134A90:
    // 0x15134A90: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15134A94: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x15134A98: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15134A9C: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x15134AA0: lwc1        $f10, 0x2C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15134AA4: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15134AA8: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x15134AAC: sub.s       $f28, $f10, $f4
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f28.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15134AB0: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x15134AB4: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15134AB8: sub.s       $f30, $f6, $f8
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f30.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15134ABC: mul.s       $f6, $f28, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x15134AC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15134AC4: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15134AC8: mul.s       $f8, $f30, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x15134ACC: addiu       $s1, $s1, -0x6504
    ctx->r17 = ADD32(ctx->r17, -0X6504);
    // 0x15134AD0: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15134AD4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15134AD8: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15134ADC: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15134AE0: lwc1        $f10, -0x165C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15134AE4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15134AE8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15134AEC: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15134AF0: add.s       $f2, $f8, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x15134AF4: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x15134AF8: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15134AFC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15134B00: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15134B04: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
    // 0x15134B08: lwc1        $f12, 0x3C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15134B0C: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x15134B10: nop

    // 0x15134B14: bc1fl       L_15134B28
    if (!c1cs) {
        // 0x15134B18: c.lt.s      $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
            goto L_15134B28;
    }
    goto skip_2;
    // 0x15134B18: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    skip_2:
    // 0x15134B1C: swc1        $f18, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f18.u32l;
    // 0x15134B20: lwc1        $f12, 0x3C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15134B24: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
L_15134B28:
    // 0x15134B28: nop

    // 0x15134B2C: bc1fl       L_15134C20
    if (!c1cs) {
        // 0x15134B30: addiu       $t2, $sp, 0x90
        ctx->r10 = ADD32(ctx->r29, 0X90);
            goto L_15134C20;
    }
    goto skip_3;
    // 0x15134B30: addiu       $t2, $sp, 0x90
    ctx->r10 = ADD32(ctx->r29, 0X90);
    skip_3:
    // 0x15134B34: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
L_15134B38:
    // 0x15134B38: lwc1        $f2, 0x1C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15134B3C: jal         0x150ADA68
    // 0x15134B40: add.s       $f22, $f2, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f2.fl + ctx->f2.fl;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x15134B40: add.s       $f22, $f2, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = ctx->f2.fl + ctx->f2.fl;
    after_2:
    // 0x15134B44: lbu         $t4, 0x27($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X27);
    // 0x15134B48: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x15134B4C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x15134B50: addu        $t6, $s1, $t5
    ctx->r14 = ADD32(ctx->r17, ctx->r13);
    // 0x15134B54: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x15134B58: beql        $t7, $zero, L_15134BF8
    if (ctx->r15 == 0) {
        // 0x15134B5C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_15134BF8;
    }
    goto skip_4;
    // 0x15134B5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_4:
    // 0x15134B60: jal         0x150ADA68
    // 0x15134B64: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x15134B64: nop

    after_3:
    // 0x15134B68: jal         0x150ADA68
    // 0x15134B6C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x15134B6C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    after_4:
    // 0x15134B70: jal         0x150ADA68
    // 0x15134B74: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x15134B74: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    after_5:
    // 0x15134B78: mul.s       $f10, $f28, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f28.fl, ctx->f20.fl);
    // 0x15134B7C: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15134B80: lwc1        $f2, 0x1C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15134B84: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x15134B88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15134B8C: swc1        $f30, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f30.u32l;
    // 0x15134B90: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x15134B94: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15134B98: mul.s       $f6, $f24, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f22.fl);
    // 0x15134B9C: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x15134BA0: lbu         $t8, 0x27($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X27);
    // 0x15134BA4: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x15134BA8: add.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x15134BAC: mul.s       $f8, $f30, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f30.fl, ctx->f20.fl);
    // 0x15134BB0: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x15134BB4: addu        $t1, $s1, $t0
    ctx->r9 = ADD32(ctx->r17, ctx->r8);
    // 0x15134BB8: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x15134BBC: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15134BC0: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15134BC4: mul.s       $f10, $f26, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f26.fl, ctx->f22.fl);
    // 0x15134BC8: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x15134BCC: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x15134BD0: mul.s       $f4, $f16, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x15134BD4: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x15134BD8: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x15134BDC: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x15134BE0: add.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x15134BE4: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x15134BE8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x15134BEC: jalr        $t9
    // 0x15134BF0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x15134BF0: nop

    after_6:
    // 0x15134BF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_15134BF8:
    // 0x15134BF8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15134BFC: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15134C00: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x15134C04: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x15134C08: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15134C0C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x15134C10: nop

    // 0x15134C14: bc1t        L_15134B38
    if (c1cs) {
        // 0x15134C18: nop
    
            goto L_15134B38;
    }
    // 0x15134C18: nop

L_15134C1C:
    // 0x15134C1C: addiu       $t2, $sp, 0x90
    ctx->r10 = ADD32(ctx->r29, 0X90);
L_15134C20:
    // 0x15134C20: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x15134C24: lbu         $t5, 0x26($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X26);
    // 0x15134C28: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15134C2C: sw          $at, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r1;
    // 0x15134C30: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x15134C34: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x15134C38: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    // 0x15134C3C: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x15134C40: beq         $t6, $zero, L_15134C6C
    if (ctx->r14 == 0) {
        // 0x15134C44: sw          $at, 0x34($s0)
        MEM_W(0X34, ctx->r16) = ctx->r1;
            goto L_15134C6C;
    }
    // 0x15134C44: sw          $at, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r1;
    // 0x15134C48: lh          $t7, 0x24($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X24);
    // 0x15134C4C: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x15134C50: subu        $t0, $t7, $t8
    ctx->r8 = SUB32(ctx->r15, ctx->r24);
    // 0x15134C54: sh          $t0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r8;
    // 0x15134C58: lh          $t1, 0x24($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X24);
    // 0x15134C5C: bgezl       $t1, L_15134C70
    if (SIGNED(ctx->r9) >= 0) {
        // 0x15134C60: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_15134C70;
    }
    goto skip_5;
    // 0x15134C60: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_5:
    // 0x15134C64: jal         0x1516972C
    // 0x15134C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_7;
    // 0x15134C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_15134C6C:
    // 0x15134C6C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_15134C70:
    // 0x15134C70: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x15134C74: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x15134C78: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x15134C7C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x15134C80: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x15134C84: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x15134C88: lw          $s0, 0x54($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X54);
    // 0x15134C8C: lw          $s1, 0x58($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X58);
    // 0x15134C90: jr          $ra
    // 0x15134C94: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    return;
    // 0x15134C94: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_151A6F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A6F00: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x151A6F04: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A6F08: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x151A6F0C: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x151A6F10: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x151A6F14: sw          $a1, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r5;
    // 0x151A6F18: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x151A6F1C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151A6F20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151A6F24: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x151A6F28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151A6F2C: andi        $s5, $a2, 0xFF
    ctx->r21 = ctx->r6 & 0XFF;
    // 0x151A6F30: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x151A6F34: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x151A6F38: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x151A6F3C: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x151A6F40: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x151A6F44: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x151A6F48: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x151A6F4C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x151A6F50: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x151A6F54: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x151A6F58: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x151A6F5C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x151A6F60: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x151A6F64: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x151A6F68: sw          $a2, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r6;
    // 0x151A6F6C: lh          $s4, 0x0($s0)
    ctx->r20 = MEM_H(ctx->r16, 0X0);
    // 0x151A6F70: addiu       $t7, $zero, 0x21E9
    ctx->r15 = ADD32(0, 0X21E9);
    // 0x151A6F74: swc1        $f2, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f2.u32l;
    // 0x151A6F78: swc1        $f2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f2.u32l;
    // 0x151A6F7C: swc1        $f2, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f2.u32l;
    // 0x151A6F80: sw          $t7, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r15;
    // 0x151A6F84: sb          $zero, 0x140($sp)
    MEM_B(0X140, ctx->r29) = 0;
    // 0x151A6F88: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x151A6F8C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A6F90: lwc1        $f4, -0x7240($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7240);
    // 0x151A6F94: lui         $at, 0xC190
    ctx->r1 = S32(0XC190 << 16);
    // 0x151A6F98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151A6F9C: addiu       $t9, $zero, 0x1B
    ctx->r25 = ADD32(0, 0X1B);
    // 0x151A6FA0: sh          $t9, 0x13E($sp)
    MEM_H(0X13E, ctx->r29) = ctx->r25;
    // 0x151A6FA4: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x151A6FA8: swc1        $f0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f0.u32l;
    // 0x151A6FAC: swc1        $f0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f0.u32l;
    // 0x151A6FB0: swc1        $f0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f0.u32l;
    // 0x151A6FB4: sh          $t8, 0x13C($sp)
    MEM_H(0X13C, ctx->r29) = ctx->r24;
    // 0x151A6FB8: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    // 0x151A6FBC: swc1        $f6, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f6.u32l;
    // 0x151A6FC0: lbu         $t0, 0x54($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X54);
    // 0x151A6FC4: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x151A6FC8: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x151A6FCC: sb          $t0, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r8;
    // 0x151A6FD0: lbu         $t1, 0x55($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X55);
    // 0x151A6FD4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151A6FD8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151A6FDC: sb          $t1, 0xDD($sp)
    MEM_B(0XDD, ctx->r29) = ctx->r9;
    // 0x151A6FE0: lh          $t2, 0x56($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X56);
    // 0x151A6FE4: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x151A6FE8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x151A6FEC: sh          $t2, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r10;
    // 0x151A6FF0: lh          $t3, 0x58($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X58);
    // 0x151A6FF4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151A6FF8: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x151A6FFC: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x151A7000: sll         $t1, $s4, 16
    ctx->r9 = S32(ctx->r20 << 16);
    // 0x151A7004: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
    // 0x151A7008: sb          $t4, 0x148($sp)
    MEM_B(0X148, ctx->r29) = ctx->r12;
    // 0x151A700C: sb          $t5, 0x149($sp)
    MEM_B(0X149, ctx->r29) = ctx->r13;
    // 0x151A7010: sb          $t6, 0x14A($sp)
    MEM_B(0X14A, ctx->r29) = ctx->r14;
    // 0x151A7014: sb          $t7, 0x14B($sp)
    MEM_B(0X14B, ctx->r29) = ctx->r15;
    // 0x151A7018: sb          $zero, 0x14C($sp)
    MEM_B(0X14C, ctx->r29) = 0;
    // 0x151A701C: sb          $zero, 0x14D($sp)
    MEM_B(0X14D, ctx->r29) = 0;
    // 0x151A7020: sb          $t8, 0x14E($sp)
    MEM_B(0X14E, ctx->r29) = ctx->r24;
    // 0x151A7024: sb          $zero, 0x14F($sp)
    MEM_B(0X14F, ctx->r29) = 0;
    // 0x151A7028: sb          $zero, 0x150($sp)
    MEM_B(0X150, ctx->r29) = 0;
    // 0x151A702C: sb          $zero, 0x152($sp)
    MEM_B(0X152, ctx->r29) = 0;
    // 0x151A7030: sw          $zero, 0x154($sp)
    MEM_W(0X154, ctx->r29) = 0;
    // 0x151A7034: sb          $zero, 0x158($sp)
    MEM_B(0X158, ctx->r29) = 0;
    // 0x151A7038: sh          $t9, 0x15A($sp)
    MEM_H(0X15A, ctx->r29) = ctx->r25;
    // 0x151A703C: sh          $t0, 0x15C($sp)
    MEM_H(0X15C, ctx->r29) = ctx->r8;
    // 0x151A7040: sra         $s4, $t1, 16
    ctx->r20 = S32(SIGNED(ctx->r9) >> 16);
    // 0x151A7044: beq         $v0, $zero, L_151A73A4
    if (ctx->r2 == 0) {
        // 0x151A7048: sh          $t3, 0xE0($sp)
        MEM_H(0XE0, ctx->r29) = ctx->r11;
            goto L_151A73A4;
    }
    // 0x151A7048: sh          $t3, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = ctx->r11;
    // 0x151A704C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x151A7050: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x151A7054: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x151A7058: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x151A705C: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x151A7060: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x151A7064: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
L_151A7068:
    // 0x151A7068: jal         0x150ADA20
    // 0x151A706C: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151A706C: nop

    after_0:
    // 0x151A7070: lh          $t3, 0x1A($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X1A);
    // 0x151A7074: lh          $t6, 0x18($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X18);
    // 0x151A7078: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x151A707C: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x151A7080: mfhi        $t5
    ctx->r13 = hi;
    // 0x151A7084: addu        $s1, $t5, $t6
    ctx->r17 = ADD32(ctx->r13, ctx->r14);
    // 0x151A7088: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x151A708C: bne         $t4, $zero, L_151A7098
    if (ctx->r12 != 0) {
        // 0x151A7090: nop
    
            goto L_151A7098;
    }
    // 0x151A7090: nop

    // 0x151A7094: break       7
    do_break(354054292);
L_151A7098:
    // 0x151A7098: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x151A709C: jal         0x150ADA20
    // 0x151A70A0: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151A70A0: nop

    after_1:
    // 0x151A70A4: lh          $t8, 0x1E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X1E);
    // 0x151A70A8: lh          $t1, 0x1C($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X1C);
    // 0x151A70AC: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x151A70B0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x151A70B4: divu        $zero, $v0, $t9
    lo = S32(U32(ctx->r2) / U32(ctx->r25)); hi = S32(U32(ctx->r2) % U32(ctx->r25));
    // 0x151A70B8: mfhi        $t0
    ctx->r8 = hi;
    // 0x151A70BC: addu        $s2, $t0, $t1
    ctx->r18 = ADD32(ctx->r8, ctx->r9);
    // 0x151A70C0: andi        $t2, $s2, 0xFF
    ctx->r10 = ctx->r18 & 0XFF;
    // 0x151A70C4: bne         $t9, $zero, L_151A70D0
    if (ctx->r25 != 0) {
        // 0x151A70C8: nop
    
            goto L_151A70D0;
    }
    // 0x151A70C8: nop

    // 0x151A70CC: break       7
    do_break(354054348);
L_151A70D0:
    // 0x151A70D0: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x151A70D4: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
    // 0x151A70D8: jal         0x151423D8
    // 0x151A70DC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x151A70DC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_2:
    // 0x151A70E0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x151A70E4: jal         0x151423D8
    // 0x151A70E8: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x151A70E8: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_3:
    // 0x151A70EC: addiu       $a0, $s2, -0x40
    ctx->r4 = ADD32(ctx->r18, -0X40);
    // 0x151A70F0: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x151A70F4: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x151A70F8: jal         0x151423D8
    // 0x151A70FC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x151A70FC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_4:
    // 0x151A7100: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x151A7104: jal         0x151423D8
    // 0x151A7108: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x151A7108: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_5:
    // 0x151A710C: jal         0x150ADA68
    // 0x151A7110: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x151A7110: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_6:
    // 0x151A7114: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151A7118: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151A711C: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151A7120: nop

    // 0x151A7124: mul.s       $f12, $f2, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x151A7128: nop

    // 0x151A712C: mul.s       $f16, $f12, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x151A7130: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151A7134: mul.s       $f6, $f2, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x151A7138: swc1        $f18, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f18.u32l;
    // 0x151A713C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151A7140: mul.s       $f16, $f12, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x151A7144: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151A7148: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    // 0x151A714C: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151A7150: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151A7154: beq         $s3, $zero, L_151A717C
    if (ctx->r19 == 0) {
        // 0x151A7158: swc1        $f18, 0x118($sp)
        MEM_W(0X118, ctx->r29) = ctx->f18.u32l;
            goto L_151A717C;
    }
    // 0x151A7158: swc1        $f18, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f18.u32l;
    // 0x151A715C: beq         $s3, $s7, L_151A71CC
    if (ctx->r19 == ctx->r23) {
        // 0x151A7160: nop
    
            goto L_151A71CC;
    }
    // 0x151A7160: nop

    // 0x151A7164: beq         $s3, $fp, L_151A7214
    if (ctx->r19 == ctx->r30) {
        // 0x151A7168: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_151A7214;
    }
    // 0x151A7168: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151A716C: beq         $s3, $at, L_151A7234
    if (ctx->r19 == ctx->r1) {
        // 0x151A7170: nop
    
            goto L_151A7234;
    }
    // 0x151A7170: nop

    // 0x151A7174: b           L_151A7270
    // 0x151A7178: nop

        goto L_151A7270;
    // 0x151A7178: nop

L_151A717C:
    // 0x151A717C: jal         0x150ADA68
    // 0x151A7180: nop

    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x151A7180: nop

    after_7:
    // 0x151A7184: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x151A7188: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x151A718C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151A7190: jal         0x150ADA68
    // 0x151A7194: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x151A7194: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    after_8:
    // 0x151A7198: lwc1        $f10, 0x2C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151A719C: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151A71A0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151A71A4: nop

    // 0x151A71A8: mul.s       $f4, $f20, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x151A71AC: nop

    // 0x151A71B0: mul.s       $f6, $f20, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x151A71B4: add.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151A71B8: swc1        $f4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f4.u32l;
    // 0x151A71BC: swc1        $f2, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f2.u32l;
    // 0x151A71C0: swc1        $f6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f6.u32l;
    // 0x151A71C4: b           L_151A7270
    // 0x151A71C8: nop

        goto L_151A7270;
    // 0x151A71C8: nop

L_151A71CC:
    // 0x151A71CC: jal         0x150ADA68
    // 0x151A71D0: nop

    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x151A71D0: nop

    after_9:
    // 0x151A71D4: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x151A71D8: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x151A71DC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151A71E0: add.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151A71E4: mul.s       $f12, $f2, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x151A71E8: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
    // 0x151A71EC: mul.s       $f18, $f12, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x151A71F0: nop

    // 0x151A71F4: mul.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x151A71F8: nop

    // 0x151A71FC: mul.s       $f8, $f12, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x151A7200: swc1        $f18, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f18.u32l;
    // 0x151A7204: swc1        $f6, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f6.u32l;
    // 0x151A7208: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
    // 0x151A720C: b           L_151A7270
    // 0x151A7210: nop

        goto L_151A7270;
    // 0x151A7210: nop

L_151A7214:
    // 0x151A7214: lw          $at, 0x30($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X30);
    // 0x151A7218: addiu       $t5, $sp, 0x11C
    ctx->r13 = ADD32(ctx->r29, 0X11C);
    // 0x151A721C: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x151A7220: lw          $t8, 0x34($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X34);
    // 0x151A7224: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x151A7228: lw          $at, 0x38($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X38);
    // 0x151A722C: b           L_151A7270
    // 0x151A7230: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
        goto L_151A7270;
    // 0x151A7230: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
L_151A7234:
    // 0x151A7234: jal         0x150ADA68
    // 0x151A7238: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x151A7238: nop

    after_10:
    // 0x151A723C: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x151A7240: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x151A7244: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151A7248: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151A724C: add.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151A7250: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x151A7254: swc1        $f6, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f6.u32l;
    // 0x151A7258: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151A725C: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151A7260: swc1        $f10, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f10.u32l;
    // 0x151A7264: lwc1        $f16, 0x38($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151A7268: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x151A726C: swc1        $f18, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f18.u32l;
L_151A7270:
    // 0x151A7270: jal         0x150ADA68
    // 0x151A7274: nop

    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x151A7274: nop

    after_11:
    // 0x151A7278: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151A727C: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151A7280: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151A7284: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151A7288: mul.s       $f16, $f10, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x151A728C: swc1        $f10, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f10.u32l;
    // 0x151A7290: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x151A7294: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    // 0x151A7298: jal         0x150ADA68
    // 0x151A729C: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x151A729C: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x151A72A0: lwc1        $f18, 0x48($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151A72A4: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151A72A8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151A72AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151A72B0: jal         0x150ADA68
    // 0x151A72B4: swc1        $f8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x151A72B4: swc1        $f8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x151A72B8: lwc1        $f10, 0x50($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X50);
    // 0x151A72BC: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x151A72C0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151A72C4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151A72C8: jal         0x150ADA68
    // 0x151A72CC: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x151A72CC: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x151A72D0: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x151A72D4: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x151A72D8: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x151A72DC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151A72E0: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x151A72E4: addiu       $a0, $sp, 0xE8
    ctx->r4 = ADD32(ctx->r29, 0XE8);
    // 0x151A72E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151A72EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151A72F0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x151A72F4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151A72F8: jal         0x15132A4C
    // 0x151A72FC: swc1        $f16, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f16.u32l;
    func_15132A4C(rdram, ctx);
        goto after_15;
    // 0x151A72FC: swc1        $f16, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f16.u32l;
    after_15:
    // 0x151A7300: beq         $v0, $zero, L_151A7390
    if (ctx->r2 == 0) {
        // 0x151A7304: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_151A7390;
    }
    // 0x151A7304: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151A7308: addiu       $s2, $v0, 0x170
    ctx->r18 = ADD32(ctx->r2, 0X170);
    // 0x151A730C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151A7310: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x151A7314: jal         0x10022EC0
    // 0x151A7318: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x151A7318: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_16:
    // 0x151A731C: lwc1        $f18, 0xF4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x151A7320: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A7324: lwc1        $f6, -0x723C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X723C);
    // 0x151A7328: mul.s       $f4, $f30, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f30.fl, ctx->f18.fl);
    // 0x151A732C: addiu       $t9, $s1, 0x38
    ctx->r25 = ADD32(ctx->r17, 0X38);
    // 0x151A7330: addiu       $t0, $s1, 0x3C
    ctx->r8 = ADD32(ctx->r17, 0X3C);
    // 0x151A7334: addiu       $t1, $s1, 0x40
    ctx->r9 = ADD32(ctx->r17, 0X40);
    // 0x151A7338: addiu       $t2, $zero, 0x12C
    ctx->r10 = ADD32(0, 0X12C);
    // 0x151A733C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151A7340: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
    // 0x151A7344: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
    // 0x151A7348: sw          $t1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r9;
    // 0x151A734C: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x151A7350: sh          $t2, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r10;
    // 0x151A7354: sb          $zero, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = 0;
    // 0x151A7358: sb          $t3, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r11;
    // 0x151A735C: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x151A7360: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x151A7364: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x151A7368: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x151A736C: andi        $a2, $s5, 0xFF
    ctx->r6 = ctx->r21 & 0XFF;
    // 0x151A7370: jal         0x15134908
    // 0x151A7374: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    func_15134908(rdram, ctx);
        goto after_17;
    // 0x151A7374: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_17:
    // 0x151A7378: beq         $v0, $zero, L_151A7390
    if (ctx->r2 == 0) {
        // 0x151A737C: sw          $v0, 0x4($s2)
        MEM_W(0X4, ctx->r18) = ctx->r2;
            goto L_151A7390;
    }
    // 0x151A737C: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x151A7380: addiu       $a0, $v0, 0x40
    ctx->r4 = ADD32(ctx->r2, 0X40);
    // 0x151A7384: addiu       $a1, $sp, 0xD0
    ctx->r5 = ADD32(ctx->r29, 0XD0);
    // 0x151A7388: jal         0x10022EC0
    // 0x151A738C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x151A738C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_18:
L_151A7390:
    // 0x151A7390: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x151A7394: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x151A7398: sll         $t4, $s4, 16
    ctx->r12 = S32(ctx->r20 << 16);
    // 0x151A739C: bne         $v0, $zero, L_151A7068
    if (ctx->r2 != 0) {
        // 0x151A73A0: sra         $s4, $t4, 16
        ctx->r20 = S32(SIGNED(ctx->r12) >> 16);
            goto L_151A7068;
    }
    // 0x151A73A0: sra         $s4, $t4, 16
    ctx->r20 = S32(SIGNED(ctx->r12) >> 16);
L_151A73A4:
    // 0x151A73A4: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x151A73A8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x151A73AC: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x151A73B0: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x151A73B4: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x151A73B8: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x151A73BC: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x151A73C0: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x151A73C4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x151A73C8: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x151A73CC: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x151A73D0: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x151A73D4: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x151A73D8: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x151A73DC: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x151A73E0: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x151A73E4: jr          $ra
    // 0x151A73E8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    return;
    // 0x151A73E8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void func_15073D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15073D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15073D7C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15073D80: jal         0x15083E90
    // 0x15073D84: lbu         $a0, 0x1583($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1583);
    func_15083E90(rdram, ctx);
        goto after_0;
    // 0x15073D84: lbu         $a0, 0x1583($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1583);
    after_0:
    // 0x15073D88: beql        $v0, $zero, L_15073D98
    if (ctx->r2 == 0) {
        // 0x15073D8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15073D98;
    }
    goto skip_0;
    // 0x15073D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15073D90: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x15073D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15073D98:
    // 0x15073D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15073D9C: jr          $ra
    // 0x15073DA0: nop

    return;
    return;
    // 0x15073DA0: nop

;}
RECOMP_FUNC void func_150FAAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FAAEC: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x150FAAF0: sw          $s4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r20;
    // 0x150FAAF4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x150FAAF8: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150FAAFC: sw          $s5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r21;
    // 0x150FAB00: sw          $s3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r19;
    // 0x150FAB04: sw          $s2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r18;
    // 0x150FAB08: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x150FAB0C: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x150FAB10: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x150FAB14: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x150FAB18: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x150FAB1C: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x150FAB20: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x150FAB24: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x150FAB28: jal         0x150ADA68
    // 0x150FAB2C: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150FAB2C: nop

    after_0:
    // 0x150FAB30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150FAB34: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150FAB38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FAB3C: lwc1        $f4, 0x1DB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1DB8);
    // 0x150FAB40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FAB44: lwc1        $f6, 0x1DBC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1DBC);
    // 0x150FAB48: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150FAB4C: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150FAB50: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150FAB54: addiu       $s1, $s4, 0x28
    ctx->r17 = ADD32(ctx->r20, 0X28);
    // 0x150FAB58: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150FAB5C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150FAB60: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x150FAB64: addiu       $s3, $sp, 0x94
    ctx->r19 = ADD32(ctx->r29, 0X94);
    // 0x150FAB68: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150FAB6C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150FAB70: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x150FAB74: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x150FAB78: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150FAB7C: c.lt.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl < ctx->f8.fl;
    // 0x150FAB80: nop

    // 0x150FAB84: bc1fl       L_150FACAC
    if (!c1cs) {
        // 0x150FAB88: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150FACAC;
    }
    goto skip_0;
    // 0x150FAB88: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_0:
    // 0x150FAB8C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150FAB90: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150FAB94: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150FAB98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150FAB9C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150FABA0: addiu       $s2, $sp, 0xA0
    ctx->r18 = ADD32(ctx->r29, 0XA0);
    // 0x150FABA4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_150FABA8:
    // 0x150FABA8: jal         0x1514470C
    // 0x150FABAC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_1514470C(rdram, ctx);
        goto after_1;
    // 0x150FABAC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x150FABB0: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x150FABB4: jal         0x1514470C
    // 0x150FABB8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_1514470C(rdram, ctx);
        goto after_2;
    // 0x150FABB8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x150FABBC: jal         0x150ADA20
    // 0x150FABC0: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150FABC0: nop

    after_3:
    // 0x150FABC4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150FABC8: lbu         $t6, -0x74D4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X74D4);
    // 0x150FABCC: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x150FABD0: mfhi        $s0
    ctx->r16 = hi;
    // 0x150FABD4: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x150FABD8: bne         $t6, $zero, L_150FABE4
    if (ctx->r14 != 0) {
        // 0x150FABDC: nop
    
            goto L_150FABE4;
    }
    // 0x150FABDC: nop

    // 0x150FABE0: break       7
    do_break(353348576);
L_150FABE4:
    // 0x150FABE4: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x150FABE8: jal         0x150ADA68
    // 0x150FABEC: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150FABEC: nop

    after_4:
    // 0x150FABF0: mul.s       $f10, $f0, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150FABF4: jal         0x150ADA68
    // 0x150FABF8: add.s       $f20, $f10, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f30.fl;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150FABF8: add.s       $f20, $f10, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f30.fl;
    after_5:
    // 0x150FABFC: jal         0x150ADA20
    // 0x150FAC00: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150FAC00: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_6:
    // 0x150FAC04: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x150FAC08: div.s       $f16, $f24, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = DIV_S(ctx->f24.fl, ctx->f20.fl);
    // 0x150FAC0C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x150FAC10: lw          $t8, -0x74D0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X74D0);
    // 0x150FAC14: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x150FAC18: mul.s       $f18, $f22, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x150FAC1C: lw          $t1, -0x74CC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X74CC);
    // 0x150FAC20: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x150FAC24: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x150FAC28: lbu         $a2, 0x1($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0X1);
    // 0x150FAC2C: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x150FAC30: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x150FAC34: mfhi        $t5
    ctx->r13 = hi;
    // 0x150FAC38: addiu       $t6, $t5, 0x2EE
    ctx->r14 = ADD32(ctx->r13, 0X2EE);
    // 0x150FAC3C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150FAC40: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x150FAC44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150FAC48: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x150FAC4C: add.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x150FAC50: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x150FAC54: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x150FAC58: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x150FAC5C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150FAC60: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150FAC64: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x150FAC68: lbu         $t7, 0xC($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0XC);
    // 0x150FAC6C: bne         $s5, $zero, L_150FAC78
    if (ctx->r21 != 0) {
        // 0x150FAC70: nop
    
            goto L_150FAC78;
    }
    // 0x150FAC70: nop

    // 0x150FAC74: break       7
    do_break(353348724);
L_150FAC78:
    // 0x150FAC78: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x150FAC7C: lbu         $t8, 0x1($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X1);
    // 0x150FAC80: jal         0x150F4570
    // 0x150FAC84: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    func_150F4570(rdram, ctx);
        goto after_7;
    // 0x150FAC84: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_7:
    // 0x150FAC88: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150FAC8C: sub.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f24.fl;
    // 0x150FAC90: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    // 0x150FAC94: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150FAC98: c.lt.s      $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f24.fl < ctx->f18.fl;
    // 0x150FAC9C: nop

    // 0x150FACA0: bc1tl       L_150FABA8
    if (c1cs) {
        // 0x150FACA4: lw          $a0, 0x0($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X0);
            goto L_150FABA8;
    }
    goto skip_1;
    // 0x150FACA4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    skip_1:
    // 0x150FACA8: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_150FACAC:
    // 0x150FACAC: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x150FACB0: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x150FACB4: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x150FACB8: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x150FACBC: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x150FACC0: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x150FACC4: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x150FACC8: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x150FACCC: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x150FACD0: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x150FACD4: lw          $s4, 0x6C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X6C);
    // 0x150FACD8: lw          $s5, 0x70($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X70);
    // 0x150FACDC: jr          $ra
    // 0x150FACE0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    return;
    // 0x150FACE0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_151B4CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B4CD0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151B4CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B4CD8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x151B4CDC: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x151B4CE0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151B4CE4: bne         $a3, $zero, L_151B4CF4
    if (ctx->r7 != 0) {
        // 0x151B4CE8: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_151B4CF4;
    }
    // 0x151B4CE8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x151B4CEC: b           L_151B4E3C
    // 0x151B4CF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151B4E3C;
    // 0x151B4CF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151B4CF4:
    // 0x151B4CF4: jal         0x15134070
    // 0x151B4CF8: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    func_15134070(rdram, ctx);
        goto after_0;
    // 0x151B4CF8: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    after_0:
    // 0x151B4CFC: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x151B4D00: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x151B4D04: bne         $v0, $at, L_151B4D14
    if (ctx->r2 != ctx->r1) {
        // 0x151B4D08: sw          $v0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r2;
            goto L_151B4D14;
    }
    // 0x151B4D08: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151B4D0C: b           L_151B4E3C
    // 0x151B4D10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151B4E3C;
    // 0x151B4D10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151B4D14:
    // 0x151B4D14: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x151B4D18: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x151B4D1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x151B4D20: lbu         $t7, 0x3FE6($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3FE6);
    // 0x151B4D24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151B4D28: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x151B4D2C: bne         $t7, $at, L_151B4D3C
    if (ctx->r15 != ctx->r1) {
        // 0x151B4D30: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_151B4D3C;
    }
    // 0x151B4D30: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x151B4D34: b           L_151B4E3C
    // 0x151B4D38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151B4E3C;
    // 0x151B4D38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151B4D3C:
    // 0x151B4D3C: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x151B4D40: jal         0x1516962C
    // 0x151B4D44: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    func_1516962C(rdram, ctx);
        goto after_1;
    // 0x151B4D44: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    after_1:
    // 0x151B4D48: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x151B4D4C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151B4D50: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151B4D54: lui         $at, 0xC1D8
    ctx->r1 = S32(0XC1D8 << 16);
    // 0x151B4D58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151B4D5C: lbu         $t8, 0x3B($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X3B);
    // 0x151B4D60: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x151B4D64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151B4D68: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x151B4D6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151B4D70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B4D74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151B4D78: lwc1        $f16, -0x5C30($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5C30);
    // 0x151B4D7C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x151B4D80: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x151B4D84: sb          $t9, 0x34($sp)
    MEM_B(0X34, ctx->r29) = ctx->r25;
    // 0x151B4D88: sb          $t0, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r8;
    // 0x151B4D8C: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x151B4D90: sb          $t8, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r24;
    // 0x151B4D94: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x151B4D98: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x151B4D9C: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x151B4DA0: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x151B4DA4: jal         0x150ADA20
    // 0x151B4DA8: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151B4DA8: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x151B4DAC: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x151B4DB0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151B4DB4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x151B4DB8: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x151B4DBC: mfhi        $t1
    ctx->r9 = hi;
    // 0x151B4DC0: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x151B4DC4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x151B4DC8: lbu         $t8, 0x3FE6($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3FE6);
    // 0x151B4DCC: addiu       $t2, $t1, 0x28
    ctx->r10 = ADD32(ctx->r9, 0X28);
    // 0x151B4DD0: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x151B4DD4: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151B4DD8: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x151B4DDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151B4DE0: sh          $t2, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r10;
    // 0x151B4DE4: sb          $t3, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r11;
    // 0x151B4DE8: sb          $t4, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r12;
    // 0x151B4DEC: bne         $t8, $at, L_151B4E00
    if (ctx->r24 != ctx->r1) {
        // 0x151B4DF0: sb          $t5, 0x51($sp)
        MEM_B(0X51, ctx->r29) = ctx->r13;
            goto L_151B4E00;
    }
    // 0x151B4DF0: sb          $t5, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r13;
    // 0x151B4DF4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151B4DF8: b           L_151B4E04
    // 0x151B4DFC: sb          $t9, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r25;
        goto L_151B4E04;
    // 0x151B4DFC: sb          $t9, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r25;
L_151B4E00:
    // 0x151B4E00: sb          $zero, 0x20($sp)
    MEM_B(0X20, ctx->r29) = 0;
L_151B4E04:
    // 0x151B4E04: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x151B4E08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151B4E0C: lbu         $a2, 0x5F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X5F);
    // 0x151B4E10: jal         0x1513418C
    // 0x151B4E14: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    func_1513418C(rdram, ctx);
        goto after_3;
    // 0x151B4E14: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    after_3:
    // 0x151B4E18: beq         $v0, $zero, L_151B4E38
    if (ctx->r2 == 0) {
        // 0x151B4E1C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151B4E38;
    }
    // 0x151B4E1C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151B4E20: addiu       $a0, $v0, 0x58
    ctx->r4 = ADD32(ctx->r2, 0X58);
    // 0x151B4E24: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x151B4E28: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151B4E2C: jal         0x10022EC0
    // 0x151B4E30: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x151B4E30: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_4:
    // 0x151B4E34: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
L_151B4E38:
    // 0x151B4E38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151B4E3C:
    // 0x151B4E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B4E40: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151B4E44: jr          $ra
    // 0x151B4E48: nop

    return;
    return;
    // 0x151B4E48: nop

;}
RECOMP_FUNC void func_15072420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072420: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15072424: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15072428: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507242C: lw          $v0, 0x1580($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1580);
    // 0x15072430: sra         $t6, $v0, 8
    ctx->r14 = S32(SIGNED(ctx->r2) >> 8);
    // 0x15072434: sra         $t8, $v0, 15
    ctx->r24 = S32(SIGNED(ctx->r2) >> 15);
    // 0x15072438: sra         $t0, $v0, 16
    ctx->r8 = S32(SIGNED(ctx->r2) >> 16);
    // 0x1507243C: andi        $t7, $t6, 0x7F
    ctx->r15 = ctx->r14 & 0X7F;
    // 0x15072440: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x15072444: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x15072448: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x1507244C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x15072450: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x15072454: jal         0x15083E0C
    // 0x15072458: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_15083E0C(rdram, ctx);
        goto after_0;
    // 0x15072458: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_0:
    // 0x1507245C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15072460: beq         $v0, $at, L_1507265C
    if (ctx->r2 == ctx->r1) {
        // 0x15072464: lui         $t2, 0x800D
        ctx->r10 = S32(0X800D << 16);
            goto L_1507265C;
    }
    // 0x15072464: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x15072468: lw          $t2, 0x210C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X210C);
    // 0x1507246C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15072470: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x15072474: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x15072478: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x1507247C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x15072480: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x15072484: bnel        $t5, $zero, L_150724B4
    if (ctx->r13 != 0) {
        // 0x15072488: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_150724B4;
    }
    goto skip_0;
    // 0x15072488: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x1507248C: jal         0x1505EEF4
    // 0x15072490: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_1505EEF4(rdram, ctx);
        goto after_1;
    // 0x15072490: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x15072494: beq         $v0, $zero, L_150724B0
    if (ctx->r2 == 0) {
        // 0x15072498: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_150724B0;
    }
    // 0x15072498: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1507249C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150724A0: jal         0x15060F28
    // 0x150724A4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_15060F28(rdram, ctx);
        goto after_2;
    // 0x150724A4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_2:
    // 0x150724A8: jal         0x1505F188
    // 0x150724AC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_1505F188(rdram, ctx);
        goto after_3;
    // 0x150724AC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_3:
L_150724B0:
    // 0x150724B0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
L_150724B4:
    // 0x150724B4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150724B8: addiu       $v1, $v1, 0x20FC
    ctx->r3 = ADD32(ctx->r3, 0X20FC);
    // 0x150724BC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x150724C0: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x150724C4: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x150724C8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x150724CC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x150724D0: sb          $zero, 0x2($t7)
    MEM_B(0X2, ctx->r15) = 0;
    // 0x150724D4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x150724D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150724DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150724E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150724E4: jal         0x15082A44
    // 0x150724E8: addu        $a0, $v0, $t8
    ctx->r4 = ADD32(ctx->r2, ctx->r24);
    func_15082A44(rdram, ctx);
        goto after_4;
    // 0x150724E8: addu        $a0, $v0, $t8
    ctx->r4 = ADD32(ctx->r2, ctx->r24);
    after_4:
    // 0x150724EC: beq         $v0, $zero, L_1507265C
    if (ctx->r2 == 0) {
        // 0x150724F0: lui         $a2, 0x800D
        ctx->r6 = S32(0X800D << 16);
            goto L_1507265C;
    }
    // 0x150724F0: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x150724F4: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x150724F8: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x150724FC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15072500: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x15072504: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15072508: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x1507250C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15072510: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x15072514: addiu       $a2, $a2, -0x3D30
    ctx->r6 = ADD32(ctx->r6, -0X3D30);
    // 0x15072518: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1507251C: addu        $v1, $a2, $t9
    ctx->r3 = ADD32(ctx->r6, ctx->r25);
    // 0x15072520: addiu       $v1, $v1, -0x32C
    ctx->r3 = ADD32(ctx->r3, -0X32C);
    // 0x15072524: beq         $v1, $zero, L_1507265C
    if (ctx->r3 == 0) {
        // 0x15072528: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_1507265C;
    }
    // 0x15072528: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507252C: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x15072530: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x15072534: addiu       $a3, $zero, 0x32C
    ctx->r7 = ADD32(0, 0X32C);
    // 0x15072538: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x1507253C: subu        $t1, $t0, $a2
    ctx->r9 = SUB32(ctx->r8, ctx->r6);
    // 0x15072540: div         $zero, $t1, $a3
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r7)));
    // 0x15072544: mflo        $t2
    ctx->r10 = lo;
    // 0x15072548: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x1507254C: sb          $t3, 0x65($v1)
    MEM_B(0X65, ctx->r3) = ctx->r11;
    // 0x15072550: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x15072554: bne         $a3, $zero, L_15072560
    if (ctx->r7 != 0) {
        // 0x15072558: nop
    
            goto L_15072560;
    }
    // 0x15072558: nop

    // 0x1507255C: break       7
    do_break(352789852);
L_15072560:
    // 0x15072560: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15072564: bne         $a3, $at, L_15072578
    if (ctx->r7 != ctx->r1) {
        // 0x15072568: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15072578;
    }
    // 0x15072568: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1507256C: bne         $t1, $at, L_15072578
    if (ctx->r9 != ctx->r1) {
        // 0x15072570: nop
    
            goto L_15072578;
    }
    // 0x15072570: nop

    // 0x15072574: break       6
    do_break(352789876);
L_15072578:
    // 0x15072578: sw          $t4, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r12;
    // 0x1507257C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x15072580: beql        $t5, $zero, L_15072594
    if (ctx->r13 == 0) {
        // 0x15072584: sb          $t6, 0x101($v1)
        MEM_B(0X101, ctx->r3) = ctx->r14;
            goto L_15072594;
    }
    goto skip_1;
    // 0x15072584: sb          $t6, 0x101($v1)
    MEM_B(0X101, ctx->r3) = ctx->r14;
    skip_1:
    // 0x15072588: b           L_15072594
    // 0x1507258C: sb          $zero, 0x101($v1)
    MEM_B(0X101, ctx->r3) = 0;
        goto L_15072594;
    // 0x1507258C: sb          $zero, 0x101($v1)
    MEM_B(0X101, ctx->r3) = 0;
    // 0x15072590: sb          $t6, 0x101($v1)
    MEM_B(0X101, ctx->r3) = ctx->r14;
L_15072594:
    // 0x15072594: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x15072598: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1507259C: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150725A0: andi        $t8, $t7, 0x7F
    ctx->r24 = ctx->r15 & 0X7F;
    // 0x150725A4: sb          $t8, 0x232($v1)
    MEM_B(0X232, ctx->r3) = ctx->r24;
    // 0x150725A8: lbu         $t9, 0x3E78($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3E78);
    // 0x150725AC: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150725B0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x150725B4: sb          $t0, 0x124($v1)
    MEM_B(0X124, ctx->r3) = ctx->r8;
    // 0x150725B8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x150725BC: lwc1        $f4, 0x14($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X14);
    // 0x150725C0: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x150725C4: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x150725C8: lwc1        $f6, 0x18($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X18);
    // 0x150725CC: swc1        $f6, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f6.u32l;
    // 0x150725D0: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x150725D4: lwc1        $f8, 0x1C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x150725D8: swc1        $f8, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f8.u32l;
    // 0x150725DC: lbu         $t4, -0x19EA($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X19EA);
    // 0x150725E0: beq         $t4, $zero, L_15072630
    if (ctx->r12 == 0) {
        // 0x150725E4: nop
    
            goto L_15072630;
    }
    // 0x150725E4: nop

    // 0x150725E8: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x150725EC: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x150725F0: subu        $t6, $v1, $a2
    ctx->r14 = SUB32(ctx->r3, ctx->r6);
    // 0x150725F4: lbu         $t5, 0x4($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X4);
    // 0x150725F8: bne         $t5, $at, L_15072630
    if (ctx->r13 != ctx->r1) {
        // 0x150725FC: nop
    
            goto L_15072630;
    }
    // 0x150725FC: nop

    // 0x15072600: div         $zero, $t6, $a3
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r7)));
    // 0x15072604: mflo        $t7
    ctx->r15 = lo;
    // 0x15072608: sb          $t7, 0x222($a1)
    MEM_B(0X222, ctx->r5) = ctx->r15;
    // 0x1507260C: bne         $a3, $zero, L_15072618
    if (ctx->r7 != 0) {
        // 0x15072610: nop
    
            goto L_15072618;
    }
    // 0x15072610: nop

    // 0x15072614: break       7
    do_break(352790036);
L_15072618:
    // 0x15072618: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1507261C: bne         $a3, $at, L_15072630
    if (ctx->r7 != ctx->r1) {
        // 0x15072620: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15072630;
    }
    // 0x15072620: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15072624: bne         $t6, $at, L_15072630
    if (ctx->r14 != ctx->r1) {
        // 0x15072628: nop
    
            goto L_15072630;
    }
    // 0x15072628: nop

    // 0x1507262C: break       6
    do_break(352790060);
L_15072630:
    // 0x15072630: lw          $t8, -0x1610($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1610);
    // 0x15072634: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x15072638: bnel        $t8, $at, L_15072660
    if (ctx->r24 != ctx->r1) {
        // 0x1507263C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15072660;
    }
    goto skip_2;
    // 0x1507263C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x15072640: lbu         $t9, 0x4($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X4);
    // 0x15072644: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x15072648: bnel        $t9, $at, L_15072660
    if (ctx->r25 != ctx->r1) {
        // 0x1507264C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15072660;
    }
    goto skip_3;
    // 0x1507264C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x15072650: lw          $t0, 0x94($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X94);
    // 0x15072654: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x15072658: sw          $t1, 0x94($v1)
    MEM_W(0X94, ctx->r3) = ctx->r9;
L_1507265C:
    // 0x1507265C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15072660:
    // 0x15072660: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15072664: jr          $ra
    // 0x15072668: nop

    return;
    return;
    // 0x15072668: nop

;}
RECOMP_FUNC void func_1500EE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500EE18: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1500EE1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1500EE20: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1500EE24: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1500EE28: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1500EE2C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x1500EE30: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x1500EE34: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1500EE38: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x1500EE3C: lbu         $t7, 0x3B($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3B);
    // 0x1500EE40: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1500EE44: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x1500EE48: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1500EE4C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1500EE50: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1500EE54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500EE58: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1500EE5C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x1500EE60: addiu       $a2, $zero, 0x45
    ctx->r6 = ADD32(0, 0X45);
    // 0x1500EE64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1500EE68: jal         0x15149130
    // 0x1500EE6C: sb          $t7, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r15;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x1500EE6C: sb          $t7, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r15;
    after_0:
    // 0x1500EE70: beq         $v0, $zero, L_1500EE84
    if (ctx->r2 == 0) {
        // 0x1500EE74: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_1500EE84;
    }
    // 0x1500EE74: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1500EE78: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x1500EE7C: jal         0x10022EC0
    // 0x1500EE80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1500EE80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_1500EE84:
    // 0x1500EE84: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1500EE88: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1500EE8C: jr          $ra
    // 0x1500EE90: nop

    return;
    return;
    // 0x1500EE90: nop

;}
RECOMP_FUNC void func_151CB970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CB970: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151CB974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151CB978: jal         0x151CC1D4
    // 0x151CB97C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_151CC1D4(rdram, ctx);
        goto after_0;
    // 0x151CB97C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x151CB980: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x151CB984: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151CB988: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151CB98C: addiu       $v1, $a0, 0x70
    ctx->r3 = ADD32(ctx->r4, 0X70);
    // 0x151CB990: lwc1        $f4, 0x18($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X18);
    // 0x151CB994: lwc1        $f8, 0x20($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X20);
    // 0x151CB998: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x151CB99C: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x151CB9A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151CB9A4: lbu         $t6, 0xC($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XC);
    // 0x151CB9A8: lui         $at, 0x42B6
    ctx->r1 = S32(0X42B6 << 16);
    // 0x151CB9AC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151CB9B0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151CB9B4: sub.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x151CB9B8: mul.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151CB9BC: beql        $t7, $zero, L_151CBA60
    if (ctx->r15 == 0) {
        // 0x151CB9C0: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_151CBA60;
    }
    goto skip_0;
    // 0x151CB9C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_0:
    // 0x151CB9C4: lwc1        $f12, 0x10($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X10);
    // 0x151CB9C8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x151CB9CC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x151CB9D0: jal         0x15047D60
    // 0x151CB9D4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x151CB9D4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x151CB9D8: lui         $at, 0x42B6
    ctx->r1 = S32(0X42B6 << 16);
    // 0x151CB9DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151CB9E0: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x151CB9E4: lui         $at, 0x42E0
    ctx->r1 = S32(0X42E0 << 16);
    // 0x151CB9E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151CB9EC: add.s       $f12, $f6, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x151CB9F0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x151CB9F4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x151CB9F8: add.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x151CB9FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CBA00: sub.s       $f10, $f16, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x151CBA04: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151CBA08: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x151CBA0C: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x151CBA10: lwc1        $f6, -0x5154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5154);
    // 0x151CBA14: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151CBA18: lwc1        $f8, -0x165C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151CBA1C: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x151CBA20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CBA24: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151CBA28: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151CBA2C: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
    // 0x151CBA30: lwc1        $f6, -0x5150($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5150);
    // 0x151CBA34: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x151CBA38: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x151CBA3C: nop

    // 0x151CBA40: bc1fl       L_151CBA70
    if (!c1cs) {
        // 0x151CBA44: lbu         $t0, 0xD($v1)
        ctx->r8 = MEM_BU(ctx->r3, 0XD);
            goto L_151CBA70;
    }
    goto skip_1;
    // 0x151CBA44: lbu         $t0, 0xD($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0XD);
    skip_1:
    // 0x151CBA48: swc1        $f12, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f12.u32l;
    // 0x151CBA4C: lbu         $t8, 0xC($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XC);
    // 0x151CBA50: andi        $t9, $t8, 0xFFFE
    ctx->r25 = ctx->r24 & 0XFFFE;
    // 0x151CBA54: b           L_151CBA6C
    // 0x151CBA58: sb          $t9, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r25;
        goto L_151CBA6C;
    // 0x151CBA58: sb          $t9, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r25;
    // 0x151CBA5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_151CBA60:
    // 0x151CBA60: nop

    // 0x151CBA64: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x151CBA68: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
L_151CBA6C:
    // 0x151CBA6C: lbu         $t0, 0xD($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0XD);
L_151CBA70:
    // 0x151CBA70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151CBA74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151CBA78: bne         $t0, $at, L_151CBA94
    if (ctx->r8 != ctx->r1) {
        // 0x151CBA7C: addiu       $t4, $zero, 0xFF
        ctx->r12 = ADD32(0, 0XFF);
            goto L_151CBA94;
    }
    // 0x151CBA7C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151CBA80: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x151CBA84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151CBA88: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151CBA8C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151CBA90: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
L_151CBA94:
    // 0x151CBA94: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x151CBA98: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x151CBA9C: lwc1        $f6, 0x14($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X14);
    // 0x151CBAA0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151CBAA4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x151CBAA8: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x151CBAAC: nop

    // 0x151CBAB0: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x151CBAB4: beql        $v0, $zero, L_151CBB04
    if (ctx->r2 == 0) {
        // 0x151CBAB8: mfc1        $v0, $f8
        ctx->r2 = (int32_t)ctx->f8.u32l;
            goto L_151CBB04;
    }
    goto skip_2;
    // 0x151CBAB8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x151CBABC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151CBAC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151CBAC4: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151CBAC8: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x151CBACC: nop

    // 0x151CBAD0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x151CBAD4: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x151CBAD8: nop

    // 0x151CBADC: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x151CBAE0: bne         $v0, $zero, L_151CBAF8
    if (ctx->r2 != 0) {
        // 0x151CBAE4: nop
    
            goto L_151CBAF8;
    }
    // 0x151CBAE4: nop

    // 0x151CBAE8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x151CBAEC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151CBAF0: b           L_151CBB10
    // 0x151CBAF4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_151CBB10;
    // 0x151CBAF4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_151CBAF8:
    // 0x151CBAF8: b           L_151CBB10
    // 0x151CBAFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_151CBB10;
    // 0x151CBAFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x151CBB00: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
L_151CBB04:
    // 0x151CBB04: nop

    // 0x151CBB08: bltz        $v0, L_151CBAF8
    if (SIGNED(ctx->r2) < 0) {
        // 0x151CBB0C: nop
    
            goto L_151CBAF8;
    }
    // 0x151CBB0C: nop

L_151CBB10:
    // 0x151CBB10: lbu         $t3, 0x20($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X20);
    // 0x151CBB14: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x151CBB18: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x151CBB1C: addiu       $at, $zero, 0x7C
    ctx->r1 = ADD32(0, 0X7C);
    // 0x151CBB20: bne         $t3, $at, L_151CBB34
    if (ctx->r11 != ctx->r1) {
        // 0x151CBB24: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_151CBB34;
    }
    // 0x151CBB24: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x151CBB28: subu        $t5, $t4, $t2
    ctx->r13 = SUB32(ctx->r12, ctx->r10);
    // 0x151CBB2C: b           L_151CBB38
    // 0x151CBB30: sb          $t5, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r13;
        goto L_151CBB38;
    // 0x151CBB30: sb          $t5, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r13;
L_151CBB34:
    // 0x151CBB34: sb          $v0, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r2;
L_151CBB38:
    // 0x151CBB38: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x151CBB3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151CBB40: lwc1        $f0, 0x14($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X14);
    // 0x151CBB44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CBB48: lwc1        $f18, -0x514C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X514C);
    // 0x151CBB4C: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x151CBB50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151CBB54: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151CBB58: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x151CBB5C: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
    // 0x151CBB60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151CBB64: jr          $ra
    // 0x151CBB68: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x151CBB68: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_1501D2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501D2C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1501D2C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1501D2CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1501D2D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1501D2D4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501D2D8: lbu         $t6, 0x3670($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3670);
    // 0x1501D2DC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x1501D2E0: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x1501D2E4: beq         $t6, $zero, L_1501D2F4
    if (ctx->r14 == 0) {
        // 0x1501D2E8: sra         $a2, $a3, 31
        ctx->r6 = S32(SIGNED(ctx->r7) >> 31);
            goto L_1501D2F4;
    }
    // 0x1501D2E8: sra         $a2, $a3, 31
    ctx->r6 = S32(SIGNED(ctx->r7) >> 31);
    // 0x1501D2EC: b           L_1501D338
    // 0x1501D2F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1501D338;
    // 0x1501D2F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1501D2F4:
    // 0x1501D2F4: jal         0x100268A4
    // 0x1501D2F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    __ll_lshift_recomp(rdram, ctx);
        goto after_0;
    // 0x1501D2F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x1501D2FC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x1501D300: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1501D304: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1501D308: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x1501D30C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1501D310: lw          $t0, 0x3A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3A60);
    // 0x1501D314: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x1501D318: lw          $t1, 0x3A64($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3A64);
    // 0x1501D31C: and         $t2, $v0, $t0
    ctx->r10 = ctx->r2 & ctx->r8;
    // 0x1501D320: bne         $t2, $zero, L_1501D330
    if (ctx->r10 != 0) {
        // 0x1501D324: and         $t3, $v1, $t1
        ctx->r11 = ctx->r3 & ctx->r9;
            goto L_1501D330;
    }
    // 0x1501D324: and         $t3, $v1, $t1
    ctx->r11 = ctx->r3 & ctx->r9;
    // 0x1501D328: beq         $t3, $zero, L_1501D338
    if (ctx->r11 == 0) {
        // 0x1501D32C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1501D338;
    }
    // 0x1501D32C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1501D330:
    // 0x1501D330: b           L_1501D338
    // 0x1501D334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1501D338;
    // 0x1501D334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1501D338:
    // 0x1501D338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1501D33C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1501D340: jr          $ra
    // 0x1501D344: nop

    return;
    return;
    // 0x1501D344: nop

;}
RECOMP_FUNC void func_1518BA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518BA90: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1518BA94: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1518BA98: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x1518BA9C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1518BAA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518BAA4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1518BAA8: bne         $a3, $zero, L_1518BAB8
    if (ctx->r7 != 0) {
        // 0x1518BAAC: lui         $v0, 0x800E
        ctx->r2 = S32(0X800E << 16);
            goto L_1518BAB8;
    }
    // 0x1518BAAC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1518BAB0: b           L_1518BBE4
    // 0x1518BAB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518BBE4;
    // 0x1518BAB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518BAB8:
    // 0x1518BAB8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1518BABC: addiu       $a0, $a0, -0x2E70
    ctx->r4 = ADD32(ctx->r4, -0X2E70);
    // 0x1518BAC0: addiu       $v0, $v0, -0x31B0
    ctx->r2 = ADD32(ctx->r2, -0X31B0);
    // 0x1518BAC4: lw          $v1, 0x7C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X7C);
L_1518BAC8:
    // 0x1518BAC8: addiu       $v0, $v0, 0x1A0
    ctx->r2 = ADD32(ctx->r2, 0X1A0);
    // 0x1518BACC: beq         $v1, $zero, L_1518BB04
    if (ctx->r3 == 0) {
        // 0x1518BAD0: nop
    
            goto L_1518BB04;
    }
    // 0x1518BAD0: nop

    // 0x1518BAD4: lw          $t7, 0x24($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X24);
L_1518BAD8:
    // 0x1518BAD8: beq         $a3, $t7, L_1518BAF0
    if (ctx->r7 == ctx->r15) {
        // 0x1518BADC: nop
    
            goto L_1518BAF0;
    }
    // 0x1518BADC: nop

    // 0x1518BAE0: lbu         $t8, 0x3B($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X3B);
    // 0x1518BAE4: lbu         $t9, 0x28($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X28);
    // 0x1518BAE8: bnel        $t8, $t9, L_1518BAFC
    if (ctx->r24 != ctx->r25) {
        // 0x1518BAEC: lw          $v1, 0x8($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X8);
            goto L_1518BAFC;
    }
    goto skip_0;
    // 0x1518BAEC: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    skip_0:
L_1518BAF0:
    // 0x1518BAF0: b           L_1518BBE4
    // 0x1518BAF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_1518BBE4;
    // 0x1518BAF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1518BAF8: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
L_1518BAFC:
    // 0x1518BAFC: bnel        $v1, $zero, L_1518BAD8
    if (ctx->r3 != 0) {
        // 0x1518BB00: lw          $t7, 0x24($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X24);
            goto L_1518BAD8;
    }
    goto skip_1;
    // 0x1518BB00: lw          $t7, 0x24($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X24);
    skip_1:
L_1518BB04:
    // 0x1518BB04: bnel        $v0, $a0, L_1518BAC8
    if (ctx->r2 != ctx->r4) {
        // 0x1518BB08: lw          $v1, 0x7C($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X7C);
            goto L_1518BAC8;
    }
    goto skip_2;
    // 0x1518BB08: lw          $v1, 0x7C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X7C);
    skip_2:
    // 0x1518BB0C: lbu         $t0, 0x4($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X4);
    // 0x1518BB10: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x1518BB14: sltiu       $at, $t1, 0x9
    ctx->r1 = ctx->r9 < 0X9 ? 1 : 0;
    // 0x1518BB18: beq         $at, $zero, L_1518BBC8
    if (ctx->r1 == 0) {
        // 0x1518BB1C: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_1518BBC8;
    }
    // 0x1518BB1C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1518BB20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518BB24: addu        $at, $at, $t1
    gpr jr_addend_1518BB2C = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x1518BB28: lw          $t1, 0x7410($at)
    ctx->r9 = ADD32(ctx->r1, 0X7410);
    // 0x1518BB2C: jr          $t1
    // 0x1518BB30: nop

    switch (jr_addend_1518BB2C >> 2) {
        case 0: goto L_1518BB34; break;
        case 1: goto L_1518BB90; break;
        case 2: goto L_1518BB90; break;
        case 3: goto L_1518BB90; break;
        case 4: goto L_1518BB90; break;
        case 5: goto L_1518BB90; break;
        case 6: goto L_1518BBC8; break;
        case 7: goto L_1518BBC8; break;
        case 8: goto L_1518BB3C; break;
        default: switch_error(__func__, 0x1518BB2C, 0x800A7410);
    }
    // 0x1518BB30: nop

L_1518BB34:
    // 0x1518BB34: b           L_1518BBE4
    // 0x1518BB38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518BBE4;
    // 0x1518BB38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518BB3C:
    // 0x1518BB3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518BB40: lwc1        $f4, 0x7434($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7434);
    // 0x1518BB44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518BB48: lwc1        $f6, 0x7438($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7438);
    // 0x1518BB4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518BB50: lwc1        $f8, 0x743C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X743C);
    // 0x1518BB54: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1518BB58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1518BB5C: addiu       $t2, $zero, 0x37
    ctx->r10 = ADD32(0, 0X37);
    // 0x1518BB60: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x1518BB64: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x1518BB68: addiu       $t5, $zero, 0x13
    ctx->r13 = ADD32(0, 0X13);
    // 0x1518BB6C: sh          $t2, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r10;
    // 0x1518BB70: sh          $t3, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r11;
    // 0x1518BB74: sb          $t4, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r12;
    // 0x1518BB78: sb          $t5, 0x42($sp)
    MEM_B(0X42, ctx->r29) = ctx->r13;
    // 0x1518BB7C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x1518BB80: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x1518BB84: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x1518BB88: b           L_1518BBD0
    // 0x1518BB8C: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
        goto L_1518BBD0;
    // 0x1518BB8C: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
L_1518BB90:
    // 0x1518BB90: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1518BB94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1518BB98: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x1518BB9C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x1518BBA0: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x1518BBA4: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x1518BBA8: sh          $t6, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r14;
    // 0x1518BBAC: sb          $t7, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r15;
    // 0x1518BBB0: sb          $t8, 0x42($sp)
    MEM_B(0X42, ctx->r29) = ctx->r24;
    // 0x1518BBB4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x1518BBB8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x1518BBBC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x1518BBC0: b           L_1518BBD0
    // 0x1518BBC4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
        goto L_1518BBD0;
    // 0x1518BBC4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
L_1518BBC8:
    // 0x1518BBC8: b           L_1518BBE4
    // 0x1518BBCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518BBE4;
    // 0x1518BBCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518BBD0:
    // 0x1518BBD0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x1518BBD4: lbu         $t9, 0x3B($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X3B);
    // 0x1518BBD8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x1518BBDC: jal         0x1518BCD0
    // 0x1518BBE0: sb          $t9, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r25;
    func_1518BCD0(rdram, ctx);
        goto after_0;
    // 0x1518BBE0: sb          $t9, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r25;
    after_0:
L_1518BBE4:
    // 0x1518BBE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1518BBE8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1518BBEC: jr          $ra
    // 0x1518BBF0: nop

    return;
    return;
    // 0x1518BBF0: nop

;}
RECOMP_FUNC void func_15072360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072360: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15072364: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15072368: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507236C: lw          $t7, 0x1580($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1580);
    // 0x15072370: lw          $t6, 0x94($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X94);
    // 0x15072374: nor         $t8, $t7, $zero
    ctx->r24 = ~(ctx->r15 | 0);
    // 0x15072378: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x1507237C: sw          $t9, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r25;
    // 0x15072380: jr          $ra
    // 0x15072384: nop

    return;
    return;
    // 0x15072384: nop

;}
RECOMP_FUNC void func_151419D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151419D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151419D4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151419D8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151419DC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151419E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151419E4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151419E8: bne         $a2, $zero, L_15141A24
    if (ctx->r6 != 0) {
        // 0x151419EC: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_15141A24;
    }
    // 0x151419EC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151419F0: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x151419F4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151419F8: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x151419FC: beq         $v1, $t7, L_15141A14
    if (ctx->r3 == ctx->r15) {
        // 0x15141A00: nop
    
            goto L_15141A14;
    }
    // 0x15141A00: nop

    // 0x15141A04: lbu         $t8, 0x8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X8);
    // 0x15141A08: lbu         $t9, 0x4($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X4);
    // 0x15141A0C: bnel        $t8, $t9, L_15141A70
    if (ctx->r24 != ctx->r25) {
        // 0x15141A10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15141A70;
    }
    goto skip_0;
    // 0x15141A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_15141A14:
    // 0x15141A14: jal         0x1516972C
    // 0x15141A18: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15141A18: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x15141A1C: b           L_15141A70
    // 0x15141A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15141A70;
    // 0x15141A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15141A24:
    // 0x15141A24: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x15141A28: bne         $v0, $at, L_15141A6C
    if (ctx->r2 != ctx->r1) {
        // 0x15141A2C: addiu       $v0, $a3, 0x28
        ctx->r2 = ADD32(ctx->r7, 0X28);
            goto L_15141A6C;
    }
    // 0x15141A2C: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x15141A30: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x15141A34: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x15141A38: bnel        $v1, $a0, L_15141A58
    if (ctx->r3 != ctx->r4) {
        // 0x15141A3C: lw          $t2, 0x4($a1)
        ctx->r10 = MEM_W(ctx->r5, 0X4);
            goto L_15141A58;
    }
    goto skip_1;
    // 0x15141A3C: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
    skip_1:
    // 0x15141A40: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x15141A44: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x15141A48: lbu         $t1, 0x9($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X9);
    // 0x15141A4C: b           L_15141A6C
    // 0x15141A50: sb          $t1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r9;
        goto L_15141A6C;
    // 0x15141A50: sb          $t1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r9;
    // 0x15141A54: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
L_15141A58:
    // 0x15141A58: bnel        $t2, $a0, L_15141A70
    if (ctx->r10 != ctx->r4) {
        // 0x15141A5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15141A70;
    }
    goto skip_2;
    // 0x15141A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x15141A60: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x15141A64: lbu         $t3, 0x8($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X8);
    // 0x15141A68: sb          $t3, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r11;
L_15141A6C:
    // 0x15141A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15141A70:
    // 0x15141A70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15141A74: jr          $ra
    // 0x15141A78: nop

    return;
    return;
    // 0x15141A78: nop

;}
RECOMP_FUNC void func_150636A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150636A4: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
    // 0x150636A8: lw          $v0, 0xB0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XB0);
    // 0x150636AC: beq         $v0, $zero, L_150636E8
    if (ctx->r2 == 0) {
        // 0x150636B0: nop
    
            goto L_150636E8;
    }
    // 0x150636B0: nop

    // 0x150636B4: lw          $a1, 0x31C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X31C);
    // 0x150636B8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150636BC: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x150636C0: beq         $a1, $zero, L_150636E8
    if (ctx->r5 == 0) {
        // 0x150636C4: addiu       $t8, $t8, -0x3D30
        ctx->r24 = ADD32(ctx->r24, -0X3D30);
            goto L_150636E8;
    }
    // 0x150636C4: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x150636C8: subu        $t9, $a0, $t8
    ctx->r25 = SUB32(ctx->r4, ctx->r24);
    // 0x150636CC: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x150636D0: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x150636D4: sb          $t7, 0x195($a1)
    MEM_B(0X195, ctx->r5) = ctx->r15;
    // 0x150636D8: lw          $t1, 0x31C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X31C);
    // 0x150636DC: mflo        $t0
    ctx->r8 = lo;
    // 0x150636E0: sb          $t0, 0x196($t1)
    MEM_B(0X196, ctx->r9) = ctx->r8;
    // 0x150636E4: nop

L_150636E8:
    // 0x150636E8: jr          $ra
    // 0x150636EC: nop

    return;
    return;
    // 0x150636EC: nop

;}
RECOMP_FUNC void func_1509F47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509F47C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1509F480: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1509F484: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1509F488: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1509F48C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1509F490: jal         0x151149AC
    // 0x1509F494: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x1509F494: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    after_0:
    // 0x1509F498: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1509F49C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x1509F4A0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x1509F4A4: subu        $a1, $t6, $a0
    ctx->r5 = SUB32(ctx->r14, ctx->r4);
    // 0x1509F4A8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1509F4AC: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x1509F4B0: jal         0x1000F568
    // 0x1509F4B4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_1000F568(rdram, ctx);
        goto after_1;
    // 0x1509F4B4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_1:
    // 0x1509F4B8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x1509F4BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1509F4C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1509F4C4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x1509F4C8: lh          $a3, 0x3A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3A);
    // 0x1509F4CC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1509F4D0: jal         0x15114D24
    // 0x1509F4D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15114D24(rdram, ctx);
        goto after_2;
    // 0x1509F4D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x1509F4D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1509F4DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1509F4E0: jr          $ra
    // 0x1509F4E4: nop

    return;
    return;
    // 0x1509F4E4: nop

;}
RECOMP_FUNC void func_151AB6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AB6B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151AB6BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151AB6C0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151AB6C4: lhu         $t6, 0x5E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X5E);
    // 0x151AB6C8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151AB6CC: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151AB6D0: beq         $t6, $zero, L_151AB710
    if (ctx->r14 == 0) {
        // 0x151AB6D4: addiu       $v1, $a1, 0x58
        ctx->r3 = ADD32(ctx->r5, 0X58);
            goto L_151AB710;
    }
    // 0x151AB6D4: addiu       $v1, $a1, 0x58
    ctx->r3 = ADD32(ctx->r5, 0X58);
    // 0x151AB6D8: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x151AB6DC: lw          $t8, 0x5F0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X5F0);
    // 0x151AB6E0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x151AB6E4: bnel        $t9, $zero, L_151AB714
    if (ctx->r25 != 0) {
        // 0x151AB6E8: lhu         $t1, 0x6($v1)
        ctx->r9 = MEM_HU(ctx->r3, 0X6);
            goto L_151AB714;
    }
    goto skip_0;
    // 0x151AB6E8: lhu         $t1, 0x6($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X6);
    skip_0:
    // 0x151AB6EC: addiu       $v1, $a1, 0x58
    ctx->r3 = ADD32(ctx->r5, 0X58);
    // 0x151AB6F0: lhu         $a0, 0x6($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X6);
    // 0x151AB6F4: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
    // 0x151AB6F8: jal         0x100111C8
    // 0x151AB6FC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x151AB6FC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x151AB700: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x151AB704: lbu         $t0, 0x2F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2F);
    // 0x151AB708: b           L_151AB760
    // 0x151AB70C: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
        goto L_151AB760;
    // 0x151AB70C: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
L_151AB710:
    // 0x151AB710: lhu         $t1, 0x6($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X6);
L_151AB714:
    // 0x151AB714: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151AB718: bnel        $t1, $zero, L_151AB764
    if (ctx->r9 != 0) {
        // 0x151AB71C: lbu         $t5, 0x4($v1)
        ctx->r13 = MEM_BU(ctx->r3, 0X4);
            goto L_151AB764;
    }
    goto skip_1;
    // 0x151AB71C: lbu         $t5, 0x4($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X4);
    skip_1:
    // 0x151AB720: lw          $t2, -0x4010($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4010);
    // 0x151AB724: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    // 0x151AB728: addiu       $a1, $zero, 0x7D00
    ctx->r5 = ADD32(0, 0X7D00);
    // 0x151AB72C: lw          $t3, 0x5F0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X5F0);
    // 0x151AB730: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151AB734: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151AB738: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x151AB73C: beql        $t4, $zero, L_151AB764
    if (ctx->r12 == 0) {
        // 0x151AB740: lbu         $t5, 0x4($v1)
        ctx->r13 = MEM_BU(ctx->r3, 0X4);
            goto L_151AB764;
    }
    goto skip_2;
    // 0x151AB740: lbu         $t5, 0x4($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X4);
    skip_2:
    // 0x151AB744: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151AB748: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x151AB74C: jal         0x10010F30
    // 0x151AB750: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
    func_10010F30(rdram, ctx);
        goto after_1;
    // 0x151AB750: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
    after_1:
    // 0x151AB754: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x151AB758: lbu         $t0, 0x2F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2F);
    // 0x151AB75C: sh          $v0, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r2;
L_151AB760:
    // 0x151AB760: lbu         $t5, 0x4($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X4);
L_151AB764:
    // 0x151AB764: bnel        $t5, $zero, L_151AB774
    if (ctx->r13 != 0) {
        // 0x151AB768: sb          $zero, 0x4($v1)
        MEM_B(0X4, ctx->r3) = 0;
            goto L_151AB774;
    }
    goto skip_3;
    // 0x151AB768: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    skip_3:
    // 0x151AB76C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x151AB770: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
L_151AB774:
    // 0x151AB774: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x151AB778: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151AB77C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151AB780: jr          $ra
    // 0x151AB784: nop

    return;
    return;
    // 0x151AB784: nop

;}
RECOMP_FUNC void func_15145128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15145128: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1514512C: bnel        $a3, $zero, L_1514513C
    if (ctx->r7 != 0) {
        // 0x15145130: lwc1        $f0, 0x0($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
            goto L_1514513C;
    }
    goto skip_0;
    // 0x15145130: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x15145134: addiu       $a3, $sp, 0x0
    ctx->r7 = ADD32(ctx->r29, 0X0);
    // 0x15145138: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
L_1514513C:
    // 0x1514513C: lwc1        $f12, 0x4($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15145140: lwc1        $f14, 0x8($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15145144: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15145148: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1514514C: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15145150: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15145154: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15145158: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1514515C: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x15145160: nop

    // 0x15145164: bc1f        L_15145174
    if (!c1cs) {
        // 0x15145168: nop
    
            goto L_15145174;
    }
    // 0x15145168: nop

    // 0x1514516C: b           L_151451E8
    // 0x15145170: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151451E8;
    // 0x15145170: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15145174:
    // 0x15145174: beql        $a2, $zero, L_151451A0
    if (ctx->r6 == 0) {
        // 0x15145178: sqrt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
            goto L_151451A0;
    }
    goto skip_1;
    // 0x15145178: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
    skip_1:
    // 0x1514517C: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
    // 0x15145180: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15145184: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15145188: nop

    // 0x1514518C: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15145190: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x15145194: b           L_151451B4
    // 0x15145198: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
        goto L_151451B4;
    // 0x15145198: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x1514519C: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
L_151451A0:
    // 0x151451A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151451A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151451A8: nop

    // 0x151451AC: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151451B0: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
L_151451B4:
    // 0x151451B4: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x151451B8: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151451BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151451C0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151451C4: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x151451C8: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x151451CC: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151451D0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151451D4: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    // 0x151451D8: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151451DC: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x151451E0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151451E4: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
L_151451E8:
    // 0x151451E8: jr          $ra
    // 0x151451EC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x151451EC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_1507EBB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507EBB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1507EBBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507EBC0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1507EBC4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1507EBC8: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x1507EBCC: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1507EBD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1507EBD4: lw          $t7, 0x6C24($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6C24);
    // 0x1507EBD8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x1507EBDC: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x1507EBE0: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x1507EBE4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x1507EBE8: lbu         $a3, -0x4410($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X4410);
    // 0x1507EBEC: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x1507EBF0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1507EBF4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x1507EBF8: addu        $t9, $v0, $a3
    ctx->r25 = ADD32(ctx->r2, ctx->r7);
    // 0x1507EBFC: slti        $at, $t9, 0x28
    ctx->r1 = SIGNED(ctx->r25) < 0X28 ? 1 : 0;
    // 0x1507EC00: beq         $at, $zero, L_1507EC28
    if (ctx->r1 == 0) {
        // 0x1507EC04: addu        $a1, $v0, $t0
        ctx->r5 = ADD32(ctx->r2, ctx->r8);
            goto L_1507EC28;
    }
    // 0x1507EC04: addu        $a1, $v0, $t0
    ctx->r5 = ADD32(ctx->r2, ctx->r8);
    // 0x1507EC08: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x1507EC0C: jal         0x10023A10
    // 0x1507EC10: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    bcopy_recomp(rdram, ctx);
        goto after_0;
    // 0x1507EC10: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x1507EC14: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x1507EC18: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x1507EC1C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x1507EC20: addu        $t2, $t1, $a3
    ctx->r10 = ADD32(ctx->r9, ctx->r7);
    // 0x1507EC24: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
L_1507EC28:
    // 0x1507EC28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507EC2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1507EC30: jr          $ra
    // 0x1507EC34: nop

    return;
    return;
    // 0x1507EC34: nop

;}
RECOMP_FUNC void func_150FACE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FACE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150FACE8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150FACEC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150FACF0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150FACF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150FACF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150FACFC: addiu       $at, $zero, 0x4E
    ctx->r1 = ADD32(0, 0X4E);
    // 0x150FAD00: beq         $a2, $at, L_150FAD10
    if (ctx->r6 == ctx->r1) {
        // 0x150FAD04: addiu       $at, $zero, 0x4F
        ctx->r1 = ADD32(0, 0X4F);
            goto L_150FAD10;
    }
    // 0x150FAD04: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
    // 0x150FAD08: bnel        $a2, $at, L_150FAD1C
    if (ctx->r6 != ctx->r1) {
        // 0x150FAD0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150FAD1C;
    }
    goto skip_0;
    // 0x150FAD0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_150FAD10:
    // 0x150FAD10: jal         0x1516972C
    // 0x150FAD14: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150FAD14: nop

    after_0:
    // 0x150FAD18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150FAD1C:
    // 0x150FAD1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150FAD20: jr          $ra
    // 0x150FAD24: nop

    return;
    return;
    // 0x150FAD24: nop

;}
RECOMP_FUNC void func_1510B7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510B7B4: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x1510B7B8: addiu       $a2, $a2, -0x19D8
    ctx->r6 = ADD32(ctx->r6, -0X19D8);
    // 0x1510B7BC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1510B7C0: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x1510B7C4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x1510B7C8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x1510B7CC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510B7D0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1510B7D4: lui         $t7, 0xF900
    ctx->r15 = S32(0XF900 << 16);
    // 0x1510B7D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1510B7DC: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x1510B7E0: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x1510B7E4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510B7E8: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x1510B7EC: lui         $t9, 0xDA38
    ctx->r25 = S32(0XDA38 << 16);
    // 0x1510B7F0: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x1510B7F4: addiu       $t5, $t5, -0x6B90
    ctx->r13 = ADD32(ctx->r13, -0X6B90);
    // 0x1510B7F8: ori         $t9, $t9, 0x3
    ctx->r25 = ctx->r25 | 0X3;
    // 0x1510B7FC: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x1510B800: sw          $t5, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r13;
    // 0x1510B804: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510B808: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x1510B80C: lui         $t6, 0xDB0E
    ctx->r14 = S32(0XDB0E << 16);
    // 0x1510B810: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x1510B814: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x1510B818: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x1510B81C: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x1510B820: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x1510B824: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1510B828: lhu         $t5, 0xB8($t9)
    ctx->r13 = MEM_HU(ctx->r25, 0XB8);
    // 0x1510B82C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510B830: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1510B834: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x1510B838: lui         $t6, 0xDB04
    ctx->r14 = S32(0XDB04 << 16);
    // 0x1510B83C: ori         $t6, $t6, 0x4
    ctx->r14 = ctx->r14 | 0X4;
    // 0x1510B840: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x1510B844: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x1510B848: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1510B84C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510B850: ori         $t4, $zero, 0xFFFD
    ctx->r12 = 0 | 0XFFFD;
    // 0x1510B854: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1510B858: lui         $t7, 0xDB04
    ctx->r15 = S32(0XDB04 << 16);
    // 0x1510B85C: ori         $t7, $t7, 0xC
    ctx->r15 = ctx->r15 | 0XC;
    // 0x1510B860: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x1510B864: sw          $t3, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r11;
    // 0x1510B868: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510B86C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x1510B870: lui         $t8, 0xDB04
    ctx->r24 = S32(0XDB04 << 16);
    // 0x1510B874: ori         $t8, $t8, 0x14
    ctx->r24 = ctx->r24 | 0X14;
    // 0x1510B878: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x1510B87C: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x1510B880: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510B884: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x1510B888: lui         $t9, 0xDB04
    ctx->r25 = S32(0XDB04 << 16);
    // 0x1510B88C: ori         $t9, $t9, 0x1C
    ctx->r25 = ctx->r25 | 0X1C;
    // 0x1510B890: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x1510B894: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x1510B898: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510B89C: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x1510B8A0: lui         $t5, 0xD9EF
    ctx->r13 = S32(0XD9EF << 16);
    // 0x1510B8A4: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x1510B8A8: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x1510B8AC: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x1510B8B0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510B8B4: lui         $t6, 0xDA38
    ctx->r14 = S32(0XDA38 << 16);
    // 0x1510B8B8: ori         $t6, $t6, 0x7
    ctx->r14 = ctx->r14 | 0X7;
    // 0x1510B8BC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1510B8C0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x1510B8C4: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1510B8C8: addiu       $t1, $t1, -0x1640
    ctx->r9 = ADD32(ctx->r9, -0X1640);
    // 0x1510B8CC: lbu         $t5, 0x0($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X0);
    // 0x1510B8D0: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x1510B8D4: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x1510B8D8: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x1510B8DC: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x1510B8E0: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x1510B8E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1510B8E8: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x1510B8EC: addiu       $t8, $t7, 0x100
    ctx->r24 = ADD32(ctx->r15, 0X100);
    // 0x1510B8F0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x1510B8F4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510B8F8: lui         $t5, 0xDA38
    ctx->r13 = S32(0XDA38 << 16);
    // 0x1510B8FC: ori         $t5, $t5, 0x5
    ctx->r13 = ctx->r13 | 0X5;
    // 0x1510B900: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1510B904: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x1510B908: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x1510B90C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1510B910: sll         $t8, $a1, 6
    ctx->r24 = S32(ctx->r5 << 6);
    // 0x1510B914: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x1510B918: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1510B91C: lw          $t7, -0x3D60($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3D60);
    // 0x1510B920: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510B924: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x1510B928: addu        $t5, $t7, $t8
    ctx->r13 = ADD32(ctx->r15, ctx->r24);
    // 0x1510B92C: sw          $t5, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r13;
    // 0x1510B930: lui         $t9, 0xEF08
    ctx->r25 = S32(0XEF08 << 16);
    // 0x1510B934: lui         $t6, 0x55
    ctx->r14 = S32(0X55 << 16);
    // 0x1510B938: ori         $t6, $t6, 0x2230
    ctx->r14 = ctx->r14 | 0X2230;
    // 0x1510B93C: ori         $t9, $t9, 0x2C3F
    ctx->r25 = ctx->r25 | 0X2C3F;
    // 0x1510B940: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x1510B944: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x1510B948: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510B94C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1510B950: jr          $ra
    // 0x1510B954: nop

    return;
    return;
    // 0x1510B954: nop

;}
RECOMP_FUNC void func_151D3E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D3E6C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151D3E70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D3E74: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151D3E78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151D3E7C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151D3E80: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x151D3E84: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x151D3E88: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x151D3E8C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151D3E90: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x151D3E94: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x151D3E98: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151D3E9C: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151D3EA0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x151D3EA4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151D3EA8: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151D3EAC: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x151D3EB0: subu        $t0, $a0, $t9
    ctx->r8 = SUB32(ctx->r4, ctx->r25);
    // 0x151D3EB4: mul.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151D3EB8: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x151D3EBC: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x151D3EC0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x151D3EC4: beql        $v0, $zero, L_151D3EE8
    if (ctx->r2 == 0) {
        // 0x151D3EC8: lhu         $v1, 0x76($a0)
        ctx->r3 = MEM_HU(ctx->r4, 0X76);
            goto L_151D3EE8;
    }
    goto skip_0;
    // 0x151D3EC8: lhu         $v1, 0x76($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X76);
    skip_0:
    // 0x151D3ECC: lhu         $t6, 0x76($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X76);
    // 0x151D3ED0: lh          $t7, 0x12($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X12);
    // 0x151D3ED4: subu        $v1, $t6, $t7
    ctx->r3 = SUB32(ctx->r14, ctx->r15);
    // 0x151D3ED8: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x151D3EDC: b           L_151D3EE8
    // 0x151D3EE0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_151D3EE8;
    // 0x151D3EE0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x151D3EE4: lhu         $v1, 0x76($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X76);
L_151D3EE8:
    // 0x151D3EE8: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x151D3EEC: mflo        $t1
    ctx->r9 = lo;
    // 0x151D3EF0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151D3EF4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x151D3EF8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151D3EFC: jal         0x1505D1C4
    // 0x151D3F00: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_1505D1C4(rdram, ctx);
        goto after_0;
    // 0x151D3F00: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x151D3F04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151D3F08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D3F0C: jr          $ra
    // 0x151D3F10: nop

    return;
    return;
    // 0x151D3F10: nop

;}
RECOMP_FUNC void func_100020D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100020D0: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x100020D4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x100020D8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x100020DC: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    // 0x100020E0: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x100020E4: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x100020E8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x100020EC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x100020F0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x100020F4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x100020F8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x100020FC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x10002100: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x10002104: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x10002108: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1000210C: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x10002110: lui         $s7, 0x8003
    ctx->r23 = S32(0X8003 << 16);
    // 0x10002114: lui         $s6, 0x8003
    ctx->r22 = S32(0X8003 << 16);
    // 0x10002118: lui         $s5, 0x8003
    ctx->r21 = S32(0X8003 << 16);
    // 0x1000211C: sw          $zero, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = 0;
    // 0x10002120: addiu       $s5, $s5, -0x54EC
    ctx->r21 = ADD32(ctx->r21, -0X54EC);
    // 0x10002124: addiu       $s6, $s6, -0x407C
    ctx->r22 = ADD32(ctx->r22, -0X407C);
    // 0x10002128: addiu       $s7, $s7, -0x5510
    ctx->r23 = ADD32(ctx->r23, -0X5510);
    // 0x1000212C: addiu       $fp, $zero, 0xA
    ctx->r30 = ADD32(0, 0XA);
    // 0x10002130: lbu         $s0, 0x0($a3)
    ctx->r16 = MEM_BU(ctx->r7, 0X0);
L_10002134:
    // 0x10002134: addiu       $s2, $a3, 0x1
    ctx->r18 = ADD32(ctx->r7, 0X1);
    // 0x10002138: addiu       $v1, $zero, 0x25
    ctx->r3 = ADD32(0, 0X25);
    // 0x1000213C: blez        $s0, L_10002164
    if (SIGNED(ctx->r16) <= 0) {
        // 0x10002140: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_10002164;
    }
    // 0x10002140: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_10002144:
    // 0x10002144: bnel        $v1, $s0, L_10002158
    if (ctx->r3 != ctx->r16) {
        // 0x10002148: lbu         $s0, 0x0($s2)
        ctx->r16 = MEM_BU(ctx->r18, 0X0);
            goto L_10002158;
    }
    goto skip_0;
    // 0x10002148: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
    skip_0:
    // 0x1000214C: b           L_10002164
    // 0x10002150: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
        goto L_10002164;
    // 0x10002150: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x10002154: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
L_10002158:
    // 0x10002158: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1000215C: bgtz        $s0, L_10002144
    if (SIGNED(ctx->r16) > 0) {
        // 0x10002160: nop
    
            goto L_10002144;
    }
    // 0x10002160: nop

L_10002164:
    // 0x10002164: subu        $v0, $s2, $a3
    ctx->r2 = SUB32(ctx->r18, ctx->r7);
    // 0x10002168: blez        $v0, L_1000219C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1000216C: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_1000219C;
    }
    // 0x1000216C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x10002170: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x10002174: jalr        $s4
    // 0x10002178: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_0;
    // 0x10002178: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_0:
    // 0x1000217C: beq         $v0, $zero, L_10002194
    if (ctx->r2 == 0) {
        // 0x10002180: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_10002194;
    }
    // 0x10002180: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x10002184: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x10002188: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x1000218C: b           L_1000219C
    // 0x10002190: sw          $t7, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r15;
        goto L_1000219C;
    // 0x10002190: sw          $t7, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r15;
L_10002194:
    // 0x10002194: b           L_100026E8
    // 0x10002198: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_100026E8;
    // 0x10002198: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_1000219C:
    // 0x1000219C: bne         $s0, $zero, L_100021AC
    if (ctx->r16 != 0) {
        // 0x100021A0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_100021AC;
    }
    // 0x100021A0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x100021A4: b           L_100026E8
    // 0x100021A8: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_100026E8;
    // 0x100021A8: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_100021AC:
    // 0x100021AC: sw          $zero, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = 0;
    // 0x100021B0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x100021B4: jal         0x10022F14
    // 0x100021B8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    strchr_recomp(rdram, ctx);
        goto after_1;
    // 0x100021B8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_1:
    // 0x100021BC: beq         $v0, $zero, L_100021FC
    if (ctx->r2 == 0) {
        // 0x100021C0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_100021FC;
    }
    // 0x100021C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_100021C4:
    // 0x100021C4: subu        $t9, $s0, $s6
    ctx->r25 = SUB32(ctx->r16, ctx->r22);
    // 0x100021C8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x100021CC: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x100021D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x100021D4: lw          $t1, -0x4074($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4074);
    // 0x100021D8: lw          $t8, 0xD8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD8);
    // 0x100021DC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x100021E0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x100021E4: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x100021E8: sw          $t2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r10;
    // 0x100021EC: jal         0x10022F14
    // 0x100021F0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    strchr_recomp(rdram, ctx);
        goto after_2;
    // 0x100021F0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    after_2:
    // 0x100021F4: bne         $v0, $zero, L_100021C4
    if (ctx->r2 != 0) {
        // 0x100021F8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_100021C4;
    }
    // 0x100021F8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_100021FC:
    // 0x100021FC: lbu         $t3, 0x0($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X0);
    // 0x10002200: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x10002204: lw          $t4, 0xEC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XEC);
    // 0x10002208: bne         $v0, $t3, L_10002250
    if (ctx->r2 != ctx->r11) {
        // 0x1000220C: lui         $a0, 0x8003
        ctx->r4 = S32(0X8003 << 16);
            goto L_10002250;
    }
    // 0x1000220C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10002210: addiu       $t5, $t4, 0x3
    ctx->r13 = ADD32(ctx->r12, 0X3);
    // 0x10002214: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x10002218: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x1000221C: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x10002220: sw          $t7, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r15;
    // 0x10002224: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x10002228: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1000222C: bgez        $t9, L_10002248
    if (SIGNED(ctx->r25) >= 0) {
        // 0x10002230: sw          $t9, 0xD0($sp)
        MEM_W(0XD0, ctx->r29) = ctx->r25;
            goto L_10002248;
    }
    // 0x10002230: sw          $t9, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r25;
    // 0x10002234: lw          $t8, 0xD8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD8);
    // 0x10002238: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x1000223C: sw          $t0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r8;
    // 0x10002240: ori         $t1, $t8, 0x4
    ctx->r9 = ctx->r24 | 0X4;
    // 0x10002244: sw          $t1, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r9;
L_10002248:
    // 0x10002248: b           L_100022AC
    // 0x1000224C: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_100022AC;
    // 0x1000224C: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_10002250:
    // 0x10002250: sw          $zero, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = 0;
    // 0x10002254: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x10002258: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x1000225C: bne         $at, $zero, L_100022AC
    if (ctx->r1 != 0) {
        // 0x10002260: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_100022AC;
    }
    // 0x10002260: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x10002264: beql        $at, $zero, L_100022B0
    if (ctx->r1 == 0) {
        // 0x10002268: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_100022B0;
    }
    goto skip_1;
    // 0x10002268: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    skip_1:
    // 0x1000226C: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
L_10002270:
    // 0x10002270: slti        $at, $t2, 0x3E7
    ctx->r1 = SIGNED(ctx->r10) < 0X3E7 ? 1 : 0;
    // 0x10002274: beql        $at, $zero, L_10002294
    if (ctx->r1 == 0) {
        // 0x10002278: lbu         $a1, 0x1($s2)
        ctx->r5 = MEM_BU(ctx->r18, 0X1);
            goto L_10002294;
    }
    goto skip_2;
    // 0x10002278: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
    skip_2:
    // 0x1000227C: multu       $t2, $fp
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10002280: mflo        $t3
    ctx->r11 = lo;
    // 0x10002284: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x10002288: addiu       $t5, $t4, -0x30
    ctx->r13 = ADD32(ctx->r12, -0X30);
    // 0x1000228C: sw          $t5, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r13;
    // 0x10002290: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
L_10002294:
    // 0x10002294: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x10002298: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x1000229C: bne         $at, $zero, L_100022AC
    if (ctx->r1 != 0) {
        // 0x100022A0: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_100022AC;
    }
    // 0x100022A0: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x100022A4: bnel        $at, $zero, L_10002270
    if (ctx->r1 != 0) {
        // 0x100022A8: lw          $t2, 0xD0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XD0);
            goto L_10002270;
    }
    goto skip_3;
    // 0x100022A8: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    skip_3:
L_100022AC:
    // 0x100022AC: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
L_100022B0:
    // 0x100022B0: beq         $a1, $at, L_100022C4
    if (ctx->r5 == ctx->r1) {
        // 0x100022B4: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_100022C4;
    }
    // 0x100022B4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x100022B8: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
    // 0x100022BC: b           L_10002358
    // 0x100022C0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_10002358;
    // 0x100022C0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_100022C4:
    // 0x100022C4: lbu         $t6, 0x1($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X1);
    // 0x100022C8: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x100022CC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x100022D0: bne         $v0, $t6, L_100022FC
    if (ctx->r2 != ctx->r14) {
        // 0x100022D4: addiu       $t0, $t9, 0x3
        ctx->r8 = ADD32(ctx->r25, 0X3);
            goto L_100022FC;
    }
    // 0x100022D4: addiu       $t0, $t9, 0x3
    ctx->r8 = ADD32(ctx->r25, 0X3);
    // 0x100022D8: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x100022DC: and         $t8, $t0, $at
    ctx->r24 = ctx->r8 & ctx->r1;
    // 0x100022E0: addiu       $t1, $t8, 0x4
    ctx->r9 = ADD32(ctx->r24, 0X4);
    // 0x100022E4: sw          $t1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r9;
    // 0x100022E8: lw          $t2, 0x0($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X0);
    // 0x100022EC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x100022F0: sw          $t2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r10;
    // 0x100022F4: b           L_10002358
    // 0x100022F8: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_10002358;
    // 0x100022F8: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_100022FC:
    // 0x100022FC: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    // 0x10002300: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x10002304: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x10002308: bne         $at, $zero, L_10002358
    if (ctx->r1 != 0) {
        // 0x1000230C: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_10002358;
    }
    // 0x1000230C: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x10002310: beq         $at, $zero, L_10002358
    if (ctx->r1 == 0) {
        // 0x10002314: nop
    
            goto L_10002358;
    }
    // 0x10002314: nop

    // 0x10002318: lw          $t3, 0xCC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XCC);
L_1000231C:
    // 0x1000231C: slti        $at, $t3, 0x3E7
    ctx->r1 = SIGNED(ctx->r11) < 0X3E7 ? 1 : 0;
    // 0x10002320: beql        $at, $zero, L_10002340
    if (ctx->r1 == 0) {
        // 0x10002324: lbu         $a1, 0x1($s2)
        ctx->r5 = MEM_BU(ctx->r18, 0X1);
            goto L_10002340;
    }
    goto skip_4;
    // 0x10002324: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
    skip_4:
    // 0x10002328: multu       $t3, $fp
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1000232C: mflo        $t4
    ctx->r12 = lo;
    // 0x10002330: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x10002334: addiu       $t7, $t5, -0x30
    ctx->r15 = ADD32(ctx->r13, -0X30);
    // 0x10002338: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
    // 0x1000233C: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
L_10002340:
    // 0x10002340: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x10002344: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x10002348: bne         $at, $zero, L_10002358
    if (ctx->r1 != 0) {
        // 0x1000234C: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_10002358;
    }
    // 0x1000234C: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x10002350: bnel        $at, $zero, L_1000231C
    if (ctx->r1 != 0) {
        // 0x10002354: lw          $t3, 0xCC($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XCC);
            goto L_1000231C;
    }
    goto skip_5;
    // 0x10002354: lw          $t3, 0xCC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XCC);
    skip_5:
L_10002358:
    // 0x10002358: jal         0x10022F14
    // 0x1000235C: addiu       $a0, $a0, -0x4080
    ctx->r4 = ADD32(ctx->r4, -0X4080);
    strchr_recomp(rdram, ctx);
        goto after_3;
    // 0x1000235C: addiu       $a0, $a0, -0x4080
    ctx->r4 = ADD32(ctx->r4, -0X4080);
    after_3:
    // 0x10002360: beq         $v0, $zero, L_10002378
    if (ctx->r2 == 0) {
        // 0x10002364: addiu       $a0, $sp, 0xA8
        ctx->r4 = ADD32(ctx->r29, 0XA8);
            goto L_10002378;
    }
    // 0x10002364: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x10002368: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x1000236C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x10002370: b           L_1000237C
    // 0x10002374: sb          $t6, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r14;
        goto L_1000237C;
    // 0x10002374: sb          $t6, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r14;
L_10002378:
    // 0x10002378: sb          $zero, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = 0;
L_1000237C:
    // 0x1000237C: lbu         $t9, 0xDC($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XDC);
    // 0x10002380: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x10002384: addiu       $a1, $sp, 0xEC
    ctx->r5 = ADD32(ctx->r29, 0XEC);
    // 0x10002388: bne         $v0, $t9, L_100023A8
    if (ctx->r2 != ctx->r25) {
        // 0x1000238C: addiu       $a3, $sp, 0x7C
        ctx->r7 = ADD32(ctx->r29, 0X7C);
            goto L_100023A8;
    }
    // 0x1000238C: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    // 0x10002390: lbu         $t0, 0x0($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X0);
    // 0x10002394: addiu       $t1, $zero, 0x4C
    ctx->r9 = ADD32(0, 0X4C);
    // 0x10002398: bne         $v0, $t0, L_100023A8
    if (ctx->r2 != ctx->r8) {
        // 0x1000239C: nop
    
            goto L_100023A8;
    }
    // 0x1000239C: nop

    // 0x100023A0: sb          $t1, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r9;
    // 0x100023A4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_100023A8:
    // 0x100023A8: jal         0x10002718
    // 0x100023AC: lbu         $a2, 0x0($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X0);
    func_10002718(rdram, ctx);
        goto after_4;
    // 0x100023AC: lbu         $a2, 0x0($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X0);
    after_4:
    // 0x100023B0: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x100023B4: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x100023B8: lw          $t4, 0xB8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB8);
    // 0x100023BC: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x100023C0: subu        $t3, $t8, $t2
    ctx->r11 = SUB32(ctx->r24, ctx->r10);
    // 0x100023C4: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x100023C8: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x100023CC: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x100023D0: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x100023D4: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x100023D8: subu        $t6, $t5, $t7
    ctx->r14 = SUB32(ctx->r13, ctx->r15);
    // 0x100023DC: subu        $t0, $t6, $t9
    ctx->r8 = SUB32(ctx->r14, ctx->r25);
    // 0x100023E0: subu        $t8, $t0, $t1
    ctx->r24 = SUB32(ctx->r8, ctx->r9);
    // 0x100023E4: subu        $t3, $t8, $t2
    ctx->r11 = SUB32(ctx->r24, ctx->r10);
    // 0x100023E8: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x100023EC: bne         $t5, $zero, L_1000245C
    if (ctx->r13 != 0) {
        // 0x100023F0: sw          $t3, 0xD0($sp)
        MEM_W(0XD0, ctx->r29) = ctx->r11;
            goto L_1000245C;
    }
    // 0x100023F0: sw          $t3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r11;
    // 0x100023F4: slt         $t7, $zero, $t3
    ctx->r15 = SIGNED(0) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x100023F8: beql        $t7, $zero, L_10002460
    if (ctx->r15 == 0) {
        // 0x100023FC: lw          $t0, 0xB4($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XB4);
            goto L_10002460;
    }
    goto skip_6;
    // 0x100023FC: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    skip_6:
    // 0x10002400: beq         $t7, $zero, L_1000245C
    if (ctx->r15 == 0) {
        // 0x10002404: or          $s1, $t3, $zero
        ctx->r17 = ctx->r11 | 0;
            goto L_1000245C;
    }
    // 0x10002404: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x10002408: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_1000240C:
    // 0x1000240C: bne         $at, $zero, L_1000241C
    if (ctx->r1 != 0) {
        // 0x10002410: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_1000241C;
    }
    // 0x10002410: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x10002414: b           L_1000241C
    // 0x10002418: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_1000241C;
    // 0x10002418: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_1000241C:
    // 0x1000241C: blez        $s0, L_10002450
    if (SIGNED(ctx->r16) <= 0) {
        // 0x10002420: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_10002450;
    }
    // 0x10002420: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x10002424: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x10002428: jalr        $s4
    // 0x1000242C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_5;
    // 0x1000242C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x10002430: beq         $v0, $zero, L_10002448
    if (ctx->r2 == 0) {
        // 0x10002434: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_10002448;
    }
    // 0x10002434: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x10002438: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x1000243C: addu        $t9, $t6, $s0
    ctx->r25 = ADD32(ctx->r14, ctx->r16);
    // 0x10002440: b           L_10002450
    // 0x10002444: sw          $t9, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r25;
        goto L_10002450;
    // 0x10002444: sw          $t9, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r25;
L_10002448:
    // 0x10002448: b           L_100026E8
    // 0x1000244C: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_100026E8;
    // 0x1000244C: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_10002450:
    // 0x10002450: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x10002454: bgtzl       $s1, L_1000240C
    if (SIGNED(ctx->r17) > 0) {
        // 0x10002458: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_1000240C;
    }
    goto skip_7;
    // 0x10002458: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_7:
L_1000245C:
    // 0x1000245C: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
L_10002460:
    // 0x10002460: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x10002464: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x10002468: blezl       $t0, L_100024A0
    if (SIGNED(ctx->r8) <= 0) {
        // 0x1000246C: lw          $t4, 0xB8($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XB8);
            goto L_100024A0;
    }
    goto skip_8;
    // 0x1000246C: lw          $t4, 0xB8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB8);
    skip_8:
    // 0x10002470: jalr        $s4
    // 0x10002474: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_6;
    // 0x10002474: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_6:
    // 0x10002478: beq         $v0, $zero, L_10002494
    if (ctx->r2 == 0) {
        // 0x1000247C: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_10002494;
    }
    // 0x1000247C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x10002480: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x10002484: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x10002488: addu        $t2, $t1, $t8
    ctx->r10 = ADD32(ctx->r9, ctx->r24);
    // 0x1000248C: b           L_1000249C
    // 0x10002490: sw          $t2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r10;
        goto L_1000249C;
    // 0x10002490: sw          $t2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r10;
L_10002494:
    // 0x10002494: b           L_100026E8
    // 0x10002498: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_100026E8;
    // 0x10002498: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_1000249C:
    // 0x1000249C: lw          $t4, 0xB8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB8);
L_100024A0:
    // 0x100024A0: slt         $t5, $zero, $t4
    ctx->r13 = SIGNED(0) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x100024A4: beql        $t5, $zero, L_1000250C
    if (ctx->r13 == 0) {
        // 0x100024A8: lw          $t6, 0xBC($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XBC);
            goto L_1000250C;
    }
    goto skip_9;
    // 0x100024A8: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    skip_9:
    // 0x100024AC: beq         $t5, $zero, L_10002508
    if (ctx->r13 == 0) {
        // 0x100024B0: or          $s1, $t4, $zero
        ctx->r17 = ctx->r12 | 0;
            goto L_10002508;
    }
    // 0x100024B0: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x100024B4: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_100024B8:
    // 0x100024B8: bne         $at, $zero, L_100024C8
    if (ctx->r1 != 0) {
        // 0x100024BC: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_100024C8;
    }
    // 0x100024BC: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x100024C0: b           L_100024C8
    // 0x100024C4: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_100024C8;
    // 0x100024C4: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_100024C8:
    // 0x100024C8: blez        $s0, L_100024FC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x100024CC: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_100024FC;
    }
    // 0x100024CC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x100024D0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x100024D4: jalr        $s4
    // 0x100024D8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_7;
    // 0x100024D8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x100024DC: beq         $v0, $zero, L_100024F4
    if (ctx->r2 == 0) {
        // 0x100024E0: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_100024F4;
    }
    // 0x100024E0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x100024E4: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x100024E8: addu        $t7, $t3, $s0
    ctx->r15 = ADD32(ctx->r11, ctx->r16);
    // 0x100024EC: b           L_100024FC
    // 0x100024F0: sw          $t7, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r15;
        goto L_100024FC;
    // 0x100024F0: sw          $t7, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r15;
L_100024F4:
    // 0x100024F4: b           L_100026E8
    // 0x100024F8: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_100026E8;
    // 0x100024F8: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_100024FC:
    // 0x100024FC: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x10002500: bgtzl       $s1, L_100024B8
    if (SIGNED(ctx->r17) > 0) {
        // 0x10002504: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_100024B8;
    }
    goto skip_10;
    // 0x10002504: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_10:
L_10002508:
    // 0x10002508: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
L_1000250C:
    // 0x1000250C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x10002510: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x10002514: blezl       $t6, L_1000254C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x10002518: lw          $t8, 0xC0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XC0);
            goto L_1000254C;
    }
    goto skip_11;
    // 0x10002518: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    skip_11:
    // 0x1000251C: jalr        $s4
    // 0x10002520: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_8;
    // 0x10002520: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_8:
    // 0x10002524: beq         $v0, $zero, L_10002540
    if (ctx->r2 == 0) {
        // 0x10002528: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_10002540;
    }
    // 0x10002528: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1000252C: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x10002530: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x10002534: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x10002538: b           L_10002548
    // 0x1000253C: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
        goto L_10002548;
    // 0x1000253C: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
L_10002540:
    // 0x10002540: b           L_100026E8
    // 0x10002544: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_100026E8;
    // 0x10002544: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_10002548:
    // 0x10002548: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
L_1000254C:
    // 0x1000254C: slt         $t2, $zero, $t8
    ctx->r10 = SIGNED(0) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x10002550: beql        $t2, $zero, L_100025B8
    if (ctx->r10 == 0) {
        // 0x10002554: lw          $t3, 0xC4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XC4);
            goto L_100025B8;
    }
    goto skip_12;
    // 0x10002554: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
    skip_12:
    // 0x10002558: beq         $t2, $zero, L_100025B4
    if (ctx->r10 == 0) {
        // 0x1000255C: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_100025B4;
    }
    // 0x1000255C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x10002560: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_10002564:
    // 0x10002564: bne         $at, $zero, L_10002574
    if (ctx->r1 != 0) {
        // 0x10002568: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_10002574;
    }
    // 0x10002568: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x1000256C: b           L_10002574
    // 0x10002570: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_10002574;
    // 0x10002570: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_10002574:
    // 0x10002574: blez        $s0, L_100025A8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x10002578: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_100025A8;
    }
    // 0x10002578: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1000257C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x10002580: jalr        $s4
    // 0x10002584: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_9;
    // 0x10002584: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x10002588: beq         $v0, $zero, L_100025A0
    if (ctx->r2 == 0) {
        // 0x1000258C: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_100025A0;
    }
    // 0x1000258C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x10002590: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x10002594: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x10002598: b           L_100025A8
    // 0x1000259C: sw          $t5, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r13;
        goto L_100025A8;
    // 0x1000259C: sw          $t5, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r13;
L_100025A0:
    // 0x100025A0: b           L_100026E8
    // 0x100025A4: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_100026E8;
    // 0x100025A4: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_100025A8:
    // 0x100025A8: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x100025AC: bgtzl       $s1, L_10002564
    if (SIGNED(ctx->r17) > 0) {
        // 0x100025B0: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_10002564;
    }
    goto skip_13;
    // 0x100025B0: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_13:
L_100025B4:
    // 0x100025B4: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
L_100025B8:
    // 0x100025B8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x100025BC: lw          $t7, 0xB0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB0);
    // 0x100025C0: blez        $t3, L_100025F8
    if (SIGNED(ctx->r11) <= 0) {
        // 0x100025C4: lw          $t6, 0xBC($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XBC);
            goto L_100025F8;
    }
    // 0x100025C4: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x100025C8: addu        $a1, $t7, $t6
    ctx->r5 = ADD32(ctx->r15, ctx->r14);
    // 0x100025CC: jalr        $s4
    // 0x100025D0: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_10;
    // 0x100025D0: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_10:
    // 0x100025D4: beq         $v0, $zero, L_100025F0
    if (ctx->r2 == 0) {
        // 0x100025D8: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_100025F0;
    }
    // 0x100025D8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x100025DC: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x100025E0: lw          $t0, 0xC4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC4);
    // 0x100025E4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x100025E8: b           L_100025F8
    // 0x100025EC: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
        goto L_100025F8;
    // 0x100025EC: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
L_100025F0:
    // 0x100025F0: b           L_100026E8
    // 0x100025F4: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_100026E8;
    // 0x100025F4: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_100025F8:
    // 0x100025F8: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x100025FC: slt         $t2, $zero, $t8
    ctx->r10 = SIGNED(0) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x10002600: beql        $t2, $zero, L_10002668
    if (ctx->r10 == 0) {
        // 0x10002604: lw          $t7, 0xD8($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XD8);
            goto L_10002668;
    }
    goto skip_14;
    // 0x10002604: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    skip_14:
    // 0x10002608: beq         $t2, $zero, L_10002664
    if (ctx->r10 == 0) {
        // 0x1000260C: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_10002664;
    }
    // 0x1000260C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x10002610: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_10002614:
    // 0x10002614: bne         $at, $zero, L_10002624
    if (ctx->r1 != 0) {
        // 0x10002618: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_10002624;
    }
    // 0x10002618: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x1000261C: b           L_10002624
    // 0x10002620: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_10002624;
    // 0x10002620: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_10002624:
    // 0x10002624: blez        $s0, L_10002658
    if (SIGNED(ctx->r16) <= 0) {
        // 0x10002628: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_10002658;
    }
    // 0x10002628: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1000262C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x10002630: jalr        $s4
    // 0x10002634: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_11;
    // 0x10002634: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x10002638: beq         $v0, $zero, L_10002650
    if (ctx->r2 == 0) {
        // 0x1000263C: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_10002650;
    }
    // 0x1000263C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x10002640: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x10002644: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x10002648: b           L_10002658
    // 0x1000264C: sw          $t5, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r13;
        goto L_10002658;
    // 0x1000264C: sw          $t5, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r13;
L_10002650:
    // 0x10002650: b           L_100026E8
    // 0x10002654: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_100026E8;
    // 0x10002654: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_10002658:
    // 0x10002658: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x1000265C: bgtzl       $s1, L_10002614
    if (SIGNED(ctx->r17) > 0) {
        // 0x10002660: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_10002614;
    }
    goto skip_15;
    // 0x10002660: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_15:
L_10002664:
    // 0x10002664: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
L_10002668:
    // 0x10002668: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x1000266C: andi        $t6, $t7, 0x4
    ctx->r14 = ctx->r15 & 0X4;
    // 0x10002670: beq         $t6, $zero, L_100026DC
    if (ctx->r14 == 0) {
        // 0x10002674: slt         $t9, $zero, $t3
        ctx->r25 = SIGNED(0) < SIGNED(ctx->r11) ? 1 : 0;
            goto L_100026DC;
    }
    // 0x10002674: slt         $t9, $zero, $t3
    ctx->r25 = SIGNED(0) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x10002678: beql        $t9, $zero, L_100026E0
    if (ctx->r25 == 0) {
        // 0x1000267C: addiu       $a3, $s2, 0x1
        ctx->r7 = ADD32(ctx->r18, 0X1);
            goto L_100026E0;
    }
    goto skip_16;
    // 0x1000267C: addiu       $a3, $s2, 0x1
    ctx->r7 = ADD32(ctx->r18, 0X1);
    skip_16:
    // 0x10002680: beq         $t9, $zero, L_100026DC
    if (ctx->r25 == 0) {
        // 0x10002684: or          $s1, $t3, $zero
        ctx->r17 = ctx->r11 | 0;
            goto L_100026DC;
    }
    // 0x10002684: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x10002688: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_1000268C:
    // 0x1000268C: bne         $at, $zero, L_1000269C
    if (ctx->r1 != 0) {
        // 0x10002690: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_1000269C;
    }
    // 0x10002690: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x10002694: b           L_1000269C
    // 0x10002698: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_1000269C;
    // 0x10002698: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_1000269C:
    // 0x1000269C: blez        $s0, L_100026D0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x100026A0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_100026D0;
    }
    // 0x100026A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x100026A4: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x100026A8: jalr        $s4
    // 0x100026AC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_12;
    // 0x100026AC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_12:
    // 0x100026B0: beq         $v0, $zero, L_100026C8
    if (ctx->r2 == 0) {
        // 0x100026B4: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_100026C8;
    }
    // 0x100026B4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x100026B8: lw          $t0, 0xD4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD4);
    // 0x100026BC: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x100026C0: b           L_100026D0
    // 0x100026C4: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
        goto L_100026D0;
    // 0x100026C4: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
L_100026C8:
    // 0x100026C8: b           L_100026E8
    // 0x100026CC: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_100026E8;
    // 0x100026CC: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_100026D0:
    // 0x100026D0: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x100026D4: bgtzl       $s1, L_1000268C
    if (SIGNED(ctx->r17) > 0) {
        // 0x100026D8: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_1000268C;
    }
    goto skip_17;
    // 0x100026D8: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_17:
L_100026DC:
    // 0x100026DC: addiu       $a3, $s2, 0x1
    ctx->r7 = ADD32(ctx->r18, 0X1);
L_100026E0:
    // 0x100026E0: b           L_10002134
    // 0x100026E4: lbu         $s0, 0x0($a3)
    ctx->r16 = MEM_BU(ctx->r7, 0X0);
        goto L_10002134;
    // 0x100026E4: lbu         $s0, 0x0($a3)
    ctx->r16 = MEM_BU(ctx->r7, 0X0);
L_100026E8:
    // 0x100026E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x100026EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x100026F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x100026F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x100026F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x100026FC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x10002700: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x10002704: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x10002708: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x1000270C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x10002710: jr          $ra
    // 0x10002714: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    return;
    // 0x10002714: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_151220D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151220D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151220D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151220D8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151220DC: lw          $t6, 0x36C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X36C);
    // 0x151220E0: addiu       $a0, $a3, 0x2F8
    ctx->r4 = ADD32(ctx->r7, 0X2F8);
    // 0x151220E4: addiu       $a1, $a3, 0x2BC
    ctx->r5 = ADD32(ctx->r7, 0X2BC);
    // 0x151220E8: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x151220EC: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x151220F0: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x151220F4: bne         $t8, $zero, L_15122158
    if (ctx->r24 != 0) {
        // 0x151220F8: nop
    
            goto L_15122158;
    }
    // 0x151220F8: nop

    // 0x151220FC: jal         0x15048F90
    // 0x15122100: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_15048F90(rdram, ctx);
        goto after_0;
    // 0x15122100: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x15122104: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x15122108: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1512210C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x15122110: lwc1        $f4, 0x2C8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X2C8);
    // 0x15122114: lwc1        $f6, 0x2BC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X2BC);
    // 0x15122118: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1512211C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15122120: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15122124: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x15122128: lwc1        $f4, 0x2C4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X2C4);
    // 0x1512212C: lwc1        $f18, 0x2D0($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X2D0);
    // 0x15122130: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x15122134: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15122138: jal         0x15048FC8
    // 0x1512213C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_15048FC8(rdram, ctx);
        goto after_1;
    // 0x1512213C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x15122140: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x15122144: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15122148: swc1        $f0, 0x37C($a3)
    MEM_W(0X37C, ctx->r7) = ctx->f0.u32l;
    // 0x1512214C: lwc1        $f16, 0x3460($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3460);
    // 0x15122150: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15122154: swc1        $f18, 0x39C($a3)
    MEM_W(0X39C, ctx->r7) = ctx->f18.u32l;
L_15122158:
    // 0x15122158: jal         0x15122980
    // 0x1512215C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_15122980(rdram, ctx);
        goto after_2;
    // 0x1512215C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x15122160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15122164: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15122168: jr          $ra
    // 0x1512216C: nop

    return;
    return;
    // 0x1512216C: nop

;}
RECOMP_FUNC void func_150E4010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E4010: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150E4014: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150E4018: lw          $t6, 0x1B4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1B4);
    // 0x150E401C: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x150E4020: beql        $t6, $zero, L_150E4110
    if (ctx->r14 == 0) {
        // 0x150E4024: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150E4110;
    }
    goto skip_0;
    // 0x150E4024: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x150E4028: lwc1        $f12, 0x60($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X60);
    // 0x150E402C: lwc1        $f14, 0x64($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X64);
    // 0x150E4030: jal         0x150484A0
    // 0x150E4034: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_150484A0(rdram, ctx);
        goto after_0;
    // 0x150E4034: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x150E4038: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x150E403C: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x150E4040: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150E4044: lw          $a3, 0xA4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XA4);
    // 0x150E4048: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150E404C: lwc1        $f12, 0x30($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X30);
    // 0x150E4050: or          $t7, $a3, $at
    ctx->r15 = ctx->r7 | ctx->r1;
    // 0x150E4054: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E4058: lwc1        $f4, 0x1050($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1050);
    // 0x150E405C: lwc1        $f14, 0x34($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X34);
    // 0x150E4060: lw          $a2, 0x38($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X38);
    // 0x150E4064: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150E4068: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150E406C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150E4070: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x150E4074: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x150E4078: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150E407C: nop

    // 0x150E4080: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x150E4084: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150E4088: nop

    // 0x150E408C: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x150E4090: beql        $t0, $zero, L_150E40E0
    if (ctx->r8 == 0) {
        // 0x150E4094: mfc1        $t0, $f8
        ctx->r8 = (int32_t)ctx->f8.u32l;
            goto L_150E40E0;
    }
    goto skip_1;
    // 0x150E4094: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x150E4098: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150E409C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150E40A0: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150E40A4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150E40A8: nop

    // 0x150E40AC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x150E40B0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150E40B4: nop

    // 0x150E40B8: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x150E40BC: bne         $t0, $zero, L_150E40D4
    if (ctx->r8 != 0) {
        // 0x150E40C0: nop
    
            goto L_150E40D4;
    }
    // 0x150E40C0: nop

    // 0x150E40C4: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x150E40C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150E40CC: b           L_150E40EC
    // 0x150E40D0: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_150E40EC;
    // 0x150E40D0: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_150E40D4:
    // 0x150E40D4: b           L_150E40EC
    // 0x150E40D8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_150E40EC;
    // 0x150E40D8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150E40DC: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
L_150E40E0:
    // 0x150E40E0: nop

    // 0x150E40E4: bltz        $t0, L_150E40D4
    if (SIGNED(ctx->r8) < 0) {
        // 0x150E40E8: nop
    
            goto L_150E40D4;
    }
    // 0x150E40E8: nop

L_150E40EC:
    // 0x150E40EC: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x150E40F0: addiu       $t2, $t1, -0x4000
    ctx->r10 = ADD32(ctx->r9, -0X4000);
    // 0x150E40F4: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x150E40F8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x150E40FC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150E4100: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150E4104: jal         0x1505D1C4
    // 0x150E4108: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_1505D1C4(rdram, ctx);
        goto after_1;
    // 0x150E4108: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x150E410C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150E4110:
    // 0x150E4110: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150E4114: jr          $ra
    // 0x150E4118: nop

    return;
    return;
    // 0x150E4118: nop

;}

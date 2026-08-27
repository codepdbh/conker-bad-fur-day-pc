#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_151AA1D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AA1D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151AA1D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AA1D8: jal         0x1519F400
    // 0x151AA1DC: nop

    func_1519F400(rdram, ctx);
        goto after_0;
    // 0x151AA1DC: nop

    after_0:
    // 0x151AA1E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AA1E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151AA1E8: jr          $ra
    // 0x151AA1EC: nop

    return;
    return;
    // 0x151AA1EC: nop

;}
RECOMP_FUNC void func_1509C3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509C3A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509C3A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509C3A8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1509C3AC: lbu         $t6, 0x2E43($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2E43);
    // 0x1509C3B0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1509C3B4: beql        $t6, $zero, L_1509C408
    if (ctx->r14 == 0) {
        // 0x1509C3B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1509C408;
    }
    goto skip_0;
    // 0x1509C3B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1509C3BC: lbu         $t7, 0x2E44($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2E44);
    // 0x1509C3C0: bnel        $t7, $zero, L_1509C408
    if (ctx->r15 != 0) {
        // 0x1509C3C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1509C408;
    }
    goto skip_1;
    // 0x1509C3C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x1509C3C8: jal         0x1509C2A4
    // 0x1509C3CC: nop

    func_1509C2A4(rdram, ctx);
        goto after_0;
    // 0x1509C3CC: nop

    after_0:
    // 0x1509C3D0: beq         $v0, $zero, L_1509C404
    if (ctx->r2 == 0) {
        // 0x1509C3D4: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_1509C404;
    }
    // 0x1509C3D4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1509C3D8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1509C3DC: lbu         $t9, 0x35C4($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X35C4);
    // 0x1509C3E0: lw          $t8, -0x160C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X160C);
    // 0x1509C3E4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1509C3E8: bne         $t9, $zero, L_1509C3FC
    if (ctx->r25 != 0) {
        // 0x1509C3EC: sb          $t8, -0x1C21($at)
        MEM_B(-0X1C21, ctx->r1) = ctx->r24;
            goto L_1509C3FC;
    }
    // 0x1509C3EC: sb          $t8, -0x1C21($at)
    MEM_B(-0X1C21, ctx->r1) = ctx->r24;
    // 0x1509C3F0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x1509C3F4: jal         0x15007718
    // 0x1509C3F8: lb          $a0, -0x258($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X258);
    func_15007718(rdram, ctx);
        goto after_1;
    // 0x1509C3F8: lb          $a0, -0x258($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X258);
    after_1:
L_1509C3FC:
    // 0x1509C3FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509C400: sb          $zero, 0x2E43($at)
    MEM_B(0X2E43, ctx->r1) = 0;
L_1509C404:
    // 0x1509C404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509C408:
    // 0x1509C408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1509C40C: jr          $ra
    // 0x1509C410: nop

    return;
    return;
    // 0x1509C410: nop

;}
RECOMP_FUNC void func_151856A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151856A8: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151856AC: lwc1        $f12, 0x4($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151856B0: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x151856B4: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x151856B8: add.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x151856BC: lwc1        $f14, 0x0($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151856C0: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x151856C4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151856C8: sub.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x151856CC: sub.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x151856D0: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x151856D4: div.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f18.fl, ctx->f16.fl);
    // 0x151856D8: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151856DC: add.s       $f10, $f14, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x151856E0: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x151856E4: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x151856E8: lwc1        $f12, 0x4($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151856EC: sub.s       $f16, $f18, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x151856F0: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151856F4: add.s       $f8, $f12, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x151856F8: swc1        $f8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f8.u32l;
    // 0x151856FC: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x15185700: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x15185704: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x15185708: lh          $t6, 0xC($a1)
    ctx->r14 = MEM_H(ctx->r5, 0XC);
    // 0x1518570C: lh          $v0, 0xC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC);
    // 0x15185710: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x15185714: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x15185718: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x1518571C: addiu       $v0, $a2, 0x14
    ctx->r2 = ADD32(ctx->r6, 0X14);
    // 0x15185720: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15185724: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15185728: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1518572C: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x15185730: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15185734: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x15185738: nop

    // 0x1518573C: sh          $t9, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r25;
    // 0x15185740: lh          $t0, 0xE($a1)
    ctx->r8 = MEM_H(ctx->r5, 0XE);
    // 0x15185744: lh          $v1, 0xE($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XE);
    // 0x15185748: subu        $t1, $t0, $v1
    ctx->r9 = SUB32(ctx->r8, ctx->r3);
    // 0x1518574C: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x15185750: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x15185754: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15185758: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1518575C: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15185760: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15185764: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15185768: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x1518576C: nop

    // 0x15185770: sh          $t3, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r11;
    // 0x15185774: lh          $t4, 0x10($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X10);
    // 0x15185778: lh          $a3, 0x10($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X10);
    // 0x1518577C: subu        $t5, $t4, $a3
    ctx->r13 = SUB32(ctx->r12, ctx->r7);
    // 0x15185780: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x15185784: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x15185788: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1518578C: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15185790: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15185794: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x15185798: trunc.w.s   $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1518579C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x151857A0: nop

    // 0x151857A4: sh          $t7, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r15;
    // 0x151857A8: jr          $ra
    // 0x151857AC: nop

    return;
    return;
    // 0x151857AC: nop

;}
RECOMP_FUNC void func_1506BAD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506BAD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1506BADC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1506BAE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1506BAE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1506BAE8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506BAEC: lw          $v0, 0x1580($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1580);
    // 0x1506BAF0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506BAF4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506BAF8: bne         $v0, $zero, L_1506BB10
    if (ctx->r2 != 0) {
        // 0x1506BAFC: nop
    
            goto L_1506BB10;
    }
    // 0x1506BAFC: nop

    // 0x1506BB00: jal         0x10010A3C
    // 0x1506BB04: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_10010A3C(rdram, ctx);
        goto after_0;
    // 0x1506BB04: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x1506BB08: b           L_1506BB58
    // 0x1506BB0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506BB58;
    // 0x1506BB0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506BB10:
    // 0x1506BB10: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    // 0x1506BB14: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1506BB18: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x1506BB1C: lw          $t6, 0x318($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X318);
    // 0x1506BB20: addiu       $a2, $zero, 0x5DC0
    ctx->r6 = ADD32(0, 0X5DC0);
    // 0x1506BB24: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    // 0x1506BB28: bne         $t6, $zero, L_1506BB4C
    if (ctx->r14 != 0) {
        // 0x1506BB2C: addiu       $t8, $zero, 0x9C4
        ctx->r24 = ADD32(0, 0X9C4);
            goto L_1506BB4C;
    }
    // 0x1506BB2C: addiu       $t8, $zero, 0x9C4
    ctx->r24 = ADD32(0, 0X9C4);
    // 0x1506BB30: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x1506BB34: addiu       $a2, $zero, 0x6D60
    ctx->r6 = ADD32(0, 0X6D60);
    // 0x1506BB38: lh          $a3, 0x22($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X22);
    // 0x1506BB3C: jal         0x10010344
    // 0x1506BB40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_10010344(rdram, ctx);
        goto after_1;
    // 0x1506BB40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x1506BB44: b           L_1506BB58
    // 0x1506BB48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506BB58;
    // 0x1506BB48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506BB4C:
    // 0x1506BB4C: jal         0x10010344
    // 0x1506BB50: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_10010344(rdram, ctx);
        goto after_2;
    // 0x1506BB50: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x1506BB54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506BB58:
    // 0x1506BB58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1506BB5C: jr          $ra
    // 0x1506BB60: nop

    return;
    return;
    // 0x1506BB60: nop

;}
RECOMP_FUNC void func_151BE604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BE604: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151BE608: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151BE60C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151BE610: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151BE614: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x151BE618: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151BE61C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x151BE620: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x151BE624: addiu       $a2, $t6, 0x110
    ctx->r6 = ADD32(ctx->r14, 0X110);
    // 0x151BE628: addiu       $a3, $t6, 0x114
    ctx->r7 = ADD32(ctx->r14, 0X114);
    // 0x151BE62C: jal         0x15169850
    // 0x151BE630: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x151BE630: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x151BE634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151BE638: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151BE63C: jr          $ra
    // 0x151BE640: nop

    return;
    return;
    // 0x151BE640: nop

;}
RECOMP_FUNC void func_150098F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150098F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150098FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15009900: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15009904: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x15009908: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x1500990C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15009910: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15009914: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15009918: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1500991C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15009920: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15009924: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15009928: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x1500992C: jal         0x151623F4
    // 0x15009930: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151623F4(rdram, ctx);
        goto after_0;
    // 0x15009930: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x15009934: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15009938: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1500993C: jr          $ra
    // 0x15009940: nop

    return;
    return;
    // 0x15009940: nop

;}
RECOMP_FUNC void func_1508F0A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508F0A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1508F0A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1508F0AC: jal         0x1508F0D4
    // 0x1508F0B0: nop

    func_1508F0D4(rdram, ctx);
        goto after_0;
    // 0x1508F0B0: nop

    after_0:
    // 0x1508F0B4: jal         0x1508F9F4
    // 0x1508F0B8: nop

    func_1508F9F4(rdram, ctx);
        goto after_1;
    // 0x1508F0B8: nop

    after_1:
    // 0x1508F0BC: jal         0x1509093C
    // 0x1508F0C0: nop

    func_1509093C(rdram, ctx);
        goto after_2;
    // 0x1508F0C0: nop

    after_2:
    // 0x1508F0C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1508F0C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1508F0CC: jr          $ra
    // 0x1508F0D0: nop

    return;
    return;
    // 0x1508F0D0: nop

;}
RECOMP_FUNC void func_151254F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151254F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151254F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151254FC: lwc1        $f0, 0x352C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X352C);
    // 0x15125500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15125504: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15125508: lwc1        $f4, 0x380($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X380);
    // 0x1512550C: lwc1        $f8, 0x388($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X388);
    // 0x15125510: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15125514: nop

    // 0x15125518: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1512551C: swc1        $f6, 0x3A0($a0)
    MEM_W(0X3A0, ctx->r4) = ctx->f6.u32l;
    // 0x15125520: swc1        $f10, 0x398($a0)
    MEM_W(0X398, ctx->r4) = ctx->f10.u32l;
    // 0x15125524: jal         0x15124AB4
    // 0x15125528: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15124AB4(rdram, ctx);
        goto after_0;
    // 0x15125528: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1512552C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15125530: jal         0x151239CC
    // 0x15125534: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_151239CC(rdram, ctx);
        goto after_1;
    // 0x15125534: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x15125538: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1512553C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15125540: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15125544: lw          $t6, 0x3D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3D4);
    // 0x15125548: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x1512554C: sb          $zero, 0x198($t6)
    MEM_B(0X198, ctx->r14) = 0;
    // 0x15125550: sh          $zero, 0x73C($a0)
    MEM_H(0X73C, ctx->r4) = 0;
    // 0x15125554: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x15125558: swc1        $f16, 0x670($a0)
    MEM_W(0X670, ctx->r4) = ctx->f16.u32l;
    // 0x1512555C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15125560: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15125564: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15125568: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1512556C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15125570: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15125574: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15125578: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1512557C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15125580: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x15125584: sw          $t0, 0x3D0($a0)
    MEM_W(0X3D0, ctx->r4) = ctx->r8;
    // 0x15125588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1512558C: jr          $ra
    // 0x15125590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15125590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_15063C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15063C60: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15063C64: lw          $t6, -0x3D30($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D30);
    // 0x15063C68: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15063C6C: addiu       $v1, $v1, -0x3A04
    ctx->r3 = ADD32(ctx->r3, -0X3A04);
    // 0x15063C70: beq         $t6, $zero, L_15063CDC
    if (ctx->r14 == 0) {
        // 0x15063C74: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_15063CDC;
    }
    // 0x15063C74: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15063C78: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15063C7C: lbu         $t7, -0x3D2C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3D2C);
    // 0x15063C80: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15063C84: addiu       $a2, $a2, -0x3D30
    ctx->r6 = ADD32(ctx->r6, -0X3D30);
    // 0x15063C88: bne         $a1, $t7, L_15063CDC
    if (ctx->r5 != ctx->r15) {
        // 0x15063C8C: addiu       $a3, $zero, 0x32C
        ctx->r7 = ADD32(0, 0X32C);
            goto L_15063CDC;
    }
    // 0x15063C8C: addiu       $a3, $zero, 0x32C
    ctx->r7 = ADD32(0, 0X32C);
    // 0x15063C90: subu        $t8, $a0, $a2
    ctx->r24 = SUB32(ctx->r4, ctx->r6);
    // 0x15063C94: div         $zero, $t8, $a3
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r7)));
    // 0x15063C98: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15063C9C: lbu         $t1, -0x3CCB($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X3CCB);
    // 0x15063CA0: mflo        $t9
    ctx->r25 = lo;
    // 0x15063CA4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x15063CA8: bne         $a3, $zero, L_15063CB4
    if (ctx->r7 != 0) {
        // 0x15063CAC: nop
    
            goto L_15063CB4;
    }
    // 0x15063CAC: nop

    // 0x15063CB0: break       7
    do_break(352730288);
L_15063CB4:
    // 0x15063CB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15063CB8: bne         $a3, $at, L_15063CCC
    if (ctx->r7 != ctx->r1) {
        // 0x15063CBC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15063CCC;
    }
    // 0x15063CBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15063CC0: bne         $t8, $at, L_15063CCC
    if (ctx->r24 != ctx->r1) {
        // 0x15063CC4: nop
    
            goto L_15063CCC;
    }
    // 0x15063CC4: nop

    // 0x15063CC8: break       6
    do_break(352730312);
L_15063CCC:
    // 0x15063CCC: bne         $t0, $t1, L_15063CDC
    if (ctx->r8 != ctx->r9) {
        // 0x15063CD0: nop
    
            goto L_15063CDC;
    }
    // 0x15063CD0: nop

    // 0x15063CD4: jr          $ra
    // 0x15063CD8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    return;
    // 0x15063CD8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_15063CDC:
    // 0x15063CDC: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15063CE0: addiu       $a2, $a2, -0x3D30
    ctx->r6 = ADD32(ctx->r6, -0X3D30);
    // 0x15063CE4: addiu       $a3, $zero, 0x32C
    ctx->r7 = ADD32(0, 0X32C);
    // 0x15063CE8: addiu       $v0, $v0, 0x121C
    ctx->r2 = ADD32(ctx->r2, 0X121C);
    // 0x15063CEC: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
L_15063CF0:
    // 0x15063CF0: beql        $t2, $zero, L_15063D50
    if (ctx->r10 == 0) {
        // 0x15063CF4: lw          $t8, 0x32C($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X32C);
            goto L_15063D50;
    }
    goto skip_0;
    // 0x15063CF4: lw          $t8, 0x32C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X32C);
    skip_0:
    // 0x15063CF8: lbu         $t3, 0x4($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X4);
    // 0x15063CFC: bnel        $a1, $t3, L_15063D50
    if (ctx->r5 != ctx->r11) {
        // 0x15063D00: lw          $t8, 0x32C($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X32C);
            goto L_15063D50;
    }
    goto skip_1;
    // 0x15063D00: lw          $t8, 0x32C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X32C);
    skip_1:
    // 0x15063D04: subu        $t4, $a0, $a2
    ctx->r12 = SUB32(ctx->r4, ctx->r6);
    // 0x15063D08: div         $zero, $t4, $a3
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r7)));
    // 0x15063D0C: lbu         $t7, 0x65($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X65);
    // 0x15063D10: mflo        $t5
    ctx->r13 = lo;
    // 0x15063D14: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x15063D18: bne         $a3, $zero, L_15063D24
    if (ctx->r7 != 0) {
        // 0x15063D1C: nop
    
            goto L_15063D24;
    }
    // 0x15063D1C: nop

    // 0x15063D20: break       7
    do_break(352730400);
L_15063D24:
    // 0x15063D24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15063D28: bne         $a3, $at, L_15063D3C
    if (ctx->r7 != ctx->r1) {
        // 0x15063D2C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15063D3C;
    }
    // 0x15063D2C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15063D30: bne         $t4, $at, L_15063D3C
    if (ctx->r12 != ctx->r1) {
        // 0x15063D34: nop
    
            goto L_15063D3C;
    }
    // 0x15063D34: nop

    // 0x15063D38: break       6
    do_break(352730424);
L_15063D3C:
    // 0x15063D3C: bnel        $t6, $t7, L_15063D50
    if (ctx->r14 != ctx->r15) {
        // 0x15063D40: lw          $t8, 0x32C($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X32C);
            goto L_15063D50;
    }
    goto skip_2;
    // 0x15063D40: lw          $t8, 0x32C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X32C);
    skip_2:
    // 0x15063D44: jr          $ra
    // 0x15063D48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x15063D48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15063D4C: lw          $t8, 0x32C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X32C);
L_15063D50:
    // 0x15063D50: beql        $t8, $zero, L_15063DB0
    if (ctx->r24 == 0) {
        // 0x15063D54: lw          $t4, 0x658($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X658);
            goto L_15063DB0;
    }
    goto skip_3;
    // 0x15063D54: lw          $t4, 0x658($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X658);
    skip_3:
    // 0x15063D58: lbu         $t9, 0x330($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X330);
    // 0x15063D5C: bnel        $a1, $t9, L_15063DB0
    if (ctx->r5 != ctx->r25) {
        // 0x15063D60: lw          $t4, 0x658($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X658);
            goto L_15063DB0;
    }
    goto skip_4;
    // 0x15063D60: lw          $t4, 0x658($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X658);
    skip_4:
    // 0x15063D64: subu        $t0, $a0, $a2
    ctx->r8 = SUB32(ctx->r4, ctx->r6);
    // 0x15063D68: div         $zero, $t0, $a3
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r7)));
    // 0x15063D6C: lbu         $t3, 0x391($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X391);
    // 0x15063D70: mflo        $t1
    ctx->r9 = lo;
    // 0x15063D74: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x15063D78: bne         $a3, $zero, L_15063D84
    if (ctx->r7 != 0) {
        // 0x15063D7C: nop
    
            goto L_15063D84;
    }
    // 0x15063D7C: nop

    // 0x15063D80: break       7
    do_break(352730496);
L_15063D84:
    // 0x15063D84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15063D88: bne         $a3, $at, L_15063D9C
    if (ctx->r7 != ctx->r1) {
        // 0x15063D8C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15063D9C;
    }
    // 0x15063D8C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15063D90: bne         $t0, $at, L_15063D9C
    if (ctx->r8 != ctx->r1) {
        // 0x15063D94: nop
    
            goto L_15063D9C;
    }
    // 0x15063D94: nop

    // 0x15063D98: break       6
    do_break(352730520);
L_15063D9C:
    // 0x15063D9C: bnel        $t2, $t3, L_15063DB0
    if (ctx->r10 != ctx->r11) {
        // 0x15063DA0: lw          $t4, 0x658($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X658);
            goto L_15063DB0;
    }
    goto skip_5;
    // 0x15063DA0: lw          $t4, 0x658($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X658);
    skip_5:
    // 0x15063DA4: jr          $ra
    // 0x15063DA8: addiu       $v0, $v1, 0x32C
    ctx->r2 = ADD32(ctx->r3, 0X32C);
    return;
    return;
    // 0x15063DA8: addiu       $v0, $v1, 0x32C
    ctx->r2 = ADD32(ctx->r3, 0X32C);
    // 0x15063DAC: lw          $t4, 0x658($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X658);
L_15063DB0:
    // 0x15063DB0: beql        $t4, $zero, L_15063E10
    if (ctx->r12 == 0) {
        // 0x15063DB4: lw          $t0, 0x984($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X984);
            goto L_15063E10;
    }
    goto skip_6;
    // 0x15063DB4: lw          $t0, 0x984($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X984);
    skip_6:
    // 0x15063DB8: lbu         $t5, 0x65C($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X65C);
    // 0x15063DBC: bnel        $a1, $t5, L_15063E10
    if (ctx->r5 != ctx->r13) {
        // 0x15063DC0: lw          $t0, 0x984($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X984);
            goto L_15063E10;
    }
    goto skip_7;
    // 0x15063DC0: lw          $t0, 0x984($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X984);
    skip_7:
    // 0x15063DC4: subu        $t6, $a0, $a2
    ctx->r14 = SUB32(ctx->r4, ctx->r6);
    // 0x15063DC8: div         $zero, $t6, $a3
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r7)));
    // 0x15063DCC: lbu         $t9, 0x6BD($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X6BD);
    // 0x15063DD0: mflo        $t7
    ctx->r15 = lo;
    // 0x15063DD4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x15063DD8: bne         $a3, $zero, L_15063DE4
    if (ctx->r7 != 0) {
        // 0x15063DDC: nop
    
            goto L_15063DE4;
    }
    // 0x15063DDC: nop

    // 0x15063DE0: break       7
    do_break(352730592);
L_15063DE4:
    // 0x15063DE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15063DE8: bne         $a3, $at, L_15063DFC
    if (ctx->r7 != ctx->r1) {
        // 0x15063DEC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15063DFC;
    }
    // 0x15063DEC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15063DF0: bne         $t6, $at, L_15063DFC
    if (ctx->r14 != ctx->r1) {
        // 0x15063DF4: nop
    
            goto L_15063DFC;
    }
    // 0x15063DF4: nop

    // 0x15063DF8: break       6
    do_break(352730616);
L_15063DFC:
    // 0x15063DFC: bnel        $t8, $t9, L_15063E10
    if (ctx->r24 != ctx->r25) {
        // 0x15063E00: lw          $t0, 0x984($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X984);
            goto L_15063E10;
    }
    goto skip_8;
    // 0x15063E00: lw          $t0, 0x984($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X984);
    skip_8:
    // 0x15063E04: jr          $ra
    // 0x15063E08: addiu       $v0, $v1, 0x658
    ctx->r2 = ADD32(ctx->r3, 0X658);
    return;
    return;
    // 0x15063E08: addiu       $v0, $v1, 0x658
    ctx->r2 = ADD32(ctx->r3, 0X658);
    // 0x15063E0C: lw          $t0, 0x984($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X984);
L_15063E10:
    // 0x15063E10: beql        $t0, $zero, L_15063E70
    if (ctx->r8 == 0) {
        // 0x15063E14: addiu       $v1, $v1, 0xCB0
        ctx->r3 = ADD32(ctx->r3, 0XCB0);
            goto L_15063E70;
    }
    goto skip_9;
    // 0x15063E14: addiu       $v1, $v1, 0xCB0
    ctx->r3 = ADD32(ctx->r3, 0XCB0);
    skip_9:
    // 0x15063E18: lbu         $t1, 0x988($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X988);
    // 0x15063E1C: subu        $t2, $a0, $a2
    ctx->r10 = SUB32(ctx->r4, ctx->r6);
    // 0x15063E20: bnel        $a1, $t1, L_15063E70
    if (ctx->r5 != ctx->r9) {
        // 0x15063E24: addiu       $v1, $v1, 0xCB0
        ctx->r3 = ADD32(ctx->r3, 0XCB0);
            goto L_15063E70;
    }
    goto skip_10;
    // 0x15063E24: addiu       $v1, $v1, 0xCB0
    ctx->r3 = ADD32(ctx->r3, 0XCB0);
    skip_10:
    // 0x15063E28: div         $zero, $t2, $a3
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r7)));
    // 0x15063E2C: lbu         $t5, 0x9E9($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X9E9);
    // 0x15063E30: mflo        $t3
    ctx->r11 = lo;
    // 0x15063E34: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x15063E38: bne         $a3, $zero, L_15063E44
    if (ctx->r7 != 0) {
        // 0x15063E3C: nop
    
            goto L_15063E44;
    }
    // 0x15063E3C: nop

    // 0x15063E40: break       7
    do_break(352730688);
L_15063E44:
    // 0x15063E44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15063E48: bne         $a3, $at, L_15063E5C
    if (ctx->r7 != ctx->r1) {
        // 0x15063E4C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15063E5C;
    }
    // 0x15063E4C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15063E50: bne         $t2, $at, L_15063E5C
    if (ctx->r10 != ctx->r1) {
        // 0x15063E54: nop
    
            goto L_15063E5C;
    }
    // 0x15063E54: nop

    // 0x15063E58: break       6
    do_break(352730712);
L_15063E5C:
    // 0x15063E5C: bnel        $t4, $t5, L_15063E70
    if (ctx->r12 != ctx->r13) {
        // 0x15063E60: addiu       $v1, $v1, 0xCB0
        ctx->r3 = ADD32(ctx->r3, 0XCB0);
            goto L_15063E70;
    }
    goto skip_11;
    // 0x15063E60: addiu       $v1, $v1, 0xCB0
    ctx->r3 = ADD32(ctx->r3, 0XCB0);
    skip_11:
    // 0x15063E64: jr          $ra
    // 0x15063E68: addiu       $v0, $v1, 0x984
    ctx->r2 = ADD32(ctx->r3, 0X984);
    return;
    return;
    // 0x15063E68: addiu       $v0, $v1, 0x984
    ctx->r2 = ADD32(ctx->r3, 0X984);
    // 0x15063E6C: addiu       $v1, $v1, 0xCB0
    ctx->r3 = ADD32(ctx->r3, 0XCB0);
L_15063E70:
    // 0x15063E70: bnel        $v1, $v0, L_15063CF0
    if (ctx->r3 != ctx->r2) {
        // 0x15063E74: lw          $t2, 0x0($v1)
        ctx->r10 = MEM_W(ctx->r3, 0X0);
            goto L_15063CF0;
    }
    goto skip_12;
    // 0x15063E74: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    skip_12:
    // 0x15063E78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15063E7C: jr          $ra
    // 0x15063E80: nop

    return;
    return;
    // 0x15063E80: nop

;}
RECOMP_FUNC void func_151DB1EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DB1EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151DB1F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151DB1F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151DB1F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151DB1FC: jal         0x150ADA20
    // 0x151DB200: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151DB200: nop

    after_0:
    // 0x151DB204: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151DB208: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB20C: mfhi        $t6
    ctx->r14 = hi;
    // 0x151DB210: addiu       $t7, $t6, 0x50
    ctx->r15 = ADD32(ctx->r14, 0X50);
    // 0x151DB214: jal         0x150ADA20
    // 0x151DB218: sb          $t7, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151DB218: sb          $t7, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r15;
    after_1:
    // 0x151DB21C: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151DB220: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB224: mfhi        $t8
    ctx->r24 = hi;
    // 0x151DB228: addiu       $t9, $t8, 0x50
    ctx->r25 = ADD32(ctx->r24, 0X50);
    // 0x151DB22C: sb          $t9, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r25;
    // 0x151DB230: jal         0x150ADA20
    // 0x151DB234: sb          $zero, 0x16($s0)
    MEM_B(0X16, ctx->r16) = 0;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151DB234: sb          $zero, 0x16($s0)
    MEM_B(0X16, ctx->r16) = 0;
    after_2:
    // 0x151DB238: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x151DB23C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB240: mfhi        $t0
    ctx->r8 = hi;
    // 0x151DB244: addiu       $t1, $t0, 0xB4
    ctx->r9 = ADD32(ctx->r8, 0XB4);
    // 0x151DB248: jal         0x150ADA20
    // 0x151DB24C: sb          $t1, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151DB24C: sb          $t1, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r9;
    after_3:
    // 0x151DB250: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x151DB254: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB258: mfhi        $t2
    ctx->r10 = hi;
    // 0x151DB25C: addiu       $t3, $t2, 0xB4
    ctx->r11 = ADD32(ctx->r10, 0XB4);
    // 0x151DB260: sb          $t3, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r11;
    // 0x151DB264: sb          $zero, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = 0;
    // 0x151DB268: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151DB26C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151DB270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151DB274: jr          $ra
    // 0x151DB278: nop

    return;
    return;
    // 0x151DB278: nop

;}
RECOMP_FUNC void func_15161238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15161238: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x1516123C: bnel        $t6, $zero, L_15161250
    if (ctx->r14 != 0) {
        // 0x15161240: lbu         $t7, 0x4($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X4);
            goto L_15161250;
    }
    goto skip_0;
    // 0x15161240: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    skip_0:
    // 0x15161244: jr          $ra
    // 0x15161248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15161248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1516124C: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
L_15161250:
    // 0x15161250: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15161254: bne         $t7, $at, L_15161264
    if (ctx->r15 != ctx->r1) {
        // 0x15161258: nop
    
            goto L_15161264;
    }
    // 0x15161258: nop

    // 0x1516125C: jr          $ra
    // 0x15161260: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15161260: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15161264:
    // 0x15161264: bne         $a0, $a1, L_15161274
    if (ctx->r4 != ctx->r5) {
        // 0x15161268: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15161274;
    }
    // 0x15161268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1516126C: jr          $ra
    // 0x15161270: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15161270: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15161274:
    // 0x15161274: jr          $ra
    // 0x15161278: nop

    return;
    return;
    // 0x15161278: nop

;}
RECOMP_FUNC void func_10018D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10018D00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10018D04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10018D08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10018D0C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x10018D10: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x10018D14: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x10018D18: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x10018D1C: sh          $t7, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r15;
    // 0x10018D20: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x10018D24: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x10018D28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10018D2C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x10018D30: jal         0x1001C224
    // 0x10018D34: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x10018D34: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_0:
    // 0x10018D38: b           L_10018D40
    // 0x10018D3C: nop

        goto L_10018D40;
    // 0x10018D3C: nop

L_10018D40:
    // 0x10018D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10018D44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10018D48: jr          $ra
    // 0x10018D4C: nop

    return;
    return;
    // 0x10018D4C: nop

;}
RECOMP_FUNC void func_150DE12C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DE12C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x150DE130: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150DE134: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150DE138: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150DE13C: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x150DE140: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x150DE144: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x150DE148: lw          $t6, 0x98($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X98);
    // 0x150DE14C: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x150DE150: lw          $t7, 0x94($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X94);
    // 0x150DE154: jal         0x150ADA68
    // 0x150DE158: sw          $t7, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r15;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150DE158: sw          $t7, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r15;
    after_0:
    // 0x150DE15C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150DE160: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150DE164: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x150DE168: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x150DE16C: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150DE170: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x150DE174: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x150DE178: jal         0x150ADA20
    // 0x150DE17C: sb          $t8, 0x20($t9)
    MEM_B(0X20, ctx->r25) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150DE17C: sb          $t8, 0x20($t9)
    MEM_B(0X20, ctx->r25) = ctx->r24;
    after_1:
    // 0x150DE180: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x150DE184: beq         $v1, $zero, L_150DE1A0
    if (ctx->r3 == 0) {
        // 0x150DE188: addiu       $t2, $zero, 0x11
        ctx->r10 = ADD32(0, 0X11);
            goto L_150DE1A0;
    }
    // 0x150DE188: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x150DE18C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150DE190: beq         $v1, $at, L_150DE1AC
    if (ctx->r3 == ctx->r1) {
        // 0x150DE194: addiu       $t1, $zero, 0x1C
        ctx->r9 = ADD32(0, 0X1C);
            goto L_150DE1AC;
    }
    // 0x150DE194: addiu       $t1, $zero, 0x1C
    ctx->r9 = ADD32(0, 0X1C);
    // 0x150DE198: b           L_150DE1B4
    // 0x150DE19C: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
        goto L_150DE1B4;
    // 0x150DE19C: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
L_150DE1A0:
    // 0x150DE1A0: addiu       $t0, $zero, 0x1B
    ctx->r8 = ADD32(0, 0X1B);
    // 0x150DE1A4: b           L_150DE1B0
    // 0x150DE1A8: sb          $t0, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r8;
        goto L_150DE1B0;
    // 0x150DE1A8: sb          $t0, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r8;
L_150DE1AC:
    // 0x150DE1AC: sb          $t1, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r9;
L_150DE1B0:
    // 0x150DE1B0: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
L_150DE1B4:
    // 0x150DE1B4: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x150DE1B8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150DE1BC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150DE1C0: addiu       $t6, $zero, 0xAA
    ctx->r14 = ADD32(0, 0XAA);
    // 0x150DE1C4: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x150DE1C8: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x150DE1CC: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x150DE1D0: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x150DE1D4: sh          $t3, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r11;
    // 0x150DE1D8: sb          $t4, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r12;
    // 0x150DE1DC: sb          $t5, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r13;
    // 0x150DE1E0: sb          $zero, 0x72($sp)
    MEM_B(0X72, ctx->r29) = 0;
    // 0x150DE1E4: sb          $zero, 0x73($sp)
    MEM_B(0X73, ctx->r29) = 0;
    // 0x150DE1E8: sb          $zero, 0x74($sp)
    MEM_B(0X74, ctx->r29) = 0;
    // 0x150DE1EC: sb          $t6, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r14;
    // 0x150DE1F0: jal         0x150ADA20
    // 0x150DE1F4: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150DE1F4: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    after_2:
    // 0x150DE1F8: jal         0x150ADA20
    // 0x150DE1FC: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150DE1FC: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_3:
    // 0x150DE200: jal         0x150ADA20
    // 0x150DE204: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150DE204: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_4:
    // 0x150DE208: lb          $t9, 0x2D($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X2D);
    // 0x150DE20C: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x150DE210: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150DE214: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x150DE218: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x150DE21C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150DE220: addu        $v1, $t8, $t0
    ctx->r3 = ADD32(ctx->r24, ctx->r8);
    // 0x150DE224: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150DE228: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x150DE22C: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x150DE230: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x150DE234: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150DE238: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150DE23C: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x150DE240: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x150DE244: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x150DE248: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x150DE24C: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x150DE250: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x150DE254: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x150DE258: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150DE25C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x150DE260: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x150DE264: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150DE268: lbu         $t7, 0xC($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC);
    // 0x150DE26C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x150DE270: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x150DE274: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x150DE278: lbu         $t9, 0x1($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1);
    // 0x150DE27C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150DE280: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x150DE284: jal         0x1513C73C
    // 0x150DE288: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    func_1513C73C(rdram, ctx);
        goto after_5;
    // 0x150DE288: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    after_5:
    // 0x150DE28C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150DE290: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x150DE294: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x150DE298: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x150DE29C: jr          $ra
    // 0x150DE2A0: nop

    return;
    return;
    // 0x150DE2A0: nop

;}
RECOMP_FUNC void func_150F97EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F97EC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150F97F0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150F97F4: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x150F97F8: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x150F97FC: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x150F9800: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x150F9804: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150F9808: addiu       $t8, $t8, 0x1C48
    ctx->r24 = ADD32(ctx->r24, 0X1C48);
    // 0x150F980C: lw          $t7, 0x1D4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D4);
    // 0x150F9810: addiu       $t9, $sp, 0x64
    ctx->r25 = ADD32(ctx->r29, 0X64);
    // 0x150F9814: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x150F9818: beq         $t7, $zero, L_150F9940
    if (ctx->r15 == 0) {
        // 0x150F981C: addiu       $a0, $sp, 0x54
        ctx->r4 = ADD32(ctx->r29, 0X54);
            goto L_150F9940;
    }
    // 0x150F981C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x150F9820: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x150F9824: lbu         $t2, -0x74B0($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X74B0);
    // 0x150F9828: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x150F982C: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x150F9830: lw          $t1, 0x1D4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1D4);
    // 0x150F9834: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x150F9838: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x150F983C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150F9840: jal         0x15145EA4
    // 0x150F9844: addu        $a2, $t1, $t3
    ctx->r6 = ADD32(ctx->r9, ctx->r11);
    func_15145EA4(rdram, ctx);
        goto after_0;
    // 0x150F9844: addu        $a2, $t1, $t3
    ctx->r6 = ADD32(ctx->r9, ctx->r11);
    after_0:
    // 0x150F9848: jal         0x150ADA68
    // 0x150F984C: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150F984C: nop

    after_1:
    // 0x150F9850: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F9854: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F9858: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150F985C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F9860: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150F9864: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150F9868: jal         0x150ADA68
    // 0x150F986C: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150F986C: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x150F9870: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x150F9874: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F9878: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x150F987C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F9880: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150F9884: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150F9888: jal         0x150ADA20
    // 0x150F988C: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150F988C: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x150F9890: jal         0x150ADA20
    // 0x150F9894: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150F9894: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_4:
    // 0x150F9898: jal         0x150ADA68
    // 0x150F989C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150F989C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_5:
    // 0x150F98A0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x150F98A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150F98A8: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x150F98AC: divu        $zero, $t5, $at
    lo = S32(U32(ctx->r13) / U32(ctx->r1)); hi = S32(U32(ctx->r13) % U32(ctx->r1));
    // 0x150F98B0: addiu       $at, $zero, 0x9C
    ctx->r1 = ADD32(0, 0X9C);
    // 0x150F98B4: mfhi        $t6
    ctx->r14 = hi;
    // 0x150F98B8: addiu       $t4, $sp, 0x58
    ctx->r12 = ADD32(ctx->r29, 0X58);
    // 0x150F98BC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150F98C0: divu        $zero, $t8, $at
    lo = S32(U32(ctx->r24) / U32(ctx->r1)); hi = S32(U32(ctx->r24) % U32(ctx->r1));
    // 0x150F98C4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150F98C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F98CC: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x150F98D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F98D4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150F98D8: lbu         $t4, 0x77($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X77);
    // 0x150F98DC: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x150F98E0: mfhi        $t9
    ctx->r25 = hi;
    // 0x150F98E4: addiu       $t0, $t9, 0x64
    ctx->r8 = ADD32(ctx->r25, 0X64);
    // 0x150F98E8: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x150F98EC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x150F98F0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150F98F4: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150F98F8: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x150F98FC: addiu       $t2, $sp, 0x64
    ctx->r10 = ADD32(ctx->r29, 0X64);
    // 0x150F9900: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150F9904: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150F9908: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x150F990C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x150F9910: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x150F9914: addiu       $a3, $a3, 0x1C54
    ctx->r7 = ADD32(ctx->r7, 0X1C54);
    // 0x150F9918: addiu       $a2, $a2, 0x1C48
    ctx->r6 = ADD32(ctx->r6, 0X1C48);
    // 0x150F991C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x150F9920: lbu         $a1, -0x74B0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X74B0);
    // 0x150F9924: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150F9928: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150F992C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x150F9930: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150F9934: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x150F9938: jal         0x15102B38
    // 0x150F993C: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    func_15102B38(rdram, ctx);
        goto after_6;
    // 0x150F993C: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    after_6:
L_150F9940:
    // 0x150F9940: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150F9944: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x150F9948: jr          $ra
    // 0x150F994C: nop

    return;
    return;
    // 0x150F994C: nop

;}
RECOMP_FUNC void func_1508434C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508434C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15084350: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15084354: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15084358: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1508435C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15084360: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15084364: lbu         $s1, 0x2C9($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X2C9);
    // 0x15084368: bne         $s1, $zero, L_15084374
    if (ctx->r17 != 0) {
        // 0x1508436C: nop
    
            goto L_15084374;
    }
    // 0x1508436C: nop

    // 0x15084370: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_15084374:
    // 0x15084374: blez        $s1, L_15084394
    if (SIGNED(ctx->r17) <= 0) {
        // 0x15084378: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_15084394;
    }
    // 0x15084378: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1508437C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_15084380:
    // 0x15084380: jal         0x150843AC
    // 0x15084384: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_150843AC(rdram, ctx);
        goto after_0;
    // 0x15084384: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x15084388: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1508438C: bnel        $s0, $s1, L_15084380
    if (ctx->r16 != ctx->r17) {
        // 0x15084390: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_15084380;
    }
    goto skip_0;
    // 0x15084390: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
L_15084394:
    // 0x15084394: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15084398: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1508439C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150843A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150843A4: jr          $ra
    // 0x150843A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x150843A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1517D690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517D690: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1517D694: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x1517D698: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x1517D69C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1517D6A0: addiu       $v1, $v1, -0x22E4
    ctx->r3 = ADD32(ctx->r3, -0X22E4);
    // 0x1517D6A4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x1517D6A8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1517D6AC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1517D6B0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x1517D6B4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x1517D6B8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x1517D6BC: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x1517D6C0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1517D6C4: lw          $t6, -0x22A8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X22A8);
    // 0x1517D6C8: addiu       $t8, $t7, 0x5
    ctx->r24 = ADD32(ctx->r15, 0X5);
    // 0x1517D6CC: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
    // 0x1517D6D0: slti        $at, $v0, 0xC8
    ctx->r1 = SIGNED(ctx->r2) < 0XC8 ? 1 : 0;
    // 0x1517D6D4: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x1517D6D8: bne         $at, $zero, L_1517D6E8
    if (ctx->r1 != 0) {
        // 0x1517D6DC: sw          $t6, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r14;
            goto L_1517D6E8;
    }
    // 0x1517D6DC: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x1517D6E0: addiu       $t9, $v0, -0xC8
    ctx->r25 = ADD32(ctx->r2, -0XC8);
    // 0x1517D6E4: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
L_1517D6E8:
    // 0x1517D6E8: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x1517D6EC: addiu       $s0, $s0, -0x3150
    ctx->r16 = ADD32(ctx->r16, -0X3150);
    // 0x1517D6F0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x1517D6F4: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x1517D6F8: addiu       $s3, $s3, -0x22D8
    ctx->r19 = ADD32(ctx->r19, -0X22D8);
    // 0x1517D6FC: beq         $v0, $zero, L_1517D780
    if (ctx->r2 == 0) {
        // 0x1517D700: addiu       $s4, $zero, 0x280
        ctx->r20 = ADD32(0, 0X280);
            goto L_1517D780;
    }
    // 0x1517D700: addiu       $s4, $zero, 0x280
    ctx->r20 = ADD32(0, 0X280);
    // 0x1517D704: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
L_1517D708:
    // 0x1517D708: beq         $s1, $zero, L_1517D774
    if (ctx->r17 == 0) {
        // 0x1517D70C: sb          $t0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r8;
            goto L_1517D774;
    }
    // 0x1517D70C: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x1517D710: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x1517D714: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x1517D718: addu        $v0, $s3, $t2
    ctx->r2 = ADD32(ctx->r19, ctx->r10);
    // 0x1517D71C: lbu         $t7, 0x6($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X6);
    // 0x1517D720: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1517D724: lhu         $t3, 0x8($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X8);
    // 0x1517D728: multu       $t7, $s4
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1517D72C: lhu         $t4, 0xA($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XA);
    // 0x1517D730: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x1517D734: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x1517D738: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x1517D73C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x1517D740: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x1517D744: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x1517D748: lh          $a3, 0x4($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X4);
    // 0x1517D74C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1517D750: mflo        $t8
    ctx->r24 = lo;
    // 0x1517D754: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x1517D758: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x1517D75C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x1517D760: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1517D764: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1517D768: jal         0x1517D074
    // 0x1517D76C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    func_1517D074(rdram, ctx);
        goto after_0;
    // 0x1517D76C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_0:
    // 0x1517D770: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_1517D774:
    // 0x1517D774: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x1517D778: bnel        $v0, $zero, L_1517D708
    if (ctx->r2 != 0) {
        // 0x1517D77C: addiu       $t0, $v0, -0x1
        ctx->r8 = ADD32(ctx->r2, -0X1);
            goto L_1517D708;
    }
    goto skip_0;
    // 0x1517D77C: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    skip_0:
L_1517D780:
    // 0x1517D780: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x1517D784: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517D788: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x1517D78C: sw          $t1, -0x22A8($at)
    MEM_W(-0X22A8, ctx->r1) = ctx->r9;
    // 0x1517D790: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1517D794: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x1517D798: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x1517D79C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x1517D7A0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x1517D7A4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x1517D7A8: jr          $ra
    // 0x1517D7AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1517D7AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_15011F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15011F20: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15011F24: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x15011F28: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15011F2C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15011F30: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x15011F34: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15011F38: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x15011F3C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15011F40: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15011F44: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x15011F48: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x15011F4C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x15011F50: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x15011F54: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x15011F58: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x15011F5C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15011F60: addiu       $a2, $zero, 0x47
    ctx->r6 = ADD32(0, 0X47);
    // 0x15011F64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15011F68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15011F6C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15011F70: jal         0x15149130
    // 0x15011F74: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x15011F74: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x15011F78: beq         $v0, $zero, L_15011F8C
    if (ctx->r2 == 0) {
        // 0x15011F7C: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_15011F8C;
    }
    // 0x15011F7C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15011F80: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x15011F84: jal         0x10022EC0
    // 0x15011F88: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15011F88: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_1:
L_15011F8C:
    // 0x15011F8C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15011F90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15011F94: jr          $ra
    // 0x15011F98: nop

    return;
    return;
    // 0x15011F98: nop

;}
RECOMP_FUNC void func_15164EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15164EE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15164EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15164EEC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15164EF0: addiu       $a0, $a0, -0x3220
    ctx->r4 = ADD32(ctx->r4, -0X3220);
    // 0x15164EF4: jal         0x100226F0
    // 0x15164EF8: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x15164EF8: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_0:
    // 0x15164EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15164F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15164F04: jr          $ra
    // 0x15164F08: nop

    return;
    return;
    // 0x15164F08: nop

;}
RECOMP_FUNC void func_15190898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15190898: addiu       $sp, $sp, -0x188
    ctx->r29 = ADD32(ctx->r29, -0X188);
    // 0x1519089C: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x151908A0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x151908A4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x151908A8: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x151908AC: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x151908B0: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x151908B4: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x151908B8: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x151908BC: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x151908C0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x151908C4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x151908C8: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x151908CC: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x151908D0: sw          $s6, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r22;
    // 0x151908D4: sb          $zero, 0x183($sp)
    MEM_B(0X183, ctx->r29) = 0;
    // 0x151908D8: lbu         $t6, 0x18($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X18);
    // 0x151908DC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151908E0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151908E4: beql        $t7, $zero, L_15190914
    if (ctx->r15 == 0) {
        // 0x151908E8: lbu         $t3, 0x183($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0X183);
            goto L_15190914;
    }
    goto skip_0;
    // 0x151908E8: lbu         $t3, 0x183($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X183);
    skip_0:
    // 0x151908EC: lh          $t8, 0x16($s6)
    ctx->r24 = MEM_H(ctx->r22, 0X16);
    // 0x151908F0: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x151908F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151908F8: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x151908FC: sh          $t0, 0x16($s6)
    MEM_H(0X16, ctx->r22) = ctx->r8;
    // 0x15190900: lh          $t1, 0x16($s6)
    ctx->r9 = MEM_H(ctx->r22, 0X16);
    // 0x15190904: bgezl       $t1, L_15190914
    if (SIGNED(ctx->r9) >= 0) {
        // 0x15190908: lbu         $t3, 0x183($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0X183);
            goto L_15190914;
    }
    goto skip_1;
    // 0x15190908: lbu         $t3, 0x183($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X183);
    skip_1:
    // 0x1519090C: sb          $t2, 0x183($sp)
    MEM_B(0X183, ctx->r29) = ctx->r10;
    // 0x15190910: lbu         $t3, 0x183($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X183);
L_15190914:
    // 0x15190914: bnel        $t3, $zero, L_15190948
    if (ctx->r11 != 0) {
        // 0x15190918: lbu         $t8, 0x183($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X183);
            goto L_15190948;
    }
    goto skip_2;
    // 0x15190918: lbu         $t8, 0x183($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X183);
    skip_2:
    // 0x1519091C: lw          $v0, 0x10($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X10);
    // 0x15190920: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15190924: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x15190928: beql        $t4, $zero, L_15190944
    if (ctx->r12 == 0) {
        // 0x1519092C: sb          $t7, 0x183($sp)
        MEM_B(0X183, ctx->r29) = ctx->r15;
            goto L_15190944;
    }
    goto skip_3;
    // 0x1519092C: sb          $t7, 0x183($sp)
    MEM_B(0X183, ctx->r29) = ctx->r15;
    skip_3:
    // 0x15190930: lbu         $t5, 0x14($s6)
    ctx->r13 = MEM_BU(ctx->r22, 0X14);
    // 0x15190934: lbu         $t6, 0x3B($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3B);
    // 0x15190938: beql        $t5, $t6, L_15190948
    if (ctx->r13 == ctx->r14) {
        // 0x1519093C: lbu         $t8, 0x183($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X183);
            goto L_15190948;
    }
    goto skip_4;
    // 0x1519093C: lbu         $t8, 0x183($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X183);
    skip_4:
    // 0x15190940: sb          $t7, 0x183($sp)
    MEM_B(0X183, ctx->r29) = ctx->r15;
L_15190944:
    // 0x15190944: lbu         $t8, 0x183($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X183);
L_15190948:
    // 0x15190948: bnel        $t8, $zero, L_15190F54
    if (ctx->r24 != 0) {
        // 0x1519094C: lbu         $t2, 0x183($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0X183);
            goto L_15190F54;
    }
    goto skip_5;
    // 0x1519094C: lbu         $t2, 0x183($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X183);
    skip_5:
    // 0x15190950: lw          $t9, 0x10($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X10);
    // 0x15190954: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15190958: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x1519095C: lw          $t0, 0x1D4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1D4);
    // 0x15190960: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x15190964: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x15190968: beq         $t0, $zero, L_15190F00
    if (ctx->r8 == 0) {
        // 0x1519096C: addiu       $t7, $zero, 0xFF
        ctx->r15 = ADD32(0, 0XFF);
            goto L_15190F00;
    }
    // 0x1519096C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15190970: lbu         $t1, 0x1A($s6)
    ctx->r9 = MEM_BU(ctx->r22, 0X1A);
    // 0x15190974: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x15190978: addiu       $t3, $t3, -0x590
    ctx->r11 = ADD32(ctx->r11, -0X590);
    // 0x1519097C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x15190980: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x15190984: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x15190988: addu        $s7, $t2, $t3
    ctx->r23 = ADD32(ctx->r10, ctx->r11);
    // 0x1519098C: lw          $t4, 0x4($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X4);
    // 0x15190990: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15190994: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15190998: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x1519099C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x151909A0: blez        $t4, L_15190B34
    if (SIGNED(ctx->r12) <= 0) {
        // 0x151909A4: lw          $s0, 0x24($s6)
        ctx->r16 = MEM_W(ctx->r22, 0X24);
            goto L_15190B34;
    }
    // 0x151909A4: lw          $s0, 0x24($s6)
    ctx->r16 = MEM_W(ctx->r22, 0X24);
    // 0x151909A8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x151909AC: nop

    // 0x151909B0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
L_151909B4:
    // 0x151909B4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x151909B8: beq         $v1, $zero, L_15190B00
    if (ctx->r3 == 0) {
        // 0x151909BC: nop
    
            goto L_15190B00;
    }
    // 0x151909BC: nop

    // 0x151909C0: lw          $at, 0x34($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X34);
    // 0x151909C4: lw          $t6, 0x38($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X38);
    // 0x151909C8: sll         $t8, $s5, 4
    ctx->r24 = S32(ctx->r21 << 4);
    // 0x151909CC: sw          $at, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r1;
    // 0x151909D0: lw          $at, 0x3C($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X3C);
    // 0x151909D4: sw          $t6, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r14;
    // 0x151909D8: sll         $t7, $s5, 4
    ctx->r15 = S32(ctx->r21 << 4);
    // 0x151909DC: sw          $at, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r1;
    // 0x151909E0: lw          $a3, 0x8($s7)
    ctx->r7 = MEM_W(ctx->r23, 0X8);
    // 0x151909E4: lw          $t2, 0x10($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X10);
    // 0x151909E8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x151909EC: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x151909F0: lbu         $t0, 0xC($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XC);
    // 0x151909F4: lw          $t3, 0x1D4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X1D4);
    // 0x151909F8: addu        $a0, $a3, $t7
    ctx->r4 = ADD32(ctx->r7, ctx->r15);
    // 0x151909FC: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x15190A00: addiu       $a1, $a1, 0x34
    ctx->r5 = ADD32(ctx->r5, 0X34);
    // 0x15190A04: jal         0x15143134
    // 0x15190A08: addu        $a2, $t1, $t3
    ctx->r6 = ADD32(ctx->r9, ctx->r11);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x15190A08: addu        $a2, $t1, $t3
    ctx->r6 = ADD32(ctx->r9, ctx->r11);
    after_0:
    // 0x15190A0C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15190A10: lw          $t5, -0x161C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X161C);
    // 0x15190A14: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x15190A18: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x15190A1C: addiu       $t0, $t0, -0x62C0
    ctx->r8 = ADD32(ctx->r8, -0X62C0);
    // 0x15190A20: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x15190A24: bgez        $t6, L_15190AF8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x15190A28: sw          $t6, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r14;
            goto L_15190AF8;
    }
    // 0x15190A28: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x15190A2C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x15190A30: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15190A34: lwc1        $f0, -0x1658($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1658);
    // 0x15190A38: lwc1        $f4, 0x34($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X34);
    // 0x15190A3C: lwc1        $f6, 0x40($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X40);
    // 0x15190A40: lwc1        $f10, 0x3C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x15190A44: lwc1        $f16, 0x48($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X48);
    // 0x15190A48: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15190A4C: addiu       $v0, $v1, 0x110
    ctx->r2 = ADD32(ctx->r3, 0X110);
    // 0x15190A50: lbu         $t8, 0x20($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X20);
    // 0x15190A54: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15190A58: mul.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15190A5C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15190A60: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x15190A64: mul.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15190A68: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15190A6C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15190A70: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x15190A74: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x15190A78: addu        $s2, $t9, $t0
    ctx->r18 = ADD32(ctx->r25, ctx->r8);
    // 0x15190A7C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x15190A80: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x15190A84: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x15190A88: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15190A8C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x15190A90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15190A94: jal         0x1513F680
    // 0x15190A98: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    func_1513F680(rdram, ctx);
        goto after_1;
    // 0x15190A98: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    after_1:
    // 0x15190A9C: jal         0x150ADA20
    // 0x15190AA0: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15190AA0: nop

    after_2:
    // 0x15190AA4: lh          $t1, 0x2($s2)
    ctx->r9 = MEM_H(ctx->r18, 0X2);
    // 0x15190AA8: lh          $t5, 0x0($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X0);
    // 0x15190AAC: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15190AB0: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x15190AB4: divu        $zero, $v0, $t3
    lo = S32(U32(ctx->r2) / U32(ctx->r11)); hi = S32(U32(ctx->r2) % U32(ctx->r11));
    // 0x15190AB8: mfhi        $t4
    ctx->r12 = hi;
    // 0x15190ABC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x15190AC0: sh          $t6, 0x1C($t7)
    MEM_H(0X1C, ctx->r15) = ctx->r14;
    // 0x15190AC4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x15190AC8: bne         $t3, $zero, L_15190AD4
    if (ctx->r11 != 0) {
        // 0x15190ACC: nop
    
            goto L_15190AD4;
    }
    // 0x15190ACC: nop

    // 0x15190AD0: break       7
    do_break(353962704);
L_15190AD4:
    // 0x15190AD4: lw          $t8, 0x58($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X58);
    // 0x15190AD8: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x15190ADC: sw          $t9, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r25;
    // 0x15190AE0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x15190AE4: lw          $t0, 0x20($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X20);
    // 0x15190AE8: addiu       $t2, $t0, -0x1
    ctx->r10 = ADD32(ctx->r8, -0X1);
    // 0x15190AEC: sw          $t2, 0x20($s6)
    MEM_W(0X20, ctx->r22) = ctx->r10;
    // 0x15190AF0: b           L_15190B00
    // 0x15190AF4: nop

        goto L_15190B00;
    // 0x15190AF4: nop

L_15190AF8:
    // 0x15190AF8: b           L_15190B00
    // 0x15190AFC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_15190B00;
    // 0x15190AFC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_15190B00:
    // 0x15190B00: beql        $s3, $zero, L_15190B20
    if (ctx->r19 == 0) {
        // 0x15190B04: lw          $t1, 0x4($s7)
        ctx->r9 = MEM_W(ctx->r23, 0X4);
            goto L_15190B20;
    }
    goto skip_6;
    // 0x15190B04: lw          $t1, 0x4($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X4);
    skip_6:
    // 0x15190B08: bne         $s4, $zero, L_15190B14
    if (ctx->r20 != 0) {
        // 0x15190B0C: addiu       $fp, $fp, 0x1
        ctx->r30 = ADD32(ctx->r30, 0X1);
            goto L_15190B14;
    }
    // 0x15190B0C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x15190B10: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
L_15190B14:
    // 0x15190B14: sw          $s1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r17;
    // 0x15190B18: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x15190B1C: lw          $t1, 0x4($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X4);
L_15190B20:
    // 0x15190B20: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x15190B24: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x15190B28: slt         $at, $s5, $t1
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x15190B2C: bnel        $at, $zero, L_151909B4
    if (ctx->r1 != 0) {
        // 0x15190B30: lw          $v1, 0x0($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X0);
            goto L_151909B4;
    }
    goto skip_7;
    // 0x15190B30: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    skip_7:
L_15190B34:
    // 0x15190B34: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15190B38: beq         $fp, $zero, L_15190F50
    if (ctx->r30 == 0) {
        // 0x15190B3C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_15190F50;
    }
    // 0x15190B3C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15190B40: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x15190B44: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15190B48: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15190B4C: lwc1        $f4, 0xC($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0XC);
    // 0x15190B50: lwc1        $f10, 0x1C($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X1C);
    // 0x15190B54: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x15190B58: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15190B5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15190B60: addiu       $t5, $t5, -0x62C0
    ctx->r13 = ADD32(ctx->r13, -0X62C0);
    // 0x15190B64: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x15190B68: addiu       $t7, $zero, 0x11
    ctx->r15 = ADD32(0, 0X11);
    // 0x15190B6C: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x15190B70: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15190B74: swc1        $f16, 0x1C($s6)
    MEM_W(0X1C, ctx->r22) = ctx->f16.u32l;
    // 0x15190B78: lwc1        $f18, 0x1C($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X1C);
    // 0x15190B7C: c.lt.s      $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f22.fl < ctx->f18.fl;
    // 0x15190B80: nop

    // 0x15190B84: bc1fl       L_15190F54
    if (!c1cs) {
        // 0x15190B88: lbu         $t2, 0x183($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0X183);
            goto L_15190F54;
    }
    goto skip_8;
    // 0x15190B88: lbu         $t2, 0x183($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X183);
    skip_8:
    // 0x15190B8C: lwc1        $f0, -0x7FEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X7FEC);
    // 0x15190B90: lbu         $t3, 0x0($s7)
    ctx->r11 = MEM_BU(ctx->r23, 0X0);
    // 0x15190B94: sw          $s1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r17;
    // 0x15190B98: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x15190B9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15190BA0: swc1        $f20, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f20.u32l;
    // 0x15190BA4: swc1        $f20, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f20.u32l;
    // 0x15190BA8: swc1        $f20, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f20.u32l;
    // 0x15190BAC: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x15190BB0: sh          $t6, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r14;
    // 0x15190BB4: sh          $t7, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r15;
    // 0x15190BB8: swc1        $f20, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f20.u32l;
    // 0x15190BBC: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x15190BC0: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    // 0x15190BC4: lbu         $t8, 0x0($s7)
    ctx->r24 = MEM_BU(ctx->r23, 0X0);
    // 0x15190BC8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x15190BCC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x15190BD0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x15190BD4: sb          $t8, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r24;
    // 0x15190BD8: addu        $s0, $t4, $t5
    ctx->r16 = ADD32(ctx->r12, ctx->r13);
    // 0x15190BDC: jal         0x1504715C
    // 0x15190BE0: lw          $a1, 0x10($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X10);
    func_1504715C(rdram, ctx);
        goto after_3;
    // 0x15190BE0: lw          $a1, 0x10($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X10);
    after_3:
    // 0x15190BE4: lbu         $t9, 0x2C($s6)
    ctx->r25 = MEM_BU(ctx->r22, 0X2C);
    // 0x15190BE8: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x15190BEC: addiu       $t1, $zero, 0x1001
    ctx->r9 = ADD32(0, 0X1001);
    // 0x15190BF0: sb          $t9, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = ctx->r25;
    // 0x15190BF4: lbu         $t0, 0x2C($s6)
    ctx->r8 = MEM_BU(ctx->r22, 0X2C);
    // 0x15190BF8: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x15190BFC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15190C00: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x15190C04: lbu         $t2, -0x4CF0($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X4CF0);
    // 0x15190C08: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15190C0C: addiu       $t6, $s0, 0x4
    ctx->r14 = ADD32(ctx->r16, 0X4);
    // 0x15190C10: addiu       $t7, $s0, 0xC
    ctx->r15 = ADD32(ctx->r16, 0XC);
    // 0x15190C14: sh          $t1, 0xF6($sp)
    MEM_H(0XF6, ctx->r29) = ctx->r9;
    // 0x15190C18: sh          $t3, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r11;
    // 0x15190C1C: sw          $zero, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = 0;
    // 0x15190C20: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x15190C24: sb          $zero, 0x104($sp)
    MEM_B(0X104, ctx->r29) = 0;
    // 0x15190C28: sb          $zero, 0x105($sp)
    MEM_B(0X105, ctx->r29) = 0;
    // 0x15190C2C: sb          $zero, 0x106($sp)
    MEM_B(0X106, ctx->r29) = 0;
    // 0x15190C30: sb          $t4, 0x107($sp)
    MEM_B(0X107, ctx->r29) = ctx->r12;
    // 0x15190C34: swc1        $f20, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f20.u32l;
    // 0x15190C38: swc1        $f20, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f20.u32l;
    // 0x15190C3C: swc1        $f20, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f20.u32l;
    // 0x15190C40: sw          $zero, 0x134($sp)
    MEM_W(0X134, ctx->r29) = 0;
    // 0x15190C44: sb          $t5, 0x139($sp)
    MEM_B(0X139, ctx->r29) = ctx->r13;
    // 0x15190C48: swc1        $f22, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f22.u32l;
    // 0x15190C4C: swc1        $f22, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f22.u32l;
    // 0x15190C50: swc1        $f22, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f22.u32l;
    // 0x15190C54: sb          $zero, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = 0;
    // 0x15190C58: sb          $zero, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = 0;
    // 0x15190C5C: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x15190C60: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x15190C64: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
    // 0x15190C68: addiu       $s3, $sp, 0x110
    ctx->r19 = ADD32(ctx->r29, 0X110);
    // 0x15190C6C: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    // 0x15190C70: sb          $t2, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r10;
L_15190C74:
    // 0x15190C74: jal         0x150ADA20
    // 0x15190C78: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15190C78: nop

    after_4:
    // 0x15190C7C: divu        $zero, $v0, $fp
    lo = S32(U32(ctx->r2) / U32(ctx->r30)); hi = S32(U32(ctx->r2) % U32(ctx->r30));
    // 0x15190C80: mfhi        $a0
    ctx->r4 = hi;
    // 0x15190C84: addiu       $v1, $a0, -0x1
    ctx->r3 = ADD32(ctx->r4, -0X1);
    // 0x15190C88: bne         $fp, $zero, L_15190C94
    if (ctx->r30 != 0) {
        // 0x15190C8C: nop
    
            goto L_15190C94;
    }
    // 0x15190C8C: nop

    // 0x15190C90: break       7
    do_break(353963152);
L_15190C94:
    // 0x15190C94: beql        $a0, $zero, L_15190CB4
    if (ctx->r4 == 0) {
        // 0x15190C98: lw          $t8, 0x24($s6)
        ctx->r24 = MEM_W(ctx->r22, 0X24);
            goto L_15190CB4;
    }
    goto skip_9;
    // 0x15190C98: lw          $t8, 0x24($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X24);
    skip_9:
L_15190C9C:
    // 0x15190C9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15190CA0: or          $s4, $s1, $zero
    ctx->r20 = ctx->r17 | 0;
    // 0x15190CA4: lw          $s1, 0x8($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X8);
    // 0x15190CA8: bne         $v1, $zero, L_15190C9C
    if (ctx->r3 != 0) {
        // 0x15190CAC: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_15190C9C;
    }
    // 0x15190CAC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x15190CB0: lw          $t8, 0x24($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X24);
L_15190CB4:
    // 0x15190CB4: subu        $t9, $s1, $t8
    ctx->r25 = SUB32(ctx->r17, ctx->r24);
    // 0x15190CB8: div         $zero, $t9, $s5
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r21)));
    // 0x15190CBC: mflo        $s0
    ctx->r16 = lo;
    // 0x15190CC0: bne         $s5, $zero, L_15190CCC
    if (ctx->r21 != 0) {
        // 0x15190CC4: nop
    
            goto L_15190CCC;
    }
    // 0x15190CC4: nop

    // 0x15190CC8: break       7
    do_break(353963208);
L_15190CCC:
    // 0x15190CCC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15190CD0: bne         $s5, $at, L_15190CE4
    if (ctx->r21 != ctx->r1) {
        // 0x15190CD4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15190CE4;
    }
    // 0x15190CD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15190CD8: bne         $t9, $at, L_15190CE4
    if (ctx->r25 != ctx->r1) {
        // 0x15190CDC: nop
    
            goto L_15190CE4;
    }
    // 0x15190CDC: nop

    // 0x15190CE0: break       6
    do_break(353963232);
L_15190CE4:
    // 0x15190CE4: jal         0x150ADA20
    // 0x15190CE8: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15190CE8: nop

    after_5:
    // 0x15190CEC: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x15190CF0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15190CF4: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x15190CF8: mfhi        $t0
    ctx->r8 = hi;
    // 0x15190CFC: addiu       $t2, $t0, 0x64
    ctx->r10 = ADD32(ctx->r8, 0X64);
    // 0x15190D00: sb          $t2, 0x138($sp)
    MEM_B(0X138, ctx->r29) = ctx->r10;
    // 0x15190D04: swc1        $f20, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f20.u32l;
    // 0x15190D08: swc1        $f20, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f20.u32l;
    // 0x15190D0C: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x15190D10: addiu       $t1, $sp, 0xBC
    ctx->r9 = ADD32(ctx->r29, 0XBC);
    // 0x15190D14: addiu       $t7, $sp, 0xC4
    ctx->r15 = ADD32(ctx->r29, 0XC4);
    // 0x15190D18: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x15190D1C: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x15190D20: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x15190D24: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x15190D28: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x15190D2C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x15190D30: lw          $t2, 0x4($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X4);
    // 0x15190D34: jal         0x150ADA20
    // 0x15190D38: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x15190D38: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    after_6:
    // 0x15190D3C: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x15190D40: mfhi        $t5
    ctx->r13 = hi;
    // 0x15190D44: addiu       $t4, $t5, 0x4
    ctx->r12 = ADD32(ctx->r13, 0X4);
    // 0x15190D48: bne         $s2, $zero, L_15190D54
    if (ctx->r18 != 0) {
        // 0x15190D4C: nop
    
            goto L_15190D54;
    }
    // 0x15190D4C: nop

    // 0x15190D50: break       7
    do_break(353963344);
L_15190D54:
    // 0x15190D54: sb          $t4, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = ctx->r12;
    // 0x15190D58: jal         0x150ADA20
    // 0x15190D5C: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15190D5C: nop

    after_7:
    // 0x15190D60: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x15190D64: mfhi        $t1
    ctx->r9 = hi;
    // 0x15190D68: addiu       $t3, $t1, 0x4
    ctx->r11 = ADD32(ctx->r9, 0X4);
    // 0x15190D6C: sb          $t3, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r11;
    // 0x15190D70: lw          $a3, 0x8($s7)
    ctx->r7 = MEM_W(ctx->r23, 0X8);
    // 0x15190D74: sll         $t0, $s0, 4
    ctx->r8 = S32(ctx->r16 << 4);
    // 0x15190D78: lw          $t2, 0x10($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X10);
    // 0x15190D7C: addu        $t9, $a3, $t0
    ctx->r25 = ADD32(ctx->r7, ctx->r8);
    // 0x15190D80: lbu         $t7, 0xC($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0XC);
    // 0x15190D84: lw          $t5, 0x1D4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X1D4);
    // 0x15190D88: bne         $s2, $zero, L_15190D94
    if (ctx->r18 != 0) {
        // 0x15190D8C: nop
    
            goto L_15190D94;
    }
    // 0x15190D8C: nop

    // 0x15190D90: break       7
    do_break(353963408);
L_15190D94:
    // 0x15190D94: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x15190D98: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x15190D9C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15190DA0: addu        $a0, $a3, $t6
    ctx->r4 = ADD32(ctx->r7, ctx->r14);
    // 0x15190DA4: jal         0x15143134
    // 0x15190DA8: addu        $a2, $t8, $t5
    ctx->r6 = ADD32(ctx->r24, ctx->r13);
    func_15143134(rdram, ctx);
        goto after_8;
    // 0x15190DA8: addu        $a2, $t8, $t5
    ctx->r6 = ADD32(ctx->r24, ctx->r13);
    after_8:
    // 0x15190DAC: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x15190DB0: addiu       $t4, $sp, 0x11C
    ctx->r12 = ADD32(ctx->r29, 0X11C);
    // 0x15190DB4: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x15190DB8: lw          $t6, 0x4($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X4);
    // 0x15190DBC: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x15190DC0: lw          $at, 0x8($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X8);
    // 0x15190DC4: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x15190DC8: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x15190DCC: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x15190DD0: lwc1        $f18, 0xC8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x15190DD4: lw          $t0, 0x10($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X10);
    // 0x15190DD8: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x15190DDC: lwc1        $f6, 0x118($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X118);
    // 0x15190DE0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x15190DE4: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x15190DE8: nop

    // 0x15190DEC: bc1fl       L_15190EBC
    if (!c1cs) {
        // 0x15190DF0: lwc1        $f10, 0x1C($s6)
        ctx->f10.u32l = MEM_W(ctx->r22, 0X1C);
            goto L_15190EBC;
    }
    goto skip_10;
    // 0x15190DF0: lwc1        $f10, 0x1C($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X1C);
    skip_10:
    // 0x15190DF4: jal         0x150ADA20
    // 0x15190DF8: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x15190DF8: nop

    after_9:
    // 0x15190DFC: lbu         $t9, 0x2C($s6)
    ctx->r25 = MEM_BU(ctx->r22, 0X2C);
    // 0x15190E00: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x15190E04: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15190E08: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x15190E0C: lbu         $t7, -0x4BFC($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X4BFC);
    // 0x15190E10: addiu       $a0, $sp, 0xF4
    ctx->r4 = ADD32(ctx->r29, 0XF4);
    // 0x15190E14: andi        $a1, $s5, 0xFF
    ctx->r5 = ctx->r21 & 0XFF;
    // 0x15190E18: beq         $t7, $zero, L_15190E28
    if (ctx->r15 == 0) {
        // 0x15190E1C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_15190E28;
    }
    // 0x15190E1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15190E20: b           L_15190E2C
    // 0x15190E24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15190E2C;
    // 0x15190E24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15190E28:
    // 0x15190E28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_15190E2C:
    // 0x15190E2C: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x15190E30: or          $t8, $v0, $v1
    ctx->r24 = ctx->r2 | ctx->r3;
    // 0x15190E34: addiu       $t5, $zero, 0x60
    ctx->r13 = ADD32(0, 0X60);
    // 0x15190E38: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15190E3C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x15190E40: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15190E44: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15190E48: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15190E4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15190E50: jal         0x1513D524
    // 0x15190E54: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_1513D524(rdram, ctx);
        goto after_10;
    // 0x15190E54: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_10:
    // 0x15190E58: beq         $v0, $zero, L_15190EB8
    if (ctx->r2 == 0) {
        // 0x15190E5C: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_15190EB8;
    }
    // 0x15190E5C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x15190E60: addiu       $a0, $v0, 0x110
    ctx->r4 = ADD32(ctx->r2, 0X110);
    // 0x15190E64: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x15190E68: jal         0x10022EC0
    // 0x15190E6C: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x15190E6C: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    after_11:
    // 0x15190E70: jal         0x150ADA20
    // 0x15190E74: nop

    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x15190E74: nop

    after_12:
    // 0x15190E78: lh          $t1, 0x16($s7)
    ctx->r9 = MEM_H(ctx->r23, 0X16);
    // 0x15190E7C: lh          $t0, 0x14($s7)
    ctx->r8 = MEM_H(ctx->r23, 0X14);
    // 0x15190E80: addiu       $fp, $fp, -0x1
    ctx->r30 = ADD32(ctx->r30, -0X1);
    // 0x15190E84: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x15190E88: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x15190E8C: mfhi        $t6
    ctx->r14 = hi;
    // 0x15190E90: addu        $t9, $t6, $t0
    ctx->r25 = ADD32(ctx->r14, ctx->r8);
    // 0x15190E94: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x15190E98: lw          $s1, 0x8($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X8);
    // 0x15190E9C: bne         $t4, $zero, L_15190EA8
    if (ctx->r12 != 0) {
        // 0x15190EA0: nop
    
            goto L_15190EA8;
    }
    // 0x15190EA0: nop

    // 0x15190EA4: break       7
    do_break(353963684);
L_15190EA8:
    // 0x15190EA8: sw          $s1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r17;
    // 0x15190EAC: lw          $t7, 0x20($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X20);
    // 0x15190EB0: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x15190EB4: sw          $t2, 0x20($s6)
    MEM_W(0X20, ctx->r22) = ctx->r10;
L_15190EB8:
    // 0x15190EB8: lwc1        $f10, 0x1C($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X1C);
L_15190EBC:
    // 0x15190EBC: sub.s       $f8, $f10, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f22.fl;
    // 0x15190EC0: swc1        $f8, 0x1C($s6)
    MEM_W(0X1C, ctx->r22) = ctx->f8.u32l;
    // 0x15190EC4: lwc1        $f16, 0x1C($s6)
    ctx->f16.u32l = MEM_W(ctx->r22, 0X1C);
    // 0x15190EC8: lw          $t8, 0x184($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X184);
    // 0x15190ECC: c.lt.s      $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f22.fl < ctx->f16.fl;
    // 0x15190ED0: nop

    // 0x15190ED4: bc1fl       L_15190F54
    if (!c1cs) {
        // 0x15190ED8: lbu         $t2, 0x183($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0X183);
            goto L_15190F54;
    }
    goto skip_11;
    // 0x15190ED8: lbu         $t2, 0x183($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X183);
    skip_11:
    // 0x15190EDC: beql        $fp, $zero, L_15190F54
    if (ctx->r30 == 0) {
        // 0x15190EE0: lbu         $t2, 0x183($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0X183);
            goto L_15190F54;
    }
    goto skip_12;
    // 0x15190EE0: lbu         $t2, 0x183($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X183);
    skip_12:
    // 0x15190EE4: lw          $t5, 0x20($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X20);
    // 0x15190EE8: lw          $t3, 0x10($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X10);
    // 0x15190EEC: slt         $at, $t5, $t3
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x15190EF0: bne         $at, $zero, L_15190C74
    if (ctx->r1 != 0) {
        // 0x15190EF4: nop
    
            goto L_15190C74;
    }
    // 0x15190EF4: nop

    // 0x15190EF8: b           L_15190F54
    // 0x15190EFC: lbu         $t2, 0x183($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X183);
        goto L_15190F54;
    // 0x15190EFC: lbu         $t2, 0x183($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X183);
L_15190F00:
    // 0x15190F00: sb          $t1, 0x183($sp)
    MEM_B(0X183, ctx->r29) = ctx->r9;
    // 0x15190F04: lbu         $t4, 0x18($s6)
    ctx->r12 = MEM_BU(ctx->r22, 0X18);
    // 0x15190F08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15190F0C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x15190F10: andi        $t6, $t4, 0x1
    ctx->r14 = ctx->r12 & 0X1;
    // 0x15190F14: beq         $t6, $zero, L_15190F28
    if (ctx->r14 == 0) {
        // 0x15190F18: addiu       $t0, $zero, 0x8
        ctx->r8 = ADD32(0, 0X8);
            goto L_15190F28;
    }
    // 0x15190F18: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x15190F1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15190F20: b           L_15190F28
    // 0x15190F24: lh          $a0, 0x16($s6)
    ctx->r4 = MEM_H(ctx->r22, 0X16);
        goto L_15190F28;
    // 0x15190F24: lh          $a0, 0x16($s6)
    ctx->r4 = MEM_H(ctx->r22, 0X16);
L_15190F28:
    // 0x15190F28: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x15190F2C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15190F30: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15190F34: jal         0x151491F4
    // 0x15190F38: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151491F4(rdram, ctx);
        goto after_13;
    // 0x15190F38: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_13:
    // 0x15190F3C: beq         $v0, $zero, L_15190F50
    if (ctx->r2 == 0) {
        // 0x15190F40: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_15190F50;
    }
    // 0x15190F40: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15190F44: addiu       $a1, $s6, 0x10
    ctx->r5 = ADD32(ctx->r22, 0X10);
    // 0x15190F48: jal         0x10022EC0
    // 0x15190F4C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x15190F4C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_14:
L_15190F50:
    // 0x15190F50: lbu         $t2, 0x183($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X183);
L_15190F54:
    // 0x15190F54: beql        $t2, $zero, L_15190F68
    if (ctx->r10 == 0) {
        // 0x15190F58: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_15190F68;
    }
    goto skip_13;
    // 0x15190F58: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_13:
    // 0x15190F5C: jal         0x1516972C
    // 0x15190F60: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_1516972C(rdram, ctx);
        goto after_15;
    // 0x15190F60: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_15:
    // 0x15190F64: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_15190F68:
    // 0x15190F68: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x15190F6C: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x15190F70: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x15190F74: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x15190F78: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x15190F7C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x15190F80: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x15190F84: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x15190F88: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x15190F8C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x15190F90: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x15190F94: jr          $ra
    // 0x15190F98: addiu       $sp, $sp, 0x188
    ctx->r29 = ADD32(ctx->r29, 0X188);
    return;
    return;
    // 0x15190F98: addiu       $sp, $sp, 0x188
    ctx->r29 = ADD32(ctx->r29, 0X188);
;}
RECOMP_FUNC void func_151DCFD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DCFD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151DCFDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151DCFE0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151DCFE4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151DCFE8: lw          $t6, 0xA20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XA20);
    // 0x151DCFEC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x151DCFF0: addiu       $a0, $a0, 0x2A78
    ctx->r4 = ADD32(ctx->r4, 0X2A78);
    // 0x151DCFF4: bne         $t6, $zero, L_151DD004
    if (ctx->r14 != 0) {
        // 0x151DCFF8: nop
    
            goto L_151DD004;
    }
    // 0x151DCFF8: nop

    // 0x151DCFFC: b           L_151DD124
    // 0x151DD000: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151DD124;
    // 0x151DD000: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151DD004:
    // 0x151DD004: jal         0x10023440
    // 0x151DD008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x151DD008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x151DD00C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151DD010: beq         $v0, $at, L_151DD120
    if (ctx->r2 == ctx->r1) {
        // 0x151DD014: lui         $t0, 0x800E
        ctx->r8 = S32(0X800E << 16);
            goto L_151DD120;
    }
    // 0x151DD014: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x151DD018: addiu       $t0, $t0, 0xA2C
    ctx->r8 = ADD32(ctx->r8, 0XA2C);
    // 0x151DD01C: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x151DD020: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151DD024: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x151DD028: bgtz        $t7, L_151DD044
    if (SIGNED(ctx->r15) > 0) {
        // 0x151DD02C: lui         $a2, 0x800E
        ctx->r6 = S32(0X800E << 16);
            goto L_151DD044;
    }
    // 0x151DD02C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x151DD030: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DD034: sw          $zero, 0xA20($at)
    MEM_W(0XA20, ctx->r1) = 0;
    // 0x151DD038: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x151DD03C: b           L_151DD124
    // 0x151DD040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151DD124;
    // 0x151DD040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151DD044:
    // 0x151DD044: lw          $a0, 0xA20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA20);
    // 0x151DD048: lbu         $a1, 0xA24($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0XA24);
    // 0x151DD04C: jal         0x151DD4E0
    // 0x151DD050: lw          $a2, 0xA28($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XA28);
    func_151DD4E0(rdram, ctx);
        goto after_1;
    // 0x151DD050: lw          $a2, 0xA28($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XA28);
    after_1:
    // 0x151DD054: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x151DD058: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151DD05C: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151DD060: addiu       $t2, $t2, 0xA28
    ctx->r10 = ADD32(ctx->r10, 0XA28);
    // 0x151DD064: addiu       $t1, $t1, 0xA24
    ctx->r9 = ADD32(ctx->r9, 0XA24);
    // 0x151DD068: beq         $v0, $zero, L_151DD084
    if (ctx->r2 == 0) {
        // 0x151DD06C: addiu       $t0, $t0, 0xA2C
        ctx->r8 = ADD32(ctx->r8, 0XA2C);
            goto L_151DD084;
    }
    // 0x151DD06C: addiu       $t0, $t0, 0xA2C
    ctx->r8 = ADD32(ctx->r8, 0XA2C);
    // 0x151DD070: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DD074: sw          $zero, 0xA20($at)
    MEM_W(0XA20, ctx->r1) = 0;
    // 0x151DD078: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x151DD07C: b           L_151DD124
    // 0x151DD080: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151DD124;
    // 0x151DD080: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151DD084:
    // 0x151DD084: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x151DD088: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x151DD08C: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x151DD090: addiu       $t9, $t8, -0x8
    ctx->r25 = ADD32(ctx->r24, -0X8);
    // 0x151DD094: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x151DD098: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x151DD09C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x151DD0A0: sb          $t4, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r12;
    // 0x151DD0A4: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x151DD0A8: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x151DD0AC: lui         $a3, 0x8003
    ctx->r7 = S32(0X8003 << 16);
    // 0x151DD0B0: lw          $a3, -0x42EC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X42EC);
    // 0x151DD0B4: lw          $a2, -0x42F0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X42F0);
    // 0x151DD0B8: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x151DD0BC: jal         0x10026968
    // 0x151DD0C0: addiu       $a1, $zero, 0x2EE0
    ctx->r5 = ADD32(0, 0X2EE0);
    __ll_mul_recomp(rdram, ctx);
        goto after_2;
    // 0x151DD0C0: addiu       $a1, $zero, 0x2EE0
    ctx->r5 = ADD32(0, 0X2EE0);
    after_2:
    // 0x151DD0C4: lui         $a3, 0xF
    ctx->r7 = S32(0XF << 16);
    // 0x151DD0C8: ori         $a3, $a3, 0x4240
    ctx->r7 = ctx->r7 | 0X4240;
    // 0x151DD0CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151DD0D0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x151DD0D4: jal         0x10026868
    // 0x151DD0D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    __ull_div_recomp(rdram, ctx);
        goto after_3;
    // 0x151DD0D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
    // 0x151DD0DC: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x151DD0E0: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x151DD0E4: addiu       $t3, $t3, 0x2A90
    ctx->r11 = ADD32(ctx->r11, 0X2A90);
    // 0x151DD0E8: addiu       $t7, $t7, 0x2A78
    ctx->r15 = ADD32(ctx->r15, 0X2A78);
    // 0x151DD0EC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x151DD0F0: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x151DD0F4: addiu       $t9, $zero, 0x0
    ctx->r25 = ADD32(0, 0X0);
    // 0x151DD0F8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151DD0FC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151DD100: addiu       $a0, $a0, 0x2A58
    ctx->r4 = ADD32(ctx->r4, 0X2A58);
    // 0x151DD104: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151DD108: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x151DD10C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x151DD110: jal         0x10024A40
    // 0x151DD114: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    osSetTimer_recomp(rdram, ctx);
        goto after_4;
    // 0x151DD114: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    after_4:
    // 0x151DD118: b           L_151DD124
    // 0x151DD11C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151DD124;
    // 0x151DD11C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151DD120:
    // 0x151DD120: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151DD124:
    // 0x151DD124: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151DD128: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151DD12C: jr          $ra
    // 0x151DD130: nop

    return;
    return;
    // 0x151DD130: nop

;}
RECOMP_FUNC void func_15077C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077C38: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15077C3C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x15077C40: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x15077C44: addiu       $s2, $s2, 0x154C
    ctx->r18 = ADD32(ctx->r18, 0X154C);
    // 0x15077C48: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15077C4C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x15077C50: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x15077C54: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x15077C58: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x15077C5C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x15077C60: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x15077C64: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x15077C68: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15077C6C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15077C70: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x15077C74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15077C78: lwc1        $f20, -0x5EB8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X5EB8);
    // 0x15077C7C: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x15077C80: lui         $s7, 0x800D
    ctx->r23 = S32(0X800D << 16);
    // 0x15077C84: lui         $s6, 0x800D
    ctx->r22 = S32(0X800D << 16);
    // 0x15077C88: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x15077C8C: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x15077C90: addiu       $s4, $s4, 0x1892
    ctx->r20 = ADD32(ctx->r20, 0X1892);
    // 0x15077C94: addiu       $s5, $s5, 0x1890
    ctx->r21 = ADD32(ctx->r21, 0X1890);
    // 0x15077C98: addiu       $s6, $s6, 0x1891
    ctx->r22 = ADD32(ctx->r22, 0X1891);
    // 0x15077C9C: addiu       $s7, $s7, 0x1893
    ctx->r23 = ADD32(ctx->r23, 0X1893);
    // 0x15077CA0: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x15077CA4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15077CA8: addiu       $fp, $zero, 0x19
    ctx->r30 = ADD32(0, 0X19);
    // 0x15077CAC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    // 0x15077CB0: sb          $zero, 0x222($t6)
    MEM_B(0X222, ctx->r14) = 0;
L_15077CB4:
    // 0x15077CB4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x15077CB8: beql        $v1, $zero, L_15077D64
    if (ctx->r3 == 0) {
        // 0x15077CBC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15077D64;
    }
    goto skip_0;
    // 0x15077CBC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x15077CC0: lbu         $t7, 0x1CA($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1CA);
    // 0x15077CC4: beql        $t7, $zero, L_15077D64
    if (ctx->r15 == 0) {
        // 0x15077CC8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15077D64;
    }
    goto skip_1;
    // 0x15077CC8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x15077CCC: lbu         $v0, 0x125($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X125);
    // 0x15077CD0: beql        $v0, $zero, L_15077CE4
    if (ctx->r2 == 0) {
        // 0x15077CD4: lbu         $t8, 0x65($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X65);
            goto L_15077CE4;
    }
    goto skip_2;
    // 0x15077CD4: lbu         $t8, 0x65($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X65);
    skip_2:
    // 0x15077CD8: bnel        $s3, $v0, L_15077D64
    if (ctx->r19 != ctx->r2) {
        // 0x15077CDC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15077D64;
    }
    goto skip_3;
    // 0x15077CDC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x15077CE0: lbu         $t8, 0x65($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X65);
L_15077CE4:
    // 0x15077CE4: beql        $t8, $zero, L_15077CFC
    if (ctx->r24 == 0) {
        // 0x15077CE8: lbu         $t0, 0x0($s5)
        ctx->r8 = MEM_BU(ctx->r21, 0X0);
            goto L_15077CFC;
    }
    goto skip_4;
    // 0x15077CE8: lbu         $t0, 0x0($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0X0);
    skip_4:
    // 0x15077CEC: lbu         $t9, 0x0($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X0);
    // 0x15077CF0: beql        $t9, $zero, L_15077D64
    if (ctx->r25 == 0) {
        // 0x15077CF4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15077D64;
    }
    goto skip_5;
    // 0x15077CF4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x15077CF8: lbu         $t0, 0x0($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0X0);
L_15077CFC:
    // 0x15077CFC: lbu         $t1, 0x4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X4);
    // 0x15077D00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15077D04: beql        $t0, $t1, L_15077D28
    if (ctx->r8 == ctx->r9) {
        // 0x15077D08: lbu         $t4, 0x0($s7)
        ctx->r12 = MEM_BU(ctx->r23, 0X0);
            goto L_15077D28;
    }
    goto skip_6;
    // 0x15077D08: lbu         $t4, 0x0($s7)
    ctx->r12 = MEM_BU(ctx->r23, 0X0);
    skip_6:
    // 0x15077D0C: lbu         $t2, 0x0($s6)
    ctx->r10 = MEM_BU(ctx->r22, 0X0);
    // 0x15077D10: bnel        $t2, $v1, L_15077D64
    if (ctx->r10 != ctx->r3) {
        // 0x15077D14: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15077D64;
    }
    goto skip_7;
    // 0x15077D14: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x15077D18: lbu         $t3, 0x104($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X104);
    // 0x15077D1C: bnel        $t3, $zero, L_15077D64
    if (ctx->r11 != 0) {
        // 0x15077D20: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15077D64;
    }
    goto skip_8;
    // 0x15077D20: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_8:
    // 0x15077D24: lbu         $t4, 0x0($s7)
    ctx->r12 = MEM_BU(ctx->r23, 0X0);
L_15077D28:
    // 0x15077D28: bne         $t4, $zero, L_15077D3C
    if (ctx->r12 != 0) {
        // 0x15077D2C: nop
    
            goto L_15077D3C;
    }
    // 0x15077D2C: nop

    // 0x15077D30: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x15077D34: b           L_15077D6C
    // 0x15077D38: sb          $s1, 0x222($t5)
    MEM_B(0X222, ctx->r13) = ctx->r17;
        goto L_15077D6C;
    // 0x15077D38: sb          $s1, 0x222($t5)
    MEM_B(0X222, ctx->r13) = ctx->r17;
L_15077D3C:
    // 0x15077D3C: jal         0x1505A72C
    // 0x15077D40: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_1505A72C(rdram, ctx);
        goto after_0;
    // 0x15077D40: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_0:
    // 0x15077D44: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x15077D48: nop

    // 0x15077D4C: bc1fl       L_15077D64
    if (!c1cs) {
        // 0x15077D50: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15077D64;
    }
    goto skip_9;
    // 0x15077D50: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_9:
    // 0x15077D54: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x15077D58: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x15077D5C: sb          $s1, 0x222($t6)
    MEM_B(0X222, ctx->r14) = ctx->r17;
    // 0x15077D60: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_15077D64:
    // 0x15077D64: bne         $s1, $fp, L_15077CB4
    if (ctx->r17 != ctx->r30) {
        // 0x15077D68: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_15077CB4;
    }
    // 0x15077D68: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
L_15077D6C:
    // 0x15077D6C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15077D70: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15077D74: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15077D78: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x15077D7C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x15077D80: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x15077D84: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x15077D88: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x15077D8C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x15077D90: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x15077D94: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x15077D98: jr          $ra
    // 0x15077D9C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x15077D9C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_150DE6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DE6D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150DE6DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150DE6E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150DE6E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150DE6E8: lw          $a0, 0x7C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7C);
    // 0x150DE6EC: sra         $t6, $a0, 3
    ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
    // 0x150DE6F0: jal         0x15048A40
    // 0x150DE6F4: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    func_15048A40(rdram, ctx);
        goto after_0;
    // 0x150DE6F4: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    after_0:
    // 0x150DE6F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DE6FC: lwc1        $f4, 0xD48($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XD48);
    // 0x150DE700: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DE704: lwc1        $f8, 0xD4C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XD4C);
    // 0x150DE708: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150DE70C: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x150DE710: sra         $t0, $a0, 3
    ctx->r8 = S32(SIGNED(ctx->r4) >> 3);
    // 0x150DE714: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    // 0x150DE718: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150DE71C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150DE720: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x150DE724: jal         0x15048A40
    // 0x150DE728: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    func_15048A40(rdram, ctx);
        goto after_1;
    // 0x150DE728: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    after_1:
    // 0x150DE72C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DE730: lwc1        $f18, 0xD50($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XD50);
    // 0x150DE734: lw          $a0, 0x84($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X84);
    // 0x150DE738: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150DE73C: sra         $t2, $a0, 3
    ctx->r10 = S32(SIGNED(ctx->r4) >> 3);
    // 0x150DE740: andi        $a0, $t2, 0xFF
    ctx->r4 = ctx->r10 & 0XFF;
    // 0x150DE744: jal         0x15048A40
    // 0x150DE748: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    func_15048A40(rdram, ctx);
        goto after_2;
    // 0x150DE748: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x150DE74C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DE750: lwc1        $f6, 0xD54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XD54);
    // 0x150DE754: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150DE758: addiu       $v0, $v0, -0x161C
    ctx->r2 = ADD32(ctx->r2, -0X161C);
    // 0x150DE75C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150DE760: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
    // 0x150DE764: lw          $t8, 0x80($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X80);
    // 0x150DE768: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    // 0x150DE76C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x150DE770: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x150DE774: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x150DE778: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x150DE77C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150DE780: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x150DE784: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x150DE788: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x150DE78C: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x150DE790: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x150DE794: sw          $t1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r9;
    // 0x150DE798: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x150DE79C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x150DE7A0: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x150DE7A4: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x150DE7A8: addu        $t4, $t2, $t5
    ctx->r12 = ADD32(ctx->r10, ctx->r13);
    // 0x150DE7AC: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
    // 0x150DE7B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150DE7B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150DE7B8: jr          $ra
    // 0x150DE7BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x150DE7BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_15160684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15160684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15160688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516068C: jal         0x15163DEC
    // 0x15160690: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    func_15163DEC(rdram, ctx);
        goto after_0;
    // 0x15160690: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x15160694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15160698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1516069C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151606A0: jr          $ra
    // 0x151606A4: nop

    return;
    return;
    // 0x151606A4: nop

;}
RECOMP_FUNC void func_150FB4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FB4C0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150FB4C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x150FB4C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x150FB4CC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x150FB4D0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x150FB4D4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x150FB4D8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x150FB4DC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x150FB4E0: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x150FB4E4: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x150FB4E8: sw          $gp, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r28;
    // 0x150FB4EC: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x150FB4F0: swc1        $f21, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x150FB4F4: swc1        $f22, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f22.u32l;
    // 0x150FB4F8: swc1        $f23, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x150FB4FC: swc1        $f24, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f24.u32l;
    // 0x150FB500: swc1        $f25, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x150FB504: swc1        $f26, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f26.u32l;
    // 0x150FB508: swc1        $f27, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x150FB50C: swc1        $f28, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f28.u32l;
    // 0x150FB510: swc1        $f29, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x150FB514: swc1        $f30, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f30.u32l;
    // 0x150FB518: swc1        $f31, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x150FB51C: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x150FB520: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x150FB524: lwc1        $f1, 0x4($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X4);
    // 0x150FB528: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x150FB52C: lwc1        $f3, 0xC($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0XC);
    // 0x150FB530: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x150FB534: lwc1        $f5, 0x14($a1)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r5, 0X14);
    // 0x150FB538: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x150FB53C: lwc1        $f7, 0x1C($a1)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r5, 0X1C);
    // 0x150FB540: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x150FB544: lwc1        $f9, 0x24($a1)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r5, 0X24);
    // 0x150FB548: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x150FB54C: lwc1        $f11, 0x2C($a1)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r5, 0X2C);
    // 0x150FB550: lwc1        $f12, 0x30($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X30);
    // 0x150FB554: lwc1        $f13, 0x34($a1)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r5, 0X34);
    // 0x150FB558: lwc1        $f14, 0x38($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X38);
    // 0x150FB55C: lwc1        $f15, 0x3C($a1)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r5, 0X3C);
    // 0x150FB560: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x150FB564: lw          $s0, -0x4180($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4180);
    // 0x150FB568: addiu       $s1, $zero, 0x1F40
    ctx->r17 = ADD32(0, 0X1F40);
    // 0x150FB56C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x150FB570: mult        $t0, $s1
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150FB574: mflo        $s1
    ctx->r17 = lo;
    // 0x150FB578: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x150FB57C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150FB580: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150FB584: lw          $t0, -0x19D8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X19D8);
    // 0x150FB588: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x150FB58C: lw          $t1, 0x2FA4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2FA4);
    // 0x150FB590: addiu       $t2, $zero, 0x180
    ctx->r10 = ADD32(0, 0X180);
    // 0x150FB594: mult        $t1, $t2
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150FB598: mflo        $t1
    ctx->r9 = lo;
    // 0x150FB59C: add         $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x150FB5A0: lwc1        $f16, 0xC($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0XC);
    // 0x150FB5A4: lwc1        $f17, 0x10($t0)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r8, 0X10);
    // 0x150FB5A8: lwc1        $f19, 0x4($t0)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r8, 0X4);
    // 0x150FB5AC: lwc1        $f20, 0x8($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X8);
    // 0x150FB5B0: lwc1        $f21, 0x2C($t0)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r8, 0X2C);
    // 0x150FB5B4: add.s       $f21, $f21, $f16
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f16.fl;
    // 0x150FB5B8: lwc1        $f22, 0x24($t0)
    ctx->f22.u32l = MEM_W(ctx->r8, 0X24);
    // 0x150FB5BC: add.s       $f22, $f22, $f17
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f17.fl;
    // 0x150FB5C0: lui         $s2, 0xFA00
    ctx->r18 = S32(0XFA00 << 16);
    // 0x150FB5C4: ori         $s2, $s2, 0x0
    ctx->r18 = ctx->r18 | 0X0;
    // 0x150FB5C8: lui         $s3, 0xF600
    ctx->r19 = S32(0XF600 << 16);
    // 0x150FB5CC: lui         $at, 0x434B
    ctx->r1 = S32(0X434B << 16);
    // 0x150FB5D0: mtc1        $at, $f31
    ctx->f_odd[(31 - 1) * 2] = ctx->r1;
    // 0x150FB5D4: lui         $s7, 0x3F80
    ctx->r23 = S32(0X3F80 << 16);
    // 0x150FB5D8: lui         $fp, 0xFFFF
    ctx->r30 = S32(0XFFFF << 16);
    // 0x150FB5DC: ori         $fp, $fp, 0xFF00
    ctx->r30 = ctx->r30 | 0XFF00;
    // 0x150FB5E0: lui         $gp, 0xDAFB
    ctx->r28 = S32(0XDAFB << 16);
    // 0x150FB5E4: ori         $gp, $gp, 0xDC00
    ctx->r28 = ctx->r28 | 0XDC00;
    // 0x150FB5E8: lui         $a2, 0xCDD3
    ctx->r6 = S32(0XCDD3 << 16);
    // 0x150FB5EC: ori         $a2, $a2, 0xFF00
    ctx->r6 = ctx->r6 | 0XFF00;
    // 0x150FB5F0: lui         $a3, 0xFFCD
    ctx->r7 = S32(0XFFCD << 16);
    // 0x150FB5F4: ori         $a3, $a3, 0xCD00
    ctx->r7 = ctx->r7 | 0XCD00;
    // 0x150FB5F8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150FB5FC: dsll32      $t1, $t0, 0
    ctx->r9 = ctx->r8 << (0 + 32);
    // 0x150FB600: dsubu       $t1, $t1, $t0
    ctx->r9 = ctx->r9 - ctx->r8;
    // 0x150FB604: and         $fp, $fp, $t1
    ctx->r30 = ctx->r30 & ctx->r9;
    // 0x150FB608: and         $gp, $gp, $t1
    ctx->r28 = ctx->r28 & ctx->r9;
    // 0x150FB60C: and         $a2, $a2, $t1
    ctx->r6 = ctx->r6 & ctx->r9;
    // 0x150FB610: and         $a3, $a3, $t1
    ctx->r7 = ctx->r7 & ctx->r9;
    // 0x150FB614: dsll32      $t0, $s2, 0
    ctx->r8 = ctx->r18 << (0 + 32);
    // 0x150FB618: or          $fp, $fp, $t0
    ctx->r30 = ctx->r30 | ctx->r8;
    // 0x150FB61C: or          $gp, $gp, $t0
    ctx->r28 = ctx->r28 | ctx->r8;
    // 0x150FB620: or          $a2, $a2, $t0
    ctx->r6 = ctx->r6 | ctx->r8;
    // 0x150FB624: or          $a3, $a3, $t0
    ctx->r7 = ctx->r7 | ctx->r8;
    // 0x150FB628: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x150FB62C: dsll32      $v0, $v0, 0
    ctx->r2 = ctx->r2 << (0 + 32);
    // 0x150FB630: ori         $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 | 0X4000;
    // 0x150FB634: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x150FB638: dsll32      $v1, $v1, 0
    ctx->r3 = ctx->r3 << (0 + 32);
    // 0x150FB63C: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x150FB640: andi        $t0, $a0, 0x8
    ctx->r8 = ctx->r4 & 0X8;
    // 0x150FB644: beq         $t0, $zero, L_150FB654
    if (ctx->r8 == 0) {
        // 0x150FB648: lui         $t0, 0x2000
        ctx->r8 = S32(0X2000 << 16);
            goto L_150FB654;
    }
    // 0x150FB648: lui         $t0, 0x2000
    ctx->r8 = S32(0X2000 << 16);
    // 0x150FB64C: sd          $zero, 0x0($a0)
    SD(0, 0X0, ctx->r4);
    // 0x150FB650: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_150FB654:
    // 0x150FB654: or          $a0, $a0, $t0
    ctx->r4 = ctx->r4 | ctx->r8;
    // 0x150FB658: lh          $s4, 0x0($s0)
    ctx->r20 = MEM_H(ctx->r16, 0X0);
    // 0x150FB65C: lh          $s5, 0x2($s0)
    ctx->r21 = MEM_H(ctx->r16, 0X2);
    // 0x150FB660: lh          $s6, 0x4($s0)
    ctx->r22 = MEM_H(ctx->r16, 0X4);
L_150FB664:
    // 0x150FB664: sll         $s4, $s4, 16
    ctx->r20 = S32(ctx->r20 << 16);
    // 0x150FB668: sll         $s5, $s5, 16
    ctx->r21 = S32(ctx->r21 << 16);
    // 0x150FB66C: sll         $s6, $s6, 16
    ctx->r22 = S32(ctx->r22 << 16);
    // 0x150FB670: mtc1        $s4, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r20;
    // 0x150FB674: mul.s       $f30, $f3, $f25
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f30.fl = MUL_S(ctx->f3.fl, ctx->f25.fl);
    // 0x150FB678: mtc1        $s5, $f26
    ctx->f26.u32l = ctx->r21;
    // 0x150FB67C: mul.s       $f23, $f7, $f26
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f23.fl = MUL_S(ctx->f7.fl, ctx->f26.fl);
    // 0x150FB680: mtc1        $s6, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r22;
    // 0x150FB684: add.s       $f30, $f30, $f23
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f30.fl = ctx->f30.fl + ctx->f23.fl;
    // 0x150FB688: mul.s       $f23, $f11, $f27
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f23.fl = MUL_S(ctx->f11.fl, ctx->f27.fl);
    // 0x150FB68C: lh          $s4, 0x8($s0)
    ctx->r20 = MEM_H(ctx->r16, 0X8);
    // 0x150FB690: add.s       $f30, $f30, $f23
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f30.fl = ctx->f30.fl + ctx->f23.fl;
    // 0x150FB694: lh          $s5, 0xA($s0)
    ctx->r21 = MEM_H(ctx->r16, 0XA);
    // 0x150FB698: c.ole.s     $f30, $f31
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 31);
    c1cs = ctx->f30.fl <= ctx->f31.fl;
    // 0x150FB69C: bc1tl       L_150FB82C
    if (c1cs) {
        // 0x150FB6A0: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_150FB82C;
    }
    goto skip_0;
    // 0x150FB6A0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_0:
    // 0x150FB6A4: mul.s       $f28, $f0, $f25
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f28.fl = MUL_S(ctx->f0.fl, ctx->f25.fl);
    // 0x150FB6A8: nop

    // 0x150FB6AC: mul.s       $f23, $f4, $f26
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f23.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x150FB6B0: add.s       $f28, $f28, $f23
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f28.fl = ctx->f28.fl + ctx->f23.fl;
    // 0x150FB6B4: mul.s       $f23, $f8, $f27
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f23.fl = MUL_S(ctx->f8.fl, ctx->f27.fl);
    // 0x150FB6B8: add.s       $f28, $f28, $f23
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f28.fl = ctx->f28.fl + ctx->f23.fl;
    // 0x150FB6BC: mtc1        $s7, $f24
    ctx->f24.u32l = ctx->r23;
    // 0x150FB6C0: mul.s       $f28, $f28, $f16
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f16.fl);
    // 0x150FB6C4: div.s       $f24, $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f24.fl = DIV_S(ctx->f24.fl, ctx->f30.fl);
    // 0x150FB6C8: mul.s       $f28, $f28, $f24
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f24.fl);
    // 0x150FB6CC: add.s       $f28, $f28, $f21
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f28.fl = ctx->f28.fl + ctx->f21.fl;
    // 0x150FB6D0: c.olt.s     $f28, $f18
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f28.fl < ctx->f18.fl;
    // 0x150FB6D4: bc1t        L_150FB828
    if (c1cs) {
        // 0x150FB6D8: c.ult.s     $f28, $f19
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 19);
    c1cs = ctx->f28.fl < ctx->f19.fl;
            goto L_150FB828;
    }
    // 0x150FB6D8: c.ult.s     $f28, $f19
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 19);
    c1cs = ctx->f28.fl < ctx->f19.fl;
    // 0x150FB6DC: bc1f        L_150FB828
    if (!c1cs) {
        // 0x150FB6E0: nop
    
            goto L_150FB828;
    }
    // 0x150FB6E0: nop

    // 0x150FB6E4: mul.s       $f29, $f1, $f25
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f29.fl = MUL_S(ctx->f1.fl, ctx->f25.fl);
    // 0x150FB6E8: nop

    // 0x150FB6EC: mul.s       $f23, $f5, $f26
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f23.fl = MUL_S(ctx->f5.fl, ctx->f26.fl);
    // 0x150FB6F0: add.s       $f29, $f29, $f23
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f29.fl = ctx->f29.fl + ctx->f23.fl;
    // 0x150FB6F4: mul.s       $f23, $f9, $f27
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f23.fl = MUL_S(ctx->f9.fl, ctx->f27.fl);
    // 0x150FB6F8: add.s       $f29, $f29, $f23
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f29.fl = ctx->f29.fl + ctx->f23.fl;
    // 0x150FB6FC: mul.s       $f29, $f29, $f17
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f29.fl = MUL_S(ctx->f29.fl, ctx->f17.fl);
    // 0x150FB700: nop

    // 0x150FB704: mul.s       $f29, $f29, $f24
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f29.fl = MUL_S(ctx->f29.fl, ctx->f24.fl);
    // 0x150FB708: sub.s       $f29, $f22, $f29
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f29.fl = ctx->f22.fl - ctx->f29.fl;
    // 0x150FB70C: c.olt.s     $f29, $f18
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f29.fl < ctx->f18.fl;
    // 0x150FB710: bc1t        L_150FB828
    if (c1cs) {
        // 0x150FB714: c.ult.s     $f29, $f20
        CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f29.fl < ctx->f20.fl;
            goto L_150FB828;
    }
    // 0x150FB714: c.ult.s     $f29, $f20
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f29.fl < ctx->f20.fl;
    // 0x150FB718: bc1f        L_150FB828
    if (!c1cs) {
        // 0x150FB71C: nop
    
            goto L_150FB828;
    }
    // 0x150FB71C: nop

    // 0x150FB720: trunc.w.s   $f23, $f28
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 28);
    ctx->f_odd[(23 - 1) * 2] = TRUNC_W_S(ctx->f28.fl);
    // 0x150FB724: trunc.w.s   $f24, $f29
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 29);
    ctx->f24.u32l = TRUNC_W_S(ctx->f29.fl);
    // 0x150FB728: mfc1        $t4, $f23
    ctx->r12 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x150FB72C: mfc1        $t5, $f24
    ctx->r13 = (int32_t)ctx->f24.u32l;
    // 0x150FB730: cvt.s.w     $f25, $f23
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 23);
    ctx->f25.fl = CVT_S_W(ctx->f_odd[(23 - 1) * 2]);
    // 0x150FB734: cvt.s.w     $f26, $f24
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    ctx->f26.fl = CVT_S_W(ctx->f24.u32l);
    // 0x150FB738: sub.s       $f25, $f28, $f25
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f25.fl = ctx->f28.fl - ctx->f25.fl;
    // 0x150FB73C: mtc1        $s7, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r23;
    // 0x150FB740: sub.s       $f26, $f29, $f26
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f29.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f26.fl = ctx->f29.fl - ctx->f26.fl;
    // 0x150FB744: sub.s       $f28, $f23, $f25
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f28.fl = ctx->f23.fl - ctx->f25.fl;
    // 0x150FB748: sub.s       $f29, $f23, $f26
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f29.fl = ctx->f23.fl - ctx->f26.fl;
    // 0x150FB74C: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x150FB750: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x150FB754: lbu         $t3, 0x7($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X7);
    // 0x150FB758: lbu         $t0, 0x6($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X6);
    // 0x150FB75C: mtc1        $t3, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r11;
    // 0x150FB760: cvt.s.w     $f27, $f27
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    ctx->f27.fl = CVT_S_W(ctx->f_odd[(27 - 1) * 2]);
    // 0x150FB764: beql        $t0, $zero, L_150FB788
    if (ctx->r8 == 0) {
        // 0x150FB768: or          $t8, $a3, $zero
        ctx->r24 = ctx->r7 | 0;
            goto L_150FB788;
    }
    goto skip_1;
    // 0x150FB768: or          $t8, $a3, $zero
    ctx->r24 = ctx->r7 | 0;
    skip_1:
    // 0x150FB76C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150FB770: beql        $t0, $at, L_150FB788
    if (ctx->r8 == ctx->r1) {
        // 0x150FB774: or          $t8, $a2, $zero
        ctx->r24 = ctx->r6 | 0;
            goto L_150FB788;
    }
    goto skip_2;
    // 0x150FB774: or          $t8, $a2, $zero
    ctx->r24 = ctx->r6 | 0;
    skip_2:
    // 0x150FB778: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150FB77C: beql        $t0, $at, L_150FB788
    if (ctx->r8 == ctx->r1) {
        // 0x150FB780: or          $t8, $gp, $zero
        ctx->r24 = ctx->r28 | 0;
            goto L_150FB788;
    }
    goto skip_3;
    // 0x150FB780: or          $t8, $gp, $zero
    ctx->r24 = ctx->r28 | 0;
    skip_3:
    // 0x150FB784: or          $t8, $fp, $zero
    ctx->r24 = ctx->r30 | 0;
L_150FB788:
    // 0x150FB788: mul.s       $f24, $f27, $f29
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f24.fl = MUL_S(ctx->f27.fl, ctx->f29.fl);
    // 0x150FB78C: sll         $t1, $t6, 14
    ctx->r9 = S32(ctx->r14 << 14);
    // 0x150FB790: mul.s       $f23, $f24, $f28
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f23.fl = MUL_S(ctx->f24.fl, ctx->f28.fl);
    // 0x150FB794: addu        $at, $s3, $t1
    ctx->r1 = ADD32(ctx->r19, ctx->r9);
    // 0x150FB798: cvt.w.s     $f23, $f23
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    ctx->f_odd[(23 - 1) * 2] = CVT_W_S(ctx->f23.fl);
    // 0x150FB79C: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x150FB7A0: mfc1        $t3, $f23
    ctx->r11 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x150FB7A4: or          $t0, $t8, $t3
    ctx->r8 = ctx->r24 | ctx->r11;
    // 0x150FB7A8: sd          $t0, 0x0($a0)
    SD(ctx->r8, 0X0, ctx->r4);
    // 0x150FB7AC: addu        $t2, $at, $t1
    ctx->r10 = ADD32(ctx->r1, ctx->r9);
    // 0x150FB7B0: dsll32      $t2, $t2, 0
    ctx->r10 = ctx->r10 << (0 + 32);
    // 0x150FB7B4: sll         $at, $t4, 14
    ctx->r1 = S32(ctx->r12 << 14);
    // 0x150FB7B8: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x150FB7BC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x150FB7C0: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
    // 0x150FB7C4: sd          $t2, 0x8($a0)
    SD(ctx->r10, 0X8, ctx->r4);
    // 0x150FB7C8: mul.s       $f23, $f24, $f25
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f23.fl = MUL_S(ctx->f24.fl, ctx->f25.fl);
    // 0x150FB7CC: cvt.w.s     $f23, $f23
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    ctx->f_odd[(23 - 1) * 2] = CVT_W_S(ctx->f23.fl);
    // 0x150FB7D0: mfc1        $t3, $f23
    ctx->r11 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x150FB7D4: or          $t0, $t8, $t3
    ctx->r8 = ctx->r24 | ctx->r11;
    // 0x150FB7D8: sd          $t0, 0x10($a0)
    SD(ctx->r8, 0X10, ctx->r4);
    // 0x150FB7DC: daddu       $t2, $t2, $v0
    ctx->r10 = ctx->r10 + ctx->r2;
    // 0x150FB7E0: sd          $t2, 0x18($a0)
    SD(ctx->r10, 0X18, ctx->r4);
    // 0x150FB7E4: mul.s       $f24, $f27, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = MUL_S(ctx->f27.fl, ctx->f26.fl);
    // 0x150FB7E8: nop

    // 0x150FB7EC: mul.s       $f23, $f24, $f25
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f23.fl = MUL_S(ctx->f24.fl, ctx->f25.fl);
    // 0x150FB7F0: cvt.w.s     $f23, $f23
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    ctx->f_odd[(23 - 1) * 2] = CVT_W_S(ctx->f23.fl);
    // 0x150FB7F4: mfc1        $t3, $f23
    ctx->r11 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x150FB7F8: or          $t0, $t8, $t3
    ctx->r8 = ctx->r24 | ctx->r11;
    // 0x150FB7FC: sd          $t0, 0x20($a0)
    SD(ctx->r8, 0X20, ctx->r4);
    // 0x150FB800: daddu       $t2, $t2, $v1
    ctx->r10 = ctx->r10 + ctx->r3;
    // 0x150FB804: sd          $t2, 0x28($a0)
    SD(ctx->r10, 0X28, ctx->r4);
    // 0x150FB808: mul.s       $f23, $f24, $f28
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f23.fl = MUL_S(ctx->f24.fl, ctx->f28.fl);
    // 0x150FB80C: cvt.w.s     $f23, $f23
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    ctx->f_odd[(23 - 1) * 2] = CVT_W_S(ctx->f23.fl);
    // 0x150FB810: mfc1        $t3, $f23
    ctx->r11 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x150FB814: or          $t0, $t8, $t3
    ctx->r8 = ctx->r24 | ctx->r11;
    // 0x150FB818: sd          $t0, 0x30($a0)
    SD(ctx->r8, 0X30, ctx->r4);
    // 0x150FB81C: dsubu       $t2, $t2, $v0
    ctx->r10 = ctx->r10 - ctx->r2;
    // 0x150FB820: sd          $t2, 0x38($a0)
    SD(ctx->r10, 0X38, ctx->r4);
    // 0x150FB824: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
L_150FB828:
    // 0x150FB828: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_150FB82C:
    // 0x150FB82C: bnel        $s0, $s1, L_150FB664
    if (ctx->r16 != ctx->r17) {
        // 0x150FB830: lh          $s6, 0x4($s0)
        ctx->r22 = MEM_H(ctx->r16, 0X4);
            goto L_150FB664;
    }
    goto skip_4;
    // 0x150FB830: lh          $s6, 0x4($s0)
    ctx->r22 = MEM_H(ctx->r16, 0X4);
    skip_4:
    // 0x150FB834: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x150FB838: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x150FB83C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x150FB840: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x150FB844: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x150FB848: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x150FB84C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x150FB850: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x150FB854: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x150FB858: lw          $gp, 0x34($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X34);
    // 0x150FB85C: lwc1        $f20, 0x38($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150FB860: lwc1        $f21, 0x3C($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x150FB864: lwc1        $f22, 0x40($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150FB868: lwc1        $f23, 0x44($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X44);
    // 0x150FB86C: lwc1        $f24, 0x48($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150FB870: lwc1        $f25, 0x4C($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x150FB874: lwc1        $f26, 0x50($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150FB878: lwc1        $f27, 0x54($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X54);
    // 0x150FB87C: lwc1        $f28, 0x58($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150FB880: lwc1        $f29, 0x5C($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X5C);
    // 0x150FB884: lwc1        $f30, 0x60($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150FB888: lwc1        $f31, 0x64($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X64);
    // 0x150FB88C: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x150FB890: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x150FB894: andi        $t0, $a0, 0x8
    ctx->r8 = ctx->r4 & 0X8;
    // 0x150FB898: beq         $t0, $zero, L_150FB8A8
    if (ctx->r8 == 0) {
        // 0x150FB89C: lui         $t0, 0x2000
        ctx->r8 = S32(0X2000 << 16);
            goto L_150FB8A8;
    }
    // 0x150FB89C: lui         $t0, 0x2000
    ctx->r8 = S32(0X2000 << 16);
    // 0x150FB8A0: sd          $zero, 0x0($a0)
    SD(0, 0X0, ctx->r4);
    // 0x150FB8A4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_150FB8A8:
    // 0x150FB8A8: xor         $a0, $a0, $t0
    ctx->r4 = ctx->r4 ^ ctx->r8;
    // 0x150FB8AC: jr          $ra
    // 0x150FB8B0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    return;
    // 0x150FB8B0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_151087FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151087FC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15108800: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15108804: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15108808: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1510880C: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x15108810: bne         $a2, $at, L_1510882C
    if (ctx->r6 != ctx->r1) {
        // 0x15108814: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_1510882C;
    }
    // 0x15108814: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x15108818: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x1510881C: lbu         $t7, 0x8($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X8);
    // 0x15108820: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x15108824: jr          $ra
    // 0x15108828: sb          $t8, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r24;
    return;
    return;
    // 0x15108828: sb          $t8, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r24;
L_1510882C:
    // 0x1510882C: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x15108830: bne         $v0, $at, L_15108844
    if (ctx->r2 != ctx->r1) {
        // 0x15108834: addiu       $v0, $a0, 0x28
        ctx->r2 = ADD32(ctx->r4, 0X28);
            goto L_15108844;
    }
    // 0x15108834: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x15108838: lbu         $t9, 0x8($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X8);
    // 0x1510883C: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x15108840: sb          $t0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r8;
L_15108844:
    // 0x15108844: jr          $ra
    // 0x15108848: nop

    return;
    return;
    // 0x15108848: nop

;}
RECOMP_FUNC void func_1506FC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FC50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FC54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FC58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FC5C: jal         0x1519E688
    // 0x1506FC60: nop

    func_1519E688(rdram, ctx);
        goto after_0;
    // 0x1506FC60: nop

    after_0:
    // 0x1506FC64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FC68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FC6C: jr          $ra
    // 0x1506FC70: nop

    return;
    return;
    // 0x1506FC70: nop

;}
RECOMP_FUNC void func_15063628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15063628: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1506362C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15063630: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15063634: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x15063638: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x1506363C: lwc1        $f4, 0x130($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X130);
    // 0x15063640: lw          $a1, 0x13C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X13C);
    // 0x15063644: lw          $a2, 0x140($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X140);
    // 0x15063648: lw          $a3, 0x144($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X144);
    // 0x1506364C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15063650: lwc1        $f6, 0x134($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X134);
    // 0x15063654: addiu       $t6, $v0, 0xB0
    ctx->r14 = ADD32(ctx->r2, 0XB0);
    // 0x15063658: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x1506365C: lwc1        $f8, 0x138($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X138);
    // 0x15063660: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x15063664: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x15063668: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1506366C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x15063670: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15063674: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15063678: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1506367C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x15063680: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x15063684: jal         0x15081690
    // 0x15063688: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_15081690(rdram, ctx);
        goto after_0;
    // 0x15063688: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x1506368C: jal         0x150636A4
    // 0x15063690: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_150636A4(rdram, ctx);
        goto after_1;
    // 0x15063690: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_1:
    // 0x15063694: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15063698: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1506369C: jr          $ra
    // 0x150636A0: nop

    return;
    return;
    // 0x150636A0: nop

;}
RECOMP_FUNC void func_150045BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150045BC: jr          $ra
    // 0x150045C0: nop

    return;
    return;
    // 0x150045C0: nop

;}
RECOMP_FUNC void func_151D7000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D7000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D7004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D7008: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151D700C: lw          $v1, 0x48($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X48);
    // 0x151D7010: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x151D7014: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x151D7018: beq         $t6, $zero, L_151D7030
    if (ctx->r14 == 0) {
        // 0x151D701C: nop
    
            goto L_151D7030;
    }
    // 0x151D701C: nop

    // 0x151D7020: lbu         $t7, 0x4($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X4);
    // 0x151D7024: lbu         $t8, 0x3B($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X3B);
    // 0x151D7028: beql        $t7, $t8, L_151D703C
    if (ctx->r15 == ctx->r24) {
        // 0x151D702C: lh          $a0, 0xE($a1)
        ctx->r4 = MEM_H(ctx->r5, 0XE);
            goto L_151D703C;
    }
    goto skip_0;
    // 0x151D702C: lh          $a0, 0xE($a1)
    ctx->r4 = MEM_H(ctx->r5, 0XE);
    skip_0:
L_151D7030:
    // 0x151D7030: b           L_151D70BC
    // 0x151D7034: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D70BC;
    // 0x151D7034: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151D7038: lh          $a0, 0xE($a1)
    ctx->r4 = MEM_H(ctx->r5, 0XE);
L_151D703C:
    // 0x151D703C: lh          $t9, 0xC($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XC);
    // 0x151D7040: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x151D7044: addiu       $a1, $zero, 0x109
    ctx->r5 = ADD32(0, 0X109);
    // 0x151D7048: slt         $at, $a0, $t9
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x151D704C: beq         $at, $zero, L_151D7078
    if (ctx->r1 == 0) {
        // 0x151D7050: nop
    
            goto L_151D7078;
    }
    // 0x151D7050: nop

    // 0x151D7054: lh          $t0, 0xE($v1)
    ctx->r8 = MEM_H(ctx->r3, 0XE);
    // 0x151D7058: multu       $a0, $t0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D705C: mflo        $v0
    ctx->r2 = lo;
    // 0x151D7060: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x151D7064: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x151D7068: bgezl       $v0, L_151D707C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151D706C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_151D707C;
    }
    goto skip_1;
    // 0x151D706C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_1:
    // 0x151D7070: b           L_151D7078
    // 0x151D7074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D7078;
    // 0x151D7074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D7078:
    // 0x151D7078: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_151D707C:
    // 0x151D707C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x151D7080: jal         0x150432CC
    // 0x151D7084: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_150432CC(rdram, ctx);
        goto after_0;
    // 0x151D7084: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x151D7088: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x151D708C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x151D7090: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    // 0x151D7094: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x151D7098: jal         0x1504332C
    // 0x151D709C: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_1504332C(rdram, ctx);
        goto after_1;
    // 0x151D709C: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_1:
    // 0x151D70A0: jal         0x15042D78
    // 0x151D70A4: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    func_15042D78(rdram, ctx);
        goto after_2;
    // 0x151D70A4: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_2:
    // 0x151D70A8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x151D70AC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151D70B0: addiu       $a0, $a0, -0x4DAC
    ctx->r4 = ADD32(ctx->r4, -0X4DAC);
    // 0x151D70B4: jal         0x15042E3C
    // 0x151D70B8: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    func_15042E3C(rdram, ctx);
        goto after_3;
    // 0x151D70B8: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    after_3:
L_151D70BC:
    // 0x151D70BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D70C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D70C4: jr          $ra
    // 0x151D70C8: nop

    return;
    return;
    // 0x151D70C8: nop

;}
RECOMP_FUNC void func_15008230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15008230: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15008234: sb          $zero, 0x35C4($at)
    MEM_B(0X35C4, ctx->r1) = 0;
    // 0x15008238: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1500823C: sb          $zero, 0x3C88($at)
    MEM_B(0X3C88, ctx->r1) = 0;
    // 0x15008240: jr          $ra
    // 0x15008244: nop

    return;
    return;
    // 0x15008244: nop

;}
RECOMP_FUNC void func_15122980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15122980: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15122984: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15122988: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1512298C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15122990: lw          $t6, 0xDC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XDC);
    // 0x15122994: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x15122998: addiu       $a0, $s0, 0x2F8
    ctx->r4 = ADD32(ctx->r16, 0X2F8);
    // 0x1512299C: beq         $t6, $at, L_15122AB0
    if (ctx->r14 == ctx->r1) {
        // 0x151229A0: addiu       $a1, $s0, 0x2C8
        ctx->r5 = ADD32(ctx->r16, 0X2C8);
            goto L_15122AB0;
    }
    // 0x151229A0: addiu       $a1, $s0, 0x2C8
    ctx->r5 = ADD32(ctx->r16, 0X2C8);
    // 0x151229A4: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x151229A8: jal         0x15048F90
    // 0x151229AC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_15048F90(rdram, ctx);
        goto after_0;
    // 0x151229AC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x151229B0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x151229B4: addiu       $a1, $s0, 0x2BC
    ctx->r5 = ADD32(ctx->r16, 0X2BC);
    // 0x151229B8: jal         0x15048F90
    // 0x151229BC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_15048F90(rdram, ctx);
        goto after_1;
    // 0x151229BC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x151229C0: jal         0x15048FC8
    // 0x151229C4: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_15048FC8(rdram, ctx);
        goto after_2;
    // 0x151229C4: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_2:
    // 0x151229C8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x151229CC: jal         0x15048FC8
    // 0x151229D0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_15048FC8(rdram, ctx);
        goto after_3;
    // 0x151229D0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x151229D4: lh          $t7, 0x298($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X298);
    // 0x151229D8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x151229DC: addiu       $a0, $s0, 0x8DC
    ctx->r4 = ADD32(ctx->r16, 0X8DC);
    // 0x151229E0: bne         $t7, $zero, L_151229F4
    if (ctx->r15 != 0) {
        // 0x151229E4: addiu       $a2, $s0, 0x8D8
        ctx->r6 = ADD32(ctx->r16, 0X8D8);
            goto L_151229F4;
    }
    // 0x151229E4: addiu       $a2, $s0, 0x8D8
    ctx->r6 = ADD32(ctx->r16, 0X8D8);
    // 0x151229E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151229EC: b           L_15122A58
    // 0x151229F0: swc1        $f4, 0x8D4($s0)
    MEM_W(0X8D4, ctx->r16) = ctx->f4.u32l;
        goto L_15122A58;
    // 0x151229F0: swc1        $f4, 0x8D4($s0)
    MEM_W(0X8D4, ctx->r16) = ctx->f4.u32l;
L_151229F4:
    // 0x151229F4: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x151229F8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x151229FC: sll         $t9, $t8, 11
    ctx->r25 = S32(ctx->r24 << 11);
    // 0x15122A00: bltzl       $t9, L_15122A3C
    if (SIGNED(ctx->r25) < 0) {
        // 0x15122A04: lui         $at, 0x3F40
        ctx->r1 = S32(0X3F40 << 16);
            goto L_15122A3C;
    }
    goto skip_0;
    // 0x15122A04: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    skip_0:
    // 0x15122A08: lwc1        $f0, 0x390($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X390);
    // 0x15122A0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15122A10: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x15122A14: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x15122A18: nop

    // 0x15122A1C: bc1fl       L_15122A4C
    if (!c1cs) {
        // 0x15122A20: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_15122A4C;
    }
    goto skip_1;
    // 0x15122A20: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    skip_1:
    // 0x15122A24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15122A28: nop

    // 0x15122A2C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x15122A30: nop

    // 0x15122A34: bc1f        L_15122A48
    if (!c1cs) {
        // 0x15122A38: lui         $at, 0x3F40
        ctx->r1 = S32(0X3F40 << 16);
            goto L_15122A48;
    }
    // 0x15122A38: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
L_15122A3C:
    // 0x15122A3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15122A40: b           L_15122A58
    // 0x15122A44: swc1        $f10, 0x8D4($s0)
    MEM_W(0X8D4, ctx->r16) = ctx->f10.u32l;
        goto L_15122A58;
    // 0x15122A44: swc1        $f10, 0x8D4($s0)
    MEM_W(0X8D4, ctx->r16) = ctx->f10.u32l;
L_15122A48:
    // 0x15122A48: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_15122A4C:
    // 0x15122A4C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15122A50: nop

    // 0x15122A54: swc1        $f16, 0x8D4($s0)
    MEM_W(0X8D4, ctx->r16) = ctx->f16.u32l;
L_15122A58:
    // 0x15122A58: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15122A5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15122A60: lw          $a1, 0x8D4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8D4);
    // 0x15122A64: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x15122A68: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x15122A6C: lwc1        $f4, 0x7B4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15122A70: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x15122A74: jal         0x150495B0
    // 0x15122A78: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_150495B0(rdram, ctx);
        goto after_4;
    // 0x15122A78: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x15122A7C: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15122A80: jal         0x15048A70
    // 0x15122A84: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    func_15048A70(rdram, ctx);
        goto after_5;
    // 0x15122A84: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x15122A88: lwc1        $f8, 0x8DC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8DC);
    // 0x15122A8C: lwc1        $f6, 0x37C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15122A90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15122A94: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15122A98: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15122A9C: swc1        $f16, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->f16.u32l;
    // 0x15122AA0: lwc1        $f4, 0x34A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X34A0);
    // 0x15122AA4: lwc1        $f18, 0x37C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15122AA8: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15122AAC: swc1        $f8, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f8.u32l;
L_15122AB0:
    // 0x15122AB0: jal         0x15123A54
    // 0x15122AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15123A54(rdram, ctx);
        goto after_6;
    // 0x15122AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x15122AB8: jal         0x1512E140
    // 0x15122ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1512E140(rdram, ctx);
        goto after_7;
    // 0x15122ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x15122AC0: jal         0x1512A390
    // 0x15122AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1512A390(rdram, ctx);
        goto after_8;
    // 0x15122AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x15122AC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15122ACC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15122AD0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x15122AD4: jr          $ra
    // 0x15122AD8: nop

    return;
    return;
    // 0x15122AD8: nop

;}
RECOMP_FUNC void func_150548D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150548D8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150548DC: jr          $ra
    // 0x150548E0: nop

    return;
    return;
    // 0x150548E0: nop

;}
RECOMP_FUNC void func_150139AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150139AC: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x150139B0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x150139B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150139B8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150139BC: lbu         $t6, 0x16($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X16);
    // 0x150139C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150139C4: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x150139C8: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x150139CC: sb          $t7, 0x16($s0)
    MEM_B(0X16, ctx->r16) = ctx->r15;
    // 0x150139D0: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x150139D4: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x150139D8: lbu         $v0, 0x15($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15);
    // 0x150139DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150139E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150139E4: andi        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 & 0X3;
    // 0x150139E8: beql        $t8, $zero, L_15013A68
    if (ctx->r24 == 0) {
        // 0x150139EC: lh          $v0, 0x6($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X6);
            goto L_15013A68;
    }
    goto skip_0;
    // 0x150139EC: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    skip_0:
    // 0x150139F0: beq         $t8, $at, L_15013A64
    if (ctx->r24 == ctx->r1) {
        // 0x150139F4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15013A64;
    }
    // 0x150139F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150139F8: beq         $t8, $at, L_15013A18
    if (ctx->r24 == ctx->r1) {
        // 0x150139FC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_15013A18;
    }
    // 0x150139FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15013A00: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15013A04: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x15013A08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15013A0C: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x15013A10: b           L_15013AA8
    // 0x15013A14: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
        goto L_15013AA8;
    // 0x15013A14: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
L_15013A18:
    // 0x15013A18: lh          $t9, 0x6($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X6);
    // 0x15013A1C: lh          $t0, 0xA($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XA);
    // 0x15013A20: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15013A24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15013A28: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15013A2C: mflo        $t1
    ctx->r9 = lo;
    // 0x15013A30: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x15013A34: nop

    // 0x15013A38: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15013A3C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15013A40: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x15013A44: lh          $t3, 0x8($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X8);
    // 0x15013A48: lh          $t2, 0x2($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2);
    // 0x15013A4C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15013A50: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x15013A54: nop

    // 0x15013A58: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15013A5C: b           L_15013AA8
    // 0x15013A60: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
        goto L_15013AA8;
    // 0x15013A60: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
L_15013A64:
    // 0x15013A64: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
L_15013A68:
    // 0x15013A68: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013A6C: lwc1        $f18, 0x6648($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6648);
    // 0x15013A70: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15013A74: mflo        $t5
    ctx->r13 = lo;
    // 0x15013A78: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x15013A7C: nop

    // 0x15013A80: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15013A84: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15013A88: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x15013A8C: lh          $t7, 0x8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X8);
    // 0x15013A90: lh          $t6, 0x2($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2);
    // 0x15013A94: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x15013A98: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x15013A9C: nop

    // 0x15013AA0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15013AA4: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
L_15013AA8:
    // 0x15013AA8: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x15013AAC: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x15013AB0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x15013AB4: addiu       $t0, $t0, 0x5FA0
    ctx->r8 = ADD32(ctx->r8, 0X5FA0);
    // 0x15013AB8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x15013ABC: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x15013AC0: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15013AC4: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15013AC8: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x15013ACC: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x15013AD0: lwc1        $f6, 0x18($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X18);
    // 0x15013AD4: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x15013AD8: lbu         $t6, 0x34($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X34);
    // 0x15013ADC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013AE0: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x15013AE4: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x15013AE8: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x15013AEC: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x15013AF0: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x15013AF4: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x15013AF8: lh          $t1, 0x14($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X14);
    // 0x15013AFC: lh          $t2, 0x16($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X16);
    // 0x15013B00: lwc1        $f10, 0x20($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X20);
    // 0x15013B04: lwc1        $f16, 0x24($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X24);
    // 0x15013B08: lwc1        $f18, 0x28($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X28);
    // 0x15013B0C: lwc1        $f4, 0x2C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x15013B10: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15013B14: lbu         $t3, 0x30($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X30);
    // 0x15013B18: lbu         $t4, 0x31($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X31);
    // 0x15013B1C: lbu         $t5, 0x32($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X32);
    // 0x15013B20: lwc1        $f8, 0x664C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X664C);
    // 0x15013B24: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x15013B28: sb          $zero, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = 0;
    // 0x15013B2C: sb          $zero, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = 0;
    // 0x15013B30: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x15013B34: sh          $t1, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r9;
    // 0x15013B38: sh          $t2, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r10;
    // 0x15013B3C: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x15013B40: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x15013B44: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x15013B48: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x15013B4C: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x15013B50: sb          $t3, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r11;
    // 0x15013B54: sb          $t4, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r12;
    // 0x15013B58: sb          $t5, 0x92($sp)
    MEM_B(0X92, ctx->r29) = ctx->r13;
    // 0x15013B5C: beq         $t6, $zero, L_15013B84
    if (ctx->r14 == 0) {
        // 0x15013B60: swc1        $f8, 0x98($sp)
        MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
            goto L_15013B84;
    }
    // 0x15013B60: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x15013B64: jal         0x1510F800
    // 0x15013B68: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x15013B68: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_0:
    // 0x15013B6C: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x15013B70: jal         0x1510FD20
    // 0x15013B74: lh          $a1, 0x4($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4);
    func_1510FD20(rdram, ctx);
        goto after_1;
    // 0x15013B74: lh          $a1, 0x4($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X4);
    after_1:
    // 0x15013B78: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x15013B7C: b           L_15013B88
    // 0x15013B80: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
        goto L_15013B88;
    // 0x15013B80: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
L_15013B84:
    // 0x15013B84: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
L_15013B88:
    // 0x15013B88: lbu         $t7, 0x33($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X33);
    // 0x15013B8C: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    // 0x15013B90: addiu       $t8, $zero, 0x5DC0
    ctx->r24 = ADD32(0, 0X5DC0);
    // 0x15013B94: beq         $t7, $zero, L_15013BD8
    if (ctx->r15 == 0) {
        // 0x15013B98: addiu       $t9, $zero, 0x3E8
        ctx->r25 = ADD32(0, 0X3E8);
            goto L_15013BD8;
    }
    // 0x15013B98: addiu       $t9, $zero, 0x3E8
    ctx->r25 = ADD32(0, 0X3E8);
    // 0x15013B9C: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x15013BA0: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x15013BA4: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x15013BA8: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x15013BAC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15013BB0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15013BB4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15013BB8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15013BBC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15013BC0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15013BC4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15013BC8: jal         0x1000FA64
    // 0x15013BCC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1000FA64(rdram, ctx);
        goto after_2;
    // 0x15013BCC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x15013BD0: b           L_15013BDC
    // 0x15013BD4: sh          $v0, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r2;
        goto L_15013BDC;
    // 0x15013BD4: sh          $v0, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r2;
L_15013BD8:
    // 0x15013BD8: sh          $zero, 0x94($sp)
    MEM_H(0X94, ctx->r29) = 0;
L_15013BDC:
    // 0x15013BDC: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x15013BE0: addiu       $t2, $zero, 0x70
    ctx->r10 = ADD32(0, 0X70);
    // 0x15013BE4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15013BE8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x15013BEC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15013BF0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15013BF4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x15013BF8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15013BFC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x15013C00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15013C04: jal         0x151491F4
    // 0x15013C08: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151491F4(rdram, ctx);
        goto after_3;
    // 0x15013C08: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_3:
    // 0x15013C0C: beq         $v0, $zero, L_15013C20
    if (ctx->r2 == 0) {
        // 0x15013C10: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_15013C20;
    }
    // 0x15013C10: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15013C14: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x15013C18: jal         0x10022EC0
    // 0x15013C1C: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x15013C1C: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_4:
L_15013C20:
    // 0x15013C20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15013C24: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15013C28: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x15013C2C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x15013C30: jr          $ra
    // 0x15013C34: nop

    return;
    return;
    // 0x15013C34: nop

;}
RECOMP_FUNC void func_1502FE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502FE10: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1502FE14: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x1502FE18: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x1502FE1C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x1502FE20: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x1502FE24: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x1502FE28: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x1502FE2C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1502FE30: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x1502FE34: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x1502FE38: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x1502FE3C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1502FE40: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x1502FE44: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1502FE48: addiu       $t6, $t6, -0x830
    ctx->r14 = ADD32(ctx->r14, -0X830);
    // 0x1502FE4C: addu        $v0, $s6, $t6
    ctx->r2 = ADD32(ctx->r22, ctx->r14);
    // 0x1502FE50: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x1502FE54: sll         $t4, $s6, 2
    ctx->r12 = S32(ctx->r22 << 2);
    // 0x1502FE58: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x1502FE5C: bne         $t7, $zero, L_1502FF44
    if (ctx->r15 != 0) {
        // 0x1502FE60: addu        $s3, $s3, $t4
        ctx->r19 = ADD32(ctx->r19, ctx->r12);
            goto L_1502FF44;
    }
    // 0x1502FE60: addu        $s3, $s3, $t4
    ctx->r19 = ADD32(ctx->r19, ctx->r12);
    // 0x1502FE64: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x1502FE68: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1502FE6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1502FE70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1502FE74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1502FE78: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1502FE7C: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x1502FE80: jal         0x1502B6BC
    // 0x1502FE84: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_1502B6BC(rdram, ctx);
        goto after_0;
    // 0x1502FE84: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_0:
    // 0x1502FE88: bne         $v0, $zero, L_1502FE98
    if (ctx->r2 != 0) {
        // 0x1502FE8C: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_1502FE98;
    }
    // 0x1502FE8C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1502FE90: b           L_1502FFB0
    // 0x1502FE94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1502FFB0;
    // 0x1502FE94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1502FE98:
    // 0x1502FE98: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1502FE9C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1502FEA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1502FEA4: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x1502FEA8: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x1502FEAC: sll         $t3, $s6, 2
    ctx->r11 = S32(ctx->r22 << 2);
    // 0x1502FEB0: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x1502FEB4: srl         $t1, $t0, 2
    ctx->r9 = S32(U32(ctx->r8) >> 2);
    // 0x1502FEB8: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x1502FEBC: blez        $t2, L_1502FF2C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x1502FEC0: sb          $t1, 0x0($s5)
        MEM_B(0X0, ctx->r21) = ctx->r9;
            goto L_1502FF2C;
    }
    // 0x1502FEC0: sb          $t1, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r9;
    // 0x1502FEC4: addiu       $t4, $t4, -0x648
    ctx->r12 = ADD32(ctx->r12, -0X648);
    // 0x1502FEC8: addu        $s4, $t3, $t4
    ctx->r20 = ADD32(ctx->r11, ctx->r12);
    // 0x1502FECC: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
L_1502FED0:
    // 0x1502FED0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1502FED4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1502FED8: addu        $v0, $t5, $s0
    ctx->r2 = ADD32(ctx->r13, ctx->r16);
    // 0x1502FEDC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1502FEE0: addiu       $a3, $zero, 0x3E
    ctx->r7 = ADD32(0, 0X3E);
    // 0x1502FEE4: addu        $t7, $t6, $s3
    ctx->r15 = ADD32(ctx->r14, ctx->r19);
    // 0x1502FEE8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1502FEEC: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x1502FEF0: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x1502FEF4: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x1502FEF8: jal         0x1510CE60
    // 0x1502FEFC: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_1510CE60(rdram, ctx);
        goto after_1;
    // 0x1502FEFC: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_1:
    // 0x1502FF00: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x1502FF04: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x1502FF08: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x1502FF0C: jal         0x15168E54
    // 0x1502FF10: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    func_15168E54(rdram, ctx);
        goto after_2;
    // 0x1502FF10: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    after_2:
    // 0x1502FF14: lbu         $t2, 0x0($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X0);
    // 0x1502FF18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1502FF1C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1502FF20: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x1502FF24: bnel        $at, $zero, L_1502FED0
    if (ctx->r1 != 0) {
        // 0x1502FF28: lw          $t5, 0x0($s2)
        ctx->r13 = MEM_W(ctx->r18, 0X0);
            goto L_1502FED0;
    }
    goto skip_0;
    // 0x1502FF28: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    skip_0:
L_1502FF2C:
    // 0x1502FF2C: sll         $t3, $s6, 2
    ctx->r11 = S32(ctx->r22 << 2);
    // 0x1502FF30: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1502FF34: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x1502FF38: sw          $s3, 0x148($at)
    MEM_W(0X148, ctx->r1) = ctx->r19;
    // 0x1502FF3C: b           L_1502FF5C
    // 0x1502FF40: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
        goto L_1502FF5C;
    // 0x1502FF40: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_1502FF44:
    // 0x1502FF44: lw          $s3, 0x148($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X148);
    // 0x1502FF48: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x1502FF4C: sw          $t5, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r13;
    // 0x1502FF50: lw          $t6, 0x4($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X4);
    // 0x1502FF54: srl         $t7, $t6, 2
    ctx->r15 = S32(U32(ctx->r14) >> 2);
    // 0x1502FF58: sb          $t7, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r15;
L_1502FF5C:
    // 0x1502FF5C: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x1502FF60: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x1502FF64: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x1502FF68: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x1502FF6C: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x1502FF70: addiu       $t0, $s3, 0x18
    ctx->r8 = ADD32(ctx->r19, 0X18);
    // 0x1502FF74: beq         $v1, $zero, L_1502FF84
    if (ctx->r3 == 0) {
        // 0x1502FF78: sw          $t0, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r8;
            goto L_1502FF84;
    }
    // 0x1502FF78: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x1502FF7C: lw          $t2, 0x10($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X10);
    // 0x1502FF80: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_1502FF84:
    // 0x1502FF84: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x1502FF88: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x1502FF8C: beql        $v0, $zero, L_1502FFB0
    if (ctx->r2 == 0) {
        // 0x1502FF90: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1502FFB0;
    }
    goto skip_1;
    // 0x1502FF90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x1502FF94: lw          $t3, 0x8($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X8);
    // 0x1502FF98: beq         $v1, $zero, L_1502FFAC
    if (ctx->r3 == 0) {
        // 0x1502FF9C: sw          $t3, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r11;
            goto L_1502FFAC;
    }
    // 0x1502FF9C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x1502FFA0: lw          $t4, 0xC($s3)
    ctx->r12 = MEM_W(ctx->r19, 0XC);
    // 0x1502FFA4: srl         $t5, $t4, 4
    ctx->r13 = S32(U32(ctx->r12) >> 4);
    // 0x1502FFA8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_1502FFAC:
    // 0x1502FFAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1502FFB0:
    // 0x1502FFB0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1502FFB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1502FFB8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x1502FFBC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x1502FFC0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x1502FFC4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x1502FFC8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x1502FFCC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x1502FFD0: jr          $ra
    // 0x1502FFD4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1502FFD4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_16001BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16001BB4: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x16001BB8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x16001BBC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x16001BC0: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    // 0x16001BC4: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x16001BC8: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x16001BCC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x16001BD0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x16001BD4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x16001BD8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x16001BDC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x16001BE0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x16001BE4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x16001BE8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x16001BEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x16001BF0: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x16001BF4: lui         $s7, 0x1600
    ctx->r23 = S32(0X1600 << 16);
    // 0x16001BF8: lui         $s6, 0x1600
    ctx->r22 = S32(0X1600 << 16);
    // 0x16001BFC: lui         $s5, 0x1600
    ctx->r21 = S32(0X1600 << 16);
    // 0x16001C00: sw          $zero, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = 0;
    // 0x16001C04: addiu       $s5, $s5, 0x3C94
    ctx->r21 = ADD32(ctx->r21, 0X3C94);
    // 0x16001C08: addiu       $s6, $s6, 0x4804
    ctx->r22 = ADD32(ctx->r22, 0X4804);
    // 0x16001C0C: addiu       $s7, $s7, 0x3C70
    ctx->r23 = ADD32(ctx->r23, 0X3C70);
    // 0x16001C10: addiu       $fp, $zero, 0xA
    ctx->r30 = ADD32(0, 0XA);
    // 0x16001C14: lbu         $s0, 0x0($a3)
    ctx->r16 = MEM_BU(ctx->r7, 0X0);
L_16001C18:
    // 0x16001C18: addiu       $s2, $a3, 0x1
    ctx->r18 = ADD32(ctx->r7, 0X1);
    // 0x16001C1C: addiu       $v1, $zero, 0x25
    ctx->r3 = ADD32(0, 0X25);
    // 0x16001C20: blez        $s0, L_16001C48
    if (SIGNED(ctx->r16) <= 0) {
        // 0x16001C24: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_16001C48;
    }
    // 0x16001C24: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_16001C28:
    // 0x16001C28: bnel        $v1, $s0, L_16001C3C
    if (ctx->r3 != ctx->r16) {
        // 0x16001C2C: lbu         $s0, 0x0($s2)
        ctx->r16 = MEM_BU(ctx->r18, 0X0);
            goto L_16001C3C;
    }
    goto skip_0;
    // 0x16001C2C: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
    skip_0:
    // 0x16001C30: b           L_16001C48
    // 0x16001C34: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
        goto L_16001C48;
    // 0x16001C34: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x16001C38: lbu         $s0, 0x0($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X0);
L_16001C3C:
    // 0x16001C3C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x16001C40: bgtz        $s0, L_16001C28
    if (SIGNED(ctx->r16) > 0) {
        // 0x16001C44: nop
    
            goto L_16001C28;
    }
    // 0x16001C44: nop

L_16001C48:
    // 0x16001C48: subu        $v0, $s2, $a3
    ctx->r2 = SUB32(ctx->r18, ctx->r7);
    // 0x16001C4C: blez        $v0, L_16001C80
    if (SIGNED(ctx->r2) <= 0) {
        // 0x16001C50: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_16001C80;
    }
    // 0x16001C50: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x16001C54: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x16001C58: jalr        $s4
    // 0x16001C5C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_0;
    // 0x16001C5C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_0:
    // 0x16001C60: beq         $v0, $zero, L_16001C78
    if (ctx->r2 == 0) {
        // 0x16001C64: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_16001C78;
    }
    // 0x16001C64: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x16001C68: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x16001C6C: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x16001C70: b           L_16001C80
    // 0x16001C74: sw          $t7, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r15;
        goto L_16001C80;
    // 0x16001C74: sw          $t7, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r15;
L_16001C78:
    // 0x16001C78: b           L_160021CC
    // 0x16001C7C: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_160021CC;
    // 0x16001C7C: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_16001C80:
    // 0x16001C80: bne         $s0, $zero, L_16001C90
    if (ctx->r16 != 0) {
        // 0x16001C84: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_16001C90;
    }
    // 0x16001C84: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x16001C88: b           L_160021CC
    // 0x16001C8C: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_160021CC;
    // 0x16001C8C: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_16001C90:
    // 0x16001C90: sw          $zero, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = 0;
    // 0x16001C94: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x16001C98: jal         0x10022F14
    // 0x16001C9C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    strchr_recomp(rdram, ctx);
        goto after_1;
    // 0x16001C9C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_1:
    // 0x16001CA0: beq         $v0, $zero, L_16001CE0
    if (ctx->r2 == 0) {
        // 0x16001CA4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_16001CE0;
    }
    // 0x16001CA4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_16001CA8:
    // 0x16001CA8: subu        $t9, $s0, $s6
    ctx->r25 = SUB32(ctx->r16, ctx->r22);
    // 0x16001CAC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x16001CB0: lui         $t1, 0x1600
    ctx->r9 = S32(0X1600 << 16);
    // 0x16001CB4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x16001CB8: lw          $t1, 0x480C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X480C);
    // 0x16001CBC: lw          $t8, 0xD8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD8);
    // 0x16001CC0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x16001CC4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x16001CC8: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x16001CCC: sw          $t2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r10;
    // 0x16001CD0: jal         0x10022F14
    // 0x16001CD4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    strchr_recomp(rdram, ctx);
        goto after_2;
    // 0x16001CD4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    after_2:
    // 0x16001CD8: bne         $v0, $zero, L_16001CA8
    if (ctx->r2 != 0) {
        // 0x16001CDC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_16001CA8;
    }
    // 0x16001CDC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_16001CE0:
    // 0x16001CE0: lbu         $t3, 0x0($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X0);
    // 0x16001CE4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x16001CE8: lw          $t4, 0xEC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XEC);
    // 0x16001CEC: bne         $v0, $t3, L_16001D34
    if (ctx->r2 != ctx->r11) {
        // 0x16001CF0: lui         $a0, 0x1600
        ctx->r4 = S32(0X1600 << 16);
            goto L_16001D34;
    }
    // 0x16001CF0: lui         $a0, 0x1600
    ctx->r4 = S32(0X1600 << 16);
    // 0x16001CF4: addiu       $t5, $t4, 0x3
    ctx->r13 = ADD32(ctx->r12, 0X3);
    // 0x16001CF8: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x16001CFC: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x16001D00: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x16001D04: sw          $t7, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r15;
    // 0x16001D08: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x16001D0C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x16001D10: bgez        $t9, L_16001D2C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x16001D14: sw          $t9, 0xD0($sp)
        MEM_W(0XD0, ctx->r29) = ctx->r25;
            goto L_16001D2C;
    }
    // 0x16001D14: sw          $t9, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r25;
    // 0x16001D18: lw          $t8, 0xD8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD8);
    // 0x16001D1C: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x16001D20: sw          $t0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r8;
    // 0x16001D24: ori         $t1, $t8, 0x4
    ctx->r9 = ctx->r24 | 0X4;
    // 0x16001D28: sw          $t1, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r9;
L_16001D2C:
    // 0x16001D2C: b           L_16001D90
    // 0x16001D30: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_16001D90;
    // 0x16001D30: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_16001D34:
    // 0x16001D34: sw          $zero, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = 0;
    // 0x16001D38: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x16001D3C: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x16001D40: bne         $at, $zero, L_16001D90
    if (ctx->r1 != 0) {
        // 0x16001D44: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_16001D90;
    }
    // 0x16001D44: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x16001D48: beql        $at, $zero, L_16001D94
    if (ctx->r1 == 0) {
        // 0x16001D4C: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_16001D94;
    }
    goto skip_1;
    // 0x16001D4C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    skip_1:
    // 0x16001D50: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
L_16001D54:
    // 0x16001D54: slti        $at, $t2, 0x3E7
    ctx->r1 = SIGNED(ctx->r10) < 0X3E7 ? 1 : 0;
    // 0x16001D58: beql        $at, $zero, L_16001D78
    if (ctx->r1 == 0) {
        // 0x16001D5C: lbu         $a1, 0x1($s2)
        ctx->r5 = MEM_BU(ctx->r18, 0X1);
            goto L_16001D78;
    }
    goto skip_2;
    // 0x16001D5C: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
    skip_2:
    // 0x16001D60: multu       $t2, $fp
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x16001D64: mflo        $t3
    ctx->r11 = lo;
    // 0x16001D68: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x16001D6C: addiu       $t5, $t4, -0x30
    ctx->r13 = ADD32(ctx->r12, -0X30);
    // 0x16001D70: sw          $t5, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r13;
    // 0x16001D74: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
L_16001D78:
    // 0x16001D78: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x16001D7C: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x16001D80: bne         $at, $zero, L_16001D90
    if (ctx->r1 != 0) {
        // 0x16001D84: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_16001D90;
    }
    // 0x16001D84: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x16001D88: bnel        $at, $zero, L_16001D54
    if (ctx->r1 != 0) {
        // 0x16001D8C: lw          $t2, 0xD0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XD0);
            goto L_16001D54;
    }
    goto skip_3;
    // 0x16001D8C: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    skip_3:
L_16001D90:
    // 0x16001D90: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
L_16001D94:
    // 0x16001D94: beq         $a1, $at, L_16001DA8
    if (ctx->r5 == ctx->r1) {
        // 0x16001D98: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_16001DA8;
    }
    // 0x16001D98: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x16001D9C: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
    // 0x16001DA0: b           L_16001E3C
    // 0x16001DA4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_16001E3C;
    // 0x16001DA4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_16001DA8:
    // 0x16001DA8: lbu         $t6, 0x1($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X1);
    // 0x16001DAC: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x16001DB0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x16001DB4: bne         $v0, $t6, L_16001DE0
    if (ctx->r2 != ctx->r14) {
        // 0x16001DB8: addiu       $t0, $t9, 0x3
        ctx->r8 = ADD32(ctx->r25, 0X3);
            goto L_16001DE0;
    }
    // 0x16001DB8: addiu       $t0, $t9, 0x3
    ctx->r8 = ADD32(ctx->r25, 0X3);
    // 0x16001DBC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x16001DC0: and         $t8, $t0, $at
    ctx->r24 = ctx->r8 & ctx->r1;
    // 0x16001DC4: addiu       $t1, $t8, 0x4
    ctx->r9 = ADD32(ctx->r24, 0X4);
    // 0x16001DC8: sw          $t1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r9;
    // 0x16001DCC: lw          $t2, 0x0($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X0);
    // 0x16001DD0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x16001DD4: sw          $t2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r10;
    // 0x16001DD8: b           L_16001E3C
    // 0x16001DDC: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_16001E3C;
    // 0x16001DDC: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_16001DE0:
    // 0x16001DE0: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    // 0x16001DE4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x16001DE8: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x16001DEC: bne         $at, $zero, L_16001E3C
    if (ctx->r1 != 0) {
        // 0x16001DF0: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_16001E3C;
    }
    // 0x16001DF0: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x16001DF4: beq         $at, $zero, L_16001E3C
    if (ctx->r1 == 0) {
        // 0x16001DF8: nop
    
            goto L_16001E3C;
    }
    // 0x16001DF8: nop

    // 0x16001DFC: lw          $t3, 0xCC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XCC);
L_16001E00:
    // 0x16001E00: slti        $at, $t3, 0x3E7
    ctx->r1 = SIGNED(ctx->r11) < 0X3E7 ? 1 : 0;
    // 0x16001E04: beql        $at, $zero, L_16001E24
    if (ctx->r1 == 0) {
        // 0x16001E08: lbu         $a1, 0x1($s2)
        ctx->r5 = MEM_BU(ctx->r18, 0X1);
            goto L_16001E24;
    }
    goto skip_4;
    // 0x16001E08: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
    skip_4:
    // 0x16001E0C: multu       $t3, $fp
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x16001E10: mflo        $t4
    ctx->r12 = lo;
    // 0x16001E14: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x16001E18: addiu       $t7, $t5, -0x30
    ctx->r15 = ADD32(ctx->r13, -0X30);
    // 0x16001E1C: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
    // 0x16001E20: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
L_16001E24:
    // 0x16001E24: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x16001E28: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x16001E2C: bne         $at, $zero, L_16001E3C
    if (ctx->r1 != 0) {
        // 0x16001E30: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_16001E3C;
    }
    // 0x16001E30: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x16001E34: bnel        $at, $zero, L_16001E00
    if (ctx->r1 != 0) {
        // 0x16001E38: lw          $t3, 0xCC($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XCC);
            goto L_16001E00;
    }
    goto skip_5;
    // 0x16001E38: lw          $t3, 0xCC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XCC);
    skip_5:
L_16001E3C:
    // 0x16001E3C: jal         0x10022F14
    // 0x16001E40: addiu       $a0, $a0, 0x4800
    ctx->r4 = ADD32(ctx->r4, 0X4800);
    strchr_recomp(rdram, ctx);
        goto after_3;
    // 0x16001E40: addiu       $a0, $a0, 0x4800
    ctx->r4 = ADD32(ctx->r4, 0X4800);
    after_3:
    // 0x16001E44: beq         $v0, $zero, L_16001E5C
    if (ctx->r2 == 0) {
        // 0x16001E48: addiu       $a0, $sp, 0xA8
        ctx->r4 = ADD32(ctx->r29, 0XA8);
            goto L_16001E5C;
    }
    // 0x16001E48: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x16001E4C: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x16001E50: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x16001E54: b           L_16001E60
    // 0x16001E58: sb          $t6, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r14;
        goto L_16001E60;
    // 0x16001E58: sb          $t6, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r14;
L_16001E5C:
    // 0x16001E5C: sb          $zero, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = 0;
L_16001E60:
    // 0x16001E60: lbu         $t9, 0xDC($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XDC);
    // 0x16001E64: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x16001E68: addiu       $a1, $sp, 0xEC
    ctx->r5 = ADD32(ctx->r29, 0XEC);
    // 0x16001E6C: bne         $v0, $t9, L_16001E8C
    if (ctx->r2 != ctx->r25) {
        // 0x16001E70: addiu       $a3, $sp, 0x7C
        ctx->r7 = ADD32(ctx->r29, 0X7C);
            goto L_16001E8C;
    }
    // 0x16001E70: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    // 0x16001E74: lbu         $t0, 0x0($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X0);
    // 0x16001E78: addiu       $t1, $zero, 0x4C
    ctx->r9 = ADD32(0, 0X4C);
    // 0x16001E7C: bne         $v0, $t0, L_16001E8C
    if (ctx->r2 != ctx->r8) {
        // 0x16001E80: nop
    
            goto L_16001E8C;
    }
    // 0x16001E80: nop

    // 0x16001E84: sb          $t1, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r9;
    // 0x16001E88: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_16001E8C:
    // 0x16001E8C: jal         0x160021FC
    // 0x16001E90: lbu         $a2, 0x0($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X0);
    func_160021FC(rdram, ctx);
        goto after_4;
    // 0x16001E90: lbu         $a2, 0x0($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X0);
    after_4:
    // 0x16001E94: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x16001E98: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x16001E9C: lw          $t4, 0xB8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB8);
    // 0x16001EA0: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x16001EA4: subu        $t3, $t8, $t2
    ctx->r11 = SUB32(ctx->r24, ctx->r10);
    // 0x16001EA8: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x16001EAC: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x16001EB0: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x16001EB4: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x16001EB8: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x16001EBC: subu        $t6, $t5, $t7
    ctx->r14 = SUB32(ctx->r13, ctx->r15);
    // 0x16001EC0: subu        $t0, $t6, $t9
    ctx->r8 = SUB32(ctx->r14, ctx->r25);
    // 0x16001EC4: subu        $t8, $t0, $t1
    ctx->r24 = SUB32(ctx->r8, ctx->r9);
    // 0x16001EC8: subu        $t3, $t8, $t2
    ctx->r11 = SUB32(ctx->r24, ctx->r10);
    // 0x16001ECC: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x16001ED0: bne         $t5, $zero, L_16001F40
    if (ctx->r13 != 0) {
        // 0x16001ED4: sw          $t3, 0xD0($sp)
        MEM_W(0XD0, ctx->r29) = ctx->r11;
            goto L_16001F40;
    }
    // 0x16001ED4: sw          $t3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r11;
    // 0x16001ED8: slt         $t7, $zero, $t3
    ctx->r15 = SIGNED(0) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x16001EDC: beql        $t7, $zero, L_16001F44
    if (ctx->r15 == 0) {
        // 0x16001EE0: lw          $t0, 0xB4($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XB4);
            goto L_16001F44;
    }
    goto skip_6;
    // 0x16001EE0: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    skip_6:
    // 0x16001EE4: beq         $t7, $zero, L_16001F40
    if (ctx->r15 == 0) {
        // 0x16001EE8: or          $s1, $t3, $zero
        ctx->r17 = ctx->r11 | 0;
            goto L_16001F40;
    }
    // 0x16001EE8: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x16001EEC: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_16001EF0:
    // 0x16001EF0: bne         $at, $zero, L_16001F00
    if (ctx->r1 != 0) {
        // 0x16001EF4: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_16001F00;
    }
    // 0x16001EF4: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x16001EF8: b           L_16001F00
    // 0x16001EFC: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_16001F00;
    // 0x16001EFC: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_16001F00:
    // 0x16001F00: blez        $s0, L_16001F34
    if (SIGNED(ctx->r16) <= 0) {
        // 0x16001F04: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_16001F34;
    }
    // 0x16001F04: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x16001F08: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x16001F0C: jalr        $s4
    // 0x16001F10: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_5;
    // 0x16001F10: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x16001F14: beq         $v0, $zero, L_16001F2C
    if (ctx->r2 == 0) {
        // 0x16001F18: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_16001F2C;
    }
    // 0x16001F18: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x16001F1C: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x16001F20: addu        $t9, $t6, $s0
    ctx->r25 = ADD32(ctx->r14, ctx->r16);
    // 0x16001F24: b           L_16001F34
    // 0x16001F28: sw          $t9, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r25;
        goto L_16001F34;
    // 0x16001F28: sw          $t9, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r25;
L_16001F2C:
    // 0x16001F2C: b           L_160021CC
    // 0x16001F30: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_160021CC;
    // 0x16001F30: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_16001F34:
    // 0x16001F34: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x16001F38: bgtzl       $s1, L_16001EF0
    if (SIGNED(ctx->r17) > 0) {
        // 0x16001F3C: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_16001EF0;
    }
    goto skip_7;
    // 0x16001F3C: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_7:
L_16001F40:
    // 0x16001F40: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
L_16001F44:
    // 0x16001F44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x16001F48: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x16001F4C: blezl       $t0, L_16001F84
    if (SIGNED(ctx->r8) <= 0) {
        // 0x16001F50: lw          $t4, 0xB8($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XB8);
            goto L_16001F84;
    }
    goto skip_8;
    // 0x16001F50: lw          $t4, 0xB8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB8);
    skip_8:
    // 0x16001F54: jalr        $s4
    // 0x16001F58: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_6;
    // 0x16001F58: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_6:
    // 0x16001F5C: beq         $v0, $zero, L_16001F78
    if (ctx->r2 == 0) {
        // 0x16001F60: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_16001F78;
    }
    // 0x16001F60: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x16001F64: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x16001F68: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x16001F6C: addu        $t2, $t1, $t8
    ctx->r10 = ADD32(ctx->r9, ctx->r24);
    // 0x16001F70: b           L_16001F80
    // 0x16001F74: sw          $t2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r10;
        goto L_16001F80;
    // 0x16001F74: sw          $t2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r10;
L_16001F78:
    // 0x16001F78: b           L_160021CC
    // 0x16001F7C: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_160021CC;
    // 0x16001F7C: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_16001F80:
    // 0x16001F80: lw          $t4, 0xB8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB8);
L_16001F84:
    // 0x16001F84: slt         $t5, $zero, $t4
    ctx->r13 = SIGNED(0) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x16001F88: beql        $t5, $zero, L_16001FF0
    if (ctx->r13 == 0) {
        // 0x16001F8C: lw          $t6, 0xBC($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XBC);
            goto L_16001FF0;
    }
    goto skip_9;
    // 0x16001F8C: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    skip_9:
    // 0x16001F90: beq         $t5, $zero, L_16001FEC
    if (ctx->r13 == 0) {
        // 0x16001F94: or          $s1, $t4, $zero
        ctx->r17 = ctx->r12 | 0;
            goto L_16001FEC;
    }
    // 0x16001F94: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x16001F98: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_16001F9C:
    // 0x16001F9C: bne         $at, $zero, L_16001FAC
    if (ctx->r1 != 0) {
        // 0x16001FA0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_16001FAC;
    }
    // 0x16001FA0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x16001FA4: b           L_16001FAC
    // 0x16001FA8: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_16001FAC;
    // 0x16001FA8: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_16001FAC:
    // 0x16001FAC: blez        $s0, L_16001FE0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x16001FB0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_16001FE0;
    }
    // 0x16001FB0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x16001FB4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x16001FB8: jalr        $s4
    // 0x16001FBC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_7;
    // 0x16001FBC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x16001FC0: beq         $v0, $zero, L_16001FD8
    if (ctx->r2 == 0) {
        // 0x16001FC4: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_16001FD8;
    }
    // 0x16001FC4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x16001FC8: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x16001FCC: addu        $t7, $t3, $s0
    ctx->r15 = ADD32(ctx->r11, ctx->r16);
    // 0x16001FD0: b           L_16001FE0
    // 0x16001FD4: sw          $t7, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r15;
        goto L_16001FE0;
    // 0x16001FD4: sw          $t7, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r15;
L_16001FD8:
    // 0x16001FD8: b           L_160021CC
    // 0x16001FDC: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_160021CC;
    // 0x16001FDC: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_16001FE0:
    // 0x16001FE0: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x16001FE4: bgtzl       $s1, L_16001F9C
    if (SIGNED(ctx->r17) > 0) {
        // 0x16001FE8: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_16001F9C;
    }
    goto skip_10;
    // 0x16001FE8: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_10:
L_16001FEC:
    // 0x16001FEC: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
L_16001FF0:
    // 0x16001FF0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x16001FF4: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x16001FF8: blezl       $t6, L_16002030
    if (SIGNED(ctx->r14) <= 0) {
        // 0x16001FFC: lw          $t8, 0xC0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XC0);
            goto L_16002030;
    }
    goto skip_11;
    // 0x16001FFC: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    skip_11:
    // 0x16002000: jalr        $s4
    // 0x16002004: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_8;
    // 0x16002004: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_8:
    // 0x16002008: beq         $v0, $zero, L_16002024
    if (ctx->r2 == 0) {
        // 0x1600200C: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_16002024;
    }
    // 0x1600200C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x16002010: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x16002014: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x16002018: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x1600201C: b           L_1600202C
    // 0x16002020: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
        goto L_1600202C;
    // 0x16002020: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
L_16002024:
    // 0x16002024: b           L_160021CC
    // 0x16002028: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_160021CC;
    // 0x16002028: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_1600202C:
    // 0x1600202C: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
L_16002030:
    // 0x16002030: slt         $t2, $zero, $t8
    ctx->r10 = SIGNED(0) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x16002034: beql        $t2, $zero, L_1600209C
    if (ctx->r10 == 0) {
        // 0x16002038: lw          $t3, 0xC4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XC4);
            goto L_1600209C;
    }
    goto skip_12;
    // 0x16002038: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
    skip_12:
    // 0x1600203C: beq         $t2, $zero, L_16002098
    if (ctx->r10 == 0) {
        // 0x16002040: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_16002098;
    }
    // 0x16002040: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x16002044: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_16002048:
    // 0x16002048: bne         $at, $zero, L_16002058
    if (ctx->r1 != 0) {
        // 0x1600204C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_16002058;
    }
    // 0x1600204C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x16002050: b           L_16002058
    // 0x16002054: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_16002058;
    // 0x16002054: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_16002058:
    // 0x16002058: blez        $s0, L_1600208C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x1600205C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_1600208C;
    }
    // 0x1600205C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x16002060: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x16002064: jalr        $s4
    // 0x16002068: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_9;
    // 0x16002068: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x1600206C: beq         $v0, $zero, L_16002084
    if (ctx->r2 == 0) {
        // 0x16002070: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_16002084;
    }
    // 0x16002070: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x16002074: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x16002078: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x1600207C: b           L_1600208C
    // 0x16002080: sw          $t5, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r13;
        goto L_1600208C;
    // 0x16002080: sw          $t5, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r13;
L_16002084:
    // 0x16002084: b           L_160021CC
    // 0x16002088: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_160021CC;
    // 0x16002088: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_1600208C:
    // 0x1600208C: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x16002090: bgtzl       $s1, L_16002048
    if (SIGNED(ctx->r17) > 0) {
        // 0x16002094: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_16002048;
    }
    goto skip_13;
    // 0x16002094: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_13:
L_16002098:
    // 0x16002098: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
L_1600209C:
    // 0x1600209C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x160020A0: lw          $t7, 0xB0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB0);
    // 0x160020A4: blez        $t3, L_160020DC
    if (SIGNED(ctx->r11) <= 0) {
        // 0x160020A8: lw          $t6, 0xBC($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XBC);
            goto L_160020DC;
    }
    // 0x160020A8: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x160020AC: addu        $a1, $t7, $t6
    ctx->r5 = ADD32(ctx->r15, ctx->r14);
    // 0x160020B0: jalr        $s4
    // 0x160020B4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_10;
    // 0x160020B4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_10:
    // 0x160020B8: beq         $v0, $zero, L_160020D4
    if (ctx->r2 == 0) {
        // 0x160020BC: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_160020D4;
    }
    // 0x160020BC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x160020C0: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x160020C4: lw          $t0, 0xC4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC4);
    // 0x160020C8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x160020CC: b           L_160020DC
    // 0x160020D0: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
        goto L_160020DC;
    // 0x160020D0: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
L_160020D4:
    // 0x160020D4: b           L_160021CC
    // 0x160020D8: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_160021CC;
    // 0x160020D8: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_160020DC:
    // 0x160020DC: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x160020E0: slt         $t2, $zero, $t8
    ctx->r10 = SIGNED(0) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x160020E4: beql        $t2, $zero, L_1600214C
    if (ctx->r10 == 0) {
        // 0x160020E8: lw          $t7, 0xD8($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XD8);
            goto L_1600214C;
    }
    goto skip_14;
    // 0x160020E8: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    skip_14:
    // 0x160020EC: beq         $t2, $zero, L_16002148
    if (ctx->r10 == 0) {
        // 0x160020F0: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_16002148;
    }
    // 0x160020F0: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x160020F4: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_160020F8:
    // 0x160020F8: bne         $at, $zero, L_16002108
    if (ctx->r1 != 0) {
        // 0x160020FC: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_16002108;
    }
    // 0x160020FC: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x16002100: b           L_16002108
    // 0x16002104: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_16002108;
    // 0x16002104: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_16002108:
    // 0x16002108: blez        $s0, L_1600213C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x1600210C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_1600213C;
    }
    // 0x1600210C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x16002110: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x16002114: jalr        $s4
    // 0x16002118: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_11;
    // 0x16002118: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x1600211C: beq         $v0, $zero, L_16002134
    if (ctx->r2 == 0) {
        // 0x16002120: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_16002134;
    }
    // 0x16002120: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x16002124: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x16002128: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x1600212C: b           L_1600213C
    // 0x16002130: sw          $t5, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r13;
        goto L_1600213C;
    // 0x16002130: sw          $t5, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r13;
L_16002134:
    // 0x16002134: b           L_160021CC
    // 0x16002138: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_160021CC;
    // 0x16002138: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_1600213C:
    // 0x1600213C: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x16002140: bgtzl       $s1, L_160020F8
    if (SIGNED(ctx->r17) > 0) {
        // 0x16002144: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_160020F8;
    }
    goto skip_15;
    // 0x16002144: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_15:
L_16002148:
    // 0x16002148: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
L_1600214C:
    // 0x1600214C: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x16002150: andi        $t6, $t7, 0x4
    ctx->r14 = ctx->r15 & 0X4;
    // 0x16002154: beq         $t6, $zero, L_160021C0
    if (ctx->r14 == 0) {
        // 0x16002158: slt         $t9, $zero, $t3
        ctx->r25 = SIGNED(0) < SIGNED(ctx->r11) ? 1 : 0;
            goto L_160021C0;
    }
    // 0x16002158: slt         $t9, $zero, $t3
    ctx->r25 = SIGNED(0) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x1600215C: beql        $t9, $zero, L_160021C4
    if (ctx->r25 == 0) {
        // 0x16002160: addiu       $a3, $s2, 0x1
        ctx->r7 = ADD32(ctx->r18, 0X1);
            goto L_160021C4;
    }
    goto skip_16;
    // 0x16002160: addiu       $a3, $s2, 0x1
    ctx->r7 = ADD32(ctx->r18, 0X1);
    skip_16:
    // 0x16002164: beq         $t9, $zero, L_160021C0
    if (ctx->r25 == 0) {
        // 0x16002168: or          $s1, $t3, $zero
        ctx->r17 = ctx->r11 | 0;
            goto L_160021C0;
    }
    // 0x16002168: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x1600216C: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_16002170:
    // 0x16002170: bne         $at, $zero, L_16002180
    if (ctx->r1 != 0) {
        // 0x16002174: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_16002180;
    }
    // 0x16002174: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x16002178: b           L_16002180
    // 0x1600217C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_16002180;
    // 0x1600217C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_16002180:
    // 0x16002180: blez        $s0, L_160021B4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x16002184: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_160021B4;
    }
    // 0x16002184: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x16002188: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x1600218C: jalr        $s4
    // 0x16002190: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_12;
    // 0x16002190: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_12:
    // 0x16002194: beq         $v0, $zero, L_160021AC
    if (ctx->r2 == 0) {
        // 0x16002198: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_160021AC;
    }
    // 0x16002198: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1600219C: lw          $t0, 0xD4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD4);
    // 0x160021A0: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x160021A4: b           L_160021B4
    // 0x160021A8: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
        goto L_160021B4;
    // 0x160021A8: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
L_160021AC:
    // 0x160021AC: b           L_160021CC
    // 0x160021B0: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
        goto L_160021CC;
    // 0x160021B0: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_160021B4:
    // 0x160021B4: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x160021B8: bgtzl       $s1, L_16002170
    if (SIGNED(ctx->r17) > 0) {
        // 0x160021BC: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_16002170;
    }
    goto skip_17;
    // 0x160021BC: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_17:
L_160021C0:
    // 0x160021C0: addiu       $a3, $s2, 0x1
    ctx->r7 = ADD32(ctx->r18, 0X1);
L_160021C4:
    // 0x160021C4: b           L_16001C18
    // 0x160021C8: lbu         $s0, 0x0($a3)
    ctx->r16 = MEM_BU(ctx->r7, 0X0);
        goto L_16001C18;
    // 0x160021C8: lbu         $s0, 0x0($a3)
    ctx->r16 = MEM_BU(ctx->r7, 0X0);
L_160021CC:
    // 0x160021CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x160021D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x160021D4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x160021D8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x160021DC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x160021E0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x160021E4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x160021E8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x160021EC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x160021F0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x160021F4: jr          $ra
    // 0x160021F8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    return;
    // 0x160021F8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_15106510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15106510: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x15106514: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15106518: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1510651C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15106520: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15106524: sub.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15106528: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1510652C: nop

    // 0x15106530: mul.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x15106534: nop

    // 0x15106538: jr          $ra
    // 0x1510653C: nop

    return;
    return;
    // 0x1510653C: nop

;}
RECOMP_FUNC void func_10001420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10001420: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x10001424: addiu       $a1, $t6, 0x3B40
    ctx->r5 = ADD32(ctx->r14, 0X3B40);
    // 0x10001428: addiu       $a0, $a1, 0xFE0
    ctx->r4 = ADD32(ctx->r5, 0XFE0);
L_1000142C:
    // 0x1000142C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x10001430: sltu        $at, $a1, $a0
    ctx->r1 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x10001434: bne         $at, $zero, L_1000142C
    if (ctx->r1 != 0) {
        // 0x10001438: sw          $zero, -0x4($a1)
        MEM_W(-0X4, ctx->r5) = 0;
            goto L_1000142C;
    }
    // 0x10001438: sw          $zero, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = 0;
    // 0x1000143C: jr          $ra
    // 0x10001440: nop

    return;
    return;
    // 0x10001440: nop

;}
RECOMP_FUNC void func_150C5EFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5EFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C5F00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C5F04: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x150C5F08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150C5F0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150C5F10: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
    // 0x150C5F14: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x150C5F18: sw          $zero, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = 0;
    // 0x150C5F1C: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x150C5F20: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x150C5F24: jal         0x1513F6C0
    // 0x150C5F28: sw          $t7, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r15;
    func_1513F6C0(rdram, ctx);
        goto after_0;
    // 0x150C5F28: sw          $t7, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r15;
    after_0:
    // 0x150C5F2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150C5F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C5F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C5F38: jr          $ra
    // 0x150C5F3C: nop

    return;
    return;
    // 0x150C5F3C: nop

;}
RECOMP_FUNC void func_1515F850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515F850: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1515F854: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1515F858: addiu       $v0, $v0, -0x32E0
    ctx->r2 = ADD32(ctx->r2, -0X32E0);
    // 0x1515F85C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515F860: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1515F864: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1515F868: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x1515F86C: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x1515F870: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x1515F874: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1515F878: lwc1        $f12, -0x3260($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3260);
    // 0x1515F87C: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    // 0x1515F880: sb          $t7, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r15;
    // 0x1515F884: jal         0x15047D60
    // 0x1515F888: sb          $t8, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r24;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x1515F888: sb          $t8, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r24;
    after_0:
    // 0x1515F88C: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x1515F890: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1515F894: lui         $at, 0x41EC
    ctx->r1 = S32(0X41EC << 16);
    // 0x1515F898: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1515F89C: lui         $at, 0x42FF
    ctx->r1 = S32(0X42FF << 16);
    // 0x1515F8A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1515F8A4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1515F8A8: lui         $at, 0x428E
    ctx->r1 = S32(0X428E << 16);
    // 0x1515F8AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1515F8B0: lui         $at, 0x42DA
    ctx->r1 = S32(0X42DA << 16);
    // 0x1515F8B4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1515F8B8: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1515F8BC: addiu       $v0, $v0, -0x3260
    ctx->r2 = ADD32(ctx->r2, -0X3260);
    // 0x1515F8C0: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1515F8C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1515F8C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515F8CC: lwc1        $f10, 0x6530($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6530);
    // 0x1515F8D0: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1515F8D4: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1515F8D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1515F8DC: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1515F8E0: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x1515F8E4: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x1515F8E8: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1515F8EC: add.s       $f18, $f8, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x1515F8F0: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515F8F4: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x1515F8F8: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1515F8FC: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x1515F900: jal         0x15144B68
    // 0x1515F904: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    func_15144B68(rdram, ctx);
        goto after_1;
    // 0x1515F904: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    after_1:
    // 0x1515F908: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1515F90C: addiu       $v1, $v1, -0x326C
    ctx->r3 = ADD32(ctx->r3, -0X326C);
    // 0x1515F910: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1515F914: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1515F918: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1515F91C: addiu       $v0, $v0, -0x3260
    ctx->r2 = ADD32(ctx->r2, -0X3260);
    // 0x1515F920: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x1515F924: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x1515F928: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1515F92C: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1515F930: bc1t        L_1515F9DC
    if (c1cs) {
        // 0x1515F934: lui         $v0, 0x800E
        ctx->r2 = S32(0X800E << 16);
            goto L_1515F9DC;
    }
    // 0x1515F934: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1515F938: sub.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x1515F93C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1515F940: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1515F944: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1515F948: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1515F94C: mul.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1515F950: add.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x1515F954: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x1515F958: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x1515F95C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x1515F960: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1515F964: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x1515F968: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x1515F96C: nop

    // 0x1515F970: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x1515F974: beql        $t0, $zero, L_1515F9C4
    if (ctx->r8 == 0) {
        // 0x1515F978: mfc1        $t0, $f4
        ctx->r8 = (int32_t)ctx->f4.u32l;
            goto L_1515F9C4;
    }
    goto skip_0;
    // 0x1515F978: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x1515F97C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1515F980: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1515F984: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1515F988: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x1515F98C: nop

    // 0x1515F990: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x1515F994: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x1515F998: nop

    // 0x1515F99C: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x1515F9A0: bne         $t0, $zero, L_1515F9B8
    if (ctx->r8 != 0) {
        // 0x1515F9A4: nop
    
            goto L_1515F9B8;
    }
    // 0x1515F9A4: nop

    // 0x1515F9A8: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x1515F9AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1515F9B0: b           L_1515F9D0
    // 0x1515F9B4: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_1515F9D0;
    // 0x1515F9B4: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_1515F9B8:
    // 0x1515F9B8: b           L_1515F9D0
    // 0x1515F9BC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_1515F9D0;
    // 0x1515F9BC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x1515F9C0: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
L_1515F9C4:
    // 0x1515F9C4: nop

    // 0x1515F9C8: bltz        $t0, L_1515F9B8
    if (SIGNED(ctx->r8) < 0) {
        // 0x1515F9CC: nop
    
            goto L_1515F9B8;
    }
    // 0x1515F9CC: nop

L_1515F9D0:
    // 0x1515F9D0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x1515F9D4: sb          $t0, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r8;
    // 0x1515F9D8: nop

L_1515F9DC:
    // 0x1515F9DC: addiu       $v0, $v0, -0x3268
    ctx->r2 = ADD32(ctx->r2, -0X3268);
    // 0x1515F9E0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515F9E4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1515F9E8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1515F9EC: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x1515F9F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1515F9F4: bc1t        L_1515FA98
    if (c1cs) {
        // 0x1515F9F8: nop
    
            goto L_1515FA98;
    }
    // 0x1515F9F8: nop

    // 0x1515F9FC: sub.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x1515FA00: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1515FA04: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1515FA08: mul.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x1515FA0C: add.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x1515FA10: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x1515FA14: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x1515FA18: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x1515FA1C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515FA20: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x1515FA24: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x1515FA28: nop

    // 0x1515FA2C: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x1515FA30: beql        $t2, $zero, L_1515FA80
    if (ctx->r10 == 0) {
        // 0x1515FA34: mfc1        $t2, $f8
        ctx->r10 = (int32_t)ctx->f8.u32l;
            goto L_1515FA80;
    }
    goto skip_1;
    // 0x1515FA34: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x1515FA38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1515FA3C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1515FA40: sub.s       $f8, $f4, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1515FA44: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x1515FA48: nop

    // 0x1515FA4C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x1515FA50: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x1515FA54: nop

    // 0x1515FA58: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x1515FA5C: bne         $t2, $zero, L_1515FA74
    if (ctx->r10 != 0) {
        // 0x1515FA60: nop
    
            goto L_1515FA74;
    }
    // 0x1515FA60: nop

    // 0x1515FA64: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x1515FA68: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1515FA6C: b           L_1515FA8C
    // 0x1515FA70: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_1515FA8C;
    // 0x1515FA70: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_1515FA74:
    // 0x1515FA74: b           L_1515FA8C
    // 0x1515FA78: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_1515FA8C;
    // 0x1515FA78: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x1515FA7C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
L_1515FA80:
    // 0x1515FA80: nop

    // 0x1515FA84: bltz        $t2, L_1515FA74
    if (SIGNED(ctx->r10) < 0) {
        // 0x1515FA88: nop
    
            goto L_1515FA74;
    }
    // 0x1515FA88: nop

L_1515FA8C:
    // 0x1515FA8C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x1515FA90: sb          $t2, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r10;
    // 0x1515FA94: nop

L_1515FA98:
    // 0x1515FA98: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1515FA9C: addiu       $v0, $v0, -0x3264
    ctx->r2 = ADD32(ctx->r2, -0X3264);
    // 0x1515FAA0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515FAA4: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x1515FAA8: nop

    // 0x1515FAAC: bc1tl       L_1515FB54
    if (c1cs) {
        // 0x1515FAB0: lbu         $a0, 0x1C($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X1C);
            goto L_1515FB54;
    }
    goto skip_2;
    // 0x1515FAB0: lbu         $a0, 0x1C($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1C);
    skip_2:
    // 0x1515FAB4: sub.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x1515FAB8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1515FABC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1515FAC0: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1515FAC4: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x1515FAC8: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x1515FACC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x1515FAD0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x1515FAD4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515FAD8: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x1515FADC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x1515FAE0: nop

    // 0x1515FAE4: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x1515FAE8: beql        $t4, $zero, L_1515FB38
    if (ctx->r12 == 0) {
        // 0x1515FAEC: mfc1        $t4, $f6
        ctx->r12 = (int32_t)ctx->f6.u32l;
            goto L_1515FB38;
    }
    goto skip_3;
    // 0x1515FAEC: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    skip_3:
    // 0x1515FAF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1515FAF4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1515FAF8: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x1515FAFC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x1515FB00: nop

    // 0x1515FB04: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1515FB08: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x1515FB0C: nop

    // 0x1515FB10: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x1515FB14: bne         $t4, $zero, L_1515FB2C
    if (ctx->r12 != 0) {
        // 0x1515FB18: nop
    
            goto L_1515FB2C;
    }
    // 0x1515FB18: nop

    // 0x1515FB1C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x1515FB20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1515FB24: b           L_1515FB44
    // 0x1515FB28: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_1515FB44;
    // 0x1515FB28: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_1515FB2C:
    // 0x1515FB2C: b           L_1515FB44
    // 0x1515FB30: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_1515FB44;
    // 0x1515FB30: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x1515FB34: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
L_1515FB38:
    // 0x1515FB38: nop

    // 0x1515FB3C: bltz        $t4, L_1515FB2C
    if (SIGNED(ctx->r12) < 0) {
        // 0x1515FB40: nop
    
            goto L_1515FB2C;
    }
    // 0x1515FB40: nop

L_1515FB44:
    // 0x1515FB44: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x1515FB48: sb          $t4, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r12;
    // 0x1515FB4C: nop

    // 0x1515FB50: lbu         $a0, 0x1C($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1C);
L_1515FB54:
    // 0x1515FB54: lbu         $a1, 0x1D($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1D);
    // 0x1515FB58: jal         0x1515D4D4
    // 0x1515FB5C: lbu         $a2, 0x1E($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1E);
    func_1515D4D4(rdram, ctx);
        goto after_2;
    // 0x1515FB5C: lbu         $a2, 0x1E($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1E);
    after_2:
    // 0x1515FB60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515FB64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1515FB68: jr          $ra
    // 0x1515FB6C: nop

    return;
    return;
    // 0x1515FB6C: nop

;}
RECOMP_FUNC void func_151C1570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C1570: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151C1574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151C1578: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151C157C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x151C1580: lw          $t7, 0x1F0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1F0);
    // 0x151C1584: beql        $t7, $zero, L_151C1598
    if (ctx->r15 == 0) {
        // 0x151C1588: lw          $a1, 0x28($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X28);
            goto L_151C1598;
    }
    goto skip_0;
    // 0x151C1588: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x151C158C: jal         0x1516972C
    // 0x151C1590: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151C1590: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x151C1594: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
L_151C1598:
    // 0x151C1598: lw          $a0, 0x1F4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X1F4);
    // 0x151C159C: addiu       $a1, $a1, 0x170
    ctx->r5 = ADD32(ctx->r5, 0X170);
    // 0x151C15A0: beql        $a0, $zero, L_151C15B8
    if (ctx->r4 == 0) {
        // 0x151C15A4: lw          $v1, 0x88($a1)
        ctx->r3 = MEM_W(ctx->r5, 0X88);
            goto L_151C15B8;
    }
    goto skip_1;
    // 0x151C15A4: lw          $v1, 0x88($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X88);
    skip_1:
    // 0x151C15A8: jal         0x1516972C
    // 0x151C15AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x151C15AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x151C15B0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x151C15B4: lw          $v1, 0x88($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X88);
L_151C15B8:
    // 0x151C15B8: beq         $v1, $zero, L_151C15C4
    if (ctx->r3 == 0) {
        // 0x151C15BC: addiu       $v0, $v1, 0x110
        ctx->r2 = ADD32(ctx->r3, 0X110);
            goto L_151C15C4;
    }
    // 0x151C15BC: addiu       $v0, $v1, 0x110
    ctx->r2 = ADD32(ctx->r3, 0X110);
    // 0x151C15C0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_151C15C4:
    // 0x151C15C4: lw          $a0, 0x8C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8C);
    // 0x151C15C8: beq         $a0, $zero, L_151C15D8
    if (ctx->r4 == 0) {
        // 0x151C15CC: nop
    
            goto L_151C15D8;
    }
    // 0x151C15CC: nop

    // 0x151C15D0: jal         0x1516972C
    // 0x151C15D4: nop

    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x151C15D4: nop

    after_2:
L_151C15D8:
    // 0x151C15D8: lui         $a0, 0x151C
    ctx->r4 = S32(0X151C << 16);
    // 0x151C15DC: addiu       $a0, $a0, 0x110C
    ctx->r4 = ADD32(ctx->r4, 0X110C);
    // 0x151C15E0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151C15E4: jal         0x1000FD38
    // 0x151C15E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1000FD38(rdram, ctx);
        goto after_3;
    // 0x151C15E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x151C15EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151C15F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151C15F4: jr          $ra
    // 0x151C15F8: nop

    return;
    return;
    // 0x151C15F8: nop

;}
RECOMP_FUNC void func_151065BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151065BC: lui         $at, 0xC110
    ctx->r1 = S32(0XC110 << 16);
    // 0x151065C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151065C4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x151065C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151065CC: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x151065D0: nop

    // 0x151065D4: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x151065D8: nop

    // 0x151065DC: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x151065E0: add.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x151065E4: jr          $ra
    // 0x151065E8: nop

    return;
    return;
    // 0x151065E8: nop

;}
RECOMP_FUNC void func_150A6360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A6360: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x150A6364: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x150A6368: lwc1        $f13, 0x10($sp)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x150A636C: lwc1        $f15, 0x14($sp)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r29, 0X14);
    // 0x150A6370: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x150A6374: lwc1        $f17, 0x1C($sp)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r29, 0X1C);
    // 0x150A6378: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150A637C: lwc1        $f5, -0x64E0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X64E0);
    // 0x150A6380: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x150A6384: lwc1        $f1, 0x18($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X18);
    // 0x150A6388: mul.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x150A638C: lwc1        $f2, 0x28($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X28);
    // 0x150A6390: mul.s       $f10, $f1, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x150A6394: lwc1        $f3, 0x38($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X38);
    // 0x150A6398: mul.s       $f11, $f2, $f13
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f11.fl = MUL_S(ctx->f2.fl, ctx->f13.fl);
    // 0x150A639C: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150A63A0: add.s       $f4, $f11, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f11.fl + ctx->f3.fl;
    // 0x150A63A4: neg.s       $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = -ctx->f5.fl;
    // 0x150A63A8: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150A63AC: neg.s       $f17, $f17
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f17.fl); 
    ctx->f17.fl = -ctx->f17.fl;
    // 0x150A63B0: sub.s       $f4, $f18, $f15
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f15.fl;
    // 0x150A63B4: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x150A63B8: c.ule.s     $f4, $f5
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    c1cs = ctx->f4.fl <= ctx->f5.fl;
    // 0x150A63BC: bc1f        L_150A64B4
    if (!c1cs) {
        // 0x150A63C0: add.s       $f4, $f18, $f15
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f15.fl;
            goto L_150A64B4;
    }
    // 0x150A63C0: add.s       $f4, $f18, $f15
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f15.fl;
    // 0x150A63C4: lwc1        $f1, 0x10($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X10);
    // 0x150A63C8: c.olt.s     $f4, $f17
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 17);
    c1cs = ctx->f4.fl < ctx->f17.fl;
    // 0x150A63CC: bc1t        L_150A64B4
    if (c1cs) {
        // 0x150A63D0: lwc1        $f6, 0x88($a0)
        ctx->f6.u32l = MEM_W(ctx->r4, 0X88);
            goto L_150A64B4;
    }
    // 0x150A63D0: lwc1        $f6, 0x88($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X88);
    // 0x150A63D4: mul.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x150A63D8: lwc1        $f2, 0x20($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X20);
    // 0x150A63DC: mul.s       $f10, $f1, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x150A63E0: lwc1        $f3, 0x30($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X30);
    // 0x150A63E4: mul.s       $f11, $f2, $f13
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f11.fl = MUL_S(ctx->f2.fl, ctx->f13.fl);
    // 0x150A63E8: add.s       $f9, $f4, $f10
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f9.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150A63EC: add.s       $f4, $f11, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f11.fl + ctx->f3.fl;
    // 0x150A63F0: add.s       $f9, $f9, $f4
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f4.fl;
    // 0x150A63F4: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x150A63F8: lwc1        $f8, 0x90($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X90);
    // 0x150A63FC: mul.s       $f4, $f9, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f9.fl, ctx->f6.fl);
    // 0x150A6400: neg.s       $f15, $f15
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f15.fl); 
    ctx->f15.fl = -ctx->f15.fl;
    // 0x150A6404: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x150A6408: lwc1        $f1, 0x14($a1)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r5, 0X14);
    // 0x150A640C: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150A6410: c.ult.s     $f4, $f15
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 15);
    c1cs = ctx->f4.fl < ctx->f15.fl;
    // 0x150A6414: bc1t        L_150A64B4
    if (c1cs) {
        // 0x150A6418: lwc1        $f6, 0x94($a0)
        ctx->f6.u32l = MEM_W(ctx->r4, 0X94);
            goto L_150A64B4;
    }
    // 0x150A6418: lwc1        $f6, 0x94($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X94);
    // 0x150A641C: mul.s       $f4, $f9, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f9.fl, ctx->f6.fl);
    // 0x150A6420: lwc1        $f8, 0x9C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x150A6424: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x150A6428: lwc1        $f7, 0xA4($a0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r4, 0XA4);
    // 0x150A642C: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150A6430: c.ult.s     $f4, $f15
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 15);
    c1cs = ctx->f4.fl < ctx->f15.fl;
    // 0x150A6434: bc1t        L_150A64B4
    if (c1cs) {
        // 0x150A6438: lwc1        $f8, 0xA8($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0XA8);
            goto L_150A64B4;
    }
    // 0x150A6438: lwc1        $f8, 0xA8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x150A643C: mul.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x150A6440: lwc1        $f2, 0x24($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X24);
    // 0x150A6444: mul.s       $f10, $f1, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f1.fl, ctx->f14.fl);
    // 0x150A6448: lwc1        $f3, 0x34($a1)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r5, 0X34);
    // 0x150A644C: mul.s       $f11, $f2, $f13
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f11.fl = MUL_S(ctx->f2.fl, ctx->f13.fl);
    // 0x150A6450: add.s       $f9, $f4, $f10
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f9.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150A6454: add.s       $f4, $f11, $f3
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f4.fl = ctx->f11.fl + ctx->f3.fl;
    // 0x150A6458: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x150A645C: add.s       $f9, $f9, $f4
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f4.fl;
    // 0x150A6460: mul.s       $f4, $f9, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = MUL_S(ctx->f9.fl, ctx->f7.fl);
    // 0x150A6464: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
    // 0x150A6468: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150A646C: c.ult.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x150A6470: bc1t        L_150A64B4
    if (c1cs) {
        // 0x150A6474: lwc1        $f7, 0xB0($a0)
        ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r4, 0XB0);
            goto L_150A64B4;
    }
    // 0x150A6474: lwc1        $f7, 0xB0($a0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r4, 0XB0);
    // 0x150A6478: mul.s       $f4, $f9, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = MUL_S(ctx->f9.fl, ctx->f7.fl);
    // 0x150A647C: lwc1        $f8, 0xB4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x150A6480: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x150A6484: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150A6488: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150A648C: c.ult.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x150A6490: bc1t        L_150A64B4
    if (c1cs) {
        // 0x150A6494: cvt.w.s     $f18, $f18
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
            goto L_150A64B4;
    }
    // 0x150A6494: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150A6498: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x150A649C: nop

    // 0x150A64A0: bne         $v0, $zero, L_150A64B8
    if (ctx->r2 != 0) {
        // 0x150A64A4: nop
    
            goto L_150A64B8;
    }
    // 0x150A64A4: nop

    // 0x150A64A8: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x150A64AC: j           L_150A64B8
    // 0x150A64B0: nop

        goto L_150A64B8;
    // 0x150A64B0: nop

L_150A64B4:
    // 0x150A64B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150A64B8:
    // 0x150A64B8: jr          $ra
    // 0x150A64BC: nop

    return;
    return;
    // 0x150A64BC: nop

    // 0x150A64C0: jr          $ra
    // 0x150A64C4: nop

    return;
    return;
    // 0x150A64C4: nop

    // 0x150A64C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150A64CC: addiu       $t0, $zero, -0x2710
    ctx->r8 = ADD32(0, -0X2710);
    // 0x150A64D0: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x150A64D4: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x150A64D8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x150A64DC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150A64E0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x150A64E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150A64E8: jal         0x150A6568
    // 0x150A64EC: nop

    func_150A6568(rdram, ctx);
        goto after_0;
    // 0x150A64EC: nop

    after_0:
    // 0x150A64F0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x150A64F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150A64F8: jr          $ra
    // 0x150A64FC: nop

    return;
    return;
    // 0x150A64FC: nop

;}
RECOMP_FUNC void func_151061EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151061EC: lw          $v1, 0x48($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X48);
    // 0x151061F0: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x151061F4: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x151061F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151061FC: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x15106200: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15106204: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x15106208: addiu       $v0, $v0, 0x88
    ctx->r2 = ADD32(ctx->r2, 0X88);
    // 0x1510620C: jr          $ra
    // 0x15106210: nop

    return;
    return;
    // 0x15106210: nop

;}
RECOMP_FUNC void func_150C5BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5BD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C5BD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C5BDC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150C5BE0: lw          $t6, 0xC8($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XC8);
    // 0x150C5BE4: addiu       $v0, $a3, 0xC8
    ctx->r2 = ADD32(ctx->r7, 0XC8);
    // 0x150C5BE8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x150C5BEC: bnel        $t7, $zero, L_150C5C00
    if (ctx->r15 != 0) {
        // 0x150C5BF0: lw          $v1, 0x0($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X0);
            goto L_150C5C00;
    }
    goto skip_0;
    // 0x150C5BF0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x150C5BF4: b           L_150C5C64
    // 0x150C5BF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150C5C64;
    // 0x150C5BF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150C5BFC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
L_150C5C00:
    // 0x150C5C00: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x150C5C04: lbu         $t9, 0x3B($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X3B);
    // 0x150C5C08: beql        $t8, $t9, L_150C5C1C
    if (ctx->r24 == ctx->r25) {
        // 0x150C5C0C: lw          $t0, 0x1D4($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X1D4);
            goto L_150C5C1C;
    }
    goto skip_1;
    // 0x150C5C0C: lw          $t0, 0x1D4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X1D4);
    skip_1:
    // 0x150C5C10: b           L_150C5C64
    // 0x150C5C14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150C5C64;
    // 0x150C5C14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150C5C18: lw          $t0, 0x1D4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X1D4);
L_150C5C1C:
    // 0x150C5C1C: bnel        $t0, $zero, L_150C5C4C
    if (ctx->r8 != 0) {
        // 0x150C5C20: lbu         $t3, 0x5($v0)
        ctx->r11 = MEM_BU(ctx->r2, 0X5);
            goto L_150C5C4C;
    }
    goto skip_2;
    // 0x150C5C20: lbu         $t3, 0x5($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X5);
    skip_2:
    // 0x150C5C24: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x150C5C28: swc1        $f4, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f4.u32l;
    // 0x150C5C2C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x150C5C30: lwc1        $f6, 0x18($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X18);
    // 0x150C5C34: swc1        $f6, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f6.u32l;
    // 0x150C5C38: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x150C5C3C: lwc1        $f8, 0x1C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x150C5C40: b           L_150C5C60
    // 0x150C5C44: swc1        $f8, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f8.u32l;
        goto L_150C5C60;
    // 0x150C5C44: swc1        $f8, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f8.u32l;
    // 0x150C5C48: lbu         $t3, 0x5($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X5);
L_150C5C4C:
    // 0x150C5C4C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x150C5C50: addiu       $a1, $a3, 0x24
    ctx->r5 = ADD32(ctx->r7, 0X24);
    // 0x150C5C54: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x150C5C58: jal         0x15143134
    // 0x150C5C5C: addu        $a2, $t0, $t4
    ctx->r6 = ADD32(ctx->r8, ctx->r12);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x150C5C5C: addu        $a2, $t0, $t4
    ctx->r6 = ADD32(ctx->r8, ctx->r12);
    after_0:
L_150C5C60:
    // 0x150C5C60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150C5C64:
    // 0x150C5C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C5C68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C5C6C: jr          $ra
    // 0x150C5C70: nop

    return;
    return;
    // 0x150C5C70: nop

;}
RECOMP_FUNC void func_150F23E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F23E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150F23E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150F23E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150F23EC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150F23F0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x150F23F4: jal         0x15047D60
    // 0x150F23F8: lwc1        $f12, 0x170($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X170);
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x150F23F8: lwc1        $f12, 0x170($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X170);
    after_0:
    // 0x150F23FC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x150F2400: addiu       $s0, $v0, 0x170
    ctx->r16 = ADD32(ctx->r2, 0X170);
    // 0x150F2404: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150F2408: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150F240C: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x150F2410: jal         0x15047D60
    // 0x150F2414: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x150F2414: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    after_1:
    // 0x150F2418: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150F241C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x150F2420: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F2424: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150F2428: swc1        $f10, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f10.u32l;
    // 0x150F242C: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F2430: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150F2434: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150F2438: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150F243C: jal         0x15144B68
    // 0x150F2440: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    func_15144B68(rdram, ctx);
        goto after_2;
    // 0x150F2440: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    after_2:
    // 0x150F2444: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x150F2448: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F244C: lwc1        $f10, -0x165C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F2450: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x150F2454: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150F2458: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150F245C: jal         0x15144B68
    // 0x150F2460: add.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f16.fl;
    func_15144B68(rdram, ctx);
        goto after_3;
    // 0x150F2460: add.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f16.fl;
    after_3:
    // 0x150F2464: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x150F2468: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F246C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150F2470: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150F2474: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150F2478: jr          $ra
    // 0x150F247C: nop

    return;
    return;
    // 0x150F247C: nop

;}
RECOMP_FUNC void func_150AF6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AF6E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150AF6E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150AF6EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150AF6F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150AF6F4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x150AF6F8: addiu       $a2, $s0, 0xA8
    ctx->r6 = ADD32(ctx->r16, 0XA8);
    // 0x150AF6FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150AF700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150AF704: addiu       $a1, $s0, 0xAC
    ctx->r5 = ADD32(ctx->r16, 0XAC);
    // 0x150AF708: jal         0x15131828
    // 0x150AF70C: addiu       $a3, $s0, 0xAA
    ctx->r7 = ADD32(ctx->r16, 0XAA);
    func_15131828(rdram, ctx);
        goto after_0;
    // 0x150AF70C: addiu       $a3, $s0, 0xAA
    ctx->r7 = ADD32(ctx->r16, 0XAA);
    after_0:
    // 0x150AF710: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x150AF714: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
    // 0x150AF718: jal         0x15131958
    // 0x150AF71C: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    func_15131958(rdram, ctx);
        goto after_1;
    // 0x150AF71C: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    after_1:
    // 0x150AF720: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150AF724: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150AF728: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150AF72C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150AF730: jr          $ra
    // 0x150AF734: nop

    return;
    return;
    // 0x150AF734: nop

;}
RECOMP_FUNC void func_15185D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15185D5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15185D60: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15185D64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15185D68: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x15185D6C: nop

    // 0x15185D70: bc1f        L_15185D7C
    if (!c1cs) {
        // 0x15185D74: nop
    
            goto L_15185D7C;
    }
    // 0x15185D74: nop

    // 0x15185D78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15185D7C:
    // 0x15185D7C: jr          $ra
    // 0x15185D80: nop

    return;
    return;
    // 0x15185D80: nop

;}
RECOMP_FUNC void func_1505C140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505C140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1505C144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1505C148: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1505C14C: lwc1        $f6, 0x14($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X14);
    // 0x1505C150: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x1505C154: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x1505C158: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1505C15C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1505C160: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1505C164: jal         0x1505A630
    // 0x1505C168: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_1505A630(rdram, ctx);
        goto after_0;
    // 0x1505C168: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x1505C16C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x1505C170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1505C174: lhu         $t8, 0x7A($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X7A);
    // 0x1505C178: subu        $v1, $v0, $t8
    ctx->r3 = SUB32(ctx->r2, ctx->r24);
    // 0x1505C17C: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x1505C180: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1505C184: bgez        $t0, L_1505C198
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1505C188: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_1505C198;
    }
    // 0x1505C188: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x1505C18C: negu        $v1, $t0
    ctx->r3 = SUB32(0, ctx->r8);
    // 0x1505C190: sll         $t1, $v1, 16
    ctx->r9 = S32(ctx->r3 << 16);
    // 0x1505C194: sra         $v1, $t1, 16
    ctx->r3 = S32(SIGNED(ctx->r9) >> 16);
L_1505C198:
    // 0x1505C198: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1505C19C: jr          $ra
    // 0x1505C1A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1505C1A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_150F2518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F2518: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x150F251C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F2520: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x150F2524: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x150F2528: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x150F252C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x150F2530: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x150F2534: lw          $t8, 0x50($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X50);
    // 0x150F2538: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x150F253C: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x150F2540: lw          $a3, 0x28($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X28);
    // 0x150F2544: lw          $a1, 0x24($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X24);
    // 0x150F2548: jal         0x150A8050
    // 0x150F254C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x150F254C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x150F2550: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x150F2554: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150F2558: lbu         $t0, -0x1640($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1640);
    // 0x150F255C: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150F2560: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x150F2564: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x150F2568: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x150F256C: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150F2570: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    // 0x150F2574: addiu       $a1, $a1, 0x78
    ctx->r5 = ADD32(ctx->r5, 0X78);
    // 0x150F2578: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x150F257C: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x150F2580: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x150F2584: jal         0x150A7790
    // 0x150F2588: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x150F2588: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x150F258C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F2590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F2594: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x150F2598: jr          $ra
    // 0x150F259C: nop

    return;
    return;
    // 0x150F259C: nop

;}
RECOMP_FUNC void func_150AAA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AAA20: or          $t7, $ra, $zero
    ctx->r15 = ctx->r31 | 0;
    // 0x150AAA24: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150AAA28: mov.s       $f3, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    ctx->f3.fl = ctx->f23.fl;
    // 0x150AAA2C: mov.s       $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    ctx->f4.fl = ctx->f24.fl;
    // 0x150AAA30: jal         0x150AA470
    // 0x150AAA34: mov.s       $f5, $f25
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 25);
    ctx->f5.fl = ctx->f25.fl;
    static_5_150AA470(rdram, ctx);
        goto after_0;
    // 0x150AAA34: mov.s       $f5, $f25
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 25);
    ctx->f5.fl = ctx->f25.fl;
    after_0:
    // 0x150AAA38: bne         $v0, $zero, L_150AAA50
    if (ctx->r2 != 0) {
        // 0x150AAA3C: or          $t4, $v0, $zero
        ctx->r12 = ctx->r2 | 0;
            goto L_150AAA50;
    }
    // 0x150AAA3C: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x150AAA40: jal         0x150AA9A0
    // 0x150AAA44: nop

    func_150AA9A0(rdram, ctx);
        goto after_1;
    // 0x150AAA44: nop

    after_1:
    // 0x150AAA48: j           L_150AAD84
    // 0x150AAA4C: nop

        goto L_150AAD84;
    // 0x150AAA4C: nop

L_150AAA50:
    // 0x150AAA50: mov.s       $f3, $f26
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 26);
    ctx->f3.fl = ctx->f26.fl;
    // 0x150AAA54: mov.s       $f4, $f27
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 27);
    ctx->f4.fl = ctx->f27.fl;
    // 0x150AAA58: jal         0x150AA470
    // 0x150AAA5C: mov.s       $f5, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    ctx->f5.fl = ctx->f28.fl;
    static_5_150AA470(rdram, ctx);
        goto after_2;
    // 0x150AAA5C: mov.s       $f5, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    ctx->f5.fl = ctx->f28.fl;
    after_2:
    // 0x150AAA60: bne         $v0, $zero, L_150AAA78
    if (ctx->r2 != 0) {
        // 0x150AAA64: or          $t5, $v0, $zero
        ctx->r13 = ctx->r2 | 0;
            goto L_150AAA78;
    }
    // 0x150AAA64: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x150AAA68: jal         0x150AA9A0
    // 0x150AAA6C: nop

    func_150AA9A0(rdram, ctx);
        goto after_3;
    // 0x150AAA6C: nop

    after_3:
    // 0x150AAA70: j           L_150AAD84
    // 0x150AAA74: nop

        goto L_150AAD84;
    // 0x150AAA74: nop

L_150AAA78:
    // 0x150AAA78: mov.s       $f3, $f29
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 29);
    ctx->f3.fl = ctx->f29.fl;
    // 0x150AAA7C: mov.s       $f4, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    ctx->f4.fl = ctx->f30.fl;
    // 0x150AAA80: jal         0x150AA470
    // 0x150AAA84: mov.s       $f5, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    ctx->f5.fl = ctx->f31.fl;
    static_5_150AA470(rdram, ctx);
        goto after_4;
    // 0x150AAA84: mov.s       $f5, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    ctx->f5.fl = ctx->f31.fl;
    after_4:
    // 0x150AAA88: bne         $v0, $zero, L_150AAAA0
    if (ctx->r2 != 0) {
        // 0x150AAA8C: or          $t6, $v0, $zero
        ctx->r14 = ctx->r2 | 0;
            goto L_150AAAA0;
    }
    // 0x150AAA8C: or          $t6, $v0, $zero
    ctx->r14 = ctx->r2 | 0;
    // 0x150AAA90: jal         0x150AA9A0
    // 0x150AAA94: nop

    func_150AA9A0(rdram, ctx);
        goto after_5;
    // 0x150AAA94: nop

    after_5:
    // 0x150AAA98: j           L_150AAD84
    // 0x150AAA9C: nop

        goto L_150AAD84;
    // 0x150AAA9C: nop

L_150AAAA0:
    // 0x150AAAA0: and         $t0, $t4, $t5
    ctx->r8 = ctx->r12 & ctx->r13;
    // 0x150AAAA4: and         $t0, $t0, $t6
    ctx->r8 = ctx->r8 & ctx->r14;
    // 0x150AAAA8: bne         $t0, $zero, L_150AAD78
    if (ctx->r8 != 0) {
        // 0x150AAAAC: mov.s       $f3, $f23
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    ctx->f3.fl = ctx->f23.fl;
            goto L_150AAD78;
    }
    // 0x150AAAAC: mov.s       $f3, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    ctx->f3.fl = ctx->f23.fl;
    // 0x150AAAB0: mov.s       $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    ctx->f4.fl = ctx->f24.fl;
    // 0x150AAAB4: jal         0x150AA4D0
    // 0x150AAAB8: mov.s       $f5, $f25
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 25);
    ctx->f5.fl = ctx->f25.fl;
    func_150AA4D0(rdram, ctx);
        goto after_6;
    // 0x150AAAB8: mov.s       $f5, $f25
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 25);
    ctx->f5.fl = ctx->f25.fl;
    after_6:
    // 0x150AAABC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x150AAAC0: or          $t4, $t4, $v0
    ctx->r12 = ctx->r12 | ctx->r2;
    // 0x150AAAC4: mov.s       $f3, $f26
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 26);
    ctx->f3.fl = ctx->f26.fl;
    // 0x150AAAC8: mov.s       $f4, $f27
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 27);
    ctx->f4.fl = ctx->f27.fl;
    // 0x150AAACC: jal         0x150AA4D0
    // 0x150AAAD0: mov.s       $f5, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    ctx->f5.fl = ctx->f28.fl;
    func_150AA4D0(rdram, ctx);
        goto after_7;
    // 0x150AAAD0: mov.s       $f5, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    ctx->f5.fl = ctx->f28.fl;
    after_7:
    // 0x150AAAD4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x150AAAD8: or          $t5, $t5, $v0
    ctx->r13 = ctx->r13 | ctx->r2;
    // 0x150AAADC: mov.s       $f3, $f29
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 29);
    ctx->f3.fl = ctx->f29.fl;
    // 0x150AAAE0: mov.s       $f4, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    ctx->f4.fl = ctx->f30.fl;
    // 0x150AAAE4: jal         0x150AA4D0
    // 0x150AAAE8: mov.s       $f5, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    ctx->f5.fl = ctx->f31.fl;
    func_150AA4D0(rdram, ctx);
        goto after_8;
    // 0x150AAAE8: mov.s       $f5, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    ctx->f5.fl = ctx->f31.fl;
    after_8:
    // 0x150AAAEC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x150AAAF0: or          $t6, $t6, $v0
    ctx->r14 = ctx->r14 | ctx->r2;
    // 0x150AAAF4: and         $t0, $t4, $t5
    ctx->r8 = ctx->r12 & ctx->r13;
    // 0x150AAAF8: and         $t0, $t0, $t6
    ctx->r8 = ctx->r8 & ctx->r14;
    // 0x150AAAFC: bne         $t0, $zero, L_150AAD78
    if (ctx->r8 != 0) {
        // 0x150AAB00: mov.s       $f3, $f23
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    ctx->f3.fl = ctx->f23.fl;
            goto L_150AAD78;
    }
    // 0x150AAB00: mov.s       $f3, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    ctx->f3.fl = ctx->f23.fl;
    // 0x150AAB04: mov.s       $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    ctx->f4.fl = ctx->f24.fl;
    // 0x150AAB08: jal         0x150AA5A8
    // 0x150AAB0C: mov.s       $f5, $f25
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 25);
    ctx->f5.fl = ctx->f25.fl;
    func_150AA5A8(rdram, ctx);
        goto after_9;
    // 0x150AAB0C: mov.s       $f5, $f25
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 25);
    ctx->f5.fl = ctx->f25.fl;
    after_9:
    // 0x150AAB10: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x150AAB14: or          $t4, $t4, $v0
    ctx->r12 = ctx->r12 | ctx->r2;
    // 0x150AAB18: mov.s       $f3, $f26
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 26);
    ctx->f3.fl = ctx->f26.fl;
    // 0x150AAB1C: mov.s       $f4, $f27
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 27);
    ctx->f4.fl = ctx->f27.fl;
    // 0x150AAB20: jal         0x150AA5A8
    // 0x150AAB24: mov.s       $f5, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    ctx->f5.fl = ctx->f28.fl;
    func_150AA5A8(rdram, ctx);
        goto after_10;
    // 0x150AAB24: mov.s       $f5, $f28
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 28);
    ctx->f5.fl = ctx->f28.fl;
    after_10:
    // 0x150AAB28: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x150AAB2C: or          $t5, $t5, $v0
    ctx->r13 = ctx->r13 | ctx->r2;
    // 0x150AAB30: mov.s       $f3, $f29
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 29);
    ctx->f3.fl = ctx->f29.fl;
    // 0x150AAB34: mov.s       $f4, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    ctx->f4.fl = ctx->f30.fl;
    // 0x150AAB38: jal         0x150AA5A8
    // 0x150AAB3C: mov.s       $f5, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    ctx->f5.fl = ctx->f31.fl;
    func_150AA5A8(rdram, ctx);
        goto after_11;
    // 0x150AAB3C: mov.s       $f5, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    ctx->f5.fl = ctx->f31.fl;
    after_11:
    // 0x150AAB40: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x150AAB44: or          $t6, $t6, $v0
    ctx->r14 = ctx->r14 | ctx->r2;
    // 0x150AAB48: and         $t1, $t4, $t5
    ctx->r9 = ctx->r12 & ctx->r13;
    // 0x150AAB4C: and         $t0, $t1, $t6
    ctx->r8 = ctx->r9 & ctx->r14;
    // 0x150AAB50: bne         $t0, $zero, L_150AAD78
    if (ctx->r8 != 0) {
        // 0x150AAB54: nop
    
            goto L_150AAD78;
    }
    // 0x150AAB54: nop

    // 0x150AAB58: bne         $t1, $zero, L_150AAB98
    if (ctx->r9 != 0) {
        // 0x150AAB5C: and         $t1, $t4, $t6
        ctx->r9 = ctx->r12 & ctx->r14;
            goto L_150AAB98;
    }
    // 0x150AAB5C: and         $t1, $t4, $t6
    ctx->r9 = ctx->r12 & ctx->r14;
    // 0x150AAB60: or          $v1, $t4, $t5
    ctx->r3 = ctx->r12 | ctx->r13;
    // 0x150AAB64: mov.s       $f6, $f23
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 23);
    ctx->f6.fl = ctx->f23.fl;
    // 0x150AAB68: mov.s       $f7, $f24
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 24);
    ctx->f7.fl = ctx->f24.fl;
    // 0x150AAB6C: mov.s       $f8, $f25
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 25);
    ctx->f8.fl = ctx->f25.fl;
    // 0x150AAB70: mov.s       $f9, $f26
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 26);
    ctx->f9.fl = ctx->f26.fl;
    // 0x150AAB74: mov.s       $f10, $f27
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 27);
    ctx->f10.fl = ctx->f27.fl;
    // 0x150AAB78: jal         0x150AA678
    // 0x150AAB7C: mov.s       $f11, $f28
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 28);
    ctx->f11.fl = ctx->f28.fl;
    func_150AA678(rdram, ctx);
        goto after_12;
    // 0x150AAB7C: mov.s       $f11, $f28
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 28);
    ctx->f11.fl = ctx->f28.fl;
    after_12:
    // 0x150AAB80: bne         $v0, $zero, L_150AAB98
    if (ctx->r2 != 0) {
        // 0x150AAB84: nop
    
            goto L_150AAB98;
    }
    // 0x150AAB84: nop

    // 0x150AAB88: jal         0x150AA9A0
    // 0x150AAB8C: nop

    func_150AA9A0(rdram, ctx);
        goto after_13;
    // 0x150AAB8C: nop

    after_13:
    // 0x150AAB90: j           L_150AAD84
    // 0x150AAB94: nop

        goto L_150AAD84;
    // 0x150AAB94: nop

L_150AAB98:
    // 0x150AAB98: bne         $t1, $zero, L_150AABD8
    if (ctx->r9 != 0) {
        // 0x150AAB9C: and         $t1, $t5, $t6
        ctx->r9 = ctx->r13 & ctx->r14;
            goto L_150AABD8;
    }
    // 0x150AAB9C: and         $t1, $t5, $t6
    ctx->r9 = ctx->r13 & ctx->r14;
    // 0x150AABA0: or          $v1, $t4, $t6
    ctx->r3 = ctx->r12 | ctx->r14;
    // 0x150AABA4: mov.s       $f6, $f23
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 23);
    ctx->f6.fl = ctx->f23.fl;
    // 0x150AABA8: mov.s       $f7, $f24
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 24);
    ctx->f7.fl = ctx->f24.fl;
    // 0x150AABAC: mov.s       $f8, $f25
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 25);
    ctx->f8.fl = ctx->f25.fl;
    // 0x150AABB0: mov.s       $f9, $f29
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 29);
    ctx->f9.fl = ctx->f29.fl;
    // 0x150AABB4: mov.s       $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    ctx->f10.fl = ctx->f30.fl;
    // 0x150AABB8: jal         0x150AA678
    // 0x150AABBC: mov.s       $f11, $f31
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 31);
    ctx->f11.fl = ctx->f31.fl;
    func_150AA678(rdram, ctx);
        goto after_14;
    // 0x150AABBC: mov.s       $f11, $f31
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 31);
    ctx->f11.fl = ctx->f31.fl;
    after_14:
    // 0x150AABC0: bne         $v0, $zero, L_150AABD8
    if (ctx->r2 != 0) {
        // 0x150AABC4: nop
    
            goto L_150AABD8;
    }
    // 0x150AABC4: nop

    // 0x150AABC8: jal         0x150AA9A0
    // 0x150AABCC: nop

    func_150AA9A0(rdram, ctx);
        goto after_15;
    // 0x150AABCC: nop

    after_15:
    // 0x150AABD0: j           L_150AAD84
    // 0x150AABD4: nop

        goto L_150AAD84;
    // 0x150AABD4: nop

L_150AABD8:
    // 0x150AABD8: bne         $t1, $zero, L_150AAC14
    if (ctx->r9 != 0) {
        // 0x150AABDC: or          $v1, $t5, $t6
        ctx->r3 = ctx->r13 | ctx->r14;
            goto L_150AAC14;
    }
    // 0x150AABDC: or          $v1, $t5, $t6
    ctx->r3 = ctx->r13 | ctx->r14;
    // 0x150AABE0: mov.s       $f6, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    ctx->f6.fl = ctx->f26.fl;
    // 0x150AABE4: mov.s       $f7, $f27
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 27);
    ctx->f7.fl = ctx->f27.fl;
    // 0x150AABE8: mov.s       $f8, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    ctx->f8.fl = ctx->f28.fl;
    // 0x150AABEC: mov.s       $f9, $f29
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 29);
    ctx->f9.fl = ctx->f29.fl;
    // 0x150AABF0: mov.s       $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    ctx->f10.fl = ctx->f30.fl;
    // 0x150AABF4: jal         0x150AA678
    // 0x150AABF8: mov.s       $f11, $f31
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 31);
    ctx->f11.fl = ctx->f31.fl;
    func_150AA678(rdram, ctx);
        goto after_16;
    // 0x150AABF8: mov.s       $f11, $f31
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 31);
    ctx->f11.fl = ctx->f31.fl;
    after_16:
    // 0x150AABFC: bne         $v0, $zero, L_150AAC14
    if (ctx->r2 != 0) {
        // 0x150AAC00: nop
    
            goto L_150AAC14;
    }
    // 0x150AAC00: nop

    // 0x150AAC04: jal         0x150AA9A0
    // 0x150AAC08: nop

    func_150AA9A0(rdram, ctx);
        goto after_17;
    // 0x150AAC08: nop

    after_17:
    // 0x150AAC0C: j           L_150AAD84
    // 0x150AAC10: nop

        goto L_150AAD84;
    // 0x150AAC10: nop

L_150AAC14:
    // 0x150AAC14: jal         0x150AA9A0
    // 0x150AAC18: nop

    func_150AA9A0(rdram, ctx);
        goto after_18;
    // 0x150AAC18: nop

    after_18:
    // 0x150AAC1C: c.ult.s     $f21, $f18
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f21.fl < ctx->f18.fl;
    // 0x150AAC20: bc1f        L_150AAC38
    if (!c1cs) {
        // 0x150AAC24: nop
    
            goto L_150AAC38;
    }
    // 0x150AAC24: nop

    // 0x150AAC28: neg.s       $f19, $f19
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f19.fl); 
    ctx->f19.fl = -ctx->f19.fl;
    // 0x150AAC2C: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x150AAC30: neg.s       $f21, $f21
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); 
    ctx->f21.fl = -ctx->f21.fl;
    // 0x150AAC34: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
L_150AAC38:
    // 0x150AAC38: lui         $a2, 0x38D1
    ctx->r6 = S32(0X38D1 << 16);
    // 0x150AAC3C: ori         $a2, $a2, 0xB717
    ctx->r6 = ctx->r6 | 0XB717;
    // 0x150AAC40: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AAC44: lwc1        $f16, -0x3DC8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3DC8);
    // 0x150AAC48: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150AAC4C: lwc1        $f17, -0x3DC4($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X3DC4);
    // 0x150AAC50: mfc1        $a0, $f20
    ctx->r4 = (int32_t)ctx->f20.u32l;
    // 0x150AAC54: mul.s       $f20, $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x150AAC58: mfc1        $a1, $f21
    ctx->r5 = (int32_t)ctx->f_odd[(21 - 1) * 2];
    // 0x150AAC5C: add.s       $f3, $f19, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = ctx->f19.fl + ctx->f20.fl;
    // 0x150AAC60: mul.s       $f21, $f21, $f17
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f17.fl);
    // 0x150AAC64: add.s       $f3, $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f21.fl;
    // 0x150AAC68: c.eq.s      $f18, $f3
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f18.fl == ctx->f3.fl;
    // 0x150AAC6C: bc1tl       L_150AAC74
    if (c1cs) {
        // 0x150AAC70: mtc1        $a2, $f3
        ctx->f_odd[(3 - 1) * 2] = ctx->r6;
            goto L_150AAC74;
    }
    goto skip_0;
    // 0x150AAC70: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    skip_0:
L_150AAC74:
    // 0x150AAC74: div.s       $f3, $f22, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f22.fl, ctx->f3.fl);
    // 0x150AAC78: abs.s       $f6, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = fabsf(ctx->f3.fl);
    // 0x150AAC7C: c.ule.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x150AAC80: bc1f        L_150AACA4
    if (!c1cs) {
        // 0x150AAC84: nop
    
            goto L_150AACA4;
    }
    // 0x150AAC84: nop

    // 0x150AAC88: mul.s       $f4, $f3, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f3.fl, ctx->f16.fl);
    // 0x150AAC8C: nop

    // 0x150AAC90: mul.s       $f5, $f3, $f17
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f5.fl = MUL_S(ctx->f3.fl, ctx->f17.fl);
    // 0x150AAC94: jal         0x150AA814
    // 0x150AAC98: nop

    static_5_150AA814(rdram, ctx);
        goto after_19;
    // 0x150AAC98: nop

    after_19:
    // 0x150AAC9C: beq         $v0, $zero, L_150AAD84
    if (ctx->r2 == 0) {
        // 0x150AACA0: nop
    
            goto L_150AAD84;
    }
    // 0x150AACA0: nop

L_150AACA4:
    // 0x150AACA4: add.s       $f3, $f19, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = ctx->f19.fl + ctx->f20.fl;
    // 0x150AACA8: sub.s       $f3, $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f21.fl;
    // 0x150AACAC: c.eq.s      $f18, $f3
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f18.fl == ctx->f3.fl;
    // 0x150AACB0: bc1tl       L_150AACB8
    if (c1cs) {
        // 0x150AACB4: mtc1        $a2, $f3
        ctx->f_odd[(3 - 1) * 2] = ctx->r6;
            goto L_150AACB8;
    }
    goto skip_1;
    // 0x150AACB4: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    skip_1:
L_150AACB8:
    // 0x150AACB8: div.s       $f3, $f22, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f22.fl, ctx->f3.fl);
    // 0x150AACBC: abs.s       $f6, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = fabsf(ctx->f3.fl);
    // 0x150AACC0: c.ule.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x150AACC4: bc1f        L_150AACE8
    if (!c1cs) {
        // 0x150AACC8: nop
    
            goto L_150AACE8;
    }
    // 0x150AACC8: nop

    // 0x150AACCC: mul.s       $f4, $f3, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f3.fl, ctx->f16.fl);
    // 0x150AACD0: nop

    // 0x150AACD4: mul.s       $f5, $f3, $f17
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f5.fl = MUL_S(ctx->f3.fl, ctx->f17.fl);
    // 0x150AACD8: jal         0x150AA814
    // 0x150AACDC: neg.s       $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = -ctx->f5.fl;
    static_5_150AA814(rdram, ctx);
        goto after_20;
    // 0x150AACDC: neg.s       $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = -ctx->f5.fl;
    after_20:
    // 0x150AACE0: beq         $v0, $zero, L_150AAD84
    if (ctx->r2 == 0) {
        // 0x150AACE4: nop
    
            goto L_150AAD84;
    }
    // 0x150AACE4: nop

L_150AACE8:
    // 0x150AACE8: sub.s       $f3, $f19, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = ctx->f19.fl - ctx->f20.fl;
    // 0x150AACEC: add.s       $f3, $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f21.fl;
    // 0x150AACF0: c.eq.s      $f18, $f3
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f18.fl == ctx->f3.fl;
    // 0x150AACF4: bc1tl       L_150AACFC
    if (c1cs) {
        // 0x150AACF8: mtc1        $a2, $f3
        ctx->f_odd[(3 - 1) * 2] = ctx->r6;
            goto L_150AACFC;
    }
    goto skip_2;
    // 0x150AACF8: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    skip_2:
L_150AACFC:
    // 0x150AACFC: div.s       $f3, $f22, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f22.fl, ctx->f3.fl);
    // 0x150AAD00: abs.s       $f6, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = fabsf(ctx->f3.fl);
    // 0x150AAD04: c.ule.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x150AAD08: bc1f        L_150AAD2C
    if (!c1cs) {
        // 0x150AAD0C: nop
    
            goto L_150AAD2C;
    }
    // 0x150AAD0C: nop

    // 0x150AAD10: mul.s       $f4, $f3, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f3.fl, ctx->f16.fl);
    // 0x150AAD14: nop

    // 0x150AAD18: mul.s       $f5, $f3, $f17
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f5.fl = MUL_S(ctx->f3.fl, ctx->f17.fl);
    // 0x150AAD1C: jal         0x150AA814
    // 0x150AAD20: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    static_5_150AA814(rdram, ctx);
        goto after_21;
    // 0x150AAD20: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    after_21:
    // 0x150AAD24: beq         $v0, $zero, L_150AAD84
    if (ctx->r2 == 0) {
        // 0x150AAD28: nop
    
            goto L_150AAD84;
    }
    // 0x150AAD28: nop

L_150AAD2C:
    // 0x150AAD2C: sub.s       $f3, $f19, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = ctx->f19.fl - ctx->f20.fl;
    // 0x150AAD30: sub.s       $f3, $f3, $f21
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f21.fl;
    // 0x150AAD34: c.eq.s      $f18, $f3
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f18.fl == ctx->f3.fl;
    // 0x150AAD38: bc1tl       L_150AAD40
    if (c1cs) {
        // 0x150AAD3C: mtc1        $a2, $f3
        ctx->f_odd[(3 - 1) * 2] = ctx->r6;
            goto L_150AAD40;
    }
    goto skip_3;
    // 0x150AAD3C: mtc1        $a2, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r6;
    skip_3:
L_150AAD40:
    // 0x150AAD40: div.s       $f3, $f22, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = DIV_S(ctx->f22.fl, ctx->f3.fl);
    // 0x150AAD44: abs.s       $f6, $f3
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f6.fl = fabsf(ctx->f3.fl);
    // 0x150AAD48: c.ule.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x150AAD4C: bc1f        L_150AAD70
    if (!c1cs) {
        // 0x150AAD50: nop
    
            goto L_150AAD70;
    }
    // 0x150AAD50: nop

    // 0x150AAD54: mul.s       $f4, $f3, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f3.fl, ctx->f16.fl);
    // 0x150AAD58: neg.s       $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = -ctx->f4.fl;
    // 0x150AAD5C: mul.s       $f5, $f3, $f17
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f5.fl = MUL_S(ctx->f3.fl, ctx->f17.fl);
    // 0x150AAD60: jal         0x150AA814
    // 0x150AAD64: neg.s       $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = -ctx->f5.fl;
    static_5_150AA814(rdram, ctx);
        goto after_22;
    // 0x150AAD64: neg.s       $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f5.fl = -ctx->f5.fl;
    after_22:
    // 0x150AAD68: beq         $v0, $zero, L_150AAD84
    if (ctx->r2 == 0) {
        // 0x150AAD6C: nop
    
            goto L_150AAD84;
    }
    // 0x150AAD6C: nop

L_150AAD70:
    // 0x150AAD70: mtc1        $a0, $f20
    ctx->f20.u32l = ctx->r4;
    // 0x150AAD74: mtc1        $a1, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r5;
L_150AAD78:
    // 0x150AAD78: or          $ra, $t7, $zero
    ctx->r31 = ctx->r15 | 0;
    // 0x150AAD7C: jr          $t7
    // 0x150AAD80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r15)(rdram, ctx);
    return;
    // 0x150AAD80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150AAD84:
    // 0x150AAD84: mtc1        $a0, $f20
    ctx->f20.u32l = ctx->r4;
    // 0x150AAD88: mtc1        $a1, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r5;
    // 0x150AAD8C: or          $ra, $t7, $zero
    ctx->r31 = ctx->r15 | 0;
    // 0x150AAD90: jr          $t7
    // 0x150AAD94: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r15)(rdram, ctx);
    return;
    // 0x150AAD94: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
;}
RECOMP_FUNC void func_10017B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017B04: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x10017B08: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x10017B0C: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x10017B10: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x10017B14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x10017B18: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x10017B1C: sb          $a2, 0x17($t8)
    MEM_B(0X17, ctx->r24) = ctx->r6;
    // 0x10017B20: jr          $ra
    // 0x10017B24: nop

    return;
    return;
    // 0x10017B24: nop

    // 0x10017B28: jr          $ra
    // 0x10017B2C: nop

    return;
    return;
    // 0x10017B2C: nop

;}
RECOMP_FUNC void func_1000E770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000E770: beq         $a0, $zero, L_1000E784
    if (ctx->r4 == 0) {
        // 0x1000E774: lui         $v0, 0x8004
        ctx->r2 = S32(0X8004 << 16);
            goto L_1000E784;
    }
    // 0x1000E774: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000E778: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x1000E77C: lw          $t6, 0x1F08($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1F08);
    // 0x1000E780: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
L_1000E784:
    // 0x1000E784: beq         $a1, $zero, L_1000E794
    if (ctx->r5 == 0) {
        // 0x1000E788: lui         $t7, 0x8004
        ctx->r15 = S32(0X8004 << 16);
            goto L_1000E794;
    }
    // 0x1000E788: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x1000E78C: lw          $t7, 0x1F0C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1F0C);
    // 0x1000E790: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
L_1000E794:
    // 0x1000E794: lw          $v0, 0x1F04($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1F04);
    // 0x1000E798: jr          $ra
    // 0x1000E79C: nop

    return;
    return;
    // 0x1000E79C: nop

;}
RECOMP_FUNC void func_1509CA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509CA10: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1509CA14: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x1509CA18: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1509CA1C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1509CA20: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x1509CA24: lw          $v0, 0x7430($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7430);
    // 0x1509CA28: jr          $ra
    // 0x1509CA2C: nop

    return;
    return;
    // 0x1509CA2C: nop

;}
RECOMP_FUNC void func_1000C350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000C350: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1000C354: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1000C358: andi        $s0, $a1, 0xFF
    ctx->r16 = ctx->r5 & 0XFF;
    // 0x1000C35C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1000C360: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1000C364: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1000C368: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1000C36C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x1000C370: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1000C374: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1000C378: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1000C37C: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x1000C380: bne         $t7, $zero, L_1000C44C
    if (ctx->r15 != 0) {
        // 0x1000C384: nop
    
            goto L_1000C44C;
    }
    // 0x1000C384: nop

    // 0x1000C388: lbu         $t9, 0x35EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X35EA);
    // 0x1000C38C: ori         $t8, $t6, 0x80
    ctx->r24 = ctx->r14 | 0X80;
    // 0x1000C390: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1000C394: beq         $t9, $at, L_1000C3D0
    if (ctx->r25 == ctx->r1) {
        // 0x1000C398: sw          $t8, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r24;
            goto L_1000C3D0;
    }
    // 0x1000C398: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x1000C39C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x1000C3A0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x1000C3A4: jal         0x1000886C
    // 0x1000C3A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1000886C(rdram, ctx);
        goto after_0;
    // 0x1000C3A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x1000C3AC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x1000C3B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1000C3B4: jal         0x1000886C
    // 0x1000C3B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1000886C(rdram, ctx);
        goto after_1;
    // 0x1000C3B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x1000C3BC: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x1000C3C0: jal         0x1000E40C
    // 0x1000C3C4: addiu       $a1, $zero, 0x61A8
    ctx->r5 = ADD32(0, 0X61A8);
    func_1000E40C(rdram, ctx);
        goto after_2;
    // 0x1000C3C4: addiu       $a1, $zero, 0x61A8
    ctx->r5 = ADD32(0, 0X61A8);
    after_2:
    // 0x1000C3C8: b           L_1000C444
    // 0x1000C3CC: nop

        goto L_1000C444;
    // 0x1000C3CC: nop

L_1000C3D0:
    // 0x1000C3D0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1000C3D4: lbu         $v0, 0x35E8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X35E8);
    // 0x1000C3D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1000C3DC: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x1000C3E0: bnel        $v0, $at, L_1000C404
    if (ctx->r2 != ctx->r1) {
        // 0x1000C3E4: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_1000C404;
    }
    goto skip_0;
    // 0x1000C3E4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    skip_0:
    // 0x1000C3E8: jal         0x1000E40C
    // 0x1000C3EC: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    func_1000E40C(rdram, ctx);
        goto after_3;
    // 0x1000C3EC: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    after_3:
    // 0x1000C3F0: jal         0x15178EFC
    // 0x1000C3F4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_15178EFC(rdram, ctx);
        goto after_4;
    // 0x1000C3F4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x1000C3F8: b           L_1000C444
    // 0x1000C3FC: nop

        goto L_1000C444;
    // 0x1000C3FC: nop

    // 0x1000C400: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_1000C404:
    // 0x1000C404: bne         $v0, $at, L_1000C43C
    if (ctx->r2 != ctx->r1) {
        // 0x1000C408: addiu       $a0, $zero, 0x23
        ctx->r4 = ADD32(0, 0X23);
            goto L_1000C43C;
    }
    // 0x1000C408: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x1000C40C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x1000C410: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x1000C414: jal         0x1000886C
    // 0x1000C418: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1000886C(rdram, ctx);
        goto after_5;
    // 0x1000C418: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x1000C41C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x1000C420: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1000C424: jal         0x1000886C
    // 0x1000C428: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_1000886C(rdram, ctx);
        goto after_6;
    // 0x1000C428: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_6:
    // 0x1000C42C: jal         0x15178EFC
    // 0x1000C430: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_15178EFC(rdram, ctx);
        goto after_7;
    // 0x1000C430: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_7:
    // 0x1000C434: b           L_1000C444
    // 0x1000C438: nop

        goto L_1000C444;
    // 0x1000C438: nop

L_1000C43C:
    // 0x1000C43C: jal         0x1000E40C
    // 0x1000C440: addiu       $a1, $zero, 0x61A8
    ctx->r5 = ADD32(0, 0X61A8);
    func_1000E40C(rdram, ctx);
        goto after_8;
    // 0x1000C440: addiu       $a1, $zero, 0x61A8
    ctx->r5 = ADD32(0, 0X61A8);
    after_8:
L_1000C444:
    // 0x1000C444: b           L_1000C51C
    // 0x1000C448: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
        goto L_1000C51C;
    // 0x1000C448: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
L_1000C44C:
    // 0x1000C44C: lw          $t0, -0x1610($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1610);
    // 0x1000C450: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x1000C454: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000C458: beq         $t0, $at, L_1000C470
    if (ctx->r8 == ctx->r1) {
        // 0x1000C45C: lw          $t1, 0x20($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X20);
            goto L_1000C470;
    }
    // 0x1000C45C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1000C460: jal         0x10008F24
    // 0x1000C464: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_10008F24(rdram, ctx);
        goto after_9;
    // 0x1000C464: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_9:
    // 0x1000C468: b           L_1000C51C
    // 0x1000C46C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
        goto L_1000C51C;
    // 0x1000C46C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
L_1000C470:
    // 0x1000C470: lw          $v0, 0x1F08($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1F08);
    // 0x1000C474: andi        $t2, $t1, 0x7F
    ctx->r10 = ctx->r9 & 0X7F;
    // 0x1000C478: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1000C47C: beql        $t2, $v0, L_1000C51C
    if (ctx->r10 == ctx->r2) {
        // 0x1000C480: lw          $v0, 0x20($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X20);
            goto L_1000C51C;
    }
    goto skip_1;
    // 0x1000C480: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    skip_1:
    // 0x1000C484: beq         $v0, $at, L_1000C4A0
    if (ctx->r2 == ctx->r1) {
        // 0x1000C488: andi        $a0, $s0, 0xFF
        ctx->r4 = ctx->r16 & 0XFF;
            goto L_1000C4A0;
    }
    // 0x1000C488: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x1000C48C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1000C490: beq         $v0, $at, L_1000C4D0
    if (ctx->r2 == ctx->r1) {
        // 0x1000C494: andi        $a0, $s0, 0xFF
        ctx->r4 = ctx->r16 & 0XFF;
            goto L_1000C4D0;
    }
    // 0x1000C494: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x1000C498: b           L_1000C514
    // 0x1000C49C: ori         $t3, $v0, 0x80
    ctx->r11 = ctx->r2 | 0X80;
        goto L_1000C514;
    // 0x1000C49C: ori         $t3, $v0, 0x80
    ctx->r11 = ctx->r2 | 0X80;
L_1000C4A0:
    // 0x1000C4A0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x1000C4A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1000C4A8: jal         0x10008790
    // 0x1000C4AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_10008790(rdram, ctx);
        goto after_10;
    // 0x1000C4AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x1000C4B0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x1000C4B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1000C4B8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1000C4BC: jal         0x10008790
    // 0x1000C4C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_10008790(rdram, ctx);
        goto after_11;
    // 0x1000C4C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x1000C4C4: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000C4C8: b           L_1000C510
    // 0x1000C4CC: lw          $v0, 0x1F08($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1F08);
        goto L_1000C510;
    // 0x1000C4CC: lw          $v0, 0x1F08($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1F08);
L_1000C4D0:
    // 0x1000C4D0: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x1000C4D4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1000C4D8: jal         0x10008790
    // 0x1000C4DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_10008790(rdram, ctx);
        goto after_12;
    // 0x1000C4DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x1000C4E0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x1000C4E4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x1000C4E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1000C4EC: jal         0x10008790
    // 0x1000C4F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_10008790(rdram, ctx);
        goto after_13;
    // 0x1000C4F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x1000C4F4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x1000C4F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1000C4FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1000C500: jal         0x10008790
    // 0x1000C504: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_10008790(rdram, ctx);
        goto after_14;
    // 0x1000C504: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x1000C508: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000C50C: lw          $v0, 0x1F08($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1F08);
L_1000C510:
    // 0x1000C510: ori         $t3, $v0, 0x80
    ctx->r11 = ctx->r2 | 0X80;
L_1000C514:
    // 0x1000C514: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x1000C518: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
L_1000C51C:
    // 0x1000C51C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1000C520: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1000C524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1000C528: jr          $ra
    // 0x1000C52C: nop

    return;
    return;
    // 0x1000C52C: nop

;}
RECOMP_FUNC void func_15123934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15123934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15123938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1512393C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x15123940: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15123944: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x15123948: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x1512394C: lh          $t8, 0x20C($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X20C);
    // 0x15123950: bne         $t8, $zero, L_151239BC
    if (ctx->r24 != 0) {
        // 0x15123954: nop
    
            goto L_151239BC;
    }
    // 0x15123954: nop

    // 0x15123958: lhu         $t9, 0x0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X0);
    // 0x1512395C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15123960: sh          $t9, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r25;
    // 0x15123964: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x15123968: lw          $t2, 0x2C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X2C);
    // 0x1512396C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x15123970: addu        $v0, $a0, $t1
    ctx->r2 = ADD32(ctx->r4, ctx->r9);
    // 0x15123974: sw          $t2, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r10;
    // 0x15123978: lw          $t3, 0x84($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X84);
    // 0x1512397C: sw          $t3, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r11;
    // 0x15123980: lw          $t4, 0xDC($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XDC);
    // 0x15123984: sw          $t4, 0xE0($v0)
    MEM_W(0XE0, ctx->r2) = ctx->r12;
    // 0x15123988: lw          $t5, 0x134($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X134);
    // 0x1512398C: sw          $t5, 0x138($v0)
    MEM_W(0X138, ctx->r2) = ctx->r13;
    // 0x15123990: lh          $t6, 0x1B4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X1B4);
    // 0x15123994: sh          $t6, 0x1B6($v1)
    MEM_H(0X1B6, ctx->r3) = ctx->r14;
    // 0x15123998: lh          $t7, 0x1E0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1E0);
    // 0x1512399C: sh          $t7, 0x1E2($v1)
    MEM_H(0X1E2, ctx->r3) = ctx->r15;
    // 0x151239A0: sw          $a1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r5;
    // 0x151239A4: sw          $a2, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r6;
    // 0x151239A8: sw          $a3, 0x134($a0)
    MEM_W(0X134, ctx->r4) = ctx->r7;
    // 0x151239AC: jal         0x15125394
    // 0x151239B0: sh          $t8, 0x20C($v1)
    MEM_H(0X20C, ctx->r3) = ctx->r24;
    func_15125394(rdram, ctx);
        goto after_0;
    // 0x151239B0: sh          $t8, 0x20C($v1)
    MEM_H(0X20C, ctx->r3) = ctx->r24;
    after_0:
    // 0x151239B4: b           L_151239BC
    // 0x151239B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151239BC;
    // 0x151239B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151239BC:
    // 0x151239BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151239C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151239C4: jr          $ra
    // 0x151239C8: nop

    return;
    return;
    // 0x151239C8: nop

;}
RECOMP_FUNC void func_150BA4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BA4C0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150BA4C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150BA4C8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x150BA4CC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x150BA4D0: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x150BA4D4: lbu         $t6, 0x3B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3B);
    // 0x150BA4D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150BA4DC: sb          $t6, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r14;
    // 0x150BA4E0: jal         0x150ADA20
    // 0x150BA4E4: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150BA4E4: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x150BA4E8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150BA4EC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150BA4F0: mfhi        $a0
    ctx->r4 = hi;
    // 0x150BA4F4: lbu         $t2, 0x4F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X4F);
    // 0x150BA4F8: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x150BA4FC: addiu       $a0, $a0, 0xF
    ctx->r4 = ADD32(ctx->r4, 0XF);
    // 0x150BA500: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x150BA504: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150BA508: addiu       $t0, $zero, 0x3F
    ctx->r8 = ADD32(0, 0X3F);
    // 0x150BA50C: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x150BA510: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x150BA514: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150BA518: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150BA51C: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150BA520: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150BA524: addiu       $a2, $zero, 0x52
    ctx->r6 = ADD32(0, 0X52);
    // 0x150BA528: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150BA52C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x150BA530: jal         0x15149130
    // 0x150BA534: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_15149130(rdram, ctx);
        goto after_1;
    // 0x150BA534: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_1:
    // 0x150BA538: beq         $v0, $zero, L_150BA54C
    if (ctx->r2 == 0) {
        // 0x150BA53C: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150BA54C;
    }
    // 0x150BA53C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150BA540: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x150BA544: jal         0x10022EC0
    // 0x150BA548: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x150BA548: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_150BA54C:
    // 0x150BA54C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150BA550: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150BA554: jr          $ra
    // 0x150BA558: nop

    return;
    return;
    // 0x150BA558: nop

;}
RECOMP_FUNC void func_151B5FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B5FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B5FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B5FD4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151B5FD8: lw          $v0, 0x88($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X88);
    // 0x151B5FDC: beq         $v0, $zero, L_151B5FF4
    if (ctx->r2 == 0) {
        // 0x151B5FE0: andi        $a0, $v0, 0xFFFF
        ctx->r4 = ctx->r2 & 0XFFFF;
            goto L_151B5FF4;
    }
    // 0x151B5FE0: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x151B5FE4: jal         0x100111C8
    // 0x151B5FE8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x151B5FE8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x151B5FEC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x151B5FF0: sw          $zero, 0x88($a1)
    MEM_W(0X88, ctx->r5) = 0;
L_151B5FF4:
    // 0x151B5FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B5FF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B5FFC: jr          $ra
    // 0x151B6000: nop

    return;
    return;
    // 0x151B6000: nop

;}
RECOMP_FUNC void func_1514DCAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DCAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514DCB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DCB4: addiu       $t6, $zero, 0x6000
    ctx->r14 = ADD32(0, 0X6000);
    // 0x1514DCB8: sw          $t6, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r14;
    // 0x1514DCBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1514DCC0: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x1514DCC4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1514DCC8: jal         0x15083568
    // 0x1514DCCC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15083568(rdram, ctx);
        goto after_0;
    // 0x1514DCCC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1514DCD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1514DCD4: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    // 0x1514DCD8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1514DCDC: jal         0x15083568
    // 0x1514DCE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15083568(rdram, ctx);
        goto after_1;
    // 0x1514DCE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x1514DCE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514DCE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514DCEC: jr          $ra
    // 0x1514DCF0: nop

    return;
    return;
    // 0x1514DCF0: nop

;}
RECOMP_FUNC void func_1518E73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518E73C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x1518E740: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1518E744: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1518E748: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1518E74C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1518E750: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x1518E754: addiu       $t6, $sp, 0x3F
    ctx->r14 = ADD32(ctx->r29, 0X3F);
    // 0x1518E758: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1518E75C: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x1518E760: lh          $a1, 0x7E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X7E);
    // 0x1518E764: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1518E768: jal         0x151D5D60
    // 0x1518E76C: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x1518E76C: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    after_0:
    // 0x1518E770: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x1518E774: lbu         $t7, 0x3F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3F);
    // 0x1518E778: beq         $v0, $zero, L_1518E7D4
    if (ctx->r2 == 0) {
        // 0x1518E77C: sw          $v0, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r2;
            goto L_1518E7D4;
    }
    // 0x1518E77C: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x1518E780: beq         $t7, $zero, L_1518E7C0
    if (ctx->r15 == 0) {
        // 0x1518E784: lh          $t8, 0x7E($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X7E);
            goto L_1518E7C0;
    }
    // 0x1518E784: lh          $t8, 0x7E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X7E);
    // 0x1518E788: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1518E78C: addu        $v0, $s0, $t9
    ctx->r2 = ADD32(ctx->r16, ctx->r25);
    // 0x1518E790: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x1518E794: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x1518E798: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1518E79C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x1518E7A0: jal         0x10022EC0
    // 0x1518E7A4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1518E7A4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x1518E7A8: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x1518E7AC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x1518E7B0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1518E7B4: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x1518E7B8: jal         0x10022EC0
    // 0x1518E7BC: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1518E7BC: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
L_1518E7C0:
    // 0x1518E7C0: lh          $v0, 0x7E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X7E);
    // 0x1518E7C4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1518E7C8: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x1518E7CC: b           L_1518E7DC
    // 0x1518E7D0: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_1518E7DC;
    // 0x1518E7D0: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_1518E7D4:
    // 0x1518E7D4: b           L_1518EAFC
    // 0x1518E7D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518EAFC;
    // 0x1518E7D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518E7DC:
    // 0x1518E7DC: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1518E7E0: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1518E7E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x1518E7E8: lwc1        $f18, -0x2E28($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2E28);
    // 0x1518E7EC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1518E7F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1518E7F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x1518E7F8: lwc1        $f20, -0x2E18($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X2E18);
    // 0x1518E7FC: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1518E800: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x1518E804: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x1518E808: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1518E80C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1518E810: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x1518E814: mul.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x1518E818: lwc1        $f8, -0x1658($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1658);
    // 0x1518E81C: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1518E820: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1518E824: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1518E828: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x1518E82C: nop

    // 0x1518E830: bc1fl       L_1518E844
    if (!c1cs) {
        // 0x1518E834: sqrt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
            goto L_1518E844;
    }
    goto skip_0;
    // 0x1518E834: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    skip_0:
    // 0x1518E838: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x1518E83C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1518E840: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
L_1518E844:
    // 0x1518E844: lwc1        $f4, 0x160($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X160);
    // 0x1518E848: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518E84C: lwc1        $f14, 0x7B60($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7B60);
    // 0x1518E850: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518E854: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1518E858: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x1518E85C: nop

    // 0x1518E860: bc1f        L_1518E86C
    if (!c1cs) {
        // 0x1518E864: nop
    
            goto L_1518E86C;
    }
    // 0x1518E864: nop

    // 0x1518E868: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_1518E86C:
    // 0x1518E86C: beq         $v1, $zero, L_1518E878
    if (ctx->r3 == 0) {
        // 0x1518E870: nop
    
            goto L_1518E878;
    }
    // 0x1518E870: nop

    // 0x1518E874: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_1518E878:
    // 0x1518E878: lwc1        $f6, 0x7B64($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7B64);
    // 0x1518E87C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1518E880: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1518E884: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x1518E888: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x1518E88C: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x1518E890: nop

    // 0x1518E894: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x1518E898: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x1518E89C: nop

    // 0x1518E8A0: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x1518E8A4: beql        $a0, $zero, L_1518E8F4
    if (ctx->r4 == 0) {
        // 0x1518E8A8: mfc1        $a0, $f10
        ctx->r4 = (int32_t)ctx->f10.u32l;
            goto L_1518E8F4;
    }
    goto skip_1;
    // 0x1518E8A8: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x1518E8AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1518E8B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1518E8B4: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1518E8B8: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x1518E8BC: nop

    // 0x1518E8C0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x1518E8C4: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x1518E8C8: nop

    // 0x1518E8CC: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x1518E8D0: bne         $a0, $zero, L_1518E8E8
    if (ctx->r4 != 0) {
        // 0x1518E8D4: nop
    
            goto L_1518E8E8;
    }
    // 0x1518E8D4: nop

    // 0x1518E8D8: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x1518E8DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1518E8E0: b           L_1518E900
    // 0x1518E8E4: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_1518E900;
    // 0x1518E8E4: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_1518E8E8:
    // 0x1518E8E8: b           L_1518E900
    // 0x1518E8EC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_1518E900;
    // 0x1518E8EC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x1518E8F0: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
L_1518E8F4:
    // 0x1518E8F4: nop

    // 0x1518E8F8: bltz        $a0, L_1518E8E8
    if (SIGNED(ctx->r4) < 0) {
        // 0x1518E8FC: nop
    
            goto L_1518E8E8;
    }
    // 0x1518E8FC: nop

L_1518E900:
    // 0x1518E900: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x1518E904: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x1518E908: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x1518E90C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x1518E910: jal         0x15048A40
    // 0x1518E914: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    func_15048A40(rdram, ctx);
        goto after_3;
    // 0x1518E914: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x1518E918: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x1518E91C: jal         0x150489B0
    // 0x1518E920: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    func_150489B0(rdram, ctx);
        goto after_4;
    // 0x1518E920: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x1518E924: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1518E928: lwc1        $f12, 0x2C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1518E92C: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1518E930: lwc1        $f14, 0x30($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X30);
    // 0x1518E934: mul.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1518E938: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x1518E93C: mul.s       $f16, $f12, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x1518E940: nop

    // 0x1518E944: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x1518E948: nop

    // 0x1518E94C: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x1518E950: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x1518E954: mul.s       $f4, $f2, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x1518E958: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x1518E95C: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1518E960: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1518E964: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1518E968: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x1518E96C: nop

    // 0x1518E970: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x1518E974: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1518E978: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x1518E97C: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1518E980: mul.s       $f10, $f2, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x1518E984: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1518E988: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x1518E98C: nop

    // 0x1518E990: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x1518E994: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1518E998: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x1518E99C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1518E9A0: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x1518E9A4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1518E9A8: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x1518E9AC: nop

    // 0x1518E9B0: sh          $t0, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r8;
    // 0x1518E9B4: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x1518E9B8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1518E9BC: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1518E9C0: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x1518E9C4: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x1518E9C8: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1518E9CC: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1518E9D0: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x1518E9D4: nop

    // 0x1518E9D8: sh          $t3, 0x10($t4)
    MEM_H(0X10, ctx->r12) = ctx->r11;
    // 0x1518E9DC: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1518E9E0: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x1518E9E4: sub.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1518E9E8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1518E9EC: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x1518E9F0: nop

    // 0x1518E9F4: sh          $t6, 0x12($t7)
    MEM_H(0X12, ctx->r15) = ctx->r14;
    // 0x1518E9F8: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1518E9FC: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1518EA00: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x1518EA04: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1518EA08: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1518EA0C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1518EA10: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x1518EA14: nop

    // 0x1518EA18: sh          $t9, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r25;
    // 0x1518EA1C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1518EA20: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1518EA24: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x1518EA28: add.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x1518EA2C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x1518EA30: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1518EA34: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1518EA38: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1518EA3C: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x1518EA40: nop

    // 0x1518EA44: sh          $t2, 0x20($t3)
    MEM_H(0X20, ctx->r11) = ctx->r10;
    // 0x1518EA48: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1518EA4C: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1518EA50: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x1518EA54: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1518EA58: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1518EA5C: mul.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1518EA60: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1518EA64: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x1518EA68: nop

    // 0x1518EA6C: sh          $t5, 0x22($t6)
    MEM_H(0X22, ctx->r14) = ctx->r13;
    // 0x1518EA70: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1518EA74: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x1518EA78: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1518EA7C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1518EA80: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x1518EA84: nop

    // 0x1518EA88: sh          $t8, 0x24($t9)
    MEM_H(0X24, ctx->r25) = ctx->r24;
    // 0x1518EA8C: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1518EA90: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1518EA94: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x1518EA98: sub.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x1518EA9C: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1518EAA0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1518EAA4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1518EAA8: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x1518EAAC: nop

    // 0x1518EAB0: sh          $t1, 0x30($t2)
    MEM_H(0X30, ctx->r10) = ctx->r9;
    // 0x1518EAB4: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1518EAB8: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1518EABC: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x1518EAC0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1518EAC4: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x1518EAC8: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1518EACC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1518EAD0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x1518EAD4: nop

    // 0x1518EAD8: sh          $t4, 0x32($t5)
    MEM_H(0X32, ctx->r13) = ctx->r12;
    // 0x1518EADC: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1518EAE0: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x1518EAE4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1518EAE8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1518EAEC: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x1518EAF0: nop

    // 0x1518EAF4: sh          $t7, 0x34($t8)
    MEM_H(0X34, ctx->r24) = ctx->r15;
    // 0x1518EAF8: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
L_1518EAFC:
    // 0x1518EAFC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1518EB00: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1518EB04: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1518EB08: jr          $ra
    // 0x1518EB0C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x1518EB0C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_150F1170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F1170: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x150F1174: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x150F1178: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150F117C: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150F1180: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x150F1184: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x150F1188: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x150F118C: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x150F1190: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x150F1194: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x150F1198: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x150F119C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x150F11A0: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x150F11A4: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x150F11A8: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x150F11AC: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x150F11B0: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x150F11B4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150F11B8: lw          $at, 0x34($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X34);
    // 0x150F11BC: lw          $v0, 0x28($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X28);
    // 0x150F11C0: addiu       $t6, $sp, 0x124
    ctx->r14 = ADD32(ctx->r29, 0X124);
    // 0x150F11C4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150F11C8: lw          $t9, 0x38($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X38);
    // 0x150F11CC: addiu       $s1, $s3, 0x28
    ctx->r17 = ADD32(ctx->r19, 0X28);
    // 0x150F11D0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150F11D4: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x150F11D8: lw          $at, 0x3C($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X3C);
    // 0x150F11DC: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x150F11E0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x150F11E4: beq         $t0, $zero, L_150F11FC
    if (ctx->r8 == 0) {
        // 0x150F11E8: nop
    
            goto L_150F11FC;
    }
    // 0x150F11E8: nop

    // 0x150F11EC: lbu         $t1, 0x4($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X4);
    // 0x150F11F0: lbu         $t2, 0x3B($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X3B);
    // 0x150F11F4: beql        $t1, $t2, L_150F1208
    if (ctx->r9 == ctx->r10) {
        // 0x150F11F8: lwc1        $f4, 0x14($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
            goto L_150F1208;
    }
    goto skip_0;
    // 0x150F11F8: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    skip_0:
L_150F11FC:
    // 0x150F11FC: b           L_150F15B0
    // 0x150F1200: sh          $t3, 0xE($s3)
    MEM_H(0XE, ctx->r19) = ctx->r11;
        goto L_150F15B0;
    // 0x150F1200: sh          $t3, 0xE($s3)
    MEM_H(0XE, ctx->r19) = ctx->r11;
    // 0x150F1204: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
L_150F1208:
    // 0x150F1208: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x150F120C: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150F1210: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150F1214: swc1        $f6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
    // 0x150F1218: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150F121C: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x150F1220: swc1        $f8, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f8.u32l;
    // 0x150F1224: lwc1        $f16, 0x124($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150F1228: lwc1        $f4, 0x128($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
    // 0x150F122C: lwc1        $f8, 0x12C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x150F1230: lwc1        $f6, 0x14($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14);
    // 0x150F1234: sub.s       $f24, $f10, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150F1238: sub.s       $f26, $f18, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150F123C: jal         0x150ADA68
    // 0x150F1240: sub.s       $f28, $f6, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f28.fl = ctx->f6.fl - ctx->f8.fl;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150F1240: sub.s       $f28, $f6, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f28.fl = ctx->f6.fl - ctx->f8.fl;
    after_0:
    // 0x150F1244: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F1248: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150F124C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F1250: lwc1        $f10, 0x1878($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1878);
    // 0x150F1254: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F1258: lwc1        $f16, 0x187C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X187C);
    // 0x150F125C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F1260: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F1264: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150F1268: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150F126C: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x150F1270: lui         $t9, 0x90
    ctx->r25 = S32(0X90 << 16);
    // 0x150F1274: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x150F1278: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F127C: addiu       $t4, $zero, 0x6C
    ctx->r12 = ADD32(0, 0X6C);
    // 0x150F1280: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x150F1284: addiu       $t5, $zero, 0x5103
    ctx->r13 = ADD32(0, 0X5103);
    // 0x150F1288: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x150F128C: addiu       $t7, $zero, 0x23
    ctx->r15 = ADD32(0, 0X23);
    // 0x150F1290: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150F1294: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x150F1298: ori         $t9, $t9, 0xDE07
    ctx->r25 = ctx->r25 | 0XDE07;
    // 0x150F129C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x150F12A0: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x150F12A4: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x150F12A8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150F12AC: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x150F12B0: addiu       $s4, $s4, -0x1658
    ctx->r20 = ADD32(ctx->r20, -0X1658);
    // 0x150F12B4: addiu       $fp, $sp, 0xA8
    ctx->r30 = ADD32(ctx->r29, 0XA8);
    // 0x150F12B8: addiu       $s7, $zero, 0x1F
    ctx->r23 = ADD32(0, 0X1F);
    // 0x150F12BC: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    // 0x150F12C0: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150F12C4: addiu       $s6, $zero, 0x47
    ctx->r22 = ADD32(0, 0X47);
    // 0x150F12C8: addiu       $s5, $zero, -0xC1
    ctx->r21 = ADD32(0, -0XC1);
    // 0x150F12CC: c.lt.s      $f30, $f18
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f30.fl < ctx->f18.fl;
    // 0x150F12D0: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    // 0x150F12D4: bc1fl       L_150F15B4
    if (!c1cs) {
        // 0x150F12D8: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150F15B4;
    }
    goto skip_1;
    // 0x150F12D8: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_1:
    // 0x150F12DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150F12E0: nop

    // 0x150F12E4: lwc1        $f4, 0x1880($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1880);
    // 0x150F12E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F12EC: lwc1        $f6, 0x1884($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1884);
    // 0x150F12F0: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x150F12F4: sb          $t4, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r12;
    // 0x150F12F8: sh          $t5, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r13;
    // 0x150F12FC: sw          $t8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r24;
    // 0x150F1300: sh          $t7, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r15;
    // 0x150F1304: sh          $t6, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r14;
    // 0x150F1308: sw          $t9, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r25;
    // 0x150F130C: sb          $t0, 0x108($sp)
    MEM_B(0X108, ctx->r29) = ctx->r8;
    // 0x150F1310: sb          $t1, 0x109($sp)
    MEM_B(0X109, ctx->r29) = ctx->r9;
    // 0x150F1314: sb          $t2, 0x10A($sp)
    MEM_B(0X10A, ctx->r29) = ctx->r10;
    // 0x150F1318: sb          $t3, 0x10B($sp)
    MEM_B(0X10B, ctx->r29) = ctx->r11;
    // 0x150F131C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150F1320: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150F1324: addiu       $t5, $zero, 0x23
    ctx->r13 = ADD32(0, 0X23);
    // 0x150F1328: addiu       $t8, $zero, 0xDD
    ctx->r24 = ADD32(0, 0XDD);
    // 0x150F132C: addiu       $t7, $zero, 0xD3
    ctx->r15 = ADD32(0, 0XD3);
    // 0x150F1330: addiu       $t6, $zero, 0xCD
    ctx->r14 = ADD32(0, 0XCD);
    // 0x150F1334: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F1338: addiu       $t0, $zero, 0x57
    ctx->r8 = ADD32(0, 0X57);
    // 0x150F133C: addiu       $t1, $zero, 0x55
    ctx->r9 = ADD32(0, 0X55);
    // 0x150F1340: addiu       $t2, $zero, 0x5A
    ctx->r10 = ADD32(0, 0X5A);
    // 0x150F1344: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150F1348: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F134C: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x150F1350: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x150F1354: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x150F1358: sb          $t4, 0x10C($sp)
    MEM_B(0X10C, ctx->r29) = ctx->r12;
    // 0x150F135C: sb          $zero, 0x10D($sp)
    MEM_B(0X10D, ctx->r29) = 0;
    // 0x150F1360: sh          $t5, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r13;
    // 0x150F1364: sb          $t8, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r24;
    // 0x150F1368: sb          $t7, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r15;
    // 0x150F136C: sb          $t6, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r14;
    // 0x150F1370: sb          $t9, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = ctx->r25;
    // 0x150F1374: sb          $t0, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r8;
    // 0x150F1378: sb          $t1, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r9;
    // 0x150F137C: sb          $t2, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r10;
    // 0x150F1380: sb          $t3, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r11;
    // 0x150F1384: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x150F1388: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x150F138C: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x150F1390: lwc1        $f20, 0x1888($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X1888);
    // 0x150F1394: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    // 0x150F1398: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
L_150F139C:
    // 0x150F139C: jal         0x150ADA68
    // 0x150F13A0: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150F13A0: nop

    after_1:
    // 0x150F13A4: mul.s       $f16, $f24, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x150F13A8: lwc1        $f8, 0x124($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150F13AC: lwc1        $f4, 0x128($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
    // 0x150F13B0: mul.s       $f18, $f26, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x150F13B4: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x150F13B8: mul.s       $f16, $f28, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f28.fl, ctx->f0.fl);
    // 0x150F13BC: lwc1        $f8, 0x12C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x150F13C0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150F13C4: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x150F13C8: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x150F13CC: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x150F13D0: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x150F13D4: lwc1        $f2, 0x0($s4)
    ctx->f2.u32l = MEM_W(ctx->r20, 0X0);
    // 0x150F13D8: mul.s       $f18, $f24, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x150F13DC: nop

    // 0x150F13E0: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x150F13E4: nop

    // 0x150F13E8: mul.s       $f6, $f26, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f2.fl);
    // 0x150F13EC: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x150F13F0: mul.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x150F13F4: nop

    // 0x150F13F8: mul.s       $f8, $f28, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x150F13FC: swc1        $f16, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f16.u32l;
    // 0x150F1400: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x150F1404: jal         0x150ADA20
    // 0x150F1408: swc1        $f10, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150F1408: swc1        $f10, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x150F140C: jal         0x150ADA20
    // 0x150F1410: sb          $v0, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150F1410: sb          $v0, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r2;
    after_3:
    // 0x150F1414: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x150F1418: jal         0x150ADA20
    // 0x150F141C: sb          $t5, 0x99($sp)
    MEM_B(0X99, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150F141C: sb          $t5, 0x99($sp)
    MEM_B(0X99, ctx->r29) = ctx->r13;
    after_4:
    // 0x150F1420: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x150F1424: mfhi        $t8
    ctx->r24 = hi;
    // 0x150F1428: addiu       $t7, $t8, 0x4
    ctx->r15 = ADD32(ctx->r24, 0X4);
    // 0x150F142C: bne         $s2, $zero, L_150F1438
    if (ctx->r18 != 0) {
        // 0x150F1430: nop
    
            goto L_150F1438;
    }
    // 0x150F1430: nop

    // 0x150F1434: break       7
    do_break(353309748);
L_150F1438:
    // 0x150F1438: sb          $t7, 0x9A($sp)
    MEM_B(0X9A, ctx->r29) = ctx->r15;
    // 0x150F143C: jal         0x150ADA20
    // 0x150F1440: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150F1440: nop

    after_5:
    // 0x150F1444: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x150F1448: mfhi        $t6
    ctx->r14 = hi;
    // 0x150F144C: addiu       $t9, $t6, 0x4
    ctx->r25 = ADD32(ctx->r14, 0X4);
    // 0x150F1450: bne         $s2, $zero, L_150F145C
    if (ctx->r18 != 0) {
        // 0x150F1454: nop
    
            goto L_150F145C;
    }
    // 0x150F1454: nop

    // 0x150F1458: break       7
    do_break(353309784);
L_150F145C:
    // 0x150F145C: sb          $t9, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r25;
    // 0x150F1460: jal         0x150ADA68
    // 0x150F1464: nop

    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150F1464: nop

    after_6:
    // 0x150F1468: mul.s       $f18, $f0, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150F146C: jal         0x150ADA68
    // 0x150F1470: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150F1470: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x150F1474: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150F1478: jal         0x150ADA68
    // 0x150F147C: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150F147C: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x150F1480: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F1484: lwc1        $f6, 0x188C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X188C);
    // 0x150F1488: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F148C: lwc1        $f8, 0x1890($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1890);
    // 0x150F1490: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150F1494: lw          $t0, 0x100($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X100);
    // 0x150F1498: and         $t1, $t0, $s5
    ctx->r9 = ctx->r8 & ctx->r21;
    // 0x150F149C: sw          $t1, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r9;
    // 0x150F14A0: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x150F14A4: jal         0x150ADA20
    // 0x150F14A8: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150F14A8: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x150F14AC: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x150F14B0: beq         $t2, $zero, L_150F14C0
    if (ctx->r10 == 0) {
        // 0x150F14B4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_150F14C0;
    }
    // 0x150F14B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150F14B8: b           L_150F14C0
    // 0x150F14BC: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
        goto L_150F14C0;
    // 0x150F14BC: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
L_150F14C0:
    // 0x150F14C0: jal         0x150ADA20
    // 0x150F14C4: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150F14C4: nop

    after_10:
    // 0x150F14C8: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x150F14CC: beq         $t3, $zero, L_150F14DC
    if (ctx->r11 == 0) {
        // 0x150F14D0: lw          $t4, 0x100($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X100);
            goto L_150F14DC;
    }
    // 0x150F14D0: lw          $t4, 0x100($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X100);
    // 0x150F14D4: b           L_150F14E0
    // 0x150F14D8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_150F14E0;
    // 0x150F14D8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_150F14DC:
    // 0x150F14DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150F14E0:
    // 0x150F14E0: or          $t5, $v0, $s0
    ctx->r13 = ctx->r2 | ctx->r16;
    // 0x150F14E4: or          $t8, $t4, $t5
    ctx->r24 = ctx->r12 | ctx->r13;
    // 0x150F14E8: jal         0x150ADA20
    // 0x150F14EC: sw          $t8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x150F14EC: sw          $t8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r24;
    after_11:
    // 0x150F14F0: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x150F14F4: mfhi        $t7
    ctx->r15 = hi;
    // 0x150F14F8: addiu       $t6, $t7, 0x50
    ctx->r14 = ADD32(ctx->r15, 0X50);
    // 0x150F14FC: bne         $s6, $zero, L_150F1508
    if (ctx->r22 != 0) {
        // 0x150F1500: nop
    
            goto L_150F1508;
    }
    // 0x150F1500: nop

    // 0x150F1504: break       7
    do_break(353309956);
L_150F1508:
    // 0x150F1508: sb          $t6, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = ctx->r14;
    // 0x150F150C: jal         0x150ADA20
    // 0x150F1510: nop

    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x150F1510: nop

    after_12:
    // 0x150F1514: divu        $zero, $v0, $s7
    lo = S32(U32(ctx->r2) / U32(ctx->r23)); hi = S32(U32(ctx->r2) % U32(ctx->r23));
    // 0x150F1518: mfhi        $t9
    ctx->r25 = hi;
    // 0x150F151C: addiu       $t0, $t9, 0x3C
    ctx->r8 = ADD32(ctx->r25, 0X3C);
    // 0x150F1520: bne         $s7, $zero, L_150F152C
    if (ctx->r23 != 0) {
        // 0x150F1524: nop
    
            goto L_150F152C;
    }
    // 0x150F1524: nop

    // 0x150F1528: break       7
    do_break(353309992);
L_150F152C:
    // 0x150F152C: sh          $t0, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r8;
    // 0x150F1530: jal         0x150ADA68
    // 0x150F1534: nop

    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x150F1534: nop

    after_13:
    // 0x150F1538: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F153C: lwc1        $f18, 0x1894($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1894);
    // 0x150F1540: lui         $at, 0x43CA
    ctx->r1 = S32(0X43CA << 16);
    // 0x150F1544: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F1548: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150F154C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x150F1550: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150F1554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F1558: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x150F155C: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150F1560: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    // 0x150F1564: swc1        $f16, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f16.u32l;
    // 0x150F1568: lbu         $t1, 0xC($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0XC);
    // 0x150F156C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150F1570: lbu         $t2, 0x1($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X1);
    // 0x150F1574: jal         0x15130280
    // 0x150F1578: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_15130280(rdram, ctx);
        goto after_14;
    // 0x150F1578: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_14:
    // 0x150F157C: beq         $v0, $zero, L_150F1590
    if (ctx->r2 == 0) {
        // 0x150F1580: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_150F1590;
    }
    // 0x150F1580: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x150F1584: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    // 0x150F1588: jal         0x10022EC0
    // 0x150F158C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x150F158C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_15:
L_150F1590:
    // 0x150F1590: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150F1594: sub.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f30.fl;
    // 0x150F1598: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    // 0x150F159C: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150F15A0: c.lt.s      $f30, $f18
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f30.fl < ctx->f18.fl;
    // 0x150F15A4: nop

    // 0x150F15A8: bc1t        L_150F139C
    if (c1cs) {
        // 0x150F15AC: nop
    
            goto L_150F139C;
    }
    // 0x150F15AC: nop

L_150F15B0:
    // 0x150F15B0: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_150F15B4:
    // 0x150F15B4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150F15B8: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x150F15BC: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x150F15C0: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x150F15C4: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x150F15C8: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x150F15CC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x150F15D0: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x150F15D4: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x150F15D8: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x150F15DC: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x150F15E0: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x150F15E4: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x150F15E8: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x150F15EC: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x150F15F0: jr          $ra
    // 0x150F15F4: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    return;
    // 0x150F15F4: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_1500AB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500AB5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1500AB60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1500AB64: blez        $a0, L_1500AB90
    if (SIGNED(ctx->r4) <= 0) {
        // 0x1500AB68: slti        $at, $a0, 0x6
        ctx->r1 = SIGNED(ctx->r4) < 0X6 ? 1 : 0;
            goto L_1500AB90;
    }
    // 0x1500AB68: slti        $at, $a0, 0x6
    ctx->r1 = SIGNED(ctx->r4) < 0X6 ? 1 : 0;
    // 0x1500AB6C: beq         $at, $zero, L_1500AB90
    if (ctx->r1 == 0) {
        // 0x1500AB70: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_1500AB90;
    }
    // 0x1500AB70: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1500AB74: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1500AB78: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x1500AB7C: lw          $v0, 0x2D60($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2D60);
    // 0x1500AB80: beql        $v0, $zero, L_1500AB94
    if (ctx->r2 == 0) {
        // 0x1500AB84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1500AB94;
    }
    goto skip_0;
    // 0x1500AB84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1500AB88: jalr        $v0
    // 0x1500AB8C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x1500AB8C: nop

    after_0:
L_1500AB90:
    // 0x1500AB90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1500AB94:
    // 0x1500AB94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1500AB98: jr          $ra
    // 0x1500AB9C: nop

    return;
    return;
    // 0x1500AB9C: nop

;}
RECOMP_FUNC void func_151B2348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B2348: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x151B234C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151B2350: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x151B2354: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x151B2358: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151B235C: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x151B2360: lw          $t6, 0xA8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA8);
    // 0x151B2364: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151B2368: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x151B236C: lw          $s0, 0x30($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X30);
    // 0x151B2370: lw          $s1, 0x28($t6)
    ctx->r17 = MEM_W(ctx->r14, 0X28);
    // 0x151B2374: sb          $t7, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r15;
    // 0x151B2378: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x151B237C: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x151B2380: lbu         $t8, 0x3B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3B);
    // 0x151B2384: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151B2388: sb          $t9, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r25;
    // 0x151B238C: addiu       $t1, $t1, -0x5CB0
    ctx->r9 = ADD32(ctx->r9, -0X5CB0);
    // 0x151B2390: sb          $t8, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r24;
    // 0x151B2394: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151B2398: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
    // 0x151B239C: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x151B23A0: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x151B23A4: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x151B23A8: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x151B23AC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x151B23B0: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x151B23B4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x151B23B8: lbu         $t5, 0x3B($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X3B);
    // 0x151B23BC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151B23C0: sb          $t6, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r14;
    // 0x151B23C4: addiu       $t8, $t8, -0x5CA4
    ctx->r24 = ADD32(ctx->r24, -0X5CA4);
    // 0x151B23C8: sb          $t5, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r13;
    // 0x151B23CC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151B23D0: addiu       $t7, $sp, 0x50
    ctx->r15 = ADD32(ctx->r29, 0X50);
    // 0x151B23D4: lw          $t2, 0x4($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X4);
    // 0x151B23D8: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151B23DC: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x151B23E0: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    // 0x151B23E4: addiu       $t0, $zero, 0x3E8
    ctx->r8 = ADD32(0, 0X3E8);
    // 0x151B23E8: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x151B23EC: sb          $zero, 0x98($sp)
    MEM_B(0X98, ctx->r29) = 0;
    // 0x151B23F0: sb          $zero, 0x64($sp)
    MEM_B(0X64, ctx->r29) = 0;
    // 0x151B23F4: sh          $t0, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r8;
    // 0x151B23F8: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151B23FC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151B2400: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151B2404: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x151B2408: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151B240C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B2410: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x151B2414: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x151B2418: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151B241C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151B2420: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B2424: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x151B2428: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151B242C: lwc1        $f8, -0x5C80($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5C80);
    // 0x151B2430: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B2434: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x151B2438: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151B243C: lwc1        $f10, -0x5C7C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5C7C);
    // 0x151B2440: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151B2444: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x151B2448: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151B244C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151B2450: lui         $a1, 0x3AC4
    ctx->r5 = S32(0X3AC4 << 16);
    // 0x151B2454: sb          $t1, 0x80($sp)
    MEM_B(0X80, ctx->r29) = ctx->r9;
    // 0x151B2458: sb          $t4, 0x81($sp)
    MEM_B(0X81, ctx->r29) = ctx->r12;
    // 0x151B245C: sb          $zero, 0x82($sp)
    MEM_B(0X82, ctx->r29) = 0;
    // 0x151B2460: sb          $t5, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r13;
    // 0x151B2464: ori         $a1, $a1, 0x9BA6
    ctx->r5 = ctx->r5 | 0X9BA6;
    // 0x151B2468: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B246C: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x151B2470: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x151B2474: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151B2478: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x151B247C: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x151B2480: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x151B2484: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x151B2488: jal         0x151B30B0
    // 0x151B248C: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    func_151B30B0(rdram, ctx);
        goto after_0;
    // 0x151B248C: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x151B2490: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x151B2494: addiu       $a0, $v0, 0x150
    ctx->r4 = ADD32(ctx->r2, 0X150);
    // 0x151B2498: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x151B249C: addiu       $s2, $s2, 0x28
    ctx->r18 = ADD32(ctx->r18, 0X28);
    // 0x151B24A0: beq         $v0, $zero, L_151B24B0
    if (ctx->r2 == 0) {
        // 0x151B24A4: sw          $v0, 0x18($s2)
        MEM_W(0X18, ctx->r18) = ctx->r2;
            goto L_151B24B0;
    }
    // 0x151B24A4: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x151B24A8: jal         0x10022EC0
    // 0x151B24AC: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151B24AC: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_1:
L_151B24B0:
    // 0x151B24B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151B24B4: sb          $t6, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r14;
    // 0x151B24B8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x151B24BC: lbu         $t3, 0x3B($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X3B);
    // 0x151B24C0: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x151B24C4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151B24C8: sb          $t9, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r25;
    // 0x151B24CC: addiu       $t8, $t8, -0x5CE0
    ctx->r24 = ADD32(ctx->r24, -0X5CE0);
    // 0x151B24D0: sb          $t3, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r11;
    // 0x151B24D4: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151B24D8: addiu       $t7, $sp, 0x3C
    ctx->r15 = ADD32(ctx->r29, 0X3C);
    // 0x151B24DC: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x151B24E0: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151B24E4: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x151B24E8: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x151B24EC: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x151B24F0: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x151B24F4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x151B24F8: lbu         $t4, 0x3B($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X3B);
    // 0x151B24FC: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x151B2500: sb          $t5, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r13;
    // 0x151B2504: addiu       $t3, $t3, -0x5CC8
    ctx->r11 = ADD32(ctx->r11, -0X5CC8);
    // 0x151B2508: sb          $t4, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r12;
    // 0x151B250C: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x151B2510: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x151B2514: lw          $t2, 0x4($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X4);
    // 0x151B2518: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151B251C: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x151B2520: sw          $t2, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r10;
    // 0x151B2524: lui         $a1, 0x3AC4
    ctx->r5 = S32(0X3AC4 << 16);
    // 0x151B2528: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151B252C: lwc1        $f16, 0x14($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X14);
    // 0x151B2530: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x151B2534: ori         $a1, $a1, 0x9BA6
    ctx->r5 = ctx->r5 | 0X9BA6;
    // 0x151B2538: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x151B253C: lwc1        $f18, 0x18($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X18);
    // 0x151B2540: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151B2544: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x151B2548: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x151B254C: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x151B2550: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x151B2554: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151B2558: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x151B255C: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151B2560: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x151B2564: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151B2568: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x151B256C: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151B2570: sb          $zero, 0x82($sp)
    MEM_B(0X82, ctx->r29) = 0;
    // 0x151B2574: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B2578: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    // 0x151B257C: jal         0x151B30B0
    // 0x151B2580: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    func_151B30B0(rdram, ctx);
        goto after_2;
    // 0x151B2580: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x151B2584: beq         $v0, $zero, L_151B259C
    if (ctx->r2 == 0) {
        // 0x151B2588: sw          $v0, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r2;
            goto L_151B259C;
    }
    // 0x151B2588: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x151B258C: addiu       $a0, $v0, 0x150
    ctx->r4 = ADD32(ctx->r2, 0X150);
    // 0x151B2590: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x151B2594: jal         0x10022EC0
    // 0x151B2598: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151B2598: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_3:
L_151B259C:
    // 0x151B259C: sb          $zero, 0x60($sp)
    MEM_B(0X60, ctx->r29) = 0;
    // 0x151B25A0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x151B25A4: lbu         $t7, 0x3B($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X3B);
    // 0x151B25A8: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x151B25AC: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151B25B0: sb          $t8, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r24;
    // 0x151B25B4: addiu       $t4, $t4, -0x5CD4
    ctx->r12 = ADD32(ctx->r12, -0X5CD4);
    // 0x151B25B8: sb          $t7, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r15;
    // 0x151B25BC: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151B25C0: addiu       $t1, $sp, 0x3C
    ctx->r9 = ADD32(ctx->r29, 0X3C);
    // 0x151B25C4: lw          $t9, 0x4($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X4);
    // 0x151B25C8: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x151B25CC: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x151B25D0: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x151B25D4: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x151B25D8: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x151B25DC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x151B25E0: lbu         $t6, 0x3B($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3B);
    // 0x151B25E4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151B25E8: sb          $t3, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r11;
    // 0x151B25EC: addiu       $t7, $t7, -0x5CBC
    ctx->r15 = ADD32(ctx->r15, -0X5CBC);
    // 0x151B25F0: sb          $t6, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r14;
    // 0x151B25F4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151B25F8: addiu       $t2, $sp, 0x50
    ctx->r10 = ADD32(ctx->r29, 0X50);
    // 0x151B25FC: lw          $t5, 0x4($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X4);
    // 0x151B2600: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151B2604: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151B2608: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x151B260C: lui         $a1, 0x3AC4
    ctx->r5 = S32(0X3AC4 << 16);
    // 0x151B2610: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x151B2614: lwc1        $f18, 0x14($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X14);
    // 0x151B2618: ori         $a1, $a1, 0x9BA6
    ctx->r5 = ctx->r5 | 0X9BA6;
    // 0x151B261C: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x151B2620: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x151B2624: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x151B2628: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x151B262C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151B2630: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x151B2634: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x151B2638: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x151B263C: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151B2640: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x151B2644: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151B2648: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x151B264C: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151B2650: sb          $zero, 0x82($sp)
    MEM_B(0X82, ctx->r29) = 0;
    // 0x151B2654: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B2658: jal         0x151B30B0
    // 0x151B265C: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    func_151B30B0(rdram, ctx);
        goto after_4;
    // 0x151B265C: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x151B2660: beq         $v0, $zero, L_151B2678
    if (ctx->r2 == 0) {
        // 0x151B2664: sw          $v0, 0x10($s2)
        MEM_W(0X10, ctx->r18) = ctx->r2;
            goto L_151B2678;
    }
    // 0x151B2664: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x151B2668: addiu       $a0, $v0, 0x150
    ctx->r4 = ADD32(ctx->r2, 0X150);
    // 0x151B266C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x151B2670: jal         0x10022EC0
    // 0x151B2674: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x151B2674: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_5:
L_151B2678:
    // 0x151B2678: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151B267C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151B2680: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x151B2684: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x151B2688: jr          $ra
    // 0x151B268C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    return;
    // 0x151B268C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_1503ECA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503ECA0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1503ECA4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x1503ECA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1503ECAC: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x1503ECB0: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x1503ECB4: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x1503ECB8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x1503ECBC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x1503ECC0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x1503ECC4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x1503ECC8: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x1503ECCC: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x1503ECD0: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x1503ECD4: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x1503ECD8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x1503ECDC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1503ECE0: jal         0x1510F800
    // 0x1503ECE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x1503ECE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x1503ECE8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1503ECEC: addiu       $t7, $t7, 0x6660
    ctx->r15 = ADD32(ctx->r15, 0X6660);
    // 0x1503ECF0: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x1503ECF4: addu        $s3, $t6, $t7
    ctx->r19 = ADD32(ctx->r14, ctx->r15);
    // 0x1503ECF8: lbu         $t8, 0xE($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0XE);
    // 0x1503ECFC: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x1503ED00: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1503ED04: addu        $s6, $s6, $t8
    ctx->r22 = ADD32(ctx->r22, ctx->r24);
    // 0x1503ED08: lbu         $s6, -0x76EC($s6)
    ctx->r22 = MEM_BU(ctx->r22, -0X76EC);
    // 0x1503ED0C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1503ED10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503ED14: blez        $s6, L_1503EE78
    if (SIGNED(ctx->r22) <= 0) {
        // 0x1503ED18: lui         $s5, 0x8008
        ctx->r21 = S32(0X8008 << 16);
            goto L_1503EE78;
    }
    // 0x1503ED18: lui         $s5, 0x8008
    ctx->r21 = S32(0X8008 << 16);
    // 0x1503ED1C: lwc1        $f30, -0x76D8($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X76D8);
    // 0x1503ED20: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x1503ED24: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x1503ED28: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x1503ED2C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1503ED30: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x1503ED34: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1503ED38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503ED3C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x1503ED40: lwc1        $f22, -0x76D4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X76D4);
    // 0x1503ED44: addiu       $s5, $s5, 0x4454
    ctx->r21 = ADD32(ctx->r21, 0X4454);
    // 0x1503ED48: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
L_1503ED4C:
    // 0x1503ED4C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x1503ED50: addu        $t9, $v0, $s2
    ctx->r25 = ADD32(ctx->r2, ctx->r18);
    // 0x1503ED54: lbu         $t0, 0x64($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X64);
    // 0x1503ED58: beql        $t0, $zero, L_1503EE70
    if (ctx->r8 == 0) {
        // 0x1503ED5C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1503EE70;
    }
    goto skip_0;
    // 0x1503ED5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x1503ED60: lbu         $t1, 0xE($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0XE);
    // 0x1503ED64: addu        $s0, $v0, $s2
    ctx->r16 = ADD32(ctx->r2, ctx->r18);
    // 0x1503ED68: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x1503ED6C: addu        $t3, $s5, $t2
    ctx->r11 = ADD32(ctx->r21, ctx->r10);
    // 0x1503ED70: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1503ED74: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x1503ED78: lb          $t6, 0x0($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X0);
    // 0x1503ED7C: bnel        $s4, $t6, L_1503EE70
    if (ctx->r20 != ctx->r14) {
        // 0x1503ED80: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1503EE70;
    }
    goto skip_1;
    // 0x1503ED80: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x1503ED84: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
    // 0x1503ED88: c.eq.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl == ctx->f4.fl;
    // 0x1503ED8C: nop

    // 0x1503ED90: bc1tl       L_1503EE70
    if (c1cs) {
        // 0x1503ED94: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1503EE70;
    }
    goto skip_2;
    // 0x1503ED94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x1503ED98: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x1503ED9C: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1503EDA0: lwc1        $f18, 0x2C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1503EDA4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1503EDA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1503EDAC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1503EDB0: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x1503EDB4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1503EDB8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x1503EDBC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x1503EDC0: jal         0x1510F8D8
    // 0x1503EDC4: nop

    func_1510F8D8(rdram, ctx);
        goto after_1;
    // 0x1503EDC4: nop

    after_1:
    // 0x1503EDC8: addiu       $t0, $v0, 0x5
    ctx->r8 = ADD32(ctx->r2, 0X5);
    // 0x1503EDCC: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x1503EDD0: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1503EDD4: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1503EDD8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x1503EDDC: nop

    // 0x1503EDE0: bc1fl       L_1503EE70
    if (!c1cs) {
        // 0x1503EDE4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1503EE70;
    }
    goto skip_3;
    // 0x1503EDE4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x1503EDE8: lwc1        $f2, 0x4C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x1503EDEC: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x1503EDF0: c.lt.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
    // 0x1503EDF4: nop

    // 0x1503EDF8: bc1fl       L_1503EE54
    if (!c1cs) {
        // 0x1503EDFC: swc1        $f20, 0x5C($s0)
        MEM_W(0X5C, ctx->r16) = ctx->f20.u32l;
            goto L_1503EE54;
    }
    goto skip_4;
    // 0x1503EDFC: swc1        $f20, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f20.u32l;
    skip_4:
    // 0x1503EE00: lwc1        $f10, 0x48($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X48);
    // 0x1503EE04: lwc1        $f4, 0x50($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X50);
    // 0x1503EE08: lwc1        $f8, 0x54($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X54);
    // 0x1503EE0C: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1503EE10: nop

    // 0x1503EE14: mul.s       $f18, $f2, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f28.fl);
    // 0x1503EE18: nop

    // 0x1503EE1C: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x1503EE20: swc1        $f16, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f16.u32l;
    // 0x1503EE24: lwc1        $f16, 0x58($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X58);
    // 0x1503EE28: mul.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x1503EE2C: swc1        $f18, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f18.u32l;
    // 0x1503EE30: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x1503EE34: mul.s       $f18, $f16, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f30.fl);
    // 0x1503EE38: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
    // 0x1503EE3C: mul.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x1503EE40: swc1        $f10, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f10.u32l;
    // 0x1503EE44: swc1        $f18, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f18.u32l;
    // 0x1503EE48: b           L_1503EE6C
    // 0x1503EE4C: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
        goto L_1503EE6C;
    // 0x1503EE4C: swc1        $f6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f6.u32l;
    // 0x1503EE50: swc1        $f20, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f20.u32l;
L_1503EE54:
    // 0x1503EE54: swc1        $f20, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f20.u32l;
    // 0x1503EE58: swc1        $f20, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f20.u32l;
    // 0x1503EE5C: swc1        $f20, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f20.u32l;
    // 0x1503EE60: swc1        $f20, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f20.u32l;
    // 0x1503EE64: swc1        $f20, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f20.u32l;
    // 0x1503EE68: swc1        $f20, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f20.u32l;
L_1503EE6C:
    // 0x1503EE6C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1503EE70:
    // 0x1503EE70: bne         $s1, $s6, L_1503ED4C
    if (ctx->r17 != ctx->r22) {
        // 0x1503EE74: addiu       $s2, $s2, 0x68
        ctx->r18 = ADD32(ctx->r18, 0X68);
            goto L_1503ED4C;
    }
    // 0x1503EE74: addiu       $s2, $s2, 0x68
    ctx->r18 = ADD32(ctx->r18, 0X68);
L_1503EE78:
    // 0x1503EE78: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x1503EE7C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1503EE80: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x1503EE84: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x1503EE88: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x1503EE8C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x1503EE90: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x1503EE94: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x1503EE98: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x1503EE9C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x1503EEA0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x1503EEA4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x1503EEA8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x1503EEAC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x1503EEB0: jr          $ra
    // 0x1503EEB4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x1503EEB4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_1000A03C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000A03C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x1000A040: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x1000A044: addiu       $t1, $t1, -0x51B0
    ctx->r9 = ADD32(ctx->r9, -0X51B0);
    // 0x1000A048: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1000A04C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1000A050: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1000A054: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1000A058: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1000A05C: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x1000A060: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1000A064: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x1000A068: beq         $v0, $zero, L_1000A1F0
    if (ctx->r2 == 0) {
        // 0x1000A06C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_1000A1F0;
    }
    // 0x1000A06C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1000A070: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x1000A074: addiu       $s1, $s1, 0x6A0
    ctx->r17 = ADD32(ctx->r17, 0X6A0);
    // 0x1000A078: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x1000A07C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_1000A080:
    // 0x1000A080: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x1000A084: addiu       $a0, $a0, 0x16F0
    ctx->r4 = ADD32(ctx->r4, 0X16F0);
    // 0x1000A088: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x1000A08C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1000A090: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x1000A094: jal         0x10023440
    // 0x1000A098: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x1000A098: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    after_0:
    // 0x1000A09C: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x1000A0A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1000A0A4: addiu       $t1, $t1, -0x51B0
    ctx->r9 = ADD32(ctx->r9, -0X51B0);
    // 0x1000A0A8: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x1000A0AC: beq         $v0, $at, L_1000A1DC
    if (ctx->r2 == ctx->r1) {
        // 0x1000A0B0: lw          $t0, 0x68($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X68);
            goto L_1000A1DC;
    }
    // 0x1000A0B0: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x1000A0B4: lw          $s0, 0xC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC);
    // 0x1000A0B8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1000A0BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000A0C0: beql        $s0, $zero, L_1000A1E0
    if (ctx->r16 == 0) {
        // 0x1000A0C4: lw          $v0, 0x0($t1)
        ctx->r2 = MEM_W(ctx->r9, 0X0);
            goto L_1000A1E0;
    }
    goto skip_0;
    // 0x1000A0C4: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    skip_0:
    // 0x1000A0C8: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
L_1000A0CC:
    // 0x1000A0CC: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x1000A0D0: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x1000A0D4: bnel        $t7, $t8, L_1000A1CC
    if (ctx->r15 != ctx->r24) {
        // 0x1000A0D8: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_1000A1CC;
    }
    goto skip_1;
    // 0x1000A0D8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x1000A0DC: lw          $t9, 0xC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC);
    // 0x1000A0E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1000A0E4: bnel        $s0, $t9, L_1000A0F8
    if (ctx->r16 != ctx->r25) {
        // 0x1000A0E8: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_1000A0F8;
    }
    goto skip_2;
    // 0x1000A0E8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x1000A0EC: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x1000A0F0: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
    // 0x1000A0F4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_1000A0F8:
    // 0x1000A0F8: beql        $v0, $zero, L_1000A10C
    if (ctx->r2 == 0) {
        // 0x1000A0FC: lw          $v0, 0x4($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X4);
            goto L_1000A10C;
    }
    goto skip_3;
    // 0x1000A0FC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    skip_3:
    // 0x1000A100: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x1000A104: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x1000A108: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
L_1000A10C:
    // 0x1000A10C: beql        $v0, $zero, L_1000A120
    if (ctx->r2 == 0) {
        // 0x1000A110: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_1000A120;
    }
    goto skip_4;
    // 0x1000A110: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_4:
    // 0x1000A114: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x1000A118: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x1000A11C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_1000A120:
    // 0x1000A120: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x1000A124: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x1000A128: beql        $v1, $zero, L_1000A160
    if (ctx->r3 == 0) {
        // 0x1000A12C: sw          $s0, 0x4($s1)
        MEM_W(0X4, ctx->r17) = ctx->r16;
            goto L_1000A160;
    }
    goto skip_5;
    // 0x1000A12C: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    skip_5:
    // 0x1000A130: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x1000A134: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x1000A138: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1000A13C: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x1000A140: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x1000A144: beql        $a0, $zero, L_1000A154
    if (ctx->r4 == 0) {
        // 0x1000A148: sw          $s0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r16;
            goto L_1000A154;
    }
    goto skip_6;
    // 0x1000A148: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    skip_6:
    // 0x1000A14C: sw          $s0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r16;
    // 0x1000A150: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
L_1000A154:
    // 0x1000A154: b           L_1000A16C
    // 0x1000A158: lbu         $t6, 0x16($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X16);
        goto L_1000A16C;
    // 0x1000A158: lbu         $t6, 0x16($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X16);
    // 0x1000A15C: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
L_1000A160:
    // 0x1000A160: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x1000A164: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x1000A168: lbu         $t6, 0x16($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X16);
L_1000A16C:
    // 0x1000A16C: bnel        $s3, $t6, L_1000A1B8
    if (ctx->r19 != ctx->r14) {
        // 0x1000A170: lb          $t4, 0x14($s0)
        ctx->r12 = MEM_B(ctx->r16, 0X14);
            goto L_1000A1B8;
    }
    goto skip_7;
    // 0x1000A170: lb          $t4, 0x14($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X14);
    skip_7:
    // 0x1000A174: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x1000A178: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1000A17C: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
    // 0x1000A180: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1000A184: beql        $t7, $zero, L_1000A1B8
    if (ctx->r15 == 0) {
        // 0x1000A188: lb          $t4, 0x14($s0)
        ctx->r12 = MEM_B(ctx->r16, 0X14);
            goto L_1000A1B8;
    }
    goto skip_8;
    // 0x1000A188: lb          $t4, 0x14($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X14);
    skip_8:
    // 0x1000A18C: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
L_1000A190:
    // 0x1000A190: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x1000A194: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1000A198: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1000A19C: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x1000A1A0: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x1000A1A4: lh          $t3, 0xE($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XE);
    // 0x1000A1A8: sltu        $at, $v1, $t3
    ctx->r1 = ctx->r3 < ctx->r11 ? 1 : 0;
    // 0x1000A1AC: bnel        $at, $zero, L_1000A190
    if (ctx->r1 != 0) {
        // 0x1000A1B0: lw          $t8, 0x10($v0)
        ctx->r24 = MEM_W(ctx->r2, 0X10);
            goto L_1000A190;
    }
    goto skip_9;
    // 0x1000A1B0: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    skip_9:
    // 0x1000A1B4: lb          $t4, 0x14($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X14);
L_1000A1B8:
    // 0x1000A1B8: sb          $s2, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r18;
    // 0x1000A1BC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x1000A1C0: b           L_1000A1CC
    // 0x1000A1C4: sb          $t5, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r13;
        goto L_1000A1CC;
    // 0x1000A1C4: sb          $t5, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r13;
    // 0x1000A1C8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_1000A1CC:
    // 0x1000A1CC: beql        $s0, $zero, L_1000A1E0
    if (ctx->r16 == 0) {
        // 0x1000A1D0: lw          $v0, 0x0($t1)
        ctx->r2 = MEM_W(ctx->r9, 0X0);
            goto L_1000A1E0;
    }
    goto skip_10;
    // 0x1000A1D0: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    skip_10:
    // 0x1000A1D4: beql        $a1, $zero, L_1000A0CC
    if (ctx->r5 == 0) {
        // 0x1000A1D8: lw          $t6, 0x64($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X64);
            goto L_1000A0CC;
    }
    goto skip_11;
    // 0x1000A1D8: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    skip_11:
L_1000A1DC:
    // 0x1000A1DC: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
L_1000A1E0:
    // 0x1000A1E0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x1000A1E4: sltu        $at, $a3, $v0
    ctx->r1 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x1000A1E8: bne         $at, $zero, L_1000A080
    if (ctx->r1 != 0) {
        // 0x1000A1EC: nop
    
            goto L_1000A080;
    }
    // 0x1000A1EC: nop

L_1000A1F0:
    // 0x1000A1F0: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x1000A1F4: addiu       $s1, $s1, 0x6A0
    ctx->r17 = ADD32(ctx->r17, 0X6A0);
    // 0x1000A1F8: lw          $s0, 0x10($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X10);
    // 0x1000A1FC: subu        $t6, $v0, $t0
    ctx->r14 = SUB32(ctx->r2, ctx->r8);
    // 0x1000A200: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x1000A204: beq         $s0, $zero, L_1000A30C
    if (ctx->r16 == 0) {
        // 0x1000A208: sw          $t6, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r14;
            goto L_1000A30C;
    }
    // 0x1000A208: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x1000A20C: lbu         $t7, 0x16($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X16);
L_1000A210:
    // 0x1000A210: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1000A214: lw          $s2, 0x0($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X0);
    // 0x1000A218: bne         $s3, $t7, L_1000A268
    if (ctx->r19 != ctx->r15) {
        // 0x1000A21C: nop
    
            goto L_1000A268;
    }
    // 0x1000A21C: nop

    // 0x1000A220: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x1000A224: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1000A228: lh          $a1, 0xE($a2)
    ctx->r5 = MEM_H(ctx->r6, 0XE);
    // 0x1000A22C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x1000A230: beq         $a1, $zero, L_1000A268
    if (ctx->r5 == 0) {
        // 0x1000A234: nop
    
            goto L_1000A268;
    }
    // 0x1000A234: nop

L_1000A238:
    // 0x1000A238: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x1000A23C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1000A240: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x1000A244: lbu         $t9, 0xA($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XA);
    // 0x1000A248: beql        $t9, $zero, L_1000A260
    if (ctx->r25 == 0) {
        // 0x1000A24C: sltu        $at, $v1, $a1
        ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
            goto L_1000A260;
    }
    goto skip_12;
    // 0x1000A24C: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    skip_12:
    // 0x1000A250: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x1000A254: lh          $a1, 0xE($a2)
    ctx->r5 = MEM_H(ctx->r6, 0XE);
    // 0x1000A258: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x1000A25C: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
L_1000A260:
    // 0x1000A260: bne         $at, $zero, L_1000A238
    if (ctx->r1 != 0) {
        // 0x1000A264: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_1000A238;
    }
    // 0x1000A264: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_1000A268:
    // 0x1000A268: bnel        $a3, $zero, L_1000A304
    if (ctx->r7 != 0) {
        // 0x1000A26C: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_1000A304;
    }
    goto skip_13;
    // 0x1000A26C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    skip_13:
    // 0x1000A270: sb          $zero, 0x14($s0)
    MEM_B(0X14, ctx->r16) = 0;
    // 0x1000A274: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x1000A278: jal         0x10004074
    // 0x1000A27C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_10004074(rdram, ctx);
        goto after_1;
    // 0x1000A27C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_1:
    // 0x1000A280: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x1000A284: lw          $t2, 0x10($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X10);
    // 0x1000A288: bnel        $s0, $t2, L_1000A298
    if (ctx->r16 != ctx->r10) {
        // 0x1000A28C: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_1000A298;
    }
    goto skip_14;
    // 0x1000A28C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_14:
    // 0x1000A290: sw          $s2, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r18;
    // 0x1000A294: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_1000A298:
    // 0x1000A298: beql        $v0, $zero, L_1000A2AC
    if (ctx->r2 == 0) {
        // 0x1000A29C: lw          $v0, 0x4($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X4);
            goto L_1000A2AC;
    }
    goto skip_15;
    // 0x1000A29C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    skip_15:
    // 0x1000A2A0: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x1000A2A4: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x1000A2A8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
L_1000A2AC:
    // 0x1000A2AC: beql        $v0, $zero, L_1000A2C0
    if (ctx->r2 == 0) {
        // 0x1000A2B0: lw          $v1, 0x8($s1)
        ctx->r3 = MEM_W(ctx->r17, 0X8);
            goto L_1000A2C0;
    }
    goto skip_16;
    // 0x1000A2B0: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    skip_16:
    // 0x1000A2B4: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x1000A2B8: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x1000A2BC: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
L_1000A2C0:
    // 0x1000A2C0: beql        $v1, $zero, L_1000A2F8
    if (ctx->r3 == 0) {
        // 0x1000A2C4: sw          $s0, 0x8($s1)
        MEM_W(0X8, ctx->r17) = ctx->r16;
            goto L_1000A2F8;
    }
    goto skip_17;
    // 0x1000A2C4: sw          $s0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r16;
    skip_17:
    // 0x1000A2C8: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x1000A2CC: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x1000A2D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1000A2D4: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x1000A2D8: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x1000A2DC: beql        $a0, $zero, L_1000A2EC
    if (ctx->r4 == 0) {
        // 0x1000A2E0: sw          $s0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r16;
            goto L_1000A2EC;
    }
    goto skip_18;
    // 0x1000A2E0: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    skip_18:
    // 0x1000A2E4: sw          $s0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r16;
    // 0x1000A2E8: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
L_1000A2EC:
    // 0x1000A2EC: b           L_1000A304
    // 0x1000A2F0: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
        goto L_1000A304;
    // 0x1000A2F0: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x1000A2F4: sw          $s0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r16;
L_1000A2F8:
    // 0x1000A2F8: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x1000A2FC: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x1000A300: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_1000A304:
    // 0x1000A304: bnel        $s2, $zero, L_1000A210
    if (ctx->r18 != 0) {
        // 0x1000A308: lbu         $t7, 0x16($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X16);
            goto L_1000A210;
    }
    goto skip_19;
    // 0x1000A308: lbu         $t7, 0x16($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X16);
    skip_19:
L_1000A30C:
    // 0x1000A30C: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x1000A310: addiu       $s0, $s0, -0x1C7C
    ctx->r16 = ADD32(ctx->r16, -0X1C7C);
    // 0x1000A314: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x1000A318: beql        $t6, $zero, L_1000A330
    if (ctx->r14 == 0) {
        // 0x1000A31C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1000A330;
    }
    goto skip_20;
    // 0x1000A31C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_20:
    // 0x1000A320: jal         0x1000A348
    // 0x1000A324: nop

    func_1000A348(rdram, ctx);
        goto after_2;
    // 0x1000A324: nop

    after_2:
    // 0x1000A328: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x1000A32C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1000A330:
    // 0x1000A330: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1000A334: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1000A338: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1000A33C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1000A340: jr          $ra
    // 0x1000A344: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x1000A344: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_1509F850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509F850: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1509F854: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1509F858: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x1509F85C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1509F860: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1509F864: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x1509F868: sltiu       $at, $t6, 0x17
    ctx->r1 = ctx->r14 < 0X17 ? 1 : 0;
    // 0x1509F86C: beq         $at, $zero, L_1509FDF4
    if (ctx->r1 == 0) {
        // 0x1509F870: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_1509FDF4;
    }
    // 0x1509F870: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1509F874: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1509F878: addu        $at, $at, $t6
    gpr jr_addend_1509F880 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1509F87C: lw          $t6, -0xB5C($at)
    ctx->r14 = ADD32(ctx->r1, -0XB5C);
    // 0x1509F880: jr          $t6
    // 0x1509F884: nop

    switch (jr_addend_1509F880 >> 2) {
        case 0: goto L_1509F908; break;
        case 1: goto L_1509F888; break;
        case 2: goto L_1509F968; break;
        case 3: goto L_1509F9F8; break;
        case 4: goto L_1509F9C0; break;
        case 5: goto L_1509FA24; break;
        case 6: goto L_1509FA38; break;
        case 7: goto L_1509FA68; break;
        case 8: goto L_1509FAA8; break;
        case 9: goto L_1509FB28; break;
        case 10: goto L_1509FB38; break;
        case 11: goto L_1509FBC4; break;
        case 12: goto L_1509FC0C; break;
        case 13: goto L_1509FC1C; break;
        case 14: goto L_1509FC38; break;
        case 15: goto L_1509FC94; break;
        case 16: goto L_1509FCE8; break;
        case 17: goto L_1509FD10; break;
        case 18: goto L_1509FD6C; break;
        case 19: goto L_1509FD98; break;
        case 20: goto L_1509FDA8; break;
        case 21: goto L_1509FDB8; break;
        case 22: goto L_1509FDD0; break;
        default: switch_error(__func__, 0x1509F880, 0x8009F4A4);
    }
    // 0x1509F884: nop

L_1509F888:
    // 0x1509F888: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x1509F88C: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x1509F890: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x1509F894: jal         0x1509B704
    // 0x1509F898: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    func_1509B704(rdram, ctx);
        goto after_0;
    // 0x1509F898: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_0:
    // 0x1509F89C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x1509F8A0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1509F8A4: lw          $t9, 0x2E4C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2E4C);
    // 0x1509F8A8: sra         $t8, $a3, 3
    ctx->r24 = S32(SIGNED(ctx->r7) >> 3);
    // 0x1509F8AC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1509F8B0: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x1509F8B4: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x1509F8B8: andi        $t2, $a3, 0x7
    ctx->r10 = ctx->r7 & 0X7;
    // 0x1509F8BC: sllv        $t4, $t3, $t2
    ctx->r12 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x1509F8C0: andi        $t1, $t0, 0x7
    ctx->r9 = ctx->r8 & 0X7;
    // 0x1509F8C4: and         $t5, $t1, $t4
    ctx->r13 = ctx->r9 & ctx->r12;
    // 0x1509F8C8: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
    // 0x1509F8CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1509F8D0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509F8D4: sw          $t6, 0x2F58($at)
    MEM_W(0X2F58, ctx->r1) = ctx->r14;
    // 0x1509F8D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1509F8DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509F8E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1509F8E4: bne         $v0, $zero, L_1509F8F4
    if (ctx->r2 != 0) {
        // 0x1509F8E8: sb          $a2, 0x2E43($at)
        MEM_B(0X2E43, ctx->r1) = ctx->r6;
            goto L_1509F8F4;
    }
    // 0x1509F8E8: sb          $a2, 0x2E43($at)
    MEM_B(0X2E43, ctx->r1) = ctx->r6;
    // 0x1509F8EC: b           L_1509FDF8
    // 0x1509F8F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509F8F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509F8F4:
    // 0x1509F8F4: lhu         $t7, 0x0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X0);
    // 0x1509F8F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1509F8FC: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x1509F900: b           L_1509FDF8
    // 0x1509F904: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
        goto L_1509FDF8;
    // 0x1509F904: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
L_1509F908:
    // 0x1509F908: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1509F90C: addiu       $v1, $v1, 0x7410
    ctx->r3 = ADD32(ctx->r3, 0X7410);
    // 0x1509F910: lbu         $t9, 0x1($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1);
    // 0x1509F914: beq         $t9, $zero, L_1509F928
    if (ctx->r25 == 0) {
        // 0x1509F918: nop
    
            goto L_1509F928;
    }
    // 0x1509F918: nop

    // 0x1509F91C: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x1509F920: b           L_1509FDF8
    // 0x1509F924: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509F924: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509F928:
    // 0x1509F928: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1509F92C: lw          $t3, 0x2E4C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2E4C);
    // 0x1509F930: sra         $t0, $a3, 3
    ctx->r8 = S32(SIGNED(ctx->r7) >> 3);
    // 0x1509F934: andi        $t1, $a3, 0x7
    ctx->r9 = ctx->r7 & 0X7;
    // 0x1509F938: addu        $v1, $t0, $t3
    ctx->r3 = ADD32(ctx->r8, ctx->r11);
    // 0x1509F93C: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x1509F940: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1509F944: sllv        $t5, $t4, $t1
    ctx->r13 = S32(ctx->r12 << (ctx->r9 & 31));
    // 0x1509F948: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x1509F94C: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x1509F950: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1509F954: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509F958: sw          $t7, 0x2F58($at)
    MEM_W(0X2F58, ctx->r1) = ctx->r15;
    // 0x1509F95C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1509F960: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509F964: sb          $a2, 0x2E43($at)
    MEM_B(0X2E43, ctx->r1) = ctx->r6;
L_1509F968:
    // 0x1509F968: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x1509F96C: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x1509F970: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x1509F974: jal         0x1509B704
    // 0x1509F978: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    func_1509B704(rdram, ctx);
        goto after_1;
    // 0x1509F978: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_1:
    // 0x1509F97C: bne         $v0, $zero, L_1509F98C
    if (ctx->r2 != 0) {
        // 0x1509F980: lw          $a3, 0x48($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X48);
            goto L_1509F98C;
    }
    // 0x1509F980: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x1509F984: b           L_1509FDF8
    // 0x1509F988: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509F988: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509F98C:
    // 0x1509F98C: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x1509F990: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1509F994: ori         $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 | 0X8000;
    // 0x1509F998: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x1509F99C: lw          $t3, 0x2E48($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2E48);
    // 0x1509F9A0: bne         $a3, $t3, L_1509F9B8
    if (ctx->r7 != ctx->r11) {
        // 0x1509F9A4: nop
    
            goto L_1509F9B8;
    }
    // 0x1509F9A4: nop

    // 0x1509F9A8: jal         0x150AE280
    // 0x1509F9AC: nop

    func_150AE280(rdram, ctx);
        goto after_2;
    // 0x1509F9AC: nop

    after_2:
    // 0x1509F9B0: b           L_1509FDF8
    // 0x1509F9B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509F9B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509F9B8:
    // 0x1509F9B8: b           L_1509FDF8
    // 0x1509F9BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509FDF8;
    // 0x1509F9BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509F9C0:
    // 0x1509F9C0: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x1509F9C4: sra         $t4, $a0, 16
    ctx->r12 = S32(SIGNED(ctx->r4) >> 16);
    // 0x1509F9C8: jal         0x1509B704
    // 0x1509F9CC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_1509B704(rdram, ctx);
        goto after_3;
    // 0x1509F9CC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_3:
    // 0x1509F9D0: bne         $v0, $zero, L_1509F9E0
    if (ctx->r2 != 0) {
        // 0x1509F9D4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1509F9E0;
    }
    // 0x1509F9D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1509F9D8: b           L_1509FDF8
    // 0x1509F9DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509F9DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509F9E0:
    // 0x1509F9E0: lhu         $t1, 0xA($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0XA);
    // 0x1509F9E4: lhu         $a1, 0x6($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X6);
    // 0x1509F9E8: jal         0x100226F0
    // 0x1509F9EC: addu        $a0, $v1, $t1
    ctx->r4 = ADD32(ctx->r3, ctx->r9);
    bzero_recomp(rdram, ctx);
        goto after_4;
    // 0x1509F9EC: addu        $a0, $v1, $t1
    ctx->r4 = ADD32(ctx->r3, ctx->r9);
    after_4:
    // 0x1509F9F0: b           L_1509FDF8
    // 0x1509F9F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509F9F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509F9F8:
    // 0x1509F9F8: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x1509F9FC: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x1509FA00: jal         0x1509B704
    // 0x1509FA04: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_1509B704(rdram, ctx);
        goto after_5;
    // 0x1509FA04: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_5:
    // 0x1509FA08: beql        $v0, $zero, L_1509FDF8
    if (ctx->r2 == 0) {
        // 0x1509FA0C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509FDF8;
    }
    goto skip_0;
    // 0x1509FA0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x1509FA10: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x1509FA14: ori         $t6, $t5, 0x4000
    ctx->r14 = ctx->r13 | 0X4000;
    // 0x1509FA18: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x1509FA1C: b           L_1509FDF8
    // 0x1509FA20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509FDF8;
    // 0x1509FA20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509FA24:
    // 0x1509FA24: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1509FA28: jal         0x1509B5AC
    // 0x1509FA2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1509B5AC(rdram, ctx);
        goto after_6;
    // 0x1509FA2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x1509FA30: b           L_1509FDF8
    // 0x1509FA34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509FA34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509FA38:
    // 0x1509FA38: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1509FA3C: lw          $t7, 0x3840($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3840);
    // 0x1509FA40: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1509FA44: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1509FA48: bne         $t7, $at, L_1509FDF4
    if (ctx->r15 != ctx->r1) {
        // 0x1509FA4C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_1509FDF4;
    }
    // 0x1509FA4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1509FA50: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x1509FA54: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x1509FA58: jal         0x1501C730
    // 0x1509FA5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1501C730(rdram, ctx);
        goto after_7;
    // 0x1509FA5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x1509FA60: b           L_1509FDF8
    // 0x1509FA64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509FA64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509FA68:
    // 0x1509FA68: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1509FA6C: lw          $t8, 0x3840($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3840);
    // 0x1509FA70: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1509FA74: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1509FA78: bnel        $t8, $at, L_1509FDF8
    if (ctx->r24 != ctx->r1) {
        // 0x1509FA7C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509FDF8;
    }
    goto skip_1;
    // 0x1509FA7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x1509FA80: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x1509FA84: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x1509FA88: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x1509FA8C: andi        $t9, $a1, 0xFFF
    ctx->r25 = ctx->r5 & 0XFFF;
    // 0x1509FA90: andi        $t0, $a2, 0xFFF
    ctx->r8 = ctx->r6 & 0XFFF;
    // 0x1509FA94: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x1509FA98: jal         0x15172E7C
    // 0x1509FA9C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_15172E7C(rdram, ctx);
        goto after_8;
    // 0x1509FA9C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_8:
    // 0x1509FAA0: b           L_1509FDF8
    // 0x1509FAA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509FAA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509FAA8:
    // 0x1509FAA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1509FAAC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509FAB0: sb          $a2, 0x2E69($at)
    MEM_B(0X2E69, ctx->r1) = ctx->r6;
    // 0x1509FAB4: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x1509FAB8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1509FABC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1509FAC0: beq         $t3, $zero, L_1509FAF4
    if (ctx->r11 == 0) {
        // 0x1509FAC4: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_1509FAF4;
    }
    // 0x1509FAC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509FAC8: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x1509FACC: addiu       $t1, $t1, 0x2E60
    ctx->r9 = ADD32(ctx->r9, 0X2E60);
    // 0x1509FAD0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1509FAD4: sra         $t4, $v0, 3
    ctx->r12 = S32(SIGNED(ctx->r2) >> 3);
    // 0x1509FAD8: addu        $v1, $t4, $t1
    ctx->r3 = ADD32(ctx->r12, ctx->r9);
    // 0x1509FADC: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x1509FAE0: andi        $t5, $v0, 0x7
    ctx->r13 = ctx->r2 & 0X7;
    // 0x1509FAE4: sllv        $t7, $t6, $t5
    ctx->r15 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x1509FAE8: or          $t8, $t2, $t7
    ctx->r24 = ctx->r10 | ctx->r15;
    // 0x1509FAEC: b           L_1509FB20
    // 0x1509FAF0: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
        goto L_1509FB20;
    // 0x1509FAF0: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_1509FAF4:
    // 0x1509FAF4: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x1509FAF8: addiu       $t0, $t0, 0x2E60
    ctx->r8 = ADD32(ctx->r8, 0X2E60);
    // 0x1509FAFC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1509FB00: sra         $t9, $v0, 3
    ctx->r25 = S32(SIGNED(ctx->r2) >> 3);
    // 0x1509FB04: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x1509FB08: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x1509FB0C: andi        $t1, $v0, 0x7
    ctx->r9 = ctx->r2 & 0X7;
    // 0x1509FB10: sllv        $t5, $t6, $t1
    ctx->r13 = S32(ctx->r14 << (ctx->r9 & 31));
    // 0x1509FB14: andi        $t4, $t3, 0x7
    ctx->r12 = ctx->r11 & 0X7;
    // 0x1509FB18: and         $t2, $t4, $t5
    ctx->r10 = ctx->r12 & ctx->r13;
    // 0x1509FB1C: sb          $t2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r10;
L_1509FB20:
    // 0x1509FB20: b           L_1509FDF4
    // 0x1509FB24: sb          $a2, 0x2E43($at)
    MEM_B(0X2E43, ctx->r1) = ctx->r6;
        goto L_1509FDF4;
    // 0x1509FB24: sb          $a2, 0x2E43($at)
    MEM_B(0X2E43, ctx->r1) = ctx->r6;
L_1509FB28:
    // 0x1509FB28: jal         0x151E53E8
    // 0x1509FB2C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_151E53E8(rdram, ctx);
        goto after_9;
    // 0x1509FB2C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_9:
    // 0x1509FB30: b           L_1509FDF8
    // 0x1509FB34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509FB34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509FB38:
    // 0x1509FB38: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x1509FB3C: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x1509FB40: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x1509FB44: jal         0x1509B704
    // 0x1509FB48: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    func_1509B704(rdram, ctx);
        goto after_10;
    // 0x1509FB48: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_10:
    // 0x1509FB4C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x1509FB50: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1509FB54: lw          $t9, 0x2E4C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2E4C);
    // 0x1509FB58: sra         $t8, $a3, 3
    ctx->r24 = S32(SIGNED(ctx->r7) >> 3);
    // 0x1509FB5C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1509FB60: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x1509FB64: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x1509FB68: andi        $t3, $a3, 0x7
    ctx->r11 = ctx->r7 & 0X7;
    // 0x1509FB6C: sllv        $t1, $t6, $t3
    ctx->r9 = S32(ctx->r14 << (ctx->r11 & 31));
    // 0x1509FB70: or          $t4, $t0, $t1
    ctx->r12 = ctx->r8 | ctx->r9;
    // 0x1509FB74: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    // 0x1509FB78: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1509FB7C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509FB80: sw          $t5, 0x2F58($at)
    MEM_W(0X2F58, ctx->r1) = ctx->r13;
    // 0x1509FB84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1509FB88: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509FB8C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1509FB90: bne         $v0, $zero, L_1509FBA0
    if (ctx->r2 != 0) {
        // 0x1509FB94: sb          $a2, 0x2E43($at)
        MEM_B(0X2E43, ctx->r1) = ctx->r6;
            goto L_1509FBA0;
    }
    // 0x1509FB94: sb          $a2, 0x2E43($at)
    MEM_B(0X2E43, ctx->r1) = ctx->r6;
    // 0x1509FB98: b           L_1509FDF8
    // 0x1509FB9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509FB9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509FBA0:
    // 0x1509FBA0: lhu         $t2, 0x0($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X0);
    // 0x1509FBA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1509FBA8: ori         $t7, $t2, 0x8000
    ctx->r15 = ctx->r10 | 0X8000;
    // 0x1509FBAC: jal         0x151E53E8
    // 0x1509FBB0: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    func_151E53E8(rdram, ctx);
        goto after_11;
    // 0x1509FBB0: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    after_11:
    // 0x1509FBB4: jal         0x150AE280
    // 0x1509FBB8: nop

    func_150AE280(rdram, ctx);
        goto after_12;
    // 0x1509FBB8: nop

    after_12:
    // 0x1509FBBC: b           L_1509FDF8
    // 0x1509FBC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509FBC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509FBC4:
    // 0x1509FBC4: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x1509FBC8: bgez        $t8, L_1509FBEC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1509FBCC: nop
    
            goto L_1509FBEC;
    }
    // 0x1509FBCC: nop

    // 0x1509FBD0: jal         0x10024770
    // 0x1509FBD4: nop

    osGetCount_recomp(rdram, ctx);
        goto after_13;
    // 0x1509FBD4: nop

    after_13:
    // 0x1509FBD8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509FBDC: sw          $v0, 0x3000($at)
    MEM_W(0X3000, ctx->r1) = ctx->r2;
    // 0x1509FBE0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509FBE4: b           L_1509FDF4
    // 0x1509FBE8: sw          $v0, 0x3004($at)
    MEM_W(0X3004, ctx->r1) = ctx->r2;
        goto L_1509FDF4;
    // 0x1509FBE8: sw          $v0, 0x3004($at)
    MEM_W(0X3004, ctx->r1) = ctx->r2;
L_1509FBEC:
    // 0x1509FBEC: jal         0x10024770
    // 0x1509FBF0: nop

    osGetCount_recomp(rdram, ctx);
        goto after_14;
    // 0x1509FBF0: nop

    after_14:
    // 0x1509FBF4: jal         0x10024770
    // 0x1509FBF8: nop

    osGetCount_recomp(rdram, ctx);
        goto after_15;
    // 0x1509FBF8: nop

    after_15:
    // 0x1509FBFC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509FC00: sw          $v0, 0x3000($at)
    MEM_W(0X3000, ctx->r1) = ctx->r2;
    // 0x1509FC04: b           L_1509FDF8
    // 0x1509FC08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509FC08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509FC0C:
    // 0x1509FC0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1509FC10: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1509FC14: b           L_1509FDF4
    // 0x1509FC18: sb          $a2, -0x21C8($at)
    MEM_B(-0X21C8, ctx->r1) = ctx->r6;
        goto L_1509FDF4;
    // 0x1509FC18: sb          $a2, -0x21C8($at)
    MEM_B(-0X21C8, ctx->r1) = ctx->r6;
L_1509FC1C:
    // 0x1509FC1C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x1509FC20: addiu       $v0, $v0, -0x6300
    ctx->r2 = ADD32(ctx->r2, -0X6300);
    // 0x1509FC24: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1509FC28: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x1509FC2C: or          $t3, $t9, $t6
    ctx->r11 = ctx->r25 | ctx->r14;
    // 0x1509FC30: b           L_1509FDF4
    // 0x1509FC34: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
        goto L_1509FDF4;
    // 0x1509FC34: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_1509FC38:
    // 0x1509FC38: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x1509FC3C: bnel        $t0, $zero, L_1509FC70
    if (ctx->r8 != 0) {
        // 0x1509FC40: lw          $t6, 0x8($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X8);
            goto L_1509FC70;
    }
    goto skip_2;
    // 0x1509FC40: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    skip_2:
    // 0x1509FC44: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x1509FC48: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1509FC4C: addiu       $v0, $v0, 0x2120
    ctx->r2 = ADD32(ctx->r2, 0X2120);
    // 0x1509FC50: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x1509FC54: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1509FC58: sllv        $t2, $t5, $t4
    ctx->r10 = S32(ctx->r13 << (ctx->r12 & 31));
    // 0x1509FC5C: nor         $t7, $t2, $zero
    ctx->r15 = ~(ctx->r10 | 0);
    // 0x1509FC60: and         $t8, $t1, $t7
    ctx->r24 = ctx->r9 & ctx->r15;
    // 0x1509FC64: b           L_1509FDF4
    // 0x1509FC68: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_1509FDF4;
    // 0x1509FC68: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1509FC6C: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
L_1509FC70:
    // 0x1509FC70: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1509FC74: addiu       $v0, $v0, 0x2124
    ctx->r2 = ADD32(ctx->r2, 0X2124);
    // 0x1509FC78: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1509FC7C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1509FC80: sllv        $t0, $t3, $t6
    ctx->r8 = S32(ctx->r11 << (ctx->r14 & 31));
    // 0x1509FC84: nor         $t5, $t0, $zero
    ctx->r13 = ~(ctx->r8 | 0);
    // 0x1509FC88: and         $t4, $t9, $t5
    ctx->r12 = ctx->r25 & ctx->r13;
    // 0x1509FC8C: b           L_1509FDF4
    // 0x1509FC90: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
        goto L_1509FDF4;
    // 0x1509FC90: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
L_1509FC94:
    // 0x1509FC94: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x1509FC98: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1509FC9C: addiu       $v0, $v0, 0x2120
    ctx->r2 = ADD32(ctx->r2, 0X2120);
    // 0x1509FCA0: bne         $t2, $zero, L_1509FCC4
    if (ctx->r10 != 0) {
        // 0x1509FCA4: nop
    
            goto L_1509FCC4;
    }
    // 0x1509FCA4: nop

    // 0x1509FCA8: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x1509FCAC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x1509FCB0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1509FCB4: sllv        $t3, $t8, $t7
    ctx->r11 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x1509FCB8: or          $t6, $t1, $t3
    ctx->r14 = ctx->r9 | ctx->r11;
    // 0x1509FCBC: b           L_1509FDF4
    // 0x1509FCC0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_1509FDF4;
    // 0x1509FCC0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_1509FCC4:
    // 0x1509FCC4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1509FCC8: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x1509FCCC: addiu       $v0, $v0, 0x2124
    ctx->r2 = ADD32(ctx->r2, 0X2124);
    // 0x1509FCD0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x1509FCD4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1509FCD8: sllv        $t4, $t5, $t9
    ctx->r12 = S32(ctx->r13 << (ctx->r25 & 31));
    // 0x1509FCDC: or          $t2, $t0, $t4
    ctx->r10 = ctx->r8 | ctx->r12;
    // 0x1509FCE0: b           L_1509FDF4
    // 0x1509FCE4: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
        goto L_1509FDF4;
    // 0x1509FCE4: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
L_1509FCE8:
    // 0x1509FCE8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1509FCEC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1509FCF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1509FCF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1509FCF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1509FCFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1509FD00: jal         0x1517EE40
    // 0x1509FD04: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1517EE40(rdram, ctx);
        goto after_16;
    // 0x1509FD04: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_16:
    // 0x1509FD08: b           L_1509FDF8
    // 0x1509FD0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509FD0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509FD10:
    // 0x1509FD10: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1509FD14: lw          $t7, 0x2FA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2FA0);
    // 0x1509FD18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1509FD1C: bltzl       $t7, L_1509FDF8
    if (SIGNED(ctx->r15) < 0) {
        // 0x1509FD20: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509FDF8;
    }
    goto skip_3;
    // 0x1509FD20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x1509FD24: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
L_1509FD28:
    // 0x1509FD28: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x1509FD2C: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x1509FD30: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x1509FD34: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x1509FD38: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x1509FD3C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x1509FD40: jal         0x1517EE40
    // 0x1509FD44: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_1517EE40(rdram, ctx);
        goto after_17;
    // 0x1509FD44: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_17:
    // 0x1509FD48: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x1509FD4C: lui         $t3, 0x8008
    ctx->r11 = S32(0X8008 << 16);
    // 0x1509FD50: lw          $t3, 0x2FA0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2FA0);
    // 0x1509FD54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1509FD58: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1509FD5C: beql        $at, $zero, L_1509FD28
    if (ctx->r1 == 0) {
        // 0x1509FD60: lw          $t1, 0x18($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X18);
            goto L_1509FD28;
    }
    goto skip_4;
    // 0x1509FD60: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
    skip_4:
    // 0x1509FD64: b           L_1509FDF8
    // 0x1509FD68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509FD68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509FD6C:
    // 0x1509FD6C: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x1509FD70: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1509FD74: addiu       $v0, $v0, -0x1C21
    ctx->r2 = ADD32(ctx->r2, -0X1C21);
    // 0x1509FD78: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x1509FD7C: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x1509FD80: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1509FD84: sb          $t9, -0x1C20($at)
    MEM_B(-0X1C20, ctx->r1) = ctx->r25;
    // 0x1509FD88: lb          $t0, 0x0($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X0);
    // 0x1509FD8C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1509FD90: b           L_1509FDF4
    // 0x1509FD94: sw          $t0, -0x160C($at)
    MEM_W(-0X160C, ctx->r1) = ctx->r8;
        goto L_1509FDF4;
    // 0x1509FD94: sw          $t0, -0x160C($at)
    MEM_W(-0X160C, ctx->r1) = ctx->r8;
L_1509FD98:
    // 0x1509FD98: jal         0x151E8214
    // 0x1509FD9C: nop

    func_151E8214(rdram, ctx);
        goto after_18;
    // 0x1509FD9C: nop

    after_18:
    // 0x1509FDA0: b           L_1509FDF8
    // 0x1509FDA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509FDA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509FDA8:
    // 0x1509FDA8: jal         0x151E4DC4
    // 0x1509FDAC: nop

    func_151E4DC4(rdram, ctx);
        goto after_19;
    // 0x1509FDAC: nop

    after_19:
    // 0x1509FDB0: b           L_1509FDF8
    // 0x1509FDB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509FDB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509FDB8:
    // 0x1509FDB8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x1509FDBC: addiu       $a0, $a0, -0xB60
    ctx->r4 = ADD32(ctx->r4, -0XB60);
    // 0x1509FDC0: jal         0x15042E3C
    // 0x1509FDC4: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    func_15042E3C(rdram, ctx);
        goto after_20;
    // 0x1509FDC4: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    after_20:
    // 0x1509FDC8: b           L_1509FDF8
    // 0x1509FDCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509FDF8;
    // 0x1509FDCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509FDD0:
    // 0x1509FDD0: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x1509FDD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1509FDD8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509FDDC: beq         $t4, $zero, L_1509FDF0
    if (ctx->r12 == 0) {
        // 0x1509FDE0: nop
    
            goto L_1509FDF0;
    }
    // 0x1509FDE0: nop

    // 0x1509FDE4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509FDE8: b           L_1509FDF4
    // 0x1509FDEC: sb          $a2, 0x2E44($at)
    MEM_B(0X2E44, ctx->r1) = ctx->r6;
        goto L_1509FDF4;
    // 0x1509FDEC: sb          $a2, 0x2E44($at)
    MEM_B(0X2E44, ctx->r1) = ctx->r6;
L_1509FDF0:
    // 0x1509FDF0: sb          $zero, 0x2E44($at)
    MEM_B(0X2E44, ctx->r1) = 0;
L_1509FDF4:
    // 0x1509FDF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509FDF8:
    // 0x1509FDF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1509FDFC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1509FE00: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1509FE04: jr          $ra
    // 0x1509FE08: nop

    return;
    return;
    // 0x1509FE08: nop

;}
RECOMP_FUNC void func_1513ABB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513ABB8: addiu       $sp, $sp, -0x1D0
    ctx->r29 = ADD32(ctx->r29, -0X1D0);
    // 0x1513ABBC: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x1513ABC0: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x1513ABC4: andi        $s4, $a2, 0xFF
    ctx->r20 = ctx->r6 & 0XFF;
    // 0x1513ABC8: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x1513ABCC: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x1513ABD0: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x1513ABD4: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x1513ABD8: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x1513ABDC: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x1513ABE0: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x1513ABE4: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x1513ABE8: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x1513ABEC: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x1513ABF0: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x1513ABF4: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x1513ABF8: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x1513ABFC: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x1513AC00: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x1513AC04: sw          $a1, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->r5;
    // 0x1513AC08: sw          $a2, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r6;
    // 0x1513AC0C: sw          $a3, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r7;
    // 0x1513AC10: jal         0x150ADA20
    // 0x1513AC14: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1513AC14: nop

    after_0:
    // 0x1513AC18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1513AC1C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1513AC20: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1513AC24: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1513AC28: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1513AC2C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1513AC30: mfhi        $a0
    ctx->r4 = hi;
    // 0x1513AC34: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1513AC38: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x1513AC3C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1513AC40: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x1513AC44: sb          $t7, 0x140($sp)
    MEM_B(0X140, ctx->r29) = ctx->r15;
    // 0x1513AC48: swc1        $f22, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f22.u32l;
    // 0x1513AC4C: swc1        $f22, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f22.u32l;
    // 0x1513AC50: lwc1        $f6, 0x150($s6)
    ctx->f6.u32l = MEM_W(ctx->r22, 0X150);
    // 0x1513AC54: lwc1        $f4, 0x14C($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X14C);
    // 0x1513AC58: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x1513AC5C: ori         $t8, $t8, 0x1900
    ctx->r24 = ctx->r24 | 0X1900;
    // 0x1513AC60: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1513AC64: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x1513AC68: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x1513AC6C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1513AC70: mul.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x1513AC74: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x1513AC78: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1513AC7C: swc1        $f20, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f20.u32l;
    // 0x1513AC80: swc1        $f20, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f20.u32l;
    // 0x1513AC84: swc1        $f20, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f20.u32l;
    // 0x1513AC88: swc1        $f22, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f22.u32l;
    // 0x1513AC8C: swc1        $f10, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
    // 0x1513AC90: swc1        $f10, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f10.u32l;
    // 0x1513AC94: swc1        $f22, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f22.u32l;
    // 0x1513AC98: swc1        $f22, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f22.u32l;
    // 0x1513AC9C: swc1        $f20, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f20.u32l;
    // 0x1513ACA0: swc1        $f20, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f20.u32l;
    // 0x1513ACA4: swc1        $f20, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f20.u32l;
    // 0x1513ACA8: swc1        $f20, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f20.u32l;
    // 0x1513ACAC: swc1        $f20, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f20.u32l;
    // 0x1513ACB0: swc1        $f20, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f20.u32l;
    // 0x1513ACB4: swc1        $f20, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f20.u32l;
    // 0x1513ACB8: swc1        $f20, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f20.u32l;
    // 0x1513ACBC: swc1        $f20, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f20.u32l;
    // 0x1513ACC0: swc1        $f20, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f20.u32l;
    // 0x1513ACC4: sw          $t8, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r24;
    // 0x1513ACC8: sh          $t9, 0x198($sp)
    MEM_H(0X198, ctx->r29) = ctx->r25;
    // 0x1513ACCC: sb          $t0, 0x19C($sp)
    MEM_B(0X19C, ctx->r29) = ctx->r8;
    // 0x1513ACD0: sw          $zero, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = 0;
    // 0x1513ACD4: sb          $t1, 0x1A4($sp)
    MEM_B(0X1A4, ctx->r29) = ctx->r9;
    // 0x1513ACD8: sb          $zero, 0x1A5($sp)
    MEM_B(0X1A5, ctx->r29) = 0;
    // 0x1513ACDC: sb          $zero, 0x1A6($sp)
    MEM_B(0X1A6, ctx->r29) = 0;
    // 0x1513ACE0: sb          $zero, 0x1A7($sp)
    MEM_B(0X1A7, ctx->r29) = 0;
    // 0x1513ACE4: sb          $zero, 0x1A8($sp)
    MEM_B(0X1A8, ctx->r29) = 0;
    // 0x1513ACE8: sb          $zero, 0x1A9($sp)
    MEM_B(0X1A9, ctx->r29) = 0;
    // 0x1513ACEC: sb          $zero, 0x1AA($sp)
    MEM_B(0X1AA, ctx->r29) = 0;
    // 0x1513ACF0: sb          $zero, 0x1AB($sp)
    MEM_B(0X1AB, ctx->r29) = 0;
    // 0x1513ACF4: sb          $t2, 0x1AC($sp)
    MEM_B(0X1AC, ctx->r29) = ctx->r10;
    // 0x1513ACF8: sb          $t3, 0x1AE($sp)
    MEM_B(0X1AE, ctx->r29) = ctx->r11;
    // 0x1513ACFC: sw          $s6, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r22;
    // 0x1513AD00: lbu         $t4, 0x3B($s6)
    ctx->r12 = MEM_BU(ctx->r22, 0X3B);
    // 0x1513AD04: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x1513AD08: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x1513AD0C: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x1513AD10: addiu       $t7, $t7, 0x42D0
    ctx->r15 = ADD32(ctx->r15, 0X42D0);
    // 0x1513AD14: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x1513AD18: sh          $t5, 0x1B6($sp)
    MEM_H(0X1B6, ctx->r29) = ctx->r13;
    // 0x1513AD1C: sh          $t6, 0x1B8($sp)
    MEM_H(0X1B8, ctx->r29) = ctx->r14;
    // 0x1513AD20: addiu       $s2, $s2, 0x42D4
    ctx->r18 = ADD32(ctx->r18, 0X42D4);
    // 0x1513AD24: addu        $s7, $a0, $t7
    ctx->r23 = ADD32(ctx->r4, ctx->r15);
    // 0x1513AD28: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1513AD2C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1513AD30: lbu         $fp, 0x1E3($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0X1E3);
    // 0x1513AD34: addiu       $s5, $sp, 0x140
    ctx->r21 = ADD32(ctx->r29, 0X140);
    // 0x1513AD38: addiu       $s3, $sp, 0x144
    ctx->r19 = ADD32(ctx->r29, 0X144);
    // 0x1513AD3C: sb          $t4, 0x1B4($sp)
    MEM_B(0X1B4, ctx->r29) = ctx->r12;
L_1513AD40:
    // 0x1513AD40: lbu         $t8, 0x0($s7)
    ctx->r24 = MEM_BU(ctx->r23, 0X0);
    // 0x1513AD44: sll         $t0, $s4, 3
    ctx->r8 = S32(ctx->r20 << 3);
    // 0x1513AD48: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x1513AD4C: and         $t9, $t8, $v1
    ctx->r25 = ctx->r24 & ctx->r3;
    // 0x1513AD50: beq         $t9, $zero, L_1513AD9C
    if (ctx->r25 == 0) {
        // 0x1513AD54: addu        $t1, $s2, $t0
        ctx->r9 = ADD32(ctx->r18, ctx->r8);
            goto L_1513AD9C;
    }
    // 0x1513AD54: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x1513AD58: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x1513AD5C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x1513AD60: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1513AD64: lw          $t5, 0x1E4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1E4);
    // 0x1513AD68: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x1513AD6C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1513AD70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1513AD74: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1513AD78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1513AD7C: sh          $t4, 0x19A($sp)
    MEM_H(0X19A, ctx->r29) = ctx->r12;
    // 0x1513AD80: jal         0x15132A4C
    // 0x1513AD84: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_15132A4C(rdram, ctx);
        goto after_1;
    // 0x1513AD84: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_1:
    // 0x1513AD88: beq         $v0, $zero, L_1513AD9C
    if (ctx->r2 == 0) {
        // 0x1513AD8C: addiu       $a0, $v0, 0x170
        ctx->r4 = ADD32(ctx->r2, 0X170);
            goto L_1513AD9C;
    }
    // 0x1513AD8C: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x1513AD90: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x1513AD94: jal         0x10022EC0
    // 0x1513AD98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1513AD98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_1513AD9C:
    // 0x1513AD9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1513ADA0: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x1513ADA4: sll         $v1, $s1, 1
    ctx->r3 = S32(ctx->r17 << 1);
    // 0x1513ADA8: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x1513ADAC: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x1513ADB0: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x1513ADB4: bne         $at, $zero, L_1513AD40
    if (ctx->r1 != 0) {
        // 0x1513ADB8: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_1513AD40;
    }
    // 0x1513ADB8: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x1513ADBC: lw          $t8, 0x1D4($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X1D4);
    // 0x1513ADC0: beql        $t8, $zero, L_1513B074
    if (ctx->r24 == 0) {
        // 0x1513ADC4: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_1513B074;
    }
    goto skip_0;
    // 0x1513ADC4: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_0:
    // 0x1513ADC8: lbu         $t9, 0x74($s6)
    ctx->r25 = MEM_BU(ctx->r22, 0X74);
    // 0x1513ADCC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1513ADD0: lw          $a0, 0x1D4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1D4);
    // 0x1513ADD4: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x1513ADD8: beq         $t0, $at, L_1513B070
    if (ctx->r8 == ctx->r1) {
        // 0x1513ADDC: andi        $a1, $fp, 0xFF
        ctx->r5 = ctx->r30 & 0XFF;
            goto L_1513B070;
    }
    // 0x1513ADDC: andi        $a1, $fp, 0xFF
    ctx->r5 = ctx->r30 & 0XFF;
    // 0x1513ADE0: jal         0x1513A5E0
    // 0x1513ADE4: lw          $a2, 0x1E4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1E4);
    func_1513A5E0(rdram, ctx);
        goto after_3;
    // 0x1513ADE4: lw          $a2, 0x1E4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1E4);
    after_3:
    // 0x1513ADE8: addiu       $s1, $sp, 0x1C0
    ctx->r17 = ADD32(ctx->r29, 0X1C0);
    // 0x1513ADEC: lw          $a0, 0x1D4($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X1D4);
    // 0x1513ADF0: addiu       $t1, $sp, 0x1C4
    ctx->r9 = ADD32(ctx->r29, 0X1C4);
    // 0x1513ADF4: addiu       $t2, $sp, 0x1C8
    ctx->r10 = ADD32(ctx->r29, 0X1C8);
    // 0x1513ADF8: addiu       $t3, $sp, 0x120
    ctx->r11 = ADD32(ctx->r29, 0X120);
    // 0x1513ADFC: addiu       $t4, $sp, 0x124
    ctx->r12 = ADD32(ctx->r29, 0X124);
    // 0x1513AE00: addiu       $t5, $sp, 0x128
    ctx->r13 = ADD32(ctx->r29, 0X128);
    // 0x1513AE04: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x1513AE08: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x1513AE0C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x1513AE10: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x1513AE14: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x1513AE18: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x1513AE1C: addiu       $a1, $sp, 0x12C
    ctx->r5 = ADD32(ctx->r29, 0X12C);
    // 0x1513AE20: addiu       $a2, $sp, 0x130
    ctx->r6 = ADD32(ctx->r29, 0X130);
    // 0x1513AE24: addiu       $a3, $sp, 0x134
    ctx->r7 = ADD32(ctx->r29, 0X134);
    // 0x1513AE28: jal         0x1503F404
    // 0x1513AE2C: addiu       $a0, $a0, 0x300
    ctx->r4 = ADD32(ctx->r4, 0X300);
    func_1503F404(rdram, ctx);
        goto after_4;
    // 0x1513AE2C: addiu       $a0, $a0, 0x300
    ctx->r4 = ADD32(ctx->r4, 0X300);
    after_4:
    // 0x1513AE30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513AE34: lwc1        $f16, 0x4988($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4988);
    // 0x1513AE38: swc1        $f22, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f22.u32l;
    // 0x1513AE3C: addiu       $t6, $sp, 0xB4
    ctx->r14 = ADD32(ctx->r29, 0XB4);
    // 0x1513AE40: swc1        $f16, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f16.u32l;
    // 0x1513AE44: lwc1        $f4, 0x150($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X150);
    // 0x1513AE48: lwc1        $f18, 0x14C($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X14C);
    // 0x1513AE4C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1513AE50: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1513AE54: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1513AE58: lui         $t5, 0x10
    ctx->r13 = S32(0X10 << 16);
    // 0x1513AE5C: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x1513AE60: addiu       $t4, $zero, 0x15
    ctx->r12 = ADD32(0, 0X15);
    // 0x1513AE64: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x1513AE68: ori         $t5, $t5, 0x39E9
    ctx->r13 = ctx->r13 | 0X39E9;
    // 0x1513AE6C: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x1513AE70: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1513AE74: lui         $s5, 0x800A
    ctx->r21 = S32(0X800A << 16);
    // 0x1513AE78: addiu       $s5, $s5, 0x42E4
    ctx->r21 = ADD32(ctx->r21, 0X42E4);
    // 0x1513AE7C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1513AE80: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x1513AE84: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x1513AE88: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x1513AE8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1513AE90: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1513AE94: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x1513AE98: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x1513AE9C: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x1513AEA0: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1513AEA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513AEA8: lwc1        $f30, 0x498C($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X498C);
    // 0x1513AEAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513AEB0: swc1        $f22, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f22.u32l;
    // 0x1513AEB4: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x1513AEB8: swc1        $f22, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f22.u32l;
    // 0x1513AEBC: swc1        $f20, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f20.u32l;
    // 0x1513AEC0: sb          $zero, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = 0;
    // 0x1513AEC4: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x1513AEC8: sb          $t0, 0x104($sp)
    MEM_B(0X104, ctx->r29) = ctx->r8;
    // 0x1513AECC: sb          $zero, 0x106($sp)
    MEM_B(0X106, ctx->r29) = 0;
    // 0x1513AED0: sb          $zero, 0x108($sp)
    MEM_B(0X108, ctx->r29) = 0;
    // 0x1513AED4: sb          $zero, 0x109($sp)
    MEM_B(0X109, ctx->r29) = 0;
    // 0x1513AED8: sb          $zero, 0x10A($sp)
    MEM_B(0X10A, ctx->r29) = 0;
    // 0x1513AEDC: sb          $zero, 0x10B($sp)
    MEM_B(0X10B, ctx->r29) = 0;
    // 0x1513AEE0: sb          $t1, 0x10E($sp)
    MEM_B(0X10E, ctx->r29) = ctx->r9;
    // 0x1513AEE4: sw          $s6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r22;
    // 0x1513AEE8: lwc1        $f28, 0x4990($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X4990);
    // 0x1513AEEC: lbu         $t2, 0x3B($s6)
    ctx->r10 = MEM_BU(ctx->r22, 0X3B);
    // 0x1513AEF0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1513AEF4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1513AEF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513AEFC: lwc1        $f24, 0x4994($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X4994);
    // 0x1513AF00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513AF04: lwc1        $f22, 0x4998($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X4998);
    // 0x1513AF08: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x1513AF0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513AF10: sh          $t3, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r11;
    // 0x1513AF14: sh          $t4, 0x118($sp)
    MEM_H(0X118, ctx->r29) = ctx->r12;
    // 0x1513AF18: sw          $t5, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r13;
    // 0x1513AF1C: sb          $t8, 0x105($sp)
    MEM_B(0X105, ctx->r29) = ctx->r24;
    // 0x1513AF20: sb          $t7, 0x10C($sp)
    MEM_B(0X10C, ctx->r29) = ctx->r15;
    // 0x1513AF24: sb          $t6, 0x107($sp)
    MEM_B(0X107, ctx->r29) = ctx->r14;
    // 0x1513AF28: lwc1        $f20, 0x499C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X499C);
    // 0x1513AF2C: sb          $t2, 0x114($sp)
    MEM_B(0X114, ctx->r29) = ctx->r10;
L_1513AF30:
    // 0x1513AF30: lbu         $t9, 0x0($s7)
    ctx->r25 = MEM_BU(ctx->r23, 0X0);
    // 0x1513AF34: sll         $t1, $s4, 3
    ctx->r9 = S32(ctx->r20 << 3);
    // 0x1513AF38: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1513AF3C: and         $t0, $t9, $v0
    ctx->r8 = ctx->r25 & ctx->r2;
    // 0x1513AF40: bne         $t0, $zero, L_1513B050
    if (ctx->r8 != 0) {
        // 0x1513AF44: addu        $t2, $s5, $t1
        ctx->r10 = ADD32(ctx->r21, ctx->r9);
            goto L_1513B050;
    }
    // 0x1513AF44: addu        $t2, $s5, $t1
    ctx->r10 = ADD32(ctx->r21, ctx->r9);
    // 0x1513AF48: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x1513AF4C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x1513AF50: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1513AF54: sll         $t8, $s4, 2
    ctx->r24 = S32(ctx->r20 << 2);
    // 0x1513AF58: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x1513AF5C: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x1513AF60: subu        $t8, $t8, $s4
    ctx->r24 = SUB32(ctx->r24, ctx->r20);
    // 0x1513AF64: sh          $t5, 0xFA($sp)
    MEM_H(0XFA, ctx->r29) = ctx->r13;
    // 0x1513AF68: lw          $a2, 0x1D4($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1D4);
    // 0x1513AF6C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x1513AF70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1513AF74: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x1513AF78: addiu       $t9, $t9, 0x42F4
    ctx->r25 = ADD32(ctx->r25, 0X42F4);
    // 0x1513AF7C: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x1513AF80: addu        $a0, $t6, $t9
    ctx->r4 = ADD32(ctx->r14, ctx->r25);
    // 0x1513AF84: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x1513AF88: jal         0x15143134
    // 0x1513AF8C: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    func_15143134(rdram, ctx);
        goto after_5;
    // 0x1513AF8C: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    after_5:
    // 0x1513AF90: jal         0x150ADA20
    // 0x1513AF94: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1513AF94: nop

    after_6:
    // 0x1513AF98: jal         0x150ADA20
    // 0x1513AF9C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1513AF9C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_7:
    // 0x1513AFA0: jal         0x150ADA68
    // 0x1513AFA4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x1513AFA4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_8:
    // 0x1513AFA8: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x1513AFAC: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x1513AFB0: divu        $zero, $s2, $at
    lo = S32(U32(ctx->r18) / U32(ctx->r1)); hi = S32(U32(ctx->r18) % U32(ctx->r1));
    // 0x1513AFB4: add.s       $f18, $f18, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x1513AFB8: mfhi        $a1
    ctx->r5 = hi;
    // 0x1513AFBC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x1513AFC0: addiu       $a1, $a1, -0x54
    ctx->r5 = ADD32(ctx->r5, -0X54);
    // 0x1513AFC4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x1513AFC8: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x1513AFCC: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x1513AFD0: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    // 0x1513AFD4: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x1513AFD8: jal         0x15143794
    // 0x1513AFDC: addiu       $a3, $sp, 0xD8
    ctx->r7 = ADD32(ctx->r29, 0XD8);
    func_15143794(rdram, ctx);
        goto after_9;
    // 0x1513AFDC: addiu       $a3, $sp, 0xD8
    ctx->r7 = ADD32(ctx->r29, 0XD8);
    after_9:
    // 0x1513AFE0: jal         0x150ADA68
    // 0x1513AFE4: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x1513AFE4: nop

    after_10:
    // 0x1513AFE8: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1513AFEC: add.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x1513AFF0: jal         0x150ADA68
    // 0x1513AFF4: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x1513AFF4: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x1513AFF8: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1513AFFC: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x1513B000: jal         0x150ADA68
    // 0x1513B004: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x1513B004: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x1513B008: mul.s       $f10, $f0, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x1513B00C: add.s       $f16, $f10, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x1513B010: jal         0x150ADA20
    // 0x1513B014: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x1513B014: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x1513B018: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x1513B01C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1513B020: lw          $t8, 0x1E4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1E4);
    // 0x1513B024: mfhi        $t4
    ctx->r12 = hi;
    // 0x1513B028: addiu       $t5, $t4, 0x3C
    ctx->r13 = ADD32(ctx->r12, 0X3C);
    // 0x1513B02C: sh          $t5, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r13;
    // 0x1513B030: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x1513B034: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1513B038: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1513B03C: lw          $a3, 0x1DC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1DC);
    // 0x1513B040: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1513B044: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x1513B048: jal         0x1513264C
    // 0x1513B04C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_1513264C(rdram, ctx);
        goto after_14;
    // 0x1513B04C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_14:
L_1513B050:
    // 0x1513B050: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1513B054: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x1513B058: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x1513B05C: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x1513B060: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x1513B064: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x1513B068: bne         $at, $zero, L_1513AF30
    if (ctx->r1 != 0) {
        // 0x1513B06C: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_1513AF30;
    }
    // 0x1513B06C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
L_1513B070:
    // 0x1513B070: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_1513B074:
    // 0x1513B074: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x1513B078: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x1513B07C: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x1513B080: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x1513B084: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x1513B088: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x1513B08C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x1513B090: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x1513B094: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x1513B098: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x1513B09C: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x1513B0A0: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x1513B0A4: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x1513B0A8: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x1513B0AC: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x1513B0B0: jr          $ra
    // 0x1513B0B4: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
    return;
    return;
    // 0x1513B0B4: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
;}
RECOMP_FUNC void func_1500390C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500390C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x15003910: lw          $t6, 0xE58($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XE58);
    // 0x15003914: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x15003918: bne         $a0, $t6, L_15003928
    if (ctx->r4 != ctx->r14) {
        // 0x1500391C: nop
    
            goto L_15003928;
    }
    // 0x1500391C: nop

    // 0x15003920: jr          $ra
    // 0x15003924: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15003924: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15003928:
    // 0x15003928: lw          $t7, 0xE5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XE5C);
    // 0x1500392C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x15003930: addiu       $v0, $v0, 0xE60
    ctx->r2 = ADD32(ctx->r2, 0XE60);
    // 0x15003934: bne         $a0, $t7, L_15003944
    if (ctx->r4 != ctx->r15) {
        // 0x15003938: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_15003944;
    }
    // 0x15003938: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x1500393C: jr          $ra
    // 0x15003940: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15003940: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15003944:
    // 0x15003944: addiu       $a1, $zero, 0x1E52
    ctx->r5 = ADD32(0, 0X1E52);
L_15003948:
    // 0x15003948: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x1500394C: bnel        $a0, $t8, L_15003960
    if (ctx->r4 != ctx->r24) {
        // 0x15003950: lw          $t9, 0x4($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X4);
            goto L_15003960;
    }
    goto skip_0;
    // 0x15003950: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    skip_0:
    // 0x15003954: jr          $ra
    // 0x15003958: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x15003958: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1500395C: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
L_15003960:
    // 0x15003960: bnel        $a0, $t9, L_15003974
    if (ctx->r4 != ctx->r25) {
        // 0x15003964: lw          $t0, 0x8($v0)
        ctx->r8 = MEM_W(ctx->r2, 0X8);
            goto L_15003974;
    }
    goto skip_1;
    // 0x15003964: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    skip_1:
    // 0x15003968: jr          $ra
    // 0x1500396C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    return;
    // 0x1500396C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x15003970: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
L_15003974:
    // 0x15003974: bnel        $a0, $t0, L_15003988
    if (ctx->r4 != ctx->r8) {
        // 0x15003978: lw          $t1, 0xC($v0)
        ctx->r9 = MEM_W(ctx->r2, 0XC);
            goto L_15003988;
    }
    goto skip_2;
    // 0x15003978: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    skip_2:
    // 0x1500397C: jr          $ra
    // 0x15003980: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    return;
    // 0x15003980: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x15003984: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
L_15003988:
    // 0x15003988: bnel        $a0, $t1, L_1500399C
    if (ctx->r4 != ctx->r9) {
        // 0x1500398C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_1500399C;
    }
    goto skip_3;
    // 0x1500398C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_3:
    // 0x15003990: jr          $ra
    // 0x15003994: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    return;
    // 0x15003994: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    // 0x15003998: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_1500399C:
    // 0x1500399C: bne         $v1, $a1, L_15003948
    if (ctx->r3 != ctx->r5) {
        // 0x150039A0: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_15003948;
    }
    // 0x150039A0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x150039A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x150039A8: jr          $ra
    // 0x150039AC: nop

    return;
    return;
    // 0x150039AC: nop

;}
RECOMP_FUNC void func_15007B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15007B3C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15007B40: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15007B44: addiu       $v0, $v0, -0x164C
    ctx->r2 = ADD32(ctx->r2, -0X164C);
    // 0x15007B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15007B4C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x15007B50: bne         $t6, $zero, L_15007B5C
    if (ctx->r14 != 0) {
        // 0x15007B54: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_15007B5C;
    }
    // 0x15007B54: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15007B58: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
L_15007B5C:
    // 0x15007B5C: jal         0x10004308
    // 0x15007B60: nop

    func_10004308(rdram, ctx);
        goto after_0;
    // 0x15007B60: nop

    after_0:
    // 0x15007B64: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007B68: jal         0x15002FB4
    // 0x15007B6C: lw          $a0, -0x160C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X160C);
    func_15002FB4(rdram, ctx);
        goto after_1;
    // 0x15007B6C: lw          $a0, -0x160C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X160C);
    after_1:
    // 0x15007B70: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15007B74: lw          $v0, -0x160C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X160C);
    // 0x15007B78: addiu       $t8, $v0, -0x13
    ctx->r24 = ADD32(ctx->r2, -0X13);
    // 0x15007B7C: sltiu       $at, $t8, 0x2D
    ctx->r1 = ctx->r24 < 0X2D ? 1 : 0;
    // 0x15007B80: beq         $at, $zero, L_15007C10
    if (ctx->r1 == 0) {
        // 0x15007B84: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_15007C10;
    }
    // 0x15007B84: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15007B88: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15007B8C: addu        $at, $at, $t8
    gpr jr_addend_15007B94 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15007B90: lw          $t8, 0x5A50($at)
    ctx->r24 = ADD32(ctx->r1, 0X5A50);
    // 0x15007B94: jr          $t8
    // 0x15007B98: nop

    switch (jr_addend_15007B94 >> 2) {
        case 0: goto L_15007BE0; break;
        case 1: goto L_15007C10; break;
        case 2: goto L_15007C10; break;
        case 3: goto L_15007C10; break;
        case 4: goto L_15007C10; break;
        case 5: goto L_15007C10; break;
        case 6: goto L_15007C10; break;
        case 7: goto L_15007B9C; break;
        case 8: goto L_15007C10; break;
        case 9: goto L_15007C10; break;
        case 10: goto L_15007C10; break;
        case 11: goto L_15007C10; break;
        case 12: goto L_15007C10; break;
        case 13: goto L_15007C10; break;
        case 14: goto L_15007C10; break;
        case 15: goto L_15007C10; break;
        case 16: goto L_15007C10; break;
        case 17: goto L_15007B9C; break;
        case 18: goto L_15007C10; break;
        case 19: goto L_15007C10; break;
        case 20: goto L_15007C10; break;
        case 21: goto L_15007C10; break;
        case 22: goto L_15007C10; break;
        case 23: goto L_15007C10; break;
        case 24: goto L_15007B9C; break;
        case 25: goto L_15007C10; break;
        case 26: goto L_15007B9C; break;
        case 27: goto L_15007C10; break;
        case 28: goto L_15007C10; break;
        case 29: goto L_15007B9C; break;
        case 30: goto L_15007C10; break;
        case 31: goto L_15007C10; break;
        case 32: goto L_15007B9C; break;
        case 33: goto L_15007B9C; break;
        case 34: goto L_15007C10; break;
        case 35: goto L_15007C10; break;
        case 36: goto L_15007C10; break;
        case 37: goto L_15007C10; break;
        case 38: goto L_15007C10; break;
        case 39: goto L_15007C10; break;
        case 40: goto L_15007C10; break;
        case 41: goto L_15007C10; break;
        case 42: goto L_15007C10; break;
        case 43: goto L_15007C10; break;
        case 44: goto L_15007B9C; break;
        default: switch_error(__func__, 0x15007B94, 0x80095A50);
    }
    // 0x15007B98: nop

L_15007B9C:
    // 0x15007B9C: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x15007BA0: bne         $v0, $at, L_15007BAC
    if (ctx->r2 != ctx->r1) {
        // 0x15007BA4: addiu       $a0, $zero, 0x103
        ctx->r4 = ADD32(0, 0X103);
            goto L_15007BAC;
    }
    // 0x15007BA4: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x15007BA8: addiu       $a0, $zero, 0xF3
    ctx->r4 = ADD32(0, 0XF3);
L_15007BAC:
    // 0x15007BAC: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x15007BB0: bnel        $v0, $at, L_15007BC0
    if (ctx->r2 != ctx->r1) {
        // 0x15007BB4: addiu       $at, $zero, 0x3F
        ctx->r1 = ADD32(0, 0X3F);
            goto L_15007BC0;
    }
    goto skip_0;
    // 0x15007BB4: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    skip_0:
    // 0x15007BB8: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x15007BBC: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
L_15007BC0:
    // 0x15007BC0: bnel        $v0, $at, L_15007BD0
    if (ctx->r2 != ctx->r1) {
        // 0x15007BC4: addiu       $at, $zero, 0x34
        ctx->r1 = ADD32(0, 0X34);
            goto L_15007BD0;
    }
    goto skip_1;
    // 0x15007BC4: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    skip_1:
    // 0x15007BC8: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x15007BCC: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
L_15007BD0:
    // 0x15007BD0: bne         $v0, $at, L_15007C20
    if (ctx->r2 != ctx->r1) {
        // 0x15007BD4: nop
    
            goto L_15007C20;
    }
    // 0x15007BD4: nop

    // 0x15007BD8: b           L_15007C20
    // 0x15007BDC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_15007C20;
    // 0x15007BDC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_15007BE0:
    // 0x15007BE0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15007BE4: lw          $t9, 0x2E4C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2E4C);
    // 0x15007BE8: addiu       $a0, $zero, 0xEB
    ctx->r4 = ADD32(0, 0XEB);
    // 0x15007BEC: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x15007BF0: lbu         $t0, 0x11($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X11);
    // 0x15007BF4: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x15007BF8: bne         $t1, $zero, L_15007C20
    if (ctx->r9 != 0) {
        // 0x15007BFC: nop
    
            goto L_15007C20;
    }
    // 0x15007BFC: nop

    // 0x15007C00: lw          $t2, 0xDF0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XDF0);
    // 0x15007C04: lb          $a0, 0x11($t2)
    ctx->r4 = MEM_B(ctx->r10, 0X11);
    // 0x15007C08: b           L_15007C20
    // 0x15007C0C: addiu       $a0, $a0, 0xEB
    ctx->r4 = ADD32(ctx->r4, 0XEB);
        goto L_15007C20;
    // 0x15007C0C: addiu       $a0, $a0, 0xEB
    ctx->r4 = ADD32(ctx->r4, 0XEB);
L_15007C10:
    // 0x15007C10: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x15007C14: lw          $t3, 0xDF0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0XDF0);
    // 0x15007C18: lb          $a0, 0x11($t3)
    ctx->r4 = MEM_B(ctx->r11, 0X11);
    // 0x15007C1C: addiu       $a0, $a0, 0xEB
    ctx->r4 = ADD32(ctx->r4, 0XEB);
L_15007C20:
    // 0x15007C20: jal         0x100014C4
    // 0x15007C24: nop

    func_100014C4(rdram, ctx);
        goto after_2;
    // 0x15007C24: nop

    after_2:
    // 0x15007C28: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15007C2C: jal         0x1500E738
    // 0x15007C30: sb          $zero, 0xA00($at)
    MEM_B(0XA00, ctx->r1) = 0;
    func_1500E738(rdram, ctx);
        goto after_3;
    // 0x15007C30: sb          $zero, 0xA00($at)
    MEM_B(0XA00, ctx->r1) = 0;
    after_3:
    // 0x15007C34: jal         0x1500C2A0
    // 0x15007C38: nop

    func_1500C2A0(rdram, ctx);
        goto after_4;
    // 0x15007C38: nop

    after_4:
    // 0x15007C3C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15007C40: sw          $zero, -0x3610($at)
    MEM_W(-0X3610, ctx->r1) = 0;
    // 0x15007C44: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15007C48: jal         0x15008840
    // 0x15007C4C: sw          $zero, 0x920($at)
    MEM_W(0X920, ctx->r1) = 0;
    func_15008840(rdram, ctx);
        goto after_5;
    // 0x15007C4C: sw          $zero, 0x920($at)
    MEM_W(0X920, ctx->r1) = 0;
    after_5:
    // 0x15007C50: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x15007C54: lbu         $t5, -0x2D40($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X2D40);
    // 0x15007C58: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15007C5C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x15007C60: sw          $t4, -0x1C7C($at)
    MEM_W(-0X1C7C, ctx->r1) = ctx->r12;
    // 0x15007C64: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x15007C68: jal         0x1507E114
    // 0x15007C6C: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    func_1507E114(rdram, ctx);
        goto after_6;
    // 0x15007C6C: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    after_6:
    // 0x15007C70: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15007C74: lbu         $t6, 0xB94($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XB94);
    // 0x15007C78: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x15007C7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15007C80: bne         $t6, $at, L_15007C94
    if (ctx->r14 != ctx->r1) {
        // 0x15007C84: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_15007C94;
    }
    // 0x15007C84: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15007C88: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15007C8C: lbu         $t7, 0xBD1($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0XBD1);
    // 0x15007C90: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
L_15007C94:
    // 0x15007C94: addiu       $v0, $v0, -0x1610
    ctx->r2 = ADD32(ctx->r2, -0X1610);
    // 0x15007C98: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x15007C9C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15007CA0: lw          $t9, -0x160C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X160C);
    // 0x15007CA4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007CA8: sw          $t8, -0x1608($at)
    MEM_W(-0X1608, ctx->r1) = ctx->r24;
    // 0x15007CAC: jal         0x150091D0
    // 0x15007CB0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_150091D0(rdram, ctx);
        goto after_7;
    // 0x15007CB0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_7:
    // 0x15007CB4: jal         0x15187F90
    // 0x15007CB8: nop

    func_15187F90(rdram, ctx);
        goto after_8;
    // 0x15007CB8: nop

    after_8:
    // 0x15007CBC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007CC0: sb          $zero, -0x19E7($at)
    MEM_B(-0X19E7, ctx->r1) = 0;
    // 0x15007CC4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007CC8: sb          $zero, -0x19E6($at)
    MEM_B(-0X19E6, ctx->r1) = 0;
    // 0x15007CCC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007CD0: jal         0x150081E4
    // 0x15007CD4: sb          $zero, -0x15F4($at)
    MEM_B(-0X15F4, ctx->r1) = 0;
    func_150081E4(rdram, ctx);
        goto after_9;
    // 0x15007CD4: sb          $zero, -0x15F4($at)
    MEM_B(-0X15F4, ctx->r1) = 0;
    after_9:
    // 0x15007CD8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15007CDC: lbu         $t0, -0x1613($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1613);
    // 0x15007CE0: beq         $t0, $zero, L_15007D00
    if (ctx->r8 == 0) {
        // 0x15007CE4: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_15007D00;
    }
    // 0x15007CE4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x15007CE8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15007CEC: jal         0x10003ACC
    // 0x15007CF0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_10003ACC(rdram, ctx);
        goto after_10;
    // 0x15007CF0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_10:
    // 0x15007CF4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007CF8: b           L_15007D10
    // 0x15007CFC: sb          $zero, -0x1613($at)
    MEM_B(-0X1613, ctx->r1) = 0;
        goto L_15007D10;
    // 0x15007CFC: sb          $zero, -0x1613($at)
    MEM_B(-0X1613, ctx->r1) = 0;
L_15007D00:
    // 0x15007D00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15007D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15007D08: jal         0x10003ACC
    // 0x15007D0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_10003ACC(rdram, ctx);
        goto after_11;
    // 0x15007D0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
L_15007D10:
    // 0x15007D10: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15007D14: lbu         $t1, -0x19EA($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X19EA);
    // 0x15007D18: bne         $t1, $zero, L_15007D58
    if (ctx->r9 != 0) {
        // 0x15007D1C: lui         $t2, 0x800D
        ctx->r10 = S32(0X800D << 16);
            goto L_15007D58;
    }
    // 0x15007D1C: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x15007D20: lw          $t2, 0x2E4C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2E4C);
    // 0x15007D24: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15007D28: addiu       $v0, $v0, 0x2456
    ctx->r2 = ADD32(ctx->r2, 0X2456);
    // 0x15007D2C: lbu         $t3, 0x18($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X18);
    // 0x15007D30: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x15007D34: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15007D38: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x15007D3C: bne         $t4, $zero, L_15007D58
    if (ctx->r12 != 0) {
        // 0x15007D40: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15007D58;
    }
    // 0x15007D40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15007D44: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x15007D48: sb          $t6, 0x2457($at)
    MEM_B(0X2457, ctx->r1) = ctx->r14;
    // 0x15007D4C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x15007D50: jal         0x15085710
    // 0x15007D54: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_15085710(rdram, ctx);
        goto after_12;
    // 0x15007D54: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_12:
L_15007D58:
    // 0x15007D58: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007D5C: jal         0x15002F40
    // 0x15007D60: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_15002F40(rdram, ctx);
        goto after_13;
    // 0x15007D60: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_13:
    // 0x15007D64: jal         0x1501C53C
    // 0x15007D68: nop

    func_1501C53C(rdram, ctx);
        goto after_14;
    // 0x15007D68: nop

    after_14:
    // 0x15007D6C: jal         0x15015E80
    // 0x15007D70: nop

    func_15015E80(rdram, ctx);
        goto after_15;
    // 0x15007D70: nop

    after_15:
    // 0x15007D74: jal         0x150162B0
    // 0x15007D78: nop

    func_150162B0(rdram, ctx);
        goto after_16;
    // 0x15007D78: nop

    after_16:
    // 0x15007D7C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007D80: jal         0x15017930
    // 0x15007D84: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_15017930(rdram, ctx);
        goto after_17;
    // 0x15007D84: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_17:
    // 0x15007D88: jal         0x15016500
    // 0x15007D8C: nop

    func_15016500(rdram, ctx);
        goto after_18;
    // 0x15007D8C: nop

    after_18:
    // 0x15007D90: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007D94: lw          $a0, -0x1618($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1618);
    // 0x15007D98: jal         0x1501A220
    // 0x15007D9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1501A220(rdram, ctx);
        goto after_19;
    // 0x15007D9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x15007DA0: jal         0x15012F90
    // 0x15007DA4: nop

    func_15012F90(rdram, ctx);
        goto after_20;
    // 0x15007DA4: nop

    after_20:
    // 0x15007DA8: jal         0x15008A60
    // 0x15007DAC: nop

    func_15008A60(rdram, ctx);
        goto after_21;
    // 0x15007DAC: nop

    after_21:
    // 0x15007DB0: jal         0x15000AC0
    // 0x15007DB4: nop

    func_15000AC0(rdram, ctx);
        goto after_22;
    // 0x15007DB4: nop

    after_22:
    // 0x15007DB8: jal         0x15012780
    // 0x15007DBC: nop

    func_15012780(rdram, ctx);
        goto after_23;
    // 0x15007DBC: nop

    after_23:
    // 0x15007DC0: jal         0x1500BE68
    // 0x15007DC4: nop

    func_1500BE68(rdram, ctx);
        goto after_24;
    // 0x15007DC4: nop

    after_24:
    // 0x15007DC8: jal         0x15044370
    // 0x15007DCC: nop

    func_15044370(rdram, ctx);
        goto after_25;
    // 0x15007DCC: nop

    after_25:
    // 0x15007DD0: jal         0x15016670
    // 0x15007DD4: nop

    func_15016670(rdram, ctx);
        goto after_26;
    // 0x15007DD4: nop

    after_26:
    // 0x15007DD8: jal         0x15004F00
    // 0x15007DDC: nop

    func_15004F00(rdram, ctx);
        goto after_27;
    // 0x15007DDC: nop

    after_27:
    // 0x15007DE0: jal         0x15004E80
    // 0x15007DE4: nop

    func_15004E80(rdram, ctx);
        goto after_28;
    // 0x15007DE4: nop

    after_28:
    // 0x15007DE8: jal         0x15017868
    // 0x15007DEC: nop

    func_15017868(rdram, ctx);
        goto after_29;
    // 0x15007DEC: nop

    after_29:
    // 0x15007DF0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007DF4: jal         0x151732E0
    // 0x15007DF8: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_151732E0(rdram, ctx);
        goto after_30;
    // 0x15007DF8: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_30:
    // 0x15007DFC: jal         0x1502AAF0
    // 0x15007E00: nop

    func_1502AAF0(rdram, ctx);
        goto after_31;
    // 0x15007E00: nop

    after_31:
    // 0x15007E04: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007E08: jal         0x1502AAF8
    // 0x15007E0C: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_1502AAF8(rdram, ctx);
        goto after_32;
    // 0x15007E0C: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_32:
    // 0x15007E10: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007E14: jal         0x150031EC
    // 0x15007E18: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_150031EC(rdram, ctx);
        goto after_33;
    // 0x15007E18: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_33:
    // 0x15007E1C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007E20: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    // 0x15007E24: jal         0x150039E0
    // 0x15007E28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_150039E0(rdram, ctx);
        goto after_34;
    // 0x15007E28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_34:
    // 0x15007E2C: jal         0x15004574
    // 0x15007E30: nop

    func_15004574(rdram, ctx);
        goto after_35;
    // 0x15007E30: nop

    after_35:
    // 0x15007E34: jal         0x1511F980
    // 0x15007E38: nop

    func_1511F980(rdram, ctx);
        goto after_36;
    // 0x15007E38: nop

    after_36:
    // 0x15007E3C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007E40: jal         0x15003668
    // 0x15007E44: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_15003668(rdram, ctx);
        goto after_37;
    // 0x15007E44: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_37:
    // 0x15007E48: jal         0x150038A0
    // 0x15007E4C: nop

    func_150038A0(rdram, ctx);
        goto after_38;
    // 0x15007E4C: nop

    after_38:
    // 0x15007E50: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007E54: jal         0x150039B0
    // 0x15007E58: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_150039B0(rdram, ctx);
        goto after_39;
    // 0x15007E58: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_39:
    // 0x15007E5C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007E60: jal         0x15017578
    // 0x15007E64: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_15017578(rdram, ctx);
        goto after_40;
    // 0x15007E64: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_40:
    // 0x15007E68: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007E6C: jal         0x150045C4
    // 0x15007E70: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_150045C4(rdram, ctx);
        goto after_41;
    // 0x15007E70: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_41:
    // 0x15007E74: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007E78: jal         0x15008248
    // 0x15007E7C: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_15008248(rdram, ctx);
        goto after_42;
    // 0x15007E7C: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_42:
    // 0x15007E80: jal         0x150000B0
    // 0x15007E84: nop

    func_150000B0(rdram, ctx);
        goto after_43;
    // 0x15007E84: nop

    after_43:
    // 0x15007E88: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007E8C: jal         0x1000F248
    // 0x15007E90: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_1000F248(rdram, ctx);
        goto after_44;
    // 0x15007E90: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_44:
    // 0x15007E94: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007E98: jal         0x100125CC
    // 0x15007E9C: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_100125CC(rdram, ctx);
        goto after_45;
    // 0x15007E9C: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_45:
    // 0x15007EA0: jal         0x10011FEC
    // 0x15007EA4: nop

    func_10011FEC(rdram, ctx);
        goto after_46;
    // 0x15007EA4: nop

    after_46:
    // 0x15007EA8: jal         0x1501BB20
    // 0x15007EAC: nop

    func_1501BB20(rdram, ctx);
        goto after_47;
    // 0x15007EAC: nop

    after_47:
    // 0x15007EB0: jal         0x15008870
    // 0x15007EB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_15008870(rdram, ctx);
        goto after_48;
    // 0x15007EB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_48:
    // 0x15007EB8: jal         0x15008930
    // 0x15007EBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_15008930(rdram, ctx);
        goto after_49;
    // 0x15007EBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_49:
    // 0x15007EC0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007EC4: jal         0x15016690
    // 0x15007EC8: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_15016690(rdram, ctx);
        goto after_50;
    // 0x15007EC8: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_50:
    // 0x15007ECC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007ED0: jal         0x150169A0
    // 0x15007ED4: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_150169A0(rdram, ctx);
        goto after_51;
    // 0x15007ED4: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_51:
    // 0x15007ED8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007EDC: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    // 0x15007EE0: jal         0x15005290
    // 0x15007EE4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_15005290(rdram, ctx);
        goto after_52;
    // 0x15007EE4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_52:
    // 0x15007EE8: jal         0x15016370
    // 0x15007EEC: nop

    func_15016370(rdram, ctx);
        goto after_53;
    // 0x15007EEC: nop

    after_53:
    // 0x15007EF0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007EF4: jal         0x150006E0
    // 0x15007EF8: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_150006E0(rdram, ctx);
        goto after_54;
    // 0x15007EF8: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_54:
    // 0x15007EFC: jal         0x1510B070
    // 0x15007F00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1510B070(rdram, ctx);
        goto after_55;
    // 0x15007F00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_55:
    // 0x15007F04: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x15007F08: lw          $t7, 0x2FA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2FA0);
    // 0x15007F0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15007F10: bltz        $t7, L_15007F54
    if (SIGNED(ctx->r15) < 0) {
        // 0x15007F14: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15007F54;
    }
    // 0x15007F14: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15007F18:
    // 0x15007F18: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15007F1C: lw          $t8, -0x4010($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4010);
    // 0x15007F20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15007F24: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x15007F28: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x15007F2C: jal         0x15125690
    // 0x15007F30: addu        $a0, $v1, $t8
    ctx->r4 = ADD32(ctx->r3, ctx->r24);
    func_15125690(rdram, ctx);
        goto after_56;
    // 0x15007F30: addu        $a0, $v1, $t8
    ctx->r4 = ADD32(ctx->r3, ctx->r24);
    after_56:
    // 0x15007F34: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x15007F38: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x15007F3C: lw          $t9, 0x2FA0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2FA0);
    // 0x15007F40: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x15007F44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15007F48: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15007F4C: beq         $at, $zero, L_15007F18
    if (ctx->r1 == 0) {
        // 0x15007F50: addiu       $v1, $v1, 0x9A0
        ctx->r3 = ADD32(ctx->r3, 0X9A0);
            goto L_15007F18;
    }
    // 0x15007F50: addiu       $v1, $v1, 0x9A0
    ctx->r3 = ADD32(ctx->r3, 0X9A0);
L_15007F54:
    // 0x15007F54: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007F58: jal         0x1500E70C
    // 0x15007F5C: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_1500E70C(rdram, ctx);
        goto after_57;
    // 0x15007F5C: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_57:
    // 0x15007F60: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007F64: jal         0x150163D0
    // 0x15007F68: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_150163D0(rdram, ctx);
        goto after_58;
    // 0x15007F68: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_58:
    // 0x15007F6C: jal         0x150092DC
    // 0x15007F70: nop

    func_150092DC(rdram, ctx);
        goto after_59;
    // 0x15007F70: nop

    after_59:
    // 0x15007F74: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007F78: jal         0x15000AD0
    // 0x15007F7C: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_15000AD0(rdram, ctx);
        goto after_60;
    // 0x15007F7C: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_60:
    // 0x15007F80: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007F84: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    // 0x15007F88: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x15007F8C: bne         $a0, $at, L_15007FA4
    if (ctx->r4 != ctx->r1) {
        // 0x15007F90: nop
    
            goto L_15007FA4;
    }
    // 0x15007F90: nop

    // 0x15007F94: jal         0x151E81EC
    // 0x15007F98: nop

    func_151E81EC(rdram, ctx);
        goto after_61;
    // 0x15007F98: nop

    after_61:
    // 0x15007F9C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007FA0: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
L_15007FA4:
    // 0x15007FA4: jal         0x1500E470
    // 0x15007FA8: nop

    func_1500E470(rdram, ctx);
        goto after_62;
    // 0x15007FA8: nop

    after_62:
    // 0x15007FAC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007FB0: jal         0x15009150
    // 0x15007FB4: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_15009150(rdram, ctx);
        goto after_63;
    // 0x15007FB4: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_63:
    // 0x15007FB8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15007FBC: jal         0x15085B70
    // 0x15007FC0: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_15085B70(rdram, ctx);
        goto after_64;
    // 0x15007FC0: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_64:
    // 0x15007FC4: jal         0x15008DD0
    // 0x15007FC8: nop

    func_15008DD0(rdram, ctx);
        goto after_65;
    // 0x15007FC8: nop

    after_65:
    // 0x15007FCC: jal         0x1501B640
    // 0x15007FD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1501B640(rdram, ctx);
        goto after_66;
    // 0x15007FD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_66:
    // 0x15007FD4: jal         0x15080200
    // 0x15007FD8: nop

    func_15080200(rdram, ctx);
        goto after_67;
    // 0x15007FD8: nop

    after_67:
    // 0x15007FDC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x15007FE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007FE4: jal         0x15015910
    // 0x15007FE8: sw          $t0, -0x161C($at)
    MEM_W(-0X161C, ctx->r1) = ctx->r8;
    func_15015910(rdram, ctx);
        goto after_68;
    // 0x15007FE8: sw          $t0, -0x161C($at)
    MEM_W(-0X161C, ctx->r1) = ctx->r8;
    after_68:
    // 0x15007FEC: jal         0x15004F10
    // 0x15007FF0: nop

    func_15004F10(rdram, ctx);
        goto after_69;
    // 0x15007FF0: nop

    after_69:
    // 0x15007FF4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15007FF8: jal         0x1501748C
    // 0x15007FFC: lh          $a0, 0x2340($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X2340);
    func_1501748C(rdram, ctx);
        goto after_70;
    // 0x15007FFC: lh          $a0, 0x2340($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X2340);
    after_70:
    // 0x15008000: jal         0x1500C1E0
    // 0x15008004: nop

    func_1500C1E0(rdram, ctx);
        goto after_71;
    // 0x15008004: nop

    after_71:
    // 0x15008008: jal         0x15004E00
    // 0x1500800C: nop

    func_15004E00(rdram, ctx);
        goto after_72;
    // 0x1500800C: nop

    after_72:
    // 0x15008010: jal         0x15004D50
    // 0x15008014: nop

    func_15004D50(rdram, ctx);
        goto after_73;
    // 0x15008014: nop

    after_73:
    // 0x15008018: jal         0x150082CC
    // 0x1500801C: nop

    func_150082CC(rdram, ctx);
        goto after_74;
    // 0x1500801C: nop

    after_74:
    // 0x15008020: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15008024: lbu         $t1, -0x19EA($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X19EA);
    // 0x15008028: bne         $t1, $zero, L_15008040
    if (ctx->r9 != 0) {
        // 0x1500802C: lui         $a2, 0x800C
        ctx->r6 = S32(0X800C << 16);
            goto L_15008040;
    }
    // 0x1500802C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15008030: lw          $a2, -0x1C1C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1C1C);
    // 0x15008034: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15008038: jal         0x15085710
    // 0x1500803C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_15085710(rdram, ctx);
        goto after_75;
    // 0x1500803C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_75:
L_15008040:
    // 0x15008040: jal         0x1509C2A4
    // 0x15008044: nop

    func_1509C2A4(rdram, ctx);
        goto after_76;
    // 0x15008044: nop

    after_76:
    // 0x15008048: beq         $v0, $zero, L_1500805C
    if (ctx->r2 == 0) {
        // 0x1500804C: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_1500805C;
    }
    // 0x1500804C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15008050: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x15008054: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15008058: sb          $t3, -0x1C20($at)
    MEM_B(-0X1C20, ctx->r1) = ctx->r11;
L_1500805C:
    // 0x1500805C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15008060: sb          $t4, 0x2E43($at)
    MEM_B(0X2E43, ctx->r1) = ctx->r12;
    // 0x15008064: jal         0x1509BBA0
    // 0x15008068: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_1509BBA0(rdram, ctx);
        goto after_77;
    // 0x15008068: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_77:
    // 0x1500806C: jal         0x1509BBA0
    // 0x15008070: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_1509BBA0(rdram, ctx);
        goto after_78;
    // 0x15008070: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_78:
    // 0x15008074: jal         0x15013000
    // 0x15008078: nop

    func_15013000(rdram, ctx);
        goto after_79;
    // 0x15008078: nop

    after_79:
    // 0x1500807C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x15008080: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x15008084: beq         $v0, $zero, L_15008094
    if (ctx->r2 == 0) {
        // 0x15008088: nop
    
            goto L_15008094;
    }
    // 0x15008088: nop

    // 0x1500808C: jal         0x1507DFE4
    // 0x15008090: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    func_1507DFE4(rdram, ctx);
        goto after_80;
    // 0x15008090: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    after_80:
L_15008094:
    // 0x15008094: jal         0x151E562C
    // 0x15008098: nop

    func_151E562C(rdram, ctx);
        goto after_81;
    // 0x15008098: nop

    after_81:
    // 0x1500809C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x150080A0: lbu         $t5, 0xB99($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0XB99);
    // 0x150080A4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x150080A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x150080AC: bne         $t5, $zero, L_150080C4
    if (ctx->r13 != 0) {
        // 0x150080B0: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_150080C4;
    }
    // 0x150080B0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150080B4: lbu         $t6, -0x21C8($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X21C8);
    // 0x150080B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150080BC: bne         $t6, $at, L_15008130
    if (ctx->r14 != ctx->r1) {
        // 0x150080C0: nop
    
            goto L_15008130;
    }
    // 0x150080C0: nop

L_150080C4:
    // 0x150080C4: lbu         $t7, 0x35EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35EA);
    // 0x150080C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150080CC: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x150080D0: beql        $v1, $t7, L_150080E8
    if (ctx->r3 == ctx->r15) {
        // 0x150080D4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150080E8;
    }
    goto skip_2;
    // 0x150080D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x150080D8: lbu         $t8, -0x21C8($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X21C8);
    // 0x150080DC: bne         $v1, $t8, L_150080E8
    if (ctx->r3 != ctx->r24) {
        // 0x150080E0: nop
    
            goto L_150080E8;
    }
    // 0x150080E0: nop

    // 0x150080E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150080E8:
    // 0x150080E8: beq         $v0, $zero, L_15008128
    if (ctx->r2 == 0) {
        // 0x150080EC: nop
    
            goto L_15008128;
    }
    // 0x150080EC: nop

    // 0x150080F0: jal         0x151E5FAC
    // 0x150080F4: nop

    func_151E5FAC(rdram, ctx);
        goto after_82;
    // 0x150080F4: nop

    after_82:
    // 0x150080F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150080FC: blez        $v0, L_15008128
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15008100: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15008128;
    }
    // 0x15008100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15008104: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
L_15008108:
    // 0x15008108: jal         0x15181E18
    // 0x1500810C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_15181E18(rdram, ctx);
        goto after_83;
    // 0x1500810C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_83:
    // 0x15008110: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x15008114: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x15008118: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1500811C: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15008120: bnel        $at, $zero, L_15008108
    if (ctx->r1 != 0) {
        // 0x15008124: sw          $v1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r3;
            goto L_15008108;
    }
    goto skip_3;
    // 0x15008124: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    skip_3:
L_15008128:
    // 0x15008128: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500812C: sb          $zero, 0xB99($at)
    MEM_B(0XB99, ctx->r1) = 0;
L_15008130:
    // 0x15008130: jal         0x15017640
    // 0x15008134: nop

    func_15017640(rdram, ctx);
        goto after_84;
    // 0x15008134: nop

    after_84:
    // 0x15008138: jal         0x1501CC3C
    // 0x1500813C: nop

    func_1501CC3C(rdram, ctx);
        goto after_85;
    // 0x1500813C: nop

    after_85:
    // 0x15008140: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15008144: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x15008148: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
L_1500814C:
    // 0x1500814C: beq         $t9, $zero, L_15008170
    if (ctx->r25 == 0) {
        // 0x15008150: nop
    
            goto L_15008170;
    }
    // 0x15008150: nop

    // 0x15008154: lbu         $t0, 0x127($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X127);
    // 0x15008158: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1500815C: beq         $t0, $at, L_15008170
    if (ctx->r8 == ctx->r1) {
        // 0x15008160: nop
    
            goto L_15008170;
    }
    // 0x15008160: nop

    // 0x15008164: jal         0x150A11C4
    // 0x15008168: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150A11C4(rdram, ctx);
        goto after_86;
    // 0x15008168: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_86:
    // 0x1500816C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_15008170:
    // 0x15008170: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15008174: addiu       $t1, $t1, 0x121C
    ctx->r9 = ADD32(ctx->r9, 0X121C);
    // 0x15008178: addiu       $a0, $a0, 0x32C
    ctx->r4 = ADD32(ctx->r4, 0X32C);
    // 0x1500817C: bnel        $a0, $t1, L_1500814C
    if (ctx->r4 != ctx->r9) {
        // 0x15008180: lw          $t9, 0x0($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X0);
            goto L_1500814C;
    }
    goto skip_4;
    // 0x15008180: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    skip_4:
    // 0x15008184: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15008188: addiu       $v0, $v0, 0x18A8
    ctx->r2 = ADD32(ctx->r2, 0X18A8);
    // 0x1500818C: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x15008190: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15008194: beq         $t2, $zero, L_150081B8
    if (ctx->r10 == 0) {
        // 0x15008198: nop
    
            goto L_150081B8;
    }
    // 0x15008198: nop

    // 0x1500819C: lw          $t3, -0x1610($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1610);
    // 0x150081A0: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x150081A4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x150081A8: beq         $t3, $at, L_150081B8
    if (ctx->r11 == ctx->r1) {
        // 0x150081AC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_150081B8;
    }
    // 0x150081AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150081B0: jal         0x151BF340
    // 0x150081B4: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    func_151BF340(rdram, ctx);
        goto after_87;
    // 0x150081B4: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    after_87:
L_150081B8:
    // 0x150081B8: jal         0x1509C3A0
    // 0x150081BC: nop

    func_1509C3A0(rdram, ctx);
        goto after_88;
    // 0x150081BC: nop

    after_88:
    // 0x150081C0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150081C4: lw          $t4, -0x1610($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1610);
    // 0x150081C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150081CC: jal         0x151D8DE8
    // 0x150081D0: sw          $t4, -0x160C($at)
    MEM_W(-0X160C, ctx->r1) = ctx->r12;
    func_151D8DE8(rdram, ctx);
        goto after_89;
    // 0x150081D0: sw          $t4, -0x160C($at)
    MEM_W(-0X160C, ctx->r1) = ctx->r12;
    after_89:
    // 0x150081D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150081D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150081DC: jr          $ra
    // 0x150081E0: nop

    return;
    return;
    // 0x150081E0: nop

;}
RECOMP_FUNC void func_15071628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507162C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15071630: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15071634: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x15071638: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507163C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15071640: addiu       $a1, $a1, -0x55
    ctx->r5 = ADD32(ctx->r5, -0X55);
    // 0x15071644: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x15071648: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1507164C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15071650: jal         0x151D0058
    // 0x15071654: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151D0058(rdram, ctx);
        goto after_0;
    // 0x15071654: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x15071658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507165C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15071660: jr          $ra
    // 0x15071664: nop

    return;
    return;
    // 0x15071664: nop

;}
RECOMP_FUNC void func_10005020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10005020: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x10005024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10005028: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x1000502C: lw          $v0, -0x53B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X53B0);
    // 0x10005030: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10005034: sb          $zero, -0x5A7E($at)
    MEM_B(-0X5A7E, ctx->r1) = 0;
    // 0x10005038: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x1000503C: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10005040: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x10005044: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x10005048: beql        $t7, $zero, L_10005078
    if (ctx->r15 == 0) {
        // 0x1000504C: lw          $a0, 0x58($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X58);
            goto L_10005078;
    }
    goto skip_0;
    // 0x1000504C: lw          $a0, 0x58($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X58);
    skip_0:
    // 0x10005050: lbu         $t8, -0x53A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X53A4);
    // 0x10005054: bnel        $t8, $zero, L_10005078
    if (ctx->r24 != 0) {
        // 0x10005058: lw          $a0, 0x58($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X58);
            goto L_10005078;
    }
    goto skip_1;
    // 0x10005058: lw          $a0, 0x58($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X58);
    skip_1:
    // 0x1000505C: jal         0x1515FDA0
    // 0x10005060: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_1515FDA0(rdram, ctx);
        goto after_0;
    // 0x10005060: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x10005064: jal         0x10024830
    // 0x10005068: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    osViSwapBuffer_recomp(rdram, ctx);
        goto after_1;
    // 0x10005068: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x1000506C: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x10005070: lw          $v0, -0x53B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X53B0);
    // 0x10005074: lw          $a0, 0x58($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X58);
L_10005078:
    // 0x10005078: lw          $a1, 0x5C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X5C);
    // 0x1000507C: jal         0x10023580
    // 0x10005080: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x10005080: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x10005084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10005088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1000508C: jr          $ra
    // 0x10005090: nop

    return;
    return;
    // 0x10005090: nop

;}
RECOMP_FUNC void func_150C66F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C66F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C66F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C66F8: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x150C66FC: beq         $t6, $zero, L_150C671C
    if (ctx->r14 == 0) {
        // 0x150C6700: nop
    
            goto L_150C671C;
    }
    // 0x150C6700: nop

    // 0x150C6704: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x150C6708: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150C670C: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x150C6710: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
    // 0x150C6714: b           L_150C6730
    // 0x150C6718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150C6730;
    // 0x150C6718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C671C:
    // 0x150C671C: jal         0x150C6D90
    // 0x150C6720: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150C6D90(rdram, ctx);
        goto after_0;
    // 0x150C6720: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150C6724: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150C6728: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x150C672C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C6730:
    // 0x150C6730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C6734: jr          $ra
    // 0x150C6738: nop

    return;
    return;
    // 0x150C6738: nop

;}
RECOMP_FUNC void func_151BEEE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BEEE0: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x151BEEE4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x151BEEE8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x151BEEEC: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x151BEEF0: andi        $s1, $a3, 0xFF
    ctx->r17 = ctx->r7 & 0XFF;
    // 0x151BEEF4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151BEEF8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x151BEEFC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x151BEF00: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x151BEF04: addiu       $v1, $sp, 0xC0
    ctx->r3 = ADD32(ctx->r29, 0XC0);
    // 0x151BEF08: lbu         $a0, 0xDB($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XDB);
    // 0x151BEF0C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x151BEF10: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151BEF14: addiu       $t6, $t6, -0x440
    ctx->r14 = ADD32(ctx->r14, -0X440);
    // 0x151BEF18: lwr         $at, 0x2($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X2);
    // 0x151BEF1C: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x151BEF20: addiu       $t9, $zero, 0x26
    ctx->r25 = ADD32(0, 0X26);
    // 0x151BEF24: swr         $at, 0x2($v1)
    do_swr(rdram, 0X2, ctx->r3, ctx->r1);
    // 0x151BEF28: slti        $at, $a0, 0x3
    ctx->r1 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x151BEF2C: bne         $at, $zero, L_151BEF3C
    if (ctx->r1 != 0) {
        // 0x151BEF30: addu        $t2, $v1, $a0
        ctx->r10 = ADD32(ctx->r3, ctx->r4);
            goto L_151BEF3C;
    }
    // 0x151BEF30: addu        $t2, $v1, $a0
    ctx->r10 = ADD32(ctx->r3, ctx->r4);
    // 0x151BEF34: b           L_151BF0AC
    // 0x151BEF38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151BF0AC;
    // 0x151BEF38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151BEF3C:
    // 0x151BEF3C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151BEF40: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151BEF44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BEF48: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151BEF4C: lwc1        $f12, -0x571C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X571C);
    // 0x151BEF50: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x151BEF54: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x151BEF58: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x151BEF5C: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x151BEF60: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x151BEF64: swc1        $f14, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f14.u32l;
    // 0x151BEF68: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x151BEF6C: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x151BEF70: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x151BEF74: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x151BEF78: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x151BEF7C: addiu       $t0, $sp, 0x6C
    ctx->r8 = ADD32(ctx->r29, 0X6C);
    // 0x151BEF80: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x151BEF84: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x151BEF88: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x151BEF8C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x151BEF90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151BEF94: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x151BEF98: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x151BEF9C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151BEFA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151BEFA4: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x151BEFA8: lbu         $t4, 0xDF($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XDF);
    // 0x151BEFAC: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x151BEFB0: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x151BEFB4: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x151BEFB8: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x151BEFBC: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x151BEFC0: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x151BEFC4: beq         $t4, $zero, L_151BEFD4
    if (ctx->r12 == 0) {
        // 0x151BEFC8: swc1        $f0, 0x90($sp)
        MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
            goto L_151BEFD4;
    }
    // 0x151BEFC8: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x151BEFCC: b           L_151BEFD8
    // 0x151BEFD0: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
        goto L_151BEFD8;
    // 0x151BEFD0: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_151BEFD4:
    // 0x151BEFD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151BEFD8:
    // 0x151BEFD8: ori         $t5, $v0, 0x1D00
    ctx->r13 = ctx->r2 | 0X1D00;
    // 0x151BEFDC: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x151BEFE0: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x151BEFE4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x151BEFE8: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x151BEFEC: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x151BEFF0: lw          $t4, -0x1610($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1610);
    // 0x151BEFF4: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    // 0x151BEFF8: sh          $t6, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r14;
    // 0x151BEFFC: sh          $t9, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r25;
    // 0x151BF000: lbu         $t1, 0x0($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X0);
    // 0x151BF004: lw          $t0, 0xE0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE0);
    // 0x151BF008: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151BF00C: sb          $t3, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r11;
    // 0x151BF010: sb          $t1, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r9;
    // 0x151BF014: bne         $t4, $at, L_151BF028
    if (ctx->r12 != ctx->r1) {
        // 0x151BF018: sw          $t0, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->r8;
            goto L_151BF028;
    }
    // 0x151BF018: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x151BF01C: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x151BF020: b           L_151BF02C
    // 0x151BF024: sb          $t5, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r13;
        goto L_151BF02C;
    // 0x151BF024: sb          $t5, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r13;
L_151BF028:
    // 0x151BF028: sb          $zero, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = 0;
L_151BF02C:
    // 0x151BF02C: lbu         $t9, 0xE7($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XE7);
    // 0x151BF030: lw          $t2, 0xE8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE8);
    // 0x151BF034: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x151BF038: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151BF03C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151BF040: sb          $zero, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = 0;
    // 0x151BF044: sb          $zero, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = 0;
    // 0x151BF048: sb          $zero, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = 0;
    // 0x151BF04C: sb          $zero, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = 0;
    // 0x151BF050: sb          $zero, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = 0;
    // 0x151BF054: sb          $zero, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = 0;
    // 0x151BF058: sb          $t8, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r24;
    // 0x151BF05C: sb          $zero, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = 0;
    // 0x151BF060: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x151BF064: sb          $zero, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = 0;
    // 0x151BF068: sh          $t7, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r15;
    // 0x151BF06C: sh          $t6, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r14;
    // 0x151BF070: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151BF074: jal         0x15132A4C
    // 0x151BF078: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_15132A4C(rdram, ctx);
        goto after_0;
    // 0x151BF078: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_0:
    // 0x151BF07C: beq         $v0, $zero, L_151BF0A8
    if (ctx->r2 == 0) {
        // 0x151BF080: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_151BF0A8;
    }
    // 0x151BF080: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x151BF084: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151BF088: addiu       $s1, $s3, 0x90
    ctx->r17 = ADD32(ctx->r19, 0X90);
    // 0x151BF08C: addiu       $s2, $zero, 0x80
    ctx->r18 = ADD32(0, 0X80);
L_151BF090:
    // 0x151BF090: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151BF094: jal         0x15133760
    // 0x151BF098: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_15133760(rdram, ctx);
        goto after_1;
    // 0x151BF098: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x151BF09C: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
    // 0x151BF0A0: bne         $s0, $s2, L_151BF090
    if (ctx->r16 != ctx->r18) {
        // 0x151BF0A4: addiu       $s1, $s1, 0x40
        ctx->r17 = ADD32(ctx->r17, 0X40);
            goto L_151BF090;
    }
    // 0x151BF0A4: addiu       $s1, $s1, 0x40
    ctx->r17 = ADD32(ctx->r17, 0X40);
L_151BF0A8:
    // 0x151BF0A8: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_151BF0AC:
    // 0x151BF0AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151BF0B0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x151BF0B4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x151BF0B8: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x151BF0BC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x151BF0C0: jr          $ra
    // 0x151BF0C4: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    return;
    // 0x151BF0C4: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_150C1260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C1260: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x150C1264: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x150C1268: sw          $a1, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r5;
    // 0x150C126C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x150C1270: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x150C1274: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x150C1278: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150C127C: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x150C1280: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x150C1284: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x150C1288: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x150C128C: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x150C1290: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x150C1294: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x150C1298: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x150C129C: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x150C12A0: lwc1        $f4, 0x14C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X14C);
    // 0x150C12A4: lwc1        $f6, 0x150($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X150);
    // 0x150C12A8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150C12AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C12B0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150C12B4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150C12B8: beq         $s2, $zero, L_150C1624
    if (ctx->r18 == 0) {
        // 0x150C12BC: swc1        $f16, 0x124($sp)
        MEM_W(0X124, ctx->r29) = ctx->f16.u32l;
            goto L_150C1624;
    }
    // 0x150C12BC: swc1        $f16, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f16.u32l;
    // 0x150C12C0: lw          $v1, 0x1D4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1D4);
    // 0x150C12C4: addiu       $a2, $sp, 0x12C
    ctx->r6 = ADD32(ctx->r29, 0X12C);
    // 0x150C12C8: beq         $v1, $zero, L_150C1624
    if (ctx->r3 == 0) {
        // 0x150C12CC: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_150C1624;
    }
    // 0x150C12CC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x150C12D0: beq         $a1, $zero, L_150C12EC
    if (ctx->r5 == 0) {
        // 0x150C12D4: addiu       $t7, $zero, 0xD
        ctx->r15 = ADD32(0, 0XD);
            goto L_150C12EC;
    }
    // 0x150C12D4: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x150C12D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150C12DC: beq         $a1, $at, L_150C12F4
    if (ctx->r5 == ctx->r1) {
        // 0x150C12E0: addiu       $t8, $zero, 0x11
        ctx->r24 = ADD32(0, 0X11);
            goto L_150C12F4;
    }
    // 0x150C12E0: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x150C12E4: b           L_150C12F8
    // 0x150C12E8: nop

        goto L_150C12F8;
    // 0x150C12E8: nop

L_150C12EC:
    // 0x150C12EC: b           L_150C12F8
    // 0x150C12F0: sw          $t7, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r15;
        goto L_150C12F8;
    // 0x150C12F0: sw          $t7, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r15;
L_150C12F4:
    // 0x150C12F4: sw          $t8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r24;
L_150C12F8:
    // 0x150C12F8: jal         0x15142314
    // 0x150C12FC: lw          $a1, 0x128($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X128);
    func_15142314(rdram, ctx);
        goto after_0;
    // 0x150C12FC: lw          $a1, 0x128($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X128);
    after_0:
    // 0x150C1300: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150C1304: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C1308: lwc1        $f18, 0x124($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150C130C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150C1310: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C1314: mul.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150C1318: lwc1        $f14, 0x180($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X180);
    // 0x150C131C: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x150C1320: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x150C1324: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150C1328: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x150C132C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150C1330: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150C1334: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150C1338: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150C133C: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x150C1340: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150C1344: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150C1348: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150C134C: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x150C1350: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150C1354: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x150C1358: jal         0x1514C2F0
    // 0x150C135C: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    func_1514C2F0(rdram, ctx);
        goto after_1;
    // 0x150C135C: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    after_1:
    // 0x150C1360: lwc1        $f18, 0x180($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X180);
    // 0x150C1364: lwc1        $f10, 0x12C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x150C1368: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150C136C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150C1370: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x150C1374: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x150C1378: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150C137C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x150C1380: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C1384: lwc1        $f4, 0x134($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X134);
    // 0x150C1388: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x150C138C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x150C1390: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150C1394: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150C1398: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150C139C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150C13A0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150C13A4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150C13A8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C13AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150C13B0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x150C13B4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150C13B8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x150C13BC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150C13C0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150C13C4: jal         0x15165F80
    // 0x150C13C8: nop

    func_15165F80(rdram, ctx);
        goto after_2;
    // 0x150C13C8: nop

    after_2:
    // 0x150C13CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C13D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150C13D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C13D8: lwc1        $f8, 0x1D0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1D0);
    // 0x150C13DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C13E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150C13E4: lwc1        $f16, 0x1D4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1D4);
    // 0x150C13E8: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x150C13EC: addiu       $t1, $zero, 0x29E8
    ctx->r9 = ADD32(0, 0X29E8);
    // 0x150C13F0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150C13F4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150C13F8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150C13FC: sh          $t0, 0xFE($sp)
    MEM_H(0XFE, ctx->r29) = ctx->r8;
    // 0x150C1400: sw          $t1, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r9;
    // 0x150C1404: sb          $zero, 0x100($sp)
    MEM_B(0X100, ctx->r29) = 0;
    // 0x150C1408: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
    // 0x150C140C: sb          $t2, 0x108($sp)
    MEM_B(0X108, ctx->r29) = ctx->r10;
    // 0x150C1410: sb          $t3, 0x109($sp)
    MEM_B(0X109, ctx->r29) = ctx->r11;
    // 0x150C1414: sb          $zero, 0x10A($sp)
    MEM_B(0X10A, ctx->r29) = 0;
    // 0x150C1418: sb          $zero, 0x10B($sp)
    MEM_B(0X10B, ctx->r29) = 0;
    // 0x150C141C: sb          $zero, 0x10C($sp)
    MEM_B(0X10C, ctx->r29) = 0;
    // 0x150C1420: sb          $zero, 0x10D($sp)
    MEM_B(0X10D, ctx->r29) = 0;
    // 0x150C1424: sb          $zero, 0x10E($sp)
    MEM_B(0X10E, ctx->r29) = 0;
    // 0x150C1428: sb          $zero, 0x10F($sp)
    MEM_B(0X10F, ctx->r29) = 0;
    // 0x150C142C: sb          $zero, 0x110($sp)
    MEM_B(0X110, ctx->r29) = 0;
    // 0x150C1430: sb          $t4, 0x112($sp)
    MEM_B(0X112, ctx->r29) = ctx->r12;
    // 0x150C1434: sw          $s2, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r18;
    // 0x150C1438: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x150C143C: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x150C1440: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x150C1444: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x150C1448: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x150C144C: swc1        $f16, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f16.u32l;
    // 0x150C1450: lbu         $t5, 0x3B($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X3B);
    // 0x150C1454: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x150C1458: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x150C145C: sh          $t6, 0x11A($sp)
    MEM_H(0X11A, ctx->r29) = ctx->r14;
    // 0x150C1460: sh          $t7, 0x11C($sp)
    MEM_H(0X11C, ctx->r29) = ctx->r15;
    // 0x150C1464: jal         0x150ADA20
    // 0x150C1468: sb          $t5, 0x118($sp)
    MEM_B(0X118, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150C1468: sb          $t5, 0x118($sp)
    MEM_B(0X118, ctx->r29) = ctx->r13;
    after_3:
    // 0x150C146C: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
    // 0x150C1470: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x150C1474: beq         $v1, $zero, L_150C1624
    if (ctx->r3 == 0) {
        // 0x150C1478: addiu       $s1, $v1, -0x1
        ctx->r17 = ADD32(ctx->r3, -0X1);
            goto L_150C1624;
    }
    // 0x150C1478: addiu       $s1, $v1, -0x1
    ctx->r17 = ADD32(ctx->r3, -0X1);
    // 0x150C147C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C1480: lwc1        $f30, 0x1D8($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X1D8);
    // 0x150C1484: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C1488: lwc1        $f28, 0x1DC($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X1DC);
    // 0x150C148C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150C1490: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150C1494: addiu       $s3, $sp, 0xA8
    ctx->r19 = ADD32(ctx->r29, 0XA8);
L_150C1498:
    // 0x150C1498: jal         0x150ADA20
    // 0x150C149C: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150C149C: nop

    after_4:
    // 0x150C14A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150C14A4: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x150C14A8: jal         0x150ADA68
    // 0x150C14AC: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150C14AC: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    after_5:
    // 0x150C14B0: mul.s       $f18, $f0, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150C14B4: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x150C14B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C14BC: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150C14C0: addiu       $a0, $s0, -0x40
    ctx->r4 = ADD32(ctx->r16, -0X40);
    // 0x150C14C4: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x150C14C8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x150C14CC: add.s       $f4, $f18, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f30.fl;
    // 0x150C14D0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150C14D4: nop

    // 0x150C14D8: mul.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150C14DC: jal         0x151423D8
    // 0x150C14E0: nop

    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x150C14E0: nop

    after_6:
    // 0x150C14E4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x150C14E8: jal         0x151423D8
    // 0x150C14EC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_7;
    // 0x150C14EC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_7:
    // 0x150C14F0: jal         0x150ADA20
    // 0x150C14F4: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150C14F4: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    after_8:
    // 0x150C14F8: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150C14FC: lwc1        $f18, 0x12C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x150C1500: andi        $t0, $v0, 0x1F
    ctx->r8 = ctx->r2 & 0X1F;
    // 0x150C1504: mul.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150C1508: addiu       $t1, $t0, 0xF
    ctx->r9 = ADD32(ctx->r8, 0XF);
    // 0x150C150C: sh          $t1, 0xFC($sp)
    MEM_H(0XFC, ctx->r29) = ctx->r9;
    // 0x150C1510: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150C1514: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C1518: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150C151C: mul.s       $f16, $f0, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150C1520: lwc1        $f18, 0x134($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X134);
    // 0x150C1524: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x150C1528: lwc1        $f6, 0x180($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X180);
    // 0x150C152C: swc1        $f20, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f20.u32l;
    // 0x150C1530: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150C1534: mul.s       $f6, $f20, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x150C1538: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150C153C: mul.s       $f8, $f20, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x150C1540: swc1        $f10, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f10.u32l;
    // 0x150C1544: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    // 0x150C1548: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x150C154C: jal         0x150ADA68
    // 0x150C1550: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x150C1550: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x150C1554: mul.s       $f10, $f0, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150C1558: lwc1        $f18, 0x124($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150C155C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C1560: lwc1        $f6, 0x1E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1E0);
    // 0x150C1564: add.s       $f16, $f10, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x150C1568: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150C156C: nop

    // 0x150C1570: mul.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150C1574: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x150C1578: swc1        $f2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f2.u32l;
    // 0x150C157C: jal         0x150ADA68
    // 0x150C1580: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150C1580: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    after_10:
    // 0x150C1584: mul.s       $f8, $f0, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x150C1588: jal         0x150ADA68
    // 0x150C158C: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150C158C: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x150C1590: mul.s       $f10, $f0, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x150C1594: jal         0x150ADA68
    // 0x150C1598: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x150C1598: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x150C159C: mul.s       $f16, $f0, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x150C15A0: jal         0x150ADA68
    // 0x150C15A4: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x150C15A4: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x150C15A8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150C15AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C15B0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150C15B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C15B8: nop

    // 0x150C15BC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150C15C0: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x150C15C4: jal         0x150ADA68
    // 0x150C15C8: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x150C15C8: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x150C15CC: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150C15D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C15D4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150C15D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C15DC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150C15E0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150C15E4: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150C15E8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150C15EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150C15F0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150C15F4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x150C15F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150C15FC: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150C1600: jal         0x15132A4C
    // 0x150C1604: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    func_15132A4C(rdram, ctx);
        goto after_15;
    // 0x150C1604: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    after_15:
    // 0x150C1608: beql        $v0, $zero, L_150C161C
    if (ctx->r2 == 0) {
        // 0x150C160C: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_150C161C;
    }
    goto skip_0;
    // 0x150C160C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    skip_0:
    // 0x150C1610: lwc1        $f6, 0x180($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X180);
    // 0x150C1614: swc1        $f6, 0x170($v0)
    MEM_W(0X170, ctx->r2) = ctx->f6.u32l;
    // 0x150C1618: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_150C161C:
    // 0x150C161C: bne         $s1, $zero, L_150C1498
    if (ctx->r17 != 0) {
        // 0x150C1620: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_150C1498;
    }
    // 0x150C1620: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_150C1624:
    // 0x150C1624: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x150C1628: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x150C162C: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x150C1630: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x150C1634: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x150C1638: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x150C163C: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x150C1640: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x150C1644: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x150C1648: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x150C164C: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x150C1650: jr          $ra
    // 0x150C1654: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    return;
    // 0x150C1654: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_1518F108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518F108: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
    // 0x1518F10C: lwc1        $f2, 0x154($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X154);
    // 0x1518F110: lwc1        $f12, 0x2C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x1518F114: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x1518F118: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1518F11C: lh          $t6, 0x158($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X158);
    // 0x1518F120: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1518F124: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1518F128: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x1518F12C: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x1518F130: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x1518F134: beq         $at, $zero, L_1518F150
    if (ctx->r1 == 0) {
        // 0x1518F138: swc1        $f10, 0x2C($a0)
        MEM_W(0X2C, ctx->r4) = ctx->f10.u32l;
            goto L_1518F150;
    }
    // 0x1518F138: swc1        $f10, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f10.u32l;
    // 0x1518F13C: lh          $t7, 0x15A($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X15A);
    // 0x1518F140: multu       $v0, $t7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518F144: mflo        $t8
    ctx->r24 = lo;
    // 0x1518F148: sb          $t8, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r24;
    // 0x1518F14C: nop

L_1518F150:
    // 0x1518F150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518F154: jr          $ra
    // 0x1518F158: nop

    return;
    return;
    // 0x1518F158: nop

;}
RECOMP_FUNC void func_151D2BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D2BA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D2BA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151D2BAC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151D2BB0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151D2BB4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151D2BB8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151D2BBC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x151D2BC0: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x151D2BC4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151D2BC8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151D2BCC: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    // 0x151D2BD0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x151D2BD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151D2BD8: addiu       $a2, $a2, 0x48
    ctx->r6 = ADD32(ctx->r6, 0X48);
    // 0x151D2BDC: jal         0x15167A68
    // 0x151D2BE0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x151D2BE0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x151D2BE4: bne         $v0, $zero, L_151D2BF4
    if (ctx->r2 != 0) {
        // 0x151D2BE8: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_151D2BF4;
    }
    // 0x151D2BE8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x151D2BEC: b           L_151D2C30
    // 0x151D2BF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D2C30;
    // 0x151D2BF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D2BF4:
    // 0x151D2BF4: addiu       $a0, $a3, 0x10
    ctx->r4 = ADD32(ctx->r7, 0X10);
    // 0x151D2BF8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151D2BFC: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x151D2C00: jal         0x10022EC0
    // 0x151D2C04: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151D2C04: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x151D2C08: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x151D2C0C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x151D2C10: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151D2C14: sw          $at, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r1;
    // 0x151D2C18: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x151D2C1C: sw          $t1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r9;
    // 0x151D2C20: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x151D2C24: jal         0x151D3308
    // 0x151D2C28: sw          $at, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r1;
    func_151D3308(rdram, ctx);
        goto after_2;
    // 0x151D2C28: sw          $at, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r1;
    after_2:
    // 0x151D2C2C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_151D2C30:
    // 0x151D2C30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151D2C34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D2C38: jr          $ra
    // 0x151D2C3C: nop

    return;
    return;
    // 0x151D2C3C: nop

;}
RECOMP_FUNC void func_150BD740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BD740: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x150BD744: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x150BD748: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x150BD74C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x150BD750: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x150BD754: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x150BD758: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x150BD75C: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x150BD760: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x150BD764: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x150BD768: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x150BD76C: sw          $a1, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r5;
    // 0x150BD770: sw          $a2, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r6;
    // 0x150BD774: beql        $s6, $zero, L_150BD92C
    if (ctx->r22 == 0) {
        // 0x150BD778: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_150BD92C;
    }
    goto skip_0;
    // 0x150BD778: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x150BD77C: lw          $t6, 0x1D4($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X1D4);
    // 0x150BD780: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x150BD784: addiu       $s1, $s1, -0xC0
    ctx->r17 = ADD32(ctx->r17, -0XC0);
    // 0x150BD788: beq         $t6, $zero, L_150BD928
    if (ctx->r14 == 0) {
        // 0x150BD78C: addiu       $s2, $sp, 0x108
        ctx->r18 = ADD32(ctx->r29, 0X108);
            goto L_150BD928;
    }
    // 0x150BD78C: addiu       $s2, $sp, 0x108
    ctx->r18 = ADD32(ctx->r29, 0X108);
    // 0x150BD790: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x150BD794: lui         $s5, 0x800A
    ctx->r21 = S32(0X800A << 16);
    // 0x150BD798: addiu       $s5, $s5, -0x60
    ctx->r21 = ADD32(ctx->r21, -0X60);
    // 0x150BD79C: addiu       $s3, $s3, -0x90
    ctx->r19 = ADD32(ctx->r19, -0X90);
    // 0x150BD7A0: addiu       $s4, $sp, 0xD8
    ctx->r20 = ADD32(ctx->r29, 0XD8);
    // 0x150BD7A4: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x150BD7A8: addiu       $s7, $sp, 0xD8
    ctx->r23 = ADD32(ctx->r29, 0XD8);
L_150BD7AC:
    // 0x150BD7AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150BD7B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150BD7B4: jal         0x15143134
    // 0x150BD7B8: lw          $a2, 0x1D4($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1D4);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x150BD7B8: lw          $a2, 0x1D4($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1D4);
    after_0:
    // 0x150BD7BC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150BD7C0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x150BD7C4: jal         0x15143134
    // 0x150BD7C8: lw          $a2, 0x1D4($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1D4);
    func_15143134(rdram, ctx);
        goto after_1;
    // 0x150BD7C8: lw          $a2, 0x1D4($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1D4);
    after_1:
    // 0x150BD7CC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x150BD7D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150BD7D4: jal         0x15143134
    // 0x150BD7D8: lw          $a2, 0x1D4($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1D4);
    func_15143134(rdram, ctx);
        goto after_2;
    // 0x150BD7D8: lw          $a2, 0x1D4($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X1D4);
    after_2:
    // 0x150BD7DC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x150BD7E0: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x150BD7E4: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x150BD7E8: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x150BD7EC: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x150BD7F0: bne         $s0, $s7, L_150BD7AC
    if (ctx->r16 != ctx->r23) {
        // 0x150BD7F4: addiu       $s5, $s5, 0xC
        ctx->r21 = ADD32(ctx->r21, 0XC);
            goto L_150BD7AC;
    }
    // 0x150BD7F4: addiu       $s5, $s5, 0xC
    ctx->r21 = ADD32(ctx->r21, 0XC);
    // 0x150BD7F8: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x150BD7FC: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x150BD800: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150BD804: lwc1        $f16, 0xF4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x150BD808: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150BD80C: lwc1        $f6, 0xF8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x150BD810: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150BD814: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150BD818: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x150BD81C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150BD820: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x150BD824: jal         0x150ADA68
    // 0x150BD828: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150BD828: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x150BD82C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150BD830: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BD834: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x150BD838: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BD83C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150BD840: lwc1        $f10, 0x130($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X130);
    // 0x150BD844: lwc1        $f16, 0x134($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X134);
    // 0x150BD848: lbu         $t9, 0x13F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X13F);
    // 0x150BD84C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x150BD850: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150BD854: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x150BD858: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150BD85C: addiu       $t8, $sp, 0x8C
    ctx->r24 = ADD32(ctx->r29, 0X8C);
    // 0x150BD860: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x150BD864: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x150BD868: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x150BD86C: lwc1        $f12, 0x120($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X120);
    // 0x150BD870: lwc1        $f14, 0x124($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150BD874: lw          $a2, 0x128($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X128);
    // 0x150BD878: lw          $a3, 0x12C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X12C);
    // 0x150BD87C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150BD880: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x150BD884: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x150BD888: jal         0x1514C470
    // 0x150BD88C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_1514C470(rdram, ctx);
        goto after_4;
    // 0x150BD88C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x150BD890: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x150BD894: lwc1        $f18, 0xFC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x150BD898: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x150BD89C: lwc1        $f8, 0x100($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X100);
    // 0x150BD8A0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x150BD8A4: lwc1        $f18, 0x104($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X104);
    // 0x150BD8A8: lwc1        $f16, 0xD4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x150BD8AC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150BD8B0: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x150BD8B4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x150BD8B8: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x150BD8BC: jal         0x150ADA68
    // 0x150BD8C0: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150BD8C0: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x150BD8C4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150BD8C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BD8CC: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x150BD8D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BD8D4: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150BD8D8: lwc1        $f6, 0x10C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x150BD8DC: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
    // 0x150BD8E0: lbu         $t2, 0x13F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X13F);
    // 0x150BD8E4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x150BD8E8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150BD8EC: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x150BD8F0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150BD8F4: addiu       $t1, $sp, 0x98
    ctx->r9 = ADD32(ctx->r29, 0X98);
    // 0x150BD8F8: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x150BD8FC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x150BD900: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x150BD904: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x150BD908: lwc1        $f14, 0x130($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X130);
    // 0x150BD90C: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    // 0x150BD910: lw          $a3, 0x108($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X108);
    // 0x150BD914: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150BD918: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x150BD91C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x150BD920: jal         0x1514C470
    // 0x150BD924: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    func_1514C470(rdram, ctx);
        goto after_6;
    // 0x150BD924: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_6:
L_150BD928:
    // 0x150BD928: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_150BD92C:
    // 0x150BD92C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x150BD930: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x150BD934: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x150BD938: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x150BD93C: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x150BD940: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x150BD944: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x150BD948: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x150BD94C: jr          $ra
    // 0x150BD950: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    return;
    // 0x150BD950: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_151A4E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A4E9C: lhu         $t6, 0x1E($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1E);
    // 0x151A4EA0: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x151A4EA4: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x151A4EA8: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x151A4EAC: sh          $t7, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r15;
    // 0x151A4EB0: lbu         $t8, 0x30($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X30);
    // 0x151A4EB4: ori         $t0, $t8, 0x1
    ctx->r8 = ctx->r24 | 0X1;
    // 0x151A4EB8: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x151A4EBC: sb          $t0, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r8;
    // 0x151A4EC0: sb          $t1, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r9;
    // 0x151A4EC4: jr          $ra
    // 0x151A4EC8: nop

    return;
    return;
    // 0x151A4EC8: nop

;}
RECOMP_FUNC void func_15002008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15002008: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x1500200C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x15002010: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x15002014: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x15002018: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x1500201C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15002020: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15002024: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15002028: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x1500202C: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x15002030: lw          $s5, 0xC8($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XC8);
    // 0x15002034: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x15002038: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x1500203C: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x15002040: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x15002044: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x15002048: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x1500204C: subu        $t7, $s2, $s3
    ctx->r15 = SUB32(ctx->r18, ctx->r19);
    // 0x15002050: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x15002054: subu        $t6, $s0, $s1
    ctx->r14 = SUB32(ctx->r16, ctx->r17);
    // 0x15002058: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1500205C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15002060: lui         $at, 0x46FA
    ctx->r1 = S32(0X46FA << 16);
    // 0x15002064: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15002068: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
    // 0x1500206C: lhu         $s4, 0x0($s5)
    ctx->r20 = MEM_HU(ctx->r21, 0X0);
    // 0x15002070: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15002074: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15002078: jal         0x150492CC
    // 0x1500207C: nop

    func_150492CC(rdram, ctx);
        goto after_0;
    // 0x1500207C: nop

    after_0:
    // 0x15002080: blez        $s4, L_1500220C
    if (SIGNED(ctx->r20) <= 0) {
        // 0x15002084: addiu       $s7, $s5, 0x2
        ctx->r23 = ADD32(ctx->r21, 0X2);
            goto L_1500220C;
    }
    // 0x15002084: addiu       $s7, $s5, 0x2
    ctx->r23 = ADD32(ctx->r21, 0X2);
    // 0x15002088: sll         $t8, $s4, 1
    ctx->r24 = S32(ctx->r20 << 1);
    // 0x1500208C: addu        $t9, $t8, $s5
    ctx->r25 = ADD32(ctx->r24, ctx->r21);
    // 0x15002090: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x15002094: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x15002098: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x1500209C: ori         $s4, $s4, 0x1
    ctx->r20 = ctx->r20 | 0X1;
    // 0x150020A0: sw          $t0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r8;
    // 0x150020A4: addiu       $s5, $sp, 0x9C
    ctx->r21 = ADD32(ctx->r29, 0X9C);
    // 0x150020A8: lhu         $s6, 0x0($s7)
    ctx->r22 = MEM_HU(ctx->r23, 0X0);
L_150020AC:
    // 0x150020AC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150020B0: lw          $t1, -0x41C4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X41C4);
    // 0x150020B4: sll         $t2, $s6, 2
    ctx->r10 = S32(ctx->r22 << 2);
    // 0x150020B8: subu        $t2, $t2, $s6
    ctx->r10 = SUB32(ctx->r10, ctx->r22);
    // 0x150020BC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x150020C0: addiu       $v0, $sp, 0x78
    ctx->r2 = ADD32(ctx->r29, 0X78);
    // 0x150020C4: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
L_150020C8:
    // 0x150020C8: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x150020CC: addu        $t4, $s1, $s0
    ctx->r12 = ADD32(ctx->r17, ctx->r16);
    // 0x150020D0: sltu        $at, $a0, $s4
    ctx->r1 = ctx->r4 < ctx->r20 ? 1 : 0;
    // 0x150020D4: bnel        $at, $zero, L_15002150
    if (ctx->r1 != 0) {
        // 0x150020D8: swc1        $f20, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
            goto L_15002150;
    }
    goto skip_0;
    // 0x150020D8: swc1        $f20, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
    skip_0:
    // 0x150020DC: lh          $t3, 0x0($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X0);
    // 0x150020E0: bgez        $t4, L_150020F0
    if (SIGNED(ctx->r12) >= 0) {
        // 0x150020E4: sra         $t5, $t4, 1
        ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
            goto L_150020F0;
    }
    // 0x150020E4: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x150020E8: addiu       $at, $t4, 0x1
    ctx->r1 = ADD32(ctx->r12, 0X1);
    // 0x150020EC: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_150020F0:
    // 0x150020F0: subu        $t6, $t3, $t5
    ctx->r14 = SUB32(ctx->r11, ctx->r13);
    // 0x150020F4: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x150020F8: addu        $t1, $s3, $s2
    ctx->r9 = ADD32(ctx->r19, ctx->r18);
    // 0x150020FC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15002100: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x15002104: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15002108: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x1500210C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x15002110: nop

    // 0x15002114: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15002118: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x1500211C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x15002120: lh          $t0, 0x4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X4);
    // 0x15002124: bgez        $t1, L_15002134
    if (SIGNED(ctx->r9) >= 0) {
        // 0x15002128: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_15002134;
    }
    // 0x15002128: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x1500212C: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x15002130: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_15002134:
    // 0x15002134: subu        $t4, $t0, $t2
    ctx->r12 = SUB32(ctx->r8, ctx->r10);
    // 0x15002138: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1500213C: nop

    // 0x15002140: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15002144: b           L_15002158
    // 0x15002148: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
        goto L_15002158;
    // 0x15002148: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x1500214C: swc1        $f20, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f20.u32l;
L_15002150:
    // 0x15002150: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x15002154: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
L_15002158:
    // 0x15002158: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x1500215C: bne         $v0, $s5, L_150020C8
    if (ctx->r2 != ctx->r21) {
        // 0x15002160: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_150020C8;
    }
    // 0x15002160: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15002164: addiu       $t3, $sp, 0x78
    ctx->r11 = ADD32(ctx->r29, 0X78);
    // 0x15002168: addiu       $t6, $t3, 0x24
    ctx->r14 = ADD32(ctx->r11, 0X24);
    // 0x1500216C: or          $t7, $sp, $zero
    ctx->r15 = ctx->r29 | 0;
L_15002170:
    // 0x15002170: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x15002174: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x15002178: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x1500217C: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x15002180: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x15002184: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x15002188: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x1500218C: bne         $t3, $t6, L_15002170
    if (ctx->r11 != ctx->r14) {
        // 0x15002190: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_15002170;
    }
    // 0x15002190: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x15002194: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x15002198: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x1500219C: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x150021A0: jal         0x15049260
    // 0x150021A4: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    func_15049260(rdram, ctx);
        goto after_1;
    // 0x150021A4: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    after_1:
    // 0x150021A8: bne         $v0, $zero, L_150021FC
    if (ctx->r2 != 0) {
        // 0x150021AC: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_150021FC;
    }
    // 0x150021AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150021B0: bne         $fp, $at, L_150021D0
    if (ctx->r30 != ctx->r1) {
        // 0x150021B4: subu        $v0, $s6, $fp
        ctx->r2 = SUB32(ctx->r22, ctx->r30);
            goto L_150021D0;
    }
    // 0x150021B4: subu        $v0, $s6, $fp
    ctx->r2 = SUB32(ctx->r22, ctx->r30);
    // 0x150021B8: ori         $a0, $s6, 0x8000
    ctx->r4 = ctx->r22 | 0X8000;
    // 0x150021BC: andi        $t8, $a0, 0xFFFF
    ctx->r24 = ctx->r4 & 0XFFFF;
    // 0x150021C0: jal         0x15001B8C
    // 0x150021C4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_15001B8C(rdram, ctx);
        goto after_2;
    // 0x150021C4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x150021C8: b           L_150021FC
    // 0x150021CC: or          $fp, $s6, $zero
    ctx->r30 = ctx->r22 | 0;
        goto L_150021FC;
    // 0x150021CC: or          $fp, $s6, $zero
    ctx->r30 = ctx->r22 | 0;
L_150021D0:
    // 0x150021D0: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x150021D4: beq         $at, $zero, L_150021EC
    if (ctx->r1 == 0) {
        // 0x150021D8: ori         $a0, $s6, 0x8000
        ctx->r4 = ctx->r22 | 0X8000;
            goto L_150021EC;
    }
    // 0x150021D8: ori         $a0, $s6, 0x8000
    ctx->r4 = ctx->r22 | 0X8000;
    // 0x150021DC: jal         0x15001B5C
    // 0x150021E0: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_15001B5C(rdram, ctx);
        goto after_3;
    // 0x150021E0: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_3:
    // 0x150021E4: b           L_150021FC
    // 0x150021E8: or          $fp, $s6, $zero
    ctx->r30 = ctx->r22 | 0;
        goto L_150021FC;
    // 0x150021E8: or          $fp, $s6, $zero
    ctx->r30 = ctx->r22 | 0;
L_150021EC:
    // 0x150021EC: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x150021F0: jal         0x15001B8C
    // 0x150021F4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_15001B8C(rdram, ctx);
        goto after_4;
    // 0x150021F4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_4:
    // 0x150021F8: or          $fp, $s6, $zero
    ctx->r30 = ctx->r22 | 0;
L_150021FC:
    // 0x150021FC: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x15002200: addiu       $s7, $s7, 0x2
    ctx->r23 = ADD32(ctx->r23, 0X2);
    // 0x15002204: bnel        $t1, $s7, L_150020AC
    if (ctx->r9 != ctx->r23) {
        // 0x15002208: lhu         $s6, 0x0($s7)
        ctx->r22 = MEM_HU(ctx->r23, 0X0);
            goto L_150020AC;
    }
    goto skip_1;
    // 0x15002208: lhu         $s6, 0x0($s7)
    ctx->r22 = MEM_HU(ctx->r23, 0X0);
    skip_1:
L_1500220C:
    // 0x1500220C: jal         0x15001B5C
    // 0x15002210: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15001B5C(rdram, ctx);
        goto after_5;
    // 0x15002210: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x15002214: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x15002218: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x1500221C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x15002220: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x15002224: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x15002228: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x1500222C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x15002230: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x15002234: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x15002238: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x1500223C: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x15002240: jr          $ra
    // 0x15002244: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x15002244: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_151E557C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E557C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x151E5580: addiu       $v0, $v0, 0x4060
    ctx->r2 = ADD32(ctx->r2, 0X4060);
    // 0x151E5584: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151E5588: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151E558C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x151E5590: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x151E5594: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x151E5598: sb          $t7, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r15;
    // 0x151E559C: sb          $t8, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r24;
    // 0x151E55A0: jr          $ra
    // 0x151E55A4: nop

    return;
    return;
    // 0x151E55A4: nop

;}
RECOMP_FUNC void func_15089BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15089BC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15089BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15089BC8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15089BCC: lw          $a0, 0x2E48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2E48);
    // 0x15089BD0: jal         0x1509B570
    // 0x15089BD4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_1509B570(rdram, ctx);
        goto after_0;
    // 0x15089BD4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x15089BD8: bne         $v0, $zero, L_15089BE8
    if (ctx->r2 != 0) {
        // 0x15089BDC: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_15089BE8;
    }
    // 0x15089BDC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x15089BE0: b           L_15089F8C
    // 0x15089BE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15089F8C;
    // 0x15089BE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15089BE8:
    // 0x15089BE8: addiu       $t6, $a0, -0xB7
    ctx->r14 = ADD32(ctx->r4, -0XB7);
    // 0x15089BEC: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x15089BF0: beq         $at, $zero, L_15089C60
    if (ctx->r1 == 0) {
        // 0x15089BF4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_15089C60;
    }
    // 0x15089BF4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15089BF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15089BFC: addu        $at, $at, $t6
    gpr jr_addend_15089C04 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15089C00: lw          $t6, -0x25DC($at)
    ctx->r14 = ADD32(ctx->r1, -0X25DC);
    // 0x15089C04: jr          $t6
    // 0x15089C08: nop

    switch (jr_addend_15089C04 >> 2) {
        case 0: goto L_15089C3C; break;
        case 1: goto L_15089C18; break;
        case 2: goto L_15089C0C; break;
        case 3: goto L_15089C30; break;
        case 4: goto L_15089C24; break;
        case 5: goto L_15089C60; break;
        case 6: goto L_15089C48; break;
        case 7: goto L_15089C54; break;
        default: switch_error(__func__, 0x15089C04, 0x8009DA24);
    }
    // 0x15089C08: nop

L_15089C0C:
    // 0x15089C0C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15089C10: b           L_15089C74
    // 0x15089C14: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
        goto L_15089C74;
    // 0x15089C14: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
L_15089C18:
    // 0x15089C18: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15089C1C: b           L_15089C74
    // 0x15089C20: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
        goto L_15089C74;
    // 0x15089C20: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
L_15089C24:
    // 0x15089C24: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15089C28: b           L_15089C74
    // 0x15089C2C: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
        goto L_15089C74;
    // 0x15089C2C: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
L_15089C30:
    // 0x15089C30: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15089C34: b           L_15089C74
    // 0x15089C38: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
        goto L_15089C74;
    // 0x15089C38: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
L_15089C3C:
    // 0x15089C3C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15089C40: b           L_15089C74
    // 0x15089C44: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
        goto L_15089C74;
    // 0x15089C44: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
L_15089C48:
    // 0x15089C48: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15089C4C: b           L_15089C74
    // 0x15089C50: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
        goto L_15089C74;
    // 0x15089C50: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
L_15089C54:
    // 0x15089C54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15089C58: b           L_15089C74
    // 0x15089C5C: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
        goto L_15089C74;
    // 0x15089C5C: sw          $v0, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = ctx->r2;
L_15089C60:
    // 0x15089C60: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15089C64: addiu       $v1, $v1, 0x23B0
    ctx->r3 = ADD32(ctx->r3, 0X23B0);
    // 0x15089C68: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x15089C6C: b           L_15089F8C
    // 0x15089C70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15089F8C;
    // 0x15089C70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15089C74:
    // 0x15089C74: jal         0x1508BC20
    // 0x15089C78: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_1508BC20(rdram, ctx);
        goto after_1;
    // 0x15089C78: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x15089C7C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15089C80: addiu       $v1, $v1, 0x23B0
    ctx->r3 = ADD32(ctx->r3, 0X23B0);
    // 0x15089C84: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15089C88: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x15089C8C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x15089C90: sb          $zero, 0x1700($t7)
    MEM_B(0X1700, ctx->r15) = 0;
    // 0x15089C94: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x15089C98: addiu       $a1, $a1, 0xBD0
    ctx->r5 = ADD32(ctx->r5, 0XBD0);
    // 0x15089C9C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x15089CA0: sb          $zero, 0x1701($t8)
    MEM_B(0X1701, ctx->r24) = 0;
    // 0x15089CA4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x15089CA8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15089CAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15089CB0: sb          $zero, 0x1703($t9)
    MEM_B(0X1703, ctx->r25) = 0;
    // 0x15089CB4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x15089CB8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x15089CBC: sb          $zero, 0x1702($t0)
    MEM_B(0X1702, ctx->r8) = 0;
    // 0x15089CC0: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x15089CC4: sb          $zero, 0x1704($t1)
    MEM_B(0X1704, ctx->r9) = 0;
    // 0x15089CC8: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x15089CCC: sh          $a0, 0x16BC($t2)
    MEM_H(0X16BC, ctx->r10) = ctx->r4;
    // 0x15089CD0: lb          $t3, 0x0($a1)
    ctx->r11 = MEM_B(ctx->r5, 0X0);
    // 0x15089CD4: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x15089CD8: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x15089CDC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x15089CE0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x15089CE4: lwc1        $f4, 0x72B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X72B0);
    // 0x15089CE8: addiu       $a0, $a0, 0x72F8
    ctx->r4 = ADD32(ctx->r4, 0X72F8);
    // 0x15089CEC: swc1        $f4, 0x16B8($t5)
    MEM_W(0X16B8, ctx->r13) = ctx->f4.u32l;
    // 0x15089CF0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15089CF4: sb          $zero, 0x1745($t6)
    MEM_B(0X1745, ctx->r14) = 0;
    // 0x15089CF8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15089CFC: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x15089D00: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x15089D04: sw          $zero, 0x16C0($t8)
    MEM_W(0X16C0, ctx->r24) = 0;
    // 0x15089D08: lb          $t9, 0x0($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X0);
    // 0x15089D0C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x15089D10: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x15089D14: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x15089D18: lwc1        $f18, 0x0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X0);
    // 0x15089D1C: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x15089D20: swc1        $f18, 0x1868($t3)
    MEM_W(0X1868, ctx->r11) = ctx->f18.u32l;
    // 0x15089D24: beq         $v0, $a2, L_15089E64
    if (ctx->r2 == ctx->r6) {
        // 0x15089D28: lw          $t4, 0x0($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X0);
            goto L_15089E64;
    }
    // 0x15089D28: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
L_15089D2C:
    // 0x15089D2C: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x15089D30: swc1        $f0, 0x17A8($t5)
    MEM_W(0X17A8, ctx->r13) = ctx->f0.u32l;
    // 0x15089D34: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15089D38: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x15089D3C: swc1        $f0, 0x17E8($t7)
    MEM_W(0X17E8, ctx->r15) = ctx->f0.u32l;
    // 0x15089D40: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x15089D44: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x15089D48: swc1        $f0, 0x1828($t9)
    MEM_W(0X1828, ctx->r25) = ctx->f0.u32l;
    // 0x15089D4C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x15089D50: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x15089D54: sw          $zero, 0x16C4($t1)
    MEM_W(0X16C4, ctx->r9) = 0;
    // 0x15089D58: lb          $t2, 0x0($a1)
    ctx->r10 = MEM_B(ctx->r5, 0X0);
    // 0x15089D5C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x15089D60: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15089D64: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x15089D68: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x15089D6C: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x15089D70: swc1        $f18, 0x186C($t6)
    MEM_W(0X186C, ctx->r14) = ctx->f18.u32l;
    // 0x15089D74: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15089D78: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x15089D7C: swc1        $f0, 0x17AC($t8)
    MEM_W(0X17AC, ctx->r24) = ctx->f0.u32l;
    // 0x15089D80: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x15089D84: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x15089D88: swc1        $f0, 0x17EC($t0)
    MEM_W(0X17EC, ctx->r8) = ctx->f0.u32l;
    // 0x15089D8C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x15089D90: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x15089D94: swc1        $f0, 0x182C($t2)
    MEM_W(0X182C, ctx->r10) = ctx->f0.u32l;
    // 0x15089D98: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x15089D9C: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x15089DA0: sw          $zero, 0x16C8($t4)
    MEM_W(0X16C8, ctx->r12) = 0;
    // 0x15089DA4: lb          $t5, 0x0($a1)
    ctx->r13 = MEM_B(ctx->r5, 0X0);
    // 0x15089DA8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x15089DAC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x15089DB0: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x15089DB4: lwc1        $f18, 0x0($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X0);
    // 0x15089DB8: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x15089DBC: swc1        $f18, 0x1870($t9)
    MEM_W(0X1870, ctx->r25) = ctx->f18.u32l;
    // 0x15089DC0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x15089DC4: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x15089DC8: swc1        $f0, 0x17B0($t1)
    MEM_W(0X17B0, ctx->r9) = ctx->f0.u32l;
    // 0x15089DCC: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x15089DD0: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x15089DD4: swc1        $f0, 0x17F0($t3)
    MEM_W(0X17F0, ctx->r11) = ctx->f0.u32l;
    // 0x15089DD8: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x15089DDC: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x15089DE0: swc1        $f0, 0x1830($t5)
    MEM_W(0X1830, ctx->r13) = ctx->f0.u32l;
    // 0x15089DE4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15089DE8: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x15089DEC: sw          $zero, 0x16CC($t7)
    MEM_W(0X16CC, ctx->r15) = 0;
    // 0x15089DF0: lb          $t8, 0x0($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X0);
    // 0x15089DF4: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x15089DF8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15089DFC: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x15089E00: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x15089E04: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x15089E08: swc1        $f18, 0x1874($t2)
    MEM_W(0X1874, ctx->r10) = ctx->f18.u32l;
    // 0x15089E0C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x15089E10: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x15089E14: swc1        $f0, 0x17B4($t4)
    MEM_W(0X17B4, ctx->r12) = ctx->f0.u32l;
    // 0x15089E18: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x15089E1C: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x15089E20: swc1        $f0, 0x17F4($t6)
    MEM_W(0X17F4, ctx->r14) = ctx->f0.u32l;
    // 0x15089E24: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15089E28: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x15089E2C: swc1        $f0, 0x1834($t8)
    MEM_W(0X1834, ctx->r24) = ctx->f0.u32l;
    // 0x15089E30: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15089E34: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x15089E38: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x15089E3C: sw          $zero, 0x16C0($t8)
    MEM_W(0X16C0, ctx->r24) = 0;
    // 0x15089E40: lb          $t9, 0x0($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X0);
    // 0x15089E44: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x15089E48: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x15089E4C: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x15089E50: lwc1        $f18, 0x0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X0);
    // 0x15089E54: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x15089E58: swc1        $f18, 0x1868($t3)
    MEM_W(0X1868, ctx->r11) = ctx->f18.u32l;
    // 0x15089E5C: bne         $v0, $a2, L_15089D2C
    if (ctx->r2 != ctx->r6) {
        // 0x15089E60: lw          $t4, 0x0($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X0);
            goto L_15089D2C;
    }
    // 0x15089E60: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
L_15089E64:
    // 0x15089E64: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x15089E68: swc1        $f0, 0x17A8($t5)
    MEM_W(0X17A8, ctx->r13) = ctx->f0.u32l;
    // 0x15089E6C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15089E70: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x15089E74: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x15089E78: swc1        $f0, 0x17E8($t7)
    MEM_W(0X17E8, ctx->r15) = ctx->f0.u32l;
    // 0x15089E7C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x15089E80: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x15089E84: swc1        $f0, 0x1828($t9)
    MEM_W(0X1828, ctx->r25) = ctx->f0.u32l;
    // 0x15089E88: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x15089E8C: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x15089E90: sw          $zero, 0x16C4($t1)
    MEM_W(0X16C4, ctx->r9) = 0;
    // 0x15089E94: lb          $t2, 0x0($a1)
    ctx->r10 = MEM_B(ctx->r5, 0X0);
    // 0x15089E98: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x15089E9C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15089EA0: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x15089EA4: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x15089EA8: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x15089EAC: swc1        $f18, 0x186C($t6)
    MEM_W(0X186C, ctx->r14) = ctx->f18.u32l;
    // 0x15089EB0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15089EB4: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x15089EB8: swc1        $f0, 0x17AC($t8)
    MEM_W(0X17AC, ctx->r24) = ctx->f0.u32l;
    // 0x15089EBC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x15089EC0: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x15089EC4: swc1        $f0, 0x17EC($t0)
    MEM_W(0X17EC, ctx->r8) = ctx->f0.u32l;
    // 0x15089EC8: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x15089ECC: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x15089ED0: swc1        $f0, 0x182C($t2)
    MEM_W(0X182C, ctx->r10) = ctx->f0.u32l;
    // 0x15089ED4: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x15089ED8: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x15089EDC: sw          $zero, 0x16C8($t4)
    MEM_W(0X16C8, ctx->r12) = 0;
    // 0x15089EE0: lb          $t5, 0x0($a1)
    ctx->r13 = MEM_B(ctx->r5, 0X0);
    // 0x15089EE4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x15089EE8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x15089EEC: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x15089EF0: lwc1        $f18, 0x0($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X0);
    // 0x15089EF4: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x15089EF8: swc1        $f18, 0x1870($t9)
    MEM_W(0X1870, ctx->r25) = ctx->f18.u32l;
    // 0x15089EFC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x15089F00: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x15089F04: swc1        $f0, 0x17B0($t1)
    MEM_W(0X17B0, ctx->r9) = ctx->f0.u32l;
    // 0x15089F08: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x15089F0C: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x15089F10: swc1        $f0, 0x17F0($t3)
    MEM_W(0X17F0, ctx->r11) = ctx->f0.u32l;
    // 0x15089F14: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x15089F18: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x15089F1C: swc1        $f0, 0x1830($t5)
    MEM_W(0X1830, ctx->r13) = ctx->f0.u32l;
    // 0x15089F20: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15089F24: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x15089F28: sw          $zero, 0x16CC($t7)
    MEM_W(0X16CC, ctx->r15) = 0;
    // 0x15089F2C: lb          $t8, 0x0($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X0);
    // 0x15089F30: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x15089F34: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15089F38: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x15089F3C: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x15089F40: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x15089F44: swc1        $f18, 0x1874($t2)
    MEM_W(0X1874, ctx->r10) = ctx->f18.u32l;
    // 0x15089F48: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x15089F4C: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x15089F50: swc1        $f0, 0x17B4($t4)
    MEM_W(0X17B4, ctx->r12) = ctx->f0.u32l;
    // 0x15089F54: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x15089F58: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x15089F5C: swc1        $f0, 0x17F4($t6)
    MEM_W(0X17F4, ctx->r14) = ctx->f0.u32l;
    // 0x15089F60: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15089F64: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x15089F68: swc1        $f0, 0x1834($t8)
    MEM_W(0X1834, ctx->r24) = ctx->f0.u32l;
    // 0x15089F6C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x15089F70: lb          $t9, 0x0($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X0);
    // 0x15089F74: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x15089F78: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x15089F7C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x15089F80: lb          $t0, 0x72F0($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X72F0);
    // 0x15089F84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15089F88: sw          $t0, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r8;
L_15089F8C:
    // 0x15089F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15089F90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15089F94: jr          $ra
    // 0x15089F98: nop

    return;
    return;
    // 0x15089F98: nop

;}
RECOMP_FUNC void func_1507A774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507A778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507A77C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507A780: lbu         $t6, 0x1891($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1891);
    // 0x1507A784: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1507A788: lbu         $t8, 0x1892($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1892);
    // 0x1507A78C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1507A790: lw          $t0, -0x1610($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1610);
    // 0x1507A794: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x1507A798: or          $v0, $t7, $t8
    ctx->r2 = ctx->r15 | ctx->r24;
    // 0x1507A79C: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x1507A7A0: bne         $t0, $t9, L_1507A7B0
    if (ctx->r8 != ctx->r25) {
        // 0x1507A7A4: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_1507A7B0;
    }
    // 0x1507A7A4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507A7A8: jal         0x15075400
    // 0x1507A7AC: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x1507A7AC: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
L_1507A7B0:
    // 0x1507A7B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507A7B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507A7B8: jr          $ra
    // 0x1507A7BC: nop

    return;
    return;
    // 0x1507A7BC: nop

;}
RECOMP_FUNC void func_150344A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150344A0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150344A4: lwc1        $f0, 0x7D1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7D1C);
    // 0x150344A8: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x150344AC: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x150344B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150344B4: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x150344B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150344BC: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x150344C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150344C4: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x150344C8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150344CC: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x150344D0: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x150344D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150344D8: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x150344DC: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x150344E0: lh          $v1, 0x2E6($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X2E6);
    // 0x150344E4: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x150344E8: sh          $t1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r9;
    // 0x150344EC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x150344F0: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x150344F4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150344F8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150344FC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15034500: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x15034504: nop

    // 0x15034508: sh          $t0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r8;
    // 0x1503450C: lh          $v1, 0x2E4($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X2E4);
    // 0x15034510: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x15034514: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x15034518: nop

    // 0x1503451C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15034520: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15034524: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15034528: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x1503452C: nop

    // 0x15034530: sh          $t3, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r11;
    // 0x15034534: jr          $ra
    // 0x15034538: nop

    return;
    return;
    // 0x15034538: nop

;}
RECOMP_FUNC void func_1510A40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510A40C: addiu       $sp, $sp, -0x148
    ctx->r29 = ADD32(ctx->r29, -0X148);
    // 0x1510A410: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x1510A414: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1510A418: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x1510A41C: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x1510A420: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x1510A424: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x1510A428: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x1510A42C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x1510A430: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x1510A434: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x1510A438: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x1510A43C: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x1510A440: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x1510A444: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x1510A448: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x1510A44C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x1510A450: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1510A454: lw          $s0, 0x28($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X28);
    // 0x1510A458: addiu       $s1, $s2, 0x28
    ctx->r17 = ADD32(ctx->r18, 0X28);
    // 0x1510A45C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x1510A460: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x1510A464: beq         $t6, $zero, L_1510A47C
    if (ctx->r14 == 0) {
        // 0x1510A468: nop
    
            goto L_1510A47C;
    }
    // 0x1510A468: nop

    // 0x1510A46C: lbu         $t7, 0x4($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X4);
    // 0x1510A470: lbu         $t8, 0x3B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3B);
    // 0x1510A474: beq         $t7, $t8, L_1510A484
    if (ctx->r15 == ctx->r24) {
        // 0x1510A478: nop
    
            goto L_1510A484;
    }
    // 0x1510A478: nop

L_1510A47C:
    // 0x1510A47C: b           L_1510A828
    // 0x1510A480: sh          $t9, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r25;
        goto L_1510A828;
    // 0x1510A480: sh          $t9, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r25;
L_1510A484:
    // 0x1510A484: jal         0x150ADA68
    // 0x1510A488: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x1510A488: nop

    after_0:
    // 0x1510A48C: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x1510A490: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x1510A494: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1510A498: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1510A49C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1510A4A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1510A4A4: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1510A4A8: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x1510A4AC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1510A4B0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1510A4B4: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x1510A4B8: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x1510A4BC: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x1510A4C0: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x1510A4C4: nop

    // 0x1510A4C8: bc1fl       L_1510A800
    if (!c1cs) {
        // 0x1510A4CC: c.lt.s      $f22, $f2
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
            goto L_1510A800;
    }
    goto skip_0;
    // 0x1510A4CC: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    skip_0:
    // 0x1510A4D0: lw          $v0, 0x1D4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1D4);
    // 0x1510A4D4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x1510A4D8: addiu       $a0, $a0, 0x2604
    ctx->r4 = ADD32(ctx->r4, 0X2604);
    // 0x1510A4DC: beq         $v0, $zero, L_1510A7FC
    if (ctx->r2 == 0) {
        // 0x1510A4E0: addiu       $s0, $v0, 0x240
        ctx->r16 = ADD32(ctx->r2, 0X240);
            goto L_1510A7FC;
    }
    // 0x1510A4E0: addiu       $s0, $v0, 0x240
    ctx->r16 = ADD32(ctx->r2, 0X240);
    // 0x1510A4E4: addiu       $a1, $sp, 0x128
    ctx->r5 = ADD32(ctx->r29, 0X128);
    // 0x1510A4E8: jal         0x15143134
    // 0x1510A4EC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_15143134(rdram, ctx);
        goto after_1;
    // 0x1510A4EC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x1510A4F0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x1510A4F4: addiu       $a0, $a0, 0x2610
    ctx->r4 = ADD32(ctx->r4, 0X2610);
    // 0x1510A4F8: addiu       $a1, $sp, 0x134
    ctx->r5 = ADD32(ctx->r29, 0X134);
    // 0x1510A4FC: jal         0x15143134
    // 0x1510A500: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_15143134(rdram, ctx);
        goto after_2;
    // 0x1510A500: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x1510A504: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x1510A508: addiu       $a0, $a0, 0x261C
    ctx->r4 = ADD32(ctx->r4, 0X261C);
    // 0x1510A50C: addiu       $a1, $sp, 0x110
    ctx->r5 = ADD32(ctx->r29, 0X110);
    // 0x1510A510: jal         0x15143134
    // 0x1510A514: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_15143134(rdram, ctx);
        goto after_3;
    // 0x1510A514: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x1510A518: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x1510A51C: addiu       $a0, $a0, 0x2628
    ctx->r4 = ADD32(ctx->r4, 0X2628);
    // 0x1510A520: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x1510A524: jal         0x15143134
    // 0x1510A528: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_15143134(rdram, ctx);
        goto after_4;
    // 0x1510A528: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x1510A52C: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
    // 0x1510A530: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x1510A534: lwc1        $f6, 0x114($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X114);
    // 0x1510A538: lwc1        $f18, 0x12C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1510A53C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1510A540: lwc1        $f10, 0x130($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X130);
    // 0x1510A544: lwc1        $f8, 0x118($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X118);
    // 0x1510A548: sub.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x1510A54C: swc1        $f16, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f16.u32l;
    // 0x1510A550: lwc1        $f18, 0x134($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X134);
    // 0x1510A554: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1510A558: lwc1        $f10, 0x138($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
    // 0x1510A55C: lwc1        $f8, 0x120($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1510A560: lwc1        $f6, 0x11C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1510A564: swc1        $f16, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f16.u32l;
    // 0x1510A568: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1510A56C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510A570: lwc1        $f8, 0x268C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X268C);
    // 0x1510A574: swc1        $f4, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f4.u32l;
    // 0x1510A578: sub.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x1510A57C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510A580: lwc1        $f10, 0x2690($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2690);
    // 0x1510A584: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510A588: lwc1        $f18, 0x13C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x1510A58C: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1510A590: lwc1        $f30, 0x2694($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X2694);
    // 0x1510A594: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1510A598: lui         $at, 0x42C0
    ctx->r1 = S32(0X42C0 << 16);
    // 0x1510A59C: swc1        $f4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f4.u32l;
    // 0x1510A5A0: addiu       $t0, $zero, 0x29
    ctx->r8 = ADD32(0, 0X29);
    // 0x1510A5A4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x1510A5A8: sub.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x1510A5AC: sb          $t0, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r8;
    // 0x1510A5B0: lui         $t2, 0x20
    ctx->r10 = S32(0X20 << 16);
    // 0x1510A5B4: lui         $at, 0x434B
    ctx->r1 = S32(0X434B << 16);
    // 0x1510A5B8: addiu       $t1, $zero, 0xE03
    ctx->r9 = ADD32(0, 0XE03);
    // 0x1510A5BC: ori         $t2, $t2, 0x5
    ctx->r10 = ctx->r10 | 0X5;
    // 0x1510A5C0: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x1510A5C4: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x1510A5C8: ori         $t5, $zero, 0xCE05
    ctx->r13 = 0 | 0XCE05;
    // 0x1510A5CC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x1510A5D0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x1510A5D4: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x1510A5D8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x1510A5DC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x1510A5E0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1510A5E4: sh          $t1, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r9;
    // 0x1510A5E8: sw          $t2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r10;
    // 0x1510A5EC: sh          $t3, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r11;
    // 0x1510A5F0: sh          $t4, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r12;
    // 0x1510A5F4: sw          $t5, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r13;
    // 0x1510A5F8: sb          $t6, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = ctx->r14;
    // 0x1510A5FC: sb          $t7, 0xFD($sp)
    MEM_B(0XFD, ctx->r29) = ctx->r15;
    // 0x1510A600: sb          $t8, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = ctx->r24;
    // 0x1510A604: sb          $t9, 0xFF($sp)
    MEM_B(0XFF, ctx->r29) = ctx->r25;
    // 0x1510A608: sb          $t0, 0x100($sp)
    MEM_B(0X100, ctx->r29) = ctx->r8;
    // 0x1510A60C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x1510A610: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x1510A614: addiu       $t2, $zero, 0xDD
    ctx->r10 = ADD32(0, 0XDD);
    // 0x1510A618: addiu       $t3, $zero, 0xD3
    ctx->r11 = ADD32(0, 0XD3);
    // 0x1510A61C: addiu       $t4, $zero, 0xCD
    ctx->r12 = ADD32(0, 0XCD);
    // 0x1510A620: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1510A624: addiu       $t6, $zero, 0x57
    ctx->r14 = ADD32(0, 0X57);
    // 0x1510A628: addiu       $t7, $zero, 0x55
    ctx->r15 = ADD32(0, 0X55);
    // 0x1510A62C: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x1510A630: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1510A634: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1510A638: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1510A63C: swc1        $f16, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f16.u32l;
    // 0x1510A640: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
    // 0x1510A644: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x1510A648: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x1510A64C: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x1510A650: sb          $zero, 0x101($sp)
    MEM_B(0X101, ctx->r29) = 0;
    // 0x1510A654: sh          $t1, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r9;
    // 0x1510A658: sb          $t2, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r10;
    // 0x1510A65C: sb          $t3, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r11;
    // 0x1510A660: sb          $t4, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r12;
    // 0x1510A664: sb          $t5, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r13;
    // 0x1510A668: sb          $t6, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r14;
    // 0x1510A66C: sb          $t7, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r15;
    // 0x1510A670: sb          $t8, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = ctx->r24;
    // 0x1510A674: sb          $t9, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = ctx->r25;
    // 0x1510A678: sb          $t0, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r8;
    // 0x1510A67C: addiu       $fp, $zero, -0x41
    ctx->r30 = ADD32(0, -0X41);
    // 0x1510A680: addiu       $s7, $zero, -0x81
    ctx->r23 = ADD32(0, -0X81);
    // 0x1510A684: addiu       $s6, $sp, 0x98
    ctx->r22 = ADD32(ctx->r29, 0X98);
    // 0x1510A688: addiu       $s5, $sp, 0x9C
    ctx->r21 = ADD32(ctx->r29, 0X9C);
    // 0x1510A68C: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x1510A690: addiu       $s3, $sp, 0xCC
    ctx->r19 = ADD32(ctx->r29, 0XCC);
    // 0x1510A694: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x1510A698: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x1510A69C: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x1510A6A0: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x1510A6A4: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x1510A6A8: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
L_1510A6AC:
    // 0x1510A6AC: jal         0x150ADA20
    // 0x1510A6B0: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1510A6B0: nop

    after_5:
    // 0x1510A6B4: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x1510A6B8: beq         $t1, $zero, L_1510A6D0
    if (ctx->r9 == 0) {
        // 0x1510A6BC: lw          $t4, 0xF4($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XF4);
            goto L_1510A6D0;
    }
    // 0x1510A6BC: lw          $t4, 0xF4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF4);
    // 0x1510A6C0: lw          $t2, 0xF4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF4);
    // 0x1510A6C4: ori         $t3, $t2, 0x40
    ctx->r11 = ctx->r10 | 0X40;
    // 0x1510A6C8: b           L_1510A6D8
    // 0x1510A6CC: sw          $t3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r11;
        goto L_1510A6D8;
    // 0x1510A6CC: sw          $t3, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r11;
L_1510A6D0:
    // 0x1510A6D0: and         $t5, $t4, $fp
    ctx->r13 = ctx->r12 & ctx->r30;
    // 0x1510A6D4: sw          $t5, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r13;
L_1510A6D8:
    // 0x1510A6D8: jal         0x150ADA20
    // 0x1510A6DC: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1510A6DC: nop

    after_6:
    // 0x1510A6E0: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x1510A6E4: beq         $t6, $zero, L_1510A6FC
    if (ctx->r14 == 0) {
        // 0x1510A6E8: lw          $t9, 0xF4($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XF4);
            goto L_1510A6FC;
    }
    // 0x1510A6E8: lw          $t9, 0xF4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF4);
    // 0x1510A6EC: lw          $t7, 0xF4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF4);
    // 0x1510A6F0: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x1510A6F4: b           L_1510A704
    // 0x1510A6F8: sw          $t8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r24;
        goto L_1510A704;
    // 0x1510A6F8: sw          $t8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r24;
L_1510A6FC:
    // 0x1510A6FC: and         $t0, $t9, $s7
    ctx->r8 = ctx->r25 & ctx->r23;
    // 0x1510A700: sw          $t0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r8;
L_1510A704:
    // 0x1510A704: jal         0x150ADA20
    // 0x1510A708: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1510A708: nop

    after_7:
    // 0x1510A70C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1510A710: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x1510A714: jal         0x150ADA68
    // 0x1510A718: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x1510A718: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    after_8:
    // 0x1510A71C: mul.s       $f16, $f0, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x1510A720: add.s       $f6, $f16, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f28.fl;
    // 0x1510A724: mul.s       $f20, $f6, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x1510A728: jal         0x150ADA20
    // 0x1510A72C: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x1510A72C: nop

    after_9:
    // 0x1510A730: andi        $t2, $v0, 0xF
    ctx->r10 = ctx->r2 & 0XF;
    // 0x1510A734: addiu       $t3, $t2, 0x14
    ctx->r11 = ADD32(ctx->r10, 0X14);
    // 0x1510A738: jal         0x150ADA68
    // 0x1510A73C: sh          $t3, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r11;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x1510A73C: sh          $t3, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r11;
    after_10:
    // 0x1510A740: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x1510A744: addiu       $t4, $sp, 0x128
    ctx->r12 = ADD32(ctx->r29, 0X128);
    // 0x1510A748: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1510A74C: addiu       $t9, $sp, 0x110
    ctx->r25 = ADD32(ctx->r29, 0X110);
    // 0x1510A750: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1510A754: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1510A758: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x1510A75C: add.s       $f4, $f18, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f24.fl;
    // 0x1510A760: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    // 0x1510A764: mflo        $v1
    ctx->r3 = lo;
    // 0x1510A768: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x1510A76C: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x1510A770: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x1510A774: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x1510A778: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1510A77C: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x1510A780: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x1510A784: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x1510A788: sw          $t8, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r24;
    // 0x1510A78C: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x1510A790: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x1510A794: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x1510A798: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1510A79C: mul.s       $f6, $f16, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x1510A7A0: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
    // 0x1510A7A4: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1510A7A8: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x1510A7AC: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    // 0x1510A7B0: lbu         $t0, 0x1($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X1);
    // 0x1510A7B4: lbu         $a3, 0xC($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0XC);
    // 0x1510A7B8: jal         0x15130374
    // 0x1510A7BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_15130374(rdram, ctx);
        goto after_11;
    // 0x1510A7BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_11:
    // 0x1510A7C0: beq         $v0, $zero, L_1510A7D4
    if (ctx->r2 == 0) {
        // 0x1510A7C4: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_1510A7D4;
    }
    // 0x1510A7C4: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x1510A7C8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x1510A7CC: jal         0x10022EC0
    // 0x1510A7D0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x1510A7D0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
L_1510A7D4:
    // 0x1510A7D4: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x1510A7D8: sub.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x1510A7DC: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    // 0x1510A7E0: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x1510A7E4: c.lt.s      $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f22.fl < ctx->f16.fl;
    // 0x1510A7E8: nop

    // 0x1510A7EC: bc1t        L_1510A6AC
    if (c1cs) {
        // 0x1510A7F0: nop
    
            goto L_1510A6AC;
    }
    // 0x1510A7F0: nop

    // 0x1510A7F4: b           L_1510A82C
    // 0x1510A7F8: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
        goto L_1510A82C;
    // 0x1510A7F8: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_1510A7FC:
    // 0x1510A7FC: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
L_1510A800:
    // 0x1510A800: nop

    // 0x1510A804: bc1fl       L_1510A82C
    if (!c1cs) {
        // 0x1510A808: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_1510A82C;
    }
    goto skip_1;
    // 0x1510A808: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_1:
    // 0x1510A80C: sub.s       $f6, $f2, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f22.fl;
L_1510A810:
    // 0x1510A810: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    // 0x1510A814: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x1510A818: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x1510A81C: nop

    // 0x1510A820: bc1tl       L_1510A810
    if (c1cs) {
        // 0x1510A824: sub.s       $f6, $f2, $f22
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f22.fl;
            goto L_1510A810;
    }
    goto skip_2;
    // 0x1510A824: sub.s       $f6, $f2, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f22.fl;
    skip_2:
L_1510A828:
    // 0x1510A828: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_1510A82C:
    // 0x1510A82C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1510A830: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x1510A834: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x1510A838: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x1510A83C: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x1510A840: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x1510A844: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1510A848: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x1510A84C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x1510A850: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x1510A854: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x1510A858: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x1510A85C: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x1510A860: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x1510A864: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x1510A868: jr          $ra
    // 0x1510A86C: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
    return;
    return;
    // 0x1510A86C: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
;}
RECOMP_FUNC void func_15079334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15079334: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15079338: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1507933C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15079340: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x15079344: lbu         $v0, 0xA8($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XA8);
    // 0x15079348: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1507934C: beq         $v0, $zero, L_15079388
    if (ctx->r2 == 0) {
        // 0x15079350: andi        $t7, $v0, 0x7F
        ctx->r15 = ctx->r2 & 0X7F;
            goto L_15079388;
    }
    // 0x15079350: andi        $t7, $v0, 0x7F
    ctx->r15 = ctx->r2 & 0X7F;
    // 0x15079354: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15079358: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1507935C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15079360: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x15079364: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15079368: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1507936C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15079370: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15079374: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15079378: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x1507937C: sw          $zero, 0x218($v1)
    MEM_W(0X218, ctx->r3) = 0;
    // 0x15079380: lbu         $t0, 0x1890($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X1890);
    // 0x15079384: sb          $t0, 0x232($v1)
    MEM_B(0X232, ctx->r3) = ctx->r8;
L_15079388:
    // 0x15079388: jr          $ra
    // 0x1507938C: nop

    return;
    return;
    // 0x1507938C: nop

;}
RECOMP_FUNC void func_150FF6B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FF6B4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150FF6B8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x150FF6BC: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x150FF6C0: addiu       $at, $zero, 0x98
    ctx->r1 = ADD32(0, 0X98);
    // 0x150FF6C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150FF6C8: bne         $t6, $at, L_150FF6D8
    if (ctx->r14 != ctx->r1) {
        // 0x150FF6CC: nop
    
            goto L_150FF6D8;
    }
    // 0x150FF6CC: nop

    // 0x150FF6D0: jr          $ra
    // 0x150FF6D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150FF6D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150FF6D8:
    // 0x150FF6D8: jr          $ra
    // 0x150FF6DC: nop

    return;
    return;
    // 0x150FF6DC: nop

;}
RECOMP_FUNC void func_151DAB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DAB58: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x151DAB5C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151DAB60: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x151DAB64: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x151DAB68: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x151DAB6C: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x151DAB70: lbu         $t6, 0xB3($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XB3);
    // 0x151DAB74: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151DAB78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151DAB7C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x151DAB80: lw          $t9, -0x330($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X330);
    // 0x151DAB84: jalr        $t9
    // 0x151DAB88: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151DAB88: nop

    after_0:
    // 0x151DAB8C: lbu         $t8, 0xC3($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XC3);
    // 0x151DAB90: lwc1        $f12, 0xB4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x151DAB94: sb          $v0, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r2;
    // 0x151DAB98: beq         $t8, $zero, L_151DABA8
    if (ctx->r24 == 0) {
        // 0x151DAB9C: addiu       $t3, $zero, 0x64
        ctx->r11 = ADD32(0, 0X64);
            goto L_151DABA8;
    }
    // 0x151DAB9C: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x151DABA0: b           L_151DABAC
    // 0x151DABA4: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
        goto L_151DABAC;
    // 0x151DABA4: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
L_151DABA8:
    // 0x151DABA8: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
L_151DABAC:
    // 0x151DABAC: lbu         $t5, 0xBB($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XBB);
    // 0x151DABB0: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x151DABB4: sll         $t1, $v0, 8
    ctx->r9 = S32(ctx->r2 << 8);
    // 0x151DABB8: addiu       $t2, $t1, 0x3
    ctx->r10 = ADD32(ctx->r9, 0X3);
    // 0x151DABBC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151DABC0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151DABC4: sh          $t2, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r10;
    // 0x151DABC8: sh          $t3, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r11;
    // 0x151DABCC: sb          $zero, 0x66($sp)
    MEM_B(0X66, ctx->r29) = 0;
    // 0x151DABD0: sb          $zero, 0x65($sp)
    MEM_B(0X65, ctx->r29) = 0;
    // 0x151DABD4: sb          $zero, 0x64($sp)
    MEM_B(0X64, ctx->r29) = 0;
    // 0x151DABD8: sb          $t4, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r12;
    // 0x151DABDC: sb          $t6, 0x99($sp)
    MEM_B(0X99, ctx->r29) = ctx->r14;
    // 0x151DABE0: sb          $t5, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r13;
    // 0x151DABE4: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x151DABE8: addiu       $t7, $sp, 0x70
    ctx->r15 = ADD32(ctx->r29, 0X70);
    // 0x151DABEC: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151DABF0: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151DABF4: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x151DABF8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151DABFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151DAC00: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    // 0x151DAC04: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x151DAC08: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x151DAC0C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x151DAC10: lbu         $t3, 0xB3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XB3);
    // 0x151DAC14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151DAC18: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151DAC1C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x151DAC20: lbu         $t4, -0x4CD0($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X4CD0);
    // 0x151DAC24: lui         $at, 0xCDC
    ctx->r1 = S32(0XCDC << 16);
    // 0x151DAC28: ori         $at, $at, 0x9
    ctx->r1 = ctx->r1 | 0X9;
    // 0x151DAC2C: beq         $t4, $zero, L_151DAC3C
    if (ctx->r12 == 0) {
        // 0x151DAC30: nop
    
            goto L_151DAC3C;
    }
    // 0x151DAC30: nop

    // 0x151DAC34: b           L_151DAC3C
    // 0x151DAC38: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
        goto L_151DAC3C;
    // 0x151DAC38: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
L_151DAC3C:
    // 0x151DAC3C: or          $t5, $v0, $at
    ctx->r13 = ctx->r2 | ctx->r1;
    // 0x151DAC40: sw          $t5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r13;
    // 0x151DAC44: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x151DAC48: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x151DAC4C: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x151DAC50: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x151DAC54: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x151DAC58: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x151DAC5C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x151DAC60: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x151DAC64: swc1        $f12, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f12.u32l;
    // 0x151DAC68: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x151DAC6C: sb          $zero, 0x9A($sp)
    MEM_B(0X9A, ctx->r29) = 0;
    // 0x151DAC70: sb          $t6, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r14;
    // 0x151DAC74: jal         0x150ADA20
    // 0x151DAC78: sb          $zero, 0x48($sp)
    MEM_B(0X48, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151DAC78: sb          $zero, 0x48($sp)
    MEM_B(0X48, ctx->r29) = 0;
    after_1:
    // 0x151DAC7C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151DAC80: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DAC84: mfhi        $t1
    ctx->r9 = hi;
    // 0x151DAC88: addiu       $t8, $t1, 0x6
    ctx->r24 = ADD32(ctx->r9, 0X6);
    // 0x151DAC8C: jal         0x150ADA68
    // 0x151DAC90: sb          $t8, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r24;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151DAC90: sb          $t8, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r24;
    after_2:
    // 0x151DAC94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DAC98: lwc1        $f4, -0x4B60($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4B60);
    // 0x151DAC9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DACA0: lwc1        $f8, -0x4B5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4B5C);
    // 0x151DACA4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151DACA8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151DACAC: jal         0x150ADA68
    // 0x151DACB0: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151DACB0: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x151DACB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DACB8: lwc1        $f16, -0x4B58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4B58);
    // 0x151DACBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DACC0: lwc1        $f4, -0x4B54($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4B54);
    // 0x151DACC4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151DACC8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151DACCC: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x151DACD0: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x151DACD4: sb          $zero, 0x55($sp)
    MEM_B(0X55, ctx->r29) = 0;
    // 0x151DACD8: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x151DACDC: sb          $t7, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r15;
    // 0x151DACE0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151DACE4: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x151DACE8: sh          $t9, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r25;
    // 0x151DACEC: sh          $t2, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r10;
    // 0x151DACF0: jal         0x150ADA20
    // 0x151DACF4: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151DACF4: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x151DACF8: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x151DACFC: beq         $t3, $zero, L_151DAD0C
    if (ctx->r11 == 0) {
        // 0x151DAD00: lbu         $v0, 0xC3($sp)
        ctx->r2 = MEM_BU(ctx->r29, 0XC3);
            goto L_151DAD0C;
    }
    // 0x151DAD00: lbu         $v0, 0xC3($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XC3);
    // 0x151DAD04: b           L_151DAD10
    // 0x151DAD08: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_151DAD10;
    // 0x151DAD08: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151DAD0C:
    // 0x151DAD0C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151DAD10:
    // 0x151DAD10: beq         $v0, $zero, L_151DAD20
    if (ctx->r2 == 0) {
        // 0x151DAD14: addiu       $a0, $sp, 0x54
        ctx->r4 = ADD32(ctx->r29, 0X54);
            goto L_151DAD20;
    }
    // 0x151DAD14: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x151DAD18: b           L_151DAD24
    // 0x151DAD1C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
        goto L_151DAD24;
    // 0x151DAD1C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
L_151DAD20:
    // 0x151DAD20: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_151DAD24:
    // 0x151DAD24: beq         $v0, $zero, L_151DAD34
    if (ctx->r2 == 0) {
        // 0x151DAD28: lui         $a1, 0x800A
        ctx->r5 = S32(0X800A << 16);
            goto L_151DAD34;
    }
    // 0x151DAD28: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x151DAD2C: b           L_151DAD38
    // 0x151DAD30: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_151DAD38;
    // 0x151DAD30: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_151DAD34:
    // 0x151DAD34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151DAD38:
    // 0x151DAD38: lbu         $t1, 0xC7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XC7);
    // 0x151DAD3C: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x151DAD40: addiu       $t4, $zero, 0xE
    ctx->r12 = ADD32(0, 0XE);
    // 0x151DAD44: ori         $t5, $v1, 0x2
    ctx->r13 = ctx->r3 | 0X2;
    // 0x151DAD48: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x151DAD4C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x151DAD50: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x151DAD54: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151DAD58: addiu       $a1, $a1, 0x4AA0
    ctx->r5 = ADD32(ctx->r5, 0X4AA0);
    // 0x151DAD5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DAD60: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x151DAD64: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151DAD68: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x151DAD6C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x151DAD70: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x151DAD74: jal         0x1513D2F0
    // 0x151DAD78: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    func_1513D2F0(rdram, ctx);
        goto after_5;
    // 0x151DAD78: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    after_5:
    // 0x151DAD7C: beq         $v0, $zero, L_151DAD90
    if (ctx->r2 == 0) {
        // 0x151DAD80: addiu       $a0, $v0, 0x110
        ctx->r4 = ADD32(ctx->r2, 0X110);
            goto L_151DAD90;
    }
    // 0x151DAD80: addiu       $a0, $v0, 0x110
    ctx->r4 = ADD32(ctx->r2, 0X110);
    // 0x151DAD84: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x151DAD88: jal         0x10022EC0
    // 0x151DAD8C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x151DAD8C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_6:
L_151DAD90:
    // 0x151DAD90: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151DAD94: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x151DAD98: jr          $ra
    // 0x151DAD9C: nop

    return;
    return;
    // 0x151DAD9C: nop

;}
RECOMP_FUNC void func_151A3150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A3150: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x151A3154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A3158: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151A315C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x151A3160: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x151A3164: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x151A3168: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x151A316C: lw          $at, 0x40($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X40);
    // 0x151A3170: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x151A3174: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x151A3178: lw          $t1, 0x44($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X44);
    // 0x151A317C: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x151A3180: lw          $at, 0x48($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X48);
    // 0x151A3184: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x151A3188: lw          $t2, 0x68($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X68);
    // 0x151A318C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151A3190: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151A3194: andi        $t3, $t2, 0x1000
    ctx->r11 = ctx->r10 & 0X1000;
    // 0x151A3198: beq         $t3, $zero, L_151A31D0
    if (ctx->r11 == 0) {
        // 0x151A319C: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_151A31D0;
    }
    // 0x151A319C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x151A31A0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151A31A4: lwc1        $f6, 0x4C($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X4C);
    // 0x151A31A8: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x151A31AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151A31B0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151A31B4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x151A31B8: lwc1        $f16, 0x50($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X50);
    // 0x151A31BC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151A31C0: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x151A31C4: lwc1        $f6, 0x54($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X54);
    // 0x151A31C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151A31CC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
L_151A31D0:
    // 0x151A31D0: lwc1        $f10, 0x38($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X38);
    // 0x151A31D4: lwc1        $f16, 0x3C($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X3C);
    // 0x151A31D8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151A31DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A31E0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151A31E4: lwc1        $f6, -0x72C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X72C4);
    // 0x151A31E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A31EC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151A31F0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151A31F4: addiu       $t5, $zero, -0x40
    ctx->r13 = ADD32(0, -0X40);
    // 0x151A31F8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x151A31FC: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x151A3200: addiu       $t6, $zero, 0x56
    ctx->r14 = ADD32(0, 0X56);
    // 0x151A3204: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x151A3208: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x151A320C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151A3210: lwc1        $f6, -0x72C0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X72C0);
    // 0x151A3214: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A3218: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151A321C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x151A3220: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x151A3224: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151A3228: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x151A322C: lwc1        $f16, 0x3C($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X3C);
    // 0x151A3230: lwc1        $f10, 0x38($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X38);
    // 0x151A3234: sh          $t4, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r12;
    // 0x151A3238: sh          $t5, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r13;
    // 0x151A323C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151A3240: lwc1        $f10, -0x72BC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X72BC);
    // 0x151A3244: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x151A3248: sh          $t9, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r25;
    // 0x151A324C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151A3250: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x151A3254: sh          $t6, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r14;
    // 0x151A3258: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x151A325C: sh          $t8, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r24;
    // 0x151A3260: sh          $t1, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r9;
    // 0x151A3264: sb          $t2, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r10;
    // 0x151A3268: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151A326C: sb          $t3, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r11;
    // 0x151A3270: sb          $t4, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r12;
    // 0x151A3274: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151A3278: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151A327C: addiu       $t9, $zero, 0x37
    ctx->r25 = ADD32(0, 0X37);
    // 0x151A3280: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A3284: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151A3288: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151A328C: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x151A3290: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x151A3294: sb          $t0, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r8;
    // 0x151A3298: sb          $t9, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r25;
    // 0x151A329C: addiu       $t8, $zero, 0x37
    ctx->r24 = ADD32(0, 0X37);
    // 0x151A32A0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151A32A4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151A32A8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151A32AC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151A32B0: sb          $t5, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r13;
    // 0x151A32B4: sb          $t6, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r14;
    // 0x151A32B8: sb          $t7, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r15;
    // 0x151A32BC: sb          $t8, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r24;
    // 0x151A32C0: sb          $t1, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r9;
    // 0x151A32C4: sb          $t2, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r10;
    // 0x151A32C8: sb          $t3, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r11;
    // 0x151A32CC: sb          $t4, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r12;
    // 0x151A32D0: sb          $t5, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r13;
    // 0x151A32D4: lui         $t0, 0x20
    ctx->r8 = S32(0X20 << 16);
    // 0x151A32D8: lui         $t9, 0x6
    ctx->r25 = S32(0X6 << 16);
    // 0x151A32DC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151A32E0: addiu       $t7, $zero, 0x24
    ctx->r15 = ADD32(0, 0X24);
    // 0x151A32E4: ori         $t0, $t0, 0x5
    ctx->r8 = ctx->r8 | 0X5;
    // 0x151A32E8: ori         $t9, $t9, 0x600
    ctx->r25 = ctx->r25 | 0X600;
    // 0x151A32EC: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x151A32F0: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x151A32F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151A32F8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151A32FC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151A3300: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151A3304: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x151A3308: sh          $zero, 0x48($sp)
    MEM_H(0X48, ctx->r29) = 0;
    // 0x151A330C: sb          $zero, 0x65($sp)
    MEM_B(0X65, ctx->r29) = 0;
    // 0x151A3310: sb          $zero, 0x68($sp)
    MEM_B(0X68, ctx->r29) = 0;
    // 0x151A3314: sb          $zero, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = 0;
    // 0x151A3318: sb          $zero, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = 0;
    // 0x151A331C: sb          $zero, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = 0;
    // 0x151A3320: sb          $zero, 0x70($sp)
    MEM_B(0X70, ctx->r29) = 0;
    // 0x151A3324: sb          $zero, 0x72($sp)
    MEM_B(0X72, ctx->r29) = 0;
    // 0x151A3328: sb          $t6, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r14;
    // 0x151A332C: sb          $t7, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r15;
    // 0x151A3330: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x151A3334: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
    // 0x151A3338: sh          $t8, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r24;
    // 0x151A333C: sh          $t1, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r9;
    // 0x151A3340: sh          $t2, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r10;
    // 0x151A3344: sb          $zero, 0x86($sp)
    MEM_B(0X86, ctx->r29) = 0;
    // 0x151A3348: sb          $t3, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r11;
    // 0x151A334C: sb          $zero, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = 0;
    // 0x151A3350: sb          $t4, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = ctx->r12;
    // 0x151A3354: sb          $t5, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = ctx->r13;
    // 0x151A3358: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x151A335C: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x151A3360: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x151A3364: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x151A3368: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x151A336C: lbu         $a2, 0x1($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X1);
    // 0x151A3370: jal         0x15152B38
    // 0x151A3374: lbu         $a1, 0xC($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0XC);
    func_15152B38(rdram, ctx);
        goto after_0;
    // 0x151A3374: lbu         $a1, 0xC($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0XC);
    after_0:
    // 0x151A3378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151A337C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x151A3380: jr          $ra
    // 0x151A3384: nop

    return;
    return;
    // 0x151A3384: nop

;}
RECOMP_FUNC void func_150DFBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DFBD0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150DFBD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150DFBD8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150DFBDC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150DFBE0: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x150DFBE4: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x150DFBE8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x150DFBEC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x150DFBF0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x150DFBF4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150DFBF8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150DFBFC: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x150DFC00: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x150DFC04: addiu       $s3, $s3, 0x324
    ctx->r19 = ADD32(ctx->r19, 0X324);
    // 0x150DFC08: addiu       $s4, $s4, -0x2BFB
    ctx->r20 = ADD32(ctx->r20, -0X2BFB);
    // 0x150DFC0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150DFC10: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
    // 0x150DFC14: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
    // 0x150DFC18: lui         $s6, 0xDB06
    ctx->r22 = S32(0XDB06 << 16);
    // 0x150DFC1C: addiu       $s5, $sp, 0x48
    ctx->r21 = ADD32(ctx->r29, 0X48);
L_150DFC20:
    // 0x150DFC20: jal         0x150DF8C0
    // 0x150DFC24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150DF8C0(rdram, ctx);
        goto after_0;
    // 0x150DFC24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x150DFC28: beq         $v0, $zero, L_150DFC44
    if (ctx->r2 == 0) {
        // 0x150DFC2C: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_150DFC44;
    }
    // 0x150DFC2C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x150DFC30: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x150DFC34: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x150DFC38: addu        $t7, $s3, $t6
    ctx->r15 = ADD32(ctx->r19, ctx->r14);
    // 0x150DFC3C: b           L_150DFC48
    // 0x150DFC40: lw          $a0, 0x24($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X24);
        goto L_150DFC48;
    // 0x150DFC40: lw          $a0, 0x24($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X24);
L_150DFC44:
    // 0x150DFC44: lw          $a0, 0x20($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X20);
L_150DFC48:
    // 0x150DFC48: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x150DFC4C: jal         0x1510D0EC
    // 0x150DFC50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_1;
    // 0x150DFC50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x150DFC54: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x150DFC58: andi        $t8, $s2, 0xFFFF
    ctx->r24 = ctx->r18 & 0XFFFF;
    // 0x150DFC5C: or          $t9, $t8, $s6
    ctx->r25 = ctx->r24 | ctx->r22;
    // 0x150DFC60: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x150DFC64: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x150DFC68: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x150DFC6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150DFC70: bne         $s0, $s7, L_150DFC20
    if (ctx->r16 != ctx->r23) {
        // 0x150DFC74: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_150DFC20;
    }
    // 0x150DFC74: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x150DFC78: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x150DFC7C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150DFC80: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x150DFC84: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x150DFC88: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x150DFC8C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x150DFC90: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x150DFC94: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x150DFC98: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x150DFC9C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x150DFCA0: jr          $ra
    // 0x150DFCA4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    return;
    // 0x150DFCA4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_15165BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15165BB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15165BB4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15165BB8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15165BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15165BC0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15165BC4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15165BC8: lbu         $a0, 0x16($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X16);
    // 0x15165BCC: jal         0x15144B34
    // 0x15165BD0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_15144B34(rdram, ctx);
        goto after_0;
    // 0x15165BD0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x15165BD4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x15165BD8: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15165BDC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x15165BE0: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15165BE4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15165BE8: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x15165BEC: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15165BF0: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x15165BF4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15165BF8: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x15165BFC: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15165C00: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x15165C04: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15165C08: jal         0x15143E64
    // 0x15165C0C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_15143E64(rdram, ctx);
        goto after_1;
    // 0x15165C0C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x15165C10: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15165C14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15165C18: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15165C1C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x15165C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15165C24: bc1fl       L_15165C3C
    if (!c1cs) {
        // 0x15165C28: add.s       $f16, $f12, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f10.fl;
            goto L_15165C3C;
    }
    goto skip_0;
    // 0x15165C28: add.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f10.fl;
    skip_0:
    // 0x15165C2C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15165C30: b           L_15165C74
    // 0x15165C34: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_15165C74;
    // 0x15165C34: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x15165C38: add.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f10.fl;
L_15165C3C:
    // 0x15165C3C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x15165C40: nop

    // 0x15165C44: bc1fl       L_15165C5C
    if (!c1cs) {
        // 0x15165C48: sub.s       $f18, $f0, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f12.fl;
            goto L_15165C5C;
    }
    goto skip_1;
    // 0x15165C48: sub.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f12.fl;
    skip_1:
    // 0x15165C4C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15165C50: b           L_15165C74
    // 0x15165C54: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_15165C74;
    // 0x15165C54: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x15165C58: sub.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f12.fl;
L_15165C5C:
    // 0x15165C5C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15165C60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15165C64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15165C68: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15165C6C: sub.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x15165C70: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_15165C74:
    // 0x15165C74: jr          $ra
    // 0x15165C78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15165C78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1506B100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B100: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506B104: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1506B108: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x1506B10C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506B110: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1506B114: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1506B118: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506B11C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x1506B120: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x1506B124: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506B128: lhu         $a1, 0x2A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2A);
    // 0x1506B12C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1506B130: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1506B134: jal         0x1505E650
    // 0x1506B138: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x1506B138: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x1506B13C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1506B140: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506B144: jr          $ra
    // 0x1506B148: nop

    return;
    return;
    // 0x1506B148: nop

;}
RECOMP_FUNC void func_1501E05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501E05C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1501E060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1501E064: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1501E068: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x1501E06C: lw          $a2, -0x1610($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1610);
    // 0x1501E070: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x1501E074: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x1501E078: bne         $a2, $at, L_1501E0B4
    if (ctx->r6 != ctx->r1) {
        // 0x1501E07C: addiu       $v1, $v1, -0x27C
        ctx->r3 = ADD32(ctx->r3, -0X27C);
            goto L_1501E0B4;
    }
    // 0x1501E07C: addiu       $v1, $v1, -0x27C
    ctx->r3 = ADD32(ctx->r3, -0X27C);
    // 0x1501E080: lb          $t6, 0x0($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X0);
    // 0x1501E084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1501E088: beq         $t6, $zero, L_1501E098
    if (ctx->r14 == 0) {
        // 0x1501E08C: nop
    
            goto L_1501E098;
    }
    // 0x1501E08C: nop

    // 0x1501E090: b           L_1501E1A4
    // 0x1501E094: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
        goto L_1501E1A4;
    // 0x1501E094: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_1501E098:
    // 0x1501E098: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501E09C: lbu         $t7, 0x35E8($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35E8);
    // 0x1501E0A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1501E0A4: beql        $t7, $at, L_1501E0B8
    if (ctx->r15 == ctx->r1) {
        // 0x1501E0A8: addiu       $at, $zero, 0x21
        ctx->r1 = ADD32(0, 0X21);
            goto L_1501E0B8;
    }
    goto skip_0;
    // 0x1501E0A8: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    skip_0:
    // 0x1501E0AC: b           L_1501E1A4
    // 0x1501E0B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1501E1A4;
    // 0x1501E0B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1501E0B4:
    // 0x1501E0B4: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
L_1501E0B8:
    // 0x1501E0B8: bne         $a2, $at, L_1501E10C
    if (ctx->r6 != ctx->r1) {
        // 0x1501E0BC: lui         $t2, 0x800C
        ctx->r10 = S32(0X800C << 16);
            goto L_1501E10C;
    }
    // 0x1501E0BC: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1501E0C0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1501E0C4: lhu         $t8, -0x18F0($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X18F0);
    // 0x1501E0C8: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x1501E0CC: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x1501E0D0: beq         $t9, $zero, L_1501E104
    if (ctx->r25 == 0) {
        // 0x1501E0D4: nop
    
            goto L_1501E104;
    }
    // 0x1501E0D4: nop

    // 0x1501E0D8: lw          $t0, 0x30C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X30C);
    // 0x1501E0DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1501E0E0: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1501E0E4: bne         $t0, $at, L_1501E104
    if (ctx->r8 != ctx->r1) {
        // 0x1501E0E8: nop
    
            goto L_1501E104;
    }
    // 0x1501E0E8: nop

    // 0x1501E0EC: lw          $t1, 0x35B0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X35B0);
    // 0x1501E0F0: slti        $at, $t1, 0x12D
    ctx->r1 = SIGNED(ctx->r9) < 0X12D ? 1 : 0;
    // 0x1501E0F4: bne         $at, $zero, L_1501E104
    if (ctx->r1 != 0) {
        // 0x1501E0F8: nop
    
            goto L_1501E104;
    }
    // 0x1501E0F8: nop

    // 0x1501E0FC: b           L_1501E1A4
    // 0x1501E100: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1501E1A4;
    // 0x1501E100: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1501E104:
    // 0x1501E104: b           L_1501E1A4
    // 0x1501E108: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1501E1A4;
    // 0x1501E108: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1501E10C:
    // 0x1501E10C: lhu         $t2, -0x18F0($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X18F0);
    // 0x1501E110: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1501E114: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x1501E118: beql        $t3, $zero, L_1501E1A4
    if (ctx->r11 == 0) {
        // 0x1501E11C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1501E1A4;
    }
    goto skip_1;
    // 0x1501E11C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x1501E120: lbu         $t4, 0x3C9C($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X3C9C);
    // 0x1501E124: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1501E128: bnel        $t4, $zero, L_1501E1A4
    if (ctx->r12 != 0) {
        // 0x1501E12C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1501E1A4;
    }
    goto skip_2;
    // 0x1501E12C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x1501E130: lbu         $t5, 0x2E40($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X2E40);
    // 0x1501E134: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x1501E138: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1501E13C: beq         $t5, $zero, L_1501E14C
    if (ctx->r13 == 0) {
        // 0x1501E140: addu        $a1, $a1, $t6
        ctx->r5 = ADD32(ctx->r5, ctx->r14);
            goto L_1501E14C;
    }
    // 0x1501E140: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x1501E144: b           L_1501E1A4
    // 0x1501E148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1501E1A4;
    // 0x1501E148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1501E14C:
    // 0x1501E14C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1501E150: jal         0x1501D2C4
    // 0x1501E154: lbu         $a1, 0x35E8($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X35E8);
    func_1501D2C4(rdram, ctx);
        goto after_0;
    // 0x1501E154: lbu         $a1, 0x35E8($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X35E8);
    after_0:
    // 0x1501E158: beq         $v0, $zero, L_1501E1A0
    if (ctx->r2 == 0) {
        // 0x1501E15C: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_1501E1A0;
    }
    // 0x1501E15C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501E160: lbu         $t7, 0x3C99($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3C99);
    // 0x1501E164: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x1501E168: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1501E16C: bne         $t7, $zero, L_1501E198
    if (ctx->r15 != 0) {
        // 0x1501E170: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_1501E198;
    }
    // 0x1501E170: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x1501E174: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1501E178: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x1501E17C: lw          $t0, 0x35B0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X35B0);
    // 0x1501E180: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1501E184: lw          $t9, 0x3640($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3640);
    // 0x1501E188: addiu       $t1, $t0, 0x1E
    ctx->r9 = ADD32(ctx->r8, 0X1E);
    // 0x1501E18C: slt         $at, $t1, $t9
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x1501E190: beql        $at, $zero, L_1501E1A4
    if (ctx->r1 == 0) {
        // 0x1501E194: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1501E1A4;
    }
    goto skip_3;
    // 0x1501E194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
L_1501E198:
    // 0x1501E198: b           L_1501E1A4
    // 0x1501E19C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1501E1A4;
    // 0x1501E19C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1501E1A0:
    // 0x1501E1A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1501E1A4:
    // 0x1501E1A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1501E1A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1501E1AC: jr          $ra
    // 0x1501E1B0: nop

    return;
    return;
    // 0x1501E1B0: nop

;}
RECOMP_FUNC void func_150CBF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CBF5C: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x150CBF60: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x150CBF64: sh          $t8, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r24;
    // 0x150CBF68: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x150CBF6C: sw          $t7, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r15;
    // 0x150CBF70: jr          $ra
    // 0x150CBF74: nop

    return;
    return;
    // 0x150CBF74: nop

;}
RECOMP_FUNC void func_1514EECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514EECC: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x1514EED0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1514EED4: sw          $a0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r4;
    // 0x1514EED8: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x1514EEDC: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x1514EEE0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1514EEE4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1514EEE8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514EEEC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x1514EEF0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514EEF4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1514EEF8: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x1514EEFC: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x1514EF00: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x1514EF04: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x1514EF08: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1514EF0C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1514EF10: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1514EF14: addiu       $a2, $a2, 0x5934
    ctx->r6 = ADD32(ctx->r6, 0X5934);
    // 0x1514EF18: lw          $a0, 0x120($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X120);
    // 0x1514EF1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1514EF20: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1514EF24: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1514EF28: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1514EF2C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1514EF30: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1514EF34: jal         0x15160A58
    // 0x1514EF38: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_15160A58(rdram, ctx);
        goto after_0;
    // 0x1514EF38: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x1514EF3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514EF40: lw          $a1, 0x120($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X120);
    // 0x1514EF44: jal         0x1514EC1C
    // 0x1514EF48: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    func_1514EC1C(rdram, ctx);
        goto after_1;
    // 0x1514EF48: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_1:
    // 0x1514EF4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1514EF50: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1514EF54: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1514EF58: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1514EF5C: lui         $at, 0x42BE
    ctx->r1 = S32(0X42BE << 16);
    // 0x1514EF60: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1514EF64: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x1514EF68: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1514EF6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514EF70: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1514EF74: lwc1        $f18, 0x5E48($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5E48);
    // 0x1514EF78: lw          $v1, 0x120($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X120);
    // 0x1514EF7C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x1514EF80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514EF84: lwc1        $f4, 0x5E4C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5E4C);
    // 0x1514EF88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514EF8C: lwc1        $f6, 0x5E50($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5E50);
    // 0x1514EF90: lui         $t4, 0x4ED
    ctx->r12 = S32(0X4ED << 16);
    // 0x1514EF94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514EF98: lwc1        $f8, 0x5E54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5E54);
    // 0x1514EF9C: addiu       $t3, $zero, 0x69
    ctx->r11 = ADD32(0, 0X69);
    // 0x1514EFA0: ori         $t4, $t4, 0x200A
    ctx->r12 = ctx->r12 | 0X200A;
    // 0x1514EFA4: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x1514EFA8: sb          $t3, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r11;
    // 0x1514EFAC: sw          $t4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r12;
    // 0x1514EFB0: sh          $t5, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r13;
    // 0x1514EFB4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1514EFB8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1514EFBC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1514EFC0: addiu       $t9, $zero, 0x4403
    ctx->r25 = ADD32(0, 0X4403);
    // 0x1514EFC4: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x1514EFC8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514EFCC: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x1514EFD0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1514EFD4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1514EFD8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1514EFDC: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    // 0x1514EFE0: sw          $zero, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = 0;
    // 0x1514EFE4: sb          $t6, 0x109($sp)
    MEM_B(0X109, ctx->r29) = ctx->r14;
    // 0x1514EFE8: sb          $t7, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r15;
    // 0x1514EFEC: sb          $zero, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = 0;
    // 0x1514EFF0: sb          $zero, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = 0;
    // 0x1514EFF4: sb          $t8, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r24;
    // 0x1514EFF8: sh          $t9, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r25;
    // 0x1514EFFC: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x1514F000: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x1514F004: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x1514F008: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x1514F00C: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    // 0x1514F010: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x1514F014: sb          $t0, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r8;
    // 0x1514F018: swc1        $f12, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f12.u32l;
    // 0x1514F01C: swc1        $f12, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f12.u32l;
    // 0x1514F020: swc1        $f2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f2.u32l;
    // 0x1514F024: swc1        $f2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f2.u32l;
    // 0x1514F028: swc1        $f2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f2.u32l;
    // 0x1514F02C: sb          $t1, 0x108($sp)
    MEM_B(0X108, ctx->r29) = ctx->r9;
    // 0x1514F030: sb          $zero, 0x10A($sp)
    MEM_B(0X10A, ctx->r29) = 0;
    // 0x1514F034: sb          $t2, 0x10B($sp)
    MEM_B(0X10B, ctx->r29) = ctx->r10;
    // 0x1514F038: sw          $zero, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = 0;
    // 0x1514F03C: sb          $t3, 0x110($sp)
    MEM_B(0X110, ctx->r29) = ctx->r11;
    // 0x1514F040: sw          $zero, 0x114($sp)
    MEM_W(0X114, ctx->r29) = 0;
    // 0x1514F044: sh          $t4, 0x118($sp)
    MEM_H(0X118, ctx->r29) = ctx->r12;
    // 0x1514F048: sh          $t5, 0x11A($sp)
    MEM_H(0X11A, ctx->r29) = ctx->r13;
    // 0x1514F04C: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x1514F050: swc1        $f14, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f14.u32l;
    // 0x1514F054: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x1514F058: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x1514F05C: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x1514F060: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x1514F064: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x1514F068: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x1514F06C: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x1514F070: lbu         $t6, 0x3B($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3B);
    // 0x1514F074: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x1514F078: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    // 0x1514F07C: addiu       $t7, $t7, 0x5940
    ctx->r15 = ADD32(ctx->r15, 0X5940);
    // 0x1514F080: sb          $t6, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r14;
    // 0x1514F084: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x1514F088: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x1514F08C: addiu       $t2, $t2, 0x594C
    ctx->r10 = ADD32(ctx->r10, 0X594C);
    // 0x1514F090: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x1514F094: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x1514F098: addiu       $t1, $sp, 0x54
    ctx->r9 = ADD32(ctx->r29, 0X54);
    // 0x1514F09C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1514F0A0: sw          $t0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r8;
    // 0x1514F0A4: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x1514F0A8: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x1514F0AC: addiu       $a0, $sp, 0xC4
    ctx->r4 = ADD32(ctx->r29, 0XC4);
    // 0x1514F0B0: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    // 0x1514F0B4: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x1514F0B8: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x1514F0BC: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x1514F0C0: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x1514F0C4: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x1514F0C8: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x1514F0CC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1514F0D0: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x1514F0D4: sb          $t6, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r14;
    // 0x1514F0D8: sb          $zero, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = 0;
    // 0x1514F0DC: sb          $zero, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = 0;
    // 0x1514F0E0: sb          $zero, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = 0;
    // 0x1514F0E4: sb          $zero, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = 0;
    // 0x1514F0E8: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x1514F0EC: sb          $t9, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r25;
    // 0x1514F0F0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1514F0F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1514F0F8: jal         0x15189FF0
    // 0x1514F0FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_15189FF0(rdram, ctx);
        goto after_2;
    // 0x1514F0FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x1514F100: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1514F104: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    // 0x1514F108: jr          $ra
    // 0x1514F10C: nop

    return;
    return;
    // 0x1514F10C: nop

;}
RECOMP_FUNC void func_1518BCD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518BCD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1518BCD4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1518BCD8: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x1518BCDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1518BCE0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1518BCE4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1518BCE8: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x1518BCEC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1518BCF0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1518BCF4: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x1518BCF8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1518BCFC: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x1518BD00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1518BD04: jal         0x15167A68
    // 0x1518BD08: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x1518BD08: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x1518BD0C: bne         $v0, $zero, L_1518BD1C
    if (ctx->r2 != 0) {
        // 0x1518BD10: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_1518BD1C;
    }
    // 0x1518BD10: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1518BD14: b           L_1518BD4C
    // 0x1518BD18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518BD4C;
    // 0x1518BD18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518BD1C:
    // 0x1518BD1C: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x1518BD20: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x1518BD24: jal         0x10022EC0
    // 0x1518BD28: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1518BD28: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_1:
    // 0x1518BD2C: jal         0x150ADA20
    // 0x1518BD30: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1518BD30: nop

    after_2:
    // 0x1518BD34: andi        $t8, $v0, 0x1F
    ctx->r24 = ctx->r2 & 0X1F;
    // 0x1518BD38: jal         0x150ADA20
    // 0x1518BD3C: sw          $t8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1518BD3C: sw          $t8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r24;
    after_3:
    // 0x1518BD40: andi        $t9, $v0, 0x1F
    ctx->r25 = ctx->r2 & 0X1F;
    // 0x1518BD44: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    // 0x1518BD48: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1518BD4C:
    // 0x1518BD4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1518BD50: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1518BD54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1518BD58: jr          $ra
    // 0x1518BD5C: nop

    return;
    return;
    // 0x1518BD5C: nop

;}
RECOMP_FUNC void func_1510D608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510D608: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1510D60C: addiu       $t6, $t6, -0x3BB8
    ctx->r14 = ADD32(ctx->r14, -0X3BB8);
    // 0x1510D610: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x1510D614: lb          $v1, 0x0($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X0);
    // 0x1510D618: beq         $v1, $zero, L_1510D628
    if (ctx->r3 == 0) {
        // 0x1510D61C: andi        $t7, $v1, 0x40
        ctx->r15 = ctx->r3 & 0X40;
            goto L_1510D628;
    }
    // 0x1510D61C: andi        $t7, $v1, 0x40
    ctx->r15 = ctx->r3 & 0X40;
    // 0x1510D620: or          $t8, $t7, $a1
    ctx->r24 = ctx->r15 | ctx->r5;
    // 0x1510D624: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
L_1510D628:
    // 0x1510D628: jr          $ra
    // 0x1510D62C: nop

    return;
    return;
    // 0x1510D62C: nop

;}
RECOMP_FUNC void func_151C9198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C9198: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x151C919C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x151C91A0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x151C91A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151C91A8: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x151C91AC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x151C91B0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x151C91B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151C91B8: sw          $a3, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r7;
    // 0x151C91BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C91C0: addiu       $a1, $sp, 0xEC
    ctx->r5 = ADD32(ctx->r29, 0XEC);
    // 0x151C91C4: addiu       $a2, $sp, 0xE0
    ctx->r6 = ADD32(ctx->r29, 0XE0);
    // 0x151C91C8: jal         0x15144E80
    // 0x151C91CC: addiu       $a3, $sp, 0xD4
    ctx->r7 = ADD32(ctx->r29, 0XD4);
    func_15144E80(rdram, ctx);
        goto after_0;
    // 0x151C91CC: addiu       $a3, $sp, 0xD4
    ctx->r7 = ADD32(ctx->r29, 0XD4);
    after_0:
    // 0x151C91D0: beq         $v0, $zero, L_151C94BC
    if (ctx->r2 == 0) {
        // 0x151C91D4: addiu       $a0, $sp, 0xD4
        ctx->r4 = ADD32(ctx->r29, 0XD4);
            goto L_151C94BC;
    }
    // 0x151C91D4: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x151C91D8: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x151C91DC: jal         0x15145974
    // 0x151C91E0: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    func_15145974(rdram, ctx);
        goto after_1;
    // 0x151C91E0: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    after_1:
    // 0x151C91E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151C91E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151C91EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C91F0: lwc1        $f12, -0x5384($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X5384);
    // 0x151C91F4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x151C91F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C91FC: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x151C9200: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151C9204: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x151C9208: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151C920C: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x151C9210: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x151C9214: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
    // 0x151C9218: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x151C921C: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    // 0x151C9220: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    // 0x151C9224: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    // 0x151C9228: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x151C922C: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x151C9230: addiu       $t6, $sp, 0x80
    ctx->r14 = ADD32(ctx->r29, 0X80);
    // 0x151C9234: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x151C9238: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151C923C: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x151C9240: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x151C9244: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x151C9248: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151C924C: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x151C9250: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151C9254: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151C9258: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151C925C: lbu         $t0, 0x113($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X113);
    // 0x151C9260: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x151C9264: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x151C9268: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x151C926C: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x151C9270: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x151C9274: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x151C9278: beq         $t0, $zero, L_151C9288
    if (ctx->r8 == 0) {
        // 0x151C927C: swc1        $f0, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
            goto L_151C9288;
    }
    // 0x151C927C: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x151C9280: b           L_151C928C
    // 0x151C9284: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
        goto L_151C928C;
    // 0x151C9284: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_151C9288:
    // 0x151C9288: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C928C:
    // 0x151C928C: ori         $t2, $v0, 0x900
    ctx->r10 = ctx->r2 | 0X900;
    // 0x151C9290: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x151C9294: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x151C9298: ori         $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 | 0X4000;
    // 0x151C929C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x151C92A0: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x151C92A4: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x151C92A8: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x151C92AC: sw          $t8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r24;
    // 0x151C92B0: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x151C92B4: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x151C92B8: lbu         $t5, 0x117($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X117);
    // 0x151C92BC: addiu       $t6, $zero, 0x36
    ctx->r14 = ADD32(0, 0X36);
    // 0x151C92C0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151C92C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151C92C8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151C92CC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151C92D0: sh          $t7, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r15;
    // 0x151C92D4: sh          $t6, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r14;
    // 0x151C92D8: sb          $zero, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = 0;
    // 0x151C92DC: sb          $t0, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r8;
    // 0x151C92E0: sb          $zero, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = 0;
    // 0x151C92E4: sb          $zero, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = 0;
    // 0x151C92E8: sb          $zero, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = 0;
    // 0x151C92EC: sb          $zero, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = 0;
    // 0x151C92F0: sb          $zero, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = 0;
    // 0x151C92F4: sb          $zero, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = 0;
    // 0x151C92F8: sb          $zero, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = 0;
    // 0x151C92FC: sb          $t1, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r9;
    // 0x151C9300: sb          $zero, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = 0;
    // 0x151C9304: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x151C9308: sb          $zero, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = 0;
    // 0x151C930C: sh          $t2, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r10;
    // 0x151C9310: sh          $t3, 0xCC($sp)
    MEM_H(0XCC, ctx->r29) = ctx->r11;
    // 0x151C9314: sb          $t4, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r12;
    // 0x151C9318: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151C931C: sw          $t9, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r25;
    // 0x151C9320: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151C9324: jal         0x15132A4C
    // 0x151C9328: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_15132A4C(rdram, ctx);
        goto after_2;
    // 0x151C9328: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_2:
    // 0x151C932C: beq         $v0, $zero, L_151C9358
    if (ctx->r2 == 0) {
        // 0x151C9330: sw          $v0, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r2;
            goto L_151C9358;
    }
    // 0x151C9330: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x151C9334: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151C9338: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x151C933C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
L_151C9340:
    // 0x151C9340: addu        $a0, $a1, $s0
    ctx->r4 = ADD32(ctx->r5, ctx->r16);
    // 0x151C9344: jal         0x15133760
    // 0x151C9348: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, 0X90);
    func_15133760(rdram, ctx);
        goto after_3;
    // 0x151C9348: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, 0X90);
    after_3:
    // 0x151C934C: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
    // 0x151C9350: bnel        $s0, $s1, L_151C9340
    if (ctx->r16 != ctx->r17) {
        // 0x151C9354: lw          $a1, 0x0($s2)
        ctx->r5 = MEM_W(ctx->r18, 0X0);
            goto L_151C9340;
    }
    goto skip_0;
    // 0x151C9354: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    skip_0:
L_151C9358:
    // 0x151C9358: lbu         $t3, 0x10F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X10F);
    // 0x151C935C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151C9360: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x151C9364: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x151C9368: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x151C936C: addiu       $t1, $zero, 0x3E
    ctx->r9 = ADD32(0, 0X3E);
    // 0x151C9370: addiu       $t2, $zero, 0x3E
    ctx->r10 = ADD32(0, 0X3E);
    // 0x151C9374: sb          $t7, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r15;
    // 0x151C9378: sb          $t6, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r14;
    // 0x151C937C: sb          $t9, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r25;
    // 0x151C9380: sb          $t0, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r8;
    // 0x151C9384: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x151C9388: beq         $t3, $zero, L_151C93A4
    if (ctx->r11 == 0) {
        // 0x151C938C: sw          $t2, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r10;
            goto L_151C93A4;
    }
    // 0x151C938C: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x151C9390: addiu       $t4, $zero, 0x87
    ctx->r12 = ADD32(0, 0X87);
    // 0x151C9394: addiu       $t5, $zero, 0x88
    ctx->r13 = ADD32(0, 0X88);
    // 0x151C9398: sh          $t4, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r12;
    // 0x151C939C: b           L_151C93B4
    // 0x151C93A0: sh          $t5, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r13;
        goto L_151C93B4;
    // 0x151C93A0: sh          $t5, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r13;
L_151C93A4:
    // 0x151C93A4: addiu       $t8, $zero, 0x8B
    ctx->r24 = ADD32(0, 0X8B);
    // 0x151C93A8: addiu       $t7, $zero, 0x8C
    ctx->r15 = ADD32(0, 0X8C);
    // 0x151C93AC: sh          $t8, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r24;
    // 0x151C93B0: sh          $t7, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r15;
L_151C93B4:
    // 0x151C93B4: lbu         $t9, 0x117($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X117);
    // 0x151C93B8: lw          $t0, 0x118($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X118);
    // 0x151C93BC: addiu       $t6, $zero, 0x37
    ctx->r14 = ADD32(0, 0X37);
    // 0x151C93C0: sh          $t6, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r14;
    // 0x151C93C4: sb          $zero, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = 0;
    // 0x151C93C8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x151C93CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151C93D0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151C93D4: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x151C93D8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151C93DC: jal         0x15132A4C
    // 0x151C93E0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_15132A4C(rdram, ctx);
        goto after_4;
    // 0x151C93E0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_4:
    // 0x151C93E4: beq         $v0, $zero, L_151C9424
    if (ctx->r2 == 0) {
        // 0x151C93E8: sw          $v0, 0x4($s2)
        MEM_W(0X4, ctx->r18) = ctx->r2;
            goto L_151C9424;
    }
    // 0x151C93E8: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x151C93EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151C93F0: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x151C93F4: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
L_151C93F8:
    // 0x151C93F8: addu        $a0, $a1, $s0
    ctx->r4 = ADD32(ctx->r5, ctx->r16);
    // 0x151C93FC: jal         0x15133760
    // 0x151C9400: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, 0X90);
    func_15133760(rdram, ctx);
        goto after_5;
    // 0x151C9400: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, 0X90);
    after_5:
    // 0x151C9404: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
    // 0x151C9408: bnel        $s0, $s1, L_151C93F8
    if (ctx->r16 != ctx->r17) {
        // 0x151C940C: lw          $a1, 0x4($s2)
        ctx->r5 = MEM_W(ctx->r18, 0X4);
            goto L_151C93F8;
    }
    goto skip_1;
    // 0x151C940C: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    skip_1:
    // 0x151C9410: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x151C9414: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x151C9418: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x151C941C: jal         0x10022EC0
    // 0x151C9420: addiu       $a0, $a0, 0x170
    ctx->r4 = ADD32(ctx->r4, 0X170);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x151C9420: addiu       $a0, $a0, 0x170
    ctx->r4 = ADD32(ctx->r4, 0X170);
    after_6:
L_151C9424:
    // 0x151C9424: lbu         $t2, 0x10F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X10F);
    // 0x151C9428: addiu       $t1, $zero, 0x38
    ctx->r9 = ADD32(0, 0X38);
    // 0x151C942C: sh          $t1, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r9;
    // 0x151C9430: beq         $t2, $zero, L_151C944C
    if (ctx->r10 == 0) {
        // 0x151C9434: addiu       $a0, $sp, 0x58
        ctx->r4 = ADD32(ctx->r29, 0X58);
            goto L_151C944C;
    }
    // 0x151C9434: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x151C9438: addiu       $t3, $zero, 0x89
    ctx->r11 = ADD32(0, 0X89);
    // 0x151C943C: addiu       $t4, $zero, 0x8A
    ctx->r12 = ADD32(0, 0X8A);
    // 0x151C9440: sh          $t3, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r11;
    // 0x151C9444: b           L_151C945C
    // 0x151C9448: sh          $t4, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r12;
        goto L_151C945C;
    // 0x151C9448: sh          $t4, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r12;
L_151C944C:
    // 0x151C944C: addiu       $t5, $zero, 0x8D
    ctx->r13 = ADD32(0, 0X8D);
    // 0x151C9450: addiu       $t8, $zero, 0x8E
    ctx->r24 = ADD32(0, 0X8E);
    // 0x151C9454: sh          $t5, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r13;
    // 0x151C9458: sh          $t8, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r24;
L_151C945C:
    // 0x151C945C: lbu         $t7, 0x117($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X117);
    // 0x151C9460: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x151C9464: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151C9468: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151C946C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x151C9470: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151C9474: jal         0x15132A4C
    // 0x151C9478: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_15132A4C(rdram, ctx);
        goto after_7;
    // 0x151C9478: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_7:
    // 0x151C947C: beq         $v0, $zero, L_151C94BC
    if (ctx->r2 == 0) {
        // 0x151C9480: sw          $v0, 0x8($s2)
        MEM_W(0X8, ctx->r18) = ctx->r2;
            goto L_151C94BC;
    }
    // 0x151C9480: sw          $v0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r2;
    // 0x151C9484: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151C9488: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x151C948C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
L_151C9490:
    // 0x151C9490: addu        $a0, $a1, $s0
    ctx->r4 = ADD32(ctx->r5, ctx->r16);
    // 0x151C9494: jal         0x15133760
    // 0x151C9498: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, 0X90);
    func_15133760(rdram, ctx);
        goto after_8;
    // 0x151C9498: addiu       $a0, $a0, 0x90
    ctx->r4 = ADD32(ctx->r4, 0X90);
    after_8:
    // 0x151C949C: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
    // 0x151C94A0: bnel        $s0, $s1, L_151C9490
    if (ctx->r16 != ctx->r17) {
        // 0x151C94A4: lw          $a1, 0x8($s2)
        ctx->r5 = MEM_W(ctx->r18, 0X8);
            goto L_151C9490;
    }
    goto skip_2;
    // 0x151C94A4: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    skip_2:
    // 0x151C94A8: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x151C94AC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x151C94B0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x151C94B4: jal         0x10022EC0
    // 0x151C94B8: addiu       $a0, $a0, 0x170
    ctx->r4 = ADD32(ctx->r4, 0X170);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x151C94B8: addiu       $a0, $a0, 0x170
    ctx->r4 = ADD32(ctx->r4, 0X170);
    after_9:
L_151C94BC:
    // 0x151C94BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151C94C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151C94C4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x151C94C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x151C94CC: jr          $ra
    // 0x151C94D0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    return;
    // 0x151C94D0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_150F0318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F0318: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x150F031C: sw          $zero, 0x134($v0)
    MEM_W(0X134, ctx->r2) = 0;
    // 0x150F0320: jr          $ra
    // 0x150F0324: nop

    return;
    return;
    // 0x150F0324: nop

;}
RECOMP_FUNC void func_1507DE4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507DE4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1507DE50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1507DE54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1507DE58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1507DE5C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x1507DE60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1507DE64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507DE68: bnel        $t6, $at, L_1507DEB4
    if (ctx->r14 != ctx->r1) {
        // 0x1507DE6C: lbu         $v0, 0x4($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X4);
            goto L_1507DEB4;
    }
    goto skip_0;
    // 0x1507DE6C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    skip_0:
    // 0x1507DE70: jal         0x150836CC
    // 0x1507DE74: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    func_150836CC(rdram, ctx);
        goto after_0;
    // 0x1507DE74: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    after_0:
    // 0x1507DE78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507DE7C: jal         0x150836CC
    // 0x1507DE80: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    func_150836CC(rdram, ctx);
        goto after_1;
    // 0x1507DE80: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    after_1:
    // 0x1507DE84: lw          $t7, 0x9C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X9C);
    // 0x1507DE88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507DE8C: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    // 0x1507DE90: ori         $t8, $t7, 0xF000
    ctx->r24 = ctx->r15 | 0XF000;
    // 0x1507DE94: jal         0x150836CC
    // 0x1507DE98: sw          $t8, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r24;
    func_150836CC(rdram, ctx);
        goto after_2;
    // 0x1507DE98: sw          $t8, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r24;
    after_2:
    // 0x1507DE9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507DEA0: jal         0x150836CC
    // 0x1507DEA4: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    func_150836CC(rdram, ctx);
        goto after_3;
    // 0x1507DEA4: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    after_3:
    // 0x1507DEA8: b           L_1507DF00
    // 0x1507DEAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1507DF00;
    // 0x1507DEAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1507DEB0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
L_1507DEB4:
    // 0x1507DEB4: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x1507DEB8: beq         $v0, $at, L_1507DEF0
    if (ctx->r2 == ctx->r1) {
        // 0x1507DEBC: addiu       $at, $zero, 0x74
        ctx->r1 = ADD32(0, 0X74);
            goto L_1507DEF0;
    }
    // 0x1507DEBC: addiu       $at, $zero, 0x74
    ctx->r1 = ADD32(0, 0X74);
    // 0x1507DEC0: beq         $v0, $at, L_1507DEF0
    if (ctx->r2 == ctx->r1) {
        // 0x1507DEC4: addiu       $at, $zero, 0x7A
        ctx->r1 = ADD32(0, 0X7A);
            goto L_1507DEF0;
    }
    // 0x1507DEC4: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x1507DEC8: beq         $v0, $at, L_1507DEF0
    if (ctx->r2 == ctx->r1) {
        // 0x1507DECC: addiu       $at, $zero, 0x9F
        ctx->r1 = ADD32(0, 0X9F);
            goto L_1507DEF0;
    }
    // 0x1507DECC: addiu       $at, $zero, 0x9F
    ctx->r1 = ADD32(0, 0X9F);
    // 0x1507DED0: beq         $v0, $at, L_1507DEE0
    if (ctx->r2 == ctx->r1) {
        // 0x1507DED4: addiu       $at, $zero, 0xA0
        ctx->r1 = ADD32(0, 0XA0);
            goto L_1507DEE0;
    }
    // 0x1507DED4: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x1507DED8: bnel        $v0, $at, L_1507DF00
    if (ctx->r2 != ctx->r1) {
        // 0x1507DEDC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1507DF00;
    }
    goto skip_1;
    // 0x1507DEDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
L_1507DEE0:
    // 0x1507DEE0: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x1507DEE4: ori         $t0, $t9, 0xF000
    ctx->r8 = ctx->r25 | 0XF000;
    // 0x1507DEE8: b           L_1507DEFC
    // 0x1507DEEC: sw          $t0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r8;
        goto L_1507DEFC;
    // 0x1507DEEC: sw          $t0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r8;
L_1507DEF0:
    // 0x1507DEF0: lw          $t1, 0x9C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X9C);
    // 0x1507DEF4: ori         $t2, $t1, 0xFF8
    ctx->r10 = ctx->r9 | 0XFF8;
    // 0x1507DEF8: sw          $t2, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r10;
L_1507DEFC:
    // 0x1507DEFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1507DF00:
    // 0x1507DF00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1507DF04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1507DF08: jr          $ra
    // 0x1507DF0C: nop

    return;
    return;
    // 0x1507DF0C: nop

;}
RECOMP_FUNC void func_15151A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15151A38: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x15151A3C: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x15151A40: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x15151A44: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x15151A48: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x15151A4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15151A50: andi        $s5, $a1, 0xFF
    ctx->r21 = ctx->r5 & 0XFF;
    // 0x15151A54: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x15151A58: addiu       $s7, $sp, 0xDC
    ctx->r23 = ADD32(ctx->r29, 0XDC);
    // 0x15151A5C: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x15151A60: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x15151A64: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x15151A68: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x15151A6C: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x15151A70: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x15151A74: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x15151A78: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x15151A7C: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x15151A80: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x15151A84: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x15151A88: sw          $a1, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r5;
    // 0x15151A8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15151A90: sw          $t6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r14;
    // 0x15151A94: lbu         $t7, 0x39($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X39);
    // 0x15151A98: sh          $t7, 0xEA($sp)
    MEM_H(0XEA, ctx->r29) = ctx->r15;
    // 0x15151A9C: lbu         $t8, 0x38($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X38);
    // 0x15151AA0: sb          $t8, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r24;
    // 0x15151AA4: lbu         $t9, 0x54($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X54);
    // 0x15151AA8: sb          $t9, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = ctx->r25;
    // 0x15151AAC: lbu         $t0, 0x3A($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3A);
    // 0x15151AB0: sb          $t0, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r8;
    // 0x15151AB4: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x15151AB8: sw          $at, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r1;
    // 0x15151ABC: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x15151AC0: sw          $t3, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r11;
    // 0x15151AC4: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x15151AC8: sw          $at, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r1;
    // 0x15151ACC: lh          $t4, 0x80($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X80);
    // 0x15151AD0: sh          $t4, 0xD8($sp)
    MEM_H(0XD8, ctx->r29) = ctx->r12;
    // 0x15151AD4: lh          $t5, 0x82($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X82);
    // 0x15151AD8: sh          $t5, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = ctx->r13;
    // 0x15151ADC: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x15151AE0: jal         0x150ADA20
    // 0x15151AE4: sw          $t6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15151AE4: sw          $t6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r14;
    after_0:
    // 0x15151AE8: lh          $t7, 0x26($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X26);
    // 0x15151AEC: lh          $t0, 0x24($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X24);
    // 0x15151AF0: addiu       $s4, $s0, 0x60
    ctx->r20 = ADD32(ctx->r16, 0X60);
    // 0x15151AF4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x15151AF8: divu        $zero, $v0, $t8
    lo = S32(U32(ctx->r2) / U32(ctx->r24)); hi = S32(U32(ctx->r2) % U32(ctx->r24));
    // 0x15151AFC: mfhi        $t9
    ctx->r25 = hi;
    // 0x15151B00: addu        $s3, $t9, $t0
    ctx->r19 = ADD32(ctx->r25, ctx->r8);
    // 0x15151B04: bne         $t8, $zero, L_15151B10
    if (ctx->r24 != 0) {
        // 0x15151B08: nop
    
            goto L_15151B10;
    }
    // 0x15151B08: nop

    // 0x15151B0C: break       7
    do_break(353704716);
L_15151B10:
    // 0x15151B10: addiu       $fp, $sp, 0xBC
    ctx->r30 = ADD32(ctx->r29, 0XBC);
    // 0x15151B14: beql        $s3, $zero, L_15151D2C
    if (ctx->r19 == 0) {
        // 0x15151B18: lw          $ra, 0x94($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X94);
            goto L_15151D2C;
    }
    goto skip_0;
    // 0x15151B18: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    skip_0:
L_15151B1C:
    // 0x15151B1C: jal         0x150ADA20
    // 0x15151B20: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15151B20: nop

    after_1:
    // 0x15151B24: lh          $t2, 0x2A($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2A);
    // 0x15151B28: lh          $t4, 0x28($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X28);
    // 0x15151B2C: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x15151B30: divu        $zero, $v0, $t1
    lo = S32(U32(ctx->r2) / U32(ctx->r9)); hi = S32(U32(ctx->r2) % U32(ctx->r9));
    // 0x15151B34: mfhi        $t3
    ctx->r11 = hi;
    // 0x15151B38: addu        $s1, $t3, $t4
    ctx->r17 = ADD32(ctx->r11, ctx->r12);
    // 0x15151B3C: sll         $t5, $s1, 16
    ctx->r13 = S32(ctx->r17 << 16);
    // 0x15151B40: bne         $t1, $zero, L_15151B4C
    if (ctx->r9 != 0) {
        // 0x15151B44: nop
    
            goto L_15151B4C;
    }
    // 0x15151B44: nop

    // 0x15151B48: break       7
    do_break(353704776);
L_15151B4C:
    // 0x15151B4C: sra         $s1, $t5, 16
    ctx->r17 = S32(SIGNED(ctx->r13) >> 16);
    // 0x15151B50: jal         0x150ADA20
    // 0x15151B54: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15151B54: nop

    after_2:
    // 0x15151B58: lh          $t7, 0x2E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2E);
    // 0x15151B5C: lh          $t0, 0x2C($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2C);
    // 0x15151B60: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x15151B64: divu        $zero, $v0, $t8
    lo = S32(U32(ctx->r2) / U32(ctx->r24)); hi = S32(U32(ctx->r2) % U32(ctx->r24));
    // 0x15151B68: mfhi        $t9
    ctx->r25 = hi;
    // 0x15151B6C: addu        $s2, $t9, $t0
    ctx->r18 = ADD32(ctx->r25, ctx->r8);
    // 0x15151B70: sll         $t2, $s2, 16
    ctx->r10 = S32(ctx->r18 << 16);
    // 0x15151B74: sra         $t1, $t2, 16
    ctx->r9 = S32(SIGNED(ctx->r10) >> 16);
    // 0x15151B78: bne         $t8, $zero, L_15151B84
    if (ctx->r24 != 0) {
        // 0x15151B7C: nop
    
            goto L_15151B84;
    }
    // 0x15151B7C: nop

    // 0x15151B80: break       7
    do_break(353704832);
L_15151B84:
    // 0x15151B84: or          $s2, $t1, $zero
    ctx->r18 = ctx->r9 | 0;
    // 0x15151B88: jal         0x151423D8
    // 0x15151B8C: andi        $a0, $t1, 0xFF
    ctx->r4 = ctx->r9 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x15151B8C: andi        $a0, $t1, 0xFF
    ctx->r4 = ctx->r9 & 0XFF;
    after_3:
    // 0x15151B90: addiu       $a0, $s2, -0x40
    ctx->r4 = ADD32(ctx->r18, -0X40);
    // 0x15151B94: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x15151B98: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    // 0x15151B9C: jal         0x151423D8
    // 0x15151BA0: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x15151BA0: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_4:
    // 0x15151BA4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x15151BA8: jal         0x151423D8
    // 0x15151BAC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x15151BAC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_5:
    // 0x15151BB0: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x15151BB4: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x15151BB8: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x15151BBC: jal         0x151423D8
    // 0x15151BC0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x15151BC0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_6:
    // 0x15151BC4: jal         0x150ADA68
    // 0x15151BC8: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x15151BC8: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    after_7:
    // 0x15151BCC: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15151BD0: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15151BD4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15151BD8: jal         0x150ADA20
    // 0x15151BDC: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x15151BDC: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    after_8:
    // 0x15151BE0: lbu         $t5, 0x56($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X56);
    // 0x15151BE4: lbu         $t8, 0x55($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X55);
    // 0x15151BE8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x15151BEC: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x15151BF0: mfhi        $t7
    ctx->r15 = hi;
    // 0x15151BF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15151BF8: bne         $t6, $zero, L_15151C04
    if (ctx->r14 != 0) {
        // 0x15151BFC: nop
    
            goto L_15151C04;
    }
    // 0x15151BFC: nop

    // 0x15151C00: break       7
    do_break(353704960);
L_15151C04:
    // 0x15151C04: sb          $t9, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r25;
    // 0x15151C08: jal         0x150ADA20
    // 0x15151C0C: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x15151C0C: nop

    after_9:
    // 0x15151C10: lh          $t0, 0x32($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X32);
    // 0x15151C14: lh          $t3, 0x30($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X30);
    // 0x15151C18: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x15151C1C: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x15151C20: mfhi        $t1
    ctx->r9 = hi;
    // 0x15151C24: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x15151C28: bne         $t2, $zero, L_15151C34
    if (ctx->r10 != 0) {
        // 0x15151C2C: nop
    
            goto L_15151C34;
    }
    // 0x15151C2C: nop

    // 0x15151C30: break       7
    do_break(353705008);
L_15151C34:
    // 0x15151C34: sb          $t4, 0xF1($sp)
    MEM_B(0XF1, ctx->r29) = ctx->r12;
    // 0x15151C38: jal         0x150ADA20
    // 0x15151C3C: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x15151C3C: nop

    after_10:
    // 0x15151C40: lh          $t5, 0x36($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X36);
    // 0x15151C44: lh          $t8, 0x34($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X34);
    // 0x15151C48: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x15151C4C: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x15151C50: mfhi        $t7
    ctx->r15 = hi;
    // 0x15151C54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15151C58: bne         $t6, $zero, L_15151C64
    if (ctx->r14 != 0) {
        // 0x15151C5C: nop
    
            goto L_15151C64;
    }
    // 0x15151C5C: nop

    // 0x15151C60: break       7
    do_break(353705056);
L_15151C64:
    // 0x15151C64: sh          $t9, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r25;
    // 0x15151C68: jal         0x150ADA68
    // 0x15151C6C: nop

    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x15151C6C: nop

    after_11:
    // 0x15151C70: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15151C74: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x15151C78: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15151C7C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15151C80: jal         0x150ADA68
    // 0x15151C84: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x15151C84: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    after_12:
    // 0x15151C88: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15151C8C: neg.s       $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = -ctx->f20.fl;
    // 0x15151C90: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15151C94: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15151C98: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x15151C9C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x15151CA0: mul.s       $f2, $f20, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x15151CA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15151CA8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15151CAC: mul.s       $f18, $f2, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x15151CB0: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    // 0x15151CB4: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x15151CB8: nop

    // 0x15151CBC: mul.s       $f8, $f2, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x15151CC0: swc1        $f18, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f18.u32l;
    // 0x15151CC4: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x15151CC8: swc1        $f8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f8.u32l;
    // 0x15151CCC: lw          $t0, 0x40($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X40);
    // 0x15151CD0: lw          $a3, 0x3C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X3C);
    // 0x15151CD4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x15151CD8: lw          $t2, 0x44($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X44);
    // 0x15151CDC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15151CE0: lw          $t1, 0x48($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X48);
    // 0x15151CE4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15151CE8: lw          $t3, 0x4C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4C);
    // 0x15151CEC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x15151CF0: lw          $t4, 0x50($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X50);
    // 0x15151CF4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x15151CF8: lw          $t5, 0x58($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X58);
    // 0x15151CFC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x15151D00: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x15151D04: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x15151D08: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x15151D0C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x15151D10: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x15151D14: jal         0x15147DA0
    // 0x15151D18: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_15147DA0(rdram, ctx);
        goto after_13;
    // 0x15151D18: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_13:
    // 0x15151D1C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x15151D20: bne         $s3, $zero, L_15151B1C
    if (ctx->r19 != 0) {
        // 0x15151D24: nop
    
            goto L_15151B1C;
    }
    // 0x15151D24: nop

    // 0x15151D28: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
L_15151D2C:
    // 0x15151D2C: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x15151D30: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x15151D34: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x15151D38: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x15151D3C: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x15151D40: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x15151D44: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x15151D48: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x15151D4C: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x15151D50: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x15151D54: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x15151D58: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x15151D5C: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x15151D60: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x15151D64: jr          $ra
    // 0x15151D68: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    return;
    // 0x15151D68: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_15011CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15011CA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15011CA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15011CA8: jal         0x15103800
    // 0x15011CAC: nop

    func_15103800(rdram, ctx);
        goto after_0;
    // 0x15011CAC: nop

    after_0:
    // 0x15011CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15011CB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15011CB8: jr          $ra
    // 0x15011CBC: nop

    return;
    return;
    // 0x15011CBC: nop

;}

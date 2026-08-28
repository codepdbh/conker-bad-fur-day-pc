#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_1518B1AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518B1AC: lwc1        $f4, 0x3C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1518B1B0: lwc1        $f6, 0x170($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X170);
    // 0x1518B1B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518B1B8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x1518B1BC: nop

    // 0x1518B1C0: bc1f        L_1518B1D0
    if (!c1cs) {
        // 0x1518B1C4: nop
    
            goto L_1518B1D0;
    }
    // 0x1518B1C4: nop

    // 0x1518B1C8: jr          $ra
    // 0x1518B1CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1518B1CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518B1D0:
    // 0x1518B1D0: jr          $ra
    // 0x1518B1D4: nop

    return;
    return;
    // 0x1518B1D4: nop

;}
RECOMP_FUNC void func_1517F564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517F564: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1517F568: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1517F56C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1517F570: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1517F574: lhu         $t6, -0x21F8($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X21F8);
    // 0x1517F578: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1517F57C: bne         $t6, $zero, L_1517F58C
    if (ctx->r14 != 0) {
        // 0x1517F580: nop
    
            goto L_1517F58C;
    }
    // 0x1517F580: nop

    // 0x1517F584: b           L_1517F710
    // 0x1517F588: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
        goto L_1517F710;
    // 0x1517F588: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
L_1517F58C:
    // 0x1517F58C: lbu         $v0, -0x2275($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2275);
    // 0x1517F590: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1517F594: bne         $v0, $zero, L_1517F5A4
    if (ctx->r2 != 0) {
        // 0x1517F598: nop
    
            goto L_1517F5A4;
    }
    // 0x1517F598: nop

    // 0x1517F59C: b           L_1517F710
    // 0x1517F5A0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
        goto L_1517F710;
    // 0x1517F5A0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
L_1517F5A4:
    // 0x1517F5A4: lbu         $t7, -0x2274($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X2274);
    // 0x1517F5A8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1517F5AC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1517F5B0: beq         $t7, $zero, L_1517F614
    if (ctx->r15 == 0) {
        // 0x1517F5B4: lwc1        $f2, 0x20($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
            goto L_1517F614;
    }
    // 0x1517F5B4: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1517F5B8: jal         0x15048A40
    // 0x1517F5BC: lbu         $a0, -0x2277($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2277);
    func_15048A40(rdram, ctx);
        goto after_0;
    // 0x1517F5BC: lbu         $a0, -0x2277($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2277);
    after_0:
    // 0x1517F5C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1517F5C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1517F5C8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1517F5CC: lbu         $t8, -0x2275($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X2275);
    // 0x1517F5D0: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x1517F5D4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1517F5D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1517F5DC: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x1517F5E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1517F5E4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1517F5E8: bgez        $t8, L_1517F5FC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1517F5EC: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1517F5FC;
    }
    // 0x1517F5EC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1517F5F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1517F5F4: nop

    // 0x1517F5F8: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_1517F5FC:
    // 0x1517F5FC: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x1517F600: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x1517F604: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1517F608: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x1517F60C: b           L_1517F614
    // 0x1517F610: nop

        goto L_1517F614;
    // 0x1517F610: nop

L_1517F614:
    // 0x1517F614: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x1517F618: lbu         $t3, -0x2276($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X2276);
    // 0x1517F61C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x1517F620: addiu       $t5, $t5, -0x2FF0
    ctx->r13 = ADD32(ctx->r13, -0X2FF0);
    // 0x1517F624: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x1517F628: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x1517F62C: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x1517F630: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x1517F634: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x1517F638: lbu         $t6, 0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3);
    // 0x1517F63C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1517F640: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x1517F644: subu        $t7, $t6, $v1
    ctx->r15 = SUB32(ctx->r14, ctx->r3);
    // 0x1517F648: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x1517F64C: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1517F650: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1517F654: mul.s       $f18, $f4, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1517F658: bgezl       $v1, L_1517F670
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1517F65C: lbu         $t0, 0x1($v0)
        ctx->r8 = MEM_BU(ctx->r2, 0X1);
            goto L_1517F670;
    }
    goto skip_0;
    // 0x1517F65C: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    skip_0:
    // 0x1517F660: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1517F664: nop

    // 0x1517F668: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1517F66C: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
L_1517F670:
    // 0x1517F670: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x1517F674: add.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x1517F678: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x1517F67C: subu        $t3, $t9, $t0
    ctx->r11 = SUB32(ctx->r25, ctx->r8);
    // 0x1517F680: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x1517F684: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1517F688: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1517F68C: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1517F690: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x1517F694: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1517F698: mul.s       $f18, $f8, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1517F69C: bgezl       $t0, L_1517F6B4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1517F6A0: lbu         $t1, 0x2($v0)
        ctx->r9 = MEM_BU(ctx->r2, 0X2);
            goto L_1517F6B4;
    }
    goto skip_1;
    // 0x1517F6A0: lbu         $t1, 0x2($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2);
    skip_1:
    // 0x1517F6A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1517F6A8: nop

    // 0x1517F6AC: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x1517F6B0: lbu         $t1, 0x2($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2);
L_1517F6B4:
    // 0x1517F6B4: lbu         $t5, 0x5($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X5);
    // 0x1517F6B8: add.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x1517F6BC: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x1517F6C0: subu        $t6, $t5, $t1
    ctx->r14 = SUB32(ctx->r13, ctx->r9);
    // 0x1517F6C4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1517F6C8: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1517F6CC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1517F6D0: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1517F6D4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x1517F6D8: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1517F6DC: mul.s       $f18, $f4, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1517F6E0: bgezl       $t1, L_1517F6F8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1517F6E4: add.s       $f6, $f18, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
            goto L_1517F6F8;
    }
    goto skip_2;
    // 0x1517F6E4: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    skip_2:
    // 0x1517F6E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1517F6EC: nop

    // 0x1517F6F0: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1517F6F4: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
L_1517F6F8:
    // 0x1517F6F8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1517F6FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1517F700: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1517F704: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x1517F708: jal         0x1517F08C
    // 0x1517F70C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_1517F08C(rdram, ctx);
        goto after_1;
    // 0x1517F70C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
L_1517F710:
    // 0x1517F710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1517F714: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1517F718: jr          $ra
    // 0x1517F71C: nop

    return;
    return;
    // 0x1517F71C: nop

;}
RECOMP_FUNC void func_15073F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073F5C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15073F60: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15073F64: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15073F68: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x15073F6C: sb          $t6, 0x2CB($t7)
    MEM_B(0X2CB, ctx->r15) = ctx->r14;
    // 0x15073F70: jr          $ra
    // 0x15073F74: nop

    return;
    return;
    // 0x15073F74: nop

;}
RECOMP_FUNC void func_151787AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151787AC: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x151787B0: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x151787B4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x151787B8: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x151787BC: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x151787C0: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x151787C4: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x151787C8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x151787CC: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x151787D0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x151787D4: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x151787D8: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x151787DC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x151787E0: lw          $a1, 0x18($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X18);
    // 0x151787E4: lw          $a2, 0x1C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X1C);
    // 0x151787E8: lw          $a3, 0x20($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X20);
    // 0x151787EC: addiu       $at, $zero, -0x8000
    ctx->r1 = ADD32(0, -0X8000);
    // 0x151787F0: sh          $a1, 0x28($s3)
    MEM_H(0X28, ctx->r19) = ctx->r5;
    // 0x151787F4: sh          $a2, 0x2A($s3)
    MEM_H(0X2A, ctx->r19) = ctx->r6;
    // 0x151787F8: bne         $v0, $at, L_15178818
    if (ctx->r2 != ctx->r1) {
        // 0x151787FC: sh          $a3, 0x2C($s3)
        MEM_H(0X2C, ctx->r19) = ctx->r7;
            goto L_15178818;
    }
    // 0x151787FC: sh          $a3, 0x2C($s3)
    MEM_H(0X2C, ctx->r19) = ctx->r7;
    // 0x15178800: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x15178804: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15178808: lwc1        $f20, 0x4($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1517880C: lwc1        $f22, 0x8($v0)
    ctx->f22.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15178810: b           L_1517883C
    // 0x15178814: mtc1        $a1, $f10
    ctx->f10.u32l = ctx->r5;
        goto L_1517883C;
    // 0x15178814: mtc1        $a1, $f10
    ctx->f10.u32l = ctx->r5;
L_15178818:
    // 0x15178818: lh          $t6, 0x10($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X10);
    // 0x1517881C: lh          $t7, 0x12($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X12);
    // 0x15178820: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x15178824: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15178828: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x1517882C: cvt.s.w     $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    ctx->f22.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15178830: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15178834: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15178838: mtc1        $a1, $f10
    ctx->f10.u32l = ctx->r5;
L_1517883C:
    // 0x1517883C: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x15178840: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15178844: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15178848: lui         $s6, 0x8008
    ctx->r22 = S32(0X8008 << 16);
    // 0x1517884C: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x15178850: addiu       $s6, $s6, 0x2FA0
    ctx->r22 = ADD32(ctx->r22, 0X2FA0);
    // 0x15178854: addiu       $s1, $s1, -0x63F0
    ctx->r17 = ADD32(ctx->r17, -0X63F0);
    // 0x15178858: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1517885C: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x15178860: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15178864: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x15178868: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1517886C: sub.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x15178870: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x15178874: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15178878: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1517887C: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15178880: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x15178884: sub.s       $f14, $f20, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x15178888: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x1517888C: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15178890: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15178894: sub.s       $f16, $f22, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f22.fl - ctx->f4.fl;
    // 0x15178898: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1517889C: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x151788A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151788A4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x151788A8: add.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151788AC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151788B0: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x151788B4: nop

    // 0x151788B8: bc1f        L_1517891C
    if (!c1cs) {
        // 0x151788BC: nop
    
            goto L_1517891C;
    }
    // 0x151788BC: nop

    // 0x151788C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151788C4: nop

    // 0x151788C8: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151788CC: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x151788D0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151788D4: mul.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x151788D8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151788DC: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x151788E0: nop

    // 0x151788E4: sw          $t9, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r25;
    // 0x151788E8: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151788EC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151788F0: mul.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x151788F4: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151788F8: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x151788FC: nop

    // 0x15178900: sw          $t2, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r10;
    // 0x15178904: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15178908: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1517890C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15178910: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x15178914: nop

    // 0x15178918: sw          $t4, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r12;
L_1517891C:
    // 0x1517891C: lw          $t5, 0x0($s6)
    ctx->r13 = MEM_W(ctx->r22, 0X0);
    // 0x15178920: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15178924: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x15178928: bltz        $t5, L_151789B4
    if (SIGNED(ctx->r13) < 0) {
        // 0x1517892C: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_151789B4;
    }
    // 0x1517892C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15178930: lwc1        $f22, 0x71E4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X71E4);
    // 0x15178934: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15178938: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1517893C: addiu       $s5, $s5, -0x19D8
    ctx->r21 = ADD32(ctx->r21, -0X19D8);
L_15178940:
    // 0x15178940: lw          $t7, 0x18($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X18);
    // 0x15178944: lw          $t8, 0x1C($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X1C);
    // 0x15178948: lw          $t9, 0x20($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X20);
    // 0x1517894C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x15178950: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x15178954: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x15178958: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1517895C: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x15178960: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x15178964: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x15178968: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x1517896C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15178970: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15178974: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15178978: addu        $a0, $s0, $t6
    ctx->r4 = ADD32(ctx->r16, ctx->r14);
    // 0x1517897C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15178980: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x15178984: jal         0x150A6360
    // 0x15178988: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_150A6360(rdram, ctx);
        goto after_0;
    // 0x15178988: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1517898C: beq         $v0, $zero, L_1517899C
    if (ctx->r2 == 0) {
        // 0x15178990: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_1517899C;
    }
    // 0x15178990: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15178994: sllv        $t2, $t1, $s2
    ctx->r10 = S32(ctx->r9 << (ctx->r18 & 31));
    // 0x15178998: or          $s4, $s4, $t2
    ctx->r20 = ctx->r20 | ctx->r10;
L_1517899C:
    // 0x1517899C: lw          $t3, 0x0($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X0);
    // 0x151789A0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x151789A4: addiu       $s0, $s0, 0x180
    ctx->r16 = ADD32(ctx->r16, 0X180);
    // 0x151789A8: slt         $at, $t3, $s2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x151789AC: beq         $at, $zero, L_15178940
    if (ctx->r1 == 0) {
        // 0x151789B0: addiu       $s1, $s1, 0x40
        ctx->r17 = ADD32(ctx->r17, 0X40);
            goto L_15178940;
    }
    // 0x151789B0: addiu       $s1, $s1, 0x40
    ctx->r17 = ADD32(ctx->r17, 0X40);
L_151789B4:
    // 0x151789B4: lbu         $t4, 0x37($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X37);
    // 0x151789B8: sb          $s4, 0x36($s3)
    MEM_B(0X36, ctx->r19) = ctx->r20;
    // 0x151789BC: beql        $t4, $zero, L_15178A54
    if (ctx->r12 == 0) {
        // 0x151789C0: lh          $v0, 0x14($s3)
        ctx->r2 = MEM_H(ctx->r19, 0X14);
            goto L_15178A54;
    }
    goto skip_0;
    // 0x151789C0: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    skip_0:
    // 0x151789C4: lhu         $a0, 0x2E($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X2E);
    // 0x151789C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151789CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151789D0: bne         $a0, $zero, L_15178A18
    if (ctx->r4 != 0) {
        // 0x151789D4: addiu       $a1, $zero, 0x2710
        ctx->r5 = ADD32(0, 0X2710);
            goto L_15178A18;
    }
    // 0x151789D4: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    // 0x151789D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151789DC: lw          $t5, 0x18($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X18);
    // 0x151789E0: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x151789E4: addiu       $t9, $zero, 0x320
    ctx->r25 = ADD32(0, 0X320);
    // 0x151789E8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151789EC: lw          $t6, 0x1C($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X1C);
    // 0x151789F0: addiu       $a0, $zero, 0x4A2
    ctx->r4 = ADD32(0, 0X4A2);
    // 0x151789F4: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    // 0x151789F8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151789FC: lw          $t7, 0x20($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X20);
    // 0x15178A00: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x15178A04: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x15178A08: jal         0x10010F88
    // 0x15178A0C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_10010F88(rdram, ctx);
        goto after_1;
    // 0x15178A0C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_1:
    // 0x15178A10: b           L_15178A50
    // 0x15178A14: sh          $v0, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = ctx->r2;
        goto L_15178A50;
    // 0x15178A14: sh          $v0, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = ctx->r2;
L_15178A18:
    // 0x15178A18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15178A1C: lw          $t1, 0x18($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X18);
    // 0x15178A20: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x15178A24: addiu       $t5, $zero, 0x320
    ctx->r13 = ADD32(0, 0X320);
    // 0x15178A28: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15178A2C: lw          $t2, 0x1C($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X1C);
    // 0x15178A30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15178A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15178A38: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x15178A3C: lw          $t3, 0x20($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X20);
    // 0x15178A40: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x15178A44: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x15178A48: jal         0x1000F91C
    // 0x15178A4C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    func_1000F91C(rdram, ctx);
        goto after_2;
    // 0x15178A4C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_2:
L_15178A50:
    // 0x15178A50: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
L_15178A54:
    // 0x15178A54: addiu       $at, $zero, -0x8000
    ctx->r1 = ADD32(0, -0X8000);
    // 0x15178A58: bne         $v0, $at, L_15178A94
    if (ctx->r2 != ctx->r1) {
        // 0x15178A5C: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_15178A94;
    }
    // 0x15178A5C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x15178A60: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x15178A64: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15178A68: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15178A6C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15178A70: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15178A74: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15178A78: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x15178A7C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15178A80: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x15178A84: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x15178A88: nop

    // 0x15178A8C: b           L_15178AA0
    // 0x15178A90: lw          $t1, 0x18($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X18);
        goto L_15178AA0;
    // 0x15178A90: lw          $t1, 0x18($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X18);
L_15178A94:
    // 0x15178A94: lh          $a3, 0x10($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X10);
    // 0x15178A98: lh          $a1, 0x12($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X12);
    // 0x15178A9C: lw          $t1, 0x18($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X18);
L_15178AA0:
    // 0x15178AA0: lh          $t9, 0x30($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X30);
    // 0x15178AA4: lw          $t2, 0x1C($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X1C);
    // 0x15178AA8: subu        $v0, $a3, $t1
    ctx->r2 = SUB32(ctx->r7, ctx->r9);
    // 0x15178AAC: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15178AB0: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x15178AB4: subu        $v1, $a1, $t2
    ctx->r3 = SUB32(ctx->r5, ctx->r10);
    // 0x15178AB8: lw          $t3, 0x20($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X20);
    // 0x15178ABC: subu        $a0, $t0, $t3
    ctx->r4 = SUB32(ctx->r8, ctx->r11);
    // 0x15178AC0: mflo        $t4
    ctx->r12 = lo;
    // 0x15178AC4: nop

    // 0x15178AC8: nop

    // 0x15178ACC: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15178AD0: mflo        $t5
    ctx->r13 = lo;
    // 0x15178AD4: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x15178AD8: nop

    // 0x15178ADC: multu       $a0, $a0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15178AE0: mflo        $t7
    ctx->r15 = lo;
    // 0x15178AE4: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x15178AE8: slti        $at, $a2, 0x2711
    ctx->r1 = SIGNED(ctx->r6) < 0X2711 ? 1 : 0;
    // 0x15178AEC: bnel        $at, $zero, L_15178B34
    if (ctx->r1 != 0) {
        // 0x15178AF0: lh          $v0, 0x32($s3)
        ctx->r2 = MEM_H(ctx->r19, 0X32);
            goto L_15178B34;
    }
    goto skip_1;
    // 0x15178AF0: lh          $v0, 0x32($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X32);
    skip_1:
    // 0x15178AF4: lh          $v0, 0x32($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X32);
    // 0x15178AF8: addiu       $v1, $zero, 0x640
    ctx->r3 = ADD32(0, 0X640);
    // 0x15178AFC: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15178B00: beql        $v1, $v0, L_15178B6C
    if (ctx->r3 == ctx->r2) {
        // 0x15178B04: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_15178B6C;
    }
    goto skip_2;
    // 0x15178B04: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_2:
    // 0x15178B08: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x15178B0C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x15178B10: addiu       $t1, $t9, 0x28
    ctx->r9 = ADD32(ctx->r25, 0X28);
    // 0x15178B14: sh          $t1, 0x32($s3)
    MEM_H(0X32, ctx->r19) = ctx->r9;
    // 0x15178B18: lh          $t2, 0x32($s3)
    ctx->r10 = MEM_H(ctx->r19, 0X32);
    // 0x15178B1C: slti        $at, $t2, 0x641
    ctx->r1 = SIGNED(ctx->r10) < 0X641 ? 1 : 0;
    // 0x15178B20: bnel        $at, $zero, L_15178B6C
    if (ctx->r1 != 0) {
        // 0x15178B24: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_15178B6C;
    }
    goto skip_3;
    // 0x15178B24: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_3:
    // 0x15178B28: b           L_15178B68
    // 0x15178B2C: sh          $v1, 0x32($s3)
    MEM_H(0X32, ctx->r19) = ctx->r3;
        goto L_15178B68;
    // 0x15178B2C: sh          $v1, 0x32($s3)
    MEM_H(0X32, ctx->r19) = ctx->r3;
    // 0x15178B30: lh          $v0, 0x32($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X32);
L_15178B34:
    // 0x15178B34: addiu       $v1, $zero, 0x320
    ctx->r3 = ADD32(0, 0X320);
    // 0x15178B38: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15178B3C: beql        $v1, $v0, L_15178B6C
    if (ctx->r3 == ctx->r2) {
        // 0x15178B40: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_15178B6C;
    }
    goto skip_4;
    // 0x15178B40: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_4:
    // 0x15178B44: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x15178B48: subu        $t4, $v0, $t3
    ctx->r12 = SUB32(ctx->r2, ctx->r11);
    // 0x15178B4C: addiu       $t5, $t4, -0x28
    ctx->r13 = ADD32(ctx->r12, -0X28);
    // 0x15178B50: sh          $t5, 0x32($s3)
    MEM_H(0X32, ctx->r19) = ctx->r13;
    // 0x15178B54: lh          $t6, 0x32($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X32);
    // 0x15178B58: slti        $at, $t6, 0x320
    ctx->r1 = SIGNED(ctx->r14) < 0X320 ? 1 : 0;
    // 0x15178B5C: beql        $at, $zero, L_15178B6C
    if (ctx->r1 == 0) {
        // 0x15178B60: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_15178B6C;
    }
    goto skip_5;
    // 0x15178B60: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_5:
    // 0x15178B64: sh          $v1, 0x32($s3)
    MEM_H(0X32, ctx->r19) = ctx->r3;
L_15178B68:
    // 0x15178B68: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_15178B6C:
    // 0x15178B6C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x15178B70: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x15178B74: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x15178B78: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x15178B7C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x15178B80: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x15178B84: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x15178B88: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x15178B8C: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x15178B90: jr          $ra
    // 0x15178B94: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    return;
    // 0x15178B94: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_15124AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15124AB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15124AB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15124ABC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15124AC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15124AC4: jal         0x15047D60
    // 0x15124AC8: lwc1        $f12, 0x398($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X398);
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x15124AC8: lwc1        $f12, 0x398($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X398);
    after_0:
    // 0x15124ACC: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x15124AD0: lwc1        $f12, 0x398($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X398);
    // 0x15124AD4: jal         0x15047C00
    // 0x15124AD8: swc1        $f4, 0x668($s0)
    MEM_W(0X668, ctx->r16) = ctx->f4.u32l;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x15124AD8: swc1        $f4, 0x668($s0)
    MEM_W(0X668, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x15124ADC: swc1        $f0, 0x66C($s0)
    MEM_W(0X66C, ctx->r16) = ctx->f0.u32l;
    // 0x15124AE0: jal         0x15047D60
    // 0x15124AE4: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x15124AE4: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    after_2:
    // 0x15124AE8: lwc1        $f6, 0x66C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X66C);
    // 0x15124AEC: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    // 0x15124AF0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15124AF4: jal         0x15047C00
    // 0x15124AF8: swc1        $f8, 0x664($s0)
    MEM_W(0X664, ctx->r16) = ctx->f8.u32l;
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x15124AF8: swc1        $f8, 0x664($s0)
    MEM_W(0X664, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x15124AFC: lwc1        $f10, 0x66C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X66C);
    // 0x15124B00: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15124B04: swc1        $f16, 0x66C($s0)
    MEM_W(0X66C, ctx->r16) = ctx->f16.u32l;
    // 0x15124B08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15124B0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15124B10: jr          $ra
    // 0x15124B14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x15124B14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1506DE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506DE84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506DE88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1506DE8C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506DE90: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506DE94: sltiu       $at, $t6, 0xE
    ctx->r1 = ctx->r14 < 0XE ? 1 : 0;
    // 0x1506DE98: beq         $at, $zero, L_1506E0DC
    if (ctx->r1 == 0) {
        // 0x1506DE9C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_1506E0DC;
    }
    // 0x1506DE9C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1506DEA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506DEA4: addu        $at, $at, $t6
    gpr jr_addend_1506DEAC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1506DEA8: lw          $t6, -0x62AC($at)
    ctx->r14 = ADD32(ctx->r1, -0X62AC);
    // 0x1506DEAC: jr          $t6
    // 0x1506DEB0: nop

    switch (jr_addend_1506DEAC >> 2) {
        case 0: goto L_1506DEB4; break;
        case 1: goto L_1506DF0C; break;
        case 2: goto L_1506DF84; break;
        case 3: goto L_1506DFA4; break;
        case 4: goto L_1506DFC4; break;
        case 5: goto L_1506DFE4; break;
        case 6: goto L_1506E010; break;
        case 7: goto L_1506E03C; break;
        case 8: goto L_1506E068; break;
        case 9: goto L_1506E078; break;
        case 10: goto L_1506E088; break;
        case 11: goto L_1506E098; break;
        case 12: goto L_1506E0A8; break;
        case 13: goto L_1506E0D4; break;
        default: switch_error(__func__, 0x1506DEAC, 0x80099D54);
    }
    // 0x1506DEB0: nop

L_1506DEB4:
    // 0x1506DEB4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506DEB8: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506DEBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1506DEC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506DEC4: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x1506DEC8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x1506DECC: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x1506DED0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x1506DED4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x1506DED8: bc1fl       L_1506E0E0
    if (!c1cs) {
        // 0x1506DEDC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1506E0E0;
    }
    goto skip_0;
    // 0x1506DEDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x1506DEE0: lwc1        $f0, -0x6274($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6274);
    // 0x1506DEE4: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1506DEE8: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1506DEEC: lw          $a2, 0x1C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1C);
    // 0x1506DEF0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1506DEF4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1506DEF8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x1506DEFC: jal         0x151875E0
    // 0x1506DF00: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_151875E0(rdram, ctx);
        goto after_0;
    // 0x1506DF00: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x1506DF04: b           L_1506E0E0
    // 0x1506DF08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506E0E0;
    // 0x1506DF08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506DF0C:
    // 0x1506DF0C: jal         0x150ADA20
    // 0x1506DF10: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1506DF10: nop

    after_1:
    // 0x1506DF14: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x1506DF18: sltiu       $at, $t9, 0x40
    ctx->r1 = ctx->r25 < 0X40 ? 1 : 0;
    // 0x1506DF1C: beq         $at, $zero, L_1506E0DC
    if (ctx->r1 == 0) {
        // 0x1506DF20: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_1506E0DC;
    }
    // 0x1506DF20: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506DF24: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506DF28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506DF2C: lwc1        $f8, -0x6270($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6270);
    // 0x1506DF30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506DF34: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1506DF38: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1506DF3C: lw          $a2, 0x1C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1C);
    // 0x1506DF40: lwc1        $f10, -0x626C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X626C);
    // 0x1506DF44: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x1506DF48: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x1506DF4C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x1506DF50: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x1506DF54: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x1506DF58: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x1506DF5C: jal         0x151875E0
    // 0x1506DF60: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_151875E0(rdram, ctx);
        goto after_2;
    // 0x1506DF60: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x1506DF64: addiu       $t2, $zero, 0x106
    ctx->r10 = ADD32(0, 0X106);
    // 0x1506DF68: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506DF6C: sw          $t2, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r10;
    // 0x1506DF70: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1506DF74: jal         0x1506BA4C
    // 0x1506DF78: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    func_1506BA4C(rdram, ctx);
        goto after_3;
    // 0x1506DF78: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    after_3:
    // 0x1506DF7C: b           L_1506E0E0
    // 0x1506DF80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506E0E0;
    // 0x1506DF80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506DF84:
    // 0x1506DF84: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1506DF88: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x1506DF8C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x1506DF90: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1506DF94: jal         0x1516F1C0
    // 0x1506DF98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1516F1C0(rdram, ctx);
        goto after_4;
    // 0x1506DF98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x1506DF9C: b           L_1506E0E0
    // 0x1506DFA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506E0E0;
    // 0x1506DFA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506DFA4:
    // 0x1506DFA4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1506DFA8: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x1506DFAC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x1506DFB0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1506DFB4: jal         0x1516F1C0
    // 0x1506DFB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1516F1C0(rdram, ctx);
        goto after_5;
    // 0x1506DFB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x1506DFBC: b           L_1506E0E0
    // 0x1506DFC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506E0E0;
    // 0x1506DFC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506DFC4:
    // 0x1506DFC4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1506DFC8: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x1506DFCC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x1506DFD0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1506DFD4: jal         0x1516F1C0
    // 0x1506DFD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1516F1C0(rdram, ctx);
        goto after_6;
    // 0x1506DFD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x1506DFDC: b           L_1506E0E0
    // 0x1506DFE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506E0E0;
    // 0x1506DFE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506DFE4:
    // 0x1506DFE4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1506DFE8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1506DFEC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1506DFF0: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x1506DFF4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x1506DFF8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x1506DFFC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1506E000: jal         0x1516F2F8
    // 0x1506E004: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1516F2F8(rdram, ctx);
        goto after_7;
    // 0x1506E004: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_7:
    // 0x1506E008: b           L_1506E0E0
    // 0x1506E00C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506E0E0;
    // 0x1506E00C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506E010:
    // 0x1506E010: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1506E014: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x1506E018: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1506E01C: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x1506E020: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x1506E024: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x1506E028: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1506E02C: jal         0x1516F2F8
    // 0x1506E030: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1516F2F8(rdram, ctx);
        goto after_8;
    // 0x1506E030: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_8:
    // 0x1506E034: b           L_1506E0E0
    // 0x1506E038: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506E0E0;
    // 0x1506E038: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506E03C:
    // 0x1506E03C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1506E040: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1506E044: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1506E048: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x1506E04C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x1506E050: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x1506E054: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1506E058: jal         0x1516F2F8
    // 0x1506E05C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1516F2F8(rdram, ctx);
        goto after_9;
    // 0x1506E05C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_9:
    // 0x1506E060: b           L_1506E0E0
    // 0x1506E064: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506E0E0;
    // 0x1506E064: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506E068:
    // 0x1506E068: jal         0x1506E0EC
    // 0x1506E06C: nop

    func_1506E0EC(rdram, ctx);
        goto after_10;
    // 0x1506E06C: nop

    after_10:
    // 0x1506E070: b           L_1506E0E0
    // 0x1506E074: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506E0E0;
    // 0x1506E074: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506E078:
    // 0x1506E078: jal         0x150AFE64
    // 0x1506E07C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_150AFE64(rdram, ctx);
        goto after_11;
    // 0x1506E07C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x1506E080: b           L_1506E0E0
    // 0x1506E084: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506E0E0;
    // 0x1506E084: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506E088:
    // 0x1506E088: jal         0x150AFE64
    // 0x1506E08C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_150AFE64(rdram, ctx);
        goto after_12;
    // 0x1506E08C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x1506E090: b           L_1506E0E0
    // 0x1506E094: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506E0E0;
    // 0x1506E094: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506E098:
    // 0x1506E098: jal         0x1506E2CC
    // 0x1506E09C: nop

    func_1506E2CC(rdram, ctx);
        goto after_13;
    // 0x1506E09C: nop

    after_13:
    // 0x1506E0A0: b           L_1506E0E0
    // 0x1506E0A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506E0E0;
    // 0x1506E0A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506E0A8:
    // 0x1506E0A8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1506E0AC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1506E0B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1506E0B4: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x1506E0B8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x1506E0BC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x1506E0C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1506E0C4: jal         0x1516F2F8
    // 0x1506E0C8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1516F2F8(rdram, ctx);
        goto after_14;
    // 0x1506E0C8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_14:
    // 0x1506E0CC: b           L_1506E0E0
    // 0x1506E0D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506E0E0;
    // 0x1506E0D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506E0D4:
    // 0x1506E0D4: jal         0x150AFDB0
    // 0x1506E0D8: nop

    func_150AFDB0(rdram, ctx);
        goto after_15;
    // 0x1506E0D8: nop

    after_15:
L_1506E0DC:
    // 0x1506E0DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506E0E0:
    // 0x1506E0E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506E0E4: jr          $ra
    // 0x1506E0E8: nop

    return;
    return;
    // 0x1506E0E8: nop

;}
RECOMP_FUNC void func_1514D64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514D64C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x1514D650: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1514D654: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1514D658: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x1514D65C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x1514D660: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1514D664: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1514D668: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1514D66C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1514D670: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1514D674: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1514D678: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
    // 0x1514D67C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1514D680: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x1514D684: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1514D688: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1514D68C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1514D690: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514D694: lwc1        $f18, 0x5DF4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5DF4);
    // 0x1514D698: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x1514D69C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x1514D6A0: ori         $t7, $t7, 0x2012
    ctx->r15 = ctx->r15 | 0X2012;
    // 0x1514D6A4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1514D6A8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514D6AC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1514D6B0: addiu       $t1, $zero, 0x401
    ctx->r9 = ADD32(0, 0X401);
    // 0x1514D6B4: sb          $t6, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r14;
    // 0x1514D6B8: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x1514D6BC: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x1514D6C0: sw          $t7, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r15;
    // 0x1514D6C4: sh          $zero, 0x78($sp)
    MEM_H(0X78, ctx->r29) = 0;
    // 0x1514D6C8: sb          $t8, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r24;
    // 0x1514D6CC: sb          $t9, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r25;
    // 0x1514D6D0: sb          $zero, 0x85($sp)
    MEM_B(0X85, ctx->r29) = 0;
    // 0x1514D6D4: sb          $zero, 0x86($sp)
    MEM_B(0X86, ctx->r29) = 0;
    // 0x1514D6D8: sb          $t0, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r8;
    // 0x1514D6DC: sh          $t1, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r9;
    // 0x1514D6E0: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x1514D6E4: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x1514D6E8: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x1514D6EC: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x1514D6F0: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x1514D6F4: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x1514D6F8: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
    // 0x1514D6FC: swc1        $f2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f2.u32l;
    // 0x1514D700: swc1        $f12, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f12.u32l;
    // 0x1514D704: swc1        $f12, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f12.u32l;
    // 0x1514D708: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    // 0x1514D70C: swc1        $f6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f6.u32l;
    // 0x1514D710: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    // 0x1514D714: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x1514D718: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x1514D71C: lbu         $t2, 0x3B($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3B);
    // 0x1514D720: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x1514D724: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1514D728: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x1514D72C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1514D730: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1514D734: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1514D738: addiu       $t3, $zero, 0x2B
    ctx->r11 = ADD32(0, 0X2B);
    // 0x1514D73C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1514D740: sw          $s0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r16;
    // 0x1514D744: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x1514D748: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x1514D74C: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x1514D750: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x1514D754: sb          $t3, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r11;
    // 0x1514D758: sb          $zero, 0x120($sp)
    MEM_B(0X120, ctx->r29) = 0;
    // 0x1514D75C: sb          $zero, 0x121($sp)
    MEM_B(0X121, ctx->r29) = 0;
    // 0x1514D760: sb          $zero, 0x122($sp)
    MEM_B(0X122, ctx->r29) = 0;
    // 0x1514D764: sb          $zero, 0x123($sp)
    MEM_B(0X123, ctx->r29) = 0;
    // 0x1514D768: sb          $t4, 0x72($sp)
    MEM_B(0X72, ctx->r29) = ctx->r12;
    // 0x1514D76C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1514D770: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1514D774: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1514D778: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x1514D77C: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x1514D780: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x1514D784: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1514D788: sb          $t2, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r10;
    // 0x1514D78C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x1514D790: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x1514D794: jal         0x15189FF0
    // 0x1514D798: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    func_15189FF0(rdram, ctx);
        goto after_0;
    // 0x1514D798: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x1514D79C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514D7A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1514D7A4: jal         0x1514EC1C
    // 0x1514D7A8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_1514EC1C(rdram, ctx);
        goto after_1;
    // 0x1514D7A8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_1:
    // 0x1514D7AC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1514D7B0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1514D7B4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1514D7B8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1514D7BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514D7C0: lwc1        $f14, 0x5DF8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5DF8);
    // 0x1514D7C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1514D7C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514D7CC: lwc1        $f16, 0x5DFC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5DFC);
    // 0x1514D7D0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x1514D7D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1514D7D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514D7DC: lwc1        $f18, 0x5E00($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5E00);
    // 0x1514D7E0: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x1514D7E4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x1514D7E8: ori         $t6, $t6, 0x2012
    ctx->r14 = ctx->r14 | 0X2012;
    // 0x1514D7EC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1514D7F0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1514D7F4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514D7F8: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    // 0x1514D7FC: sb          $t5, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r13;
    // 0x1514D800: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x1514D804: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x1514D808: sw          $t6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r14;
    // 0x1514D80C: sh          $zero, 0x78($sp)
    MEM_H(0X78, ctx->r29) = 0;
    // 0x1514D810: sb          $t7, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r15;
    // 0x1514D814: sb          $t8, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r24;
    // 0x1514D818: sb          $zero, 0x85($sp)
    MEM_B(0X85, ctx->r29) = 0;
    // 0x1514D81C: sb          $zero, 0x86($sp)
    MEM_B(0X86, ctx->r29) = 0;
    // 0x1514D820: sb          $t9, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r25;
    // 0x1514D824: sh          $t0, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r8;
    // 0x1514D828: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
    // 0x1514D82C: swc1        $f2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f2.u32l;
    // 0x1514D830: swc1        $f12, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f12.u32l;
    // 0x1514D834: swc1        $f14, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f14.u32l;
    // 0x1514D838: swc1        $f14, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f14.u32l;
    // 0x1514D83C: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x1514D840: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x1514D844: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x1514D848: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x1514D84C: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x1514D850: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x1514D854: swc1        $f16, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
    // 0x1514D858: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x1514D85C: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x1514D860: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x1514D864: lbu         $t1, 0x3B($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X3B);
    // 0x1514D868: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x1514D86C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1514D870: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1514D874: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1514D878: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x1514D87C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1514D880: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1514D884: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1514D888: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x1514D88C: sw          $s0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r16;
    // 0x1514D890: sb          $t2, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r10;
    // 0x1514D894: sb          $zero, 0x120($sp)
    MEM_B(0X120, ctx->r29) = 0;
    // 0x1514D898: sb          $zero, 0x121($sp)
    MEM_B(0X121, ctx->r29) = 0;
    // 0x1514D89C: sb          $zero, 0x122($sp)
    MEM_B(0X122, ctx->r29) = 0;
    // 0x1514D8A0: sb          $zero, 0x123($sp)
    MEM_B(0X123, ctx->r29) = 0;
    // 0x1514D8A4: sb          $zero, 0x72($sp)
    MEM_B(0X72, ctx->r29) = 0;
    // 0x1514D8A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1514D8AC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1514D8B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1514D8B4: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x1514D8B8: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x1514D8BC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x1514D8C0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1514D8C4: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    // 0x1514D8C8: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x1514D8CC: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x1514D8D0: sb          $t1, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r9;
    // 0x1514D8D4: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x1514D8D8: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x1514D8DC: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x1514D8E0: jal         0x15189FF0
    // 0x1514D8E4: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    func_15189FF0(rdram, ctx);
        goto after_2;
    // 0x1514D8E4: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x1514D8E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514D8EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1514D8F0: jal         0x1514EC1C
    // 0x1514D8F4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_1514EC1C(rdram, ctx);
        goto after_3;
    // 0x1514D8F4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x1514D8F8: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x1514D8FC: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x1514D900: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1514D904: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1514D908: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1514D90C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1514D910: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1514D914: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x1514D918: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x1514D91C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x1514D920: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1514D924: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x1514D928: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x1514D92C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1514D930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1514D934: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1514D938: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x1514D93C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1514D940: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1514D944: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1514D948: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1514D94C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1514D950: jal         0x15160A58
    // 0x1514D954: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_15160A58(rdram, ctx);
        goto after_4;
    // 0x1514D954: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_4:
    // 0x1514D958: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1514D95C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x1514D960: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    // 0x1514D964: jr          $ra
    // 0x1514D968: nop

    return;
    return;
    // 0x1514D968: nop

;}
RECOMP_FUNC void func_151429E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151429E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151429E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151429E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151429EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151429F0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151429F4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x151429F8: jal         0x150ADA20
    // 0x151429FC: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151429FC: nop

    after_0:
    // 0x15142A00: lbu         $t8, 0x1B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1B);
    // 0x15142A04: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x15142A08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15142A0C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15142A10: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x15142A14: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15142A18: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15142A1C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x15142A20: addiu       $t1, $t1, -0x5EA0
    ctx->r9 = ADD32(ctx->r9, -0X5EA0);
    // 0x15142A24: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x15142A28: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x15142A2C: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x15142A30: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x15142A34: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
    // 0x15142A38: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x15142A3C: lbu         $t4, 0x1($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X1);
    // 0x15142A40: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
    // 0x15142A44: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x15142A48: lbu         $t6, 0x2($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X2);
    // 0x15142A4C: sb          $t6, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r14;
    // 0x15142A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15142A54: jr          $ra
    // 0x15142A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15142A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151411E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151411E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151411E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151411EC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151411F0: lw          $t6, 0x154($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X154);
    // 0x151411F4: beq         $t6, $zero, L_1514120C
    if (ctx->r14 == 0) {
        // 0x151411F8: nop
    
            goto L_1514120C;
    }
    // 0x151411F8: nop

    // 0x151411FC: lw          $a0, 0x154($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X154);
    // 0x15141200: jal         0x1517E134
    // 0x15141204: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_1517E134(rdram, ctx);
        goto after_0;
    // 0x15141204: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x15141208: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_1514120C:
    // 0x1514120C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15141210: addiu       $v0, $v0, -0x3610
    ctx->r2 = ADD32(ctx->r2, -0X3610);
    // 0x15141214: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x15141218: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x1514121C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x15141220: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15141224: lbu         $t9, 0x168($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X168);
    // 0x15141228: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1514122C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15141230: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x15141234: lw          $t9, -0x6064($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6064);
    // 0x15141238: jalr        $t9
    // 0x1514123C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x1514123C: nop

    after_1:
    // 0x15141240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15141244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15141248: jr          $ra
    // 0x1514124C: nop

    return;
    return;
    // 0x1514124C: nop

;}
RECOMP_FUNC void func_15049148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15049148: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1504914C: nop

    // 0x15049150: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15049154: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15049158: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x1504915C: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15049160: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x15049164: swc1        $f10, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f10.u32l;
    // 0x15049168: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1504916C: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x15049170: swc1        $f18, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f18.u32l;
    // 0x15049174: jr          $ra
    // 0x15049178: nop

    return;
    return;
    // 0x15049178: nop

;}
RECOMP_FUNC void func_151BE824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BE824: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151BE828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151BE82C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151BE830: jal         0x151BE7C8
    // 0x151BE834: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151BE7C8(rdram, ctx);
        goto after_0;
    // 0x151BE834: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151BE838: jal         0x151411C4
    // 0x151BE83C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151411C4(rdram, ctx);
        goto after_1;
    // 0x151BE83C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151BE840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151BE844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151BE848: jr          $ra
    // 0x151BE84C: nop

    return;
    return;
    // 0x151BE84C: nop

;}
RECOMP_FUNC void func_151CC290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CC290: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151CC294: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151CC298: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151CC29C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x151CC2A0: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151CC2A4: jal         0x1515572C
    // 0x151CC2A8: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    func_1515572C(rdram, ctx);
        goto after_0;
    // 0x151CC2A8: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    after_0:
    // 0x151CC2AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151CC2B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151CC2B4: jr          $ra
    // 0x151CC2B8: nop

    return;
    return;
    // 0x151CC2B8: nop

;}
RECOMP_FUNC void func_151AF388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AF388: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x151AF38C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AF390: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x151AF394: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x151AF398: lwc1        $f0, -0x622C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X622C);
    // 0x151AF39C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151AF3A0: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x151AF3A4: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x151AF3A8: neg.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
    // 0x151AF3AC: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151AF3B0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151AF3B4: neg.s       $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = -ctx->f14.fl;
    // 0x151AF3B8: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x151AF3BC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151AF3C0: nop

    // 0x151AF3C4: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151AF3C8: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x151AF3CC: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x151AF3D0: jal         0x150ADA20
    // 0x151AF3D4: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151AF3D4: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151AF3D8: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x151AF3DC: beq         $t6, $zero, L_151AF3EC
    if (ctx->r14 == 0) {
        // 0x151AF3E0: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_151AF3EC;
    }
    // 0x151AF3E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151AF3E4: b           L_151AF3F0
    // 0x151AF3E8: sb          $t7, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r15;
        goto L_151AF3F0;
    // 0x151AF3E8: sb          $t7, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r15;
L_151AF3EC:
    // 0x151AF3EC: sb          $zero, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = 0;
L_151AF3F0:
    // 0x151AF3F0: jal         0x150ADA68
    // 0x151AF3F4: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151AF3F4: nop

    after_1:
    // 0x151AF3F8: jal         0x150ADA20
    // 0x151AF3FC: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151AF3FC: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x151AF400: jal         0x150ADA20
    // 0x151AF404: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151AF404: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_3:
    // 0x151AF408: jal         0x150ADA68
    // 0x151AF40C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151AF40C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_4:
    // 0x151AF410: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AF414: lwc1        $f2, -0x6228($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6228);
    // 0x151AF418: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AF41C: lwc1        $f8, -0x6224($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6224);
    // 0x151AF420: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AF424: lwc1        $f16, -0x6220($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6220);
    // 0x151AF428: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x151AF42C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x151AF430: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151AF434: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x151AF438: divu        $zero, $t1, $at
    lo = S32(U32(ctx->r9) / U32(ctx->r1)); hi = S32(U32(ctx->r9) % U32(ctx->r1));
    // 0x151AF43C: lui         $at, 0x434A
    ctx->r1 = S32(0X434A << 16);
    // 0x151AF440: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151AF444: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151AF448: lui         $at, 0x430E
    ctx->r1 = S32(0X430E << 16);
    // 0x151AF44C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AF450: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151AF454: lbu         $t4, 0x5F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X5F);
    // 0x151AF458: lbu         $t6, 0x83($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X83);
    // 0x151AF45C: mfhi        $t2
    ctx->r10 = hi;
    // 0x151AF460: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x151AF464: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151AF468: addiu       $t0, $t9, 0xA
    ctx->r8 = ADD32(ctx->r25, 0XA);
    // 0x151AF46C: addiu       $t3, $t2, 0x89
    ctx->r11 = ADD32(ctx->r10, 0X89);
    // 0x151AF470: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AF474: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x151AF478: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151AF47C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151AF480: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x151AF484: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x151AF488: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x151AF48C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x151AF490: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151AF494: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x151AF498: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x151AF49C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151AF4A0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151AF4A4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151AF4A8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151AF4AC: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x151AF4B0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x151AF4B4: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x151AF4B8: jal         0x151D9014
    // 0x151AF4BC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    func_151D9014(rdram, ctx);
        goto after_5;
    // 0x151AF4BC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    after_5:
    // 0x151AF4C0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151AF4C4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x151AF4C8: jr          $ra
    // 0x151AF4CC: nop

    return;
    return;
    // 0x151AF4CC: nop

;}
RECOMP_FUNC void func_1507B884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B884: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1507B888: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507B88C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507B890: lbu         $v0, 0x1890($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1890);
    // 0x1507B894: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1507B898: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507B89C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1507B8A0: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x1507B8A4: lw          $v1, 0x6150($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6150);
    // 0x1507B8A8: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1507B8AC: beql        $v1, $zero, L_1507B8E8
    if (ctx->r3 == 0) {
        // 0x1507B8B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507B8E8;
    }
    goto skip_0;
    // 0x1507B8B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1507B8B4: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1507B8B8: lbu         $t8, 0x3E78($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3E78);
    // 0x1507B8BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1507B8C0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x1507B8C4: jalr        $v1
    // 0x1507B8C8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x1507B8C8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x1507B8CC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1507B8D0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x1507B8D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1507B8D8: sw          $t9, 0x154C($at)
    MEM_W(0X154C, ctx->r1) = ctx->r25;
    // 0x1507B8DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1507B8E0: sb          $t0, 0x3E78($at)
    MEM_B(0X3E78, ctx->r1) = ctx->r8;
    // 0x1507B8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507B8E8:
    // 0x1507B8E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1507B8EC: jr          $ra
    // 0x1507B8F0: nop

    return;
    return;
    // 0x1507B8F0: nop

;}
RECOMP_FUNC void func_1503EFC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503EFC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1503EFC8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1503EFCC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1503EFD0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1503EFD4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1503EFD8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1503EFDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1503EFE0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1503EFE4: addiu       $t7, $t7, 0x6660
    ctx->r15 = ADD32(ctx->r15, 0X6660);
    // 0x1503EFE8: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x1503EFEC: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    // 0x1503EFF0: lbu         $t9, 0xE($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0XE);
    // 0x1503EFF4: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x1503EFF8: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x1503EFFC: sh          $t8, 0xC($s2)
    MEM_H(0XC, ctx->r18) = ctx->r24;
    // 0x1503F000: addu        $s3, $s3, $t9
    ctx->r19 = ADD32(ctx->r19, ctx->r25);
    // 0x1503F004: lbu         $s3, -0x76EC($s3)
    ctx->r19 = MEM_BU(ctx->r19, -0X76EC);
    // 0x1503F008: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1503F00C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1503F010: blez        $s3, L_1503F058
    if (SIGNED(ctx->r19) <= 0) {
        // 0x1503F014: addiu       $s4, $zero, 0x14
        ctx->r20 = ADD32(0, 0X14);
            goto L_1503F058;
    }
    // 0x1503F014: addiu       $s4, $zero, 0x14
    ctx->r20 = ADD32(0, 0X14);
L_1503F018:
    // 0x1503F018: jal         0x150ADA20
    // 0x1503F01C: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1503F01C: nop

    after_0:
    // 0x1503F020: divu        $zero, $v0, $s4
    lo = S32(U32(ctx->r2) / U32(ctx->r20)); hi = S32(U32(ctx->r2) % U32(ctx->r20));
    // 0x1503F024: mfhi        $t0
    ctx->r8 = hi;
    // 0x1503F028: addiu       $t1, $t0, -0x5
    ctx->r9 = ADD32(ctx->r8, -0X5);
    // 0x1503F02C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x1503F030: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x1503F034: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1503F038: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1503F03C: bne         $s4, $zero, L_1503F048
    if (ctx->r20 != 0) {
        // 0x1503F040: nop
    
            goto L_1503F048;
    }
    // 0x1503F040: nop

    // 0x1503F044: break       7
    do_break(352579652);
L_1503F048:
    // 0x1503F048: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x1503F04C: addiu       $s1, $s1, 0x68
    ctx->r17 = ADD32(ctx->r17, 0X68);
    // 0x1503F050: bne         $s0, $s3, L_1503F018
    if (ctx->r16 != ctx->r19) {
        // 0x1503F054: swc1        $f6, 0x4C($t3)
        MEM_W(0X4C, ctx->r11) = ctx->f6.u32l;
            goto L_1503F018;
    }
    // 0x1503F054: swc1        $f6, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->f6.u32l;
L_1503F058:
    // 0x1503F058: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1503F05C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1503F060: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1503F064: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1503F068: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1503F06C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1503F070: jr          $ra
    // 0x1503F074: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1503F074: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_150442C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150442C0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x150442C4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x150442C8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x150442CC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150442D0: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x150442D4: lwc1        $f18, 0xC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC);
    // 0x150442D8: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x150442DC: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x150442E0: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x150442E4: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150442E8: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150442EC: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150442F0: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x150442F4: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x150442F8: mul.s       $f16, $f12, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x150442FC: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x15044300: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x15044304: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15044308: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x1504430C: swc1        $f18, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f18.u32l;
    // 0x15044310: lwc1        $f18, 0xC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC);
    // 0x15044314: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15044318: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x1504431C: lwc1        $f10, 0x34($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X34);
    // 0x15044320: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15044324: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15044328: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x1504432C: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15044330: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x15044334: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15044338: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x1504433C: swc1        $f18, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f18.u32l;
    // 0x15044340: lwc1        $f18, 0xC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC);
    // 0x15044344: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15044348: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1504434C: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15044350: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x15044354: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15044358: swc1        $f18, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f18.u32l;
    // 0x1504435C: jr          $ra
    // 0x15044360: nop

    return;
    return;
    // 0x15044360: nop

;}
RECOMP_FUNC void func_150C6460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C6460: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x150C6464: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150C6468: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150C646C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150C6470: sw          $zero, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = 0;
    // 0x150C6474: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x150C6478: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x150C647C: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x150C6480: lw          $t6, 0x1D4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1D4);
    // 0x150C6484: addiu       $t7, $t7, -0x7830
    ctx->r15 = ADD32(ctx->r15, -0X7830);
    // 0x150C6488: beql        $t6, $zero, L_150C64C0
    if (ctx->r14 == 0) {
        // 0x150C648C: lwc1        $f4, 0x14($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
            goto L_150C64C0;
    }
    goto skip_0;
    // 0x150C648C: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    skip_0:
    // 0x150C6490: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150C6494: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    // 0x150C6498: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x150C649C: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x150C64A0: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x150C64A4: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x150C64A8: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x150C64AC: jal         0x15143134
    // 0x150C64B0: lw          $a2, 0x1D4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1D4);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x150C64B0: lw          $a2, 0x1D4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1D4);
    after_0:
    // 0x150C64B4: b           L_150C64D8
    // 0x150C64B8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
        goto L_150C64D8;
    // 0x150C64B8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150C64BC: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
L_150C64C0:
    // 0x150C64C0: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    // 0x150C64C4: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150C64C8: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    // 0x150C64CC: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150C64D0: swc1        $f8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f8.u32l;
    // 0x150C64D4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
L_150C64D8:
    // 0x150C64D8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150C64DC: lwc1        $f0, 0xCC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x150C64E0: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x150C64E4: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150C64E8: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x150C64EC: add.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x150C64F0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x150C64F4: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x150C64F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150C64FC: swc1        $f16, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f16.u32l;
    // 0x150C6500: addiu       $a3, $s0, 0x34
    ctx->r7 = ADD32(ctx->r16, 0X34);
    // 0x150C6504: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
    // 0x150C6508: jal         0x15045800
    // 0x150C650C: swc1        $f18, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f18.u32l;
    func_15045800(rdram, ctx);
        goto after_1;
    // 0x150C650C: swc1        $f18, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x150C6510: beql        $v0, $zero, L_150C66D8
    if (ctx->r2 == 0) {
        // 0x150C6514: lw          $v0, 0xD4($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XD4);
            goto L_150C66D8;
    }
    goto skip_1;
    // 0x150C6514: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
    skip_1:
    // 0x150C6518: jal         0x151D8E20
    // 0x150C651C: nop

    func_151D8E20(rdram, ctx);
        goto after_2;
    // 0x150C651C: nop

    after_2:
    // 0x150C6520: sb          $v0, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r2;
    // 0x150C6524: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x150C6528: jal         0x150ADA68
    // 0x150C652C: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150C652C: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x150C6530: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C6534: lwc1        $f2, 0x43C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X43C);
    // 0x150C6538: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x150C653C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150C6540: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150C6544: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C6548: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150C654C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C6550: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150C6554: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C6558: lwc1        $f6, 0x440($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X440);
    // 0x150C655C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150C6560: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C6564: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150C6568: sb          $t1, 0x68($sp)
    MEM_B(0X68, ctx->r29) = ctx->r9;
    // 0x150C656C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150C6570: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x150C6574: lbu         $t1, 0x5F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X5F);
    // 0x150C6578: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x150C657C: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x150C6580: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x150C6584: sh          $t2, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r10;
    // 0x150C6588: sh          $t3, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r11;
    // 0x150C658C: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x150C6590: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x150C6594: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x150C6598: addiu       $t3, $t3, -0x4BEC
    ctx->r11 = ADD32(ctx->r11, -0X4BEC);
    // 0x150C659C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150C65A0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x150C65A4: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x150C65A8: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x150C65AC: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x150C65B0: lui         $t9, 0x2
    ctx->r25 = S32(0X2 << 16);
    // 0x150C65B4: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x150C65B8: sb          $t6, 0x8A($sp)
    MEM_B(0X8A, ctx->r29) = ctx->r14;
    // 0x150C65BC: ori         $t9, $t9, 0x300
    ctx->r25 = ctx->r25 | 0X300;
    // 0x150C65C0: sh          $t8, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r24;
    // 0x150C65C4: addiu       $t7, $zero, 0x96
    ctx->r15 = ADD32(0, 0X96);
    // 0x150C65C8: sw          $t5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r13;
    // 0x150C65CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150C65D0: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x150C65D4: lbu         $t5, 0x1($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1);
    // 0x150C65D8: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x150C65DC: sw          $t9, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r25;
    // 0x150C65E0: sb          $t7, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r15;
    // 0x150C65E4: lui         $t8, 0x44
    ctx->r24 = S32(0X44 << 16);
    // 0x150C65E8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150C65EC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150C65F0: ori         $t8, $t8, 0x1
    ctx->r24 = ctx->r24 | 0X1;
    // 0x150C65F4: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x150C65F8: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x150C65FC: sh          $zero, 0x78($sp)
    MEM_H(0X78, ctx->r29) = 0;
    // 0x150C6600: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    // 0x150C6604: sb          $t0, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r8;
    // 0x150C6608: sb          $t9, 0x99($sp)
    MEM_B(0X99, ctx->r29) = ctx->r25;
    // 0x150C660C: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x150C6610: sb          $zero, 0x9A($sp)
    MEM_B(0X9A, ctx->r29) = 0;
    // 0x150C6614: sb          $t7, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r15;
    // 0x150C6618: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x150C661C: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x150C6620: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x150C6624: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x150C6628: sb          $t4, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r12;
    // 0x150C662C: sb          $t5, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r13;
    // 0x150C6630: jal         0x150ADA20
    // 0x150C6634: sb          $t6, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150C6634: sb          $t6, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r14;
    after_4:
    // 0x150C6638: jal         0x150ADA20
    // 0x150C663C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150C663C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_5:
    // 0x150C6640: jal         0x150ADA20
    // 0x150C6644: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150C6644: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_6:
    // 0x150C6648: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x150C664C: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150C6650: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x150C6654: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x150C6658: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x150C665C: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150C6660: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x150C6664: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x150C6668: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x150C666C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x150C6670: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x150C6674: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x150C6678: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x150C667C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x150C6680: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x150C6684: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x150C6688: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150C668C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150C6690: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x150C6694: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x150C6698: lbu         $t8, 0xC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XC);
    // 0x150C669C: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x150C66A0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x150C66A4: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x150C66A8: lbu         $t7, 0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1);
    // 0x150C66AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x150C66B0: addiu       $a3, $s0, 0x38
    ctx->r7 = ADD32(ctx->r16, 0X38);
    // 0x150C66B4: jal         0x1513C73C
    // 0x150C66B8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    func_1513C73C(rdram, ctx);
        goto after_7;
    // 0x150C66B8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    after_7:
    // 0x150C66BC: beq         $v0, $zero, L_150C66D4
    if (ctx->r2 == 0) {
        // 0x150C66C0: sw          $v0, 0xD4($sp)
        MEM_W(0XD4, ctx->r29) = ctx->r2;
            goto L_150C66D4;
    }
    // 0x150C66C0: sw          $v0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r2;
    // 0x150C66C4: addiu       $a0, $v0, 0xB0
    ctx->r4 = ADD32(ctx->r2, 0XB0);
    // 0x150C66C8: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x150C66CC: jal         0x10022EC0
    // 0x150C66D0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x150C66D0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_8:
L_150C66D4:
    // 0x150C66D4: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
L_150C66D8:
    // 0x150C66D8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x150C66DC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x150C66E0: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x150C66E4: jr          $ra
    // 0x150C66E8: nop

    return;
    return;
    // 0x150C66E8: nop

;}
RECOMP_FUNC void func_16001A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16001A6C: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x16001A70: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x16001A74: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x16001A78: bne         $t6, $zero, L_16001A88
    if (ctx->r14 != 0) {
        // 0x16001A7C: lui         $at, 0x7F80
        ctx->r1 = S32(0X7F80 << 16);
            goto L_16001A88;
    }
    // 0x16001A7C: lui         $at, 0x7F80
    ctx->r1 = S32(0X7F80 << 16);
    // 0x16001A80: jr          $ra
    // 0x16001A84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x16001A84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_16001A88:
    // 0x16001A88: and         $v0, $a0, $at
    ctx->r2 = ctx->r4 & ctx->r1;
    // 0x16001A8C: sra         $t7, $v0, 23
    ctx->r15 = S32(SIGNED(ctx->r2) >> 23);
    // 0x16001A90: blez        $t7, L_16001AA0
    if (SIGNED(ctx->r15) <= 0) {
        // 0x16001A94: slti        $at, $t7, 0xFF
        ctx->r1 = SIGNED(ctx->r15) < 0XFF ? 1 : 0;
            goto L_16001AA0;
    }
    // 0x16001A94: slti        $at, $t7, 0xFF
    ctx->r1 = SIGNED(ctx->r15) < 0XFF ? 1 : 0;
    // 0x16001A98: bne         $at, $zero, L_16001AA8
    if (ctx->r1 != 0) {
        // 0x16001A9C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_16001AA8;
    }
    // 0x16001A9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_16001AA0:
    // 0x16001AA0: jr          $ra
    // 0x16001AA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x16001AA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_16001AA8:
    // 0x16001AA8: jr          $ra
    // 0x16001AAC: nop

    return;
    return;
    // 0x16001AAC: nop

;}
RECOMP_FUNC void func_1001B7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001B7D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1001B7D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001B7D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1001B7DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1001B7E0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1001B7E4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1001B7E8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1001B7EC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1001B7F0: lw          $t7, 0x20($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X20);
    // 0x1001B7F4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1001B7F8: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    // 0x1001B7FC: addu        $a1, $t7, $t9
    ctx->r5 = ADD32(ctx->r15, ctx->r25);
    // 0x1001B800: jal         0x1001BD34
    // 0x1001B804: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    func_1001BD34(rdram, ctx);
        goto after_0;
    // 0x1001B804: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_0:
    // 0x1001B808: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x1001B80C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1001B810: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1001B814: lw          $t1, 0x60($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X60);
    // 0x1001B818: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x1001B81C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x1001B820: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1001B824: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x1001B828: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1001B82C: beq         $t5, $zero, L_1001B890
    if (ctx->r13 == 0) {
        // 0x1001B830: nop
    
            goto L_1001B890;
    }
    // 0x1001B830: nop

    // 0x1001B834: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1001B838: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x1001B83C: lw          $t8, 0x60($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X60);
    // 0x1001B840: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x1001B844: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x1001B848: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1001B84C: lw          $t5, 0x14($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X14);
    // 0x1001B850: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x1001B854: lh          $t2, 0x38($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X38);
    // 0x1001B858: lw          $t3, 0x20($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X20);
    // 0x1001B85C: lw          $t9, 0x34($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X34);
    // 0x1001B860: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x1001B864: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x1001B868: jalr        $t9
    // 0x1001B86C: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x1001B86C: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    after_1:
    // 0x1001B870: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1001B874: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x1001B878: lw          $t8, 0x60($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X60);
    // 0x1001B87C: sll         $t2, $t0, 4
    ctx->r10 = S32(ctx->r8 << 4);
    // 0x1001B880: subu        $t2, $t2, $t0
    ctx->r10 = SUB32(ctx->r10, ctx->r8);
    // 0x1001B884: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1001B888: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x1001B88C: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
L_1001B890:
    // 0x1001B890: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001B894: beq         $t1, $zero, L_1001B924
    if (ctx->r9 == 0) {
        // 0x1001B898: nop
    
            goto L_1001B924;
    }
    // 0x1001B898: nop

    // 0x1001B89C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001B8A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1001B8A4: lh          $t6, 0xE($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XE);
    // 0x1001B8A8: blez        $t6, L_1001B918
    if (SIGNED(ctx->r14) <= 0) {
        // 0x1001B8AC: nop
    
            goto L_1001B918;
    }
    // 0x1001B8AC: nop

L_1001B8B0:
    // 0x1001B8B0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1001B8B4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x1001B8B8: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x1001B8BC: addu        $t0, $t5, $t7
    ctx->r8 = ADD32(ctx->r13, ctx->r15);
    // 0x1001B8C0: lw          $t8, 0x10($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X10);
    // 0x1001B8C4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x1001B8C8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001B8CC: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x1001B8D0: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x1001B8D4: sltu        $at, $t3, $at
    ctx->r1 = ctx->r11 < ctx->r1 ? 1 : 0;
    // 0x1001B8D8: beq         $at, $zero, L_1001B8F8
    if (ctx->r1 == 0) {
        // 0x1001B8DC: nop
    
            goto L_1001B8F8;
    }
    // 0x1001B8DC: nop

    // 0x1001B8E0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x1001B8E4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1001B8E8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x1001B8EC: lw          $t4, 0x14($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X14);
    // 0x1001B8F0: jal         0x10012C5C
    // 0x1001B8F4: lw          $a2, 0x38($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X38);
    func_10012C5C(rdram, ctx);
        goto after_2;
    // 0x1001B8F4: lw          $a2, 0x38($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X38);
    after_2:
L_1001B8F8:
    // 0x1001B8F8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x1001B8FC: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x1001B900: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x1001B904: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1001B908: lh          $t7, 0xE($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE);
    // 0x1001B90C: slt         $at, $t9, $t7
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1001B910: bne         $at, $zero, L_1001B8B0
    if (ctx->r1 != 0) {
        // 0x1001B914: nop
    
            goto L_1001B8B0;
    }
    // 0x1001B914: nop

L_1001B918:
    // 0x1001B918: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1001B91C: lw          $t8, 0x10($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X10);
    // 0x1001B920: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_1001B924:
    // 0x1001B924: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x1001B928: beq         $t2, $zero, L_1001BC58
    if (ctx->r10 == 0) {
        // 0x1001B92C: nop
    
            goto L_1001BC58;
    }
    // 0x1001B92C: nop

    // 0x1001B930: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1001B934: lh          $t1, 0xE($t3)
    ctx->r9 = MEM_H(ctx->r11, 0XE);
    // 0x1001B938: bne         $t1, $zero, L_1001B948
    if (ctx->r9 != 0) {
        // 0x1001B93C: nop
    
            goto L_1001B948;
    }
    // 0x1001B93C: nop

    // 0x1001B940: b           L_1001BD24
    // 0x1001B944: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1001BD24;
    // 0x1001B944: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1001B948:
    // 0x1001B948: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x1001B94C: beq         $t4, $zero, L_1001BA30
    if (ctx->r12 == 0) {
        // 0x1001B950: nop
    
            goto L_1001BA30;
    }
    // 0x1001B950: nop

    // 0x1001B954: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x1001B958: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1001B95C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001B960: lw          $t5, 0x0($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X0);
    // 0x1001B964: lw          $t0, 0x60($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X60);
    // 0x1001B968: sll         $t2, $t8, 4
    ctx->r10 = S32(ctx->r24 << 4);
    // 0x1001B96C: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x1001B970: subu        $t2, $t2, $t8
    ctx->r10 = SUB32(ctx->r10, ctx->r24);
    // 0x1001B974: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1001B978: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x1001B97C: sw          $t9, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->r25;
    // 0x1001B980: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1001B984: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001B988: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001B98C: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x1001B990: lw          $t7, 0x60($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X60);
    // 0x1001B994: sll         $t0, $t8, 4
    ctx->r8 = S32(ctx->r24 << 4);
    // 0x1001B998: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x1001B99C: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x1001B9A0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1001B9A4: addu        $t2, $t7, $t0
    ctx->r10 = ADD32(ctx->r15, ctx->r8);
    // 0x1001B9A8: sw          $t6, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->r14;
    // 0x1001B9AC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x1001B9B0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x1001B9B4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001B9B8: lw          $t3, 0x0($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X0);
    // 0x1001B9BC: lw          $t5, 0x60($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X60);
    // 0x1001B9C0: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x1001B9C4: lw          $t1, 0x8($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X8);
    // 0x1001B9C8: subu        $t7, $t7, $t8
    ctx->r15 = SUB32(ctx->r15, ctx->r24);
    // 0x1001B9CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1001B9D0: addu        $t0, $t5, $t7
    ctx->r8 = ADD32(ctx->r13, ctx->r15);
    // 0x1001B9D4: sw          $t1, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r9;
    // 0x1001B9D8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x1001B9DC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x1001B9E0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001B9E4: lw          $t2, 0x0($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X0);
    // 0x1001B9E8: lw          $t4, 0x60($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X60);
    // 0x1001B9EC: sll         $t5, $t8, 4
    ctx->r13 = S32(ctx->r24 << 4);
    // 0x1001B9F0: lbu         $t9, 0xC($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0XC);
    // 0x1001B9F4: subu        $t5, $t5, $t8
    ctx->r13 = SUB32(ctx->r13, ctx->r24);
    // 0x1001B9F8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1001B9FC: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x1001BA00: sb          $t9, 0x29($t7)
    MEM_B(0X29, ctx->r15) = ctx->r25;
    // 0x1001BA04: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1001BA08: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1001BA0C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001BA10: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x1001BA14: lw          $t3, 0x60($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X60);
    // 0x1001BA18: sll         $t4, $t8, 4
    ctx->r12 = S32(ctx->r24 << 4);
    // 0x1001BA1C: lbu         $t6, 0xD($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0XD);
    // 0x1001BA20: subu        $t4, $t4, $t8
    ctx->r12 = SUB32(ctx->r12, ctx->r24);
    // 0x1001BA24: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1001BA28: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x1001BA2C: sb          $t6, 0x2A($t5)
    MEM_B(0X2A, ctx->r13) = ctx->r14;
L_1001BA30:
    // 0x1001BA30: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x1001BA34: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1001BA38: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x1001BA3C: lw          $t0, 0x60($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X60);
    // 0x1001BA40: sll         $t8, $t2, 4
    ctx->r24 = S32(ctx->r10 << 4);
    // 0x1001BA44: lbu         $t7, 0x1($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X1);
    // 0x1001BA48: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x1001BA4C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1001BA50: addu        $t3, $t0, $t8
    ctx->r11 = ADD32(ctx->r8, ctx->r24);
    // 0x1001BA54: sb          $t7, 0x6($t3)
    MEM_B(0X6, ctx->r11) = ctx->r15;
    // 0x1001BA58: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001BA5C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x1001BA60: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001BA64: lw          $t9, 0x60($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X60);
    // 0x1001BA68: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x1001BA6C: lbu         $t6, 0x0($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X0);
    // 0x1001BA70: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x1001BA74: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1001BA78: addu        $t0, $t9, $t2
    ctx->r8 = ADD32(ctx->r25, ctx->r10);
    // 0x1001BA7C: sb          $t6, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r14;
    // 0x1001BA80: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x1001BA84: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x1001BA88: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1001BA8C: lw          $t4, 0x60($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X60);
    // 0x1001BA90: sll         $t1, $t5, 4
    ctx->r9 = S32(ctx->r13 << 4);
    // 0x1001BA94: lbu         $t7, 0x2($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X2);
    // 0x1001BA98: subu        $t1, $t1, $t5
    ctx->r9 = SUB32(ctx->r9, ctx->r13);
    // 0x1001BA9C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1001BAA0: addu        $t9, $t4, $t1
    ctx->r25 = ADD32(ctx->r12, ctx->r9);
    // 0x1001BAA4: sb          $t7, 0x7($t9)
    MEM_B(0X7, ctx->r25) = ctx->r15;
    // 0x1001BAA8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1001BAAC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x1001BAB0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x1001BAB4: lw          $t8, 0x60($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X60);
    // 0x1001BAB8: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x1001BABC: lh          $t6, 0xC($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC);
    // 0x1001BAC0: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x1001BAC4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1001BAC8: addu        $t4, $t8, $t5
    ctx->r12 = ADD32(ctx->r24, ctx->r13);
    // 0x1001BACC: sh          $t6, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r14;
    // 0x1001BAD0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x1001BAD4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x1001BAD8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001BADC: lw          $t2, 0x60($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X60);
    // 0x1001BAE0: sll         $t3, $t0, 4
    ctx->r11 = S32(ctx->r8 << 4);
    // 0x1001BAE4: lbu         $t7, 0x4($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X4);
    // 0x1001BAE8: subu        $t3, $t3, $t0
    ctx->r11 = SUB32(ctx->r11, ctx->r8);
    // 0x1001BAEC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1001BAF0: addu        $t8, $t2, $t3
    ctx->r24 = ADD32(ctx->r10, ctx->r11);
    // 0x1001BAF4: sb          $t7, 0x2C($t8)
    MEM_B(0X2C, ctx->r24) = ctx->r15;
    // 0x1001BAF8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x1001BAFC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x1001BB00: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x1001BB04: lw          $t1, 0x60($t4)
    ctx->r9 = MEM_W(ctx->r12, 0X60);
    // 0x1001BB08: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x1001BB0C: lbu         $t6, 0x5($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X5);
    // 0x1001BB10: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x1001BB14: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1001BB18: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x1001BB1C: sb          $t6, 0x2D($t2)
    MEM_B(0X2D, ctx->r10) = ctx->r14;
    // 0x1001BB20: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x1001BB24: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x1001BB28: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1001BB2C: lw          $t5, 0x60($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X60);
    // 0x1001BB30: sll         $t9, $t4, 4
    ctx->r25 = S32(ctx->r12 << 4);
    // 0x1001BB34: lbu         $t7, 0x6($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X6);
    // 0x1001BB38: subu        $t9, $t9, $t4
    ctx->r25 = SUB32(ctx->r25, ctx->r12);
    // 0x1001BB3C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1001BB40: addu        $t1, $t5, $t9
    ctx->r9 = ADD32(ctx->r13, ctx->r25);
    // 0x1001BB44: sb          $t7, 0x2E($t1)
    MEM_B(0X2E, ctx->r9) = ctx->r15;
    // 0x1001BB48: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1001BB4C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001BB50: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1001BB54: lw          $t3, 0x60($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X60);
    // 0x1001BB58: sll         $t4, $t8, 4
    ctx->r12 = S32(ctx->r24 << 4);
    // 0x1001BB5C: lbu         $t6, 0x7($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X7);
    // 0x1001BB60: subu        $t4, $t4, $t8
    ctx->r12 = SUB32(ctx->r12, ctx->r24);
    // 0x1001BB64: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1001BB68: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x1001BB6C: sb          $t6, 0x2F($t5)
    MEM_B(0X2F, ctx->r13) = ctx->r14;
    // 0x1001BB70: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x1001BB74: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1001BB78: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x1001BB7C: lw          $t0, 0x60($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X60);
    // 0x1001BB80: sll         $t8, $t2, 4
    ctx->r24 = S32(ctx->r10 << 4);
    // 0x1001BB84: lbu         $t7, 0x8($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X8);
    // 0x1001BB88: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x1001BB8C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1001BB90: addu        $t3, $t0, $t8
    ctx->r11 = ADD32(ctx->r8, ctx->r24);
    // 0x1001BB94: sb          $t7, 0x30($t3)
    MEM_B(0X30, ctx->r11) = ctx->r15;
    // 0x1001BB98: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001BB9C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x1001BBA0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001BBA4: lw          $t9, 0x60($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X60);
    // 0x1001BBA8: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x1001BBAC: lbu         $t6, 0x9($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X9);
    // 0x1001BBB0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x1001BBB4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1001BBB8: addu        $t0, $t9, $t2
    ctx->r8 = ADD32(ctx->r25, ctx->r10);
    // 0x1001BBBC: sb          $t6, 0x31($t0)
    MEM_B(0X31, ctx->r8) = ctx->r14;
    // 0x1001BBC0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x1001BBC4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x1001BBC8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1001BBCC: lw          $t4, 0x60($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X60);
    // 0x1001BBD0: sll         $t1, $t5, 4
    ctx->r9 = S32(ctx->r13 << 4);
    // 0x1001BBD4: lbu         $t7, 0xA($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0XA);
    // 0x1001BBD8: subu        $t1, $t1, $t5
    ctx->r9 = SUB32(ctx->r9, ctx->r13);
    // 0x1001BBDC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1001BBE0: addu        $t9, $t4, $t1
    ctx->r25 = ADD32(ctx->r12, ctx->r9);
    // 0x1001BBE4: sb          $t7, 0x32($t9)
    MEM_B(0X32, ctx->r25) = ctx->r15;
    // 0x1001BBE8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1001BBEC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x1001BBF0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x1001BBF4: lw          $t8, 0x60($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X60);
    // 0x1001BBF8: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x1001BBFC: lbu         $t6, 0xB($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0XB);
    // 0x1001BC00: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x1001BC04: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1001BC08: addu        $t4, $t8, $t5
    ctx->r12 = ADD32(ctx->r24, ctx->r13);
    // 0x1001BC0C: sb          $t6, 0x33($t4)
    MEM_B(0X33, ctx->r12) = ctx->r14;
    // 0x1001BC10: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x1001BC14: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x1001BC18: lw          $t7, 0x60($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X60);
    // 0x1001BC1C: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x1001BC20: subu        $t2, $t2, $t9
    ctx->r10 = SUB32(ctx->r10, ctx->r25);
    // 0x1001BC24: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1001BC28: addu        $t0, $t7, $t2
    ctx->r8 = ADD32(ctx->r15, ctx->r10);
    // 0x1001BC2C: sb          $zero, 0x36($t0)
    MEM_B(0X36, ctx->r8) = 0;
    // 0x1001BC30: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x1001BC34: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1001BC38: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1001BC3C: lw          $t5, 0x60($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X60);
    // 0x1001BC40: sll         $t4, $t6, 4
    ctx->r12 = S32(ctx->r14 << 4);
    // 0x1001BC44: subu        $t4, $t4, $t6
    ctx->r12 = SUB32(ctx->r12, ctx->r14);
    // 0x1001BC48: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1001BC4C: addu        $t1, $t5, $t4
    ctx->r9 = ADD32(ctx->r13, ctx->r12);
    // 0x1001BC50: b           L_1001BC7C
    // 0x1001BC54: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
        goto L_1001BC7C;
    // 0x1001BC54: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
L_1001BC58:
    // 0x1001BC58: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1001BC5C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x1001BC60: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1001BC64: lw          $t2, 0x60($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X60);
    // 0x1001BC68: sll         $t8, $t0, 4
    ctx->r24 = S32(ctx->r8 << 4);
    // 0x1001BC6C: subu        $t8, $t8, $t0
    ctx->r24 = SUB32(ctx->r24, ctx->r8);
    // 0x1001BC70: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1001BC74: addu        $t6, $t2, $t8
    ctx->r14 = ADD32(ctx->r10, ctx->r24);
    // 0x1001BC78: sb          $t9, 0x36($t6)
    MEM_B(0X36, ctx->r14) = ctx->r25;
L_1001BC7C:
    // 0x1001BC7C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001BC80: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x1001BC84: lw          $t4, 0x60($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X60);
    // 0x1001BC88: sll         $t1, $t3, 4
    ctx->r9 = S32(ctx->r11 << 4);
    // 0x1001BC8C: subu        $t1, $t1, $t3
    ctx->r9 = SUB32(ctx->r9, ctx->r11);
    // 0x1001BC90: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1001BC94: addu        $t7, $t4, $t1
    ctx->r15 = ADD32(ctx->r12, ctx->r9);
    // 0x1001BC98: sb          $zero, 0x2B($t7)
    MEM_B(0X2B, ctx->r15) = 0;
    // 0x1001BC9C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1001BCA0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001BCA4: lw          $t2, 0x60($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X60);
    // 0x1001BCA8: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x1001BCAC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1001BCB0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1001BCB4: addu        $t6, $t2, $t9
    ctx->r14 = ADD32(ctx->r10, ctx->r25);
    // 0x1001BCB8: sb          $zero, 0x28($t6)
    MEM_B(0X28, ctx->r14) = 0;
    // 0x1001BCBC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001BCC0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x1001BCC4: lw          $t3, 0x60($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X60);
    // 0x1001BCC8: sll         $t1, $t4, 4
    ctx->r9 = S32(ctx->r12 << 4);
    // 0x1001BCCC: subu        $t1, $t1, $t4
    ctx->r9 = SUB32(ctx->r9, ctx->r12);
    // 0x1001BCD0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1001BCD4: addu        $t7, $t3, $t1
    ctx->r15 = ADD32(ctx->r11, ctx->r9);
    // 0x1001BCD8: sb          $zero, 0x35($t7)
    MEM_B(0X35, ctx->r15) = 0;
    // 0x1001BCDC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x1001BCE0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x1001BCE4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1001BCE8: lw          $t2, 0x60($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X60);
    // 0x1001BCEC: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x1001BCF0: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x1001BCF4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1001BCF8: addu        $t5, $t2, $t6
    ctx->r13 = ADD32(ctx->r10, ctx->r14);
    // 0x1001BCFC: sh          $t0, 0x38($t5)
    MEM_H(0X38, ctx->r13) = ctx->r8;
    // 0x1001BD00: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001BD04: bne         $t4, $zero, L_1001BD14
    if (ctx->r12 != 0) {
        // 0x1001BD08: nop
    
            goto L_1001BD14;
    }
    // 0x1001BD08: nop

    // 0x1001BD0C: b           L_1001BD24
    // 0x1001BD10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1001BD24;
    // 0x1001BD10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1001BD14:
    // 0x1001BD14: b           L_1001BD24
    // 0x1001BD18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1001BD24;
    // 0x1001BD18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1001BD1C: b           L_1001BD24
    // 0x1001BD20: nop

        goto L_1001BD24;
    // 0x1001BD20: nop

L_1001BD24:
    // 0x1001BD24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001BD28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1001BD2C: jr          $ra
    // 0x1001BD30: nop

    return;
    return;
    // 0x1001BD30: nop

;}
RECOMP_FUNC void func_150408C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150408C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150408C4: jr          $ra
    // 0x150408C8: nop

    return;
    return;
    // 0x150408C8: nop

;}
RECOMP_FUNC void func_150AF738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AF738: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150AF73C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150AF740: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x150AF744: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x150AF748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150AF74C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150AF750: lh          $t9, 0x22($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X22);
    // 0x150AF754: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150AF758: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150AF75C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x150AF760: sb          $t6, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r14;
    // 0x150AF764: sb          $t7, 0x19($sp)
    MEM_B(0X19, ctx->r29) = ctx->r15;
    // 0x150AF768: sb          $t8, 0x1A($sp)
    MEM_B(0X1A, ctx->r29) = ctx->r24;
    // 0x150AF76C: sb          $zero, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = 0;
    // 0x150AF770: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x150AF774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150AF778: jal         0x1515FF74
    // 0x150AF77C: sh          $t9, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r25;
    func_1515FF74(rdram, ctx);
        goto after_0;
    // 0x150AF77C: sh          $t9, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x150AF780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150AF784: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150AF788: jr          $ra
    // 0x150AF78C: nop

    return;
    return;
    // 0x150AF78C: nop

;}
RECOMP_FUNC void func_1513F6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513F6E8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1513F6EC: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x1513F6F0: lwc1        $f0, 0x128($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X128);
    // 0x1513F6F4: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513F6F8: lwc1        $f4, 0x2C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x1513F6FC: lwc1        $f16, 0x30($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X30);
    // 0x1513F700: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1513F704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1513F708: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1513F70C: swc1        $f10, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f10.u32l;
    // 0x1513F710: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513F714: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1513F718: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x1513F71C: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x1513F720: jr          $ra
    // 0x1513F724: nop

    return;
    return;
    // 0x1513F724: nop

;}
RECOMP_FUNC void func_15051558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15051558: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x1505155C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15051560: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x15051564: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15051568: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1505156C: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x15051570: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x15051574: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x15051578: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505157C: lwc1        $f4, -0x6CFC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6CFC);
    // 0x15051580: swc1        $f12, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f12.u32l;
    // 0x15051584: sb          $zero, 0x87($sp)
    MEM_B(0X87, ctx->r29) = 0;
    // 0x15051588: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x1505158C: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15051590: swc1        $f12, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f12.u32l;
    // 0x15051594: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x15051598: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x1505159C: lbu         $t6, 0xAD($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XAD);
    // 0x150515A0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150515A4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x150515A8: bne         $t6, $zero, L_15052030
    if (ctx->r14 != 0) {
        // 0x150515AC: addiu       $a3, $s0, 0x164
        ctx->r7 = ADD32(ctx->r16, 0X164);
            goto L_15052030;
    }
    // 0x150515AC: addiu       $a3, $s0, 0x164
    ctx->r7 = ADD32(ctx->r16, 0X164);
    // 0x150515B0: lbu         $t7, 0x162($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X162);
    // 0x150515B4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150515B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150515BC: swc1        $f12, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f12.u32l;
    // 0x150515C0: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x150515C4: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
    // 0x150515C8: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x150515CC: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
    // 0x150515D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150515D4: addiu       $a1, $s0, 0x18C
    ctx->r5 = ADD32(ctx->r16, 0X18C);
    // 0x150515D8: lbu         $v0, 0x4E($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4E);
    // 0x150515DC: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x150515E0: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x150515E4: bne         $v0, $at, L_150516D8
    if (ctx->r2 != ctx->r1) {
        // 0x150515E8: lwc1        $f4, 0x88($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
            goto L_150516D8;
    }
    // 0x150515E8: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x150515EC: lw          $a0, 0x188($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X188);
    // 0x150515F0: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x150515F4: addiu       $t9, $sp, 0x94
    ctx->r25 = ADD32(ctx->r29, 0X94);
    // 0x150515F8: addiu       $t1, $sp, 0x90
    ctx->r9 = ADD32(ctx->r29, 0X90);
    // 0x150515FC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15051600: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15051604: jal         0x1510F820
    // 0x15051608: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1510F820(rdram, ctx);
        goto after_0;
    // 0x15051608: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x1505160C: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x15051610: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15051614: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051618: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1505161C: lwc1        $f10, -0x6CF8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6CF8);
    // 0x15051620: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x15051624: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x15051628: add.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1505162C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x15051630: nop

    // 0x15051634: bc1fl       L_15051698
    if (!c1cs) {
        // 0x15051638: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_15051698;
    }
    goto skip_0;
    // 0x15051638: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x1505163C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15051640: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x15051644: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x15051648: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x1505164C: nop

    // 0x15051650: bc1fl       L_15051698
    if (!c1cs) {
        // 0x15051654: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_15051698;
    }
    goto skip_1;
    // 0x15051654: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_1:
    // 0x15051658: sb          $t2, 0x8A($s0)
    MEM_B(0X8A, ctx->r16) = ctx->r10;
    // 0x1505165C: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x15051660: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15051664: nop

    // 0x15051668: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x1505166C: nop

    // 0x15051670: bc1fl       L_15051698
    if (!c1cs) {
        // 0x15051674: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_15051698;
    }
    goto skip_2;
    // 0x15051674: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_2:
    // 0x15051678: lbu         $t3, 0x89($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X89);
    // 0x1505167C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15051680: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15051684: bnel        $t3, $zero, L_15051698
    if (ctx->r11 != 0) {
        // 0x15051688: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_15051698;
    }
    goto skip_3;
    // 0x15051688: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_3:
    // 0x1505168C: jal         0x15087EF0
    // 0x15051690: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    func_15087EF0(rdram, ctx);
        goto after_1;
    // 0x15051690: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    after_1:
    // 0x15051694: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_15051698:
    // 0x15051698: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1505169C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150516A0: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x150516A4: nop

    // 0x150516A8: bc1fl       L_150516CC
    if (!c1cs) {
        // 0x150516AC: lw          $v1, 0x31C($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X31C);
            goto L_150516CC;
    }
    goto skip_4;
    // 0x150516AC: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
    skip_4:
    // 0x150516B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150516B4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x150516B8: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x150516BC: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x150516C0: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x150516C4: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x150516C8: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
L_150516CC:
    // 0x150516CC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150516D0: b           L_15051734
    // 0x150516D4: lbu         $v0, 0x4E($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4E);
        goto L_15051734;
    // 0x150516D4: lbu         $v0, 0x4E($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4E);
L_150516D8:
    // 0x150516D8: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x150516DC: nop

    // 0x150516E0: bc1tl       L_150516F8
    if (c1cs) {
        // 0x150516E4: lbu         $t5, 0x4F($v1)
        ctx->r13 = MEM_BU(ctx->r3, 0X4F);
            goto L_150516F8;
    }
    goto skip_5;
    // 0x150516E4: lbu         $t5, 0x4F($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X4F);
    skip_5:
    // 0x150516E8: lbu         $t4, 0x110($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X110);
    // 0x150516EC: beq         $t4, $zero, L_15051734
    if (ctx->r12 == 0) {
        // 0x150516F0: nop
    
            goto L_15051734;
    }
    // 0x150516F0: nop

    // 0x150516F4: lbu         $t5, 0x4F($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X4F);
L_150516F8:
    // 0x150516F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150516FC: addiu       $a1, $s0, 0x18C
    ctx->r5 = ADD32(ctx->r16, 0X18C);
    // 0x15051700: bne         $t5, $zero, L_15051734
    if (ctx->r13 != 0) {
        // 0x15051704: addiu       $a2, $sp, 0x6C
        ctx->r6 = ADD32(ctx->r29, 0X6C);
            goto L_15051734;
    }
    // 0x15051704: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x15051708: addiu       $t6, $sp, 0x64
    ctx->r14 = ADD32(ctx->r29, 0X64);
    // 0x1505170C: addiu       $t7, $sp, 0x94
    ctx->r15 = ADD32(ctx->r29, 0X94);
    // 0x15051710: addiu       $t8, $sp, 0x90
    ctx->r24 = ADD32(ctx->r29, 0X90);
    // 0x15051714: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15051718: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1505171C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15051720: jal         0x1510F820
    // 0x15051724: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    func_1510F820(rdram, ctx);
        goto after_2;
    // 0x15051724: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_2:
    // 0x15051728: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
    // 0x1505172C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x15051730: lbu         $v0, 0x4E($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4E);
L_15051734:
    // 0x15051734: bnel        $v0, $zero, L_150517DC
    if (ctx->r2 != 0) {
        // 0x15051738: lbu         $v0, 0x274($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X274);
            goto L_150517DC;
    }
    goto skip_6;
    // 0x15051738: lbu         $v0, 0x274($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X274);
    skip_6:
    // 0x1505173C: lbu         $t9, 0x84($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X84);
    // 0x15051740: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15051744: bnel        $t9, $zero, L_150517DC
    if (ctx->r25 != 0) {
        // 0x15051748: lbu         $v0, 0x274($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X274);
            goto L_150517DC;
    }
    goto skip_7;
    // 0x15051748: lbu         $v0, 0x274($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X274);
    skip_7:
    // 0x1505174C: lbu         $a0, -0x3D84($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3D84);
    // 0x15051750: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x15051754: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15051758: bne         $a0, $zero, L_1505179C
    if (ctx->r4 != 0) {
        // 0x1505175C: nop
    
            goto L_1505179C;
    }
    // 0x1505175C: nop

    // 0x15051760: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x15051764: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15051768: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1505176C: mul.s       $f10, $f4, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x15051770: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15051774: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x15051778: nop

    // 0x1505177C: bc1tl       L_150517B4
    if (c1cs) {
        // 0x15051780: lw          $t5, 0x184($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X184);
            goto L_150517B4;
    }
    goto skip_8;
    // 0x15051780: lw          $t5, 0x184($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X184);
    skip_8:
    // 0x15051784: lw          $t1, 0x184($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X184);
    // 0x15051788: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1505178C: srl         $t2, $t1, 12
    ctx->r10 = S32(U32(ctx->r9) >> 12);
    // 0x15051790: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x15051794: beql        $t3, $at, L_150517B4
    if (ctx->r11 == ctx->r1) {
        // 0x15051798: lw          $t5, 0x184($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X184);
            goto L_150517B4;
    }
    goto skip_9;
    // 0x15051798: lw          $t5, 0x184($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X184);
    skip_9:
L_1505179C:
    // 0x1505179C: beql        $a0, $zero, L_150517DC
    if (ctx->r4 == 0) {
        // 0x150517A0: lbu         $v0, 0x274($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X274);
            goto L_150517DC;
    }
    goto skip_10;
    // 0x150517A0: lbu         $v0, 0x274($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X274);
    skip_10:
    // 0x150517A4: lbu         $t4, 0x17($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X17);
    // 0x150517A8: beql        $t4, $zero, L_150517DC
    if (ctx->r12 == 0) {
        // 0x150517AC: lbu         $v0, 0x274($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X274);
            goto L_150517DC;
    }
    goto skip_11;
    // 0x150517AC: lbu         $v0, 0x274($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X274);
    skip_11:
    // 0x150517B0: lw          $t5, 0x184($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X184);
L_150517B4:
    // 0x150517B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150517B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150517BC: srl         $t6, $t5, 12
    ctx->r14 = S32(U32(ctx->r13) >> 12);
    // 0x150517C0: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x150517C4: beq         $t7, $at, L_150517D8
    if (ctx->r15 == ctx->r1) {
        // 0x150517C8: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_150517D8;
    }
    // 0x150517C8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150517CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150517D0: sb          $t8, -0x3D84($at)
    MEM_B(-0X3D84, ctx->r1) = ctx->r24;
    // 0x150517D4: sb          $t9, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r25;
L_150517D8:
    // 0x150517D8: lbu         $v0, 0x274($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X274);
L_150517DC:
    // 0x150517DC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150517E0: lbu         $a0, -0x3D84($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3D84);
    // 0x150517E4: beq         $v0, $zero, L_15051820
    if (ctx->r2 == 0) {
        // 0x150517E8: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_15051820;
    }
    // 0x150517E8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x150517EC: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x150517F0: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x150517F4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150517F8: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x150517FC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x15051800: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x15051804: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x15051808: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x1505180C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x15051810: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15051814: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x15051818: b           L_15051820
    // 0x1505181C: lbu         $v1, -0x4058($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X4058);
        goto L_15051820;
    // 0x1505181C: lbu         $v1, -0x4058($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X4058);
L_15051820:
    // 0x15051820: bne         $a0, $zero, L_15051838
    if (ctx->r4 != 0) {
        // 0x15051824: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_15051838;
    }
    // 0x15051824: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x15051828: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1505182C: swc1        $f12, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f12.u32l;
    // 0x15051830: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x15051834: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
L_15051838:
    // 0x15051838: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x1505183C: beq         $v1, $at, L_15051854
    if (ctx->r3 == ctx->r1) {
        // 0x15051840: addiu       $at, $zero, 0x49
        ctx->r1 = ADD32(0, 0X49);
            goto L_15051854;
    }
    // 0x15051840: addiu       $at, $zero, 0x49
    ctx->r1 = ADD32(0, 0X49);
    // 0x15051844: beql        $v1, $at, L_15051860
    if (ctx->r3 == ctx->r1) {
        // 0x15051848: sb          $zero, 0x87($sp)
        MEM_B(0X87, ctx->r29) = 0;
            goto L_15051860;
    }
    goto skip_12;
    // 0x15051848: sb          $zero, 0x87($sp)
    MEM_B(0X87, ctx->r29) = 0;
    skip_12:
    // 0x1505184C: b           L_15051860
    // 0x15051850: nop

        goto L_15051860;
    // 0x15051850: nop

L_15051854:
    // 0x15051854: b           L_15051860
    // 0x15051858: sb          $zero, 0x87($sp)
    MEM_B(0X87, ctx->r29) = 0;
        goto L_15051860;
    // 0x15051858: sb          $zero, 0x87($sp)
    MEM_B(0X87, ctx->r29) = 0;
    // 0x1505185C: sb          $zero, 0x87($sp)
    MEM_B(0X87, ctx->r29) = 0;
L_15051860:
    // 0x15051860: beq         $a0, $zero, L_150518B8
    if (ctx->r4 == 0) {
        // 0x15051864: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_150518B8;
    }
    // 0x15051864: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15051868: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1505186C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15051870: nop

    // 0x15051874: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x15051878: nop

    // 0x1505187C: bc1fl       L_150518BC
    if (!c1cs) {
        // 0x15051880: sb          $zero, 0x162($s0)
        MEM_B(0X162, ctx->r16) = 0;
            goto L_150518BC;
    }
    goto skip_13;
    // 0x15051880: sb          $zero, 0x162($s0)
    MEM_B(0X162, ctx->r16) = 0;
    skip_13:
    // 0x15051884: lbu         $t2, 0x110($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X110);
    // 0x15051888: beql        $t2, $zero, L_150518BC
    if (ctx->r10 == 0) {
        // 0x1505188C: sb          $zero, 0x162($s0)
        MEM_B(0X162, ctx->r16) = 0;
            goto L_150518BC;
    }
    goto skip_14;
    // 0x1505188C: sb          $zero, 0x162($s0)
    MEM_B(0X162, ctx->r16) = 0;
    skip_14:
    // 0x15051890: lbu         $t4, 0x89($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X89);
    // 0x15051894: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15051898: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x1505189C: beq         $t4, $at, L_150518BC
    if (ctx->r12 == ctx->r1) {
        // 0x150518A0: sb          $t3, 0x162($s0)
        MEM_B(0X162, ctx->r16) = ctx->r11;
            goto L_150518BC;
    }
    // 0x150518A0: sb          $t3, 0x162($s0)
    MEM_B(0X162, ctx->r16) = ctx->r11;
    // 0x150518A4: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x150518A8: lbu         $t5, -0x1660($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1660);
    // 0x150518AC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x150518B0: b           L_150518BC
    // 0x150518B4: sb          $t6, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r14;
        goto L_150518BC;
    // 0x150518B4: sb          $t6, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r14;
L_150518B8:
    // 0x150518B8: sb          $zero, 0x162($s0)
    MEM_B(0X162, ctx->r16) = 0;
L_150518BC:
    // 0x150518BC: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x150518C0: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150518C4: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150518C8: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x150518CC: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150518D0: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x150518D4: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150518D8: sub.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x150518DC: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x150518E0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150518E4: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150518E8: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150518EC: addiu       $v1, $v1, -0x1658
    ctx->r3 = ADD32(ctx->r3, -0X1658);
    // 0x150518F0: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150518F4: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x150518F8: lbu         $v0, 0x162($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X162);
    // 0x150518FC: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x15051900: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15051904: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15051908: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1505190C: add.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x15051910: mul.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15051914: beq         $v0, $t7, L_150519DC
    if (ctx->r2 == ctx->r15) {
        // 0x15051918: nop
    
            goto L_150519DC;
    }
    // 0x15051918: nop

    // 0x1505191C: beql        $v0, $zero, L_15051948
    if (ctx->r2 == 0) {
        // 0x15051920: lui         $at, 0x41B0
        ctx->r1 = S32(0X41B0 << 16);
            goto L_15051948;
    }
    goto skip_15;
    // 0x15051920: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    skip_15:
    // 0x15051924: mul.s       $f8, $f12, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x15051928: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1505192C: swc1        $f8, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->f8.u32l;
    // 0x15051930: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15051934: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x15051938: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x1505193C: b           L_150519DC
    // 0x15051940: swc1        $f6, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->f6.u32l;
        goto L_150519DC;
    // 0x15051940: swc1        $f6, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->f6.u32l;
    // 0x15051944: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
L_15051948:
    // 0x15051948: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1505194C: swc1        $f16, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f16.u32l;
    // 0x15051950: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x15051954: nop

    // 0x15051958: bc1fl       L_15051968
    if (!c1cs) {
        // 0x1505195C: lbu         $t9, 0x110($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X110);
            goto L_15051968;
    }
    goto skip_16;
    // 0x1505195C: lbu         $t9, 0x110($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X110);
    skip_16:
    // 0x15051960: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x15051964: lbu         $t9, 0x110($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X110);
L_15051968:
    // 0x15051968: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1505196C: bnel        $t9, $at, L_1505199C
    if (ctx->r25 != ctx->r1) {
        // 0x15051970: lwc1        $f18, 0x9C($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
            goto L_1505199C;
    }
    goto skip_17;
    // 0x15051970: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    skip_17:
    // 0x15051974: lbu         $t1, 0x89($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X89);
    // 0x15051978: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x1505197C: sb          $zero, 0x110($s0)
    MEM_B(0X110, ctx->r16) = 0;
    // 0x15051980: beq         $t1, $at, L_1505198C
    if (ctx->r9 == ctx->r1) {
        // 0x15051984: nop
    
            goto L_1505198C;
    }
    // 0x15051984: nop

    // 0x15051988: sb          $zero, 0x89($s0)
    MEM_B(0X89, ctx->r16) = 0;
L_1505198C:
    // 0x1505198C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051990: lwc1        $f8, -0x6CF4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6CF4);
    // 0x15051994: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
    // 0x15051998: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
L_1505199C:
    // 0x1505199C: lwc1        $f16, 0x2C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150519A0: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x150519A4: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150519A8: sub.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x150519AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150519B0: jal         0x1505A630
    // 0x150519B4: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    func_1505A630(rdram, ctx);
        goto after_3;
    // 0x150519B4: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    after_3:
    // 0x150519B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150519BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150519C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150519C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150519C8: sh          $v0, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r2;
    // 0x150519CC: swc1        $f4, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->f4.u32l;
    // 0x150519D0: swc1        $f6, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->f6.u32l;
    // 0x150519D4: swc1        $f10, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f10.u32l;
    // 0x150519D8: swc1        $f8, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f8.u32l;
L_150519DC:
    // 0x150519DC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150519E0: lbu         $t2, -0x3D84($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X3D84);
    // 0x150519E4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150519E8: beql        $t2, $zero, L_15051BD4
    if (ctx->r10 == 0) {
        // 0x150519EC: lwc1        $f12, 0x6C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_15051BD4;
    }
    goto skip_18;
    // 0x150519EC: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    skip_18:
    // 0x150519F0: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150519F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150519F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150519FC: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15051A00: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15051A04: nop

    // 0x15051A08: bc1fl       L_15051BD4
    if (!c1cs) {
        // 0x15051A0C: lwc1        $f12, 0x6C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_15051BD4;
    }
    goto skip_19;
    // 0x15051A0C: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    skip_19:
    // 0x15051A10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15051A14: lbu         $t3, -0x1660($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1660);
    // 0x15051A18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15051A1C: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x15051A20: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x15051A24: sb          $t4, 0x8A($s0)
    MEM_B(0X8A, ctx->r16) = ctx->r12;
    // 0x15051A28: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15051A2C: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15051A30: jal         0x1505A630
    // 0x15051A34: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_1505A630(rdram, ctx);
        goto after_4;
    // 0x15051A34: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_4:
    // 0x15051A38: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15051A3C: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15051A40: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15051A44: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15051A48: sh          $v0, 0x112($s0)
    MEM_H(0X112, ctx->r16) = ctx->r2;
    // 0x15051A4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15051A50: sub.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x15051A54: jal         0x1505A630
    // 0x15051A58: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    func_1505A630(rdram, ctx);
        goto after_5;
    // 0x15051A58: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    after_5:
    // 0x15051A5C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15051A60: addiu       $t0, $t0, -0x3D84
    ctx->r8 = ADD32(ctx->r8, -0X3D84);
    // 0x15051A64: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15051A68: sb          $t5, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r13;
    // 0x15051A6C: lbu         $t6, 0x110($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X110);
    // 0x15051A70: andi        $t7, $t5, 0xFF
    ctx->r15 = ctx->r13 & 0XFF;
    // 0x15051A74: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15051A78: bne         $t6, $zero, L_15051BB8
    if (ctx->r14 != 0) {
        // 0x15051A7C: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_15051BB8;
    }
    // 0x15051A7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051A80: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15051A84: lwc1        $f8, -0x6F40($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6F40);
    // 0x15051A88: lbu         $t4, 0x87($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X87);
    // 0x15051A8C: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x15051A90: lhu         $v1, 0x112($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X112);
    // 0x15051A94: subu        $t9, $v1, $v0
    ctx->r25 = SUB32(ctx->r3, ctx->r2);
    // 0x15051A98: sra         $t1, $t9, 8
    ctx->r9 = S32(SIGNED(ctx->r25) >> 8);
    // 0x15051A9C: addiu       $t2, $t1, 0x30
    ctx->r10 = ADD32(ctx->r9, 0X30);
    // 0x15051AA0: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x15051AA4: slti        $at, $t3, 0x60
    ctx->r1 = SIGNED(ctx->r11) < 0X60 ? 1 : 0;
    // 0x15051AA8: beq         $at, $zero, L_15051BD0
    if (ctx->r1 == 0) {
        // 0x15051AAC: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_15051BD0;
    }
    // 0x15051AAC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x15051AB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15051AB4: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x15051AB8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x15051ABC: addiu       $a1, $zero, 0x28E
    ctx->r5 = ADD32(0, 0X28E);
    // 0x15051AC0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15051AC4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15051AC8: bc1fl       L_15051ADC
    if (!c1cs) {
        // 0x15051ACC: lhu         $v0, 0x7A($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X7A);
            goto L_15051ADC;
    }
    goto skip_20;
    // 0x15051ACC: lhu         $v0, 0x7A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7A);
    skip_20:
    // 0x15051AD0: b           L_15051ADC
    // 0x15051AD4: lhu         $v0, 0xA6($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XA6);
        goto L_15051ADC;
    // 0x15051AD4: lhu         $v0, 0xA6($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XA6);
    // 0x15051AD8: lhu         $v0, 0x7A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7A);
L_15051ADC:
    // 0x15051ADC: beq         $t4, $zero, L_15051AF4
    if (ctx->r12 == 0) {
        // 0x15051AE0: subu        $t6, $v1, $v0
        ctx->r14 = SUB32(ctx->r3, ctx->r2);
            goto L_15051AF4;
    }
    // 0x15051AE0: subu        $t6, $v1, $v0
    ctx->r14 = SUB32(ctx->r3, ctx->r2);
    // 0x15051AE4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15051AE8: sb          $t5, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r13;
    // 0x15051AEC: b           L_15051B24
    // 0x15051AF0: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
        goto L_15051B24;
    // 0x15051AF0: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
L_15051AF4:
    // 0x15051AF4: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x15051AF8: addiu       $t8, $t7, 0x58
    ctx->r24 = ADD32(ctx->r15, 0X58);
    // 0x15051AFC: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x15051B00: slti        $at, $t9, 0xB0
    ctx->r1 = SIGNED(ctx->r25) < 0XB0 ? 1 : 0;
    // 0x15051B04: beq         $at, $zero, L_15051B1C
    if (ctx->r1 == 0) {
        // 0x15051B08: addiu       $a1, $zero, 0xD0
        ctx->r5 = ADD32(0, 0XD0);
            goto L_15051B1C;
    }
    // 0x15051B08: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    // 0x15051B0C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15051B10: sb          $t1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r9;
    // 0x15051B14: b           L_15051B24
    // 0x15051B18: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
        goto L_15051B24;
    // 0x15051B18: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
L_15051B1C:
    // 0x15051B1C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x15051B20: sb          $t2, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r10;
L_15051B24:
    // 0x15051B24: lbu         $t3, 0x104($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X104);
    // 0x15051B28: bnel        $t3, $zero, L_15051BD4
    if (ctx->r11 != 0) {
        // 0x15051B2C: lwc1        $f12, 0x6C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_15051BD4;
    }
    goto skip_21;
    // 0x15051B2C: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    skip_21:
    // 0x15051B30: lbu         $t4, 0x13C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X13C);
    // 0x15051B34: bnel        $t4, $zero, L_15051BD4
    if (ctx->r12 != 0) {
        // 0x15051B38: lwc1        $f12, 0x6C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_15051BD4;
    }
    goto skip_22;
    // 0x15051B38: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    skip_22:
    // 0x15051B3C: lbu         $t5, 0x89($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X89);
    // 0x15051B40: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15051B44: beql        $t5, $at, L_15051BD4
    if (ctx->r13 == ctx->r1) {
        // 0x15051B48: lwc1        $f12, 0x6C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_15051BD4;
    }
    goto skip_23;
    // 0x15051B48: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    skip_23:
    // 0x15051B4C: lbu         $t6, 0x83($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X83);
    // 0x15051B50: slti        $at, $t6, 0xFA
    ctx->r1 = SIGNED(ctx->r14) < 0XFA ? 1 : 0;
    // 0x15051B54: beql        $at, $zero, L_15051BD4
    if (ctx->r1 == 0) {
        // 0x15051B58: lwc1        $f12, 0x6C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_15051BD4;
    }
    goto skip_24;
    // 0x15051B58: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    skip_24:
    // 0x15051B5C: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
    // 0x15051B60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15051B64: lbu         $v0, 0x11A($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X11A);
    // 0x15051B68: beq         $v0, $at, L_15051BD0
    if (ctx->r2 == ctx->r1) {
        // 0x15051B6C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15051BD0;
    }
    // 0x15051B6C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15051B70: beql        $v0, $at, L_15051BD4
    if (ctx->r2 == ctx->r1) {
        // 0x15051B74: lwc1        $f12, 0x6C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_15051BD4;
    }
    goto skip_25;
    // 0x15051B74: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    skip_25:
    // 0x15051B78: lbu         $t7, 0x120($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X120);
    // 0x15051B7C: bnel        $t7, $zero, L_15051BD4
    if (ctx->r15 != 0) {
        // 0x15051B80: lwc1        $f12, 0x6C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_15051BD4;
    }
    goto skip_26;
    // 0x15051B80: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    skip_26:
    // 0x15051B84: lbu         $t8, 0x19B($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X19B);
    // 0x15051B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15051B8C: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x15051B90: bnel        $t8, $zero, L_15051BD4
    if (ctx->r24 != 0) {
        // 0x15051B94: lwc1        $f12, 0x6C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_15051BD4;
    }
    goto skip_27;
    // 0x15051B94: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    skip_27:
    // 0x15051B98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15051B9C: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x15051BA0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15051BA4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x15051BA8: jal         0x1505E650
    // 0x15051BAC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_6;
    // 0x15051BAC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x15051BB0: b           L_15051BD4
    // 0x15051BB4: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
        goto L_15051BD4;
    // 0x15051BB4: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
L_15051BB8:
    // 0x15051BB8: lbu         $t9, 0x0($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X0);
    // 0x15051BBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051BC0: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x15051BC4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x15051BC8: lwc1        $f8, -0x6F20($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6F20);
    // 0x15051BCC: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
L_15051BD0:
    // 0x15051BD0: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
L_15051BD4:
    // 0x15051BD4: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15051BD8: addiu       $t2, $s0, 0x168
    ctx->r10 = ADD32(ctx->r16, 0X168);
    // 0x15051BDC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15051BE0: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x15051BE4: addiu       $a3, $s0, 0x164
    ctx->r7 = ADD32(ctx->r16, 0X164);
    // 0x15051BE8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x15051BEC: jal         0x1505A250
    // 0x15051BF0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    func_1505A250(rdram, ctx);
        goto after_7;
    // 0x15051BF0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_7:
    // 0x15051BF4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15051BF8: lwc1        $f0, 0x16C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x15051BFC: lwc1        $f2, 0x170($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X170);
    // 0x15051C00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051C04: sub.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x15051C08: lwc1        $f12, -0x6CF0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6CF0);
    // 0x15051C0C: lbu         $t3, 0x110($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X110);
    // 0x15051C10: sub.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x15051C14: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15051C18: nop

    // 0x15051C1C: mul.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x15051C20: add.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x15051C24: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x15051C28: swc1        $f10, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f10.u32l;
    // 0x15051C2C: beq         $t3, $zero, L_15051D98
    if (ctx->r11 == 0) {
        // 0x15051C30: swc1        $f6, 0x170($s0)
        MEM_W(0X170, ctx->r16) = ctx->f6.u32l;
            goto L_15051D98;
    }
    // 0x15051C30: swc1        $f6, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f6.u32l;
    // 0x15051C34: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15051C38: lwc1        $f16, 0x2C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15051C3C: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15051C40: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15051C44: sub.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x15051C48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15051C4C: jal         0x1505A630
    // 0x15051C50: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    func_1505A630(rdram, ctx);
        goto after_8;
    // 0x15051C50: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    after_8:
    // 0x15051C54: lw          $t4, 0x31C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X31C);
    // 0x15051C58: addiu       $at, $zero, 0x28E
    ctx->r1 = ADD32(0, 0X28E);
    // 0x15051C5C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15051C60: sh          $v0, 0x3E($t4)
    MEM_H(0X3E, ctx->r12) = ctx->r2;
    // 0x15051C64: lhu         $v1, 0x84($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X84);
    // 0x15051C68: beq         $v1, $at, L_15051C80
    if (ctx->r3 == ctx->r1) {
        // 0x15051C6C: addiu       $at, $zero, 0x101
        ctx->r1 = ADD32(0, 0X101);
            goto L_15051C80;
    }
    // 0x15051C6C: addiu       $at, $zero, 0x101
    ctx->r1 = ADD32(0, 0X101);
    // 0x15051C70: beq         $v1, $at, L_15051C80
    if (ctx->r3 == ctx->r1) {
        // 0x15051C74: addiu       $at, $zero, 0xD0
        ctx->r1 = ADD32(0, 0XD0);
            goto L_15051C80;
    }
    // 0x15051C74: addiu       $at, $zero, 0xD0
    ctx->r1 = ADD32(0, 0XD0);
    // 0x15051C78: bne         $v1, $at, L_15051CA8
    if (ctx->r3 != ctx->r1) {
        // 0x15051C7C: nop
    
            goto L_15051CA8;
    }
    // 0x15051C7C: nop

L_15051C80:
    // 0x15051C80: lw          $t5, 0x31C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X31C);
    // 0x15051C84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15051C88: lbu         $v0, 0x11A($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X11A);
    // 0x15051C8C: beq         $v0, $at, L_15051CA8
    if (ctx->r2 == ctx->r1) {
        // 0x15051C90: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15051CA8;
    }
    // 0x15051C90: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15051C94: beq         $v0, $at, L_15051CA8
    if (ctx->r2 == ctx->r1) {
        // 0x15051C98: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_15051CA8;
    }
    // 0x15051C98: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15051C9C: lbu         $t6, -0x1660($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1660);
    // 0x15051CA0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x15051CA4: sb          $t7, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r15;
L_15051CA8:
    // 0x15051CA8: lbu         $t8, -0x3D84($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3D84);
    // 0x15051CAC: bnel        $t8, $zero, L_15051D9C
    if (ctx->r24 != 0) {
        // 0x15051CB0: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_15051D9C;
    }
    goto skip_28;
    // 0x15051CB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_28:
    // 0x15051CB4: lbu         $t9, 0x110($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X110);
    // 0x15051CB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15051CBC: bnel        $t9, $at, L_15051D7C
    if (ctx->r25 != ctx->r1) {
        // 0x15051CC0: lui         $at, 0x4140
        ctx->r1 = S32(0X4140 << 16);
            goto L_15051D7C;
    }
    goto skip_29;
    // 0x15051CC0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    skip_29:
    // 0x15051CC4: lhu         $v0, 0x112($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X112);
    // 0x15051CC8: lw          $t1, 0x31C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X31C);
    // 0x15051CCC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15051CD0: sh          $v0, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r2;
    // 0x15051CD4: sh          $v0, 0x3E($t1)
    MEM_H(0X3E, ctx->r9) = ctx->r2;
    // 0x15051CD8: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15051CDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15051CE0: nop

    // 0x15051CE4: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x15051CE8: nop

    // 0x15051CEC: bc1fl       L_15051D9C
    if (!c1cs) {
        // 0x15051CF0: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_15051D9C;
    }
    goto skip_30;
    // 0x15051CF0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_30:
    // 0x15051CF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15051CF8: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15051CFC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x15051D00: nop

    // 0x15051D04: bc1fl       L_15051D9C
    if (!c1cs) {
        // 0x15051D08: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_15051D9C;
    }
    goto skip_31;
    // 0x15051D08: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_31:
    // 0x15051D0C: lbu         $t2, 0x104($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X104);
    // 0x15051D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15051D14: addiu       $a1, $zero, 0xA5
    ctx->r5 = ADD32(0, 0XA5);
    // 0x15051D18: bne         $t2, $zero, L_15051D70
    if (ctx->r10 != 0) {
        // 0x15051D1C: lui         $a2, 0x3FB3
        ctx->r6 = S32(0X3FB3 << 16);
            goto L_15051D70;
    }
    // 0x15051D1C: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x15051D20: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15051D24: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15051D28: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x15051D2C: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x15051D30: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15051D34: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x15051D38: jal         0x1505E650
    // 0x15051D3C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_1505E650(rdram, ctx);
        goto after_9;
    // 0x15051D3C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x15051D40: lhu         $t4, 0x76($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X76);
    // 0x15051D44: lbu         $t7, 0x100($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X100);
    // 0x15051D48: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x15051D4C: xori        $t6, $t4, 0x8000
    ctx->r14 = ctx->r12 ^ 0X8000;
    // 0x15051D50: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x15051D54: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x15051D58: sb          $v0, 0x83($s0)
    MEM_B(0X83, ctx->r16) = ctx->r2;
    // 0x15051D5C: sb          $v0, 0x89($s0)
    MEM_B(0X89, ctx->r16) = ctx->r2;
    // 0x15051D60: sb          $t3, 0x8A($s0)
    MEM_B(0X8A, ctx->r16) = ctx->r11;
    // 0x15051D64: sh          $t6, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r14;
    // 0x15051D68: sh          $t6, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r14;
    // 0x15051D6C: sb          $t8, 0x100($s0)
    MEM_B(0X100, ctx->r16) = ctx->r24;
L_15051D70:
    // 0x15051D70: b           L_15051D98
    // 0x15051D74: sb          $zero, 0x110($s0)
    MEM_B(0X110, ctx->r16) = 0;
        goto L_15051D98;
    // 0x15051D74: sb          $zero, 0x110($s0)
    MEM_B(0X110, ctx->r16) = 0;
    // 0x15051D78: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
L_15051D7C:
    // 0x15051D7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15051D80: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15051D84: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15051D88: nop

    // 0x15051D8C: bc1fl       L_15051D9C
    if (!c1cs) {
        // 0x15051D90: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_15051D9C;
    }
    goto skip_32;
    // 0x15051D90: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_32:
    // 0x15051D94: sb          $zero, 0x110($s0)
    MEM_B(0X110, ctx->r16) = 0;
L_15051D98:
    // 0x15051D98: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_15051D9C:
    // 0x15051D9C: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x15051DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15051DA4: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    // 0x15051DA8: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x15051DAC: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x15051DB0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x15051DB4: bc1fl       L_15051EB4
    if (!c1cs) {
        // 0x15051DB8: lw          $t7, 0x31C($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X31C);
            goto L_15051EB4;
    }
    goto skip_33;
    // 0x15051DB8: lw          $t7, 0x31C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X31C);
    skip_33:
    // 0x15051DBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15051DC0: addiu       $a3, $sp, 0x90
    ctx->r7 = ADD32(ctx->r29, 0X90);
    // 0x15051DC4: jal         0x1505210C
    // 0x15051DC8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_1505210C(rdram, ctx);
        goto after_10;
    // 0x15051DC8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x15051DCC: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x15051DD0: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
    // 0x15051DD4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15051DD8: lbu         $v0, 0x4E($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4E);
    // 0x15051DDC: beql        $v0, $at, L_15051EB4
    if (ctx->r2 == ctx->r1) {
        // 0x15051DE0: lw          $t7, 0x31C($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X31C);
            goto L_15051EB4;
    }
    goto skip_34;
    // 0x15051DE0: lw          $t7, 0x31C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X31C);
    skip_34:
    // 0x15051DE4: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x15051DE8: bne         $t9, $zero, L_15051E5C
    if (ctx->r25 != 0) {
        // 0x15051DEC: nop
    
            goto L_15051E5C;
    }
    // 0x15051DEC: nop

    // 0x15051DF0: lbu         $t1, 0x110($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X110);
    // 0x15051DF4: andi        $t2, $v0, 0xF
    ctx->r10 = ctx->r2 & 0XF;
    // 0x15051DF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15051DFC: bne         $t1, $zero, L_15051E5C
    if (ctx->r9 != 0) {
        // 0x15051E00: nop
    
            goto L_15051E5C;
    }
    // 0x15051E00: nop

    // 0x15051E04: beq         $t2, $at, L_15051E5C
    if (ctx->r10 == ctx->r1) {
        // 0x15051E08: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_15051E5C;
    }
    // 0x15051E08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051E0C: lwc1        $f6, -0x6CEC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6CEC);
    // 0x15051E10: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15051E14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051E18: lwc1        $f8, -0x6CE8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6CE8);
    // 0x15051E1C: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15051E20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051E24: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15051E28: lwc1        $f8, -0x6CE4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6CE4);
    // 0x15051E2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051E30: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15051E34: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x15051E38: lw          $t3, 0x31C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X31C);
    // 0x15051E3C: lwc1        $f6, -0x6CE0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6CE0);
    // 0x15051E40: lwc1        $f10, 0x0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X0);
    // 0x15051E44: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x15051E48: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15051E4C: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15051E50: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15051E54: b           L_15051EB0
    // 0x15051E58: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
        goto L_15051EB0;
    // 0x15051E58: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
L_15051E5C:
    // 0x15051E5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051E60: lwc1        $f2, -0x6CDC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6CDC);
    // 0x15051E64: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15051E68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15051E6C: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x15051E70: nop

    // 0x15051E74: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15051E78: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x15051E7C: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x15051E80: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x15051E84: lw          $t4, 0x31C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X31C);
    // 0x15051E88: lbu         $t5, 0x4E($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X4E);
    // 0x15051E8C: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x15051E90: bne         $t6, $at, L_15051EB0
    if (ctx->r14 != ctx->r1) {
        // 0x15051E94: nop
    
            goto L_15051EB0;
    }
    // 0x15051E94: nop

    // 0x15051E98: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15051E9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15051EA0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15051EA4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15051EA8: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x15051EAC: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
L_15051EB0:
    // 0x15051EB0: lw          $t7, 0x31C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X31C);
L_15051EB4:
    // 0x15051EB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15051EB8: lbu         $t8, 0x4E($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4E);
    // 0x15051EBC: bne         $t8, $at, L_1505200C
    if (ctx->r24 != ctx->r1) {
        // 0x15051EC0: lui         $at, 0xC1F0
        ctx->r1 = S32(0XC1F0 << 16);
            goto L_1505200C;
    }
    // 0x15051EC0: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x15051EC4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15051EC8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x15051ECC: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15051ED0: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x15051ED4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15051ED8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15051EDC: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15051EE0: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15051EE4: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15051EE8: bc1f        L_15051EFC
    if (!c1cs) {
        // 0x15051EEC: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_15051EFC;
    }
    // 0x15051EEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15051EF0: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x15051EF4: b           L_15051F04
    // 0x15051EF8: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
        goto L_15051F04;
    // 0x15051EF8: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
L_15051EFC:
    // 0x15051EFC: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x15051F00: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
L_15051F04:
    // 0x15051F04: lwc1        $f8, -0x6CD8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6CD8);
    // 0x15051F08: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15051F0C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15051F10: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x15051F14: lw          $v1, 0x31C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X31C);
    // 0x15051F18: lb          $a0, 0x44($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X44);
    // 0x15051F1C: blezl       $a0, L_15051F70
    if (SIGNED(ctx->r4) <= 0) {
        // 0x15051F20: lwc1        $f2, 0xC4($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0XC4);
            goto L_15051F70;
    }
    goto skip_35;
    // 0x15051F20: lwc1        $f2, 0xC4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC4);
    skip_35:
    // 0x15051F24: lw          $v0, -0x3DB0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DB0);
    // 0x15051F28: sll         $t5, $a0, 1
    ctx->r13 = S32(ctx->r4 << 1);
    // 0x15051F2C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x15051F30: andi        $t2, $v0, 0x4
    ctx->r10 = ctx->r2 & 0X4;
    // 0x15051F34: addiu       $v0, $t2, -0x2
    ctx->r2 = ADD32(ctx->r10, -0X2);
    // 0x15051F38: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x15051F3C: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x15051F40: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15051F44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15051F48: nop

    // 0x15051F4C: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x15051F50: mflo        $v0
    ctx->r2 = lo;
    // 0x15051F54: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x15051F58: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15051F5C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x15051F60: nop

    // 0x15051F64: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15051F68: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x15051F6C: lwc1        $f2, 0xC4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC4);
L_15051F70:
    // 0x15051F70: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x15051F74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15051F78: abs.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = fabsf(ctx->f2.fl);
    // 0x15051F7C: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x15051F80: nop

    // 0x15051F84: bc1fl       L_15051FE0
    if (!c1cs) {
        // 0x15051F88: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_15051FE0;
    }
    goto skip_36;
    // 0x15051F88: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_36:
    // 0x15051F8C: lbu         $t8, -0x19EA($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X19EA);
    // 0x15051F90: bnel        $t8, $zero, L_15051FE0
    if (ctx->r24 != 0) {
        // 0x15051F94: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_15051FE0;
    }
    goto skip_37;
    // 0x15051F94: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_37:
    // 0x15051F98: lbu         $t9, 0x1CA($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1CA);
    // 0x15051F9C: beql        $t9, $zero, L_15051FE0
    if (ctx->r25 == 0) {
        // 0x15051FA0: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_15051FE0;
    }
    goto skip_38;
    // 0x15051FA0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_38:
    // 0x15051FA4: lh          $t1, 0x24($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X24);
    // 0x15051FA8: lui         $t2, 0xFF02
    ctx->r10 = S32(0XFF02 << 16);
    // 0x15051FAC: ori         $t2, $t2, 0x146
    ctx->r10 = ctx->r10 | 0X146;
    // 0x15051FB0: bne         $t1, $zero, L_15051FDC
    if (ctx->r9 != 0) {
        // 0x15051FB4: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_15051FDC;
    }
    // 0x15051FB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15051FB8: sw          $t2, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r10;
    // 0x15051FBC: jal         0x1506E8D8
    // 0x15051FC0: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    func_1506E8D8(rdram, ctx);
        goto after_11;
    // 0x15051FC0: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    after_11:
    // 0x15051FC4: lw          $t4, 0x31C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X31C);
    // 0x15051FC8: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15051FCC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15051FD0: sh          $t3, 0x24($t4)
    MEM_H(0X24, ctx->r12) = ctx->r11;
    // 0x15051FD4: lwc1        $f2, 0xC4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x15051FD8: abs.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = fabsf(ctx->f2.fl);
L_15051FDC:
    // 0x15051FDC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
L_15051FE0:
    // 0x15051FE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15051FE4: nop

    // 0x15051FE8: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x15051FEC: nop

    // 0x15051FF0: bc1fl       L_15052004
    if (!c1cs) {
        // 0x15051FF4: lwc1        $f4, 0x94($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
            goto L_15052004;
    }
    goto skip_39;
    // 0x15051FF4: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    skip_39:
    // 0x15051FF8: lw          $t5, 0x31C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X31C);
    // 0x15051FFC: sh          $zero, 0x24($t5)
    MEM_H(0X24, ctx->r13) = 0;
    // 0x15052000: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
L_15052004:
    // 0x15052004: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x15052008: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
L_1505200C:
    // 0x1505200C: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x15052010: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15052014: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x15052018: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x1505201C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15052020: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x15052024: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x15052028: b           L_150520E4
    // 0x1505202C: lwc1        $f0, 0xC4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC4);
        goto L_150520E4;
    // 0x1505202C: lwc1        $f0, 0xC4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC4);
L_15052030:
    // 0x15052030: lwc1        $f10, 0x118($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X118);
    // 0x15052034: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15052038: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1505203C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x15052040: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15052044: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15052048: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1505204C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x15052050: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15052054: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15052058: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1505205C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15052060: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x15052064: addiu       $t6, $s0, 0x168
    ctx->r14 = ADD32(ctx->r16, 0X168);
    // 0x15052068: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x1505206C: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x15052070: nop

    // 0x15052074: bc1f        L_1505208C
    if (!c1cs) {
        // 0x15052078: nop
    
            goto L_1505208C;
    }
    // 0x15052078: nop

    // 0x1505207C: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x15052080: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15052084: b           L_1505209C
    // 0x15052088: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
        goto L_1505209C;
    // 0x15052088: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
L_1505208C:
    // 0x1505208C: lwc1        $f10, -0x6CD4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6CD4);
    // 0x15052090: mul.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x15052094: nop

    // 0x15052098: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
L_1505209C:
    // 0x1505209C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x150520A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150520A4: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x150520A8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x150520AC: nop

    // 0x150520B0: bc1f        L_150520D8
    if (!c1cs) {
        // 0x150520B4: nop
    
            goto L_150520D8;
    }
    // 0x150520B4: nop

    // 0x150520B8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x150520BC: nop

    // 0x150520C0: bc1f        L_150520D8
    if (!c1cs) {
        // 0x150520C4: nop
    
            goto L_150520D8;
    }
    // 0x150520C4: nop

    // 0x150520C8: lwc1        $f6, 0x54($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X54);
    // 0x150520CC: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150520D0: add.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x150520D4: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
L_150520D8:
    // 0x150520D8: jal         0x1505A250
    // 0x150520DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_1505A250(rdram, ctx);
        goto after_12;
    // 0x150520DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_12:
    // 0x150520E0: lwc1        $f0, 0xC4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC4);
L_150520E4:
    // 0x150520E4: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x150520E8: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x150520EC: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x150520F0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150520F4: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x150520F8: swc1        $f4, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f4.u32l;
    // 0x150520FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15052100: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15052104: jr          $ra
    // 0x15052108: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x15052108: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_15152ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15152ABC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15152AC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15152AC4: jal         0x150ADA20
    // 0x15152AC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15152AC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x15152ACC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15152AD0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15152AD4: mfhi        $t6
    ctx->r14 = hi;
    // 0x15152AD8: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x15152ADC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15152AE0: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x15152AE4: addiu       $t9, $t9, 0x5FE0
    ctx->r25 = ADD32(ctx->r25, 0X5FE0);
    // 0x15152AE8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15152AEC: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x15152AF0: jal         0x150ADA20
    // 0x15152AF4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15152AF4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x15152AF8: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x15152AFC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15152B00: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15152B04: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x15152B08: mfhi        $t0
    ctx->r8 = hi;
    // 0x15152B0C: addiu       $t1, $t0, 0x9B
    ctx->r9 = ADD32(ctx->r8, 0X9B);
    // 0x15152B10: sb          $t1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r9;
    // 0x15152B14: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x15152B18: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
    // 0x15152B1C: lbu         $t3, 0x1($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X1);
    // 0x15152B20: sb          $t3, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r11;
    // 0x15152B24: lbu         $t4, 0x2($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2);
    // 0x15152B28: sb          $t4, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r12;
    // 0x15152B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15152B30: jr          $ra
    // 0x15152B34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x15152B34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_15083568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15083568: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1508356C: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x15083570: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x15083574: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x15083578: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x1508357C: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x15083580: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15083584: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x15083588: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x1508358C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x15083590: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x15083594: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x15083598: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x1508359C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x150835A0: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x150835A4: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x150835A8: addiu       $t7, $t7, 0x6CC4
    ctx->r15 = ADD32(ctx->r15, 0X6CC4);
    // 0x150835AC: sll         $t6, $s4, 3
    ctx->r14 = S32(ctx->r20 << 3);
    // 0x150835B0: addu        $s5, $t6, $t7
    ctx->r21 = ADD32(ctx->r14, ctx->r15);
    // 0x150835B4: lbu         $t8, 0x4($s5)
    ctx->r24 = MEM_BU(ctx->r21, 0X4);
    // 0x150835B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150835BC: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x150835C0: blez        $t8, L_1508369C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x150835C4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_1508369C;
    }
    // 0x150835C4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150835C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150835CC: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x150835D0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
L_150835D4:
    // 0x150835D4: addiu       $v1, $s4, 0x1
    ctx->r3 = ADD32(ctx->r20, 0X1);
    // 0x150835D8: bne         $v0, $zero, L_15083620
    if (ctx->r2 != 0) {
        // 0x150835DC: nop
    
            goto L_15083620;
    }
    // 0x150835DC: nop

    // 0x150835E0: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x150835E4: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x150835E8: lbu         $a2, 0x0($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X0);
    // 0x150835EC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150835F0: lbu         $t1, 0x4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X4);
    // 0x150835F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150835F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150835FC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15083600: lbu         $t2, 0x5($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X5);
    // 0x15083604: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x15083608: lbu         $t3, 0x6($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X6);
    // 0x1508360C: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x15083610: jal         0x15083AC8
    // 0x15083614: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    func_15083AC8(rdram, ctx);
        goto after_0;
    // 0x15083614: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_0:
    // 0x15083618: b           L_15083684
    // 0x1508361C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_15083684;
    // 0x1508361C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_15083620:
    // 0x15083620: bne         $s3, $v0, L_15083630
    if (ctx->r19 != ctx->r2) {
        // 0x15083624: addiu       $t0, $s0, 0x8
        ctx->r8 = ADD32(ctx->r16, 0X8);
            goto L_15083630;
    }
    // 0x15083624: addiu       $t0, $s0, 0x8
    ctx->r8 = ADD32(ctx->r16, 0X8);
    // 0x15083628: b           L_15083634
    // 0x1508362C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
        goto L_15083634;
    // 0x1508362C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
L_15083630:
    // 0x15083630: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_15083634:
    // 0x15083634: lbu         $t4, 0x4($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X4);
    // 0x15083638: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x1508363C: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x15083640: lbu         $a3, 0x7($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X7);
    // 0x15083644: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x15083648: lbu         $t5, 0x5($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X5);
    // 0x1508364C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x15083650: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x15083654: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x15083658: lbu         $t6, 0x2($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2);
    // 0x1508365C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x15083660: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x15083664: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x15083668: lbu         $t7, 0xE($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XE);
    // 0x1508366C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15083670: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x15083674: lbu         $t8, 0xF($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XF);
    // 0x15083678: jal         0x15030AF4
    // 0x1508367C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    func_15030AF4(rdram, ctx);
        goto after_1;
    // 0x1508367C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    after_1:
    // 0x15083680: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_15083684:
    // 0x15083684: lbu         $t9, 0x4($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X4);
    // 0x15083688: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1508368C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x15083690: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x15083694: bnel        $at, $zero, L_150835D4
    if (ctx->r1 != 0) {
        // 0x15083698: lbu         $v0, 0x3($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X3);
            goto L_150835D4;
    }
    goto skip_0;
    // 0x15083698: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    skip_0:
L_1508369C:
    // 0x1508369C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150836A0: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x150836A4: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x150836A8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x150836AC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x150836B0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x150836B4: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x150836B8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x150836BC: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x150836C0: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x150836C4: jr          $ra
    // 0x150836C8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x150836C8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_10009B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10009B2C: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x10009B30: bne         $t6, $zero, L_10009B44
    if (ctx->r14 != 0) {
        // 0x10009B34: nop
    
            goto L_10009B44;
    }
    // 0x10009B34: nop

    // 0x10009B38: lb          $t7, 0x14($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X14);
    // 0x10009B3C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x10009B40: sb          $t8, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r24;
L_10009B44:
    // 0x10009B44: jr          $ra
    // 0x10009B48: nop

    return;
    return;
    // 0x10009B48: nop

;}
RECOMP_FUNC void func_1518E524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518E524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1518E528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518E52C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1518E530: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1518E534: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1518E538: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x1518E53C: sb          $t6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r14;
    // 0x1518E540: jal         0x150ADA20
    // 0x1518E544: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1518E544: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x1518E548: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x1518E54C: beq         $t7, $zero, L_1518E560
    if (ctx->r15 == 0) {
        // 0x1518E550: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_1518E560;
    }
    // 0x1518E550: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x1518E554: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x1518E558: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x1518E55C: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
L_1518E560:
    // 0x1518E560: jal         0x150ADA20
    // 0x1518E564: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1518E564: nop

    after_1:
    // 0x1518E568: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x1518E56C: beq         $v1, $zero, L_1518E588
    if (ctx->r3 == 0) {
        // 0x1518E570: lw          $t1, 0x18($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X18);
            goto L_1518E588;
    }
    // 0x1518E570: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x1518E574: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1518E578: beq         $v1, $at, L_1518E594
    if (ctx->r3 == ctx->r1) {
        // 0x1518E57C: lw          $t3, 0x18($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X18);
            goto L_1518E594;
    }
    // 0x1518E57C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x1518E580: b           L_1518E5A0
    // 0x1518E584: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
        goto L_1518E5A0;
    // 0x1518E584: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_1518E588:
    // 0x1518E588: addiu       $t0, $zero, 0x13
    ctx->r8 = ADD32(0, 0X13);
    // 0x1518E58C: b           L_1518E59C
    // 0x1518E590: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
        goto L_1518E59C;
    // 0x1518E590: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
L_1518E594:
    // 0x1518E594: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x1518E598: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
L_1518E59C:
    // 0x1518E59C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_1518E5A0:
    // 0x1518E5A0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1518E5A4: addiu       $t9, $zero, 0x301
    ctx->r25 = ADD32(0, 0X301);
    // 0x1518E5A8: sb          $zero, 0x0($t4)
    MEM_B(0X0, ctx->r12) = 0;
    // 0x1518E5AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x1518E5B0: sb          $zero, 0x0($t5)
    MEM_B(0X0, ctx->r13) = 0;
    // 0x1518E5B4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1518E5B8: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x1518E5BC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1518E5C0: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x1518E5C4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x1518E5C8: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x1518E5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1518E5D0: jr          $ra
    // 0x1518E5D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1518E5D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1510F8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510F8CC: andi        $v0, $a0, 0x1F
    ctx->r2 = ctx->r4 & 0X1F;
    // 0x1510F8D0: jr          $ra
    // 0x1510F8D4: nop

    return;
    return;
    // 0x1510F8D4: nop

;}
RECOMP_FUNC void func_1507B494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B494: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507B498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507B49C: jal         0x1507A3E8
    // 0x1507B4A0: nop

    func_1507A3E8(rdram, ctx);
        goto after_0;
    // 0x1507B4A0: nop

    after_0:
    // 0x1507B4A4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507B4A8: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1507B4AC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x1507B4B0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507B4B4: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507B4B8: jal         0x1506E46C
    // 0x1507B4BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506E46C(rdram, ctx);
        goto after_1;
    // 0x1507B4BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x1507B4C0: beq         $v0, $zero, L_1507B4D0
    if (ctx->r2 == 0) {
        // 0x1507B4C4: addiu       $a0, $zero, 0xBE
        ctx->r4 = ADD32(0, 0XBE);
            goto L_1507B4D0;
    }
    // 0x1507B4C4: addiu       $a0, $zero, 0xBE
    ctx->r4 = ADD32(0, 0XBE);
    // 0x1507B4C8: jal         0x1506BA4C
    // 0x1507B4CC: addiu       $a1, $zero, 0x514
    ctx->r5 = ADD32(0, 0X514);
    func_1506BA4C(rdram, ctx);
        goto after_2;
    // 0x1507B4CC: addiu       $a1, $zero, 0x514
    ctx->r5 = ADD32(0, 0X514);
    after_2:
L_1507B4D0:
    // 0x1507B4D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507B4D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507B4D8: jr          $ra
    // 0x1507B4DC: nop

    return;
    return;
    // 0x1507B4DC: nop

;}
RECOMP_FUNC void func_100131FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100131FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10013200: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10013204: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10013208: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1001320C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x10013210: addiu       $t7, $zero, 0x2C
    ctx->r15 = ADD32(0, 0X2C);
    // 0x10013214: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10013218: lw          $a2, 0xC($t6)
    ctx->r6 = MEM_W(ctx->r14, 0XC);
    // 0x1001321C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x10013220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10013224: jal         0x10012844
    // 0x10013228: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x10013228: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_0:
    // 0x1001322C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10013230: sw          $v0, 0x2804($at)
    MEM_W(0X2804, ctx->r1) = ctx->r2;
    // 0x10013234: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x10013238: lw          $t8, 0x2804($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2804);
    // 0x1001323C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10013240: sw          $t8, 0x2800($at)
    MEM_W(0X2800, ctx->r1) = ctx->r24;
    // 0x10013244: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x10013248: lw          $t9, 0x2804($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2804);
    // 0x1001324C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10013250: sw          $t9, 0x2800($at)
    MEM_W(0X2800, ctx->r1) = ctx->r25;
    // 0x10013254: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x10013258: lw          $t0, 0x2804($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2804);
    // 0x1001325C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x10013260: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x10013264: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x10013268: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x1001326C: blez        $t2, L_100132CC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x10013270: nop
    
            goto L_100132CC;
    }
    // 0x10013270: nop

L_10013274:
    // 0x10013274: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x10013278: lui         $t5, 0x8004
    ctx->r13 = S32(0X8004 << 16);
    // 0x1001327C: lw          $t5, 0x2804($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2804);
    // 0x10013280: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x10013284: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x10013288: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1001328C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x10013290: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x10013294: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x10013298: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x1001329C: addiu       $t7, $t6, 0x2C
    ctx->r15 = ADD32(ctx->r14, 0X2C);
    // 0x100132A0: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x100132A4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x100132A8: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x100132AC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x100132B0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x100132B4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x100132B8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x100132BC: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x100132C0: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x100132C4: bne         $at, $zero, L_10013274
    if (ctx->r1 != 0) {
        // 0x100132C8: sw          $t2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r10;
            goto L_10013274;
    }
    // 0x100132C8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
L_100132CC:
    // 0x100132CC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x100132D0: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x100132D4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x100132D8: lui         $t6, 0x1001
    ctx->r14 = S32(0X1001 << 16);
    // 0x100132DC: addiu       $t6, $t6, 0x2E04
    ctx->r14 = ADD32(ctx->r14, 0X2E04);
    // 0x100132E0: sw          $t6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r14;
    // 0x100132E4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x100132E8: lui         $t8, 0x1001
    ctx->r24 = S32(0X1001 << 16);
    // 0x100132EC: addiu       $t8, $t8, 0x2F94
    ctx->r24 = ADD32(ctx->r24, 0X2F94);
    // 0x100132F0: sw          $t8, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r24;
    // 0x100132F4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x100132F8: lui         $t0, 0x1001
    ctx->r8 = S32(0X1001 << 16);
    // 0x100132FC: addiu       $t0, $t0, 0x31D8
    ctx->r8 = ADD32(ctx->r8, 0X31D8);
    // 0x10013300: sw          $t0, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r8;
    // 0x10013304: b           L_1001330C
    // 0x10013308: nop

        goto L_1001330C;
    // 0x10013308: nop

L_1001330C:
    // 0x1001330C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x10013310: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10013314: jr          $ra
    // 0x10013318: nop

    return;
    return;
    // 0x10013318: nop

;}
RECOMP_FUNC void func_150413FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150413FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15041400: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x15041404: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x15041408: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1504140C: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x15041410: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15041414: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15041418: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1504141C: lbu         $t6, 0x0($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X0);
    // 0x15041420: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x15041424: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x15041428: beq         $t6, $zero, L_15041460
    if (ctx->r14 == 0) {
        // 0x1504142C: andi        $a0, $t6, 0xFF
        ctx->r4 = ctx->r14 & 0XFF;
            goto L_15041460;
    }
    // 0x1504142C: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
L_15041430:
    // 0x15041430: jal         0x15041480
    // 0x15041434: nop

    func_15041480(rdram, ctx);
        goto after_0;
    // 0x15041434: nop

    after_0:
    // 0x15041438: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1504143C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15041440: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x15041444: jal         0x15041508
    // 0x15041448: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_15041508(rdram, ctx);
        goto after_1;
    // 0x15041448: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_1:
    // 0x1504144C: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x15041450: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x15041454: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15041458: bne         $a0, $zero, L_15041430
    if (ctx->r4 != 0) {
        // 0x1504145C: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_15041430;
    }
    // 0x1504145C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_15041460:
    // 0x15041460: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x15041464: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15041468: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1504146C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15041470: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x15041474: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x15041478: jr          $ra
    // 0x1504147C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1504147C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_151CE49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CE49C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151CE4A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151CE4A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151CE4A8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151CE4AC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151CE4B0: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x151CE4B4: lw          $v0, 0x98($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X98);
    // 0x151CE4B8: lw          $t7, 0x48($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X48);
    // 0x151CE4BC: jal         0x151494E0
    // 0x151CE4C0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_151494E0(rdram, ctx);
        goto after_0;
    // 0x151CE4C0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x151CE4C4: jal         0x151478F4
    // 0x151CE4C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_151478F4(rdram, ctx);
        goto after_1;
    // 0x151CE4C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x151CE4CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151CE4D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151CE4D4: jr          $ra
    // 0x151CE4D8: nop

    return;
    return;
    // 0x151CE4D8: nop

;}
RECOMP_FUNC void func_150F6138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F6138: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150F613C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150F6140: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150F6144: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150F6148: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x150F614C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x150F6150: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x150F6154: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x150F6158: addiu       $a2, $t6, 0x28
    ctx->r6 = ADD32(ctx->r14, 0X28);
    // 0x150F615C: addiu       $a3, $t6, 0x2C
    ctx->r7 = ADD32(ctx->r14, 0X2C);
    // 0x150F6160: jal         0x15149514
    // 0x150F6164: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15149514(rdram, ctx);
        goto after_0;
    // 0x150F6164: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x150F6168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150F616C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150F6170: jr          $ra
    // 0x150F6174: nop

    return;
    return;
    // 0x150F6174: nop

;}
RECOMP_FUNC void func_1501F72C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501F72C: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x1501F730: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1501F734: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1501F738: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x1501F73C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1501F740: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1501F744: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x1501F748: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x1501F74C: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x1501F750: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501F754: addiu       $t7, $t7, 0x35C8
    ctx->r15 = ADD32(ctx->r15, 0X35C8);
    // 0x1501F758: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x1501F75C: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x1501F760: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x1501F764: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x1501F768: sll         $t4, $t8, 1
    ctx->r12 = S32(ctx->r24 << 1);
    // 0x1501F76C: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x1501F770: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x1501F774: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x1501F778: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501F77C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1501F780: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x1501F784: bltz        $v1, L_1501F820
    if (SIGNED(ctx->r3) < 0) {
        // 0x1501F788: addu        $t6, $t6, $t0
        ctx->r14 = ADD32(ctx->r14, ctx->r8);
            goto L_1501F820;
    }
    // 0x1501F788: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x1501F78C: lw          $t6, 0x3A50($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3A50);
    // 0x1501F790: sll         $t7, $t8, 6
    ctx->r15 = S32(ctx->r24 << 6);
    // 0x1501F794: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x1501F798: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x1501F79C: addu        $v0, $a1, $v1
    ctx->r2 = ADD32(ctx->r5, ctx->r3);
L_1501F7A0:
    // 0x1501F7A0: bgez        $v0, L_1501F7B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1501F7A4: sra         $t5, $v0, 1
        ctx->r13 = S32(SIGNED(ctx->r2) >> 1);
            goto L_1501F7B0;
    }
    // 0x1501F7A4: sra         $t5, $v0, 1
    ctx->r13 = S32(SIGNED(ctx->r2) >> 1);
    // 0x1501F7A8: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x1501F7AC: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_1501F7B0:
    // 0x1501F7B0: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x1501F7B4: addu        $t6, $a0, $t8
    ctx->r14 = ADD32(ctx->r4, ctx->r24);
    // 0x1501F7B8: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x1501F7BC: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x1501F7C0: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x1501F7C4: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x1501F7C8: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x1501F7CC: bc1fl       L_1501F7E0
    if (!c1cs) {
        // 0x1501F7D0: addiu       $a1, $s0, 0x1
        ctx->r5 = ADD32(ctx->r16, 0X1);
            goto L_1501F7E0;
    }
    goto skip_0;
    // 0x1501F7D0: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x1501F7D4: b           L_1501F7E0
    // 0x1501F7D8: addiu       $v1, $t5, -0x1
    ctx->r3 = ADD32(ctx->r13, -0X1);
        goto L_1501F7E0;
    // 0x1501F7D8: addiu       $v1, $t5, -0x1
    ctx->r3 = ADD32(ctx->r13, -0X1);
    // 0x1501F7DC: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
L_1501F7E0:
    // 0x1501F7E0: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1501F7E4: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1501F7E8: c.le.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl <= ctx->f12.fl;
    // 0x1501F7EC: nop

    // 0x1501F7F0: bc1f        L_1501F814
    if (!c1cs) {
        // 0x1501F7F4: nop
    
            goto L_1501F814;
    }
    // 0x1501F7F4: nop

    // 0x1501F7F8: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1501F7FC: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x1501F800: nop

    // 0x1501F804: bc1f        L_1501F814
    if (!c1cs) {
        // 0x1501F808: nop
    
            goto L_1501F814;
    }
    // 0x1501F808: nop

    // 0x1501F80C: b           L_1501F820
    // 0x1501F810: sw          $s0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r16;
        goto L_1501F820;
    // 0x1501F810: sw          $s0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r16;
L_1501F814:
    // 0x1501F814: beql        $at, $zero, L_1501F7A0
    if (ctx->r1 == 0) {
        // 0x1501F818: addu        $v0, $a1, $v1
        ctx->r2 = ADD32(ctx->r5, ctx->r3);
            goto L_1501F7A0;
    }
    goto skip_1;
    // 0x1501F818: addu        $v0, $a1, $v1
    ctx->r2 = ADD32(ctx->r5, ctx->r3);
    skip_1:
    // 0x1501F81C: sw          $s0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r16;
L_1501F820:
    // 0x1501F820: lw          $s0, 0x84($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X84);
    // 0x1501F824: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x1501F828: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1501F82C: addiu       $t5, $t5, 0x3A50
    ctx->r13 = ADD32(ctx->r13, 0X3A50);
    // 0x1501F830: sw          $s0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r16;
    // 0x1501F834: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x1501F838: addu        $t2, $t0, $t5
    ctx->r10 = ADD32(ctx->r8, ctx->r13);
    // 0x1501F83C: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x1501F840: sll         $t3, $t8, 6
    ctx->r11 = S32(ctx->r24 << 6);
    // 0x1501F844: lw          $a2, 0x94($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94);
    // 0x1501F848: addu        $t7, $t6, $t3
    ctx->r15 = ADD32(ctx->r14, ctx->r11);
    // 0x1501F84C: lbu         $t9, 0x3C($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X3C);
    // 0x1501F850: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1501F854: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x1501F858: beql        $s0, $t9, L_1501F890
    if (ctx->r16 == ctx->r25) {
        // 0x1501F85C: lw          $t5, 0x94($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X94);
            goto L_1501F890;
    }
    goto skip_2;
    // 0x1501F85C: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    skip_2:
    // 0x1501F860: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x1501F864: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x1501F868: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x1501F86C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x1501F870: jal         0x15020878
    // 0x1501F874: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    func_15020878(rdram, ctx);
        goto after_0;
    // 0x1501F874: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x1501F878: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x1501F87C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1501F880: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1501F884: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x1501F888: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1501F88C: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
L_1501F890:
    // 0x1501F890: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x1501F894: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1501F898: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x1501F89C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x1501F8A0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x1501F8A4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x1501F8A8: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x1501F8AC: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x1501F8B0: lw          $a1, 0x3868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3868);
    // 0x1501F8B4: sll         $t5, $s0, 3
    ctx->r13 = S32(ctx->r16 << 3);
    // 0x1501F8B8: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x1501F8BC: addu        $t7, $a1, $t5
    ctx->r15 = ADD32(ctx->r5, ctx->r13);
    // 0x1501F8C0: lhu         $t6, 0x6($t7)
    ctx->r14 = MEM_HU(ctx->r15, 0X6);
    // 0x1501F8C4: addu        $t8, $t9, $t4
    ctx->r24 = ADD32(ctx->r25, ctx->r12);
    // 0x1501F8C8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x1501F8CC: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x1501F8D0: lhu         $a3, 0x0($t8)
    ctx->r7 = MEM_HU(ctx->r24, 0X0);
    // 0x1501F8D4: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    // 0x1501F8D8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x1501F8DC: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x1501F8E0: jal         0x1501FFE8
    // 0x1501F8E4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1501FFE8(rdram, ctx);
        goto after_1;
    // 0x1501F8E4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x1501F8E8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x1501F8EC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1501F8F0: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1501F8F4: bne         $t5, $zero, L_1501FB48
    if (ctx->r13 != 0) {
        // 0x1501F8F8: lwc1        $f12, 0x8C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
            goto L_1501FB48;
    }
    // 0x1501F8F8: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1501F8FC: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x1501F900: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x1501F904: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1501F908: addu        $t6, $t7, $t3
    ctx->r14 = ADD32(ctx->r15, ctx->r11);
    // 0x1501F90C: lw          $a0, 0x38($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X38);
    // 0x1501F910: addu        $v0, $a1, $v1
    ctx->r2 = ADD32(ctx->r5, ctx->r3);
L_1501F914:
    // 0x1501F914: bgez        $v0, L_1501F924
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1501F918: sra         $t9, $v0, 1
        ctx->r25 = S32(SIGNED(ctx->r2) >> 1);
            goto L_1501F924;
    }
    // 0x1501F918: sra         $t9, $v0, 1
    ctx->r25 = S32(SIGNED(ctx->r2) >> 1);
    // 0x1501F91C: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x1501F920: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_1501F924:
    // 0x1501F924: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x1501F928: addu        $t5, $a0, $t8
    ctx->r13 = ADD32(ctx->r4, ctx->r24);
    // 0x1501F92C: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x1501F930: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x1501F934: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x1501F938: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x1501F93C: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x1501F940: bc1fl       L_1501F954
    if (!c1cs) {
        // 0x1501F944: addiu       $a1, $t1, 0x1
        ctx->r5 = ADD32(ctx->r9, 0X1);
            goto L_1501F954;
    }
    goto skip_3;
    // 0x1501F944: addiu       $a1, $t1, 0x1
    ctx->r5 = ADD32(ctx->r9, 0X1);
    skip_3:
    // 0x1501F948: b           L_1501F954
    // 0x1501F94C: addiu       $v1, $t9, -0x1
    ctx->r3 = ADD32(ctx->r25, -0X1);
        goto L_1501F954;
    // 0x1501F94C: addiu       $v1, $t9, -0x1
    ctx->r3 = ADD32(ctx->r25, -0X1);
    // 0x1501F950: addiu       $a1, $t1, 0x1
    ctx->r5 = ADD32(ctx->r9, 0X1);
L_1501F954:
    // 0x1501F954: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1501F958: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1501F95C: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x1501F960: nop

    // 0x1501F964: bc1f        L_1501F980
    if (!c1cs) {
        // 0x1501F968: nop
    
            goto L_1501F980;
    }
    // 0x1501F968: nop

    // 0x1501F96C: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1501F970: c.le.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl <= ctx->f18.fl;
    // 0x1501F974: nop

    // 0x1501F978: bc1t        L_1501F988
    if (c1cs) {
        // 0x1501F97C: nop
    
            goto L_1501F988;
    }
    // 0x1501F97C: nop

L_1501F980:
    // 0x1501F980: beql        $at, $zero, L_1501F914
    if (ctx->r1 == 0) {
        // 0x1501F984: addu        $v0, $a1, $v1
        ctx->r2 = ADD32(ctx->r5, ctx->r3);
            goto L_1501F914;
    }
    goto skip_4;
    // 0x1501F984: addu        $v0, $a1, $v1
    ctx->r2 = ADD32(ctx->r5, ctx->r3);
    skip_4:
L_1501F988:
    // 0x1501F988: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501F98C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1501F990: lwc1        $f12, 0x69D0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X69D0);
    // 0x1501F994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1501F998: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x1501F99C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1501F9A0: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x1501F9A4: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x1501F9A8: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x1501F9AC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1501F9B0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1501F9B4: addu        $v0, $t9, $t3
    ctx->r2 = ADD32(ctx->r25, ctx->r11);
    // 0x1501F9B8: lwc1        $f6, 0x2C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x1501F9BC: lwc1        $f14, 0x20($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X20);
    // 0x1501F9C0: mul.s       $f18, $f4, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1501F9C4: nop

    // 0x1501F9C8: mul.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x1501F9CC: beq         $a1, $t0, L_1501FAA0
    if (ctx->r5 == ctx->r8) {
        // 0x1501F9D0: nop
    
            goto L_1501FAA0;
    }
    // 0x1501F9D0: nop

L_1501F9D4:
    // 0x1501F9D4: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1501F9D8: add.s       $f10, $f16, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x1501F9DC: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1501F9E0: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1501F9E4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x1501F9E8: mul.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1501F9EC: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x1501F9F0: xori        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 ^ 0X1;
    // 0x1501F9F4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1501F9F8: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
    // 0x1501F9FC: mflo        $t6
    ctx->r14 = lo;
    // 0x1501FA00: addu        $v1, $s1, $t6
    ctx->r3 = ADD32(ctx->r17, ctx->r14);
    // 0x1501FA04: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1501FA08: mul.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x1501FA0C: add.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1501FA10: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x1501FA14: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x1501FA18: addu        $v0, $t8, $t3
    ctx->r2 = ADD32(ctx->r24, ctx->r11);
    // 0x1501FA1C: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1501FA20: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x1501FA24: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1501FA28: mul.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x1501FA2C: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1501FA30: add.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1501FA34: mul.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x1501FA38: add.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1501FA3C: mul.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1501FA40: add.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x1501FA44: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x1501FA48: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x1501FA4C: addu        $v0, $t5, $t3
    ctx->r2 = ADD32(ctx->r13, ctx->r11);
    // 0x1501FA50: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1501FA54: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x1501FA58: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1501FA5C: mul.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1501FA60: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1501FA64: add.s       $f2, $f10, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x1501FA68: mul.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x1501FA6C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1501FA70: add.s       $f6, $f2, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x1501FA74: mul.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x1501FA78: add.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1501FA7C: mul.s       $f18, $f4, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1501FA80: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x1501FA84: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x1501FA88: addu        $v0, $t9, $t3
    ctx->r2 = ADD32(ctx->r25, ctx->r11);
    // 0x1501FA8C: lwc1        $f6, 0x2C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x1501FA90: lwc1        $f14, 0x20($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X20);
    // 0x1501FA94: mul.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x1501FA98: bne         $a1, $t0, L_1501F9D4
    if (ctx->r5 != ctx->r8) {
        // 0x1501FA9C: nop
    
            goto L_1501F9D4;
    }
    // 0x1501FA9C: nop

L_1501FAA0:
    // 0x1501FAA0: add.s       $f10, $f16, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x1501FAA4: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1501FAA8: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1501FAAC: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1501FAB0: mul.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1501FAB4: xori        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 ^ 0X1;
    // 0x1501FAB8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x1501FABC: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
    // 0x1501FAC0: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1501FAC4: mflo        $t6
    ctx->r14 = lo;
    // 0x1501FAC8: addu        $v1, $s1, $t6
    ctx->r3 = ADD32(ctx->r17, ctx->r14);
    // 0x1501FACC: mul.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x1501FAD0: add.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1501FAD4: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x1501FAD8: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x1501FADC: addu        $v0, $t8, $t3
    ctx->r2 = ADD32(ctx->r24, ctx->r11);
    // 0x1501FAE0: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1501FAE4: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x1501FAE8: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1501FAEC: mul.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x1501FAF0: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1501FAF4: add.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1501FAF8: mul.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x1501FAFC: add.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1501FB00: mul.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1501FB04: add.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x1501FB08: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x1501FB0C: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x1501FB10: addu        $v0, $t5, $t3
    ctx->r2 = ADD32(ctx->r13, ctx->r11);
    // 0x1501FB14: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1501FB18: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x1501FB1C: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1501FB20: mul.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1501FB24: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1501FB28: add.s       $f2, $f10, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x1501FB2C: mul.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x1501FB30: add.s       $f6, $f2, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x1501FB34: mul.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x1501FB38: add.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1501FB3C: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x1501FB40: b           L_1501FC78
    // 0x1501FB44: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_1501FC78;
    // 0x1501FB44: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_1501FB48:
    // 0x1501FB48: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x1501FB4C: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x1501FB50: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1501FB54: addu        $t8, $t9, $t3
    ctx->r24 = ADD32(ctx->r25, ctx->r11);
    // 0x1501FB58: lw          $t5, 0x4($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X4);
    // 0x1501FB5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1501FB60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1501FB64: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
    // 0x1501FB68: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1501FB6C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1501FB70: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1501FB74: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x1501FB78: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x1501FB7C: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x1501FB80: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x1501FB84: nop

    // 0x1501FB88: bc1tl       L_1501FB9C
    if (c1cs) {
        // 0x1501FB8C: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_1501FB9C;
    }
    goto skip_5;
    // 0x1501FB8C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_5:
    // 0x1501FB90: b           L_1501FBA0
    // 0x1501FB94: div.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f2.fl);
        goto L_1501FBA0;
    // 0x1501FB94: div.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1501FB98: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_1501FB9C:
    // 0x1501FB9C: nop

L_1501FBA0:
    // 0x1501FBA0: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1501FBA4: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1501FBA8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1501FBAC: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1501FBB0: sub.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x1501FBB4: mul.s       $f16, $f14, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x1501FBB8: beql        $a1, $t0, L_1501FC2C
    if (ctx->r5 == ctx->r8) {
        // 0x1501FBBC: add.s       $f14, $f18, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
            goto L_1501FC2C;
    }
    goto skip_6;
    // 0x1501FBBC: add.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
    skip_6:
    // 0x1501FBC0: add.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
L_1501FBC4:
    // 0x1501FBC4: mflo        $t6
    ctx->r14 = lo;
    // 0x1501FBC8: addu        $v1, $s1, $t6
    ctx->r3 = ADD32(ctx->r17, ctx->r14);
    // 0x1501FBCC: xori        $t9, $a0, 0x1
    ctx->r25 = ctx->r4 ^ 0X1;
    // 0x1501FBD0: swc1        $f14, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f14.u32l;
    // 0x1501FBD4: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1501FBD8: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1501FBDC: andi        $a0, $t9, 0xFF
    ctx->r4 = ctx->r25 & 0XFF;
    // 0x1501FBE0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1501FBE4: sub.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x1501FBE8: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1501FBEC: mul.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x1501FBF0: add.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x1501FBF4: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x1501FBF8: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1501FBFC: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1501FC00: sub.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x1501FC04: mul.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x1501FC08: add.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x1501FC0C: swc1        $f14, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f14.u32l;
    // 0x1501FC10: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1501FC14: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1501FC18: sub.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x1501FC1C: mul.s       $f16, $f14, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x1501FC20: bnel        $a1, $t0, L_1501FBC4
    if (ctx->r5 != ctx->r8) {
        // 0x1501FC24: add.s       $f14, $f18, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
            goto L_1501FBC4;
    }
    goto skip_7;
    // 0x1501FC24: add.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
    skip_7:
    // 0x1501FC28: add.s       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f16.fl;
L_1501FC2C:
    // 0x1501FC2C: mflo        $t6
    ctx->r14 = lo;
    // 0x1501FC30: addu        $v1, $s1, $t6
    ctx->r3 = ADD32(ctx->r17, ctx->r14);
    // 0x1501FC34: xori        $t9, $a0, 0x1
    ctx->r25 = ctx->r4 ^ 0X1;
    // 0x1501FC38: swc1        $f14, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f14.u32l;
    // 0x1501FC3C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1501FC40: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1501FC44: andi        $a0, $t9, 0xFF
    ctx->r4 = ctx->r25 & 0XFF;
    // 0x1501FC48: sub.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x1501FC4C: mul.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x1501FC50: add.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x1501FC54: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x1501FC58: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1501FC5C: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1501FC60: sub.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x1501FC64: mul.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x1501FC68: add.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x1501FC6C: swc1        $f14, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f14.u32l;
    // 0x1501FC70: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x1501FC74: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_1501FC78:
    // 0x1501FC78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1501FC7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1501FC80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1501FC84: jr          $ra
    // 0x1501FC88: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    return;
    // 0x1501FC88: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_15108D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15108D24: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x15108D28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15108D2C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x15108D30: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x15108D34: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x15108D38: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x15108D3C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x15108D40: lw          $t8, 0x50($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X50);
    // 0x15108D44: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x15108D48: addiu       $v0, $v0, 0xF8
    ctx->r2 = ADD32(ctx->r2, 0XF8);
    // 0x15108D4C: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x15108D50: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x15108D54: jal         0x150A8050
    // 0x15108D58: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x15108D58: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x15108D5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15108D60: lwc1        $f0, 0x2490($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2490);
    // 0x15108D64: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x15108D68: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x15108D6C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15108D70: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15108D74: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15108D78: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15108D7C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15108D80: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x15108D84: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15108D88: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15108D8C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x15108D90: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15108D94: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15108D98: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x15108D9C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15108DA0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15108DA4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x15108DA8: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15108DAC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15108DB0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x15108DB4: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15108DB8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15108DBC: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x15108DC0: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15108DC4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15108DC8: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x15108DCC: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15108DD0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15108DD4: lbu         $t0, -0x1640($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1640);
    // 0x15108DD8: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x15108DDC: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x15108DE0: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x15108DE4: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    // 0x15108DE8: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x15108DEC: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x15108DF0: addiu       $a1, $a1, 0x78
    ctx->r5 = ADD32(ctx->r5, 0X78);
    // 0x15108DF4: jal         0x150A7790
    // 0x15108DF8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x15108DF8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x15108DFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15108E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15108E04: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x15108E08: jr          $ra
    // 0x15108E0C: nop

    return;
    return;
    // 0x15108E0C: nop

;}
RECOMP_FUNC void func_15040A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040A4C: jr          $ra
    // 0x15040A50: nop

    return;
    return;
    // 0x15040A50: nop

;}
RECOMP_FUNC void func_1507EFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507EFD0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x1507EFD4: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1507EFD8: addiu       $t0, $t0, 0x154C
    ctx->r8 = ADD32(ctx->r8, 0X154C);
    // 0x1507EFDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1507EFE0: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x1507EFE4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1507EFE8: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
    // 0x1507EFEC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x1507EFF0: addiu       $t7, $t6, 0x58
    ctx->r15 = ADD32(ctx->r14, 0X58);
    // 0x1507EFF4: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    // 0x1507EFF8: lbu         $t8, 0x13A($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X13A);
    // 0x1507EFFC: beq         $t8, $zero, L_1507F028
    if (ctx->r24 == 0) {
        // 0x1507F000: nop
    
            goto L_1507F028;
    }
    // 0x1507F000: nop

    // 0x1507F004: lbu         $a2, 0x139($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X139);
    // 0x1507F008: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1507F00C: slti        $at, $a2, 0x21
    ctx->r1 = SIGNED(ctx->r6) < 0X21 ? 1 : 0;
    // 0x1507F010: beql        $at, $zero, L_1507F394
    if (ctx->r1 == 0) {
        // 0x1507F014: lw          $v0, 0x94($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X94);
            goto L_1507F394;
    }
    goto skip_0;
    // 0x1507F014: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    skip_0:
    // 0x1507F018: jal         0x1507EB80
    // 0x1507F01C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_1507EB80(rdram, ctx);
        goto after_0;
    // 0x1507F01C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x1507F020: b           L_1507F394
    // 0x1507F024: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
        goto L_1507F394;
    // 0x1507F024: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
L_1507F028:
    // 0x1507F028: lbu         $t9, 0x18C0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X18C0);
    // 0x1507F02C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x1507F030: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x1507F034: andi        $t1, $t9, 0x2
    ctx->r9 = ctx->r25 & 0X2;
    // 0x1507F038: beql        $t1, $zero, L_1507F058
    if (ctx->r9 == 0) {
        // 0x1507F03C: lw          $v0, 0x31C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X31C);
            goto L_1507F058;
    }
    goto skip_1;
    // 0x1507F03C: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    skip_1:
    // 0x1507F040: jal         0x1507EB80
    // 0x1507F044: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    func_1507EB80(rdram, ctx);
        goto after_1;
    // 0x1507F044: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    after_1:
    // 0x1507F048: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1507F04C: b           L_1507F390
    // 0x1507F050: sb          $zero, 0x18C0($at)
    MEM_B(0X18C0, ctx->r1) = 0;
        goto L_1507F390;
    // 0x1507F050: sb          $zero, 0x18C0($at)
    MEM_B(0X18C0, ctx->r1) = 0;
    // 0x1507F054: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
L_1507F058:
    // 0x1507F058: lh          $t2, 0x66($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X66);
    // 0x1507F05C: beql        $t2, $zero, L_1507F0CC
    if (ctx->r10 == 0) {
        // 0x1507F060: lbu         $t7, 0x1CA($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X1CA);
            goto L_1507F0CC;
    }
    goto skip_2;
    // 0x1507F060: lbu         $t7, 0x1CA($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1CA);
    skip_2:
    // 0x1507F064: lbu         $t3, 0x78($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X78);
    // 0x1507F068: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x1507F06C: bnel        $t3, $zero, L_1507F0CC
    if (ctx->r11 != 0) {
        // 0x1507F070: lbu         $t7, 0x1CA($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X1CA);
            goto L_1507F0CC;
    }
    goto skip_3;
    // 0x1507F070: lbu         $t7, 0x1CA($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1CA);
    skip_3:
    // 0x1507F074: lhu         $t5, 0x2($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X2);
    // 0x1507F078: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x1507F07C: slti        $at, $t5, 0x79
    ctx->r1 = SIGNED(ctx->r13) < 0X79 ? 1 : 0;
    // 0x1507F080: bne         $at, $zero, L_1507F0B0
    if (ctx->r1 != 0) {
        // 0x1507F084: nop
    
            goto L_1507F0B0;
    }
    // 0x1507F084: nop

    // 0x1507F088: sh          $zero, 0x66($v0)
    MEM_H(0X66, ctx->r2) = 0;
    // 0x1507F08C: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x1507F090: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x1507F094: sh          $zero, 0x2($t6)
    MEM_H(0X2, ctx->r14) = 0;
    // 0x1507F098: sb          $zero, 0xC($t6)
    MEM_B(0XC, ctx->r14) = 0;
    // 0x1507F09C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x1507F0A0: jal         0x1507FF94
    // 0x1507F0A4: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_1507FF94(rdram, ctx);
        goto after_2;
    // 0x1507F0A4: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_2:
    // 0x1507F0A8: b           L_1507F0B0
    // 0x1507F0AC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_1507F0B0;
    // 0x1507F0AC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_1507F0B0:
    // 0x1507F0B0: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1507F0B4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x1507F0B8: jal         0x1507EB80
    // 0x1507F0BC: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    func_1507EB80(rdram, ctx);
        goto after_3;
    // 0x1507F0BC: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    after_3:
    // 0x1507F0C0: b           L_1507F394
    // 0x1507F0C4: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
        goto L_1507F394;
    // 0x1507F0C4: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x1507F0C8: lbu         $t7, 0x1CA($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1CA);
L_1507F0CC:
    // 0x1507F0CC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1507F0D0: addiu       $t1, $t1, -0x3D30
    ctx->r9 = ADD32(ctx->r9, -0X3D30);
    // 0x1507F0D4: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x1507F0D8: beq         $at, $zero, L_1507F0F8
    if (ctx->r1 == 0) {
        // 0x1507F0DC: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_1507F0F8;
    }
    // 0x1507F0DC: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1507F0E0: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1507F0E4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x1507F0E8: jal         0x1507EB80
    // 0x1507F0EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1507EB80(rdram, ctx);
        goto after_4;
    // 0x1507F0EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x1507F0F0: b           L_1507F394
    // 0x1507F0F4: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
        goto L_1507F394;
    // 0x1507F0F4: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
L_1507F0F8:
    // 0x1507F0F8: lbu         $t8, 0x3E78($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3E78);
    // 0x1507F0FC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x1507F100: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x1507F104: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1507F108: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1507F10C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1507F110: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1507F114: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1507F118: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1507F11C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1507F120: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x1507F124: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1507F128: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    // 0x1507F12C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1507F130: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1507F134: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1507F138: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1507F13C: jal         0x1515942C
    // 0x1507F140: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_1515942C(rdram, ctx);
        goto after_5;
    // 0x1507F140: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_5:
    // 0x1507F144: beq         $v0, $zero, L_1507F164
    if (ctx->r2 == 0) {
        // 0x1507F148: lw          $t4, 0x94($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X94);
            goto L_1507F164;
    }
    // 0x1507F148: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x1507F14C: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1507F150: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x1507F154: jal         0x1507EB80
    // 0x1507F158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1507EB80(rdram, ctx);
        goto after_6;
    // 0x1507F158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x1507F15C: b           L_1507F394
    // 0x1507F160: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
        goto L_1507F394;
    // 0x1507F160: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
L_1507F164:
    // 0x1507F164: jal         0x1507F4C0
    // 0x1507F168: lbu         $a0, 0xC($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0XC);
    func_1507F4C0(rdram, ctx);
        goto after_7;
    // 0x1507F168: lbu         $a0, 0xC($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0XC);
    after_7:
    // 0x1507F16C: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x1507F170: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1507F174: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x1507F178: lhu         $t6, 0x2($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X2);
    // 0x1507F17C: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1507F180: bne         $at, $zero, L_1507F388
    if (ctx->r1 != 0) {
        // 0x1507F184: nop
    
            goto L_1507F388;
    }
    // 0x1507F184: nop

    // 0x1507F188: jal         0x1507EEF4
    // 0x1507F18C: nop

    func_1507EEF4(rdram, ctx);
        goto after_8;
    // 0x1507F18C: nop

    after_8:
    // 0x1507F190: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507F194: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507F198: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1507F19C: lhu         $t7, 0x2F8($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X2F8);
    // 0x1507F1A0: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x1507F1A4: beql        $t8, $zero, L_1507F1B8
    if (ctx->r24 == 0) {
        // 0x1507F1A8: lw          $t9, 0x31C($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X31C);
            goto L_1507F1B8;
    }
    goto skip_4;
    // 0x1507F1A8: lw          $t9, 0x31C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X31C);
    skip_4:
    // 0x1507F1AC: b           L_1507F2E0
    // 0x1507F1B0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
        goto L_1507F2E0;
    // 0x1507F1B0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1507F1B4: lw          $t9, 0x31C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X31C);
L_1507F1B8:
    // 0x1507F1B8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1507F1BC: lbu         $v0, 0x78($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X78);
    // 0x1507F1C0: bnel        $v0, $at, L_1507F1D4
    if (ctx->r2 != ctx->r1) {
        // 0x1507F1C4: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_1507F1D4;
    }
    goto skip_5;
    // 0x1507F1C4: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    skip_5:
    // 0x1507F1C8: b           L_1507F2E0
    // 0x1507F1CC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
        goto L_1507F2E0;
    // 0x1507F1CC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x1507F1D0: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
L_1507F1D4:
    // 0x1507F1D4: bnel        $v0, $at, L_1507F1E8
    if (ctx->r2 != ctx->r1) {
        // 0x1507F1D8: addiu       $at, $zero, 0x16
        ctx->r1 = ADD32(0, 0X16);
            goto L_1507F1E8;
    }
    goto skip_6;
    // 0x1507F1D8: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    skip_6:
    // 0x1507F1DC: b           L_1507F2E0
    // 0x1507F1E0: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
        goto L_1507F2E0;
    // 0x1507F1E0: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x1507F1E4: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
L_1507F1E8:
    // 0x1507F1E8: bne         $v0, $at, L_1507F1F8
    if (ctx->r2 != ctx->r1) {
        // 0x1507F1EC: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_1507F1F8;
    }
    // 0x1507F1EC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x1507F1F0: b           L_1507F2E0
    // 0x1507F1F4: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
        goto L_1507F2E0;
    // 0x1507F1F4: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
L_1507F1F8:
    // 0x1507F1F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1507F1FC: jal         0x1503195C
    // 0x1507F200: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_1503195C(rdram, ctx);
        goto after_9;
    // 0x1507F200: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_9:
    // 0x1507F204: beq         $v0, $zero, L_1507F214
    if (ctx->r2 == 0) {
        // 0x1507F208: lw          $a3, 0x30($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X30);
            goto L_1507F214;
    }
    // 0x1507F208: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x1507F20C: b           L_1507F2E0
    // 0x1507F210: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_1507F2E0;
    // 0x1507F210: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_1507F214:
    // 0x1507F214: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1507F218: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x1507F21C: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x1507F220: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1507F224: bne         $v0, $at, L_1507F24C
    if (ctx->r2 != ctx->r1) {
        // 0x1507F228: lui         $t3, 0x800D
        ctx->r11 = S32(0X800D << 16);
            goto L_1507F24C;
    }
    // 0x1507F228: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1507F22C: lbu         $t1, 0x18C0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X18C0);
    // 0x1507F230: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x1507F234: beq         $t2, $zero, L_1507F244
    if (ctx->r10 == 0) {
        // 0x1507F238: nop
    
            goto L_1507F244;
    }
    // 0x1507F238: nop

    // 0x1507F23C: b           L_1507F2E0
    // 0x1507F240: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
        goto L_1507F2E0;
    // 0x1507F240: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
L_1507F244:
    // 0x1507F244: b           L_1507F2E0
    // 0x1507F248: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
        goto L_1507F2E0;
    // 0x1507F248: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
L_1507F24C:
    // 0x1507F24C: lw          $t3, 0x154C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X154C);
    // 0x1507F250: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x1507F254: lbu         $t4, 0x4($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X4);
    // 0x1507F258: beq         $t4, $at, L_1507F2B8
    if (ctx->r12 == ctx->r1) {
        // 0x1507F25C: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_1507F2B8;
    }
    // 0x1507F25C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x1507F260: beq         $v0, $at, L_1507F2B8
    if (ctx->r2 == ctx->r1) {
        // 0x1507F264: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_1507F2B8;
    }
    // 0x1507F264: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x1507F268: beq         $v0, $at, L_1507F2B8
    if (ctx->r2 == ctx->r1) {
        // 0x1507F26C: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_1507F2B8;
    }
    // 0x1507F26C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x1507F270: beq         $v0, $at, L_1507F2B8
    if (ctx->r2 == ctx->r1) {
        // 0x1507F274: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_1507F2B8;
    }
    // 0x1507F274: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x1507F278: beq         $v0, $at, L_1507F2B8
    if (ctx->r2 == ctx->r1) {
        // 0x1507F27C: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_1507F2B8;
    }
    // 0x1507F27C: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x1507F280: beq         $v0, $at, L_1507F2B8
    if (ctx->r2 == ctx->r1) {
        // 0x1507F284: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_1507F2B8;
    }
    // 0x1507F284: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x1507F288: beq         $v0, $at, L_1507F2B8
    if (ctx->r2 == ctx->r1) {
        // 0x1507F28C: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_1507F2B8;
    }
    // 0x1507F28C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x1507F290: beq         $v0, $at, L_1507F2B8
    if (ctx->r2 == ctx->r1) {
        // 0x1507F294: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_1507F2B8;
    }
    // 0x1507F294: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x1507F298: beq         $v0, $at, L_1507F2B8
    if (ctx->r2 == ctx->r1) {
        // 0x1507F29C: addiu       $at, $zero, 0x1C
        ctx->r1 = ADD32(0, 0X1C);
            goto L_1507F2B8;
    }
    // 0x1507F29C: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x1507F2A0: beq         $v0, $at, L_1507F2B8
    if (ctx->r2 == ctx->r1) {
        // 0x1507F2A4: addiu       $at, $zero, 0x36
        ctx->r1 = ADD32(0, 0X36);
            goto L_1507F2B8;
    }
    // 0x1507F2A4: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x1507F2A8: beq         $v0, $at, L_1507F2B8
    if (ctx->r2 == ctx->r1) {
        // 0x1507F2AC: addiu       $at, $zero, 0x3A
        ctx->r1 = ADD32(0, 0X3A);
            goto L_1507F2B8;
    }
    // 0x1507F2AC: addiu       $at, $zero, 0x3A
    ctx->r1 = ADD32(0, 0X3A);
    // 0x1507F2B0: bne         $v0, $at, L_1507F2C0
    if (ctx->r2 != ctx->r1) {
        // 0x1507F2B4: lui         $v1, 0x800D
        ctx->r3 = S32(0X800D << 16);
            goto L_1507F2C0;
    }
    // 0x1507F2B4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
L_1507F2B8:
    // 0x1507F2B8: b           L_1507F2E0
    // 0x1507F2BC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
        goto L_1507F2E0;
    // 0x1507F2BC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
L_1507F2C0:
    // 0x1507F2C0: addiu       $v1, $v1, 0x18C0
    ctx->r3 = ADD32(ctx->r3, 0X18C0);
    // 0x1507F2C4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x1507F2C8: beq         $v0, $zero, L_1507F2E0
    if (ctx->r2 == 0) {
        // 0x1507F2CC: andi        $t5, $v0, 0x1
        ctx->r13 = ctx->r2 & 0X1;
            goto L_1507F2E0;
    }
    // 0x1507F2CC: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x1507F2D0: beql        $t5, $zero, L_1507F2E0
    if (ctx->r13 == 0) {
        // 0x1507F2D4: sb          $zero, 0x0($v1)
        MEM_B(0X0, ctx->r3) = 0;
            goto L_1507F2E0;
    }
    goto skip_7;
    // 0x1507F2D4: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    skip_7:
    // 0x1507F2D8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x1507F2DC: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_1507F2E0:
    // 0x1507F2E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1507F2E4: beq         $a3, $at, L_1507F308
    if (ctx->r7 == ctx->r1) {
        // 0x1507F2E8: lw          $t6, 0x94($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X94);
            goto L_1507F308;
    }
    // 0x1507F2E8: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x1507F2EC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x1507F2F0: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1507F2F4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x1507F2F8: jal         0x1507EBB8
    // 0x1507F2FC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_1507EBB8(rdram, ctx);
        goto after_10;
    // 0x1507F2FC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_10:
    // 0x1507F300: b           L_1507F394
    // 0x1507F304: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
        goto L_1507F394;
    // 0x1507F304: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
L_1507F308:
    // 0x1507F308: lbu         $t7, 0xC($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XC);
    // 0x1507F30C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1507F310: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1507F314: bne         $t7, $at, L_1507F334
    if (ctx->r15 != ctx->r1) {
        // 0x1507F318: addiu       $a1, $sp, 0x40
        ctx->r5 = ADD32(ctx->r29, 0X40);
            goto L_1507F334;
    }
    // 0x1507F318: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x1507F31C: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1507F320: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x1507F324: jal         0x1507EBB8
    // 0x1507F328: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1507EBB8(rdram, ctx);
        goto after_11;
    // 0x1507F328: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x1507F32C: b           L_1507F394
    // 0x1507F330: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
        goto L_1507F394;
    // 0x1507F330: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
L_1507F334:
    // 0x1507F334: jal         0x1507EBB8
    // 0x1507F338: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1507EBB8(rdram, ctx);
        goto after_12;
    // 0x1507F338: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x1507F33C: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x1507F340: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1507F344: lbu         $t9, 0xC($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XC);
    // 0x1507F348: bnel        $t9, $at, L_1507F394
    if (ctx->r25 != ctx->r1) {
        // 0x1507F34C: lw          $v0, 0x94($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X94);
            goto L_1507F394;
    }
    goto skip_8;
    // 0x1507F34C: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    skip_8:
    // 0x1507F350: lbu         $t1, 0xD($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0XD);
    // 0x1507F354: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507F358: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x1507F35C: bnel        $at, $zero, L_1507F394
    if (ctx->r1 != 0) {
        // 0x1507F360: lw          $v0, 0x94($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X94);
            goto L_1507F394;
    }
    goto skip_9;
    // 0x1507F360: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    skip_9:
    // 0x1507F364: jal         0x1507FFD8
    // 0x1507F368: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_1507FFD8(rdram, ctx);
        goto after_13;
    // 0x1507F368: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_13:
    // 0x1507F36C: beq         $v0, $zero, L_1507F390
    if (ctx->r2 == 0) {
        // 0x1507F370: addiu       $a0, $sp, 0x6C
        ctx->r4 = ADD32(ctx->r29, 0X6C);
            goto L_1507F390;
    }
    // 0x1507F370: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1507F374: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x1507F378: jal         0x1507EBB8
    // 0x1507F37C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_1507EBB8(rdram, ctx);
        goto after_14;
    // 0x1507F37C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_14:
    // 0x1507F380: b           L_1507F394
    // 0x1507F384: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
        goto L_1507F394;
    // 0x1507F384: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
L_1507F388:
    // 0x1507F388: jal         0x1507EB80
    // 0x1507F38C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1507EB80(rdram, ctx);
        goto after_15;
    // 0x1507F38C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
L_1507F390:
    // 0x1507F390: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
L_1507F394:
    // 0x1507F394: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1507F398: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x1507F39C: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x1507F3A0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x1507F3A4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x1507F3A8: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x1507F3AC: jal         0x1507EC38
    // 0x1507F3B0: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    func_1507EC38(rdram, ctx);
        goto after_16;
    // 0x1507F3B0: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_16:
    // 0x1507F3B4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x1507F3B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1507F3BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1507F3C0: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x1507F3C4: bne         $at, $zero, L_1507F3F8
    if (ctx->r1 != 0) {
        // 0x1507F3C8: nop
    
            goto L_1507F3F8;
    }
    // 0x1507F3C8: nop

    // 0x1507F3CC: jal         0x150ADA20
    // 0x1507F3D0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x1507F3D0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_17:
    // 0x1507F3D4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x1507F3D8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x1507F3DC: divu        $zero, $v0, $t3
    lo = S32(U32(ctx->r2) / U32(ctx->r11)); hi = S32(U32(ctx->r2) % U32(ctx->r11));
    // 0x1507F3E0: mfhi        $v1
    ctx->r3 = hi;
    // 0x1507F3E4: bne         $t3, $zero, L_1507F3F0
    if (ctx->r11 != 0) {
        // 0x1507F3E8: nop
    
            goto L_1507F3F0;
    }
    // 0x1507F3E8: nop

    // 0x1507F3EC: break       7
    do_break(352842732);
L_1507F3F0:
    // 0x1507F3F0: b           L_1507F3FC
    // 0x1507F3F4: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
        goto L_1507F3FC;
    // 0x1507F3F4: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
L_1507F3F8:
    // 0x1507F3F8: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
L_1507F3FC:
    // 0x1507F3FC: addu        $t4, $sp, $v1
    ctx->r12 = ADD32(ctx->r29, ctx->r3);
    // 0x1507F400: lbu         $t4, 0x44($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X44);
    // 0x1507F404: lbu         $t5, 0xD($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XD);
    // 0x1507F408: lbu         $t7, 0xC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XC);
    // 0x1507F40C: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x1507F410: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x1507F414: sb          $t6, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r14;
    // 0x1507F418: beq         $t7, $zero, L_1507F424
    if (ctx->r15 == 0) {
        // 0x1507F41C: sb          $t4, 0x4($v0)
        MEM_B(0X4, ctx->r2) = ctx->r12;
            goto L_1507F424;
    }
    // 0x1507F41C: sb          $t4, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r12;
    // 0x1507F420: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
L_1507F424:
    // 0x1507F424: beq         $a0, $zero, L_1507F438
    if (ctx->r4 == 0) {
        // 0x1507F428: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_1507F438;
    }
    // 0x1507F428: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x1507F42C: jal         0x1507EFA0
    // 0x1507F430: lbu         $a0, 0x4($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X4);
    func_1507EFA0(rdram, ctx);
        goto after_18;
    // 0x1507F430: lbu         $a0, 0x4($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X4);
    after_18:
    // 0x1507F434: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
L_1507F438:
    // 0x1507F438: lbu         $a0, 0x4($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X4);
    // 0x1507F43C: jal         0x1507EE58
    // 0x1507F440: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_1507EE58(rdram, ctx);
        goto after_19;
    // 0x1507F440: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_19:
    // 0x1507F444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1507F448: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x1507F44C: jr          $ra
    // 0x1507F450: nop

    return;
    return;
    // 0x1507F450: nop

;}
RECOMP_FUNC void func_10008F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10008F90: addiu       $sp, $sp, -0x270
    ctx->r29 = ADD32(ctx->r29, -0X270);
    // 0x10008F94: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x10008F98: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x10008F9C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x10008FA0: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x10008FA4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x10008FA8: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x10008FAC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x10008FB0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x10008FB4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x10008FB8: sw          $a1, 0x274($sp)
    MEM_W(0X274, ctx->r29) = ctx->r5;
    // 0x10008FBC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10008FC0: jal         0x10012588
    // 0x10008FC4: addiu       $a0, $a0, -0x1C90
    ctx->r4 = ADD32(ctx->r4, -0X1C90);
    func_10012588(rdram, ctx);
        goto after_0;
    // 0x10008FC4: addiu       $a0, $a0, -0x1C90
    ctx->r4 = ADD32(ctx->r4, -0X1C90);
    after_0:
    // 0x10008FC8: lui         $t6, 0x1001
    ctx->r14 = S32(0X1001 << 16);
    // 0x10008FCC: addiu       $t6, $t6, -0x6680
    ctx->r14 = ADD32(ctx->r14, -0X6680);
    // 0x10008FD0: sw          $t6, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r14;
    // 0x10008FD4: jal         0x100263D0
    // 0x10008FD8: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    osAiSetFrequency_recomp(rdram, ctx);
        goto after_1;
    // 0x10008FD8: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    after_1:
    // 0x10008FDC: lui         $t7, 0x1001
    ctx->r15 = S32(0X1001 << 16);
    // 0x10008FE0: lui         $t8, 0x1001
    ctx->r24 = S32(0X1001 << 16);
    // 0x10008FE4: lui         $t9, 0x1001
    ctx->r25 = S32(0X1001 << 16);
    // 0x10008FE8: lui         $t0, 0x1001
    ctx->r8 = S32(0X1001 << 16);
    // 0x10008FEC: addiu       $t7, $t7, -0x6004
    ctx->r15 = ADD32(ctx->r15, -0X6004);
    // 0x10008FF0: addiu       $t8, $t8, -0x64D4
    ctx->r24 = ADD32(ctx->r24, -0X64D4);
    // 0x10008FF4: addiu       $t9, $t9, -0x6470
    ctx->r25 = ADD32(ctx->r25, -0X6470);
    // 0x10008FF8: addiu       $t0, $t0, -0x64B4
    ctx->r8 = ADD32(ctx->r8, -0X64B4);
    // 0x10008FFC: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x10009000: sw          $t7, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r15;
    // 0x10009004: sw          $t8, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r24;
    // 0x10009008: sw          $t9, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r25;
    // 0x1000900C: sw          $t0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r8;
    // 0x10009010: lw          $t1, 0x4($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X4);
    // 0x10009014: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x10009018: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x1000901C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x10009020: addiu       $a2, $a2, 0xF8C
    ctx->r6 = ADD32(ctx->r6, 0XF8C);
    // 0x10009024: bgez        $t1, L_1000903C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x10009028: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1000903C;
    }
    // 0x10009028: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1000902C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x10009030: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x10009034: nop

    // 0x10009038: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1000903C:
    // 0x1000903C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x10009040: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x10009044: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x10009048: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x1000904C: addiu       $v0, $zero, 0xB8
    ctx->r2 = ADD32(0, 0XB8);
    // 0x10009050: addiu       $t0, $t0, -0x51AC
    ctx->r8 = ADD32(ctx->r8, -0X51AC);
    // 0x10009054: mul.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x10009058: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x1000905C: div.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x10009060: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x10009064: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x10009068: nop

    // 0x1000906C: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x10009070: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x10009074: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x10009078: bgez        $t3, L_10009090
    if (SIGNED(ctx->r11) >= 0) {
        // 0x1000907C: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_10009090;
    }
    // 0x1000907C: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x10009080: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x10009084: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x10009088: nop

    // 0x1000908C: add.s       $f6, $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f16.fl;
L_10009090:
    // 0x10009090: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x10009094: addiu       $t3, $t0, 0x210
    ctx->r11 = ADD32(ctx->r8, 0X210);
    // 0x10009098: bc1f        L_100090AC
    if (!c1cs) {
        // 0x1000909C: nop
    
            goto L_100090AC;
    }
    // 0x1000909C: nop

    // 0x100090A0: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x100090A4: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x100090A8: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_100090AC:
    // 0x100090AC: divu        $zero, $v1, $v0
    lo = S32(U32(ctx->r3) / U32(ctx->r2)); hi = S32(U32(ctx->r3) % U32(ctx->r2));
    // 0x100090B0: mflo        $t5
    ctx->r13 = lo;
    // 0x100090B4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x100090B8: lui         $s5, 0x8004
    ctx->r21 = S32(0X8004 << 16);
    // 0x100090BC: multu       $t5, $v0
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x100090C0: addiu       $s5, $s5, 0xF90
    ctx->r21 = ADD32(ctx->r21, 0XF90);
    // 0x100090C4: lui         $s3, 0x8004
    ctx->r19 = S32(0X8004 << 16);
    // 0x100090C8: addiu       $s3, $s3, -0x19C0
    ctx->r19 = ADD32(ctx->r19, -0X19C0);
    // 0x100090CC: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x100090D0: bne         $v0, $zero, L_100090DC
    if (ctx->r2 != 0) {
        // 0x100090D4: nop
    
            goto L_100090DC;
    }
    // 0x100090D4: nop

    // 0x100090D8: break       7
    do_break(268472536);
L_100090DC:
    // 0x100090DC: mflo        $t6
    ctx->r14 = lo;
    // 0x100090E0: addiu       $t7, $t6, 0xB8
    ctx->r15 = ADD32(ctx->r14, 0XB8);
    // 0x100090E4: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x100090E8: addiu       $t8, $t7, -0xB8
    ctx->r24 = ADD32(ctx->r15, -0XB8);
    // 0x100090EC: sw          $t8, 0xF88($at)
    MEM_W(0XF88, ctx->r1) = ctx->r24;
    // 0x100090F0: addiu       $t9, $t7, 0x54
    ctx->r25 = ADD32(ctx->r15, 0X54);
    // 0x100090F4: sw          $t9, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r25;
    // 0x100090F8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x100090FC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x10009100: sb          $zero, 0xF84($at)
    MEM_B(0XF84, ctx->r1) = 0;
    // 0x10009104: or          $t4, $a3, $zero
    ctx->r12 = ctx->r7 | 0;
L_10009108:
    // 0x10009108: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x1000910C: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x10009110: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x10009114: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x10009118: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x1000911C: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x10009120: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x10009124: bne         $t0, $t3, L_10009108
    if (ctx->r8 != ctx->r11) {
        // 0x10009128: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_10009108;
    }
    // 0x10009128: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x1000912C: addiu       $t5, $sp, 0x160
    ctx->r13 = ADD32(ctx->r29, 0X160);
    // 0x10009130: sw          $a3, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->r7;
    // 0x10009134: sw          $t5, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r13;
    // 0x10009138: jal         0x10018DA0
    // 0x1000913C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    n_alInit(rdram, ctx);
        goto after_2;
    // 0x1000913C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x10009140: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x10009144: addiu       $v0, $v0, 0x6B8
    ctx->r2 = ADD32(ctx->r2, 0X6B8);
    // 0x10009148: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000914C: sw          $s3, -0x1C80($at)
    MEM_W(-0X1C80, ctx->r1) = ctx->r19;
    // 0x10009150: lui         $s3, 0x8004
    ctx->r19 = S32(0X8004 << 16);
    // 0x10009154: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x10009158: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x1000915C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x10009160: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x10009164: addiu       $s1, $s1, 0x6CC
    ctx->r17 = ADD32(ctx->r17, 0X6CC);
    // 0x10009168: addiu       $s0, $s0, 0x6B8
    ctx->r16 = ADD32(ctx->r16, 0X6B8);
    // 0x1000916C: addiu       $s3, $s3, 0xAC8
    ctx->r19 = ADD32(ctx->r19, 0XAC8);
L_10009170:
    // 0x10009170: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x10009174: sw          $s0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r16;
    // 0x10009178: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1000917C: beq         $v0, $zero, L_10009188
    if (ctx->r2 == 0) {
        // 0x10009180: sw          $v0, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r2;
            goto L_10009188;
    }
    // 0x10009180: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x10009184: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
L_10009188:
    // 0x10009188: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x1000918C: lw          $a2, 0x28($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X28);
    // 0x10009190: addiu       $t6, $zero, 0x800
    ctx->r14 = ADD32(0, 0X800);
    // 0x10009194: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x10009198: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000919C: jal         0x10012844
    // 0x100091A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x100091A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x100091A4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x100091A8: sltu        $at, $s1, $s3
    ctx->r1 = ctx->r17 < ctx->r19 ? 1 : 0;
    // 0x100091AC: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x100091B0: bne         $at, $zero, L_10009170
    if (ctx->r1 != 0) {
        // 0x100091B4: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_10009170;
    }
    // 0x100091B4: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x100091B8: lw          $a2, 0x28($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X28);
    // 0x100091BC: addiu       $t7, $zero, 0x800
    ctx->r15 = ADD32(0, 0X800);
    // 0x100091C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x100091C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x100091C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x100091CC: jal         0x10012844
    // 0x100091D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x100091D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x100091D4: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x100091D8: addiu       $s1, $s1, 0xAC8
    ctx->r17 = ADD32(ctx->r17, 0XAC8);
    // 0x100091DC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x100091E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x100091E4: jal         0x100226F0
    // 0x100091E8: addiu       $a1, $zero, 0x4B0
    ctx->r5 = ADD32(0, 0X4B0);
    bzero_recomp(rdram, ctx);
        goto after_5;
    // 0x100091E8: addiu       $a1, $zero, 0x4B0
    ctx->r5 = ADD32(0, 0X4B0);
    after_5:
    // 0x100091EC: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x100091F0: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x100091F4: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x100091F8: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x100091FC: addiu       $v1, $v1, 0xAE0
    ctx->r3 = ADD32(ctx->r3, 0XAE0);
    // 0x10009200: addiu       $v0, $v0, 0xAC8
    ctx->r2 = ADD32(ctx->r2, 0XAC8);
    // 0x10009204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_10009208:
    // 0x10009208: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x1000920C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x10009210: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x10009214: sw          $v0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r2;
    // 0x10009218: beq         $a0, $zero, L_10009224
    if (ctx->r4 == 0) {
        // 0x1000921C: sw          $a0, 0x18($v0)
        MEM_W(0X18, ctx->r2) = ctx->r4;
            goto L_10009224;
    }
    // 0x1000921C: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x10009220: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_10009224:
    // 0x10009224: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x10009228: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1000922C: sltiu       $at, $a1, 0x31
    ctx->r1 = ctx->r5 < 0X31 ? 1 : 0;
    // 0x10009230: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x10009234: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x10009238: bne         $at, $zero, L_10009208
    if (ctx->r1 != 0) {
        // 0x1000923C: sw          $zero, -0x8($v0)
        MEM_W(-0X8, ctx->r2) = 0;
            goto L_10009208;
    }
    // 0x1000923C: sw          $zero, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = 0;
    // 0x10009240: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x10009244: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x10009248: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x1000924C: addiu       $s1, $s1, -0x1C70
    ctx->r17 = ADD32(ctx->r17, -0X1C70);
    // 0x10009250: addiu       $s0, $s0, -0x1C78
    ctx->r16 = ADD32(ctx->r16, -0X1C78);
L_10009254:
    // 0x10009254: lw          $t8, 0x8($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X8);
    // 0x10009258: lw          $a2, 0x28($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X28);
    // 0x1000925C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10009260: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x10009264: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x10009268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000926C: jal         0x10012844
    // 0x10009270: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x10009270: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x10009274: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x10009278: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x1000927C: bne         $at, $zero, L_10009254
    if (ctx->r1 != 0) {
        // 0x10009280: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_10009254;
    }
    // 0x10009280: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x10009284: lw          $t2, 0x8($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X8);
    // 0x10009288: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000928C: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x10009290: lui         $s3, 0x8004
    ctx->r19 = S32(0X8004 << 16);
    // 0x10009294: addiu       $s3, $s3, -0x1C6C
    ctx->r19 = ADD32(ctx->r19, -0X1C6C);
    // 0x10009298: addiu       $s0, $s0, -0x1C78
    ctx->r16 = ADD32(ctx->r16, -0X1C78);
    // 0x1000929C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x100092A0: sw          $t2, 0xF94($at)
    MEM_W(0XF94, ctx->r1) = ctx->r10;
L_100092A4:
    // 0x100092A4: lw          $a2, 0x28($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X28);
    // 0x100092A8: addiu       $t1, $zero, 0x90
    ctx->r9 = ADD32(0, 0X90);
    // 0x100092AC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x100092B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x100092B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x100092B8: jal         0x10012844
    // 0x100092BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_7;
    // 0x100092BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x100092C0: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x100092C4: sh          $s1, 0x70($v0)
    MEM_H(0X70, ctx->r2) = ctx->r17;
    // 0x100092C8: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x100092CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x100092D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x100092D4: sw          $v1, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->r3;
    // 0x100092D8: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x100092DC: lw          $a2, 0x28($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X28);
    // 0x100092E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x100092E4: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x100092E8: jal         0x10012844
    // 0x100092EC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    alHeapDBAlloc(rdram, ctx);
        goto after_8;
    // 0x100092EC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_8:
    // 0x100092F0: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x100092F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x100092F8: bne         $s0, $s3, L_100092A4
    if (ctx->r16 != ctx->r19) {
        // 0x100092FC: sw          $v0, 0x0($t4)
        MEM_W(0X0, ctx->r12) = ctx->r2;
            goto L_100092A4;
    }
    // 0x100092FC: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
    // 0x10009300: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10009304: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x10009308: addiu       $a1, $a1, -0x19E0
    ctx->r5 = ADD32(ctx->r5, -0X19E0);
    // 0x1000930C: addiu       $a0, $a0, -0x19F8
    ctx->r4 = ADD32(ctx->r4, -0X19F8);
    // 0x10009310: jal         0x10023790
    // 0x10009314: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_9;
    // 0x10009314: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x10009318: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x1000931C: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x10009320: addiu       $a1, $a1, -0x1A18
    ctx->r5 = ADD32(ctx->r5, -0X1A18);
    // 0x10009324: addiu       $a0, $a0, -0x1A30
    ctx->r4 = ADD32(ctx->r4, -0X1A30);
    // 0x10009328: jal         0x10023790
    // 0x1000932C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_10;
    // 0x1000932C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x10009330: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10009334: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x10009338: addiu       $a1, $a1, 0x12B0
    ctx->r5 = ADD32(ctx->r5, 0X12B0);
    // 0x1000933C: addiu       $a0, $a0, 0x1298
    ctx->r4 = ADD32(ctx->r4, 0X1298);
    // 0x10009340: jal         0x10023790
    // 0x10009344: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_11;
    // 0x10009344: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_11:
    // 0x10009348: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x1000934C: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x10009350: addiu       $a1, $a1, 0x1708
    ctx->r5 = ADD32(ctx->r5, 0X1708);
    // 0x10009354: addiu       $a0, $a0, 0x16F0
    ctx->r4 = ADD32(ctx->r4, 0X16F0);
    // 0x10009358: jal         0x10023790
    // 0x1000935C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_12;
    // 0x1000935C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_12:
    // 0x10009360: lw          $t6, 0x274($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X274);
    // 0x10009364: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x10009368: lui         $t5, 0x8004
    ctx->r13 = S32(0X8004 << 16);
    // 0x1000936C: addiu       $s0, $s0, -0x1C60
    ctx->r16 = ADD32(ctx->r16, -0X1C60);
    // 0x10009370: addiu       $t5, $t5, 0x6A0
    ctx->r13 = ADD32(ctx->r13, 0X6A0);
    // 0x10009374: lui         $a2, 0x1001
    ctx->r6 = S32(0X1001 << 16);
    // 0x10009378: addiu       $a2, $a2, -0x6C00
    ctx->r6 = ADD32(ctx->r6, -0X6C00);
    // 0x1000937C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x10009380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x10009384: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x10009388: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1000938C: jal         0x100037F0
    // 0x10009390: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    osCreateThread_recomp(rdram, ctx);
        goto after_13;
    // 0x10009390: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_13:
    // 0x10009394: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x10009398: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1000939C: sb          $t7, -0x51C0($at)
    MEM_B(-0X51C0, ctx->r1) = ctx->r15;
    // 0x100093A0: jal         0x10022A60
    // 0x100093A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osStartThread_recomp(rdram, ctx);
        goto after_14;
    // 0x100093A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x100093A8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x100093AC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x100093B0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x100093B4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x100093B8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x100093BC: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x100093C0: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x100093C4: jr          $ra
    // 0x100093C8: addiu       $sp, $sp, 0x270
    ctx->r29 = ADD32(ctx->r29, 0X270);
    return;
    return;
    // 0x100093C8: addiu       $sp, $sp, 0x270
    ctx->r29 = ADD32(ctx->r29, 0X270);
;}
RECOMP_FUNC void func_10008B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10008B60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x10008B64: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x10008B68: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x10008B6C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x10008B70: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x10008B74: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x10008B78: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x10008B7C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x10008B80: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x10008B84: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x10008B88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10008B8C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x10008B90: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
    // 0x10008B94: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x10008B98: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10008B9C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x10008BA0: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x10008BA4: lw          $a0, -0x3700($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3700);
    // 0x10008BA8: jal         0x10017F10
    // 0x10008BAC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_10017F10(rdram, ctx);
        goto after_0;
    // 0x10008BAC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_0:
    // 0x10008BB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x10008BB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x10008BB8: jr          $ra
    // 0x10008BBC: nop

    return;
    return;
    // 0x10008BBC: nop

;}
RECOMP_FUNC void func_150D85AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D85AC: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x150D85B0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150D85B4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150D85B8: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x150D85BC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150D85C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D85C4: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x150D85C8: lwc1        $f6, 0x180($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X180);
    // 0x150D85CC: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x150D85D0: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
    // 0x150D85D4: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x150D85D8: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x150D85DC: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x150D85E0: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x150D85E4: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x150D85E8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150D85EC: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x150D85F0: swc1        $f6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f6.u32l;
    // 0x150D85F4: jal         0x1504715C
    // 0x150D85F8: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    func_1504715C(rdram, ctx);
        goto after_0;
    // 0x150D85F8: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x150D85FC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150D8600: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D8604: lwc1        $f8, 0xE8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x150D8608: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x150D860C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150D8610: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150D8614: addiu       $a3, $sp, 0xB4
    ctx->r7 = ADD32(ctx->r29, 0XB4);
    // 0x150D8618: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x150D861C: jal         0x15046C80
    // 0x150D8620: nop

    func_15046C80(rdram, ctx);
        goto after_1;
    // 0x150D8620: nop

    after_1:
    // 0x150D8624: beq         $v0, $zero, L_150D86DC
    if (ctx->r2 == 0) {
        // 0x150D8628: lbu         $t6, 0xD0($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0XD0);
            goto L_150D86DC;
    }
    // 0x150D8628: lbu         $t6, 0xD0($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XD0);
    // 0x150D862C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x150D8630: beq         $t7, $zero, L_150D86DC
    if (ctx->r15 == 0) {
        // 0x150D8634: lwc1        $f18, 0xD8($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0XD8);
            goto L_150D86DC;
    }
    // 0x150D8634: lwc1        $f18, 0xD8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x150D8638: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150D863C: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x150D8640: swc1        $f18, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f18.u32l;
    // 0x150D8644: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    // 0x150D8648: jal         0x150ADA68
    // 0x150D864C: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150D864C: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x150D8650: jal         0x150ADA20
    // 0x150D8654: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150D8654: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x150D8658: jal         0x150ADA20
    // 0x150D865C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150D865C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_4:
    // 0x150D8660: lui         $at, 0x42DA
    ctx->r1 = S32(0X42DA << 16);
    // 0x150D8664: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D8668: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x150D866C: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x150D8670: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D8674: addiu       $at, $zero, 0x56
    ctx->r1 = ADD32(0, 0X56);
    // 0x150D8678: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x150D867C: mfhi        $t8
    ctx->r24 = hi;
    // 0x150D8680: addiu       $at, $zero, 0xFB
    ctx->r1 = ADD32(0, 0XFB);
    // 0x150D8684: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150D8688: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150D868C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150D8690: mfhi        $t0
    ctx->r8 = hi;
    // 0x150D8694: addiu       $a1, $t8, 0xAA
    ctx->r5 = ADD32(ctx->r24, 0XAA);
    // 0x150D8698: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x150D869C: addiu       $t1, $t0, 0x1F4
    ctx->r9 = ADD32(ctx->r8, 0X1F4);
    // 0x150D86A0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150D86A4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150D86A8: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x150D86AC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150D86B0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150D86B4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x150D86B8: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    // 0x150D86BC: addiu       $a3, $sp, 0xE4
    ctx->r7 = ADD32(ctx->r29, 0XE4);
    // 0x150D86C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150D86C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150D86C8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150D86CC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150D86D0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150D86D4: jal         0x150E7FEC
    // 0x150D86D8: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_150E7FEC(rdram, ctx);
        goto after_5;
    // 0x150D86D8: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_5:
L_150D86DC:
    // 0x150D86DC: jal         0x150ADA20
    // 0x150D86E0: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150D86E0: nop

    after_6:
    // 0x150D86E4: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x150D86E8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150D86EC: mfhi        $a1
    ctx->r5 = hi;
    // 0x150D86F0: addiu       $a1, $a1, 0x78
    ctx->r5 = ADD32(ctx->r5, 0X78);
    // 0x150D86F4: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x150D86F8: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x150D86FC: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    // 0x150D8700: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150D8704: jal         0x150E83AC
    // 0x150D8708: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_150E83AC(rdram, ctx);
        goto after_7;
    // 0x150D8708: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x150D870C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x150D8710: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150D8714: addiu       $t6, $zero, 0x1A
    ctx->r14 = ADD32(0, 0X1A);
    // 0x150D8718: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D871C: lwc1        $f4, 0xB18($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XB18);
    // 0x150D8720: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150D8724: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D8728: lui         $at, 0x4395
    ctx->r1 = S32(0X4395 << 16);
    // 0x150D872C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150D8730: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x150D8734: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x150D8738: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D873C: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x150D8740: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D8744: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x150D8748: lwc1        $f8, 0xB1C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XB1C);
    // 0x150D874C: addiu       $t9, $zero, 0x5103
    ctx->r25 = ADD32(0, 0X5103);
    // 0x150D8750: lui         $t0, 0x20
    ctx->r8 = S32(0X20 << 16);
    // 0x150D8754: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x150D8758: addiu       $t8, $zero, 0x6C
    ctx->r24 = ADD32(0, 0X6C);
    // 0x150D875C: sh          $t9, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r25;
    // 0x150D8760: ori         $t0, $t0, 0x5
    ctx->r8 = ctx->r8 | 0X5;
    // 0x150D8764: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x150D8768: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x150D876C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150D8770: addiu       $t4, $zero, 0xB9
    ctx->r12 = ADD32(0, 0XB9);
    // 0x150D8774: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D8778: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x150D877C: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x150D8780: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150D8784: lwc1        $f10, 0xB20($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XB20);
    // 0x150D8788: sh          $t6, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r14;
    // 0x150D878C: sh          $t7, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r15;
    // 0x150D8790: sb          $t8, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r24;
    // 0x150D8794: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x150D8798: sh          $t1, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r9;
    // 0x150D879C: sh          $t2, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r10;
    // 0x150D87A0: sb          $t3, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r11;
    // 0x150D87A4: sb          $t4, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r12;
    // 0x150D87A8: addiu       $t9, $zero, 0x7E
    ctx->r25 = ADD32(0, 0X7E);
    // 0x150D87AC: addiu       $t5, $zero, 0xC7
    ctx->r13 = ADD32(0, 0XC7);
    // 0x150D87B0: addiu       $t6, $zero, 0xC4
    ctx->r14 = ADD32(0, 0XC4);
    // 0x150D87B4: addiu       $t7, $zero, 0x95
    ctx->r15 = ADD32(0, 0X95);
    // 0x150D87B8: addiu       $t8, $zero, 0x91
    ctx->r24 = ADD32(0, 0X91);
    // 0x150D87BC: sb          $t9, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r25;
    // 0x150D87C0: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x150D87C4: addiu       $t1, $zero, 0x9B
    ctx->r9 = ADD32(0, 0X9B);
    // 0x150D87C8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150D87CC: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x150D87D0: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x150D87D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D87D8: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x150D87DC: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x150D87E0: lwc1        $f16, 0xB24($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XB24);
    // 0x150D87E4: sb          $t5, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r13;
    // 0x150D87E8: sb          $t6, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r14;
    // 0x150D87EC: sb          $t7, 0x68($sp)
    MEM_B(0X68, ctx->r29) = ctx->r15;
    // 0x150D87F0: sb          $t8, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r24;
    // 0x150D87F4: sb          $t0, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r8;
    // 0x150D87F8: sb          $t1, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r9;
    // 0x150D87FC: sb          $t2, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r10;
    // 0x150D8800: sh          $t3, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r11;
    // 0x150D8804: sh          $t4, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r12;
    // 0x150D8808: lui         $t9, 0x84
    ctx->r25 = S32(0X84 << 16);
    // 0x150D880C: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x150D8810: addiu       $t6, $zero, -0x10
    ctx->r14 = ADD32(0, -0X10);
    // 0x150D8814: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150D8818: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x150D881C: ori         $t9, $t9, 0xE07
    ctx->r25 = ctx->r25 | 0XE07;
    // 0x150D8820: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x150D8824: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x150D8828: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x150D882C: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x150D8830: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150D8834: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x150D8838: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x150D883C: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x150D8840: sh          $t5, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r13;
    // 0x150D8844: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x150D8848: sh          $zero, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = 0;
    // 0x150D884C: sh          $t6, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r14;
    // 0x150D8850: sh          $t7, 0x90($sp)
    MEM_H(0X90, ctx->r29) = ctx->r15;
    // 0x150D8854: sh          $t8, 0x92($sp)
    MEM_H(0X92, ctx->r29) = ctx->r24;
    // 0x150D8858: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x150D885C: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x150D8860: sw          $t9, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r25;
    // 0x150D8864: sb          $t0, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r8;
    // 0x150D8868: sb          $t1, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r9;
    // 0x150D886C: sb          $t2, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r10;
    // 0x150D8870: sb          $t3, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r11;
    // 0x150D8874: sb          $t4, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r12;
    // 0x150D8878: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x150D887C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150D8880: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150D8884: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150D8888: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x150D888C: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x150D8890: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x150D8894: jal         0x15153634
    // 0x150D8898: swc1        $f16, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f16.u32l;
    func_15153634(rdram, ctx);
        goto after_8;
    // 0x150D8898: swc1        $f16, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x150D889C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150D88A0: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    // 0x150D88A4: jr          $ra
    // 0x150D88A8: nop

    return;
    return;
    // 0x150D88A8: nop

;}
RECOMP_FUNC void func_1000DEC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000DEC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1000DEC8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1000DECC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1000DED0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1000DED4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1000DED8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1000DEDC: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x1000DEE0: lui         $s3, 0x8004
    ctx->r19 = S32(0X8004 << 16);
    // 0x1000DEE4: lui         $s2, 0x8004
    ctx->r18 = S32(0X8004 << 16);
    // 0x1000DEE8: addiu       $s2, $s2, 0x1E58
    ctx->r18 = ADD32(ctx->r18, 0X1E58);
    // 0x1000DEEC: addiu       $s3, $s3, 0x17B0
    ctx->r19 = ADD32(ctx->r19, 0X17B0);
    // 0x1000DEF0: addiu       $s0, $s0, 0x19A8
    ctx->r16 = ADD32(ctx->r16, 0X19A8);
    // 0x1000DEF4: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_1000DEF8:
    // 0x1000DEF8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1000DEFC: bne         $s1, $v0, L_1000DF18
    if (ctx->r17 != ctx->r2) {
        // 0x1000DF00: nop
    
            goto L_1000DF18;
    }
    // 0x1000DF00: nop

    // 0x1000DF04: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x1000DF08: beql        $s1, $t6, L_1000DF44
    if (ctx->r17 == ctx->r14) {
        // 0x1000DF0C: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_1000DF44;
    }
    goto skip_0;
    // 0x1000DF0C: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_0:
    // 0x1000DF10: b           L_1000DF40
    // 0x1000DF14: sw          $s1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r17;
        goto L_1000DF40;
    // 0x1000DF14: sw          $s1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r17;
L_1000DF18:
    // 0x1000DF18: jal         0x1000853C
    // 0x1000DF1C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_1000853C(rdram, ctx);
        goto after_0;
    // 0x1000DF1C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_0:
    // 0x1000DF20: bnel        $v0, $zero, L_1000DF44
    if (ctx->r2 != 0) {
        // 0x1000DF24: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_1000DF44;
    }
    goto skip_1;
    // 0x1000DF24: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_1:
    // 0x1000DF28: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x1000DF2C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1000DF30: addu        $t9, $s3, $t8
    ctx->r25 = ADD32(ctx->r19, ctx->r24);
    // 0x1000DF34: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x1000DF38: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x1000DF3C: sw          $s1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r17;
L_1000DF40:
    // 0x1000DF40: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
L_1000DF44:
    // 0x1000DF44: bne         $s0, $s2, L_1000DEF8
    if (ctx->r16 != ctx->r18) {
        // 0x1000DF48: sw          $zero, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = 0;
            goto L_1000DEF8;
    }
    // 0x1000DF48: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    // 0x1000DF4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1000DF50: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1000DF54: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1000DF58: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1000DF5C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1000DF60: jr          $ra
    // 0x1000DF64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1000DF64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_151A6350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A6350: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151A6354: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151A6358: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151A635C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151A6360: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x151A6364: addiu       $t6, $sp, 0x37
    ctx->r14 = ADD32(ctx->r29, 0X37);
    // 0x151A6368: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151A636C: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x151A6370: lh          $a1, 0x56($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X56);
    // 0x151A6374: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151A6378: jal         0x151D5D60
    // 0x151A637C: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x151A637C: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x151A6380: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x151A6384: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x151A6388: beq         $v0, $zero, L_151A63E8
    if (ctx->r2 == 0) {
        // 0x151A638C: sw          $v0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r2;
            goto L_151A63E8;
    }
    // 0x151A638C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x151A6390: beq         $t7, $zero, L_151A63D0
    if (ctx->r15 == 0) {
        // 0x151A6394: lh          $t8, 0x56($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X56);
            goto L_151A63D0;
    }
    // 0x151A6394: lh          $t8, 0x56($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X56);
    // 0x151A6398: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151A639C: addu        $v0, $s0, $t9
    ctx->r2 = ADD32(ctx->r16, ctx->r25);
    // 0x151A63A0: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x151A63A4: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x151A63A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151A63AC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x151A63B0: jal         0x10022EC0
    // 0x151A63B4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151A63B4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x151A63B8: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x151A63BC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x151A63C0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151A63C4: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x151A63C8: jal         0x10022EC0
    // 0x151A63CC: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151A63CC: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
L_151A63D0:
    // 0x151A63D0: lh          $v0, 0x56($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X56);
    // 0x151A63D4: addiu       $a1, $zero, 0x7C0
    ctx->r5 = ADD32(0, 0X7C0);
    // 0x151A63D8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151A63DC: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x151A63E0: b           L_151A63F0
    // 0x151A63E4: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_151A63F0;
    // 0x151A63E4: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_151A63E8:
    // 0x151A63E8: b           L_151A65EC
    // 0x151A63EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151A65EC;
    // 0x151A63EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151A63F0:
    // 0x151A63F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x151A63F4: lwc1        $f16, -0x2E28($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2E28);
    // 0x151A63F8: lwc1        $f2, 0x2C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151A63FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151A6400: lwc1        $f0, 0x114($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X114);
    // 0x151A6404: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x151A6408: mul.s       $f12, $f16, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x151A640C: lwc1        $f18, -0x2E18($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2E18);
    // 0x151A6410: lwc1        $f6, 0x11C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X11C);
    // 0x151A6414: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x151A6418: mul.s       $f14, $f18, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x151A641C: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x151A6420: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x151A6424: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151A6428: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x151A642C: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151A6430: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x151A6434: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x151A6438: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151A643C: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x151A6440: nop

    // 0x151A6444: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x151A6448: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151A644C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x151A6450: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A6454: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x151A6458: nop

    // 0x151A645C: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
    // 0x151A6460: lwc1        $f18, 0x3C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151A6464: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x151A6468: sub.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x151A646C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151A6470: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x151A6474: nop

    // 0x151A6478: sh          $t4, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r12;
    // 0x151A647C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x151A6480: sh          $t3, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r11;
    // 0x151A6484: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x151A6488: sh          $a1, 0xA($t7)
    MEM_H(0XA, ctx->r15) = ctx->r5;
    // 0x151A648C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x151A6490: lbu         $t8, 0x126($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X126);
    // 0x151A6494: sb          $t8, 0xF($t9)
    MEM_B(0XF, ctx->r25) = ctx->r24;
    // 0x151A6498: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x151A649C: sh          $zero, 0x6($t0)
    MEM_H(0X6, ctx->r8) = 0;
    // 0x151A64A0: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x151A64A4: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x151A64A8: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x151A64AC: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151A64B0: addiu       $t0, $t2, 0x10
    ctx->r8 = ADD32(ctx->r10, 0X10);
    // 0x151A64B4: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x151A64B8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A64BC: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x151A64C0: nop

    // 0x151A64C4: sh          $t4, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r12;
    // 0x151A64C8: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151A64CC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151A64D0: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x151A64D4: nop

    // 0x151A64D8: sh          $t6, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r14;
    // 0x151A64DC: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151A64E0: sh          $zero, 0xA($t2)
    MEM_H(0XA, ctx->r10) = 0;
    // 0x151A64E4: sh          $t3, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r11;
    // 0x151A64E8: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x151A64EC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151A64F0: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x151A64F4: nop

    // 0x151A64F8: sh          $t8, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r24;
    // 0x151A64FC: lbu         $t9, 0x126($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X126);
    // 0x151A6500: sh          $zero, 0x6($t2)
    MEM_H(0X6, ctx->r10) = 0;
    // 0x151A6504: sb          $t9, 0xF($t2)
    MEM_B(0XF, ctx->r10) = ctx->r25;
    // 0x151A6508: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x151A650C: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151A6510: sub.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x151A6514: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151A6518: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x151A651C: nop

    // 0x151A6520: sh          $t3, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r11;
    // 0x151A6524: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151A6528: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151A652C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x151A6530: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151A6534: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A6538: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x151A653C: nop

    // 0x151A6540: sh          $t5, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r13;
    // 0x151A6544: lwc1        $f18, 0x3C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151A6548: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x151A654C: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x151A6550: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151A6554: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x151A6558: nop

    // 0x151A655C: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x151A6560: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x151A6564: sh          $a0, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r4;
    // 0x151A6568: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x151A656C: sh          $zero, 0xA($t1)
    MEM_H(0XA, ctx->r9) = 0;
    // 0x151A6570: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x151A6574: sb          $zero, 0xF($t3)
    MEM_B(0XF, ctx->r11) = 0;
    // 0x151A6578: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x151A657C: sh          $zero, 0x6($t0)
    MEM_H(0X6, ctx->r8) = 0;
    // 0x151A6580: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x151A6584: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x151A6588: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x151A658C: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151A6590: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x151A6594: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A6598: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x151A659C: nop

    // 0x151A65A0: sh          $t7, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r15;
    // 0x151A65A4: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151A65A8: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151A65AC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151A65B0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151A65B4: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x151A65B8: nop

    // 0x151A65BC: sh          $t9, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r25;
    // 0x151A65C0: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151A65C4: sh          $a1, 0xA($t5)
    MEM_H(0XA, ctx->r13) = ctx->r5;
    // 0x151A65C8: sb          $zero, 0xF($t5)
    MEM_B(0XF, ctx->r13) = 0;
    // 0x151A65CC: sub.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x151A65D0: sh          $zero, 0x6($t5)
    MEM_H(0X6, ctx->r13) = 0;
    // 0x151A65D4: sh          $a0, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r4;
    // 0x151A65D8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151A65DC: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x151A65E0: nop

    // 0x151A65E4: sh          $t1, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r9;
    // 0x151A65E8: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
L_151A65EC:
    // 0x151A65EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151A65F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151A65F4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151A65F8: jr          $ra
    // 0x151A65FC: nop

    return;
    return;
    // 0x151A65FC: nop

;}
RECOMP_FUNC void func_150D7630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D7630: bne         $a0, $zero, L_150D7654
    if (ctx->r4 != 0) {
        // 0x150D7634: lui         $v0, 0x800E
        ctx->r2 = S32(0X800E << 16);
            goto L_150D7654;
    }
    // 0x150D7634: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150D7638: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150D763C: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x150D7640: addiu       $v0, $v0, -0x66F0
    ctx->r2 = ADD32(ctx->r2, -0X66F0);
    // 0x150D7644: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x150D7648: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x150D764C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x150D7650: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
L_150D7654:
    // 0x150D7654: jr          $ra
    // 0x150D7658: nop

    return;
    return;
    // 0x150D7658: nop

;}
RECOMP_FUNC void func_15080784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15080784: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15080788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1508078C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15080790: lw          $v1, 0x1998($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1998);
    // 0x15080794: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15080798: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1508079C: beql        $v1, $zero, L_150807E8
    if (ctx->r3 == 0) {
        // 0x150807A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150807E8;
    }
    goto skip_0;
    // 0x150807A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150807A4: lbu         $v0, 0x1994($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1994);
    // 0x150807A8: lbu         $t6, 0x1995($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1995);
    // 0x150807AC: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x150807B0: beq         $t6, $v0, L_150807E4
    if (ctx->r14 == ctx->r2) {
        // 0x150807B4: addu        $t8, $v1, $t7
        ctx->r24 = ADD32(ctx->r3, ctx->r15);
            goto L_150807E4;
    }
    // 0x150807B4: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x150807B8: lhu         $a0, 0x0($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X0);
    // 0x150807BC: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x150807C0: beql        $a0, $zero, L_150807DC
    if (ctx->r4 == 0) {
        // 0x150807C4: addiu       $t9, $v0, 0x1
        ctx->r25 = ADD32(ctx->r2, 0X1);
            goto L_150807DC;
    }
    goto skip_1;
    // 0x150807C4: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    skip_1:
    // 0x150807C8: jal         0x1001263C
    // 0x150807CC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_1001263C(rdram, ctx);
        goto after_0;
    // 0x150807CC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x150807D0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150807D4: lbu         $v0, 0x1994($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1994);
    // 0x150807D8: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
L_150807DC:
    // 0x150807DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150807E0: sb          $t9, 0x1994($at)
    MEM_B(0X1994, ctx->r1) = ctx->r25;
L_150807E4:
    // 0x150807E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150807E8:
    // 0x150807E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150807EC: jr          $ra
    // 0x150807F0: nop

    return;
    return;
    // 0x150807F0: nop

;}
RECOMP_FUNC void func_100052A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100052A0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x100052A4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x100052A8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x100052AC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x100052B0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x100052B4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x100052B8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x100052BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x100052C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x100052C4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x100052C8: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x100052CC: lw          $t6, -0x42E8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42E8);
    // 0x100052D0: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x100052D4: bne         $t6, $zero, L_100052EC
    if (ctx->r14 != 0) {
        // 0x100052D8: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_100052EC;
    }
    // 0x100052D8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x100052DC: addiu       $a0, $a0, -0x4630
    ctx->r4 = ADD32(ctx->r4, -0X4630);
    // 0x100052E0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x100052E4: jal         0x10023440
    // 0x100052E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x100052E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_100052EC:
    // 0x100052EC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x100052F0: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x100052F4: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x100052F8: sb          $s0, -0x53A4($at)
    MEM_B(-0X53A4, ctx->r1) = ctx->r16;
    // 0x100052FC: jal         0x10022E00
    // 0x10005300: addiu       $a0, $a0, 0x5910
    ctx->r4 = ADD32(ctx->r4, 0X5910);
    osStopThread_recomp(rdram, ctx);
        goto after_1;
    // 0x10005300: addiu       $a0, $a0, 0x5910
    ctx->r4 = ADD32(ctx->r4, 0X5910);
    after_1:
    // 0x10005304: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10005308: jal         0x10022E00
    // 0x1000530C: addiu       $a0, $a0, 0x1AE0
    ctx->r4 = ADD32(ctx->r4, 0X1AE0);
    osStopThread_recomp(rdram, ctx);
        goto after_2;
    // 0x1000530C: addiu       $a0, $a0, 0x1AE0
    ctx->r4 = ADD32(ctx->r4, 0X1AE0);
    after_2:
    // 0x10005310: jal         0x100093CC
    // 0x10005314: nop

    func_100093CC(rdram, ctx);
        goto after_3;
    // 0x10005314: nop

    after_3:
    // 0x10005318: jal         0x10024F40
    // 0x1000531C: nop

    osGetTime_recomp(rdram, ctx);
        goto after_4;
    // 0x1000531C: nop

    after_4:
    // 0x10005320: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10005324: sw          $v0, -0x43E0($at)
    MEM_W(-0X43E0, ctx->r1) = ctx->r2;
    // 0x10005328: jal         0x100242B0
    // 0x1000532C: sw          $v1, -0x43DC($at)
    MEM_W(-0X43DC, ctx->r1) = ctx->r3;
    __osViInit_recomp(rdram, ctx);
        goto after_5;
    // 0x1000532C: sw          $v1, -0x43DC($at)
    MEM_W(-0X43DC, ctx->r1) = ctx->r3;
    after_5:
    // 0x10005330: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10005334: sb          $s0, -0x5520($at)
    MEM_B(-0X5520, ctx->r1) = ctx->r16;
    // 0x10005338: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1000533C: jal         0x10022BB0
    // 0x10005340: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    osSetThreadPri_recomp(rdram, ctx);
        goto after_6;
    // 0x10005340: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_6:
    // 0x10005344: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x10005348: lbu         $t7, -0x551C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X551C);
    // 0x1000534C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x10005350: beq         $t7, $zero, L_100053E4
    if (ctx->r15 == 0) {
        // 0x10005354: nop
    
            goto L_100053E4;
    }
    // 0x10005354: nop

    // 0x10005358: lbu         $t8, 0x4064($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X4064);
    // 0x1000535C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x10005360: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    // 0x10005364: bne         $t8, $zero, L_10005378
    if (ctx->r24 != 0) {
        // 0x10005368: lui         $a1, 0x800C
        ctx->r5 = S32(0X800C << 16);
            goto L_10005378;
    }
    // 0x10005368: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1000536C: addiu       $a1, $a1, -0x1670
    ctx->r5 = ADD32(ctx->r5, -0X1670);
    // 0x10005370: jal         0x10023440
    // 0x10005374: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x10005374: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
L_10005378:
    // 0x10005378: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x1000537C: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x10005380: addiu       $s4, $s4, -0x18A0
    ctx->r20 = ADD32(ctx->r20, -0X18A0);
    // 0x10005384: addiu       $s2, $s2, -0x16BC
    ctx->r18 = ADD32(ctx->r18, -0X16BC);
    // 0x10005388: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1000538C: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x10005390: addiu       $s5, $zero, 0x68
    ctx->r21 = ADD32(0, 0X68);
L_10005394:
    // 0x10005394: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x10005398: beql        $t9, $zero, L_100053DC
    if (ctx->r25 == 0) {
        // 0x1000539C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_100053DC;
    }
    goto skip_0;
    // 0x1000539C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x100053A0: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x100053A4: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x100053A8: addiu       $t1, $t1, -0x16B8
    ctx->r9 = ADD32(ctx->r9, -0X16B8);
    // 0x100053AC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x100053B0: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    // 0x100053B4: addu        $s3, $s0, $t1
    ctx->r19 = ADD32(ctx->r16, ctx->r9);
    // 0x100053B8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x100053BC: mflo        $t0
    ctx->r8 = lo;
    // 0x100053C0: addu        $s1, $s4, $t0
    ctx->r17 = ADD32(ctx->r20, ctx->r8);
    // 0x100053C4: jal         0x100057E0
    // 0x100053C8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    _MakeMotorData_recomp(rdram, ctx);
        goto after_8;
    // 0x100053C8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x100053CC: jal         0x10005570
    // 0x100053D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    osMotorStop_recomp(rdram, ctx);
        goto after_9;
    // 0x100053D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x100053D4: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
    // 0x100053D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_100053DC:
    // 0x100053DC: bne         $s0, $s6, L_10005394
    if (ctx->r16 != ctx->r22) {
        // 0x100053E0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_10005394;
    }
    // 0x100053E0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_100053E4:
    // 0x100053E4: jal         0x10024F40
    // 0x100053E8: nop

    osGetTime_recomp(rdram, ctx);
        goto after_10;
    // 0x100053E8: nop

    after_10:
    // 0x100053EC: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x100053F0: lw          $t3, -0x43DC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X43DC);
    // 0x100053F4: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x100053F8: lui         $at, 0x22
    ctx->r1 = S32(0X22 << 16);
    // 0x100053FC: lw          $t2, -0x43E0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X43E0);
    // 0x10005400: ori         $at, $at, 0xADD7
    ctx->r1 = ctx->r1 | 0XADD7;
    // 0x10005404: addu        $t5, $t3, $at
    ctx->r13 = ADD32(ctx->r11, ctx->r1);
    // 0x10005408: sltu        $at, $t5, $at
    ctx->r1 = ctx->r13 < ctx->r1 ? 1 : 0;
    // 0x1000540C: addu        $t4, $t2, $at
    ctx->r12 = ADD32(ctx->r10, ctx->r1);
    // 0x10005410: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x10005414: sltu        $at, $t4, $v0
    ctx->r1 = ctx->r12 < ctx->r2 ? 1 : 0;
    // 0x10005418: bne         $at, $zero, L_10005480
    if (ctx->r1 != 0) {
        // 0x1000541C: sltu        $at, $v0, $t4
        ctx->r1 = ctx->r2 < ctx->r12 ? 1 : 0;
            goto L_10005480;
    }
    // 0x1000541C: sltu        $at, $v0, $t4
    ctx->r1 = ctx->r2 < ctx->r12 ? 1 : 0;
    // 0x10005420: bne         $at, $zero, L_10005430
    if (ctx->r1 != 0) {
        // 0x10005424: sltu        $at, $v1, $t5
        ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
            goto L_10005430;
    }
    // 0x10005424: sltu        $at, $v1, $t5
    ctx->r1 = ctx->r3 < ctx->r13 ? 1 : 0;
    // 0x10005428: beq         $at, $zero, L_10005480
    if (ctx->r1 == 0) {
        // 0x1000542C: nop
    
            goto L_10005480;
    }
    // 0x1000542C: nop

L_10005430:
    // 0x10005430: jal         0x10024F40
    // 0x10005434: nop

    osGetTime_recomp(rdram, ctx);
        goto after_11;
    // 0x10005434: nop

    after_11:
    // 0x10005438: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x1000543C: lw          $t7, -0x43DC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X43DC);
    // 0x10005440: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x10005444: lui         $at, 0x22
    ctx->r1 = S32(0X22 << 16);
    // 0x10005448: lw          $t6, -0x43E0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X43E0);
    // 0x1000544C: ori         $at, $at, 0xADD7
    ctx->r1 = ctx->r1 | 0XADD7;
    // 0x10005450: addu        $t9, $t7, $at
    ctx->r25 = ADD32(ctx->r15, ctx->r1);
    // 0x10005454: sltu        $at, $t9, $at
    ctx->r1 = ctx->r25 < ctx->r1 ? 1 : 0;
    // 0x10005458: addu        $t8, $t6, $at
    ctx->r24 = ADD32(ctx->r14, ctx->r1);
    // 0x1000545C: addiu       $t8, $t8, 0x0
    ctx->r24 = ADD32(ctx->r24, 0X0);
    // 0x10005460: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x10005464: bne         $at, $zero, L_10005430
    if (ctx->r1 != 0) {
        // 0x10005468: nop
    
            goto L_10005430;
    }
    // 0x10005468: nop

    // 0x1000546C: sltu        $at, $t8, $v0
    ctx->r1 = ctx->r24 < ctx->r2 ? 1 : 0;
    // 0x10005470: bne         $at, $zero, L_10005480
    if (ctx->r1 != 0) {
        // 0x10005474: sltu        $at, $v1, $t9
        ctx->r1 = ctx->r3 < ctx->r25 ? 1 : 0;
            goto L_10005480;
    }
    // 0x10005474: sltu        $at, $v1, $t9
    ctx->r1 = ctx->r3 < ctx->r25 ? 1 : 0;
    // 0x10005478: bne         $at, $zero, L_10005430
    if (ctx->r1 != 0) {
        // 0x1000547C: nop
    
            goto L_10005430;
    }
    // 0x1000547C: nop

L_10005480:
    // 0x10005480: jal         0x10024F40
    // 0x10005484: nop

    osGetTime_recomp(rdram, ctx);
        goto after_12;
    // 0x10005484: nop

    after_12:
    // 0x10005488: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x1000548C: lw          $t1, -0x43DC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X43DC);
    // 0x10005490: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x10005494: lui         $at, 0x72
    ctx->r1 = S32(0X72 << 16);
    // 0x10005498: lw          $t0, -0x43E0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X43E0);
    // 0x1000549C: ori         $at, $at, 0x70E0
    ctx->r1 = ctx->r1 | 0X70E0;
    // 0x100054A0: addu        $t3, $t1, $at
    ctx->r11 = ADD32(ctx->r9, ctx->r1);
    // 0x100054A4: sltu        $at, $t3, $at
    ctx->r1 = ctx->r11 < ctx->r1 ? 1 : 0;
    // 0x100054A8: addu        $t2, $t0, $at
    ctx->r10 = ADD32(ctx->r8, ctx->r1);
    // 0x100054AC: addiu       $t2, $t2, 0x0
    ctx->r10 = ADD32(ctx->r10, 0X0);
    // 0x100054B0: sltu        $at, $t2, $v0
    ctx->r1 = ctx->r10 < ctx->r2 ? 1 : 0;
    // 0x100054B4: bne         $at, $zero, L_1000551C
    if (ctx->r1 != 0) {
        // 0x100054B8: sltu        $at, $v0, $t2
        ctx->r1 = ctx->r2 < ctx->r10 ? 1 : 0;
            goto L_1000551C;
    }
    // 0x100054B8: sltu        $at, $v0, $t2
    ctx->r1 = ctx->r2 < ctx->r10 ? 1 : 0;
    // 0x100054BC: bne         $at, $zero, L_100054CC
    if (ctx->r1 != 0) {
        // 0x100054C0: sltu        $at, $v1, $t3
        ctx->r1 = ctx->r3 < ctx->r11 ? 1 : 0;
            goto L_100054CC;
    }
    // 0x100054C0: sltu        $at, $v1, $t3
    ctx->r1 = ctx->r3 < ctx->r11 ? 1 : 0;
    // 0x100054C4: beq         $at, $zero, L_1000551C
    if (ctx->r1 == 0) {
        // 0x100054C8: nop
    
            goto L_1000551C;
    }
    // 0x100054C8: nop

L_100054CC:
    // 0x100054CC: jal         0x10024F40
    // 0x100054D0: nop

    osGetTime_recomp(rdram, ctx);
        goto after_13;
    // 0x100054D0: nop

    after_13:
    // 0x100054D4: lui         $t5, 0x8004
    ctx->r13 = S32(0X8004 << 16);
    // 0x100054D8: lw          $t5, -0x43DC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X43DC);
    // 0x100054DC: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x100054E0: lui         $at, 0x72
    ctx->r1 = S32(0X72 << 16);
    // 0x100054E4: lw          $t4, -0x43E0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X43E0);
    // 0x100054E8: ori         $at, $at, 0x70E0
    ctx->r1 = ctx->r1 | 0X70E0;
    // 0x100054EC: addu        $t7, $t5, $at
    ctx->r15 = ADD32(ctx->r13, ctx->r1);
    // 0x100054F0: sltu        $at, $t7, $at
    ctx->r1 = ctx->r15 < ctx->r1 ? 1 : 0;
    // 0x100054F4: addu        $t6, $t4, $at
    ctx->r14 = ADD32(ctx->r12, ctx->r1);
    // 0x100054F8: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x100054FC: sltu        $at, $v0, $t6
    ctx->r1 = ctx->r2 < ctx->r14 ? 1 : 0;
    // 0x10005500: bne         $at, $zero, L_100054CC
    if (ctx->r1 != 0) {
        // 0x10005504: nop
    
            goto L_100054CC;
    }
    // 0x10005504: nop

    // 0x10005508: sltu        $at, $t6, $v0
    ctx->r1 = ctx->r14 < ctx->r2 ? 1 : 0;
    // 0x1000550C: bne         $at, $zero, L_1000551C
    if (ctx->r1 != 0) {
        // 0x10005510: sltu        $at, $v1, $t7
        ctx->r1 = ctx->r3 < ctx->r15 ? 1 : 0;
            goto L_1000551C;
    }
    // 0x10005510: sltu        $at, $v1, $t7
    ctx->r1 = ctx->r3 < ctx->r15 ? 1 : 0;
    // 0x10005514: bne         $at, $zero, L_100054CC
    if (ctx->r1 != 0) {
        // 0x10005518: nop
    
            goto L_100054CC;
    }
    // 0x10005518: nop

L_1000551C:
    // 0x1000551C: jal         0x10024F10
    // 0x10005520: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_14;
    // 0x10005520: nop

    after_14:
L_10005524:
    // 0x10005524: b           L_10005524
    pause_self(rdram);
    // 0x10005528: nop

    // 0x1000552C: nop

    // 0x10005530: nop

    // 0x10005534: nop

    // 0x10005538: nop

    // 0x1000553C: nop

    // 0x10005540: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x10005544: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x10005548: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1000554C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x10005550: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x10005554: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x10005558: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1000555C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x10005560: jr          $ra
    // 0x10005564: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x10005564: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x10005568: nop

    // 0x1000556C: nop

;}
RECOMP_FUNC void func_1505A3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505A3A8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x1505A3AC: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x1505A3B0: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x1505A3B4: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x1505A3B8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505A3BC: lwc1        $f0, 0x1550($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1550);
    // 0x1505A3C0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1505A3C4: lbu         $t6, -0x3D84($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3D84);
    // 0x1505A3C8: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x1505A3CC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1505A3D0: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x1505A3D4: beql        $t6, $zero, L_1505A414
    if (ctx->r14 == 0) {
        // 0x1505A3D8: lw          $t8, 0x0($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X0);
            goto L_1505A414;
    }
    goto skip_0;
    // 0x1505A3D8: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    skip_0:
    // 0x1505A3DC: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x1505A3E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1505A3E4: nop

    // 0x1505A3E8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x1505A3EC: nop

    // 0x1505A3F0: bc1fl       L_1505A414
    if (!c1cs) {
        // 0x1505A3F4: lw          $t8, 0x0($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X0);
            goto L_1505A414;
    }
    goto skip_1;
    // 0x1505A3F4: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    skip_1:
    // 0x1505A3F8: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x1505A3FC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x1505A400: beql        $t7, $at, L_1505A414
    if (ctx->r15 == ctx->r1) {
        // 0x1505A404: lw          $t8, 0x0($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X0);
            goto L_1505A414;
    }
    goto skip_2;
    // 0x1505A404: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    skip_2:
    // 0x1505A408: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x1505A40C: nop

    // 0x1505A410: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
L_1505A414:
    // 0x1505A414: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x1505A418: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1505A41C: bnel        $t8, $at, L_1505A4FC
    if (ctx->r24 != ctx->r1) {
        // 0x1505A420: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_1505A4FC;
    }
    goto skip_3;
    // 0x1505A420: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_3:
    // 0x1505A424: lbu         $t9, 0xAD($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0XAD);
    // 0x1505A428: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505A42C: beql        $t9, $zero, L_1505A44C
    if (ctx->r25 == 0) {
        // 0x1505A430: lbu         $t0, 0xA8($a1)
        ctx->r8 = MEM_BU(ctx->r5, 0XA8);
            goto L_1505A44C;
    }
    goto skip_4;
    // 0x1505A430: lbu         $t0, 0xA8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0XA8);
    skip_4:
    // 0x1505A434: lwc1        $f8, -0x6B40($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6B40);
    // 0x1505A438: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1505A43C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1505A440: mul.s       $f14, $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x1505A444: nop

    // 0x1505A448: lbu         $t0, 0xA8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0XA8);
L_1505A44C:
    // 0x1505A44C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1505A450: beql        $t0, $zero, L_1505A46C
    if (ctx->r8 == 0) {
        // 0x1505A454: lbu         $v0, 0x81($a1)
        ctx->r2 = MEM_BU(ctx->r5, 0X81);
            goto L_1505A46C;
    }
    goto skip_5;
    // 0x1505A454: lbu         $v0, 0x81($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X81);
    skip_5:
    // 0x1505A458: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505A45C: nop

    // 0x1505A460: mul.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x1505A464: nop

    // 0x1505A468: lbu         $v0, 0x81($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X81);
L_1505A46C:
    // 0x1505A46C: beq         $v0, $zero, L_1505A4DC
    if (ctx->r2 == 0) {
        // 0x1505A470: andi        $t1, $v0, 0x40
        ctx->r9 = ctx->r2 & 0X40;
            goto L_1505A4DC;
    }
    // 0x1505A470: andi        $t1, $v0, 0x40
    ctx->r9 = ctx->r2 & 0X40;
    // 0x1505A474: beq         $t1, $zero, L_1505A498
    if (ctx->r9 == 0) {
        // 0x1505A478: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_1505A498;
    }
    // 0x1505A478: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505A47C: andi        $t2, $v0, 0x20
    ctx->r10 = ctx->r2 & 0X20;
    // 0x1505A480: beq         $t2, $zero, L_1505A490
    if (ctx->r10 == 0) {
        // 0x1505A484: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_1505A490;
    }
    // 0x1505A484: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505A488: b           L_1505A4DC
    // 0x1505A48C: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
        goto L_1505A4DC;
    // 0x1505A48C: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_1505A490:
    // 0x1505A490: b           L_1505A4DC
    // 0x1505A494: lwc1        $f14, -0x6B3C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6B3C);
        goto L_1505A4DC;
    // 0x1505A494: lwc1        $f14, -0x6B3C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6B3C);
L_1505A498:
    // 0x1505A498: lwc1        $f16, -0x6B38($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6B38);
    // 0x1505A49C: lbu         $v0, 0x23($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X23);
    // 0x1505A4A0: mul.s       $f14, $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x1505A4A4: slti        $at, $v0, 0x2E
    ctx->r1 = SIGNED(ctx->r2) < 0X2E ? 1 : 0;
    // 0x1505A4A8: bne         $at, $zero, L_1505A4C0
    if (ctx->r1 != 0) {
        // 0x1505A4AC: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_1505A4C0;
    }
    // 0x1505A4AC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1505A4B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1505A4B4: nop

    // 0x1505A4B8: mul.s       $f20, $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x1505A4BC: nop

L_1505A4C0:
    // 0x1505A4C0: slti        $at, $v0, 0x5B
    ctx->r1 = SIGNED(ctx->r2) < 0X5B ? 1 : 0;
    // 0x1505A4C4: bne         $at, $zero, L_1505A4DC
    if (ctx->r1 != 0) {
        // 0x1505A4C8: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_1505A4DC;
    }
    // 0x1505A4C8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1505A4CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1505A4D0: nop

    // 0x1505A4D4: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x1505A4D8: nop

L_1505A4DC:
    // 0x1505A4DC: lbu         $t3, 0xAE($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0XAE);
    // 0x1505A4E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505A4E4: beql        $t3, $zero, L_1505A4FC
    if (ctx->r11 == 0) {
        // 0x1505A4E8: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_1505A4FC;
    }
    goto skip_6;
    // 0x1505A4E8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_6:
    // 0x1505A4EC: lwc1        $f6, -0x6B34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6B34);
    // 0x1505A4F0: mul.s       $f14, $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x1505A4F4: nop

    // 0x1505A4F8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_1505A4FC:
    // 0x1505A4FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1505A500: bc1fl       L_1505A530
    if (!c1cs) {
        // 0x1505A504: lwc1        $f0, 0x3C($a1)
        ctx->f0.u32l = MEM_W(ctx->r5, 0X3C);
            goto L_1505A530;
    }
    goto skip_7;
    // 0x1505A504: lwc1        $f0, 0x3C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X3C);
    skip_7:
    // 0x1505A508: lwc1        $f0, 0x3C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x1505A50C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1505A510: nop

    // 0x1505A514: bc1f        L_1505A524
    if (!c1cs) {
        // 0x1505A518: nop
    
            goto L_1505A524;
    }
    // 0x1505A518: nop

    // 0x1505A51C: b           L_1505A544
    // 0x1505A520: add.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f20.fl;
        goto L_1505A544;
    // 0x1505A520: add.s       $f14, $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f20.fl;
L_1505A524:
    // 0x1505A524: b           L_1505A544
    // 0x1505A528: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
        goto L_1505A544;
    // 0x1505A528: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x1505A52C: lwc1        $f0, 0x3C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X3C);
L_1505A530:
    // 0x1505A530: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1505A534: nop

    // 0x1505A538: bc1fl       L_1505A548
    if (!c1cs) {
        // 0x1505A53C: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_1505A548;
    }
    goto skip_8;
    // 0x1505A53C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_8:
    // 0x1505A540: add.s       $f20, $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f14.fl;
L_1505A544:
    // 0x1505A544: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_1505A548:
    // 0x1505A548: nop

    // 0x1505A54C: bc1fl       L_1505A57C
    if (!c1cs) {
        // 0x1505A550: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_1505A57C;
    }
    goto skip_9;
    // 0x1505A550: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_9:
    // 0x1505A554: sub.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x1505A558: swc1        $f8, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f8.u32l;
    // 0x1505A55C: lwc1        $f10, 0x3C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x1505A560: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x1505A564: nop

    // 0x1505A568: bc1fl       L_1505A5C4
    if (!c1cs) {
        // 0x1505A56C: ldc1        $f20, 0x8($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
            goto L_1505A5C4;
    }
    goto skip_10;
    // 0x1505A56C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    skip_10:
    // 0x1505A570: b           L_1505A5C0
    // 0x1505A574: swc1        $f12, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f12.u32l;
        goto L_1505A5C0;
    // 0x1505A574: swc1        $f12, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f12.u32l;
    // 0x1505A578: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_1505A57C:
    // 0x1505A57C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505A580: sub.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x1505A584: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x1505A588: nop

    // 0x1505A58C: bc1fl       L_1505A5A4
    if (!c1cs) {
        // 0x1505A590: add.s       $f6, $f0, $f20
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f20.fl;
            goto L_1505A5A4;
    }
    goto skip_11;
    // 0x1505A590: add.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f20.fl;
    skip_11:
    // 0x1505A594: lwc1        $f4, -0x6B30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6B30);
    // 0x1505A598: mul.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x1505A59C: nop

    // 0x1505A5A0: add.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f20.fl;
L_1505A5A4:
    // 0x1505A5A4: swc1        $f6, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f6.u32l;
    // 0x1505A5A8: lwc1        $f8, 0x3C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x1505A5AC: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x1505A5B0: nop

    // 0x1505A5B4: bc1fl       L_1505A5C4
    if (!c1cs) {
        // 0x1505A5B8: ldc1        $f20, 0x8($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
            goto L_1505A5C4;
    }
    goto skip_12;
    // 0x1505A5B8: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    skip_12:
    // 0x1505A5BC: swc1        $f12, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f12.u32l;
L_1505A5C0:
    // 0x1505A5C0: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_1505A5C4:
    // 0x1505A5C4: jr          $ra
    // 0x1505A5C8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x1505A5C8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_150EF784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EF784: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150EF788: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x150EF78C: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x150EF790: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x150EF794: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150EF798: bne         $t6, $at, L_150EF7A8
    if (ctx->r14 != ctx->r1) {
        // 0x150EF79C: nop
    
            goto L_150EF7A8;
    }
    // 0x150EF79C: nop

    // 0x150EF7A0: jr          $ra
    // 0x150EF7A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x150EF7A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150EF7A8:
    // 0x150EF7A8: jr          $ra
    // 0x150EF7AC: nop

    return;
    return;
    // 0x150EF7AC: nop

;}
RECOMP_FUNC void func_1506DB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506DB5C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506DB60: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506DB64: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506DB68: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506DB6C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1506DB70: nop

    // 0x1506DB74: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1506DB78: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x1506DB7C: jr          $ra
    // 0x1506DB80: nop

    return;
    return;
    // 0x1506DB80: nop

;}
RECOMP_FUNC void func_150FC438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FC438: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x150FC43C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150FC440: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x150FC444: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x150FC448: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150FC44C: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x150FC450: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x150FC454: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150FC458: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x150FC45C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150FC460: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x150FC464: lbu         $t8, 0x3B($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X3B);
    // 0x150FC468: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150FC46C: sb          $zero, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = 0;
    // 0x150FC470: sb          $a2, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = ctx->r6;
    // 0x150FC474: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x150FC478: sh          $zero, 0x94($sp)
    MEM_H(0X94, ctx->r29) = 0;
    // 0x150FC47C: sb          $a3, 0x9D($sp)
    MEM_B(0X9D, ctx->r29) = ctx->r7;
    // 0x150FC480: sb          $t8, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r24;
    // 0x150FC484: beq         $s0, $zero, L_150FC4A4
    if (ctx->r16 == 0) {
        // 0x150FC488: swc1        $f4, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
            goto L_150FC4A4;
    }
    // 0x150FC488: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x150FC48C: lw          $v0, 0x318($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X318);
    // 0x150FC490: beql        $v0, $zero, L_150FC4A8
    if (ctx->r2 == 0) {
        // 0x150FC494: addiu       $t0, $zero, -0x1
        ctx->r8 = ADD32(0, -0X1);
            goto L_150FC4A8;
    }
    goto skip_0;
    // 0x150FC494: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    skip_0:
    // 0x150FC498: lbu         $t9, 0x23D($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X23D);
    // 0x150FC49C: b           L_150FC4AC
    // 0x150FC4A0: sb          $t9, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r25;
        goto L_150FC4AC;
    // 0x150FC4A0: sb          $t9, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r25;
L_150FC4A4:
    // 0x150FC4A4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_150FC4A8:
    // 0x150FC4A8: sb          $t0, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r8;
L_150FC4AC:
    // 0x150FC4AC: beq         $s0, $zero, L_150FC4C0
    if (ctx->r16 == 0) {
        // 0x150FC4B0: sw          $s0, 0x98($sp)
        MEM_W(0X98, ctx->r29) = ctx->r16;
            goto L_150FC4C0;
    }
    // 0x150FC4B0: sw          $s0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r16;
    // 0x150FC4B4: lbu         $t1, 0x3B($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X3B);
    // 0x150FC4B8: b           L_150FC4C8
    // 0x150FC4BC: sb          $t1, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r9;
        goto L_150FC4C8;
    // 0x150FC4BC: sb          $t1, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r9;
L_150FC4C0:
    // 0x150FC4C0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150FC4C4: sb          $t2, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r10;
L_150FC4C8:
    // 0x150FC4C8: addiu       $t3, $zero, 0x25
    ctx->r11 = ADD32(0, 0X25);
    // 0x150FC4CC: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x150FC4D0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150FC4D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150FC4D8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x150FC4DC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x150FC4E0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150FC4E4: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150FC4E8: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150FC4EC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150FC4F0: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x150FC4F4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150FC4F8: jal         0x15149130
    // 0x150FC4FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x150FC4FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x150FC500: beq         $v0, $zero, L_150FC600
    if (ctx->r2 == 0) {
        // 0x150FC504: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150FC600;
    }
    // 0x150FC504: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150FC508: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x150FC50C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x150FC510: jal         0x10022EC0
    // 0x150FC514: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150FC514: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    after_1:
    // 0x150FC518: beql        $s0, $zero, L_150FC604
    if (ctx->r16 == 0) {
        // 0x150FC51C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_150FC604;
    }
    goto skip_1;
    // 0x150FC51C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x150FC520: lw          $t7, 0x318($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X318);
    // 0x150FC524: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x150FC528: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150FC52C: beq         $t7, $zero, L_150FC600
    if (ctx->r15 == 0) {
        // 0x150FC530: addiu       $t0, $zero, -0x1
        ctx->r8 = ADD32(0, -0X1);
            goto L_150FC600;
    }
    // 0x150FC530: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150FC534: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x150FC538: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FC53C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150FC540: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FC544: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x150FC548: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150FC54C: addiu       $t1, $zero, 0x12C
    ctx->r9 = ADD32(0, 0X12C);
    // 0x150FC550: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FC554: lwc1        $f16, 0x1EB0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1EB0);
    // 0x150FC558: sb          $t8, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r24;
    // 0x150FC55C: sb          $t9, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r25;
    // 0x150FC560: sb          $t0, 0x42($sp)
    MEM_B(0X42, ctx->r29) = ctx->r8;
    // 0x150FC564: sh          $t1, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r9;
    // 0x150FC568: lw          $t2, 0x318($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X318);
    // 0x150FC56C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FC570: lwc1        $f18, 0x1EB4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1EB4);
    // 0x150FC574: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FC578: lwc1        $f4, 0x1EB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1EB8);
    // 0x150FC57C: lbu         $t3, 0x23D($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X23D);
    // 0x150FC580: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FC584: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x150FC588: lwc1        $f6, 0x1EBC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1EBC);
    // 0x150FC58C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FC590: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x150FC594: lwc1        $f8, 0x1EC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1EC0);
    // 0x150FC598: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FC59C: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x150FC5A0: lwc1        $f10, 0x1EC4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1EC4);
    // 0x150FC5A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FC5A8: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x150FC5AC: lwc1        $f16, 0x1EC8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1EC8);
    // 0x150FC5B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FC5B4: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x150FC5B8: lwc1        $f18, 0x1ECC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1ECC);
    // 0x150FC5BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FC5C0: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x150FC5C4: lwc1        $f4, 0x1ED0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1ED0);
    // 0x150FC5C8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x150FC5CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150FC5D0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150FC5D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150FC5D8: sb          $t3, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r11;
    // 0x150FC5DC: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x150FC5E0: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x150FC5E4: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x150FC5E8: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x150FC5EC: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x150FC5F0: jal         0x15164780
    // 0x150FC5F4: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    func_15164780(rdram, ctx);
        goto after_2;
    // 0x150FC5F4: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x150FC5F8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x150FC5FC: sw          $v0, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r2;
L_150FC600:
    // 0x150FC600: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_150FC604:
    // 0x150FC604: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x150FC608: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x150FC60C: jr          $ra
    // 0x150FC610: nop

    return;
    return;
    // 0x150FC610: nop

;}
RECOMP_FUNC void func_150407A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150407A0: jr          $ra
    // 0x150407A4: nop

    return;
    return;
    // 0x150407A4: nop

;}
RECOMP_FUNC void func_1514DAA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DAA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1514DAA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DAAC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1514DAB0: lw          $t6, 0x94($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X94);
    // 0x1514DAB4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1514DAB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1514DABC: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x1514DAC0: sw          $t7, 0x94($a3)
    MEM_W(0X94, ctx->r7) = ctx->r15;
    // 0x1514DAC4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1514DAC8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1514DACC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x1514DAD0: jal         0x15158BD0
    // 0x1514DAD4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_15158BD0(rdram, ctx);
        goto after_0;
    // 0x1514DAD4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x1514DAD8: beq         $v0, $zero, L_1514DB08
    if (ctx->r2 == 0) {
        // 0x1514DADC: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_1514DB08;
    }
    // 0x1514DADC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x1514DAE0: addiu       $a0, $v0, 0x58
    ctx->r4 = ADD32(ctx->r2, 0X58);
    // 0x1514DAE4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x1514DAE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x1514DAEC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x1514DAF0: jal         0x10022EC0
    // 0x1514DAF4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1514DAF4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_1:
    // 0x1514DAF8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x1514DAFC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1514DB00: jal         0x1514EC1C
    // 0x1514DB04: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_1514EC1C(rdram, ctx);
        goto after_2;
    // 0x1514DB04: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_2:
L_1514DB08:
    // 0x1514DB08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514DB0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1514DB10: jr          $ra
    // 0x1514DB14: nop

    return;
    return;
    // 0x1514DB14: nop

;}
RECOMP_FUNC void func_151AA09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AA09C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151AA0A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151AA0A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151AA0A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151AA0AC: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x151AA0B0: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151AA0B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AA0B8: lwc1        $f6, -0x7070($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7070);
    // 0x151AA0BC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x151AA0C0: lwc1        $f0, 0x118($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X118);
    // 0x151AA0C4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x151AA0C8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x151AA0CC: nop

    // 0x151AA0D0: bc1fl       L_151AA0F4
    if (!c1cs) {
        // 0x151AA0D4: lwc1        $f16, 0x18($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
            goto L_151AA0F4;
    }
    goto skip_0;
    // 0x151AA0D4: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    skip_0:
    // 0x151AA0D8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151AA0DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AA0E0: nop

    // 0x151AA0E4: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x151AA0E8: b           L_151AA104
    // 0x151AA0EC: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
        goto L_151AA104;
    // 0x151AA0EC: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x151AA0F0: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
L_151AA0F4:
    // 0x151AA0F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151AA0F8: nop

    // 0x151AA0FC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151AA100: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
L_151AA104:
    // 0x151AA104: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x151AA108: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151AA10C: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151AA110: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151AA114: addiu       $a3, $s0, 0x34
    ctx->r7 = ADD32(ctx->r16, 0X34);
    // 0x151AA118: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151AA11C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x151AA120: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151AA124: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151AA128: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x151AA12C: jal         0x15045800
    // 0x151AA130: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    func_15045800(rdram, ctx);
        goto after_0;
    // 0x151AA130: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x151AA134: beq         $v0, $zero, L_151AA15C
    if (ctx->r2 == 0) {
        // 0x151AA138: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_151AA15C;
    }
    // 0x151AA138: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151AA13C: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151AA140: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x151AA144: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x151AA148: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x151AA14C: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x151AA150: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x151AA154: jal         0x151ABE40
    // 0x151AA158: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_151ABE40(rdram, ctx);
        goto after_1;
    // 0x151AA158: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
L_151AA15C:
    // 0x151AA15C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151AA160: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151AA164: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x151AA168: jr          $ra
    // 0x151AA16C: nop

    return;
    return;
    // 0x151AA16C: nop

;}
RECOMP_FUNC void func_151D40D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D40D4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151D40D8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151D40DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151D40E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151D40E4: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x151D40E8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x151D40EC: beql        $a1, $zero, L_151D41F4
    if (ctx->r5 == 0) {
        // 0x151D40F0: lw          $at, 0x0($s0)
        ctx->r1 = MEM_W(ctx->r16, 0X0);
            goto L_151D41F4;
    }
    goto skip_0;
    // 0x151D40F0: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x151D40F4: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151D40F8: lwc1        $f14, 0x8($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
    // 0x151D40FC: jal         0x150484A0
    // 0x151D4100: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    func_150484A0(rdram, ctx);
        goto after_0;
    // 0x151D4100: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    after_0:
    // 0x151D4104: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x151D4108: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151D410C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D4110: lwc1        $f4, -0x4E34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4E34);
    // 0x151D4114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151D4118: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x151D411C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151D4120: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151D4124: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x151D4128: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x151D412C: nop

    // 0x151D4130: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x151D4134: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x151D4138: nop

    // 0x151D413C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x151D4140: beql        $v0, $zero, L_151D4190
    if (ctx->r2 == 0) {
        // 0x151D4144: mfc1        $v0, $f8
        ctx->r2 = (int32_t)ctx->f8.u32l;
            goto L_151D4190;
    }
    goto skip_1;
    // 0x151D4144: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x151D4148: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151D414C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151D4150: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151D4154: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x151D4158: nop

    // 0x151D415C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x151D4160: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x151D4164: nop

    // 0x151D4168: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x151D416C: bne         $v0, $zero, L_151D4184
    if (ctx->r2 != 0) {
        // 0x151D4170: nop
    
            goto L_151D4184;
    }
    // 0x151D4170: nop

    // 0x151D4174: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x151D4178: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151D417C: b           L_151D419C
    // 0x151D4180: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_151D419C;
    // 0x151D4180: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_151D4184:
    // 0x151D4184: b           L_151D419C
    // 0x151D4188: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_151D419C;
    // 0x151D4188: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x151D418C: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
L_151D4190:
    // 0x151D4190: nop

    // 0x151D4194: bltz        $v0, L_151D4184
    if (SIGNED(ctx->r2) < 0) {
        // 0x151D4198: nop
    
            goto L_151D4184;
    }
    // 0x151D4198: nop

L_151D419C:
    // 0x151D419C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x151D41A0: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151D41A4: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151D41A8: or          $t7, $v0, $zero
    ctx->r15 = ctx->r2 | 0;
    // 0x151D41AC: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x151D41B0: addiu       $v0, $t7, -0x4000
    ctx->r2 = ADD32(ctx->r15, -0X4000);
    // 0x151D41B4: ori         $t8, $v0, 0x1
    ctx->r24 = ctx->r2 | 0X1;
    // 0x151D41B8: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
    // 0x151D41BC: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x151D41C0: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x151D41C4: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x151D41C8: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151D41CC: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151D41D0: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x151D41D4: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x151D41D8: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x151D41DC: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151D41E0: mul.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x151D41E4: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x151D41E8: b           L_151D424C
    // 0x151D41EC: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
        goto L_151D424C;
    // 0x151D41EC: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x151D41F0: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
L_151D41F4:
    // 0x151D41F4: addiu       $t0, $sp, 0x40
    ctx->r8 = ADD32(ctx->r29, 0X40);
    // 0x151D41F8: addiu       $a1, $sp, 0x3E
    ctx->r5 = ADD32(ctx->r29, 0X3E);
    // 0x151D41FC: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x151D4200: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x151D4204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151D4208: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x151D420C: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151D4210: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x151D4214: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x151D4218: beq         $t4, $zero, L_151D4248
    if (ctx->r12 == 0) {
        // 0x151D421C: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_151D4248;
    }
    // 0x151D421C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x151D4220: jal         0x1507C3E0
    // 0x151D4224: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1507C3E0(rdram, ctx);
        goto after_1;
    // 0x151D4224: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x151D4228: lh          $t5, 0x3E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3E);
    // 0x151D422C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151D4230: sra         $t6, $t5, 1
    ctx->r14 = S32(SIGNED(ctx->r13) >> 1);
    // 0x151D4234: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x151D4238: nop

    // 0x151D423C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151D4240: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x151D4244: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
L_151D4248:
    // 0x151D4248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D424C:
    // 0x151D424C: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x151D4250: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x151D4254: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x151D4258: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x151D425C: subu        $v1, $t7, $t8
    ctx->r3 = SUB32(ctx->r15, ctx->r24);
    // 0x151D4260: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x151D4264: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151D4268: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151D426C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x151D4270: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x151D4274: mflo        $v1
    ctx->r3 = lo;
    // 0x151D4278: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x151D427C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x151D4280: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x151D4284: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x151D4288: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x151D428C: sh          $v0, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r2;
    // 0x151D4290: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x151D4294: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x151D4298: jal         0x1505D1C4
    // 0x151D429C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_1505D1C4(rdram, ctx);
        goto after_2;
    // 0x151D429C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_2:
    // 0x151D42A0: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151D42A4: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151D42A8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x151D42AC: lhu         $v0, 0x4E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X4E);
    // 0x151D42B0: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x151D42B4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x151D42B8: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x151D42BC: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x151D42C0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x151D42C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x151D42C8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x151D42CC: jal         0x1505D1C4
    // 0x151D42D0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_1505D1C4(rdram, ctx);
        goto after_3;
    // 0x151D42D0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_3:
    // 0x151D42D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151D42D8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151D42DC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151D42E0: jr          $ra
    // 0x151D42E4: nop

    return;
    return;
    // 0x151D42E4: nop

;}
RECOMP_FUNC void func_1518F1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518F1A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1518F1A4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1518F1A8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1518F1AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1518F1B0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1518F1B4: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1518F1B8: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x1518F1BC: lh          $t6, 0x12E($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X12E);
    // 0x1518F1C0: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x1518F1C4: sh          $t8, 0x12E($s1)
    MEM_H(0X12E, ctx->r17) = ctx->r24;
    // 0x1518F1C8: lh          $t9, 0x12E($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X12E);
    // 0x1518F1CC: bgezl       $t9, L_1518F248
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1518F1D0: addiu       $s0, $s1, 0x110
        ctx->r16 = ADD32(ctx->r17, 0X110);
            goto L_1518F248;
    }
    goto skip_0;
    // 0x1518F1D0: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    skip_0:
    // 0x1518F1D4: jal         0x150ADA20
    // 0x1518F1D8: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1518F1D8: nop

    after_0:
    // 0x1518F1DC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1518F1E0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1518F1E4: mfhi        $t0
    ctx->r8 = hi;
    // 0x1518F1E8: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    // 0x1518F1EC: jal         0x150ADA20
    // 0x1518F1F0: sh          $t0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1518F1F0: sh          $t0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r8;
    after_1:
    // 0x1518F1F4: andi        $t1, $v0, 0x3
    ctx->r9 = ctx->r2 & 0X3;
    // 0x1518F1F8: beq         $t1, $zero, L_1518F224
    if (ctx->r9 == 0) {
        // 0x1518F1FC: nop
    
            goto L_1518F224;
    }
    // 0x1518F1FC: nop

    // 0x1518F200: jal         0x150ADA68
    // 0x1518F204: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x1518F204: nop

    after_2:
    // 0x1518F208: lwc1        $f2, 0x10($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1518F20C: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1518F210: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x1518F214: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1518F218: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x1518F21C: b           L_1518F244
    // 0x1518F220: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
        goto L_1518F244;
    // 0x1518F220: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
L_1518F224:
    // 0x1518F224: jal         0x150ADA68
    // 0x1518F228: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x1518F228: nop

    after_3:
    // 0x1518F22C: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1518F230: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1518F234: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x1518F238: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1518F23C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x1518F240: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
L_1518F244:
    // 0x1518F244: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
L_1518F248:
    // 0x1518F248: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1518F24C: lwc1        $f0, 0x30($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X30);
    // 0x1518F250: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518F254: lwc1        $f16, 0x7B68($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7B68);
    // 0x1518F258: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x1518F25C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1518F260: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1518F264: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x1518F268: swc1        $f4, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f4.u32l;
    // 0x1518F26C: lh          $t2, 0x1C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X1C);
    // 0x1518F270: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x1518F274: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x1518F278: sh          $t4, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r12;
    // 0x1518F27C: lh          $t5, 0x1C($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X1C);
    // 0x1518F280: bgezl       $t5, L_1518F2C4
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1518F284: lwc1        $f0, 0x2C($s1)
        ctx->f0.u32l = MEM_W(ctx->r17, 0X2C);
            goto L_1518F2C4;
    }
    goto skip_1;
    // 0x1518F284: lwc1        $f0, 0x2C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X2C);
    skip_1:
    // 0x1518F288: jal         0x150ADA20
    // 0x1518F28C: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x1518F28C: nop

    after_4:
    // 0x1518F290: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x1518F294: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1518F298: mfhi        $t6
    ctx->r14 = hi;
    // 0x1518F29C: sh          $t6, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r14;
    // 0x1518F2A0: jal         0x150ADA68
    // 0x1518F2A4: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x1518F2A4: nop

    after_5:
    // 0x1518F2A8: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1518F2AC: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1518F2B0: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x1518F2B4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1518F2B8: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x1518F2BC: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x1518F2C0: lwc1        $f0, 0x2C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X2C);
L_1518F2C4:
    // 0x1518F2C4: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1518F2C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518F2CC: lwc1        $f6, 0x7B6C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7B6C);
    // 0x1518F2D0: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x1518F2D4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1518F2D8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1518F2DC: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1518F2E0: swc1        $f10, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f10.u32l;
    // 0x1518F2E4: lh          $t7, 0x2C($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2C);
    // 0x1518F2E8: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x1518F2EC: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x1518F2F0: sh          $t9, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r25;
    // 0x1518F2F4: lh          $t0, 0x2C($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2C);
    // 0x1518F2F8: bgezl       $t0, L_1518F33C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1518F2FC: lw          $v1, 0x24($s1)
        ctx->r3 = MEM_W(ctx->r17, 0X24);
            goto L_1518F33C;
    }
    goto skip_2;
    // 0x1518F2FC: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    skip_2:
    // 0x1518F300: jal         0x150ADA20
    // 0x1518F304: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1518F304: nop

    after_6:
    // 0x1518F308: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1518F30C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1518F310: mfhi        $t1
    ctx->r9 = hi;
    // 0x1518F314: sh          $t1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r9;
    // 0x1518F318: jal         0x150ADA68
    // 0x1518F31C: nop

    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x1518F31C: nop

    after_7:
    // 0x1518F320: lwc1        $f2, 0x24($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X24);
    // 0x1518F324: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1518F328: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x1518F32C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1518F330: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x1518F334: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x1518F338: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
L_1518F33C:
    // 0x1518F33C: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1518F340: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518F344: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x1518F348: lwc1        $f4, 0x7B70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7B70);
    // 0x1518F34C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518F350: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1518F354: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x1518F358: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1518F35C: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1518F360: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x1518F364: nop

    // 0x1518F368: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x1518F36C: sw          $t4, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r12;
    // 0x1518F370: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1518F374: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1518F378: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1518F37C: jr          $ra
    // 0x1518F380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1518F380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_150888A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150888A8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x150888AC: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x150888B0: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x150888B4: sll         $t6, $a2, 24
    ctx->r14 = S32(ctx->r6 << 24);
    // 0x150888B8: sra         $a2, $t6, 24
    ctx->r6 = S32(SIGNED(ctx->r14) >> 24);
    // 0x150888BC: andi        $s0, $a0, 0xFF
    ctx->r16 = ctx->r4 & 0XFF;
    // 0x150888C0: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x150888C4: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x150888C8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x150888CC: beq         $a2, $zero, L_150888DC
    if (ctx->r6 == 0) {
        // 0x150888D0: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_150888DC;
    }
    // 0x150888D0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150888D4: b           L_150888E0
    // 0x150888D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_150888E0;
    // 0x150888D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_150888DC:
    // 0x150888DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_150888E0:
    // 0x150888E0: lbu         $t8, 0xF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XF);
    // 0x150888E4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150888E8: lw          $a1, 0x2350($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2350);
    // 0x150888EC: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x150888F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x150888F4: addu        $a2, $t9, $a1
    ctx->r6 = ADD32(ctx->r25, ctx->r5);
    // 0x150888F8: lbu         $t0, 0x9($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X9);
    // 0x150888FC: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x15088900: beql        $v0, $t0, L_1508893C
    if (ctx->r2 == ctx->r8) {
        // 0x15088904: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_1508893C;
    }
    goto skip_0;
    // 0x15088904: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    skip_0:
    // 0x15088908: beq         $s0, $t0, L_15088938
    if (ctx->r16 == ctx->r8) {
        // 0x1508890C: sll         $t6, $t0, 4
        ctx->r14 = S32(ctx->r8 << 4);
            goto L_15088938;
    }
    // 0x1508890C: sll         $t6, $t0, 4
    ctx->r14 = S32(ctx->r8 << 4);
    // 0x15088910: addu        $t1, $t6, $a1
    ctx->r9 = ADD32(ctx->r14, ctx->r5);
    // 0x15088914: lbu         $t7, 0xE($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0XE);
    // 0x15088918: bnel        $t7, $zero, L_1508893C
    if (ctx->r15 != 0) {
        // 0x1508891C: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_1508893C;
    }
    goto skip_1;
    // 0x1508891C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    skip_1:
    // 0x15088920: lbu         $t2, 0xF($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XF);
    // 0x15088924: beql        $a0, $t2, L_15088938
    if (ctx->r4 == ctx->r10) {
        // 0x15088928: andi        $a3, $t0, 0xFF
        ctx->r7 = ctx->r8 & 0XFF;
            goto L_15088938;
    }
    goto skip_2;
    // 0x15088928: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    skip_2:
    // 0x1508892C: b           L_15088938
    // 0x15088930: andi        $v1, $t0, 0xFF
    ctx->r3 = ctx->r8 & 0XFF;
        goto L_15088938;
    // 0x15088930: andi        $v1, $t0, 0xFF
    ctx->r3 = ctx->r8 & 0XFF;
    // 0x15088934: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
L_15088938:
    // 0x15088938: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_1508893C:
    // 0x1508893C: addiu       $t1, $a2, 0x1
    ctx->r9 = ADD32(ctx->r6, 0X1);
    // 0x15088940: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
L_15088944:
    // 0x15088944: lbu         $a2, 0x9($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X9);
    // 0x15088948: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x1508894C: beql        $v0, $a2, L_1508899C
    if (ctx->r2 == ctx->r6) {
        // 0x15088950: lbu         $t3, 0xA($t1)
        ctx->r11 = MEM_BU(ctx->r9, 0XA);
            goto L_1508899C;
    }
    goto skip_3;
    // 0x15088950: lbu         $t3, 0xA($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0XA);
    skip_3:
    // 0x15088954: beq         $s0, $a2, L_15088998
    if (ctx->r16 == ctx->r6) {
        // 0x15088958: sll         $t8, $a2, 4
        ctx->r24 = S32(ctx->r6 << 4);
            goto L_15088998;
    }
    // 0x15088958: sll         $t8, $a2, 4
    ctx->r24 = S32(ctx->r6 << 4);
    // 0x1508895C: addu        $t3, $t8, $a1
    ctx->r11 = ADD32(ctx->r24, ctx->r5);
    // 0x15088960: lbu         $t9, 0xE($t3)
    ctx->r25 = MEM_BU(ctx->r11, 0XE);
    // 0x15088964: bnel        $t9, $zero, L_1508899C
    if (ctx->r25 != 0) {
        // 0x15088968: lbu         $t3, 0xA($t1)
        ctx->r11 = MEM_BU(ctx->r9, 0XA);
            goto L_1508899C;
    }
    goto skip_4;
    // 0x15088968: lbu         $t3, 0xA($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0XA);
    skip_4:
    // 0x1508896C: lbu         $t2, 0xF($t3)
    ctx->r10 = MEM_BU(ctx->r11, 0XF);
    // 0x15088970: beql        $a0, $t2, L_15088998
    if (ctx->r4 == ctx->r10) {
        // 0x15088974: andi        $a3, $a2, 0xFF
        ctx->r7 = ctx->r6 & 0XFF;
            goto L_15088998;
    }
    goto skip_5;
    // 0x15088974: andi        $a3, $a2, 0xFF
    ctx->r7 = ctx->r6 & 0XFF;
    skip_5:
    // 0x15088978: beql        $v0, $t4, L_1508898C
    if (ctx->r2 == ctx->r12) {
        // 0x1508897C: andi        $v1, $a2, 0xFF
        ctx->r3 = ctx->r6 & 0XFF;
            goto L_1508898C;
    }
    goto skip_6;
    // 0x1508897C: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    skip_6:
    // 0x15088980: beql        $t2, $zero, L_1508899C
    if (ctx->r10 == 0) {
        // 0x15088984: lbu         $t3, 0xA($t1)
        ctx->r11 = MEM_BU(ctx->r9, 0XA);
            goto L_1508899C;
    }
    goto skip_7;
    // 0x15088984: lbu         $t3, 0xA($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0XA);
    skip_7:
    // 0x15088988: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
L_1508898C:
    // 0x1508898C: b           L_15088998
    // 0x15088990: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
        goto L_15088998;
    // 0x15088990: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
    // 0x15088994: andi        $a3, $a2, 0xFF
    ctx->r7 = ctx->r6 & 0XFF;
L_15088998:
    // 0x15088998: lbu         $t3, 0xA($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0XA);
L_1508899C:
    // 0x1508899C: beq         $v0, $t3, L_150889E8
    if (ctx->r2 == ctx->r11) {
        // 0x150889A0: nop
    
            goto L_150889E8;
    }
    // 0x150889A0: nop

    // 0x150889A4: beq         $s0, $t3, L_150889E8
    if (ctx->r16 == ctx->r11) {
        // 0x150889A8: sll         $t6, $t3, 4
        ctx->r14 = S32(ctx->r11 << 4);
            goto L_150889E8;
    }
    // 0x150889A8: sll         $t6, $t3, 4
    ctx->r14 = S32(ctx->r11 << 4);
    // 0x150889AC: addu        $t2, $t6, $a1
    ctx->r10 = ADD32(ctx->r14, ctx->r5);
    // 0x150889B0: lbu         $t7, 0xE($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0XE);
    // 0x150889B4: bne         $t7, $zero, L_150889E8
    if (ctx->r15 != 0) {
        // 0x150889B8: nop
    
            goto L_150889E8;
    }
    // 0x150889B8: nop

    // 0x150889BC: lbu         $a2, 0xF($t2)
    ctx->r6 = MEM_BU(ctx->r10, 0XF);
    // 0x150889C0: beql        $a0, $a2, L_150889E8
    if (ctx->r4 == ctx->r6) {
        // 0x150889C4: andi        $a3, $t3, 0xFF
        ctx->r7 = ctx->r11 & 0XFF;
            goto L_150889E8;
    }
    goto skip_8;
    // 0x150889C4: andi        $a3, $t3, 0xFF
    ctx->r7 = ctx->r11 & 0XFF;
    skip_8:
    // 0x150889C8: beql        $v0, $t4, L_150889DC
    if (ctx->r2 == ctx->r12) {
        // 0x150889CC: andi        $v1, $t3, 0xFF
        ctx->r3 = ctx->r11 & 0XFF;
            goto L_150889DC;
    }
    goto skip_9;
    // 0x150889CC: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    skip_9:
    // 0x150889D0: beq         $a2, $zero, L_150889E8
    if (ctx->r6 == 0) {
        // 0x150889D4: nop
    
            goto L_150889E8;
    }
    // 0x150889D4: nop

    // 0x150889D8: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
L_150889DC:
    // 0x150889DC: b           L_150889E8
    // 0x150889E0: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
        goto L_150889E8;
    // 0x150889E0: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
    // 0x150889E4: andi        $a3, $t3, 0xFF
    ctx->r7 = ctx->r11 & 0XFF;
L_150889E8:
    // 0x150889E8: bne         $t0, $t5, L_15088944
    if (ctx->r8 != ctx->r13) {
        // 0x150889EC: addiu       $t1, $t1, 0x2
        ctx->r9 = ADD32(ctx->r9, 0X2);
            goto L_15088944;
    }
    // 0x150889EC: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x150889F0: bne         $v0, $t4, L_150889FC
    if (ctx->r2 != ctx->r12) {
        // 0x150889F4: lw          $s0, 0x4($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X4);
            goto L_150889FC;
    }
    // 0x150889F4: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x150889F8: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
L_150889FC:
    // 0x150889FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15088A00: jr          $ra
    // 0x15088A04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x15088A04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_1504086C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504086C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040870: jr          $ra
    // 0x15040874: nop

    return;
    return;
    // 0x15040874: nop

;}
RECOMP_FUNC void func_1000ECCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000ECCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1000ECD0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1000ECD4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1000ECD8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x1000ECDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1000ECE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1000ECE4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1000ECE8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x1000ECEC: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x1000ECF0: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x1000ECF4: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1000ECF8: sll         $a1, $v1, 16
    ctx->r5 = S32(ctx->r3 << 16);
    // 0x1000ECFC: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1000ED00: beq         $v0, $zero, L_1000ED24
    if (ctx->r2 == 0) {
        // 0x1000ED04: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_1000ED24;
    }
    // 0x1000ED04: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1000ED08: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x1000ED0C: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x1000ED10: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x1000ED14: sw          $t9, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r25;
    // 0x1000ED18: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x1000ED1C: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x1000ED20: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
L_1000ED24:
    // 0x1000ED24: lw          $t0, -0x161C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X161C);
    // 0x1000ED28: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x1000ED2C: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x1000ED30: subu        $a1, $a1, $t0
    ctx->r5 = SUB32(ctx->r5, ctx->r8);
    // 0x1000ED34: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x1000ED38: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x1000ED3C: bgtz        $a1, L_1000ED84
    if (SIGNED(ctx->r5) > 0) {
        // 0x1000ED40: or          $t8, $t7, $a1
        ctx->r24 = ctx->r15 | ctx->r5;
            goto L_1000ED84;
    }
    // 0x1000ED40: or          $t8, $t7, $a1
    ctx->r24 = ctx->r15 | ctx->r5;
    // 0x1000ED44: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x1000ED48: sh          $t4, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r12;
    // 0x1000ED4C: sh          $t4, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r12;
    // 0x1000ED50: jal         0x10010894
    // 0x1000ED54: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    func_10010894(rdram, ctx);
        goto after_0;
    // 0x1000ED54: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    after_0:
    // 0x1000ED58: bne         $v0, $zero, L_1000ED7C
    if (ctx->r2 != 0) {
        // 0x1000ED5C: lw          $t5, 0x40($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X40);
            goto L_1000ED7C;
    }
    // 0x1000ED5C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x1000ED60: lhu         $t6, 0x8($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X8);
    // 0x1000ED64: lhu         $a0, 0x0($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X0);
    // 0x1000ED68: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x1000ED6C: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x1000ED70: lh          $a3, 0xA($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XA);
    // 0x1000ED74: jal         0x10010344
    // 0x1000ED78: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_10010344(rdram, ctx);
        goto after_1;
    // 0x1000ED78: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
L_1000ED7C:
    // 0x1000ED7C: b           L_1000ED8C
    // 0x1000ED80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000ED8C;
    // 0x1000ED80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000ED84:
    // 0x1000ED84: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
    // 0x1000ED88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1000ED8C:
    // 0x1000ED8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1000ED90: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1000ED94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1000ED98: jr          $ra
    // 0x1000ED9C: nop

    return;
    return;
    // 0x1000ED9C: nop

;}
RECOMP_FUNC void func_1515E278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515E278: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1515E27C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1515E280: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x1515E284: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x1515E288: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x1515E28C: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x1515E290: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1515E294: lw          $t6, -0x3280($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3280);
    // 0x1515E298: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x1515E29C: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x1515E2A0: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x1515E2A4: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x1515E2A8: jal         0x1515EB84
    // 0x1515E2AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_1515EB84(rdram, ctx);
        goto after_0;
    // 0x1515E2AC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x1515E2B0: beq         $v0, $zero, L_1515E2E0
    if (ctx->r2 == 0) {
        // 0x1515E2B4: lw          $a0, 0x70($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X70);
            goto L_1515E2E0;
    }
    // 0x1515E2B4: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x1515E2B8: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x1515E2BC: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x1515E2C0: sb          $t8, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r24;
    // 0x1515E2C4: lw          $t9, 0x18($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X18);
    // 0x1515E2C8: srl         $t5, $t9, 8
    ctx->r13 = S32(U32(ctx->r25) >> 8);
    // 0x1515E2CC: sb          $t5, 0x1($t1)
    MEM_B(0X1, ctx->r9) = ctx->r13;
    // 0x1515E2D0: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x1515E2D4: srl         $t8, $t6, 16
    ctx->r24 = S32(U32(ctx->r14) >> 16);
    // 0x1515E2D8: b           L_1515E328
    // 0x1515E2DC: sb          $t8, 0x2($t1)
    MEM_B(0X2, ctx->r9) = ctx->r24;
        goto L_1515E328;
    // 0x1515E2DC: sb          $t8, 0x2($t1)
    MEM_B(0X2, ctx->r9) = ctx->r24;
L_1515E2E0:
    // 0x1515E2E0: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x1515E2E4: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x1515E2E8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1515E2EC: srl         $t4, $t9, 5
    ctx->r12 = S32(U32(ctx->r25) >> 5);
    // 0x1515E2F0: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x1515E2F4: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x1515E2F8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1515E2FC: subu        $a1, $t7, $t6
    ctx->r5 = SUB32(ctx->r15, ctx->r14);
    // 0x1515E300: addiu       $v1, $v1, -0x32DD
    ctx->r3 = ADD32(ctx->r3, -0X32DD);
    // 0x1515E304: addiu       $v0, $v0, -0x32E0
    ctx->r2 = ADD32(ctx->r2, -0X32E0);
L_1515E308:
    // 0x1515E308: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x1515E30C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1515E310: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1515E314: multu       $t8, $a1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E318: mflo        $t9
    ctx->r25 = lo;
    // 0x1515E31C: sra         $t4, $t9, 8
    ctx->r12 = S32(SIGNED(ctx->r25) >> 8);
    // 0x1515E320: bne         $v0, $v1, L_1515E308
    if (ctx->r2 != ctx->r3) {
        // 0x1515E324: sb          $t4, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r12;
            goto L_1515E308;
    }
    // 0x1515E324: sb          $t4, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r12;
L_1515E328:
    // 0x1515E328: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x1515E32C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x1515E330: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x1515E334: andi        $t7, $t5, 0x10
    ctx->r15 = ctx->r13 & 0X10;
    // 0x1515E338: beq         $t7, $zero, L_1515E42C
    if (ctx->r15 == 0) {
        // 0x1515E33C: lw          $a2, 0x68($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X68);
            goto L_1515E42C;
    }
    // 0x1515E33C: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x1515E340: addiu       $t6, $sp, 0x4C
    ctx->r14 = ADD32(ctx->r29, 0X4C);
    // 0x1515E344: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x1515E348: addiu       $t9, $sp, 0x47
    ctx->r25 = ADD32(ctx->r29, 0X47);
    // 0x1515E34C: addiu       $t4, $sp, 0x46
    ctx->r12 = ADD32(ctx->r29, 0X46);
    // 0x1515E350: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x1515E354: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1515E358: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1515E35C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1515E360: jal         0x1515E43C
    // 0x1515E364: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    func_1515E43C(rdram, ctx);
        goto after_1;
    // 0x1515E364: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    after_1:
    // 0x1515E368: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x1515E36C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x1515E370: addiu       $t0, $sp, 0x4C
    ctx->r8 = ADD32(ctx->r29, 0X4C);
    // 0x1515E374: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x1515E378: addiu       $t3, $sp, 0x4B
    ctx->r11 = ADD32(ctx->r29, 0X4B);
    // 0x1515E37C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x1515E380: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
L_1515E384:
    // 0x1515E384: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x1515E388: lbu         $t7, 0x47($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X47);
    // 0x1515E38C: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x1515E390: subu        $t5, $t1, $v0
    ctx->r13 = SUB32(ctx->r9, ctx->r2);
    // 0x1515E394: multu       $t5, $t7
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E398: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1515E39C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1515E3A0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x1515E3A4: mflo        $t6
    ctx->r14 = lo;
    // 0x1515E3A8: sra         $t8, $t6, 8
    ctx->r24 = S32(SIGNED(ctx->r14) >> 8);
    // 0x1515E3AC: addu        $v1, $v0, $t8
    ctx->r3 = ADD32(ctx->r2, ctx->r24);
    // 0x1515E3B0: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x1515E3B4: multu       $t4, $t9
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E3B8: mflo        $t5
    ctx->r13 = lo;
    // 0x1515E3BC: sra         $t7, $t5, 8
    ctx->r15 = S32(SIGNED(ctx->r13) >> 8);
    // 0x1515E3C0: sb          $t7, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r15;
    // 0x1515E3C4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x1515E3C8: lbu         $t8, 0x46($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X46);
    // 0x1515E3CC: lbu         $t7, -0x1($a2)
    ctx->r15 = MEM_BU(ctx->r6, -0X1);
    // 0x1515E3D0: subu        $t6, $t1, $v0
    ctx->r14 = SUB32(ctx->r9, ctx->r2);
    // 0x1515E3D4: multu       $t6, $t8
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E3D8: mflo        $t9
    ctx->r25 = lo;
    // 0x1515E3DC: sra         $t4, $t9, 8
    ctx->r12 = S32(SIGNED(ctx->r25) >> 8);
    // 0x1515E3E0: addu        $v1, $v0, $t4
    ctx->r3 = ADD32(ctx->r2, ctx->r12);
    // 0x1515E3E4: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x1515E3E8: multu       $t7, $t5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E3EC: mflo        $t6
    ctx->r14 = lo;
    // 0x1515E3F0: sra         $t8, $t6, 8
    ctx->r24 = S32(SIGNED(ctx->r14) >> 8);
    // 0x1515E3F4: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x1515E3F8: lbu         $t9, -0x1($a1)
    ctx->r25 = MEM_BU(ctx->r5, -0X1);
    // 0x1515E3FC: andi        $t7, $t8, 0xFF
    ctx->r15 = ctx->r24 & 0XFF;
    // 0x1515E400: multu       $t9, $t2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515E404: mflo        $t4
    ctx->r12 = lo;
    // 0x1515E408: sra         $t5, $t4, 3
    ctx->r13 = S32(SIGNED(ctx->r12) >> 3);
    // 0x1515E40C: addu        $a3, $t5, $t7
    ctx->r7 = ADD32(ctx->r13, ctx->r15);
    // 0x1515E410: slti        $at, $a3, 0x100
    ctx->r1 = SIGNED(ctx->r7) < 0X100 ? 1 : 0;
    // 0x1515E414: bnel        $at, $zero, L_1515E424
    if (ctx->r1 != 0) {
        // 0x1515E418: sb          $a3, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r7;
            goto L_1515E424;
    }
    goto skip_0;
    // 0x1515E418: sb          $a3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r7;
    skip_0:
    // 0x1515E41C: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x1515E420: sb          $a3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r7;
L_1515E424:
    // 0x1515E424: bne         $a2, $t3, L_1515E384
    if (ctx->r6 != ctx->r11) {
        // 0x1515E428: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_1515E384;
    }
    // 0x1515E428: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_1515E42C:
    // 0x1515E42C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1515E430: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x1515E434: jr          $ra
    // 0x1515E438: nop

    return;
    return;
    // 0x1515E438: nop

;}
RECOMP_FUNC void func_151A787C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A787C: lh          $v1, 0x38($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X38);
    // 0x151A7880: lh          $t6, 0x54($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X54);
    // 0x151A7884: addiu       $v0, $a0, 0x50
    ctx->r2 = ADD32(ctx->r4, 0X50);
    // 0x151A7888: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x151A788C: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151A7890: beql        $at, $zero, L_151A78B0
    if (ctx->r1 == 0) {
        // 0x151A7894: lh          $t9, 0x8($v0)
        ctx->r25 = MEM_H(ctx->r2, 0X8);
            goto L_151A78B0;
    }
    goto skip_0;
    // 0x151A7894: lh          $t9, 0x8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8);
    skip_0:
    // 0x151A7898: lh          $t7, 0x56($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X56);
    // 0x151A789C: multu       $v1, $t7
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A78A0: mflo        $t8
    ctx->r24 = lo;
    // 0x151A78A4: sb          $t8, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = ctx->r24;
    // 0x151A78A8: nop

    // 0x151A78AC: lh          $t9, 0x8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8);
L_151A78B0:
    // 0x151A78B0: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x151A78B4: beql        $at, $zero, L_151A78EC
    if (ctx->r1 == 0) {
        // 0x151A78B8: lh          $t8, 0x2($v0)
        ctx->r24 = MEM_H(ctx->r2, 0X2);
            goto L_151A78EC;
    }
    goto skip_1;
    // 0x151A78B8: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    skip_1:
    // 0x151A78BC: lh          $t0, 0xA($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XA);
    // 0x151A78C0: lw          $t1, -0x161C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X161C);
    // 0x151A78C4: lh          $t4, 0x34($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X34);
    // 0x151A78C8: lh          $t6, 0x36($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X36);
    // 0x151A78CC: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A78D0: mflo        $t3
    ctx->r11 = lo;
    // 0x151A78D4: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x151A78D8: addu        $t7, $t6, $t3
    ctx->r15 = ADD32(ctx->r14, ctx->r11);
    // 0x151A78DC: sh          $t5, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r13;
    // 0x151A78E0: sh          $t7, 0x36($a0)
    MEM_H(0X36, ctx->r4) = ctx->r15;
    // 0x151A78E4: lh          $v1, 0x38($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X38);
    // 0x151A78E8: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
L_151A78EC:
    // 0x151A78EC: multu       $v1, $t8
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A78F0: mflo        $t9
    ctx->r25 = lo;
    // 0x151A78F4: sb          $t9, 0x42($a0)
    MEM_B(0X42, ctx->r4) = ctx->r25;
    // 0x151A78F8: sb          $t9, 0x41($a0)
    MEM_B(0X41, ctx->r4) = ctx->r25;
    // 0x151A78FC: sb          $t9, 0x40($a0)
    MEM_B(0X40, ctx->r4) = ctx->r25;
    // 0x151A7900: jr          $ra
    // 0x151A7904: nop

    return;
    return;
    // 0x151A7904: nop

;}
RECOMP_FUNC void func_1514DD8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DD8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514DD90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DD94: jal         0x1514DCAC
    // 0x1514DD98: nop

    func_1514DCAC(rdram, ctx);
        goto after_0;
    // 0x1514DD98: nop

    after_0:
    // 0x1514DD9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514DDA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514DDA4: jr          $ra
    // 0x1514DDA8: nop

    return;
    return;
    // 0x1514DDA8: nop

;}
RECOMP_FUNC void func_1506B50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B50C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506B510: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1506B514: sh          $zero, 0x21C($t6)
    MEM_H(0X21C, ctx->r14) = 0;
    // 0x1506B518: jr          $ra
    // 0x1506B51C: nop

    return;
    return;
    // 0x1506B51C: nop

;}
RECOMP_FUNC void func_1506BE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506BE84: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506BE88: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1506BE8C: sb          $zero, 0x89($t6)
    MEM_B(0X89, ctx->r14) = 0;
    // 0x1506BE90: jr          $ra
    // 0x1506BE94: nop

    return;
    return;
    // 0x1506BE94: nop

;}
RECOMP_FUNC void func_150593C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150593C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150593C8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x150593CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150593D0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x150593D4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x150593D8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x150593DC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x150593E0: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x150593E4: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x150593E8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150593EC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150593F0: lhu         $a0, 0x36($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X36);
    // 0x150593F4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x150593F8: jal         0x1505A184
    // 0x150593FC: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_1505A184(rdram, ctx);
        goto after_0;
    // 0x150593FC: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x15059400: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x15059404: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15059408: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1505940C: lwc1        $f0, 0x16C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X16C);
    // 0x15059410: lwc1        $f2, 0x170($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X170);
    // 0x15059414: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x15059418: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1505941C: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x15059420: swc1        $f10, 0x16C($v0)
    MEM_W(0X16C, ctx->r2) = ctx->f10.u32l;
    // 0x15059424: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15059428: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x1505942C: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x15059430: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x15059434: swc1        $f6, 0x170($v0)
    MEM_W(0X170, ctx->r2) = ctx->f6.u32l;
    // 0x15059438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1505943C: jr          $ra
    // 0x15059440: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15059440: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_151F85C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F85C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151F85C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F85CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151F85D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151F85D4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x151F85D8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151F85DC: addiu       $t6, $t6, 0x1880
    ctx->r14 = ADD32(ctx->r14, 0X1880);
    // 0x151F85E0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x151F85E4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x151F85E8: bne         $t7, $zero, L_151F85F8
    if (ctx->r15 != 0) {
        // 0x151F85EC: nop
    
            goto L_151F85F8;
    }
    // 0x151F85EC: nop

    // 0x151F85F0: b           L_151F86A0
    // 0x151F85F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151F86A0;
    // 0x151F85F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151F85F8:
    // 0x151F85F8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x151F85FC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151F8600: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
    // 0x151F8604: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x151F8608: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x151F860C: sw          $t0, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r8;
    // 0x151F8610: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x151F8614: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151F8618: sw          $t2, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r10;
    // 0x151F861C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x151F8620: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x151F8624: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x151F8628: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x151F862C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x151F8630: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x151F8634: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x151F8638: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x151F863C: sw          $t8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r24;
    // 0x151F8640: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x151F8644: sw          $zero, 0x201C($t0)
    MEM_W(0X201C, ctx->r8) = 0;
    // 0x151F8648: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x151F864C: sw          $zero, 0x2020($t1)
    MEM_W(0X2020, ctx->r9) = 0;
    // 0x151F8650: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x151F8654: sw          $zero, 0x3BA0($t2)
    MEM_W(0X3BA0, ctx->r10) = 0;
    // 0x151F8658: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x151F865C: jal         0x151F8088
    // 0x151F8660: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151F8088(rdram, ctx);
        goto after_0;
    // 0x151F8660: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x151F8664: bne         $v0, $zero, L_151F8674
    if (ctx->r2 != 0) {
        // 0x151F8668: nop
    
            goto L_151F8674;
    }
    // 0x151F8668: nop

    // 0x151F866C: b           L_151F86A0
    // 0x151F8670: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151F86A0;
    // 0x151F8670: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151F8674:
    // 0x151F8674: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x151F8678: addiu       $at, $t3, 0x7FFF
    ctx->r1 = ADD32(ctx->r11, 0X7FFF);
    // 0x151F867C: sw          $zero, 0x475($at)
    MEM_W(0X475, ctx->r1) = 0;
    // 0x151F8680: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x151F8684: addiu       $a1, $zero, 0x900
    ctx->r5 = ADD32(0, 0X900);
    // 0x151F8688: jal         0x100226F0
    // 0x151F868C: addiu       $a0, $a0, 0x6A64
    ctx->r4 = ADD32(ctx->r4, 0X6A64);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x151F868C: addiu       $a0, $a0, 0x6A64
    ctx->r4 = ADD32(ctx->r4, 0X6A64);
    after_1:
    // 0x151F8690: b           L_151F86A0
    // 0x151F8694: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_151F86A0;
    // 0x151F8694: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x151F8698: b           L_151F86A0
    // 0x151F869C: nop

        goto L_151F86A0;
    // 0x151F869C: nop

L_151F86A0:
    // 0x151F86A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F86A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151F86A8: jr          $ra
    // 0x151F86AC: nop

    return;
    return;
    // 0x151F86AC: nop

;}
RECOMP_FUNC void func_150CFE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CFE3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150CFE40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150CFE44: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150CFE48: lbu         $t6, 0x3D($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X3D);
    // 0x150CFE4C: lw          $a1, 0x34($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X34);
    // 0x150CFE50: lbu         $a2, 0x3C($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X3C);
    // 0x150CFE54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150CFE58: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x150CFE5C: lw          $a0, 0x40($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X40);
    // 0x150CFE60: jal         0x10022EC0
    // 0x150CFE64: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x150CFE64: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x150CFE68: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x150CFE6C: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x150CFE70: lbu         $t9, 0x15($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X15);
    // 0x150CFE74: lbu         $t3, 0x14($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X14);
    // 0x150CFE78: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x150CFE7C: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x150CFE80: lw          $t2, 0x18($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18);
    // 0x150CFE84: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x150CFE88: sb          $zero, 0x0($t4)
    MEM_B(0X0, ctx->r12) = 0;
    // 0x150CFE8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150CFE90: jr          $ra
    // 0x150CFE94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x150CFE94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1515BE50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515BE50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1515BE54: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1515BE58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1515BE5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1515BE60: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1515BE64: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1515BE68: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x1515BE6C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x1515BE70: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x1515BE74: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x1515BE78: bne         $t6, $zero, L_1515BE88
    if (ctx->r14 != 0) {
        // 0x1515BE7C: lw          $a2, 0x34($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X34);
            goto L_1515BE88;
    }
    // 0x1515BE7C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x1515BE80: b           L_1515BF3C
    // 0x1515BE84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1515BF3C;
    // 0x1515BE84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1515BE88:
    // 0x1515BE88: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x1515BE8C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1515BE90: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1515BE94: addiu       $a2, $a2, 0x50
    ctx->r6 = ADD32(ctx->r6, 0X50);
    // 0x1515BE98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1515BE9C: jal         0x15167A68
    // 0x1515BEA0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x1515BEA0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x1515BEA4: bne         $v0, $zero, L_1515BEB4
    if (ctx->r2 != 0) {
        // 0x1515BEA8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1515BEB4;
    }
    // 0x1515BEA8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1515BEAC: b           L_1515BF3C
    // 0x1515BEB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1515BF3C;
    // 0x1515BEB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1515BEB4:
    // 0x1515BEB4: addiu       $a0, $v1, 0x18
    ctx->r4 = ADD32(ctx->r3, 0X18);
    // 0x1515BEB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1515BEBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x1515BEC0: jal         0x10022EC0
    // 0x1515BEC4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1515BEC4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_1:
    // 0x1515BEC8: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x1515BECC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x1515BED0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1515BED4: lwc1        $f4, 0x14($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X14);
    // 0x1515BED8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x1515BEDC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1515BEE0: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x1515BEE4: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x1515BEE8: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x1515BEEC: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x1515BEF0: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x1515BEF4: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x1515BEF8: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    // 0x1515BEFC: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x1515BF00: lwc1        $f10, 0x14($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X14);
    // 0x1515BF04: swc1        $f10, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f10.u32l;
    // 0x1515BF08: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x1515BF0C: lwc1        $f16, 0x18($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X18);
    // 0x1515BF10: swc1        $f16, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f16.u32l;
    // 0x1515BF14: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x1515BF18: lwc1        $f18, 0x1C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x1515BF1C: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x1515BF20: sw          $t5, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r13;
    // 0x1515BF24: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x1515BF28: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x1515BF2C: swc1        $f0, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f0.u32l;
    // 0x1515BF30: swc1        $f0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f0.u32l;
    // 0x1515BF34: swc1        $f0, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f0.u32l;
    // 0x1515BF38: swc1        $f18, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f18.u32l;
L_1515BF3C:
    // 0x1515BF3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1515BF40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1515BF44: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1515BF48: jr          $ra
    // 0x1515BF4C: nop

    return;
    return;
    // 0x1515BF4C: nop

;}
RECOMP_FUNC void func_1508EB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508EB90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1508EB94: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x1508EB98: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x1508EB9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1508EBA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1508EBA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1508EBA8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x1508EBAC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1508EBB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1508EBB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1508EBB8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1508EBBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1508EBC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1508EBC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1508EBC8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1508EBCC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1508EBD0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1508EBD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1508EBD8: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1508EBDC: lbu         $v0, -0x3BF1($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BF1);
    // 0x1508EBE0: jal         0x1509BFB0
    // 0x1508EBE4: ori         $a1, $v0, 0x2000
    ctx->r5 = ctx->r2 | 0X2000;
    func_1509BFB0(rdram, ctx);
        goto after_0;
    // 0x1508EBE4: ori         $a1, $v0, 0x2000
    ctx->r5 = ctx->r2 | 0X2000;
    after_0:
    // 0x1508EBE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1508EBEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1508EBF0: jr          $ra
    // 0x1508EBF4: nop

    return;
    return;
    // 0x1508EBF4: nop

;}
RECOMP_FUNC void func_1501A764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501A764: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1501A768: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1501A76C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x1501A770: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1501A774: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1501A778: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x1501A77C: lh          $t6, 0x3A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3A);
    // 0x1501A780: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1501A784: addiu       $t8, $t8, -0x62F0
    ctx->r24 = ADD32(ctx->r24, -0X62F0);
    // 0x1501A788: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x1501A78C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x1501A790: addiu       $t9, $sp, 0x34
    ctx->r25 = ADD32(ctx->r29, 0X34);
    // 0x1501A794: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x1501A798: addiu       $t1, $sp, 0x2C
    ctx->r9 = ADD32(ctx->r29, 0X2C);
    // 0x1501A79C: addiu       $t2, $sp, 0x28
    ctx->r10 = ADD32(ctx->r29, 0X28);
    // 0x1501A7A0: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x1501A7A4: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x1501A7A8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x1501A7AC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1501A7B0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1501A7B4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1501A7B8: jal         0x150A7A00
    // 0x1501A7BC: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    func_150A7A00(rdram, ctx);
        goto after_0;
    // 0x1501A7BC: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    after_0:
    // 0x1501A7C0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1501A7C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1501A7C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1501A7CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1501A7D0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1501A7D4: lh          $a2, 0x3A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X3A);
    // 0x1501A7D8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1501A7DC: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1501A7E0: addiu       $a1, $a1, -0x19D8
    ctx->r5 = ADD32(ctx->r5, -0X19D8);
    // 0x1501A7E4: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x1501A7E8: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x1501A7EC: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x1501A7F0: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x1501A7F4: addu        $v0, $t3, $v1
    ctx->r2 = ADD32(ctx->r11, ctx->r3);
    // 0x1501A7F8: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1501A7FC: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x1501A800: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1501A804: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x1501A808: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x1501A80C: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x1501A810: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x1501A814: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x1501A818: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1501A81C: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x1501A820: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1501A824: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1501A828: nop

    // 0x1501A82C: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1501A830: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1501A834: swc1        $f16, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f16.u32l;
    // 0x1501A838: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x1501A83C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1501A840: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x1501A844: addu        $v0, $t5, $v1
    ctx->r2 = ADD32(ctx->r13, ctx->r3);
    // 0x1501A848: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1501A84C: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x1501A850: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1501A854: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1501A858: nop

    // 0x1501A85C: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x1501A860: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x1501A864: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x1501A868: lbu         $t0, -0x1640($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1640);
    // 0x1501A86C: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x1501A870: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1501A874: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x1501A878: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1501A87C: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    // 0x1501A880: lh          $t2, 0x44($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X44);
    // 0x1501A884: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1501A888: lh          $t3, 0x4C($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X4C);
    // 0x1501A88C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x1501A890: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x1501A894: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x1501A898: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1501A89C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1501A8A0: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1501A8A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1501A8A8: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1501A8AC: mul.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x1501A8B0: swc1        $f16, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f16.u32l;
    // 0x1501A8B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1501A8B8: jr          $ra
    // 0x1501A8BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x1501A8BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_150FF840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FF840: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x150FF844: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x150FF848: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150FF84C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x150FF850: sw          $a1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r5;
    // 0x150FF854: sw          $a2, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r6;
    // 0x150FF858: sw          $a3, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r7;
    // 0x150FF85C: addiu       $t6, $sp, 0xF8
    ctx->r14 = ADD32(ctx->r29, 0XF8);
    // 0x150FF860: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150FF864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150FF868: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x150FF86C: addiu       $a2, $sp, 0x110
    ctx->r6 = ADD32(ctx->r29, 0X110);
    // 0x150FF870: jal         0x150FFCC8
    // 0x150FF874: addiu       $a3, $sp, 0x104
    ctx->r7 = ADD32(ctx->r29, 0X104);
    func_150FFCC8(rdram, ctx);
        goto after_0;
    // 0x150FF874: addiu       $a3, $sp, 0x104
    ctx->r7 = ADD32(ctx->r29, 0X104);
    after_0:
    // 0x150FF878: jal         0x151D5148
    // 0x150FF87C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151D5148(rdram, ctx);
        goto after_1;
    // 0x150FF87C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x150FF880: lw          $t7, 0x1D4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1D4);
    // 0x150FF884: beql        $t7, $zero, L_150FF9CC
    if (ctx->r15 == 0) {
        // 0x150FF888: lbu         $t2, 0x12F($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0X12F);
            goto L_150FF9CC;
    }
    goto skip_0;
    // 0x150FF888: lbu         $t2, 0x12F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X12F);
    skip_0:
    // 0x150FF88C: lbu         $t8, 0x74($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X74);
    // 0x150FF890: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x150FF894: addiu       $a0, $sp, 0x11C
    ctx->r4 = ADD32(ctx->r29, 0X11C);
    // 0x150FF898: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x150FF89C: beq         $t9, $at, L_150FF9C8
    if (ctx->r25 == ctx->r1) {
        // 0x150FF8A0: lbu         $a1, 0x137($sp)
        ctx->r5 = MEM_BU(ctx->r29, 0X137);
            goto L_150FF9C8;
    }
    // 0x150FF8A0: lbu         $a1, 0x137($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X137);
    // 0x150FF8A4: jal         0x151D3F14
    // 0x150FF8A8: lw          $a2, 0x138($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X138);
    func_151D3F14(rdram, ctx);
        goto after_2;
    // 0x150FF8A8: lw          $a2, 0x138($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X138);
    after_2:
    // 0x150FF8AC: jal         0x150ADA68
    // 0x150FF8B0: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150FF8B0: nop

    after_3:
    // 0x150FF8B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FF8B8: lwc1        $f4, 0x2170($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2170);
    // 0x150FF8BC: lui         $at, 0x4596
    ctx->r1 = S32(0X4596 << 16);
    // 0x150FF8C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FF8C4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150FF8C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FF8CC: lwc1        $f4, 0x2174($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2174);
    // 0x150FF8D0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150FF8D4: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150FF8D8: jal         0x150ADA68
    // 0x150FF8DC: swc1        $f6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150FF8DC: swc1        $f6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x150FF8E0: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x150FF8E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FF8E8: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x150FF8EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FF8F0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150FF8F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FF8F8: lwc1        $f8, 0x2178($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2178);
    // 0x150FF8FC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150FF900: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150FF904: jal         0x150ADA20
    // 0x150FF908: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150FF908: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x150FF90C: jal         0x150ADA20
    // 0x150FF910: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150FF910: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    after_6:
    // 0x150FF914: jal         0x150ADA68
    // 0x150FF918: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150FF918: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    after_7:
    // 0x150FF91C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150FF920: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x150FF924: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x150FF928: addiu       $t0, $sp, 0xF0
    ctx->r8 = ADD32(ctx->r29, 0XF0);
    // 0x150FF92C: divu        $zero, $t1, $at
    lo = S32(U32(ctx->r9) / U32(ctx->r1)); hi = S32(U32(ctx->r9) % U32(ctx->r1));
    // 0x150FF930: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x150FF934: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FF938: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x150FF93C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FF940: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150FF944: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150FF948: lbu         $t0, 0x137($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X137);
    // 0x150FF94C: lw          $t1, 0x138($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X138);
    // 0x150FF950: mfhi        $t2
    ctx->r10 = hi;
    // 0x150FF954: andi        $t5, $t4, 0x7F
    ctx->r13 = ctx->r12 & 0X7F;
    // 0x150FF958: addiu       $t6, $t5, 0x80
    ctx->r14 = ADD32(ctx->r13, 0X80);
    // 0x150FF95C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150FF960: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x150FF964: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x150FF968: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150FF96C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x150FF970: addiu       $t7, $sp, 0x11C
    ctx->r15 = ADD32(ctx->r29, 0X11C);
    // 0x150FF974: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150FF978: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150FF97C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x150FF980: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x150FF984: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x150FF988: addiu       $a3, $a3, 0x213C
    ctx->r7 = ADD32(ctx->r7, 0X213C);
    // 0x150FF98C: addiu       $a2, $a2, 0x2130
    ctx->r6 = ADD32(ctx->r6, 0X2130);
    // 0x150FF990: lbu         $a1, -0x7450($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X7450);
    // 0x150FF994: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150FF998: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x150FF99C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150FF9A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150FF9A4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150FF9A8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x150FF9AC: jal         0x15102B38
    // 0x150FF9B0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    func_15102B38(rdram, ctx);
        goto after_8;
    // 0x150FF9B0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    after_8:
    // 0x150FF9B4: addiu       $a0, $sp, 0x11C
    ctx->r4 = ADD32(ctx->r29, 0X11C);
    // 0x150FF9B8: addiu       $a1, $sp, 0x110
    ctx->r5 = ADD32(ctx->r29, 0X110);
    // 0x150FF9BC: lbu         $a2, 0x137($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X137);
    // 0x150FF9C0: jal         0x150FFD84
    // 0x150FF9C4: lw          $a3, 0x138($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X138);
    func_150FFD84(rdram, ctx);
        goto after_9;
    // 0x150FF9C4: lw          $a3, 0x138($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X138);
    after_9:
L_150FF9C8:
    // 0x150FF9C8: lbu         $t2, 0x12F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X12F);
L_150FF9CC:
    // 0x150FF9CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FF9D0: lwc1        $f14, 0x110($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X110);
    // 0x150FF9D4: beq         $t2, $zero, L_150FFAA8
    if (ctx->r10 == 0) {
        // 0x150FF9D8: lwc1        $f16, 0x11C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X11C);
            goto L_150FFAA8;
    }
    // 0x150FF9D8: lwc1        $f16, 0x11C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x150FF9DC: lwc1        $f0, 0x217C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X217C);
    // 0x150FF9E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FF9E4: lwc1        $f2, 0x2180($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2180);
    // 0x150FF9E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FF9EC: lwc1        $f12, 0x2184($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X2184);
    // 0x150FF9F0: lwc1        $f18, 0x114($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X114);
    // 0x150FF9F4: mul.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x150FF9F8: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x150FF9FC: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x150FFA00: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150FFA04: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x150FFA08: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x150FFA0C: addiu       $a3, $zero, 0x32
    ctx->r7 = ADD32(0, 0X32);
    // 0x150FFA10: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x150FFA14: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150FFA18: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    // 0x150FFA1C: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x150FFA20: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x150FFA24: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150FFA28: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150FFA2C: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150FFA30: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
    // 0x150FFA34: mul.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x150FFA38: add.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150FFA3C: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
    // 0x150FFA40: mul.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150FFA44: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150FFA48: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x150FFA4C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150FFA50: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150FFA54: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
    // 0x150FFA58: mul.s       $f8, $f14, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x150FFA5C: add.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150FFA60: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    // 0x150FFA64: mul.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x150FFA68: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150FFA6C: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x150FFA70: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x150FFA74: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150FFA78: jal         0x150FFB6C
    // 0x150FFA7C: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    func_150FFB6C(rdram, ctx);
        goto after_10;
    // 0x150FFA7C: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x150FFA80: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x150FFA84: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x150FFA88: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x150FFA8C: jal         0x150FFB6C
    // 0x150FFA90: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_150FFB6C(rdram, ctx);
        goto after_11;
    // 0x150FFA90: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_11:
    // 0x150FFA94: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    // 0x150FFA98: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x150FFA9C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x150FFAA0: jal         0x150FFB6C
    // 0x150FFAA4: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    func_150FFB6C(rdram, ctx);
        goto after_12;
    // 0x150FFAA4: addiu       $a3, $zero, 0x31
    ctx->r7 = ADD32(0, 0X31);
    after_12:
L_150FFAA8:
    // 0x150FFAA8: lbu         $t3, 0x133($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X133);
    // 0x150FFAAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FFAB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150FFAB4: beq         $t3, $zero, L_150FFB50
    if (ctx->r11 == 0) {
        // 0x150FFAB8: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_150FFB50;
    }
    // 0x150FFAB8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150FFABC: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150FFAC0: addiu       $t5, $sp, 0x68
    ctx->r13 = ADD32(ctx->r29, 0X68);
    // 0x150FFAC4: beq         $v0, $zero, L_150FFAD4
    if (ctx->r2 == 0) {
        // 0x150FFAC8: addiu       $t4, $v0, 0xB0
        ctx->r12 = ADD32(ctx->r2, 0XB0);
            goto L_150FFAD4;
    }
    // 0x150FFAC8: addiu       $t4, $v0, 0xB0
    ctx->r12 = ADD32(ctx->r2, 0XB0);
    // 0x150FFACC: b           L_150FFAD8
    // 0x150FFAD0: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
        goto L_150FFAD8;
    // 0x150FFAD0: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
L_150FFAD4:
    // 0x150FFAD4: sw          $t5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r13;
L_150FFAD8:
    // 0x150FFAD8: lwc1        $f0, 0x2188($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2188);
    // 0x150FFADC: lwc1        $f14, 0x110($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X110);
    // 0x150FFAE0: lwc1        $f18, 0x114($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X114);
    // 0x150FFAE4: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x150FFAE8: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x150FFAEC: lwc1        $f16, 0x11C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x150FFAF0: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x150FFAF4: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150FFAF8: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x150FFAFC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x150FFB00: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x150FFB04: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x150FFB08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FFB0C: lw          $a2, 0x120($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X120);
    // 0x150FFB10: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x150FFB14: lw          $a3, 0x124($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X124);
    // 0x150FFB18: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150FFB1C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x150FFB20: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150FFB24: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150FFB28: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x150FFB2C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150FFB30: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x150FFB34: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x150FFB38: jal         0x15081690
    // 0x150FFB3C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    func_15081690(rdram, ctx);
        goto after_13;
    // 0x150FFB3C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x150FFB40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150FFB44: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x150FFB48: jal         0x15081E78
    // 0x150FFB4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_15081E78(rdram, ctx);
        goto after_14;
    // 0x150FFB4C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_14:
L_150FFB50:
    // 0x150FFB50: jal         0x150FFC3C
    // 0x150FFB54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150FFC3C(rdram, ctx);
        goto after_15;
    // 0x150FFB54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x150FFB58: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x150FFB5C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x150FFB60: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    // 0x150FFB64: jr          $ra
    // 0x150FFB68: nop

    return;
    return;
    // 0x150FFB68: nop

;}
RECOMP_FUNC void func_150F1A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F1A00: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150F1A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F1A08: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x150F1A0C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150F1A10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150F1A14: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150F1A18: addiu       $t6, $t6, -0x7500
    ctx->r14 = ADD32(ctx->r14, -0X7500);
    // 0x150F1A1C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x150F1A20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150F1A24: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x150F1A28: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x150F1A2C: lhu         $at, 0x4($t6)
    ctx->r1 = MEM_HU(ctx->r14, 0X4);
    // 0x150F1A30: sh          $at, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r1;
    // 0x150F1A34: lw          $v1, 0x2E4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X2E4);
    // 0x150F1A38: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x150F1A3C: andi        $t0, $v1, 0x3
    ctx->r8 = ctx->r3 & 0X3;
    // 0x150F1A40: bne         $a1, $t0, L_150F1A4C
    if (ctx->r5 != ctx->r8) {
        // 0x150F1A44: andi        $t1, $v1, 0xC
        ctx->r9 = ctx->r3 & 0XC;
            goto L_150F1A4C;
    }
    // 0x150F1A44: andi        $t1, $v1, 0xC
    ctx->r9 = ctx->r3 & 0XC;
    // 0x150F1A48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150F1A4C:
    // 0x150F1A4C: bnel        $t1, $at, L_150F1A5C
    if (ctx->r9 != ctx->r1) {
        // 0x150F1A50: sll         $t2, $v0, 1
        ctx->r10 = S32(ctx->r2 << 1);
            goto L_150F1A5C;
    }
    goto skip_0;
    // 0x150F1A50: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    skip_0:
    // 0x150F1A54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x150F1A58: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
L_150F1A5C:
    // 0x150F1A5C: addu        $t3, $a2, $t2
    ctx->r11 = ADD32(ctx->r6, ctx->r10);
    // 0x150F1A60: lhu         $v1, 0x0($t3)
    ctx->r3 = MEM_HU(ctx->r11, 0X0);
    // 0x150F1A64: lw          $t5, -0x161C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X161C);
    // 0x150F1A68: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150F1A6C: addiu       $a0, $a0, -0x3D68
    ctx->r4 = ADD32(ctx->r4, -0X3D68);
    // 0x150F1A70: multu       $v1, $t5
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150F1A74: lh          $t4, 0x14($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X14);
    // 0x150F1A78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F1A7C: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x150F1A80: mflo        $t8
    ctx->r24 = lo;
    // 0x150F1A84: addu        $t7, $t4, $t8
    ctx->r15 = ADD32(ctx->r12, ctx->r24);
    // 0x150F1A88: sh          $t7, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r15;
    // 0x150F1A8C: lh          $t6, 0x14($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X14);
    // 0x150F1A90: lwc1        $f8, 0x18E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X18E8);
    // 0x150F1A94: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x150F1A98: nop

    // 0x150F1A9C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150F1AA0: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150F1AA4: jal         0x15047C00
    // 0x150F1AA8: nop

    cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x150F1AA8: nop

    after_0:
    // 0x150F1AAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F1AB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F1AB4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150F1AB8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150F1ABC: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x150F1AC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F1AC4: lwc1        $f6, 0x18EC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X18EC);
    // 0x150F1AC8: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x150F1ACC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150F1AD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F1AD4: lwc1        $f10, 0x18F0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X18F0);
    // 0x150F1AD8: lw          $v0, 0x1D4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1D4);
    // 0x150F1ADC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150F1AE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150F1AE4: addiu       $a2, $v0, 0xF80
    ctx->r6 = ADD32(ctx->r2, 0XF80);
    // 0x150F1AE8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150F1AEC: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
L_150F1AF0:
    // 0x150F1AF0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150F1AF4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150F1AF8: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150F1AFC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150F1B00: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150F1B04: beql        $v1, $a1, L_150F1B28
    if (ctx->r3 == ctx->r5) {
        // 0x150F1B08: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_150F1B28;
    }
    goto skip_1;
    // 0x150F1B08: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    skip_1:
L_150F1B0C:
    // 0x150F1B0C: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150F1B10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150F1B14: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x150F1B18: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150F1B1C: bne         $v1, $a1, L_150F1B0C
    if (ctx->r3 != ctx->r5) {
        // 0x150F1B20: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_150F1B0C;
    }
    // 0x150F1B20: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x150F1B24: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_150F1B28:
    // 0x150F1B28: swc1        $f18, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f18.u32l;
    // 0x150F1B2C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x150F1B30: bne         $a0, $a1, L_150F1AF0
    if (ctx->r4 != ctx->r5) {
        // 0x150F1B34: addiu       $a2, $a2, 0x10
        ctx->r6 = ADD32(ctx->r6, 0X10);
            goto L_150F1AF0;
    }
    // 0x150F1B34: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x150F1B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F1B3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150F1B40: jr          $ra
    // 0x150F1B44: nop

    return;
    return;
    // 0x150F1B44: nop

;}
RECOMP_FUNC void func_1511A494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511A494: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1511A498: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1511A49C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1511A4A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1511A4A4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x1511A4A8: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x1511A4AC: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x1511A4B0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x1511A4B4: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x1511A4B8: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x1511A4BC: addiu       $a2, $a2, -0x1610
    ctx->r6 = ADD32(ctx->r6, -0X1610);
    // 0x1511A4C0: addiu       $t0, $t0, -0x6BBC
    ctx->r8 = ADD32(ctx->r8, -0X6BBC);
    // 0x1511A4C4: addiu       $a3, $a3, -0x6CDC
    ctx->r7 = ADD32(ctx->r7, -0X6CDC);
    // 0x1511A4C8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x1511A4CC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x1511A4D0: lb          $v1, 0x6($a3)
    ctx->r3 = MEM_B(ctx->r7, 0X6);
L_1511A4D4:
    // 0x1511A4D4: lbu         $v0, 0x5($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X5);
    // 0x1511A4D8: beq         $a1, $v1, L_1511A4F8
    if (ctx->r5 == ctx->r3) {
        // 0x1511A4DC: nop
    
            goto L_1511A4F8;
    }
    // 0x1511A4DC: nop

    // 0x1511A4E0: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x1511A4E4: bnel        $t6, $v1, L_1511A518
    if (ctx->r14 != ctx->r3) {
        // 0x1511A4E8: addiu       $a3, $a3, 0xC
        ctx->r7 = ADD32(ctx->r7, 0XC);
            goto L_1511A518;
    }
    goto skip_0;
    // 0x1511A4E8: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    skip_0:
    // 0x1511A4EC: beq         $v0, $a0, L_1511A4F8
    if (ctx->r2 == ctx->r4) {
        // 0x1511A4F0: ori         $t7, $v0, 0x8000
        ctx->r15 = ctx->r2 | 0X8000;
            goto L_1511A4F8;
    }
    // 0x1511A4F0: ori         $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 | 0X8000;
    // 0x1511A4F4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_1511A4F8:
    // 0x1511A4F8: beq         $v0, $a0, L_1511A50C
    if (ctx->r2 == ctx->r4) {
        // 0x1511A4FC: nop
    
            goto L_1511A50C;
    }
    // 0x1511A4FC: nop

    // 0x1511A500: lhu         $t8, 0x54($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X54);
    // 0x1511A504: bnel        $v0, $t8, L_1511A518
    if (ctx->r2 != ctx->r24) {
        // 0x1511A508: addiu       $a3, $a3, 0xC
        ctx->r7 = ADD32(ctx->r7, 0XC);
            goto L_1511A518;
    }
    goto skip_1;
    // 0x1511A508: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    skip_1:
L_1511A50C:
    // 0x1511A50C: b           L_1511A520
    // 0x1511A510: or          $t1, $a3, $zero
    ctx->r9 = ctx->r7 | 0;
        goto L_1511A520;
    // 0x1511A510: or          $t1, $a3, $zero
    ctx->r9 = ctx->r7 | 0;
    // 0x1511A514: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
L_1511A518:
    // 0x1511A518: bnel        $a3, $t0, L_1511A4D4
    if (ctx->r7 != ctx->r8) {
        // 0x1511A51C: lb          $v1, 0x6($a3)
        ctx->r3 = MEM_B(ctx->r7, 0X6);
            goto L_1511A4D4;
    }
    goto skip_2;
    // 0x1511A51C: lb          $v1, 0x6($a3)
    ctx->r3 = MEM_B(ctx->r7, 0X6);
    skip_2:
L_1511A520:
    // 0x1511A520: beq         $t1, $zero, L_1511A6E8
    if (ctx->r9 == 0) {
        // 0x1511A524: lw          $t9, 0x6C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X6C);
            goto L_1511A6E8;
    }
    // 0x1511A524: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x1511A528: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x1511A52C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1511A530: bne         $v0, $zero, L_1511A56C
    if (ctx->r2 != 0) {
        // 0x1511A534: sra         $t6, $v0, 16
        ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
            goto L_1511A56C;
    }
    // 0x1511A534: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x1511A538: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x1511A53C: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x1511A540: jal         0x1511A410
    // 0x1511A544: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_1511A410(rdram, ctx);
        goto after_0;
    // 0x1511A544: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_0:
    // 0x1511A548: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x1511A54C: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x1511A550: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x1511A554: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x1511A558: or          $t4, $t3, $v0
    ctx->r12 = ctx->r11 | ctx->r2;
    // 0x1511A55C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1511A560: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x1511A564: b           L_1511A578
    // 0x1511A568: lw          $a1, -0x1610($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1610);
        goto L_1511A578;
    // 0x1511A568: lw          $a1, -0x1610($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1610);
L_1511A56C:
    // 0x1511A56C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x1511A570: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x1511A574: lw          $a1, -0x1610($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1610);
L_1511A578:
    // 0x1511A578: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x1511A57C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1511A580: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x1511A584: sra         $t0, $v0, 16
    ctx->r8 = S32(SIGNED(ctx->r2) >> 16);
    // 0x1511A588: andi        $t9, $t0, 0xFFFF
    ctx->r25 = ctx->r8 & 0XFFFF;
    // 0x1511A58C: sll         $t2, $t9, 16
    ctx->r10 = S32(ctx->r25 << 16);
    // 0x1511A590: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x1511A594: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
    // 0x1511A598: bne         $t3, $zero, L_1511A5A4
    if (ctx->r11 != 0) {
        // 0x1511A59C: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_1511A5A4;
    }
    // 0x1511A59C: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x1511A5A0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_1511A5A4:
    // 0x1511A5A4: lbu         $t4, 0x8($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X8);
    // 0x1511A5A8: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x1511A5AC: beql        $t4, $zero, L_1511A604
    if (ctx->r12 == 0) {
        // 0x1511A5B0: lbu         $v0, 0x7($t1)
        ctx->r2 = MEM_BU(ctx->r9, 0X7);
            goto L_1511A604;
    }
    goto skip_3;
    // 0x1511A5B0: lbu         $v0, 0x7($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X7);
    skip_3:
    // 0x1511A5B4: bgezl       $v1, L_1511A5D0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1511A5B8: lbu         $a0, 0x4($t1)
        ctx->r4 = MEM_BU(ctx->r9, 0X4);
            goto L_1511A5D0;
    }
    goto skip_4;
    // 0x1511A5B8: lbu         $a0, 0x4($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X4);
    skip_4:
    // 0x1511A5BC: lbu         $v0, 0x7($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X7);
    // 0x1511A5C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1511A5C4: b           L_1511A624
    // 0x1511A5C8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_1511A624;
    // 0x1511A5C8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1511A5CC: lbu         $a0, 0x4($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X4);
L_1511A5D0:
    // 0x1511A5D0: lbu         $v0, 0x7($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X7);
    // 0x1511A5D4: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1511A5D8: mflo        $t5
    ctx->r13 = lo;
    // 0x1511A5DC: slt         $at, $v1, $t5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x1511A5E0: bne         $at, $zero, L_1511A624
    if (ctx->r1 != 0) {
        // 0x1511A5E4: nop
    
            goto L_1511A624;
    }
    // 0x1511A5E4: nop

    // 0x1511A5E8: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x1511A5EC: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1511A5F0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x1511A5F4: mflo        $v1
    ctx->r3 = lo;
    // 0x1511A5F8: b           L_1511A624
    // 0x1511A5FC: nop

        goto L_1511A624;
    // 0x1511A5FC: nop

    // 0x1511A600: lbu         $v0, 0x7($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X7);
L_1511A604:
    // 0x1511A604: lbu         $t7, 0x4($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X4);
    // 0x1511A608: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1511A60C: mflo        $a0
    ctx->r4 = lo;
    // 0x1511A610: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1511A614: bne         $at, $zero, L_1511A624
    if (ctx->r1 != 0) {
        // 0x1511A618: nop
    
            goto L_1511A624;
    }
    // 0x1511A618: nop

    // 0x1511A61C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x1511A620: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_1511A624:
    // 0x1511A624: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x1511A628: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x1511A62C: bne         $v0, $zero, L_1511A638
    if (ctx->r2 != 0) {
        // 0x1511A630: nop
    
            goto L_1511A638;
    }
    // 0x1511A630: nop

    // 0x1511A634: break       7
    do_break(353478196);
L_1511A638:
    // 0x1511A638: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1511A63C: bne         $v0, $at, L_1511A650
    if (ctx->r2 != ctx->r1) {
        // 0x1511A640: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1511A650;
    }
    // 0x1511A640: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1511A644: bne         $v1, $at, L_1511A650
    if (ctx->r3 != ctx->r1) {
        // 0x1511A648: nop
    
            goto L_1511A650;
    }
    // 0x1511A648: nop

    // 0x1511A64C: break       6
    do_break(353478220);
L_1511A650:
    // 0x1511A650: mflo        $t9
    ctx->r25 = lo;
    // 0x1511A654: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x1511A658: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x1511A65C: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x1511A660: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1511A664: beq         $a1, $at, L_1511A678
    if (ctx->r5 == ctx->r1) {
        // 0x1511A668: sw          $zero, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = 0;
            goto L_1511A678;
    }
    // 0x1511A668: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1511A66C: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x1511A670: bne         $a1, $at, L_1511A680
    if (ctx->r5 != ctx->r1) {
        // 0x1511A674: addiu       $a2, $zero, 0x3E
        ctx->r6 = ADD32(0, 0X3E);
            goto L_1511A680;
    }
    // 0x1511A674: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
L_1511A678:
    // 0x1511A678: b           L_1511A680
    // 0x1511A67C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
        goto L_1511A680;
    // 0x1511A67C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_1511A680:
    // 0x1511A680: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x1511A684: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x1511A688: jal         0x1510D0EC
    // 0x1511A68C: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    func_1510D0EC(rdram, ctx);
        goto after_1;
    // 0x1511A68C: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    after_1:
    // 0x1511A690: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x1511A694: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x1511A698: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x1511A69C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x1511A6A0: beq         $t4, $zero, L_1511A6B4
    if (ctx->r12 == 0) {
        // 0x1511A6A4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_1511A6B4;
    }
    // 0x1511A6A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1511A6A8: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x1511A6AC: addu        $a2, $t5, $v0
    ctx->r6 = ADD32(ctx->r13, ctx->r2);
    // 0x1511A6B0: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_1511A6B4:
    // 0x1511A6B4: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x1511A6B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1511A6BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1511A6C0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x1511A6C4: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x1511A6C8: jal         0x1510D874
    // 0x1511A6CC: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    func_1510D874(rdram, ctx);
        goto after_2;
    // 0x1511A6CC: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    after_2:
    // 0x1511A6D0: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x1511A6D4: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x1511A6D8: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x1511A6DC: sll         $t7, $t0, 16
    ctx->r15 = S32(ctx->r8 << 16);
    // 0x1511A6E0: or          $t9, $t7, $v1
    ctx->r25 = ctx->r15 | ctx->r3;
    // 0x1511A6E4: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
L_1511A6E8:
    // 0x1511A6E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1511A6EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1511A6F0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x1511A6F4: jr          $ra
    // 0x1511A6F8: nop

    return;
    return;
    // 0x1511A6F8: nop

;}
RECOMP_FUNC void func_15003570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15003570: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15003574: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15003578: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x1500357C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x15003580: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x15003584: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x15003588: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1500358C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15003590: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x15003594: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15003598: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1500359C: jal         0x10003C40
    // 0x150035A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x150035A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x150035A4: lui         $s0, 0x1A
    ctx->r16 = S32(0X1A << 16);
    // 0x150035A8: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x150035AC: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x150035B0: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x150035B4: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x150035B8: addiu       $s0, $s0, 0x37E0
    ctx->r16 = ADD32(ctx->r16, 0X37E0);
    // 0x150035BC: addiu       $s5, $s5, -0x3BBC
    ctx->r21 = ADD32(ctx->r21, -0X3BBC);
    // 0x150035C0: addiu       $s3, $s3, -0x7860
    ctx->r19 = ADD32(ctx->r19, -0X7860);
    // 0x150035C4: addiu       $s2, $s2, 0x1D20
    ctx->r18 = ADD32(ctx->r18, 0X1D20);
L_150035C8:
    // 0x150035C8: andi        $t6, $s0, 0x1
    ctx->r14 = ctx->r16 & 0X1;
    // 0x150035CC: beq         $t6, $zero, L_150035E0
    if (ctx->r14 == 0) {
        // 0x150035D0: or          $a1, $s4, $zero
        ctx->r5 = ctx->r20 | 0;
            goto L_150035E0;
    }
    // 0x150035D0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x150035D4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x150035D8: b           L_150035E4
    // 0x150035DC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_150035E4;
    // 0x150035DC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_150035E0:
    // 0x150035E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_150035E4:
    // 0x150035E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150035E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x150035EC: jal         0x10004514
    // 0x150035F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_10004514(rdram, ctx);
        goto after_1;
    // 0x150035F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x150035F4: addu        $v0, $s1, $s4
    ctx->r2 = ADD32(ctx->r17, ctx->r20);
    // 0x150035F8: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x150035FC: lbu         $t7, 0x3($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3);
    // 0x15003600: lbu         $t1, 0x1($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1);
    // 0x15003604: lbu         $t4, 0x2($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X2);
    // 0x15003608: lhu         $t6, 0x0($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X0);
    // 0x1500360C: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x15003610: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x15003614: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x15003618: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x1500361C: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x15003620: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x15003624: addu        $v1, $t3, $t5
    ctx->r3 = ADD32(ctx->r11, ctx->r13);
    // 0x15003628: addu        $t8, $t6, $s1
    ctx->r24 = ADD32(ctx->r14, ctx->r17);
    // 0x1500362C: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x15003630: sh          $v1, -0x2($s3)
    MEM_H(-0X2, ctx->r19) = ctx->r3;
    // 0x15003634: bne         $s3, $s5, L_150035C8
    if (ctx->r19 != ctx->r21) {
        // 0x15003638: addu        $s0, $s0, $t8
        ctx->r16 = ADD32(ctx->r16, ctx->r24);
            goto L_150035C8;
    }
    // 0x15003638: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x1500363C: jal         0x10004074
    // 0x15003640: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_10004074(rdram, ctx);
        goto after_2;
    // 0x15003640: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x15003644: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15003648: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1500364C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15003650: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x15003654: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x15003658: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x1500365C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x15003660: jr          $ra
    // 0x15003664: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15003664: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15020EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15020EC4: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x15020EC8: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x15020ECC: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x15020ED0: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x15020ED4: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x15020ED8: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x15020EDC: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x15020EE0: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x15020EE4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x15020EE8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x15020EEC: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x15020EF0: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x15020EF4: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x15020EF8: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x15020EFC: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x15020F00: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x15020F04: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x15020F08: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    // 0x15020F0C: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x15020F10: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15020F14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15020F18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15020F1C: lbu         $t7, 0x35EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35EA);
    // 0x15020F20: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15020F24: bnel        $t7, $at, L_15021748
    if (ctx->r15 != ctx->r1) {
        // 0x15020F28: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_15021748;
    }
    goto skip_0;
    // 0x15020F28: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_0:
    // 0x15020F2C: lbu         $t8, 0x35F8($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X35F8);
    // 0x15020F30: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15020F34: sb          $zero, 0x3638($at)
    MEM_B(0X3638, ctx->r1) = 0;
    // 0x15020F38: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15020F3C: bne         $t8, $at, L_15020F60
    if (ctx->r24 != ctx->r1) {
        // 0x15020F40: lw          $a0, 0xC8($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XC8);
            goto L_15020F60;
    }
    // 0x15020F40: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x15020F44: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x15020F48: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15020F4C: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x15020F50: jal         0x15023264
    // 0x15020F54: lw          $a1, 0x35B0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X35B0);
    func_15023264(rdram, ctx);
        goto after_0;
    // 0x15020F54: lw          $a1, 0x35B0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X35B0);
    after_0:
    // 0x15020F58: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15020F5C: sb          $v0, 0x35F8($at)
    MEM_B(0X35F8, ctx->r1) = ctx->r2;
L_15020F60:
    // 0x15020F60: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x15020F64: lw          $t1, 0xC8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC8);
    // 0x15020F68: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x15020F6C: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x15020F70: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15020F74: addiu       $t2, $t2, 0x363A
    ctx->r10 = ADD32(ctx->r10, 0X363A);
    // 0x15020F78: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x15020F7C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15020F80: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x15020F84: addu        $s7, $t1, $t2
    ctx->r23 = ADD32(ctx->r9, ctx->r10);
    // 0x15020F88: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x15020F8C: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
    // 0x15020F90: addiu       $s2, $s2, 0x3600
    ctx->r18 = ADD32(ctx->r18, 0X3600);
    // 0x15020F94: lwc1        $f24, 0x69F0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X69F0);
    // 0x15020F98: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
L_15020F9C:
    // 0x15020F9C: blez        $a0, L_15021724
    if (SIGNED(ctx->r4) <= 0) {
        // 0x15020FA0: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_15021724;
    }
    // 0x15020FA0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x15020FA4: lw          $fp, 0xC8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XC8);
    // 0x15020FA8: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15020FAC: addiu       $t4, $t4, 0x35D0
    ctx->r12 = ADD32(ctx->r12, 0X35D0);
    // 0x15020FB0: sll         $t3, $fp, 2
    ctx->r11 = S32(ctx->r30 << 2);
    // 0x15020FB4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x15020FB8: sw          $t5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r13;
    // 0x15020FBC: or          $fp, $t3, $zero
    ctx->r30 = ctx->r11 | 0;
    // 0x15020FC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15020FC4:
    // 0x15020FC4: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x15020FC8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15020FCC: addu        $t0, $t0, $fp
    ctx->r8 = ADD32(ctx->r8, ctx->r30);
    // 0x15020FD0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x15020FD4: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x15020FD8: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x15020FDC: beql        $t9, $zero, L_15021718
    if (ctx->r25 == 0) {
        // 0x15020FE0: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_15021718;
    }
    goto skip_1;
    // 0x15020FE0: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_1:
    // 0x15020FE4: lw          $t0, 0x35C8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X35C8);
    // 0x15020FE8: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15020FEC: addiu       $t3, $t3, 0x35F0
    ctx->r11 = ADD32(ctx->r11, 0X35F0);
    // 0x15020FF0: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x15020FF4: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x15020FF8: addu        $s3, $fp, $t3
    ctx->r19 = ADD32(ctx->r30, ctx->r11);
    // 0x15020FFC: sll         $s4, $s6, 3
    ctx->r20 = S32(ctx->r22 << 3);
    // 0x15021000: beql        $t2, $zero, L_15021718
    if (ctx->r10 == 0) {
        // 0x15021004: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_15021718;
    }
    goto skip_2;
    // 0x15021004: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_2:
    // 0x15021008: lw          $t5, 0xC0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC0);
    // 0x1502100C: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x15021010: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x15021014: bne         $t5, $zero, L_15021034
    if (ctx->r13 != 0) {
        // 0x15021018: addu        $a1, $t4, $s4
        ctx->r5 = ADD32(ctx->r12, ctx->r20);
            goto L_15021034;
    }
    // 0x15021018: addu        $a1, $t4, $s4
    ctx->r5 = ADD32(ctx->r12, ctx->r20);
    // 0x1502101C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x15021020: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15021024: bnel        $v0, $at, L_15021050
    if (ctx->r2 != ctx->r1) {
        // 0x15021028: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_15021050;
    }
    goto skip_3;
    // 0x15021028: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_3:
    // 0x1502102C: b           L_15021714
    // 0x15021030: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
        goto L_15021714;
    // 0x15021030: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
L_15021034:
    // 0x15021034: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x15021038: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1502103C: beql        $v0, $at, L_15021050
    if (ctx->r2 == ctx->r1) {
        // 0x15021040: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_15021050;
    }
    goto skip_4;
    // 0x15021040: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_4:
    // 0x15021044: b           L_15021714
    // 0x15021048: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
        goto L_15021714;
    // 0x15021048: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x1502104C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_15021050:
    // 0x15021050: bne         $v0, $at, L_15021460
    if (ctx->r2 != ctx->r1) {
        // 0x15021054: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_15021460;
    }
    // 0x15021054: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15021058: lbu         $t6, 0x35F8($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35F8);
    // 0x1502105C: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x15021060: lw          $s5, -0x4010($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X4010);
    // 0x15021064: beq         $s6, $t6, L_15021074
    if (ctx->r22 == ctx->r14) {
        // 0x15021068: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_15021074;
    }
    // 0x15021068: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1502106C: b           L_15021714
    // 0x15021070: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
        goto L_15021714;
    // 0x15021070: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
L_15021074:
    // 0x15021074: lw          $t8, 0x2C($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X2C);
    // 0x15021078: sll         $s1, $s6, 4
    ctx->r17 = S32(ctx->r22 << 4);
    // 0x1502107C: addu        $s1, $s1, $s6
    ctx->r17 = ADD32(ctx->r17, ctx->r22);
    // 0x15021080: addiu       $t7, $t7, 0x3958
    ctx->r15 = ADD32(ctx->r15, 0X3958);
    // 0x15021084: sll         $t9, $t8, 13
    ctx->r25 = S32(ctx->r24 << 13);
    // 0x15021088: addu        $s0, $fp, $t7
    ctx->r16 = ADD32(ctx->r30, ctx->r15);
    // 0x1502108C: bltz        $t9, L_150210BC
    if (SIGNED(ctx->r25) < 0) {
        // 0x15021090: sll         $s1, $s1, 2
        ctx->r17 = S32(ctx->r17 << 2);
            goto L_150210BC;
    }
    // 0x15021090: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x15021094: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15021098: lbu         $t0, 0x3671($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3671);
    // 0x1502109C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x150210A0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x150210A4: bne         $t0, $zero, L_150210B4
    if (ctx->r8 != 0) {
        // 0x150210A8: nop
    
            goto L_150210B4;
    }
    // 0x150210A8: nop

    // 0x150210AC: jal         0x1512D560
    // 0x150210B0: lw          $a2, 0xC8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC8);
    func_1512D560(rdram, ctx);
        goto after_1;
    // 0x150210B0: lw          $a2, 0xC8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC8);
    after_1:
L_150210B4:
    // 0x150210B4: jal         0x15128CB0
    // 0x150210B8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_15128CB0(rdram, ctx);
        goto after_2;
    // 0x150210B8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_2:
L_150210BC:
    // 0x150210BC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x150210C0: addu        $v1, $v0, $s1
    ctx->r3 = ADD32(ctx->r2, ctx->r17);
    // 0x150210C4: lwc1        $f2, 0x34($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X34);
    // 0x150210C8: c.eq.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
    // 0x150210CC: nop

    // 0x150210D0: bc1fl       L_150210E4
    if (!c1cs) {
        // 0x150210D4: c.lt.s      $f2, $f26
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
            goto L_150210E4;
    }
    goto skip_5;
    // 0x150210D4: c.lt.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
    skip_5:
    // 0x150210D8: b           L_15021128
    // 0x150210DC: swc1        $f30, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f30.u32l;
        goto L_15021128;
    // 0x150210DC: swc1        $f30, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f30.u32l;
    // 0x150210E0: c.lt.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
L_150210E4:
    // 0x150210E4: nop

    // 0x150210E8: bc1fl       L_150210FC
    if (!c1cs) {
        // 0x150210EC: c.lt.s      $f28, $f2
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.fl < ctx->f2.fl;
            goto L_150210FC;
    }
    goto skip_6;
    // 0x150210EC: c.lt.s      $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.fl < ctx->f2.fl;
    skip_6:
    // 0x150210F0: b           L_15021118
    // 0x150210F4: swc1        $f26, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f26.u32l;
        goto L_15021118;
    // 0x150210F4: swc1        $f26, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f26.u32l;
    // 0x150210F8: c.lt.s      $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.fl < ctx->f2.fl;
L_150210FC:
    // 0x150210FC: nop

    // 0x15021100: bc1fl       L_15021114
    if (!c1cs) {
        // 0x15021104: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_15021114;
    }
    goto skip_7;
    // 0x15021104: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_7:
    // 0x15021108: b           L_15021114
    // 0x1502110C: mov.s       $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    ctx->f0.fl = ctx->f28.fl;
        goto L_15021114;
    // 0x1502110C: mov.s       $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    ctx->f0.fl = ctx->f28.fl;
    // 0x15021110: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_15021114:
    // 0x15021114: swc1        $f0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f0.u32l;
L_15021118:
    // 0x15021118: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x1502111C: addu        $v1, $v0, $s1
    ctx->r3 = ADD32(ctx->r2, ctx->r17);
    // 0x15021120: lwc1        $f4, 0x34($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X34);
    // 0x15021124: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
L_15021128:
    // 0x15021128: lwc1        $f2, 0x3C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x1502112C: c.eq.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
    // 0x15021130: nop

    // 0x15021134: bc1fl       L_15021148
    if (!c1cs) {
        // 0x15021138: c.lt.s      $f2, $f26
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
            goto L_15021148;
    }
    goto skip_8;
    // 0x15021138: c.lt.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
    skip_8:
    // 0x1502113C: b           L_15021188
    // 0x15021140: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
        goto L_15021188;
    // 0x15021140: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
    // 0x15021144: c.lt.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
L_15021148:
    // 0x15021148: nop

    // 0x1502114C: bc1fl       L_15021160
    if (!c1cs) {
        // 0x15021150: c.lt.s      $f28, $f2
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.fl < ctx->f2.fl;
            goto L_15021160;
    }
    goto skip_9;
    // 0x15021150: c.lt.s      $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.fl < ctx->f2.fl;
    skip_9:
    // 0x15021154: b           L_1502117C
    // 0x15021158: swc1        $f26, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f26.u32l;
        goto L_1502117C;
    // 0x15021158: swc1        $f26, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f26.u32l;
    // 0x1502115C: c.lt.s      $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.fl < ctx->f2.fl;
L_15021160:
    // 0x15021160: nop

    // 0x15021164: bc1fl       L_15021178
    if (!c1cs) {
        // 0x15021168: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_15021178;
    }
    goto skip_10;
    // 0x15021168: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_10:
    // 0x1502116C: b           L_15021178
    // 0x15021170: mov.s       $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    ctx->f0.fl = ctx->f28.fl;
        goto L_15021178;
    // 0x15021170: mov.s       $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    ctx->f0.fl = ctx->f28.fl;
    // 0x15021174: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_15021178:
    // 0x15021178: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
L_1502117C:
    // 0x1502117C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x15021180: addu        $v1, $v0, $s1
    ctx->r3 = ADD32(ctx->r2, ctx->r17);
    // 0x15021184: lwc1        $f22, 0x3C($v1)
    ctx->f22.u32l = MEM_W(ctx->r3, 0X3C);
L_15021188:
    // 0x15021188: lwc1        $f2, 0x40($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X40);
    // 0x1502118C: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x15021190: c.eq.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl == ctx->f2.fl;
    // 0x15021194: nop

    // 0x15021198: bc1fl       L_150211B8
    if (!c1cs) {
        // 0x1502119C: c.lt.s      $f2, $f26
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
            goto L_150211B8;
    }
    goto skip_11;
    // 0x1502119C: c.lt.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
    skip_11:
    // 0x150211A0: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x150211A4: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    // 0x150211A8: sw          $t2, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r10;
    // 0x150211AC: b           L_15021208
    // 0x150211B0: addu        $a1, $t1, $s4
    ctx->r5 = ADD32(ctx->r9, ctx->r20);
        goto L_15021208;
    // 0x150211B0: addu        $a1, $t1, $s4
    ctx->r5 = ADD32(ctx->r9, ctx->r20);
    // 0x150211B4: c.lt.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
L_150211B8:
    // 0x150211B8: nop

    // 0x150211BC: bc1fl       L_150211D0
    if (!c1cs) {
        // 0x150211C0: c.lt.s      $f28, $f2
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.fl < ctx->f2.fl;
            goto L_150211D0;
    }
    goto skip_12;
    // 0x150211C0: c.lt.s      $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.fl < ctx->f2.fl;
    skip_12:
    // 0x150211C4: b           L_150211EC
    // 0x150211C8: swc1        $f26, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->f26.u32l;
        goto L_150211EC;
    // 0x150211C8: swc1        $f26, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->f26.u32l;
    // 0x150211CC: c.lt.s      $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.fl < ctx->f2.fl;
L_150211D0:
    // 0x150211D0: nop

    // 0x150211D4: bc1fl       L_150211E8
    if (!c1cs) {
        // 0x150211D8: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_150211E8;
    }
    goto skip_13;
    // 0x150211D8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_13:
    // 0x150211DC: b           L_150211E8
    // 0x150211E0: mov.s       $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    ctx->f0.fl = ctx->f28.fl;
        goto L_150211E8;
    // 0x150211E0: mov.s       $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    ctx->f0.fl = ctx->f28.fl;
    // 0x150211E4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_150211E8:
    // 0x150211E8: swc1        $f0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->f0.u32l;
L_150211EC:
    // 0x150211EC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x150211F0: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x150211F4: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x150211F8: addu        $v1, $v0, $s1
    ctx->r3 = ADD32(ctx->r2, ctx->r17);
    // 0x150211FC: lwc1        $f20, 0x40($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0X40);
    // 0x15021200: addu        $a1, $t3, $s4
    ctx->r5 = ADD32(ctx->r11, ctx->r20);
    // 0x15021204: sw          $t4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r12;
L_15021208:
    // 0x15021208: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1502120C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15021210: swc1        $f6, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f6.u32l;
    // 0x15021214: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15021218: swc1        $f8, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f8.u32l;
    // 0x1502121C: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15021220: swc1        $f10, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->f10.u32l;
    // 0x15021224: lbu         $a0, 0x2($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X2);
    // 0x15021228: bnel        $a0, $at, L_150212C0
    if (ctx->r4 != ctx->r1) {
        // 0x1502122C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_150212C0;
    }
    goto skip_14;
    // 0x1502122C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_14:
    // 0x15021230: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x15021234: lb          $t5, 0x3($a1)
    ctx->r13 = MEM_B(ctx->r5, 0X3);
    // 0x15021238: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x1502123C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15021240: multu       $t5, $a0
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15021244: mflo        $t6
    ctx->r14 = lo;
    // 0x15021248: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x1502124C: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x15021250: swc1        $f16, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f16.u32l;
    // 0x15021254: lb          $t8, 0x3($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X3);
    // 0x15021258: lh          $t1, 0x4($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X4);
    // 0x1502125C: lwc1        $f10, 0x38($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X38);
    // 0x15021260: multu       $t8, $a0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15021264: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x15021268: nop

    // 0x1502126C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15021270: mflo        $t9
    ctx->r25 = lo;
    // 0x15021274: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x15021278: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x1502127C: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x15021280: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15021284: swc1        $f16, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->f16.u32l;
    // 0x15021288: lb          $t2, 0x3($a1)
    ctx->r10 = MEM_B(ctx->r5, 0X3);
    // 0x1502128C: multu       $t2, $a0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15021290: mflo        $t3
    ctx->r11 = lo;
    // 0x15021294: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x15021298: lwc1        $f4, 0x8($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X8);
    // 0x1502129C: swc1        $f4, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->f4.u32l;
    // 0x150212A0: lwc1        $f18, 0x14($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X14);
    // 0x150212A4: swc1        $f22, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->f22.u32l;
    // 0x150212A8: swc1        $f20, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->f20.u32l;
    // 0x150212AC: neg.s       $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = -ctx->f18.fl;
    // 0x150212B0: swc1        $f6, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->f6.u32l;
    // 0x150212B4: b           L_15021444
    // 0x150212B8: lbu         $a2, 0x3671($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X3671);
        goto L_15021444;
    // 0x150212B8: lbu         $a2, 0x3671($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X3671);
    // 0x150212BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_150212C0:
    // 0x150212C0: bnel        $a0, $at, L_15021354
    if (ctx->r4 != ctx->r1) {
        // 0x150212C4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15021354;
    }
    goto skip_15;
    // 0x150212C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_15:
    // 0x150212C8: jal         0x15083E90
    // 0x150212CC: lbu         $a0, 0x3($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X3);
    func_15083E90(rdram, ctx);
        goto after_3;
    // 0x150212CC: lbu         $a0, 0x3($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X3);
    after_3:
    // 0x150212D0: bne         $v0, $zero, L_150212E4
    if (ctx->r2 != 0) {
        // 0x150212D4: lui         $a2, 0x800C
        ctx->r6 = S32(0X800C << 16);
            goto L_150212E4;
    }
    // 0x150212D4: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x150212D8: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
    // 0x150212DC: b           L_15021714
    // 0x150212E0: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
        goto L_15021714;
    // 0x150212E0: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
L_150212E4:
    // 0x150212E4: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x150212E8: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150212EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150212F0: swc1        $f10, 0x3620($at)
    MEM_W(0X3620, ctx->r1) = ctx->f10.u32l;
    // 0x150212F4: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x150212F8: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150212FC: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x15021300: addu        $t7, $t6, $s4
    ctx->r15 = ADD32(ctx->r14, ctx->r20);
    // 0x15021304: lh          $t8, 0x4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X4);
    // 0x15021308: addu        $v1, $t5, $s1
    ctx->r3 = ADD32(ctx->r13, ctx->r17);
    // 0x1502130C: lwc1        $f6, 0x38($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X38);
    // 0x15021310: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x15021314: nop

    // 0x15021318: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1502131C: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x15021320: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x15021324: swc1        $f10, 0x3624($at)
    MEM_W(0X3624, ctx->r1) = ctx->f10.u32l;
    // 0x15021328: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1502132C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15021330: swc1        $f16, 0x3628($at)
    MEM_W(0X3628, ctx->r1) = ctx->f16.u32l;
    // 0x15021334: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x15021338: swc1        $f22, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->f22.u32l;
    // 0x1502133C: swc1        $f20, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->f20.u32l;
    // 0x15021340: neg.s       $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = -ctx->f8.fl;
    // 0x15021344: swc1        $f4, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->f4.u32l;
    // 0x15021348: b           L_15021444
    // 0x1502134C: lbu         $a2, 0x3671($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X3671);
        goto L_15021444;
    // 0x1502134C: lbu         $a2, 0x3671($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X3671);
    // 0x15021350: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_15021354:
    // 0x15021354: bne         $a0, $at, L_150213FC
    if (ctx->r4 != ctx->r1) {
        // 0x15021358: nop
    
            goto L_150213FC;
    }
    // 0x15021358: nop

    // 0x1502135C: jal         0x151149AC
    // 0x15021360: lbu         $a0, 0x3($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X3);
    func_151149AC(rdram, ctx);
        goto after_4;
    // 0x15021360: lbu         $a0, 0x3($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X3);
    after_4:
    // 0x15021364: bne         $v0, $zero, L_15021378
    if (ctx->r2 != 0) {
        // 0x15021368: lui         $a2, 0x800C
        ctx->r6 = S32(0X800C << 16);
            goto L_15021378;
    }
    // 0x15021368: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x1502136C: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
    // 0x15021370: b           L_15021714
    // 0x15021374: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
        goto L_15021714;
    // 0x15021374: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
L_15021378:
    // 0x15021378: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x1502137C: lh          $t9, 0x10($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X10);
    // 0x15021380: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15021384: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15021388: nop

    // 0x1502138C: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15021390: swc1        $f18, 0x3620($at)
    MEM_W(0X3620, ctx->r1) = ctx->f18.u32l;
    // 0x15021394: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x15021398: lh          $t1, 0x12($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X12);
    // 0x1502139C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x150213A0: addu        $t3, $t2, $s4
    ctx->r11 = ADD32(ctx->r10, ctx->r20);
    // 0x150213A4: lh          $t4, 0x4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X4);
    // 0x150213A8: addu        $v1, $t0, $s1
    ctx->r3 = ADD32(ctx->r8, ctx->r17);
    // 0x150213AC: lwc1        $f8, 0x38($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X38);
    // 0x150213B0: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x150213B4: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x150213B8: nop

    // 0x150213BC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150213C0: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150213C4: swc1        $f4, 0x3624($at)
    MEM_W(0X3624, ctx->r1) = ctx->f4.u32l;
    // 0x150213C8: lh          $t6, 0x14($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X14);
    // 0x150213CC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150213D0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x150213D4: nop

    // 0x150213D8: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150213DC: swc1        $f18, 0x3628($at)
    MEM_W(0X3628, ctx->r1) = ctx->f18.u32l;
    // 0x150213E0: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x150213E4: swc1        $f22, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->f22.u32l;
    // 0x150213E8: swc1        $f20, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->f20.u32l;
    // 0x150213EC: neg.s       $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = -ctx->f10.fl;
    // 0x150213F0: swc1        $f8, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->f8.u32l;
    // 0x150213F4: b           L_15021444
    // 0x150213F8: lbu         $a2, 0x3671($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X3671);
        goto L_15021444;
    // 0x150213F8: lbu         $a2, 0x3671($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X3671);
L_150213FC:
    // 0x150213FC: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15021400: bne         $a0, $zero, L_15021444
    if (ctx->r4 != 0) {
        // 0x15021404: lbu         $a2, 0x3671($a2)
        ctx->r6 = MEM_BU(ctx->r6, 0X3671);
            goto L_15021444;
    }
    // 0x15021404: lbu         $a2, 0x3671($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X3671);
    // 0x15021408: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1502140C: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x15021410: lwc1        $f16, 0x14($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X14);
    // 0x15021414: lwc1        $f10, 0x18($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X18);
    // 0x15021418: neg.s       $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = -ctx->f16.fl;
    // 0x1502141C: swc1        $f4, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f4.u32l;
    // 0x15021420: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x15021424: swc1        $f6, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->f6.u32l;
    // 0x15021428: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1502142C: swc1        $f18, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->f18.u32l;
    // 0x15021430: lwc1        $f8, 0x38($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X38);
    // 0x15021434: swc1        $f22, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->f22.u32l;
    // 0x15021438: swc1        $f20, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->f20.u32l;
    // 0x1502143C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15021440: swc1        $f16, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f16.u32l;
L_15021444:
    // 0x15021444: bne         $a2, $zero, L_15021458
    if (ctx->r6 != 0) {
        // 0x15021448: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_15021458;
    }
    // 0x15021448: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1502144C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x15021450: jal         0x1512D560
    // 0x15021454: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1512D560(rdram, ctx);
        goto after_5;
    // 0x15021454: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_5:
L_15021458:
    // 0x15021458: b           L_15021710
    // 0x1502145C: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
        goto L_15021710;
    // 0x1502145C: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
L_15021460:
    // 0x15021460: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15021464: bnel        $v0, $at, L_15021610
    if (ctx->r2 != ctx->r1) {
        // 0x15021468: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15021610;
    }
    goto skip_16;
    // 0x15021468: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_16:
    // 0x1502146C: jal         0x151149AC
    // 0x15021470: lbu         $a0, 0x2($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X2);
    func_151149AC(rdram, ctx);
        goto after_6;
    // 0x15021470: lbu         $a0, 0x2($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X2);
    after_6:
    // 0x15021474: bne         $v0, $zero, L_15021488
    if (ctx->r2 != 0) {
        // 0x15021478: lui         $t2, 0x800C
        ctx->r10 = S32(0X800C << 16);
            goto L_15021488;
    }
    // 0x15021478: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1502147C: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
    // 0x15021480: b           L_15021714
    // 0x15021484: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
        goto L_15021714;
    // 0x15021484: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
L_15021488:
    // 0x15021488: lbu         $t8, 0x6F($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6F);
    // 0x1502148C: addiu       $t2, $t2, 0x3958
    ctx->r10 = ADD32(ctx->r10, 0X3958);
    // 0x15021490: sb          $zero, 0x4E($v0)
    MEM_B(0X4E, ctx->r2) = 0;
    // 0x15021494: andi        $t0, $t8, 0xFF7F
    ctx->r8 = ctx->r24 & 0XFF7F;
    // 0x15021498: sb          $t0, 0x6F($v0)
    MEM_B(0X6F, ctx->r2) = ctx->r8;
    // 0x1502149C: sb          $t0, 0x6F($v0)
    MEM_B(0X6F, ctx->r2) = ctx->r8;
    // 0x150214A0: addu        $s0, $fp, $t2
    ctx->r16 = ADD32(ctx->r30, ctx->r10);
    // 0x150214A4: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x150214A8: sll         $s1, $s6, 4
    ctx->r17 = S32(ctx->r22 << 4);
    // 0x150214AC: addu        $s1, $s1, $s6
    ctx->r17 = ADD32(ctx->r17, ctx->r22);
    // 0x150214B0: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x150214B4: addu        $t1, $t3, $s1
    ctx->r9 = ADD32(ctx->r11, ctx->r17);
    // 0x150214B8: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x150214BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150214C0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150214C4: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x150214C8: nop

    // 0x150214CC: sh          $t5, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r13;
    // 0x150214D0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x150214D4: addu        $v1, $t6, $s1
    ctx->r3 = ADD32(ctx->r14, ctx->r17);
    // 0x150214D8: lwc1        $f18, 0x38($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X38);
    // 0x150214DC: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x150214E0: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x150214E4: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150214E8: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x150214EC: nop

    // 0x150214F0: sh          $t8, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r24;
    // 0x150214F4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x150214F8: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x150214FC: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x15021500: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15021504: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x15021508: nop

    // 0x1502150C: sh          $t3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r11;
    // 0x15021510: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x15021514: addu        $t4, $t1, $s1
    ctx->r12 = ADD32(ctx->r9, ctx->r17);
    // 0x15021518: lwc1        $f18, 0xC($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0XC);
    // 0x1502151C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15021520: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x15021524: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x15021528: addu        $t6, $t5, $s1
    ctx->r14 = ADD32(ctx->r13, ctx->r17);
    // 0x1502152C: lwc1        $f10, 0x10($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X10);
    // 0x15021530: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x15021534: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15021538: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x1502153C: lwc1        $f8, 0x14($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X14);
    // 0x15021540: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x15021544: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15021548: addu        $v1, $t9, $s1
    ctx->r3 = ADD32(ctx->r25, ctx->r17);
    // 0x1502154C: lwc1        $f0, 0x18($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X18);
    // 0x15021550: c.eq.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl == ctx->f0.fl;
    // 0x15021554: nop

    // 0x15021558: bc1tl       L_15021578
    if (c1cs) {
        // 0x1502155C: lwc1        $f0, 0x1C($v1)
        ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
            goto L_15021578;
    }
    goto skip_17;
    // 0x1502155C: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    skip_17:
    // 0x15021560: lwc1        $f16, 0x69F4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X69F4);
    // 0x15021564: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15021568: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    // 0x1502156C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x15021570: addu        $v1, $t0, $s1
    ctx->r3 = ADD32(ctx->r8, ctx->r17);
    // 0x15021574: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
L_15021578:
    // 0x15021578: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1502157C: c.eq.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl == ctx->f0.fl;
    // 0x15021580: nop

    // 0x15021584: bc1tl       L_150215A4
    if (c1cs) {
        // 0x15021588: lwc1        $f0, 0x20($v1)
        ctx->f0.u32l = MEM_W(ctx->r3, 0X20);
            goto L_150215A4;
    }
    goto skip_18;
    // 0x15021588: lwc1        $f0, 0x20($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X20);
    skip_18:
    // 0x1502158C: lwc1        $f6, 0x69F8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X69F8);
    // 0x15021590: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15021594: swc1        $f18, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f18.u32l;
    // 0x15021598: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x1502159C: addu        $v1, $t2, $s1
    ctx->r3 = ADD32(ctx->r10, ctx->r17);
    // 0x150215A0: lwc1        $f0, 0x20($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X20);
L_150215A4:
    // 0x150215A4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150215A8: c.eq.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl == ctx->f0.fl;
    // 0x150215AC: nop

    // 0x150215B0: bc1tl       L_150215D0
    if (c1cs) {
        // 0x150215B4: lwc1        $f16, 0x34($v1)
        ctx->f16.u32l = MEM_W(ctx->r3, 0X34);
            goto L_150215D0;
    }
    goto skip_19;
    // 0x150215B4: lwc1        $f16, 0x34($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X34);
    skip_19:
    // 0x150215B8: lwc1        $f10, 0x69FC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X69FC);
    // 0x150215BC: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150215C0: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
    // 0x150215C4: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x150215C8: addu        $v1, $t3, $s1
    ctx->r3 = ADD32(ctx->r11, ctx->r17);
    // 0x150215CC: lwc1        $f16, 0x34($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X34);
L_150215D0:
    // 0x150215D0: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150215D4: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x150215D8: nop

    // 0x150215DC: slti        $at, $a0, 0x100
    ctx->r1 = SIGNED(ctx->r4) < 0X100 ? 1 : 0;
    // 0x150215E0: bne         $at, $zero, L_150215F0
    if (ctx->r1 != 0) {
        // 0x150215E4: nop
    
            goto L_150215F0;
    }
    // 0x150215E4: nop

    // 0x150215E8: b           L_15021604
    // 0x150215EC: sb          $t4, 0x8A($v0)
    MEM_B(0X8A, ctx->r2) = ctx->r12;
        goto L_15021604;
    // 0x150215EC: sb          $t4, 0x8A($v0)
    MEM_B(0X8A, ctx->r2) = ctx->r12;
L_150215F0:
    // 0x150215F0: bgezl       $a0, L_15021604
    if (SIGNED(ctx->r4) >= 0) {
        // 0x150215F4: sb          $a0, 0x8A($v0)
        MEM_B(0X8A, ctx->r2) = ctx->r4;
            goto L_15021604;
    }
    goto skip_20;
    // 0x150215F4: sb          $a0, 0x8A($v0)
    MEM_B(0X8A, ctx->r2) = ctx->r4;
    skip_20:
    // 0x150215F8: b           L_15021604
    // 0x150215FC: sb          $zero, 0x8A($v0)
    MEM_B(0X8A, ctx->r2) = 0;
        goto L_15021604;
    // 0x150215FC: sb          $zero, 0x8A($v0)
    MEM_B(0X8A, ctx->r2) = 0;
    // 0x15021600: sb          $a0, 0x8A($v0)
    MEM_B(0X8A, ctx->r2) = ctx->r4;
L_15021604:
    // 0x15021604: b           L_15021710
    // 0x15021608: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
        goto L_15021710;
    // 0x15021608: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
    // 0x1502160C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_15021610:
    // 0x15021610: bnel        $v0, $at, L_1502163C
    if (ctx->r2 != ctx->r1) {
        // 0x15021614: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_1502163C;
    }
    goto skip_21;
    // 0x15021614: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_21:
    // 0x15021618: jal         0x15083E90
    // 0x1502161C: lbu         $a0, 0x2($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X2);
    func_15083E90(rdram, ctx);
        goto after_7;
    // 0x1502161C: lbu         $a0, 0x2($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X2);
    after_7:
    // 0x15021620: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15021624: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    // 0x15021628: jal         0x1502178C
    // 0x1502162C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_1502178C(rdram, ctx);
        goto after_8;
    // 0x1502162C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_8:
    // 0x15021630: b           L_15021710
    // 0x15021634: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
        goto L_15021710;
    // 0x15021634: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
    // 0x15021638: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_1502163C:
    // 0x1502163C: bnel        $v0, $at, L_15021668
    if (ctx->r2 != ctx->r1) {
        // 0x15021640: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_15021668;
    }
    goto skip_22;
    // 0x15021640: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    skip_22:
    // 0x15021644: lbu         $t5, 0x2($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X2);
    // 0x15021648: sw          $t5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r13;
    // 0x1502164C: lbu         $t6, 0x2($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X2);
    // 0x15021650: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
    // 0x15021654: lbu         $t7, 0x2($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X2);
    // 0x15021658: sw          $t7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r15;
    // 0x1502165C: b           L_15021714
    // 0x15021660: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
        goto L_15021714;
    // 0x15021660: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x15021664: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_15021668:
    // 0x15021668: bne         $v0, $at, L_15021710
    if (ctx->r2 != ctx->r1) {
        // 0x1502166C: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_15021710;
    }
    // 0x1502166C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15021670: addu        $t8, $t8, $fp
    ctx->r24 = ADD32(ctx->r24, ctx->r30);
    // 0x15021674: lw          $t8, 0x3958($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3958);
    // 0x15021678: sll         $t9, $s6, 4
    ctx->r25 = S32(ctx->r22 << 4);
    // 0x1502167C: addu        $t9, $t9, $s6
    ctx->r25 = ADD32(ctx->r25, ctx->r22);
    // 0x15021680: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15021684: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15021688: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x1502168C: lwc1        $f6, 0x34($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X34);
    // 0x15021690: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15021694: nop

    // 0x15021698: c.le.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl <= ctx->f6.fl;
    // 0x1502169C: nop

    // 0x150216A0: bc1fl       L_15021714
    if (!c1cs) {
        // 0x150216A4: lw          $v0, 0x7C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X7C);
            goto L_15021714;
    }
    goto skip_23;
    // 0x150216A4: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    skip_23:
    // 0x150216A8: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150216AC: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x150216B0: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150216B4: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150216B8: lwc1        $f10, 0x18($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X18);
    // 0x150216BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150216C0: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150216C4: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x150216C8: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150216CC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x150216D0: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x150216D4: trunc.w.s   $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150216D8: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x150216DC: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x150216E0: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x150216E4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150216E8: lwc1        $f16, 0x1C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x150216EC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150216F0: sra         $a0, $t2, 16
    ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
    // 0x150216F4: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150216F8: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x150216FC: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15021700: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x15021704: jal         0x1517D5FC
    // 0x15021708: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_1517D5FC(rdram, ctx);
        goto after_9;
    // 0x15021708: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_9:
    // 0x1502170C: lbu         $a0, 0x0($s7)
    ctx->r4 = MEM_BU(ctx->r23, 0X0);
L_15021710:
    // 0x15021710: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
L_15021714:
    // 0x15021714: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_15021718:
    // 0x15021718: slt         $at, $s6, $a0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1502171C: bne         $at, $zero, L_15020FC4
    if (ctx->r1 != 0) {
        // 0x15021720: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_15020FC4;
    }
    // 0x15021720: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_15021724:
    // 0x15021724: lw          $t1, 0xC0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC0);
    // 0x15021728: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1502172C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15021730: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x15021734: bne         $t4, $at, L_15020F9C
    if (ctx->r12 != ctx->r1) {
        // 0x15021738: sw          $t4, 0xC0($sp)
        MEM_W(0XC0, ctx->r29) = ctx->r12;
            goto L_15020F9C;
    }
    // 0x15021738: sw          $t4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r12;
    // 0x1502173C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15021740: sb          $t5, 0x3638($at)
    MEM_B(0X3638, ctx->r1) = ctx->r13;
    // 0x15021744: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_15021748:
    // 0x15021748: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1502174C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x15021750: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x15021754: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x15021758: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x1502175C: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x15021760: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x15021764: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x15021768: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x1502176C: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x15021770: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x15021774: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x15021778: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x1502177C: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x15021780: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x15021784: jr          $ra
    // 0x15021788: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    return;
    // 0x15021788: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_1514E508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514E508: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1514E50C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1514E510: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1514E514: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x1514E518: addiu       $t8, $t8, 0x58D0
    ctx->r24 = ADD32(ctx->r24, 0X58D0);
    // 0x1514E51C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1514E520: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1514E524: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1514E528: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1514E52C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1514E530: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1514E534: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1514E538: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1514E53C: jal         0x1518D1C0
    // 0x1514E540: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_1518D1C0(rdram, ctx);
        goto after_0;
    // 0x1514E540: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1514E544: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514E548: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x1514E54C: jal         0x1514EC1C
    // 0x1514E550: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_1514EC1C(rdram, ctx);
        goto after_1;
    // 0x1514E550: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_1:
    // 0x1514E554: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x1514E558: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514E55C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1514E560: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514E564: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1514E568: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x1514E56C: sra         $a1, $v1, 16
    ctx->r5 = S32(SIGNED(ctx->r3) >> 16);
    // 0x1514E570: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    // 0x1514E574: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x1514E578: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1514E57C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1514E580: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1514E584: addiu       $a0, $zero, -0x8000
    ctx->r4 = ADD32(0, -0X8000);
    // 0x1514E588: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x1514E58C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1514E590: jal         0x1515D5F8
    // 0x1514E594: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_1515D5F8(rdram, ctx);
        goto after_2;
    // 0x1514E594: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_2:
    // 0x1514E598: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514E59C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x1514E5A0: jal         0x1514EC1C
    // 0x1514E5A4: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_1514EC1C(rdram, ctx);
        goto after_3;
    // 0x1514E5A4: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_3:
    // 0x1514E5A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1514E5AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1514E5B0: jr          $ra
    // 0x1514E5B4: nop

    return;
    return;
    // 0x1514E5B4: nop

;}
RECOMP_FUNC void func_151571C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151571C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151571C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151571CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x151571D0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151571D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151571D8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x151571DC: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
    // 0x151571E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151571E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151571E8: bltzl       $v1, L_15157220
    if (SIGNED(ctx->r3) < 0) {
        // 0x151571EC: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_15157220;
    }
    goto skip_0;
    // 0x151571EC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    skip_0:
L_151571F0:
    // 0x151571F0: lw          $v0, 0x104($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X104);
    // 0x151571F4: beq         $v0, $zero, L_1515720C
    if (ctx->r2 == 0) {
        // 0x151571F8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1515720C;
    }
    // 0x151571F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151571FC: jal         0x100043B4
    // 0x15157200: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x15157200: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x15157204: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15157208: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
L_1515720C:
    // 0x1515720C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15157210: slt         $at, $v1, $s1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x15157214: beq         $at, $zero, L_151571F0
    if (ctx->r1 == 0) {
        // 0x15157218: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_151571F0;
    }
    // 0x15157218: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1515721C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
L_15157220:
    // 0x15157220: lw          $v0, 0x114($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X114);
    // 0x15157224: beq         $v0, $zero, L_15157234
    if (ctx->r2 == 0) {
        // 0x15157228: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_15157234;
    }
    // 0x15157228: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1515722C: jal         0x100043B4
    // 0x15157230: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_100043B4(rdram, ctx);
        goto after_1;
    // 0x15157230: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
L_15157234:
    // 0x15157234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15157238: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1515723C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15157240: jr          $ra
    // 0x15157244: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x15157244: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_150407A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150407A8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150407AC: jr          $ra
    // 0x150407B0: nop

    return;
    return;
    // 0x150407B0: nop

;}
RECOMP_FUNC void func_15040820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040820: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040824: jr          $ra
    // 0x15040828: nop

    return;
    return;
    // 0x15040828: nop

;}
RECOMP_FUNC void func_150331B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150331B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150331BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150331C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150331C4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x150331C8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x150331CC: lw          $v0, 0x2D0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X2D0);
    // 0x150331D0: lw          $s0, 0x48($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X48);
    // 0x150331D4: bnel        $s0, $zero, L_150331E8
    if (ctx->r16 != 0) {
        // 0x150331D8: lw          $a2, 0x2E4($a1)
        ctx->r6 = MEM_W(ctx->r5, 0X2E4);
            goto L_150331E8;
    }
    goto skip_0;
    // 0x150331D8: lw          $a2, 0x2E4($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X2E4);
    skip_0:
    // 0x150331DC: b           L_15033268
    // 0x150331E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15033268;
    // 0x150331E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150331E4: lw          $a2, 0x2E4($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X2E4);
L_150331E8:
    // 0x150331E8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150331EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150331F0: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x150331F4: beq         $t7, $at, L_15033220
    if (ctx->r15 == ctx->r1) {
        // 0x150331F8: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_15033220;
    }
    // 0x150331F8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x150331FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15033200: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15033204: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15033208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1503320C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x15033210: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x15033214: jal         0x1503F5B8
    // 0x15033218: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_1503F5B8(rdram, ctx);
        goto after_0;
    // 0x15033218: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1503321C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_15033220:
    // 0x15033220: beq         $v0, $zero, L_15033264
    if (ctx->r2 == 0) {
        // 0x15033224: lw          $t9, 0x30($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X30);
            goto L_15033264;
    }
    // 0x15033224: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x15033228: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1503322C: lw          $t0, 0x48($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X48);
    // 0x15033230: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15033234: swc1        $f6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f6.u32l;
    // 0x15033238: lw          $s0, 0x48($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X48);
    // 0x1503323C: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15033240: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15033244: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x15033248: nop

    // 0x1503324C: bc1fl       L_15033268
    if (!c1cs) {
        // 0x15033250: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15033268;
    }
    goto skip_1;
    // 0x15033250: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x15033254: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15033258: nop

    // 0x1503325C: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x15033260: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
L_15033264:
    // 0x15033264: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15033268:
    // 0x15033268: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1503326C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15033270: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15033274: jr          $ra
    // 0x15033278: nop

    return;
    return;
    // 0x15033278: nop

;}
RECOMP_FUNC void func_1516D4E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516D4E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1516D4EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1516D4F0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1516D4F4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x1516D4F8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1516D4FC: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x1516D500: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x1516D504: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x1516D508: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x1516D50C: beq         $t6, $zero, L_1516D51C
    if (ctx->r14 == 0) {
        // 0x1516D510: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_1516D51C;
    }
    // 0x1516D510: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1516D514: b           L_1516D520
    // 0x1516D518: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
        goto L_1516D520;
    // 0x1516D518: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
L_1516D51C:
    // 0x1516D51C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
L_1516D520:
    // 0x1516D520: lbu         $t7, 0xAF($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XAF);
    // 0x1516D524: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1516D528: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1516D52C: jal         0x15167A68
    // 0x1516D530: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x1516D530: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x1516D534: beq         $v0, $zero, L_1516D668
    if (ctx->r2 == 0) {
        // 0x1516D538: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1516D668;
    }
    // 0x1516D538: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1516D53C: lh          $t9, 0x3A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X3A);
    // 0x1516D540: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x1516D544: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1516D548: sh          $t9, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r25;
    // 0x1516D54C: lh          $t0, 0x3E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3E);
    // 0x1516D550: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x1516D554: sh          $t0, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r8;
    // 0x1516D558: lh          $t1, 0x42($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X42);
    // 0x1516D55C: sh          $t1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r9;
    // 0x1516D560: lbu         $t2, 0x47($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X47);
    // 0x1516D564: sb          $t2, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = ctx->r10;
    // 0x1516D568: lbu         $t3, 0x4B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X4B);
    // 0x1516D56C: sb          $t3, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r11;
    // 0x1516D570: lbu         $t4, 0x4F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4F);
    // 0x1516D574: sb          $t4, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = ctx->r12;
    // 0x1516D578: lbu         $t5, 0x53($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X53);
    // 0x1516D57C: sb          $t5, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r13;
    // 0x1516D580: lbu         $t6, 0x57($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X57);
    // 0x1516D584: sb          $t6, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r14;
    // 0x1516D588: lbu         $t7, 0x5B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X5B);
    // 0x1516D58C: sb          $t7, 0x1F($v0)
    MEM_B(0X1F, ctx->r2) = ctx->r15;
    // 0x1516D590: lbu         $t8, 0x5F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5F);
    // 0x1516D594: sb          $t8, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r24;
    // 0x1516D598: lbu         $t9, 0x63($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X63);
    // 0x1516D59C: sb          $t9, 0x21($v0)
    MEM_B(0X21, ctx->r2) = ctx->r25;
    // 0x1516D5A0: lbu         $t0, 0x67($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X67);
    // 0x1516D5A4: sb          $t0, 0x22($v0)
    MEM_B(0X22, ctx->r2) = ctx->r8;
    // 0x1516D5A8: lbu         $t1, 0x6B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X6B);
    // 0x1516D5AC: sb          $t1, 0x23($v0)
    MEM_B(0X23, ctx->r2) = ctx->r9;
    // 0x1516D5B0: lh          $t2, 0x96($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X96);
    // 0x1516D5B4: sh          $t2, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r10;
    // 0x1516D5B8: lh          $t3, 0x9A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X9A);
    // 0x1516D5BC: sh          $t3, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r11;
    // 0x1516D5C0: lbu         $t4, 0x9F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X9F);
    // 0x1516D5C4: sb          $t4, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r12;
    // 0x1516D5C8: lh          $t5, 0xA2($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XA2);
    // 0x1516D5CC: sb          $zero, 0x25($v0)
    MEM_B(0X25, ctx->r2) = 0;
    // 0x1516D5D0: sh          $t5, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r13;
    // 0x1516D5D4: lbu         $t6, 0x6F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X6F);
    // 0x1516D5D8: sb          $t6, 0x26($v0)
    MEM_B(0X26, ctx->r2) = ctx->r14;
    // 0x1516D5DC: lbu         $t7, 0x73($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X73);
    // 0x1516D5E0: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x1516D5E4: sb          $t7, 0x27($v0)
    MEM_B(0X27, ctx->r2) = ctx->r15;
    // 0x1516D5E8: lbu         $t8, 0x77($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X77);
    // 0x1516D5EC: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x1516D5F0: sb          $t8, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r24;
    // 0x1516D5F4: lbu         $t9, 0x7B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X7B);
    // 0x1516D5F8: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x1516D5FC: addiu       $t8, $v1, 0xE
    ctx->r24 = ADD32(ctx->r3, 0XE);
    // 0x1516D600: sb          $t9, 0x29($v0)
    MEM_B(0X29, ctx->r2) = ctx->r25;
    // 0x1516D604: lbu         $t0, 0x7F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X7F);
    // 0x1516D608: addiu       $t9, $v1, 0x14
    ctx->r25 = ADD32(ctx->r3, 0X14);
    // 0x1516D60C: sb          $t0, 0x2A($v0)
    MEM_B(0X2A, ctx->r2) = ctx->r8;
    // 0x1516D610: lbu         $t1, 0x83($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X83);
    // 0x1516D614: sb          $t1, 0x2B($v0)
    MEM_B(0X2B, ctx->r2) = ctx->r9;
    // 0x1516D618: lbu         $t2, 0x87($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X87);
    // 0x1516D61C: sb          $t2, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r10;
    // 0x1516D620: lbu         $t3, 0x8B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X8B);
    // 0x1516D624: sb          $t3, 0x2D($v0)
    MEM_B(0X2D, ctx->r2) = ctx->r11;
    // 0x1516D628: lbu         $t4, 0x8F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X8F);
    // 0x1516D62C: sb          $t4, 0x2E($v0)
    MEM_B(0X2E, ctx->r2) = ctx->r12;
    // 0x1516D630: lbu         $t5, 0x93($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X93);
    // 0x1516D634: beq         $a2, $zero, L_1516D664
    if (ctx->r6 == 0) {
        // 0x1516D638: sb          $t5, 0x2F($v0)
        MEM_B(0X2F, ctx->r2) = ctx->r13;
            goto L_1516D664;
    }
    // 0x1516D638: sb          $t5, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r13;
    // 0x1516D63C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1516D640: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1516D644: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1516D648: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1516D64C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x1516D650: jal         0x150448D0
    // 0x1516D654: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_150448D0(rdram, ctx);
        goto after_1;
    // 0x1516D654: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_1:
    // 0x1516D658: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x1516D65C: b           L_1516D668
    // 0x1516D660: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
        goto L_1516D668;
    // 0x1516D660: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
L_1516D664:
    // 0x1516D664: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
L_1516D668:
    // 0x1516D668: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1516D66C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1516D670: jr          $ra
    // 0x1516D674: nop

    return;
    return;
    // 0x1516D674: nop

;}
RECOMP_FUNC void func_1516F9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516F9C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1516F9C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516F9CC: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
    // 0x1516F9D0: lbu         $v0, 0x1F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1F);
    // 0x1516F9D4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1516F9D8: beq         $a1, $zero, L_1516FA10
    if (ctx->r5 == 0) {
        // 0x1516F9DC: nop
    
            goto L_1516FA10;
    }
    // 0x1516F9DC: nop

    // 0x1516F9E0: beq         $v0, $at, L_1516FA48
    if (ctx->r2 == ctx->r1) {
        // 0x1516F9E4: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_1516FA48;
    }
    // 0x1516F9E4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1516F9E8: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x1516F9EC: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x1516F9F0: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1516F9F4: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x1516F9F8: bnel        $at, $zero, L_1516FA08
    if (ctx->r1 != 0) {
        // 0x1516F9FC: sb          $v0, 0x1F($a0)
        MEM_B(0X1F, ctx->r4) = ctx->r2;
            goto L_1516FA08;
    }
    goto skip_0;
    // 0x1516F9FC: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
    skip_0:
    // 0x1516FA00: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x1516FA04: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
L_1516FA08:
    // 0x1516FA08: b           L_1516FA48
    // 0x1516FA0C: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
        goto L_1516FA48;
    // 0x1516FA0C: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
L_1516FA10:
    // 0x1516FA10: beq         $v0, $zero, L_1516FA34
    if (ctx->r2 == 0) {
        // 0x1516FA14: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_1516FA34;
    }
    // 0x1516FA14: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1516FA18: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x1516FA1C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x1516FA20: subu        $v0, $v0, $t9
    ctx->r2 = SUB32(ctx->r2, ctx->r25);
    // 0x1516FA24: bgezl       $v0, L_1516FA34
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1516FA28: sb          $v0, 0x1F($a0)
        MEM_B(0X1F, ctx->r4) = ctx->r2;
            goto L_1516FA34;
    }
    goto skip_1;
    // 0x1516FA28: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
    skip_1:
    // 0x1516FA2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1516FA30: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
L_1516FA34:
    // 0x1516FA34: sll         $v1, $v0, 9
    ctx->r3 = S32(ctx->r2 << 9);
    // 0x1516FA38: sra         $t0, $v1, 8
    ctx->r8 = S32(SIGNED(ctx->r3) >> 8);
    // 0x1516FA3C: sh          $t0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r8;
    // 0x1516FA40: sh          $t0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r8;
    // 0x1516FA44: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
L_1516FA48:
    // 0x1516FA48: bne         $a1, $zero, L_1516FA60
    if (ctx->r5 != 0) {
        // 0x1516FA4C: nop
    
            goto L_1516FA60;
    }
    // 0x1516FA4C: nop

    // 0x1516FA50: bne         $v0, $zero, L_1516FA60
    if (ctx->r2 != 0) {
        // 0x1516FA54: nop
    
            goto L_1516FA60;
    }
    // 0x1516FA54: nop

    // 0x1516FA58: b           L_1516FA78
    // 0x1516FA5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1516FA78;
    // 0x1516FA5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1516FA60:
    // 0x1516FA60: jal         0x1516F864
    // 0x1516FA64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1516F864(rdram, ctx);
        goto after_0;
    // 0x1516FA64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1516FA68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1516FA6C: jal         0x1516F984
    // 0x1516FA70: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    func_1516F984(rdram, ctx);
        goto after_1;
    // 0x1516FA70: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    after_1:
    // 0x1516FA74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1516FA78:
    // 0x1516FA78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1516FA7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1516FA80: jr          $ra
    // 0x1516FA84: nop

    return;
    return;
    // 0x1516FA84: nop

;}
RECOMP_FUNC void func_1518EB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518EB10: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x1518EB14: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x1518EB18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1518EB1C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x1518EB20: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x1518EB24: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x1518EB28: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x1518EB2C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x1518EB30: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x1518EB34: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1518EB38: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x1518EB3C: addiu       $t6, $sp, 0x77
    ctx->r14 = ADD32(ctx->r29, 0X77);
    // 0x1518EB40: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1518EB44: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x1518EB48: lh          $a1, 0xBE($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XBE);
    // 0x1518EB4C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1518EB50: jal         0x151D5D60
    // 0x1518EB54: addiu       $a3, $sp, 0xB4
    ctx->r7 = ADD32(ctx->r29, 0XB4);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x1518EB54: addiu       $a3, $sp, 0xB4
    ctx->r7 = ADD32(ctx->r29, 0XB4);
    after_0:
    // 0x1518EB58: lw          $v0, 0xB4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB4);
    // 0x1518EB5C: lbu         $t7, 0x77($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X77);
    // 0x1518EB60: beq         $v0, $zero, L_1518EBB0
    if (ctx->r2 == 0) {
        // 0x1518EB64: sw          $v0, 0xB0($sp)
        MEM_W(0XB0, ctx->r29) = ctx->r2;
            goto L_1518EBB0;
    }
    // 0x1518EB64: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    // 0x1518EB68: beq         $t7, $zero, L_1518EBB8
    if (ctx->r15 == 0) {
        // 0x1518EB6C: lh          $t8, 0xBE($sp)
        ctx->r24 = MEM_H(ctx->r29, 0XBE);
            goto L_1518EBB8;
    }
    // 0x1518EB6C: lh          $t8, 0xBE($sp)
    ctx->r24 = MEM_H(ctx->r29, 0XBE);
    // 0x1518EB70: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1518EB74: addu        $v0, $s0, $t9
    ctx->r2 = ADD32(ctx->r16, ctx->r25);
    // 0x1518EB78: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x1518EB7C: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x1518EB80: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x1518EB84: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x1518EB88: jal         0x10022EC0
    // 0x1518EB8C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1518EB8C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x1518EB90: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x1518EB94: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x1518EB98: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1518EB9C: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x1518EBA0: jal         0x10022EC0
    // 0x1518EBA4: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1518EBA4: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
    // 0x1518EBA8: b           L_1518EBBC
    // 0x1518EBAC: lwc1        $f14, 0x34($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X34);
        goto L_1518EBBC;
    // 0x1518EBAC: lwc1        $f14, 0x34($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X34);
L_1518EBB0:
    // 0x1518EBB0: b           L_1518EF2C
    // 0x1518EBB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518EF2C;
    // 0x1518EBB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518EBB8:
    // 0x1518EBB8: lwc1        $f14, 0x34($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X34);
L_1518EBBC:
    // 0x1518EBBC: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1518EBC0: lwc1        $f2, 0x38($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1518EBC4: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x1518EBC8: sub.s       $f18, $f4, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x1518EBCC: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x1518EBD0: lwc1        $f12, 0x3C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1518EBD4: sub.s       $f20, $f6, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x1518EBD8: lwc1        $f8, 0x48($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X48);
    // 0x1518EBDC: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1518EBE0: lh          $t0, 0xBE($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XBE);
    // 0x1518EBE4: sub.s       $f22, $f8, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x1518EBE8: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x1518EBEC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x1518EBF0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x1518EBF4: mul.s       $f6, $f22, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x1518EBF8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1518EBFC: add.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x1518EC00: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x1518EC04: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x1518EC08: add.s       $f24, $f2, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x1518EC0C: lw          $t2, -0x4010($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4010);
    // 0x1518EC10: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1518EC14: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x1518EC18: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x1518EC1C: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x1518EC20: swc1        $f24, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f24.u32l;
    // 0x1518EC24: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x1518EC28: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x1518EC2C: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    // 0x1518EC30: swc1        $f14, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f14.u32l;
    // 0x1518EC34: sub.s       $f22, $f10, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x1518EC38: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x1518EC3C: lwc1        $f10, 0x300($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X300);
    // 0x1518EC40: sub.s       $f20, $f24, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f24.fl - ctx->f2.fl;
    // 0x1518EC44: lwc1        $f6, 0x2F8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x1518EC48: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1518EC4C: sub.s       $f24, $f12, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x1518EC50: lwc1        $f8, 0x2FC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x1518EC54: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x1518EC58: sub.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x1518EC5C: addiu       $v0, $v0, 0x2F8
    ctx->r2 = ADD32(ctx->r2, 0X2F8);
    // 0x1518EC60: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1518EC64: mul.s       $f4, $f20, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x1518EC68: sub.s       $f16, $f2, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x1518EC6C: mul.s       $f6, $f16, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x1518EC70: nop

    // 0x1518EC74: mul.s       $f8, $f22, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x1518EC78: nop

    // 0x1518EC7C: mul.s       $f10, $f24, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x1518EC80: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1518EC84: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x1518EC88: nop

    // 0x1518EC8C: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1518EC90: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1518EC94: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1518EC98: nop

    // 0x1518EC9C: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1518ECA0: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1518ECA4: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1518ECA8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1518ECAC: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1518ECB0: add.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1518ECB4: c.eq.s      $f30, $f26
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f30.fl == ctx->f26.fl;
    // 0x1518ECB8: swc1        $f26, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f26.u32l;
    // 0x1518ECBC: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1518ECC0: bc1f        L_1518ECD8
    if (!c1cs) {
        // 0x1518ECC4: nop
    
            goto L_1518ECD8;
    }
    // 0x1518ECC4: nop

    // 0x1518ECC8: mov.s       $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    ctx->f24.fl = ctx->f30.fl;
    // 0x1518ECCC: mov.s       $f26, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    ctx->f26.fl = ctx->f30.fl;
    // 0x1518ECD0: b           L_1518ECFC
    // 0x1518ECD4: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
        goto L_1518ECFC;
    // 0x1518ECD4: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
L_1518ECD8:
    // 0x1518ECD8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1518ECDC: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1518ECE0: div.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1518ECE4: mul.s       $f24, $f2, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x1518ECE8: nop

    // 0x1518ECEC: mul.s       $f26, $f12, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f26.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x1518ECF0: nop

    // 0x1518ECF4: mul.s       $f28, $f14, $f16
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f28.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x1518ECF8: nop

L_1518ECFC:
    // 0x1518ECFC: add.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x1518ED00: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x1518ED04: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x1518ED08: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1518ED0C: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
    // 0x1518ED10: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x1518ED14: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
    // 0x1518ED18: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x1518ED1C: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1518ED20: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x1518ED24: add.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x1518ED28: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1518ED2C: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x1518ED30: nop

    // 0x1518ED34: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x1518ED38: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1518ED3C: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x1518ED40: add.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f28.fl;
    // 0x1518ED44: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1518ED48: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x1518ED4C: nop

    // 0x1518ED50: sh          $t0, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r8;
    // 0x1518ED54: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x1518ED58: sh          $zero, 0x6($t2)
    MEM_H(0X6, ctx->r10) = 0;
    // 0x1518ED5C: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x1518ED60: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x1518ED64: sw          $t4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r12;
    // 0x1518ED68: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1518ED6C: sub.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f24.fl;
    // 0x1518ED70: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1518ED74: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x1518ED78: nop

    // 0x1518ED7C: sh          $t6, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r14;
    // 0x1518ED80: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1518ED84: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x1518ED88: sub.s       $f4, $f10, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f26.fl;
    // 0x1518ED8C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1518ED90: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x1518ED94: nop

    // 0x1518ED98: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x1518ED9C: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1518EDA0: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x1518EDA4: sub.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f28.fl;
    // 0x1518EDA8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1518EDAC: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x1518EDB0: nop

    // 0x1518EDB4: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
    // 0x1518EDB8: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x1518EDBC: sh          $zero, 0x6($t3)
    MEM_H(0X6, ctx->r11) = 0;
    // 0x1518EDC0: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x1518EDC4: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x1518EDC8: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x1518EDCC: addiu       $t6, $t5, 0x10
    ctx->r14 = ADD32(ctx->r13, 0X10);
    // 0x1518EDD0: sw          $t6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r14;
    // 0x1518EDD4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1518EDD8: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1518EDDC: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1518EDE0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1518EDE4: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x1518EDE8: sub.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1518EDEC: sub.s       $f24, $f6, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1518EDF0: mul.s       $f10, $f20, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x1518EDF4: nop

    // 0x1518EDF8: mul.s       $f4, $f16, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x1518EDFC: nop

    // 0x1518EE00: mul.s       $f6, $f22, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x1518EE04: nop

    // 0x1518EE08: mul.s       $f8, $f24, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x1518EE0C: sub.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1518EE10: mul.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x1518EE14: nop

    // 0x1518EE18: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1518EE1C: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1518EE20: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1518EE24: nop

    // 0x1518EE28: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1518EE2C: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1518EE30: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1518EE34: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1518EE38: add.s       $f26, $f10, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1518EE3C: c.eq.s      $f30, $f26
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f30.fl == ctx->f26.fl;
    // 0x1518EE40: swc1        $f26, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f26.u32l;
    // 0x1518EE44: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1518EE48: bc1f        L_1518EE60
    if (!c1cs) {
        // 0x1518EE4C: nop
    
            goto L_1518EE60;
    }
    // 0x1518EE4C: nop

    // 0x1518EE50: mov.s       $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    ctx->f24.fl = ctx->f30.fl;
    // 0x1518EE54: mov.s       $f26, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    ctx->f26.fl = ctx->f30.fl;
    // 0x1518EE58: b           L_1518EE84
    // 0x1518EE5C: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
        goto L_1518EE84;
    // 0x1518EE5C: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
L_1518EE60:
    // 0x1518EE60: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1518EE64: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1518EE68: div.s       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1518EE6C: mul.s       $f24, $f2, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x1518EE70: nop

    // 0x1518EE74: mul.s       $f26, $f12, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f26.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x1518EE78: nop

    // 0x1518EE7C: mul.s       $f28, $f14, $f16
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f28.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x1518EE80: nop

L_1518EE84:
    // 0x1518EE84: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x1518EE88: lwc1        $f2, 0xA4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x1518EE8C: lwc1        $f0, 0xA8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x1518EE90: add.s       $f8, $f12, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f24.fl;
    // 0x1518EE94: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x1518EE98: add.s       $f4, $f2, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f26.fl;
    // 0x1518EE9C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1518EEA0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1518EEA4: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x1518EEA8: add.s       $f8, $f0, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f28.fl;
    // 0x1518EEAC: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x1518EEB0: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x1518EEB4: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x1518EEB8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1518EEBC: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    // 0x1518EEC0: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x1518EEC4: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x1518EEC8: sub.s       $f4, $f12, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f24.fl;
    // 0x1518EECC: sh          $t3, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r11;
    // 0x1518EED0: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x1518EED4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1518EED8: sh          $zero, 0x6($t6)
    MEM_H(0X6, ctx->r14) = 0;
    // 0x1518EEDC: sub.s       $f8, $f2, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f26.fl;
    // 0x1518EEE0: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x1518EEE4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x1518EEE8: sub.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f28.fl;
    // 0x1518EEEC: addiu       $t7, $t4, 0x10
    ctx->r15 = ADD32(ctx->r12, 0X10);
    // 0x1518EEF0: sw          $t7, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r15;
    // 0x1518EEF4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1518EEF8: sh          $t9, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r25;
    // 0x1518EEFC: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x1518EF00: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1518EF04: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1518EF08: nop

    // 0x1518EF0C: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
    // 0x1518EF10: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x1518EF14: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x1518EF18: nop

    // 0x1518EF1C: sh          $t5, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r13;
    // 0x1518EF20: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x1518EF24: sh          $zero, 0x6($t4)
    MEM_H(0X6, ctx->r12) = 0;
    // 0x1518EF28: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
L_1518EF2C:
    // 0x1518EF2C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x1518EF30: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1518EF34: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x1518EF38: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x1518EF3C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x1518EF40: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x1518EF44: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x1518EF48: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1518EF4C: jr          $ra
    // 0x1518EF50: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x1518EF50: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_1502A8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502A8A0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1502A8A4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1502A8A8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x1502A8AC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1502A8B0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1502A8B4: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x1502A8B8: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x1502A8BC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1502A8C0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1502A8C4: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x1502A8C8: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x1502A8CC: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x1502A8D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1502A8D4: lbu         $t7, 0x35E8($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35E8);
    // 0x1502A8D8: lw          $t8, 0x35F0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X35F0);
    // 0x1502A8DC: sll         $t2, $t9, 3
    ctx->r10 = S32(ctx->r25 << 3);
    // 0x1502A8E0: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x1502A8E4: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x1502A8E8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x1502A8EC: addu        $v0, $t8, $t2
    ctx->r2 = ADD32(ctx->r24, ctx->r10);
    // 0x1502A8F0: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x1502A8F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1502A8F8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1502A8FC: bnel        $t0, $at, L_1502A928
    if (ctx->r8 != ctx->r1) {
        // 0x1502A900: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_1502A928;
    }
    goto skip_0;
    // 0x1502A900: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_0:
    // 0x1502A904: lbu         $a0, 0x2($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X2);
    // 0x1502A908: jal         0x15083E90
    // 0x1502A90C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    func_15083E90(rdram, ctx);
        goto after_0;
    // 0x1502A90C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    after_0:
    // 0x1502A910: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x1502A914: beq         $v0, $zero, L_1502AADC
    if (ctx->r2 == 0) {
        // 0x1502A918: sw          $v0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r2;
            goto L_1502AADC;
    }
    // 0x1502A918: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x1502A91C: b           L_1502A950
    // 0x1502A920: addiu       $v1, $v0, 0x14
    ctx->r3 = ADD32(ctx->r2, 0X14);
        goto L_1502A950;
    // 0x1502A920: addiu       $v1, $v0, 0x14
    ctx->r3 = ADD32(ctx->r2, 0X14);
    // 0x1502A924: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_1502A928:
    // 0x1502A928: bne         $t0, $at, L_1502A950
    if (ctx->r8 != ctx->r1) {
        // 0x1502A92C: nop
    
            goto L_1502A950;
    }
    // 0x1502A92C: nop

    // 0x1502A930: lbu         $a0, 0x2($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X2);
    // 0x1502A934: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x1502A938: jal         0x151149AC
    // 0x1502A93C: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_151149AC(rdram, ctx);
        goto after_1;
    // 0x1502A93C: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_1:
    // 0x1502A940: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1502A944: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x1502A948: beq         $v0, $zero, L_1502AADC
    if (ctx->r2 == 0) {
        // 0x1502A94C: sw          $v0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r2;
            goto L_1502AADC;
    }
    // 0x1502A94C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
L_1502A950:
    // 0x1502A950: bne         $v1, $zero, L_1502A978
    if (ctx->r3 != 0) {
        // 0x1502A954: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_1502A978;
    }
    // 0x1502A954: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1502A958: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x1502A95C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1502A960: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x1502A964: lw          $t3, 0x3958($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3958);
    // 0x1502A968: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x1502A96C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x1502A970: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1502A974: addu        $v1, $t3, $t5
    ctx->r3 = ADD32(ctx->r11, ctx->r13);
L_1502A978:
    // 0x1502A978: lbu         $t7, 0x3C88($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3C88);
    // 0x1502A97C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1502A980: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1502A984: beq         $t7, $at, L_1502AA60
    if (ctx->r15 == ctx->r1) {
        // 0x1502A988: lw          $a1, 0x4C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X4C);
            goto L_1502AA60;
    }
    // 0x1502A988: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x1502A98C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x1502A990: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x1502A994: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x1502A998: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x1502A99C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1502A9A0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x1502A9A4: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x1502A9A8: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x1502A9AC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x1502A9B0: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x1502A9B4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1502A9B8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1502A9BC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1502A9C0: jal         0x1502460C
    // 0x1502A9C4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_1502460C(rdram, ctx);
        goto after_2;
    // 0x1502A9C4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_2:
    // 0x1502A9C8: bne         $v0, $zero, L_1502AADC
    if (ctx->r2 != 0) {
        // 0x1502A9CC: lw          $v1, 0x3C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X3C);
            goto L_1502AADC;
    }
    // 0x1502A9CC: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1502A9D0: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x1502A9D4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x1502A9D8: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x1502A9DC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1502A9E0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1502A9E4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x1502A9E8: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x1502A9EC: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x1502A9F0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x1502A9F4: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x1502A9F8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1502A9FC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1502AA00: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x1502AA04: jal         0x150265CC
    // 0x1502AA08: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_150265CC(rdram, ctx);
        goto after_3;
    // 0x1502AA08: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_3:
    // 0x1502AA0C: bne         $v0, $zero, L_1502AADC
    if (ctx->r2 != 0) {
        // 0x1502AA10: lw          $v1, 0x3C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X3C);
            goto L_1502AADC;
    }
    // 0x1502AA10: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1502AA14: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x1502AA18: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x1502AA1C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x1502AA20: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x1502AA24: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1502AA28: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x1502AA2C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x1502AA30: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x1502AA34: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x1502AA38: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1502AA3C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1502AA40: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1502AA44: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1502AA48: jal         0x15029BB8
    // 0x1502AA4C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_15029BB8(rdram, ctx);
        goto after_4;
    // 0x1502AA4C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_4:
    // 0x1502AA50: beql        $v0, $zero, L_1502AAE0
    if (ctx->r2 == 0) {
        // 0x1502AA54: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1502AAE0;
    }
    goto skip_1;
    // 0x1502AA54: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x1502AA58: b           L_1502AAE0
    // 0x1502AA5C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_1502AAE0;
    // 0x1502AA5C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1502AA60:
    // 0x1502AA60: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x1502AA64: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x1502AA68: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x1502AA6C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1502AA70: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x1502AA74: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x1502AA78: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x1502AA7C: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x1502AA80: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1502AA84: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1502AA88: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x1502AA8C: jal         0x1502460C
    // 0x1502AA90: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_1502460C(rdram, ctx);
        goto after_5;
    // 0x1502AA90: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_5:
    // 0x1502AA94: bne         $v0, $zero, L_1502AADC
    if (ctx->r2 != 0) {
        // 0x1502AA98: lw          $v1, 0x3C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X3C);
            goto L_1502AADC;
    }
    // 0x1502AA98: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1502AA9C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x1502AAA0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x1502AAA4: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x1502AAA8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x1502AAAC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1502AAB0: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x1502AAB4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1502AAB8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x1502AABC: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x1502AAC0: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x1502AAC4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x1502AAC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1502AACC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1502AAD0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1502AAD4: jal         0x15029BB8
    // 0x1502AAD8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_15029BB8(rdram, ctx);
        goto after_6;
    // 0x1502AAD8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_6:
L_1502AADC:
    // 0x1502AADC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1502AAE0:
    // 0x1502AAE0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1502AAE4: jr          $ra
    // 0x1502AAE8: nop

    return;
    return;
    // 0x1502AAE8: nop

;}
RECOMP_FUNC void func_1507B52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B52C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507B530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507B534: jal         0x1507A3E8
    // 0x1507B538: nop

    func_1507A3E8(rdram, ctx);
        goto after_0;
    // 0x1507B538: nop

    after_0:
    // 0x1507B53C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507B540: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1507B544: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x1507B548: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507B54C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507B550: jal         0x1506E46C
    // 0x1507B554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506E46C(rdram, ctx);
        goto after_1;
    // 0x1507B554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x1507B558: beq         $v0, $zero, L_1507B568
    if (ctx->r2 == 0) {
        // 0x1507B55C: addiu       $a0, $zero, 0x64
        ctx->r4 = ADD32(0, 0X64);
            goto L_1507B568;
    }
    // 0x1507B55C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x1507B560: jal         0x1506BA4C
    // 0x1507B564: addiu       $a1, $zero, 0x320
    ctx->r5 = ADD32(0, 0X320);
    func_1506BA4C(rdram, ctx);
        goto after_2;
    // 0x1507B564: addiu       $a1, $zero, 0x320
    ctx->r5 = ADD32(0, 0X320);
    after_2:
L_1507B568:
    // 0x1507B568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507B56C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507B570: jr          $ra
    // 0x1507B574: nop

    return;
    return;
    // 0x1507B574: nop

;}
RECOMP_FUNC void func_150FADC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FADC8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x150FADCC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150FADD0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150FADD4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150FADD8: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x150FADDC: bne         $a2, $at, L_150FADF4
    if (ctx->r6 != ctx->r1) {
        // 0x150FADE0: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_150FADF4;
    }
    // 0x150FADE0: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150FADE4: lw          $t7, 0x58($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X58);
    // 0x150FADE8: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x150FADEC: jr          $ra
    // 0x150FADF0: sw          $t8, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r24;
    return;
    return;
    // 0x150FADF0: sw          $t8, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r24;
L_150FADF4:
    // 0x150FADF4: addiu       $at, $zero, 0x54
    ctx->r1 = ADD32(0, 0X54);
    // 0x150FADF8: bne         $v0, $at, L_150FAE10
    if (ctx->r2 != ctx->r1) {
        // 0x150FADFC: nop
    
            goto L_150FAE10;
    }
    // 0x150FADFC: nop

    // 0x150FAE00: lw          $t9, 0x58($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X58);
    // 0x150FAE04: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x150FAE08: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x150FAE0C: sw          $t0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r8;
L_150FAE10:
    // 0x150FAE10: jr          $ra
    // 0x150FAE14: nop

    return;
    return;
    // 0x150FAE14: nop

;}
RECOMP_FUNC void func_1515B674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515B674: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x1515B678: sw          $s1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r17;
    // 0x1515B67C: sll         $s1, $a0, 16
    ctx->r17 = S32(ctx->r4 << 16);
    // 0x1515B680: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x1515B684: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x1515B688: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x1515B68C: sw          $s5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r21;
    // 0x1515B690: sw          $s4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r20;
    // 0x1515B694: sw          $s3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r19;
    // 0x1515B698: sw          $s2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r18;
    // 0x1515B69C: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x1515B6A0: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x1515B6A4: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x1515B6A8: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x1515B6AC: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x1515B6B0: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x1515B6B4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1515B6B8: sw          $a0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r4;
    // 0x1515B6BC: jal         0x150ADA20
    // 0x1515B6C0: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1515B6C0: nop

    after_0:
    // 0x1515B6C4: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x1515B6C8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1515B6CC: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x1515B6D0: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x1515B6D4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1515B6D8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1515B6DC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1515B6E0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x1515B6E4: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x1515B6E8: sh          $t7, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r15;
    // 0x1515B6EC: sb          $t8, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = ctx->r24;
    // 0x1515B6F0: sh          $t9, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r25;
    // 0x1515B6F4: sh          $t0, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r8;
    // 0x1515B6F8: sb          $t1, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = ctx->r9;
    // 0x1515B6FC: sb          $t2, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r10;
    // 0x1515B700: sb          $t3, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r11;
    // 0x1515B704: sb          $t4, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = ctx->r12;
    // 0x1515B708: addiu       $s0, $v1, -0x1
    ctx->r16 = ADD32(ctx->r3, -0X1);
    // 0x1515B70C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1515B710: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1515B714: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1515B718: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1515B71C: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x1515B720: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x1515B724: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x1515B728: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x1515B72C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x1515B730: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x1515B734: sh          $s1, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r17;
    // 0x1515B738: sb          $s1, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = ctx->r17;
    // 0x1515B73C: sb          $t5, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r13;
    // 0x1515B740: sb          $t6, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r14;
    // 0x1515B744: sb          $t7, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r15;
    // 0x1515B748: sb          $t8, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = ctx->r24;
    // 0x1515B74C: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x1515B750: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x1515B754: sw          $zero, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = 0;
    // 0x1515B758: sb          $zero, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = 0;
    // 0x1515B75C: sb          $t9, 0xDD($sp)
    MEM_B(0XDD, ctx->r29) = ctx->r25;
    // 0x1515B760: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    // 0x1515B764: sw          $t1, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r9;
    // 0x1515B768: sw          $t2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r10;
    // 0x1515B76C: sw          $t3, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r11;
    // 0x1515B770: beq         $v1, $zero, L_1515B958
    if (ctx->r3 == 0) {
        // 0x1515B774: sra         $s0, $t4, 16
        ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
            goto L_1515B958;
    }
    // 0x1515B774: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
    // 0x1515B778: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B77C: lwc1        $f30, 0x6458($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X6458);
    // 0x1515B780: lui         $at, 0x453C
    ctx->r1 = S32(0X453C << 16);
    // 0x1515B784: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x1515B788: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x1515B78C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1515B790: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B794: lwc1        $f24, 0x645C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X645C);
    // 0x1515B798: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B79C: lwc1        $f22, 0x6460($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6460);
    // 0x1515B7A0: lui         $at, 0x42D2
    ctx->r1 = S32(0X42D2 << 16);
    // 0x1515B7A4: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x1515B7A8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1515B7AC: addiu       $s1, $s1, -0x2FC
    ctx->r17 = ADD32(ctx->r17, -0X2FC);
    // 0x1515B7B0: addiu       $s5, $sp, 0x80
    ctx->r21 = ADD32(ctx->r29, 0X80);
    // 0x1515B7B4: addiu       $s4, $sp, 0x9C
    ctx->r20 = ADD32(ctx->r29, 0X9C);
    // 0x1515B7B8: addiu       $s3, $zero, 0x65
    ctx->r19 = ADD32(0, 0X65);
    // 0x1515B7BC: addiu       $s2, $zero, 0x33
    ctx->r18 = ADD32(0, 0X33);
L_1515B7C0:
    // 0x1515B7C0: jal         0x150ADA68
    // 0x1515B7C4: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x1515B7C4: nop

    after_1:
    // 0x1515B7C8: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1515B7CC: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x1515B7D0: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x1515B7D4: jal         0x150ADA68
    // 0x1515B7D8: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x1515B7D8: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x1515B7DC: mul.s       $f10, $f0, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x1515B7E0: nop

    // 0x1515B7E4: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x1515B7E8: jal         0x150ADA68
    // 0x1515B7EC: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x1515B7EC: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x1515B7F0: mul.s       $f18, $f0, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x1515B7F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B7F8: lwc1        $f4, 0x6464($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6464);
    // 0x1515B7FC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1515B800: mul.s       $f2, $f6, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x1515B804: swc1        $f2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f2.u32l;
    // 0x1515B808: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    // 0x1515B80C: jal         0x150ADA68
    // 0x1515B810: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x1515B810: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x1515B814: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B818: lwc1        $f8, 0x6468($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6468);
    // 0x1515B81C: lui         $at, 0x42BC
    ctx->r1 = S32(0X42BC << 16);
    // 0x1515B820: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1515B824: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1515B828: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1515B82C: mul.s       $f4, $f18, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x1515B830: jal         0x150ADA68
    // 0x1515B834: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x1515B834: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x1515B838: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x1515B83C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1515B840: nop

    // 0x1515B844: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1515B848: add.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x1515B84C: jal         0x150ADA68
    // 0x1515B850: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x1515B850: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x1515B854: lui         $at, 0x4314
    ctx->r1 = S32(0X4314 << 16);
    // 0x1515B858: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1515B85C: nop

    // 0x1515B860: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1515B864: add.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x1515B868: jal         0x151D8E20
    // 0x1515B86C: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    func_151D8E20(rdram, ctx);
        goto after_7;
    // 0x1515B86C: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x1515B870: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1515B874: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x1515B878: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x1515B87C: jalr        $t9
    // 0x1515B880: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x1515B880: nop

    after_8:
    // 0x1515B884: jal         0x150ADA20
    // 0x1515B888: sb          $v0, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x1515B888: sb          $v0, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r2;
    after_9:
    // 0x1515B88C: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x1515B890: mfhi        $t8
    ctx->r24 = hi;
    // 0x1515B894: addiu       $t0, $t8, 0x32
    ctx->r8 = ADD32(ctx->r24, 0X32);
    // 0x1515B898: bne         $s2, $zero, L_1515B8A4
    if (ctx->r18 != 0) {
        // 0x1515B89C: nop
    
            goto L_1515B8A4;
    }
    // 0x1515B89C: nop

    // 0x1515B8A0: break       7
    do_break(353745056);
L_1515B8A4:
    // 0x1515B8A4: sh          $t0, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r8;
    // 0x1515B8A8: jal         0x150ADA20
    // 0x1515B8AC: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x1515B8AC: nop

    after_10:
    // 0x1515B8B0: divu        $zero, $v0, $s3
    lo = S32(U32(ctx->r2) / U32(ctx->r19)); hi = S32(U32(ctx->r2) % U32(ctx->r19));
    // 0x1515B8B4: mfhi        $t1
    ctx->r9 = hi;
    // 0x1515B8B8: addiu       $t2, $t1, 0x64
    ctx->r10 = ADD32(ctx->r9, 0X64);
    // 0x1515B8BC: bne         $s3, $zero, L_1515B8C8
    if (ctx->r19 != 0) {
        // 0x1515B8C0: nop
    
            goto L_1515B8C8;
    }
    // 0x1515B8C0: nop

    // 0x1515B8C4: break       7
    do_break(353745092);
L_1515B8C8:
    // 0x1515B8C8: sb          $t2, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = ctx->r10;
    // 0x1515B8CC: jal         0x150ADA20
    // 0x1515B8D0: nop

    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x1515B8D0: nop

    after_11:
    // 0x1515B8D4: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x1515B8D8: beq         $t3, $zero, L_1515B8E8
    if (ctx->r11 == 0) {
        // 0x1515B8DC: lhu         $t4, 0xB0($sp)
        ctx->r12 = MEM_HU(ctx->r29, 0XB0);
            goto L_1515B8E8;
    }
    // 0x1515B8DC: lhu         $t4, 0xB0($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0XB0);
    // 0x1515B8E0: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x1515B8E4: sh          $t5, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r13;
L_1515B8E8:
    // 0x1515B8E8: jal         0x150ADA20
    // 0x1515B8EC: nop

    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x1515B8EC: nop

    after_12:
    // 0x1515B8F0: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x1515B8F4: beq         $t6, $zero, L_1515B908
    if (ctx->r14 == 0) {
        // 0x1515B8F8: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_1515B908;
    }
    // 0x1515B8F8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x1515B8FC: lhu         $t7, 0xB0($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0XB0);
    // 0x1515B900: ori         $t9, $t7, 0x4
    ctx->r25 = ctx->r15 | 0X4;
    // 0x1515B904: sh          $t9, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r25;
L_1515B908:
    // 0x1515B908: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x1515B90C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1515B910: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1515B914: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1515B918: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1515B91C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1515B920: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1515B924: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1515B928: jal         0x1515548C
    // 0x1515B92C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1515548C(rdram, ctx);
        goto after_13;
    // 0x1515B92C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x1515B930: beq         $v0, $zero, L_1515B944
    if (ctx->r2 == 0) {
        // 0x1515B934: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_1515B944;
    }
    // 0x1515B934: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x1515B938: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x1515B93C: jal         0x10022EC0
    // 0x1515B940: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x1515B940: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_14:
L_1515B944:
    // 0x1515B944: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1515B948: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x1515B94C: sll         $t2, $s0, 16
    ctx->r10 = S32(ctx->r16 << 16);
    // 0x1515B950: bne         $v0, $zero, L_1515B7C0
    if (ctx->r2 != 0) {
        // 0x1515B954: sra         $s0, $t2, 16
        ctx->r16 = S32(SIGNED(ctx->r10) >> 16);
            goto L_1515B7C0;
    }
    // 0x1515B954: sra         $s0, $t2, 16
    ctx->r16 = S32(SIGNED(ctx->r10) >> 16);
L_1515B958:
    // 0x1515B958: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x1515B95C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1515B960: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x1515B964: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x1515B968: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x1515B96C: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x1515B970: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x1515B974: lw          $s0, 0x54($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X54);
    // 0x1515B978: lw          $s1, 0x58($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X58);
    // 0x1515B97C: lw          $s2, 0x5C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X5C);
    // 0x1515B980: lw          $s3, 0x60($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X60);
    // 0x1515B984: lw          $s4, 0x64($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X64);
    // 0x1515B988: lw          $s5, 0x68($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X68);
    // 0x1515B98C: jr          $ra
    // 0x1515B990: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    return;
    // 0x1515B990: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_15022998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15022998: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1502299C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150229A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x150229A4: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x150229A8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x150229AC: beq         $v0, $at, L_150229BC
    if (ctx->r2 == ctx->r1) {
        // 0x150229B0: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_150229BC;
    }
    // 0x150229B0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x150229B4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150229B8: bne         $v0, $at, L_150229D4
    if (ctx->r2 != ctx->r1) {
        // 0x150229BC: addu        $v1, $v1, $t6
        ctx->r3 = ADD32(ctx->r3, ctx->r14);
            goto L_150229D4;
    }
L_150229BC:
    // 0x150229BC: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x150229C0: lw          $v1, 0x6014($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6014);
    // 0x150229C4: beql        $v1, $zero, L_150229D8
    if (ctx->r3 == 0) {
        // 0x150229C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150229D8;
    }
    goto skip_0;
    // 0x150229C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150229CC: jalr        $v1
    // 0x150229D0: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x150229D0: nop

    after_0:
L_150229D4:
    // 0x150229D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150229D8:
    // 0x150229D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150229DC: jr          $ra
    // 0x150229E0: nop

    return;
    return;
    // 0x150229E0: nop

;}
RECOMP_FUNC void __osSumcalc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10027910: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x10027914: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
    // 0x10027918: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x1002791C: blez        $a1, L_10027960
    if (SIGNED(ctx->r5) <= 0) {
        // 0x10027920: sw          $zero, 0xC($sp)
        MEM_W(0XC, ctx->r29) = 0;
            goto L_10027960;
    }
    // 0x10027920: sw          $zero, 0xC($sp)
    MEM_W(0XC, ctx->r29) = 0;
L_10027924:
    // 0x10027924: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x10027928: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x1002792C: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x10027930: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x10027934: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x10027938: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x1002793C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x10027940: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x10027944: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x10027948: slt         $at, $t4, $a1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1002794C: sw          $t4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r12;
    // 0x10027950: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x10027954: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x10027958: bne         $at, $zero, L_10027924
    if (ctx->r1 != 0) {
        // 0x1002795C: sw          $t2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r10;
            goto L_10027924;
    }
    // 0x1002795C: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
L_10027960:
    // 0x10027960: lhu         $v0, 0xA($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XA);
    // 0x10027964: jr          $ra
    // 0x10027968: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x10027968: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_1507B15C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B15C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507B160: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507B164: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1507B168: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x1507B16C: sb          $t6, 0x8A($t7)
    MEM_B(0X8A, ctx->r15) = ctx->r14;
    // 0x1507B170: jr          $ra
    // 0x1507B174: nop

    return;
    return;
    // 0x1507B174: nop

;}
RECOMP_FUNC void func_151EF800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151EF800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151EF804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151EF808: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151EF80C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151EF810: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x151EF814: jal         0x151EFE00
    // 0x151EF818: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_151EFE00(rdram, ctx);
        goto after_0;
    // 0x151EF818: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151EF81C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x151EF820: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x151EF824: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x151EF828: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151EF82C: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151EF830: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151EF834: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x151EF838: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151EF83C: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151EF840: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151EF844: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151EF848: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x151EF84C: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151EF850: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151EF854: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x151EF858: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x151EF85C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151EF860: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151EF864: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EF868: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x151EF86C: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x151EF870: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151EF874: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x151EF878: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    // 0x151EF87C: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x151EF880: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x151EF884: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151EF888: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x151EF88C: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151EF890: swc1        $f6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f6.u32l;
    // 0x151EF894: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151EF898: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x151EF89C: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151EF8A0: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x151EF8A4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x151EF8A8: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x151EF8AC: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x151EF8B0: swc1        $f6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f6.u32l;
    // 0x151EF8B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151EF8B8: nop

    // 0x151EF8BC: swc1        $f6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f6.u32l;
    // 0x151EF8C0: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
    // 0x151EF8C4: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151EF8C8: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151EF8CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x151EF8D0: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151EF8D4: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151EF8D8: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151EF8DC: beq         $v1, $a0, L_151EF920
    if (ctx->r3 == ctx->r4) {
        // 0x151EF8E0: lwc1        $f16, 0xC($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
            goto L_151EF920;
    }
    // 0x151EF8E0: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
L_151EF8E4:
    // 0x151EF8E4: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151EF8E8: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x151EF8EC: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151EF8F0: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x151EF8F4: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151EF8F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x151EF8FC: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151EF900: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151EF904: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x151EF908: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151EF90C: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x151EF910: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x151EF914: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x151EF918: bne         $v1, $a0, L_151EF8E4
    if (ctx->r3 != ctx->r4) {
        // 0x151EF91C: swc1        $f4, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
            goto L_151EF8E4;
    }
    // 0x151EF91C: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
L_151EF920:
    // 0x151EF920: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151EF924: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x151EF928: swc1        $f12, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f12.u32l;
    // 0x151EF92C: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x151EF930: nop

    // 0x151EF934: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151EF938: swc1        $f10, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f10.u32l;
    // 0x151EF93C: swc1        $f6, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f6.u32l;
    // 0x151EF940: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    // 0x151EF944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151EF948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151EF94C: jr          $ra
    // 0x151EF950: nop

    return;
    return;
    // 0x151EF950: nop

;}
RECOMP_FUNC void func_15076D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15076D04: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15076D08: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15076D0C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15076D10: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15076D14: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15076D18: bgez        $t6, L_15076D2C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x15076D1C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15076D2C;
    }
    // 0x15076D1C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15076D20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15076D24: nop

    // 0x15076D28: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_15076D2C:
    // 0x15076D2C: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15076D30: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x15076D34: jr          $ra
    // 0x15076D38: nop

    return;
    return;
    // 0x15076D38: nop

;}
RECOMP_FUNC void func_150A24C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A24C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150A24C4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x150A24C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150A24CC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150A24D0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x150A24D4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x150A24D8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150A24DC: beql        $t6, $at, L_150A25C4
    if (ctx->r14 == ctx->r1) {
        // 0x150A24E0: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150A25C4;
    }
    goto skip_0;
    // 0x150A24E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x150A24E4: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x150A24E8: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x150A24EC: beql        $a0, $zero, L_150A2508
    if (ctx->r4 == 0) {
        // 0x150A24F0: lbu         $v0, 0x17($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X17);
            goto L_150A2508;
    }
    goto skip_1;
    // 0x150A24F0: lbu         $v0, 0x17($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X17);
    skip_1:
    // 0x150A24F4: lbu         $t7, 0x17($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X17);
    // 0x150A24F8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150A24FC: bnel        $t7, $at, L_150A25A4
    if (ctx->r15 != ctx->r1) {
        // 0x150A2500: slti        $at, $a0, 0x2
        ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_150A25A4;
    }
    goto skip_2;
    // 0x150A2500: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    skip_2:
    // 0x150A2504: lbu         $v0, 0x17($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X17);
L_150A2508:
    // 0x150A2508: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    // 0x150A250C: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x150A2510: lbu         $t0, 0x1A($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1A);
    // 0x150A2514: lbu         $t1, 0x1C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1C);
    // 0x150A2518: lbu         $t2, 0x1D($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1D);
    // 0x150A251C: lw          $t3, 0x20($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X20);
    // 0x150A2520: lh          $t9, 0x2($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2);
    // 0x150A2524: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x150A2528: lh          $a2, 0x4($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X4);
    // 0x150A252C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x150A2530: lh          $t5, 0x6($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X6);
    // 0x150A2534: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x150A2538: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x150A253C: sll         $t4, $t2, 4
    ctx->r12 = S32(ctx->r10 << 4);
    // 0x150A2540: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x150A2544: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x150A2548: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x150A254C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x150A2550: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x150A2554: addu        $a1, $t9, $t4
    ctx->r5 = ADD32(ctx->r25, ctx->r12);
    // 0x150A2558: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x150A255C: jal         0x15183290
    // 0x150A2560: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_15183290(rdram, ctx);
        goto after_0;
    // 0x150A2560: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_0:
    // 0x150A2564: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150A2568: beql        $v0, $at, L_150A25C4
    if (ctx->r2 == ctx->r1) {
        // 0x150A256C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150A25C4;
    }
    goto skip_3;
    // 0x150A256C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_3:
    // 0x150A2570: lbu         $t7, 0x17($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X17);
    // 0x150A2574: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150A2578: sll         $t8, $v0, 8
    ctx->r24 = S32(ctx->r2 << 8);
    // 0x150A257C: beql        $t7, $at, L_150A25C4
    if (ctx->r15 == ctx->r1) {
        // 0x150A2580: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150A25C4;
    }
    goto skip_4;
    // 0x150A2580: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_4:
    // 0x150A2584: lw          $t4, 0x1C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1C);
    // 0x150A2588: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x150A258C: ori         $t9, $t8, 0xF0
    ctx->r25 = ctx->r24 | 0XF0;
    // 0x150A2590: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x150A2594: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x150A2598: b           L_150A25C0
    // 0x150A259C: sw          $t6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r14;
        goto L_150A25C0;
    // 0x150A259C: sw          $t6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r14;
    // 0x150A25A0: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
L_150A25A4:
    // 0x150A25A4: beq         $at, $zero, L_150A25B0
    if (ctx->r1 == 0) {
        // 0x150A25A8: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_150A25B0;
    }
    // 0x150A25A8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x150A25AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_150A25B0:
    // 0x150A25B0: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x150A25B4: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x150A25B8: or          $t8, $t7, $v0
    ctx->r24 = ctx->r15 | ctx->r2;
    // 0x150A25BC: sw          $t8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r24;
L_150A25C0:
    // 0x150A25C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_150A25C4:
    // 0x150A25C4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x150A25C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x150A25CC: jr          $ra
    // 0x150A25D0: nop

    return;
    return;
    // 0x150A25D0: nop

;}
RECOMP_FUNC void func_15169804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15169804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15169808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516980C: jal         0x15168B10
    // 0x15169810: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15168B10(rdram, ctx);
        goto after_0;
    // 0x15169810: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x15169814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15169818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1516981C: jr          $ra
    // 0x15169820: nop

    return;
    return;
    // 0x15169820: nop

;}
RECOMP_FUNC void func_1507AD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507AD60: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507AD64: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507AD68: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1507AD6C: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x1507AD70: sb          $t6, 0x1E4($t7)
    MEM_B(0X1E4, ctx->r15) = ctx->r14;
    // 0x1507AD74: jr          $ra
    // 0x1507AD78: nop

    return;
    return;
    // 0x1507AD78: nop

;}
RECOMP_FUNC void func_1000F44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000F44C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1000F450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000F454: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1000F458: jal         0x10022DC0
    // 0x1000F45C: nop

    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x1000F45C: nop

    after_0:
    // 0x1000F460: lhu         $v1, 0x1A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1A);
    // 0x1000F464: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x1000F468: addiu       $t8, $t8, 0x25E0
    ctx->r24 = ADD32(ctx->r24, 0X25E0);
    // 0x1000F46C: andi        $t6, $v1, 0xF
    ctx->r14 = ctx->r3 & 0XF;
    // 0x1000F470: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1000F474: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1000F478: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1000F47C: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x1000F480: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x1000F484: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1000F488: beq         $a2, $zero, L_1000F4BC
    if (ctx->r6 == 0) {
        // 0x1000F48C: nop
    
            goto L_1000F4BC;
    }
    // 0x1000F48C: nop

    // 0x1000F490: lhu         $t9, 0x0($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X0);
    // 0x1000F494: bne         $v1, $t9, L_1000F4BC
    if (ctx->r3 != ctx->r25) {
        // 0x1000F498: nop
    
            goto L_1000F4BC;
    }
    // 0x1000F498: nop

    // 0x1000F49C: lbu         $t0, 0x53($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X53);
    // 0x1000F4A0: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x1000F4A4: beq         $t1, $zero, L_1000F4BC
    if (ctx->r9 == 0) {
        // 0x1000F4A8: nop
    
            goto L_1000F4BC;
    }
    // 0x1000F4A8: nop

    // 0x1000F4AC: jal         0x10022DE0
    // 0x1000F4B0: nop

    __osRestoreInt_recomp(rdram, ctx);
        goto after_1;
    // 0x1000F4B0: nop

    after_1:
    // 0x1000F4B4: b           L_1000F4C8
    // 0x1000F4B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000F4C8;
    // 0x1000F4B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000F4BC:
    // 0x1000F4BC: jal         0x10022DE0
    // 0x1000F4C0: nop

    __osRestoreInt_recomp(rdram, ctx);
        goto after_2;
    // 0x1000F4C0: nop

    after_2:
    // 0x1000F4C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1000F4C8:
    // 0x1000F4C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000F4CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1000F4D0: jr          $ra
    // 0x1000F4D4: nop

    return;
    return;
    // 0x1000F4D4: nop

;}
RECOMP_FUNC void func_15161494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15161494: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15161498: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1516149C: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x151614A0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151614A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151614A8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x151614AC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x151614B0: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x151614B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151614B8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151614BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151614C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151614C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151614C8: lwc1        $f10, 0x6AE4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6AE4);
    // 0x151614CC: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x151614D0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151614D4: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x151614D8: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x151614DC: sb          $zero, 0x34($sp)
    MEM_B(0X34, ctx->r29) = 0;
    // 0x151614E0: sb          $t6, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r14;
    // 0x151614E4: sh          $t7, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r15;
    // 0x151614E8: sb          $t8, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r24;
    // 0x151614EC: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x151614F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x151614F4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x151614F8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x151614FC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x15161500: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x15161504: jal         0x1516037C
    // 0x15161508: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_1516037C(rdram, ctx);
        goto after_0;
    // 0x15161508: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x1516150C: beq         $v0, $zero, L_1516152C
    if (ctx->r2 == 0) {
        // 0x15161510: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1516152C;
    }
    // 0x15161510: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15161514: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x15161518: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x1516151C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x15161520: jal         0x10022EC0
    // 0x15161524: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15161524: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_1:
    // 0x15161528: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
L_1516152C:
    // 0x1516152C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15161530: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15161534: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15161538: jr          $ra
    // 0x1516153C: nop

    return;
    return;
    // 0x1516153C: nop

;}
RECOMP_FUNC void func_15072968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072968: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1507296C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15072970: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15072974: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15072978: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507297C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x15072980: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x15072984: lui         $a3, 0x4140
    ctx->r7 = S32(0X4140 << 16);
    // 0x15072988: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1507298C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x15072990: jal         0x1505E650
    // 0x15072994: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x15072994: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x15072998: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507299C: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x150729A0: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x150729A4: sb          $t6, 0x89($t7)
    MEM_B(0X89, ctx->r15) = ctx->r14;
    // 0x150729A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150729AC: jr          $ra
    // 0x150729B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x150729B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1516865C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516865C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x15168660: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x15168664: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x15168668: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x1516866C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x15168670: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x15168674: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x15168678: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x1516867C: addiu       $t5, $t5, -0x35B4
    ctx->r13 = ADD32(ctx->r13, -0X35B4);
    // 0x15168680: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x15168684: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x15168688: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1516868C: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x15168690: lbu         $t9, 0xA0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XA0);
    // 0x15168694: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x15168698: addiu       $t1, $zero, 0x2000
    ctx->r9 = ADD32(0, 0X2000);
    // 0x1516869C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x151686A0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x151686A4: lw          $t0, 0x0($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X0);
    // 0x151686A8: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x151686AC: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x151686B0: lhu         $v1, 0x8($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X8);
    // 0x151686B4: lhu         $t2, 0x6($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0X6);
    // 0x151686B8: lbu         $t0, 0x1B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1B);
    // 0x151686BC: addiu       $t8, $v1, 0x100
    ctx->r24 = ADD32(ctx->r3, 0X100);
    // 0x151686C0: sll         $t9, $t8, 21
    ctx->r25 = S32(ctx->r24 << 21);
    // 0x151686C4: addiu       $t7, $t2, 0x100
    ctx->r15 = ADD32(ctx->r10, 0X100);
    // 0x151686C8: sll         $t8, $t7, 21
    ctx->r24 = S32(ctx->r15 << 21);
    // 0x151686CC: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x151686D0: sra         $t2, $t8, 16
    ctx->r10 = S32(SIGNED(ctx->r24) >> 16);
    // 0x151686D4: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_151686D8:
    // 0x151686D8: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x151686DC: addiu       $t4, $t4, 0x40
    ctx->r12 = ADD32(ctx->r12, 0X40);
    // 0x151686E0: sh          $zero, -0x2A($t4)
    MEM_H(-0X2A, ctx->r12) = 0;
    // 0x151686E4: sb          $a1, -0x24($t4)
    MEM_B(-0X24, ctx->r12) = ctx->r5;
    // 0x151686E8: sb          $a2, -0x23($t4)
    MEM_B(-0X23, ctx->r12) = ctx->r6;
    // 0x151686EC: sb          $a3, -0x22($t4)
    MEM_B(-0X22, ctx->r12) = ctx->r7;
    // 0x151686F0: sb          $t0, -0x21($t4)
    MEM_B(-0X21, ctx->r12) = ctx->r8;
    // 0x151686F4: sh          $zero, -0x1A($t4)
    MEM_H(-0X1A, ctx->r12) = 0;
    // 0x151686F8: sb          $a1, -0x14($t4)
    MEM_B(-0X14, ctx->r12) = ctx->r5;
    // 0x151686FC: sb          $a2, -0x13($t4)
    MEM_B(-0X13, ctx->r12) = ctx->r6;
    // 0x15168700: sb          $a3, -0x12($t4)
    MEM_B(-0X12, ctx->r12) = ctx->r7;
    // 0x15168704: sb          $t0, -0x11($t4)
    MEM_B(-0X11, ctx->r12) = ctx->r8;
    // 0x15168708: sh          $zero, -0xA($t4)
    MEM_H(-0XA, ctx->r12) = 0;
    // 0x1516870C: sb          $a1, -0x4($t4)
    MEM_B(-0X4, ctx->r12) = ctx->r5;
    // 0x15168710: sb          $a2, -0x3($t4)
    MEM_B(-0X3, ctx->r12) = ctx->r6;
    // 0x15168714: sb          $a3, -0x2($t4)
    MEM_B(-0X2, ctx->r12) = ctx->r7;
    // 0x15168718: sb          $t0, -0x1($t4)
    MEM_B(-0X1, ctx->r12) = ctx->r8;
    // 0x1516871C: sh          $zero, -0x3A($t4)
    MEM_H(-0X3A, ctx->r12) = 0;
    // 0x15168720: sb          $a1, -0x34($t4)
    MEM_B(-0X34, ctx->r12) = ctx->r5;
    // 0x15168724: sb          $a2, -0x33($t4)
    MEM_B(-0X33, ctx->r12) = ctx->r6;
    // 0x15168728: sb          $a3, -0x32($t4)
    MEM_B(-0X32, ctx->r12) = ctx->r7;
    // 0x1516872C: bne         $t3, $s0, L_151686D8
    if (ctx->r11 != ctx->r16) {
        // 0x15168730: sb          $t0, -0x31($t4)
        MEM_B(-0X31, ctx->r12) = ctx->r8;
            goto L_151686D8;
    }
    // 0x15168730: sb          $t0, -0x31($t4)
    MEM_B(-0X31, ctx->r12) = ctx->r8;
    // 0x15168734: lhu         $a1, 0x98($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X98);
    // 0x15168738: andi        $t6, $a1, 0x80
    ctx->r14 = ctx->r5 & 0X80;
    // 0x1516873C: beql        $t6, $zero, L_1516876C
    if (ctx->r14 == 0) {
        // 0x15168740: andi        $t6, $a1, 0x100
        ctx->r14 = ctx->r5 & 0X100;
            goto L_1516876C;
    }
    goto skip_0;
    // 0x15168740: andi        $t6, $a1, 0x100
    ctx->r14 = ctx->r5 & 0X100;
    skip_0:
    // 0x15168744: lbu         $t7, 0xA0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XA0);
    // 0x15168748: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
    // 0x1516874C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15168750: addu        $t9, $t5, $t8
    ctx->r25 = ADD32(ctx->r13, ctx->r24);
    // 0x15168754: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x15168758: lhu         $v0, 0x8($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X8);
    // 0x1516875C: addiu       $t7, $v0, 0x100
    ctx->r15 = ADD32(ctx->r2, 0X100);
    // 0x15168760: sll         $t8, $t7, 21
    ctx->r24 = S32(ctx->r15 << 21);
    // 0x15168764: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15168768: andi        $t6, $a1, 0x100
    ctx->r14 = ctx->r5 & 0X100;
L_1516876C:
    // 0x1516876C: beql        $t6, $zero, L_1516879C
    if (ctx->r14 == 0) {
        // 0x15168770: sh          $t1, 0x68($a0)
        MEM_H(0X68, ctx->r4) = ctx->r9;
            goto L_1516879C;
    }
    goto skip_1;
    // 0x15168770: sh          $t1, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r9;
    skip_1:
    // 0x15168774: lbu         $t7, 0xA0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XA0);
    // 0x15168778: addiu       $t2, $zero, 0x2000
    ctx->r10 = ADD32(0, 0X2000);
    // 0x1516877C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15168780: addu        $t9, $t5, $t8
    ctx->r25 = ADD32(ctx->r13, ctx->r24);
    // 0x15168784: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x15168788: lhu         $t1, 0x6($t6)
    ctx->r9 = MEM_HU(ctx->r14, 0X6);
    // 0x1516878C: addiu       $t7, $t1, 0x100
    ctx->r15 = ADD32(ctx->r9, 0X100);
    // 0x15168790: sll         $t8, $t7, 21
    ctx->r24 = S32(ctx->r15 << 21);
    // 0x15168794: sra         $t1, $t8, 16
    ctx->r9 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15168798: sh          $t1, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r9;
L_1516879C:
    // 0x1516879C: lh          $a1, 0x68($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X68);
    // 0x151687A0: sh          $v0, 0x7A($a0)
    MEM_H(0X7A, ctx->r4) = ctx->r2;
    // 0x151687A4: sh          $t2, 0x78($a0)
    MEM_H(0X78, ctx->r4) = ctx->r10;
    // 0x151687A8: sh          $a1, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r5;
    // 0x151687AC: sh          $a1, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r5;
    // 0x151687B0: sh          $a1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r5;
    // 0x151687B4: lh          $a1, 0x7A($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X7A);
    // 0x151687B8: sh          $v1, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = ctx->r3;
    // 0x151687BC: sh          $zero, 0x88($a0)
    MEM_H(0X88, ctx->r4) = 0;
    // 0x151687C0: sh          $a1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r5;
    // 0x151687C4: sh          $a1, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r5;
    // 0x151687C8: sh          $a1, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r5;
    // 0x151687CC: lh          $a1, 0x78($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X78);
    // 0x151687D0: sh          $zero, 0x9C($a0)
    MEM_H(0X9C, ctx->r4) = 0;
    // 0x151687D4: sh          $zero, 0x9E($a0)
    MEM_H(0X9E, ctx->r4) = 0;
    // 0x151687D8: sh          $a1, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r5;
    // 0x151687DC: sh          $a1, 0x48($a0)
    MEM_H(0X48, ctx->r4) = ctx->r5;
    // 0x151687E0: sh          $a1, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r5;
    // 0x151687E4: lh          $a1, 0x5A($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X5A);
    // 0x151687E8: sh          $a1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r5;
    // 0x151687EC: sh          $a1, 0x4A($a0)
    MEM_H(0X4A, ctx->r4) = ctx->r5;
    // 0x151687F0: sh          $a1, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r5;
    // 0x151687F4: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x151687F8: jr          $ra
    // 0x151687FC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x151687FC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_150F2994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F2994: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150F2998: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150F299C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x150F29A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150F29A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150F29A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150F29AC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x150F29B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150F29B4: addiu       $s1, $zero, 0xE
    ctx->r17 = ADD32(0, 0XE);
    // 0x150F29B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_150F29BC:
    // 0x150F29BC: addiu       $a1, $s0, 0x4016
    ctx->r5 = ADD32(ctx->r16, 0X4016);
    // 0x150F29C0: jal         0x1509BFB0
    // 0x150F29C4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_0;
    // 0x150F29C4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x150F29C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150F29CC: bnel        $s0, $s1, L_150F29BC
    if (ctx->r16 != ctx->r17) {
        // 0x150F29D0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_150F29BC;
    }
    goto skip_0;
    // 0x150F29D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_0:
    // 0x150F29D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150F29D8: addiu       $a1, $zero, 0x405D
    ctx->r5 = ADD32(0, 0X405D);
    // 0x150F29DC: jal         0x1509BFB0
    // 0x150F29E0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_1;
    // 0x150F29E0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_1:
    // 0x150F29E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150F29E8: addiu       $a1, $zero, 0x405F
    ctx->r5 = ADD32(0, 0X405F);
    // 0x150F29EC: jal         0x1509BFB0
    // 0x150F29F0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_2;
    // 0x150F29F0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x150F29F4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150F29F8: lw          $t6, 0x2E4C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2E4C);
    // 0x150F29FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150F2A00: addiu       $a1, $zero, 0x4063
    ctx->r5 = ADD32(0, 0X4063);
    // 0x150F2A04: lbu         $t7, 0x15($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X15);
    // 0x150F2A08: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x150F2A0C: beql        $t8, $zero, L_150F2A40
    if (ctx->r24 == 0) {
        // 0x150F2A10: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150F2A40;
    }
    goto skip_1;
    // 0x150F2A10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x150F2A14: jal         0x1509BFB0
    // 0x150F2A18: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_3;
    // 0x150F2A18: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_3:
    // 0x150F2A1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150F2A20: addiu       $a1, $zero, 0x4064
    ctx->r5 = ADD32(0, 0X4064);
    // 0x150F2A24: jal         0x1509BFB0
    // 0x150F2A28: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_4;
    // 0x150F2A28: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x150F2A2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150F2A30: addiu       $a1, $zero, 0x4065
    ctx->r5 = ADD32(0, 0X4065);
    // 0x150F2A34: jal         0x1509BFB0
    // 0x150F2A38: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_5;
    // 0x150F2A38: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_5:
    // 0x150F2A3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150F2A40:
    // 0x150F2A40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150F2A44: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150F2A48: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150F2A4C: jr          $ra
    // 0x150F2A50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x150F2A50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_151BD42C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BD42C: sh          $zero, 0x80($a0)
    MEM_H(0X80, ctx->r4) = 0;
    // 0x151BD430: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151BD434: jr          $ra
    // 0x151BD438: nop

    return;
    return;
    // 0x151BD438: nop

;}
RECOMP_FUNC void func_150AD364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AD364: mfc1        $t4, $f26
    ctx->r12 = (int32_t)ctx->f26.u32l;
    // 0x150AD368: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150AD36C: lw          $t0, -0x41C4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X41C4);
    // 0x150AD370: sll         $gp, $t2, 2
    ctx->r28 = S32(ctx->r10 << 2);
    // 0x150AD374: addu        $t0, $t0, $gp
    ctx->r8 = ADD32(ctx->r8, ctx->r28);
    // 0x150AD378: sll         $gp, $t2, 3
    ctx->r28 = S32(ctx->r10 << 3);
    // 0x150AD37C: addu        $gp, $gp, $t0
    ctx->r28 = ADD32(ctx->r28, ctx->r8);
    // 0x150AD380: lw          $t6, 0x0($gp)
    ctx->r14 = MEM_W(ctx->r28, 0X0);
    // 0x150AD384: mfc1        $t5, $f27
    ctx->r13 = (int32_t)ctx->f_odd[(27 - 1) * 2];
    // 0x150AD388: addu        $t6, $t6, $fp
    ctx->r14 = ADD32(ctx->r14, ctx->r30);
    // 0x150AD38C: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x150AD390: lh          $t8, 0x2($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X2);
    // 0x150AD394: mtc1        $t7, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r15;
    // 0x150AD398: lh          $t7, 0x4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X4);
    // 0x150AD39C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150AD3A0: mtc1        $t7, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r15;
    // 0x150AD3A4: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x150AD3A8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150AD3AC: lw          $t6, 0x4($gp)
    ctx->r14 = MEM_W(ctx->r28, 0X4);
    // 0x150AD3B0: cvt.s.w     $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    ctx->f5.fl = CVT_S_W(ctx->f_odd[(5 - 1) * 2]);
    // 0x150AD3B4: addu        $t6, $t6, $fp
    ctx->r14 = ADD32(ctx->r14, ctx->r30);
    // 0x150AD3B8: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x150AD3BC: lh          $t8, 0x2($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X2);
    // 0x150AD3C0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x150AD3C4: lh          $t7, 0x4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X4);
    // 0x150AD3C8: mtc1        $t8, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r24;
    // 0x150AD3CC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x150AD3D0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150AD3D4: cvt.s.w     $f7, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    ctx->f7.fl = CVT_S_W(ctx->f_odd[(7 - 1) * 2]);
    // 0x150AD3D8: lw          $t6, 0x8($gp)
    ctx->r14 = MEM_W(ctx->r28, 0X8);
    // 0x150AD3DC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150AD3E0: addu        $t6, $t6, $fp
    ctx->r14 = ADD32(ctx->r14, ctx->r30);
    // 0x150AD3E4: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x150AD3E8: lh          $t8, 0x2($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X2);
    // 0x150AD3EC: mtc1        $t7, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r15;
    // 0x150AD3F0: lh          $t7, 0x4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X4);
    // 0x150AD3F4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x150AD3F8: mtc1        $t7, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r15;
    // 0x150AD3FC: cvt.s.w     $f9, $f9
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    ctx->f9.fl = CVT_S_W(ctx->f_odd[(9 - 1) * 2]);
    // 0x150AD400: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150AD404: cvt.s.w     $f11, $f11
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    ctx->f11.fl = CVT_S_W(ctx->f_odd[(11 - 1) * 2]);
    // 0x150AD408: sub.s       $f13, $f7, $f4
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f13.fl = ctx->f7.fl - ctx->f4.fl;
    // 0x150AD40C: sub.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150AD410: sub.s       $f17, $f11, $f5
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f17.fl = ctx->f11.fl - ctx->f5.fl;
    // 0x150AD414: sub.s       $f14, $f8, $f5
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f5.fl;
    // 0x150AD418: mul.s       $f18, $f13, $f17
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f18.fl = MUL_S(ctx->f13.fl, ctx->f17.fl);
    // 0x150AD41C: sub.s       $f15, $f9, $f3
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f15.fl = ctx->f9.fl - ctx->f3.fl;
    // 0x150AD420: mul.s       $f1, $f14, $f16
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f1.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x150AD424: sub.s       $f18, $f18, $f1
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f1.fl;
    // 0x150AD428: mul.s       $f19, $f14, $f15
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f19.fl = MUL_S(ctx->f14.fl, ctx->f15.fl);
    // 0x150AD42C: sub.s       $f12, $f6, $f3
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f3.fl;
    // 0x150AD430: mul.s       $f1, $f12, $f17
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f1.fl = MUL_S(ctx->f12.fl, ctx->f17.fl);
    // 0x150AD434: sub.s       $f19, $f19, $f1
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f19.fl = ctx->f19.fl - ctx->f1.fl;
    // 0x150AD438: mul.s       $f26, $f12, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f26.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x150AD43C: nop

    // 0x150AD440: mul.s       $f1, $f13, $f15
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f1.fl = MUL_S(ctx->f13.fl, ctx->f15.fl);
    // 0x150AD444: sub.s       $f26, $f26, $f1
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f26.fl = ctx->f26.fl - ctx->f1.fl;
    // 0x150AD448: mul.s       $f2, $f18, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f3.fl);
    // 0x150AD44C: neg.s       $f27, $f2
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f27.fl = -ctx->f2.fl;
    // 0x150AD450: mul.s       $f2, $f19, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f19.fl, ctx->f4.fl);
    // 0x150AD454: sub.s       $f27, $f27, $f2
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f27.fl = ctx->f27.fl - ctx->f2.fl;
    // 0x150AD458: mul.s       $f2, $f26, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = MUL_S(ctx->f26.fl, ctx->f5.fl);
    // 0x150AD45C: sub.s       $f27, $f27, $f2
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f27.fl = ctx->f27.fl - ctx->f2.fl;
    // 0x150AD460: mul.s       $f1, $f18, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x150AD464: nop

    // 0x150AD468: mul.s       $f2, $f19, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = MUL_S(ctx->f19.fl, ctx->f21.fl);
    // 0x150AD46C: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x150AD470: mul.s       $f2, $f26, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f26.fl, ctx->f22.fl);
    // 0x150AD474: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x150AD478: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x150AD47C: bc1t        L_150AD75C
    if (c1cs) {
        // 0x150AD480: nop
    
            goto L_150AD75C;
    }
    // 0x150AD480: nop

    // 0x150AD484: mul.s       $f2, $f18, $f23
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f23.fl);
    // 0x150AD488: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x150AD48C: mul.s       $f0, $f19, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f19.fl, ctx->f24.fl);
    // 0x150AD490: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x150AD494: mul.s       $f0, $f26, $f25
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f0.fl = MUL_S(ctx->f26.fl, ctx->f25.fl);
    // 0x150AD498: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x150AD49C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x150AD4A0: lw          $t6, -0x41C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X41C0);
    // 0x150AD4A4: sub.s       $f2, $f2, $f27
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f27.fl;
    // 0x150AD4A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150AD4AC: div.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    // 0x150AD4B0: sll         $t7, $t2, 3
    ctx->r15 = S32(ctx->r10 << 3);
    // 0x150AD4B4: c.olt.s     $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x150AD4B8: bc1t        L_150AD75C
    if (c1cs) {
        // 0x150AD4BC: addu        $t6, $t6, $t7
        ctx->r14 = ADD32(ctx->r14, ctx->r15);
            goto L_150AD75C;
    }
    // 0x150AD4BC: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x150AD4C0: mul.s       $f2, $f1, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x150AD4C4: lh          $t0, 0x0($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X0);
    // 0x150AD4C8: add.s       $f18, $f23, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f23.fl + ctx->f2.fl;
    // 0x150AD4CC: mul.s       $f2, $f1, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x150AD4D0: lh          $t7, 0x4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X4);
    // 0x150AD4D4: add.s       $f19, $f24, $f2
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f19.fl = ctx->f24.fl + ctx->f2.fl;
    // 0x150AD4D8: mul.s       $f2, $f1, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f1.fl, ctx->f22.fl);
    // 0x150AD4DC: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x150AD4E0: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x150AD4E4: mtc1        $t0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r8;
    // 0x150AD4E8: add.s       $f26, $f25, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = ctx->f25.fl + ctx->f2.fl;
    // 0x150AD4EC: mtc1        $t7, $f2
    ctx->f2.u32l = ctx->r15;
    // 0x150AD4F0: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x150AD4F4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x150AD4F8: c.ule.s     $f1, $f18
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f1.fl <= ctx->f18.fl;
    // 0x150AD4FC: bc1f        L_150AD75C
    if (!c1cs) {
        // 0x150AD500: c.olt.s     $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
            goto L_150AD75C;
    }
    // 0x150AD500: c.olt.s     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x150AD504: bc1t        L_150AD75C
    if (c1cs) {
        // 0x150AD508: lh          $t0, 0x2($t6)
        ctx->r8 = MEM_H(ctx->r14, 0X2);
            goto L_150AD75C;
    }
    // 0x150AD508: lh          $t0, 0x2($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X2);
    // 0x150AD50C: lh          $t7, 0x6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X6);
    // 0x150AD510: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x150AD514: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x150AD518: mtc1        $t0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r8;
    // 0x150AD51C: mtc1        $t7, $f2
    ctx->f2.u32l = ctx->r15;
    // 0x150AD520: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x150AD524: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x150AD528: c.ule.s     $f1, $f26
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f1.fl <= ctx->f26.fl;
    // 0x150AD52C: bc1f        L_150AD75C
    if (!c1cs) {
        // 0x150AD530: c.olt.s     $f2, $f26
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
            goto L_150AD75C;
    }
    // 0x150AD530: c.olt.s     $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
    // 0x150AD534: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x150AD538: lw          $t6, -0x41BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X41BC);
    // 0x150AD53C: bc1t        L_150AD75C
    if (c1cs) {
        // 0x150AD540: sll         $t7, $t2, 2
        ctx->r15 = S32(ctx->r10 << 2);
            goto L_150AD75C;
    }
    // 0x150AD540: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x150AD544: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x150AD548: lh          $t0, 0x0($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X0);
    // 0x150AD54C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x150AD550: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x150AD554: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x150AD558: mtc1        $t0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r8;
    // 0x150AD55C: mtc1        $t7, $f2
    ctx->f2.u32l = ctx->r15;
    // 0x150AD560: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x150AD564: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x150AD568: c.ule.s     $f1, $f19
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 19);
    c1cs = ctx->f1.fl <= ctx->f19.fl;
    // 0x150AD56C: bc1f        L_150AD75C
    if (!c1cs) {
        // 0x150AD570: c.olt.s     $f2, $f19
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 19);
    c1cs = ctx->f2.fl < ctx->f19.fl;
            goto L_150AD75C;
    }
    // 0x150AD570: c.olt.s     $f2, $f19
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 19);
    c1cs = ctx->f2.fl < ctx->f19.fl;
    // 0x150AD574: bc1t        L_150AD75C
    if (c1cs) {
        // 0x150AD578: sub.s       $f1, $f18, $f23
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f1.fl = ctx->f18.fl - ctx->f23.fl;
            goto L_150AD75C;
    }
    // 0x150AD578: sub.s       $f1, $f18, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f1.fl = ctx->f18.fl - ctx->f23.fl;
    // 0x150AD57C: mul.s       $f27, $f1, $f1
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f27.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x150AD580: sub.s       $f1, $f19, $f24
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f1.fl = ctx->f19.fl - ctx->f24.fl;
    // 0x150AD584: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x150AD588: add.s       $f27, $f27, $f1
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f27.fl = ctx->f27.fl + ctx->f1.fl;
    // 0x150AD58C: sub.s       $f1, $f26, $f25
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f1.fl = ctx->f26.fl - ctx->f25.fl;
    // 0x150AD590: mul.s       $f1, $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x150AD594: add.s       $f27, $f27, $f1
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f27.fl = ctx->f27.fl + ctx->f1.fl;
    // 0x150AD598: sqrt.s      $f27, $f27
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f27.fl); 
    ctx->f27.fl = sqrtf(ctx->f27.fl);
    // 0x150AD59C: c.ult.s     $f27, $f28
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f27.fl < ctx->f28.fl;
    // 0x150AD5A0: bc1f        L_150AD75C
    if (!c1cs) {
        // 0x150AD5A4: sub.s       $f12, $f6, $f3
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f3.fl;
            goto L_150AD75C;
    }
    // 0x150AD5A4: sub.s       $f12, $f6, $f3
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f3.fl;
    // 0x150AD5A8: sub.s       $f13, $f7, $f4
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f13.fl = ctx->f7.fl - ctx->f4.fl;
    // 0x150AD5AC: sub.s       $f14, $f8, $f5
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f5.fl;
    // 0x150AD5B0: sub.s       $f15, $f18, $f3
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f15.fl = ctx->f18.fl - ctx->f3.fl;
    // 0x150AD5B4: sub.s       $f16, $f19, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f19.fl - ctx->f4.fl;
    // 0x150AD5B8: sub.s       $f17, $f26, $f5
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f17.fl = ctx->f26.fl - ctx->f5.fl;
    // 0x150AD5BC: mfc1        $v1, $f20
    ctx->r3 = (int32_t)ctx->f20.u32l;
    // 0x150AD5C0: mfc1        $t9, $f27
    ctx->r25 = (int32_t)ctx->f_odd[(27 - 1) * 2];
    // 0x150AD5C4: mul.s       $f1, $f13, $f17
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f1.fl = MUL_S(ctx->f13.fl, ctx->f17.fl);
    // 0x150AD5C8: nop

    // 0x150AD5CC: mul.s       $f27, $f14, $f16
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f27.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x150AD5D0: sub.s       $f1, $f1, $f27
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f27.fl;
    // 0x150AD5D4: mul.s       $f2, $f14, $f15
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f15.fl);
    // 0x150AD5D8: nop

    // 0x150AD5DC: mul.s       $f27, $f12, $f17
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f27.fl = MUL_S(ctx->f12.fl, ctx->f17.fl);
    // 0x150AD5E0: sub.s       $f2, $f2, $f27
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f27.fl;
    // 0x150AD5E4: mul.s       $f20, $f12, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x150AD5E8: nop

    // 0x150AD5EC: mul.s       $f27, $f13, $f15
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f27.fl = MUL_S(ctx->f13.fl, ctx->f15.fl);
    // 0x150AD5F0: sub.s       $f20, $f20, $f27
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f27.fl;
    // 0x150AD5F4: abs.s       $f27, $f1
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f27.fl = fabsf(ctx->f1.fl);
    // 0x150AD5F8: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x150AD5FC: c.ule.s     $f27, $f0
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f27.fl <= ctx->f0.fl;
    // 0x150AD600: bc1f        L_150AD658
    if (!c1cs) {
        // 0x150AD604: nop
    
            goto L_150AD658;
    }
    // 0x150AD604: nop

    // 0x150AD608: abs.s       $f27, $f20
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f27.fl = fabsf(ctx->f20.fl);
    // 0x150AD60C: c.ule.s     $f27, $f0
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f27.fl <= ctx->f0.fl;
    // 0x150AD610: bc1f        L_150AD6A8
    if (!c1cs) {
        // 0x150AD614: sub.s       $f14, $f11, $f8
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f11.fl - ctx->f8.fl;
            goto L_150AD6A8;
    }
    // 0x150AD614: sub.s       $f14, $f11, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f11.fl - ctx->f8.fl;
    // 0x150AD618: sub.s       $f15, $f18, $f6
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f15.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x150AD61C: sub.s       $f12, $f9, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f9.fl - ctx->f6.fl;
    // 0x150AD620: sub.s       $f17, $f26, $f8
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f17.fl = ctx->f26.fl - ctx->f8.fl;
    // 0x150AD624: mul.s       $f1, $f14, $f15
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f1.fl = MUL_S(ctx->f14.fl, ctx->f15.fl);
    // 0x150AD628: nop

    // 0x150AD62C: mul.s       $f27, $f12, $f17
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f27.fl = MUL_S(ctx->f12.fl, ctx->f17.fl);
    // 0x150AD630: sub.s       $f1, $f1, $f27
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f27.fl;
    // 0x150AD634: sub.s       $f14, $f5, $f11
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f14.fl = ctx->f5.fl - ctx->f11.fl;
    // 0x150AD638: sub.s       $f15, $f18, $f9
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f15.fl = ctx->f18.fl - ctx->f9.fl;
    // 0x150AD63C: sub.s       $f12, $f3, $f9
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f12.fl = ctx->f3.fl - ctx->f9.fl;
    // 0x150AD640: sub.s       $f17, $f26, $f11
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f17.fl = ctx->f26.fl - ctx->f11.fl;
    // 0x150AD644: mul.s       $f20, $f14, $f15
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f20.fl = MUL_S(ctx->f14.fl, ctx->f15.fl);
    // 0x150AD648: nop

    // 0x150AD64C: mul.s       $f27, $f12, $f17
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f27.fl = MUL_S(ctx->f12.fl, ctx->f17.fl);
    // 0x150AD650: j           L_150AD6E8
    // 0x150AD654: sub.s       $f20, $f20, $f27
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f27.fl;
        goto L_150AD6E8;
    // 0x150AD654: sub.s       $f20, $f20, $f27
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f27.fl;
L_150AD658:
    // 0x150AD658: abs.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = fabsf(ctx->f20.fl);
    // 0x150AD65C: c.ule.s     $f0, $f27
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 27);
    c1cs = ctx->f0.fl <= ctx->f27.fl;
    // 0x150AD660: bc1f        L_150AD6A8
    if (!c1cs) {
        // 0x150AD664: sub.s       $f13, $f10, $f7
        CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f13.fl = ctx->f10.fl - ctx->f7.fl;
            goto L_150AD6A8;
    }
    // 0x150AD664: sub.s       $f13, $f10, $f7
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f13.fl = ctx->f10.fl - ctx->f7.fl;
    // 0x150AD668: sub.s       $f17, $f26, $f8
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f17.fl = ctx->f26.fl - ctx->f8.fl;
    // 0x150AD66C: sub.s       $f14, $f11, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f11.fl - ctx->f8.fl;
    // 0x150AD670: sub.s       $f16, $f19, $f7
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f16.fl = ctx->f19.fl - ctx->f7.fl;
    // 0x150AD674: mul.s       $f2, $f13, $f17
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f2.fl = MUL_S(ctx->f13.fl, ctx->f17.fl);
    // 0x150AD678: nop

    // 0x150AD67C: mul.s       $f27, $f14, $f16
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f27.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x150AD680: sub.s       $f2, $f2, $f27
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f27.fl;
    // 0x150AD684: sub.s       $f13, $f4, $f10
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f13.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x150AD688: sub.s       $f17, $f26, $f11
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f17.fl = ctx->f26.fl - ctx->f11.fl;
    // 0x150AD68C: sub.s       $f14, $f5, $f11
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f14.fl = ctx->f5.fl - ctx->f11.fl;
    // 0x150AD690: sub.s       $f16, $f19, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f19.fl - ctx->f10.fl;
    // 0x150AD694: mul.s       $f20, $f13, $f17
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f20.fl = MUL_S(ctx->f13.fl, ctx->f17.fl);
    // 0x150AD698: nop

    // 0x150AD69C: mul.s       $f27, $f14, $f16
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f27.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x150AD6A0: j           L_150AD6E8
    // 0x150AD6A4: sub.s       $f20, $f20, $f27
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f27.fl;
        goto L_150AD6E8;
    // 0x150AD6A4: sub.s       $f20, $f20, $f27
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f27.fl;
L_150AD6A8:
    // 0x150AD6A8: sub.s       $f13, $f10, $f7
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f13.fl = ctx->f10.fl - ctx->f7.fl;
    // 0x150AD6AC: sub.s       $f15, $f18, $f6
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f15.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x150AD6B0: sub.s       $f12, $f9, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f9.fl - ctx->f6.fl;
    // 0x150AD6B4: sub.s       $f16, $f19, $f7
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f16.fl = ctx->f19.fl - ctx->f7.fl;
    // 0x150AD6B8: mul.s       $f1, $f12, $f16
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f1.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x150AD6BC: nop

    // 0x150AD6C0: mul.s       $f27, $f13, $f15
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f27.fl = MUL_S(ctx->f13.fl, ctx->f15.fl);
    // 0x150AD6C4: sub.s       $f1, $f1, $f27
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f27.fl;
    // 0x150AD6C8: sub.s       $f13, $f4, $f10
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f13.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x150AD6CC: sub.s       $f15, $f18, $f9
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f15.fl = ctx->f18.fl - ctx->f9.fl;
    // 0x150AD6D0: sub.s       $f12, $f3, $f9
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f12.fl = ctx->f3.fl - ctx->f9.fl;
    // 0x150AD6D4: sub.s       $f16, $f19, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f19.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f19.fl - ctx->f10.fl;
    // 0x150AD6D8: mul.s       $f2, $f12, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x150AD6DC: nop

    // 0x150AD6E0: mul.s       $f27, $f13, $f15
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f27.fl = MUL_S(ctx->f13.fl, ctx->f15.fl);
    // 0x150AD6E4: sub.s       $f2, $f2, $f27
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f27.fl;
L_150AD6E8:
    // 0x150AD6E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150AD6EC: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x150AD6F0: c.ult.s     $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x150AD6F4: bc1f        L_150AD700
    if (!c1cs) {
        // 0x150AD6F8: c.ult.s     $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_150AD700;
    }
    // 0x150AD6F8: c.ult.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150AD6FC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_150AD700:
    // 0x150AD700: bc1f        L_150AD70C
    if (!c1cs) {
        // 0x150AD704: c.ult.s     $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
            goto L_150AD70C;
    }
    // 0x150AD704: c.ult.s     $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x150AD708: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_150AD70C:
    // 0x150AD70C: bc1f        L_150AD718
    if (!c1cs) {
        // 0x150AD710: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_150AD718;
    }
    // 0x150AD710: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150AD714: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_150AD718:
    // 0x150AD718: mtc1        $t9, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r25;
    // 0x150AD71C: mtc1        $v1, $f20
    ctx->f20.u32l = ctx->r3;
    // 0x150AD720: beq         $t0, $zero, L_150AD730
    if (ctx->r8 == 0) {
        // 0x150AD724: nop
    
            goto L_150AD730;
    }
    // 0x150AD724: nop

    // 0x150AD728: bne         $t0, $at, L_150AD75C
    if (ctx->r8 != ctx->r1) {
        // 0x150AD72C: nop
    
            goto L_150AD75C;
    }
    // 0x150AD72C: nop

L_150AD730:
    // 0x150AD730: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150AD734: mov.s       $f29, $f18
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 18);
    ctx->f29.fl = ctx->f18.fl;
    // 0x150AD738: mov.s       $f30, $f19
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 19);
    ctx->f30.fl = ctx->f19.fl;
    // 0x150AD73C: mov.s       $f31, $f26
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 26);
    ctx->f31.fl = ctx->f26.fl;
    // 0x150AD740: mov.s       $f28, $f27
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 27);
    ctx->f28.fl = ctx->f27.fl;
    // 0x150AD744: or          $s5, $gp, $zero
    ctx->r21 = ctx->r28 | 0;
    // 0x150AD748: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x150AD74C: or          $s7, $t2, $zero
    ctx->r23 = ctx->r10 | 0;
L_150AD750:
    // 0x150AD750: mtc1        $t4, $f26
    ctx->f26.u32l = ctx->r12;
    // 0x150AD754: jr          $ra
    // 0x150AD758: mtc1        $t5, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r13;
    return;
    return;
    // 0x150AD758: mtc1        $t5, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r13;
L_150AD75C:
    // 0x150AD75C: j           L_150AD750
    // 0x150AD760: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150AD750;
    // 0x150AD760: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}

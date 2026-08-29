#include <stdio.h>
#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_15052260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15052260: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15052264: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15052268: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1505226C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15052270: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x15052274: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15052278: lbu         $v1, 0x6B($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6B);
    // 0x1505227C: beq         $v1, $at, L_15052288
    if (ctx->r3 == ctx->r1) {
        // 0x15052280: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15052288;
    }
    // 0x15052280: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15052284: bne         $v1, $at, L_150522A0
    if (ctx->r3 != ctx->r1) {
        // 0x15052288: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_150522A0;
    }
L_15052288:
    // 0x15052288: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505228C: lwc1        $f12, -0x6CC4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6CC4);
    // 0x15052290: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15052294: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15052298: b           L_150522B4
    // 0x1505229C: lwc1        $f14, 0x18($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X18);
        goto L_150522B4;
    // 0x1505229C: lwc1        $f14, 0x18($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X18);
L_150522A0:
    // 0x150522A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150522A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150522A8: nop

    // 0x150522AC: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    // 0x150522B0: lwc1        $f14, 0x18($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X18);
L_150522B4:
    // 0x150522B4: swc1        $f14, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->f14.u32l;
    // 0x150522B8: lbu         $t6, 0x6B($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6B);
    // 0x150522BC: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x150522C0: beql        $at, $zero, L_15052368
    if (ctx->r1 == 0) {
        // 0x150522C4: lwc1        $f4, 0x28($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
            goto L_15052368;
    }
    goto skip_0;
    // 0x150522C4: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    skip_0:
    // 0x150522C8: lh          $t7, 0x6C($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X6C);
    // 0x150522CC: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150522D0: lwc1        $f2, 0x1C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150522D4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x150522D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150522DC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150522E0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150522E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150522E8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x150522EC: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x150522F0: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x150522F4: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x150522F8: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x150522FC: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    // 0x15052300: lh          $t8, 0x6E($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6E);
    // 0x15052304: addiu       $t9, $t8, -0x50
    ctx->r25 = ADD32(ctx->r24, -0X50);
    // 0x15052308: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1505230C: nop

    // 0x15052310: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15052314: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x15052318: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x1505231C: add.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x15052320: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x15052324: lh          $t0, 0x70($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X70);
    // 0x15052328: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x1505232C: nop

    // 0x15052330: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15052334: sub.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x15052338: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1505233C: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x15052340: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x15052344: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15052348: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x1505234C: jal         0x1505E650
    // 0x15052350: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x15052350: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x15052354: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x15052358: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505235C: b           L_150523B4
    // 0x15052360: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
        goto L_150523B4;
    // 0x15052360: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x15052364: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
L_15052368:
    // 0x15052368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505236C: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x15052370: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15052374: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x15052378: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x1505237C: nop

    // 0x15052380: bnel        $t2, $zero, L_15052394
    if (ctx->r10 != 0) {
        // 0x15052384: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_15052394;
    }
    goto skip_1;
    // 0x15052384: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_1:
    // 0x15052388: b           L_150523AC
    // 0x1505238C: sb          $zero, 0x6B($v0)
    MEM_B(0X6B, ctx->r2) = 0;
        goto L_150523AC;
    // 0x1505238C: sb          $zero, 0x6B($v0)
    MEM_B(0X6B, ctx->r2) = 0;
    // 0x15052390: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_15052394:
    // 0x15052394: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15052398: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x1505239C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150523A0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x150523A4: jal         0x1505E650
    // 0x150523A8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_1505E650(rdram, ctx);
        goto after_1;
    // 0x150523A8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
L_150523AC:
    // 0x150523AC: jal         0x1505A770
    // 0x150523B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1505A770(rdram, ctx);
        goto after_2;
    // 0x150523B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_150523B4:
    // 0x150523B4: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150523B8: lwc1        $f8, 0x118($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X118);
    // 0x150523BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150523C0: lwc1        $f4, -0x6CC0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6CC0);
    // 0x150523C4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x150523C8: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x150523CC: bc1fl       L_150523F8
    if (!c1cs) {
        // 0x150523D0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150523F8;
    }
    goto skip_2;
    // 0x150523D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x150523D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150523D8: lw          $t3, 0x31C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X31C);
    // 0x150523DC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150523E0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x150523E4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x150523E8: sb          $zero, 0x6B($t3)
    MEM_B(0X6B, ctx->r11) = 0;
    // 0x150523EC: sb          $zero, 0x83($s0)
    MEM_B(0X83, ctx->r16) = 0;
    // 0x150523F0: sb          $t4, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r12;
    // 0x150523F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150523F8:
    // 0x150523F8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150523FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15052400: jr          $ra
    // 0x15052404: nop

    return;
    return;
    // 0x15052404: nop

;}
RECOMP_FUNC void func_15022248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15022248: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1502224C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x15022250: sb          $zero, 0x354A($at)
    MEM_B(0X354A, ctx->r1) = 0;
    // 0x15022254: jr          $ra
    // 0x15022258: nop

    return;
    return;
    // 0x15022258: nop

;}
RECOMP_FUNC void func_150781A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150781A4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150781A8: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x150781AC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150781B0: lbu         $t6, 0x1891($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1891);
    // 0x150781B4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x150781B8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150781BC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150781C0: sb          $t6, 0x23F($t7)
    MEM_B(0X23F, ctx->r15) = ctx->r14;
    // 0x150781C4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x150781C8: lbu         $t8, 0x1892($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1892);
    // 0x150781CC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150781D0: sb          $t8, 0x240($t9)
    MEM_B(0X240, ctx->r25) = ctx->r24;
    // 0x150781D4: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x150781D8: lbu         $t0, 0x1890($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X1890);
    // 0x150781DC: sb          $t0, 0x241($t1)
    MEM_B(0X241, ctx->r9) = ctx->r8;
    // 0x150781E0: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x150781E4: lbu         $t2, 0x1893($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X1893);
    // 0x150781E8: sb          $t2, 0x242($t3)
    MEM_B(0X242, ctx->r11) = ctx->r10;
    // 0x150781EC: jr          $ra
    // 0x150781F0: nop

    return;
    return;
    // 0x150781F0: nop

;}
RECOMP_FUNC void func_151C04F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C04F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151C04FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151C0500: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x151C0504: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x151C0508: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x151C050C: jal         0x150ADA68
    // 0x151C0510: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151C0510: nop

    after_0:
    // 0x151C0514: jal         0x150ADA20
    // 0x151C0518: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151C0518: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x151C051C: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x151C0520: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x151C0524: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151C0528: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x151C052C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151C0530: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x151C0534: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151C0538: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C053C: add.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x151C0540: mfhi        $t6
    ctx->r14 = hi;
    // 0x151C0544: addiu       $t7, $t6, 0xC8
    ctx->r15 = ADD32(ctx->r14, 0XC8);
    // 0x151C0548: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x151C054C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x151C0550: lui         $a2, 0x3F97
    ctx->r6 = S32(0X3F97 << 16);
    // 0x151C0554: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151C0558: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x151C055C: bgez        $t7, L_151C0574
    if (SIGNED(ctx->r15) >= 0) {
        // 0x151C0560: ori         $a2, $a2, 0x4EB9
        ctx->r6 = ctx->r6 | 0X4EB9;
            goto L_151C0574;
    }
    // 0x151C0560: ori         $a2, $a2, 0x4EB9
    ctx->r6 = ctx->r6 | 0X4EB9;
    // 0x151C0564: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151C0568: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C056C: nop

    // 0x151C0570: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_151C0574:
    // 0x151C0574: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151C0578: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x151C057C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x151C0580: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x151C0584: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151C0588: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x151C058C: jal         0x151541B8
    // 0x151C0590: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_151541B8(rdram, ctx);
        goto after_2;
    // 0x151C0590: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_2:
    // 0x151C0594: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151C0598: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151C059C: jr          $ra
    // 0x151C05A0: nop

    return;
    return;
    // 0x151C05A0: nop

;}
RECOMP_FUNC void func_150C7350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C7350: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150C7354: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150C7358: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150C735C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150C7360: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x150C7364: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150C7368: ori         $at, $at, 0x4000
    ctx->r1 = ctx->r1 | 0X4000;
    // 0x150C736C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x150C7370: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
    // 0x150C7374: addiu       $t8, $zero, 0x4003
    ctx->r24 = ADD32(0, 0X4003);
    // 0x150C7378: addiu       $t9, $zero, 0x4004
    ctx->r25 = ADD32(0, 0X4004);
    // 0x150C737C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150C7380: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150C7384: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x150C7388: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x150C738C: addiu       $a2, $zero, 0xAC
    ctx->r6 = ADD32(0, 0XAC);
    // 0x150C7390: jal         0x1509BE40
    // 0x150C7394: addiu       $a3, $zero, 0x4002
    ctx->r7 = ADD32(0, 0X4002);
    func_1509BE40(rdram, ctx);
        goto after_0;
    // 0x150C7394: addiu       $a3, $zero, 0x4002
    ctx->r7 = ADD32(0, 0X4002);
    after_0:
    // 0x150C7398: beql        $v0, $zero, L_150C73B8
    if (ctx->r2 == 0) {
        // 0x150C739C: lw          $t2, 0x84($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X84);
            goto L_150C73B8;
    }
    goto skip_0;
    // 0x150C739C: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    skip_0:
    // 0x150C73A0: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
    // 0x150C73A4: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x150C73A8: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x150C73AC: b           L_150C73C8
    // 0x150C73B0: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
        goto L_150C73C8;
    // 0x150C73B0: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    // 0x150C73B4: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
L_150C73B8:
    // 0x150C73B8: lui         $at, 0xFFBF
    ctx->r1 = S32(0XFFBF << 16);
    // 0x150C73BC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150C73C0: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x150C73C4: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
L_150C73C8:
    // 0x150C73C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150C73CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150C73D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150C73D4: jr          $ra
    // 0x150C73D8: nop

    return;
    return;
    // 0x150C73D8: nop

;}
RECOMP_FUNC void func_15122AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15122AE0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15122AE4: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x15122AE8: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x15122AEC: addiu       $s2, $s2, 0x2FA0
    ctx->r18 = ADD32(ctx->r18, 0X2FA0);
    // 0x15122AF0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15122AF4: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x15122AF8: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x15122AFC: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x15122B00: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x15122B04: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x15122B08: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x15122B0C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    printf("[func_15122AE0] entry: t6=MEM_W(0x800C-15F8)=%08X, s2=%08X\n", (uint32_t)ctx->r14, (uint32_t)ctx->r18); fflush(stdout);
    // 0x15122B10: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15122B14: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15122B18: lw          $t6, -0x15F8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X15F8);
    // 0x15122B1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15122B20: lwc1        $f8, 0x34D0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X34D0);
    // 0x15122B24: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15122B28: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x15122B2C: lui         $s7, 0x800D
    ctx->r23 = S32(0X800D << 16);
    // 0x15122B30: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15122B34: lui         $s6, 0x800C
    ctx->r22 = S32(0X800C << 16);
    // 0x15122B38: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x15122B3C: addiu       $s5, $s5, -0x1540
    ctx->r21 = ADD32(ctx->r21, -0X1540);
    // 0x15122B40: addiu       $s6, $s6, 0x35EA
    ctx->r22 = ADD32(ctx->r22, 0X35EA);
    // 0x15122B44: addiu       $s7, $s7, 0x2DB4
    ctx->r23 = ADD32(ctx->r23, 0X2DB4);
    // 0x15122B48: mul.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15122B4C: bltz        $t7, L_15122C18
    printf("[func_15122AE0] count t7=%d\n", (int32_t)ctx->r15); fflush(stdout);
    if (SIGNED(ctx->r15) < 0) {
        // 0x15122B50: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_15122C18;
    }
    // 0x15122B50: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15122B54: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x15122B58: addiu       $s4, $s4, -0x4010
    ctx->r20 = ADD32(ctx->r20, -0X4010);
    // 0x15122B5C: addiu       $s3, $zero, 0x9A0
    ctx->r19 = ADD32(0, 0X9A0);
L_15122B60:
    // 0x15122B60: multu       $s1, $s3
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15122B64: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x15122B68: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x15122B6C: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15122B70: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x15122B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15122B78: mflo        $t8
    ctx->r24 = lo;
    // 0x15122B7C: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    printf("[func_15122AE0] loop i=%d, s4=%08X, t9(actor_base)=%08X, s0(actor_ptr)=%08X\n", (int32_t)ctx->r17, (uint32_t)ctx->r20, (uint32_t)ctx->r25, (uint32_t)ctx->r16); fflush(stdout);
    // 0x15122B80: jal         0x150859AC
    // 0x15122B84: nop

    func_150859AC(rdram, ctx);
        goto after_0;
    // 0x15122B84: nop

    after_0:
    // 0x15122B88: bnel        $v0, $zero, L_15122B9C
    if (ctx->r2 != 0) {
        // 0x15122B8C: swc1        $f20, 0x7B4($s0)
        MEM_W(0X7B4, ctx->r16) = ctx->f20.u32l;
            goto L_15122B9C;
    }
    goto skip_0;
    // 0x15122B8C: swc1        $f20, 0x7B4($s0)
    MEM_W(0X7B4, ctx->r16) = ctx->f20.u32l;
    skip_0:
    // 0x15122B90: bnel        $s1, $zero, L_15122C00
    if (ctx->r17 != 0) {
        // 0x15122B94: lw          $t7, 0x0($s2)
        ctx->r15 = MEM_W(ctx->r18, 0X0);
            goto L_15122C00;
    }
    goto skip_1;
    // 0x15122B94: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x15122B98: swc1        $f20, 0x7B4($s0)
    MEM_W(0X7B4, ctx->r16) = ctx->f20.u32l;
L_15122B9C:
    // 0x15122B9C: lbu         $t1, 0x0($s5)
    ctx->r9 = MEM_BU(ctx->r21, 0X0);
    // 0x15122BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15122BA4: beq         $t1, $zero, L_15122BCC
    if (ctx->r9 == 0) {
        // 0x15122BA8: nop
    
            goto L_15122BCC;
    }
    // 0x15122BA8: nop

    // 0x15122BAC: lbu         $t2, 0x0($s6)
    ctx->r10 = MEM_BU(ctx->r22, 0X0);
    // 0x15122BB0: bne         $t2, $zero, L_15122BCC
    if (ctx->r10 != 0) {
        // 0x15122BB4: nop
    
            goto L_15122BCC;
    }
    // 0x15122BB4: nop

    // 0x15122BB8: lw          $t3, 0x0($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X0);
    // 0x15122BBC: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x15122BC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15122BC4: beq         $t3, $zero, L_15122BE4
    if (ctx->r11 == 0) {
        // 0x15122BC8: addiu       $t4, $zero, 0x5
        ctx->r12 = ADD32(0, 0X5);
            goto L_15122BE4;
    }
    // 0x15122BC8: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
L_15122BCC:
    // 0x15122BCC: jal         0x151239CC
    // 0x15122BD0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    printf("[func_15122AE0] calling func_151239CC\n"); fflush(stdout);
    func_151239CC(rdram, ctx);
        goto after_1;
    // 0x15122BD0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x15122BD4: jal         0x15122C5C
    // 0x15122BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    printf("[func_15122AE0] calling func_15122C5C\n"); fflush(stdout);
    func_15122C5C(rdram, ctx);
        goto after_2;
    // 0x15122BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x15122BDC: b           L_15122C00
    // 0x15122BE0: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
        goto L_15122C00;
    // 0x15122BE0: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
L_15122BE4:
    // 0x15122BE4: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x15122BE8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x15122BEC: jal         0x15123934
    // 0x15122BF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    printf("[func_15122AE0] calling func_15123934\n"); fflush(stdout);
    func_15123934(rdram, ctx);
        goto after_3;
    // 0x15122BF0: or          $a0, $zero, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x15122BF4: jal         0x1512C490
    // 0x15122BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    printf("[func_15122AE0] calling func_1512C490\n"); fflush(stdout);
    func_1512C490(rdram, ctx);
        goto after_4;
    // 0x15122BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x15122BFC: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
L_15122C00:
    // 0x15122C00: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15122C04: sll         $t5, $s1, 16
    ctx->r13 = S32(ctx->r17 << 16);
    // 0x15122C08: sra         $s1, $t5, 16
    ctx->r17 = S32(SIGNED(ctx->r13) >> 16);
    // 0x15122C0C: slt         $at, $t7, $s1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x15122C10: beq         $at, $zero, L_15122B60
    if (ctx->r1 == 0) {
        // 0x15122C14: nop
    
            goto L_15122B60;
    }
    // 0x15122C14: nop

L_15122C18:
    // 0x15122C18: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x15122C1C: addiu       $v0, $v0, -0x6B50
    ctx->r2 = ADD32(ctx->r2, -0X6B50);
    // 0x15122C20: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x15122C24: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x15122C28: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15122C2C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15122C30: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15122C34: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x15122C38: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x15122C3C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x15122C40: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x15122C44: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x15122C48: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x15122C4C: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x15122C50: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x15122C54: jr          $ra
    // 0x15122C58: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x15122C58: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_1513783C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513783C: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x15137840: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15137844: sw          $a1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r5;
    // 0x15137848: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x1513784C: beql        $a0, $zero, L_15137C58
    if (ctx->r4 == 0) {
        // 0x15137850: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15137C58;
    }
    goto skip_0;
    // 0x15137850: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x15137854: jal         0x15134070
    // 0x15137858: sw          $a0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r4;
    func_15134070(rdram, ctx);
        goto after_0;
    // 0x15137858: sw          $a0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r4;
    after_0:
    // 0x1513785C: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x15137860: beq         $v0, $at, L_15137C54
    if (ctx->r2 == ctx->r1) {
        // 0x15137864: sw          $v0, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r2;
            goto L_15137C54;
    }
    // 0x15137864: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x15137868: lw          $a0, 0xE0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE0);
    // 0x1513786C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15137870: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15137874: lwc1        $f4, 0x14C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14C);
    // 0x15137878: lwc1        $f6, 0x150($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X150);
    // 0x1513787C: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x15137880: addiu       $a2, $sp, 0xD0
    ctx->r6 = ADD32(ctx->r29, 0XD0);
    // 0x15137884: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15137888: addiu       $a3, $sp, 0xCC
    ctx->r7 = ADD32(ctx->r29, 0XCC);
    // 0x1513788C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15137890: jal         0x1515C244
    // 0x15137894: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    func_1515C244(rdram, ctx);
        goto after_1;
    // 0x15137894: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x15137898: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x1513789C: jal         0x1504715C
    // 0x151378A0: lw          $a1, 0xE0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE0);
    func_1504715C(rdram, ctx);
        goto after_2;
    // 0x151378A0: lw          $a1, 0xE0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE0);
    after_2:
    // 0x151378A4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151378A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151378AC: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151378B0: lwc1        $f18, 0xD4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x151378B4: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151378B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151378BC: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x151378C0: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    // 0x151378C4: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    // 0x151378C8: jal         0x1514672C
    // 0x151378CC: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    func_1514672C(rdram, ctx);
        goto after_3;
    // 0x151378CC: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x151378D0: beq         $v0, $zero, L_15137C54
    if (ctx->r2 == 0) {
        // 0x151378D4: lwc1        $f16, 0xC0($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0XC0);
            goto L_15137C54;
    }
    // 0x151378D4: lwc1        $f16, 0xC0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x151378D8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x151378DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151378E0: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x151378E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151378E8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151378EC: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x151378F0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x151378F4: jal         0x15046C80
    // 0x151378F8: nop

    func_15046C80(rdram, ctx);
        goto after_4;
    // 0x151378F8: nop

    after_4:
    // 0x151378FC: beq         $v0, $zero, L_1513792C
    if (ctx->r2 == 0) {
        // 0x15137900: addiu       $a0, $sp, 0xD4
        ctx->r4 = ADD32(ctx->r29, 0XD4);
            goto L_1513792C;
    }
    // 0x15137900: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x15137904: lbu         $t6, 0xB4($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XB4);
    // 0x15137908: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1513790C: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x15137910: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x15137914: beq         $t7, $zero, L_15137924
    if (ctx->r15 == 0) {
        // 0x15137918: nop
    
            goto L_15137924;
    }
    // 0x15137918: nop

    // 0x1513791C: b           L_15137924
    // 0x15137920: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_15137924;
    // 0x15137920: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15137924:
    // 0x15137924: b           L_15137950
    // 0x15137928: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
        goto L_15137950;
    // 0x15137928: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
L_1513792C:
    // 0x1513792C: addiu       $t9, $sp, 0xD4
    ctx->r25 = ADD32(ctx->r29, 0XD4);
    // 0x15137930: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x15137934: addiu       $t8, $sp, 0xBC
    ctx->r24 = ADD32(ctx->r29, 0XBC);
    // 0x15137938: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1513793C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x15137940: lw          $t3, 0x4($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X4);
    // 0x15137944: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
    // 0x15137948: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x1513794C: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
L_15137950:
    // 0x15137950: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x15137954: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15137958: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x1513795C: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x15137960: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x15137964: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x15137968: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x1513796C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x15137970: lw          $a3, 0x3F14($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3F14);
    // 0x15137974: lw          $a1, -0x65E0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X65E0);
    // 0x15137978: lw          $t4, 0x3F64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3F64);
    // 0x1513797C: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x15137980: lw          $t5, 0xE0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE0);
    // 0x15137984: lbu         $t7, 0xE7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XE7);
    // 0x15137988: lw          $t2, 0xE8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE8);
    // 0x1513798C: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x15137990: addiu       $t6, $sp, 0x98
    ctx->r14 = ADD32(ctx->r29, 0X98);
    // 0x15137994: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x15137998: addiu       $a2, $a2, 0x3C30
    ctx->r6 = ADD32(ctx->r6, 0X3C30);
    // 0x1513799C: sb          $v1, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r3;
    // 0x151379A0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x151379A4: addiu       $a3, $a3, -0x2
    ctx->r7 = ADD32(ctx->r7, -0X2);
    // 0x151379A8: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x151379AC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151379B0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x151379B4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x151379B8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x151379BC: jal         0x1513A24C
    // 0x151379C0: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    func_1513A24C(rdram, ctx);
        goto after_5;
    // 0x151379C0: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    after_5:
    // 0x151379C4: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x151379C8: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x151379CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151379D0: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x151379D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151379D8: lbu         $t9, 0x3FE6($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3FE6);
    // 0x151379DC: lbu         $v1, 0x93($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X93);
    // 0x151379E0: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x151379E4: beq         $t9, $at, L_15137C4C
    if (ctx->r25 == ctx->r1) {
        // 0x151379E8: lbu         $a1, 0xE7($sp)
        ctx->r5 = MEM_BU(ctx->r29, 0XE7);
            goto L_15137C4C;
    }
    // 0x151379E8: lbu         $a1, 0xE7($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XE7);
    // 0x151379EC: lw          $a2, 0xE8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XE8);
    // 0x151379F0: jal         0x1513A48C
    // 0x151379F4: sb          $v1, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r3;
    func_1513A48C(rdram, ctx);
        goto after_6;
    // 0x151379F4: sb          $v1, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r3;
    after_6:
    // 0x151379F8: lbu         $v1, 0x93($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X93);
    // 0x151379FC: beq         $v1, $zero, L_15137C4C
    if (ctx->r3 == 0) {
        // 0x15137A00: nop
    
            goto L_15137C4C;
    }
    // 0x15137A00: nop

    // 0x15137A04: jal         0x150ADA68
    // 0x15137A08: nop

    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x15137A08: nop

    after_7:
    // 0x15137A0C: jal         0x150ADA68
    // 0x15137A10: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x15137A10: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x15137A14: jal         0x150ADA20
    // 0x15137A18: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x15137A18: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x15137A1C: jal         0x150ADA20
    // 0x15137A20: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x15137A20: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_10:
    // 0x15137A24: jal         0x150ADA20
    // 0x15137A28: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x15137A28: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_11:
    // 0x15137A2C: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x15137A30: addiu       $v1, $zero, 0x65
    ctx->r3 = ADD32(0, 0X65);
    // 0x15137A34: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x15137A38: divu        $zero, $t3, $v1
    lo = S32(U32(ctx->r11) / U32(ctx->r3)); hi = S32(U32(ctx->r11) % U32(ctx->r3));
    // 0x15137A3C: mfhi        $a2
    ctx->r6 = hi;
    // 0x15137A40: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x15137A44: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15137A48: divu        $zero, $t5, $v1
    lo = S32(U32(ctx->r13) / U32(ctx->r3)); hi = S32(U32(ctx->r13) % U32(ctx->r3));
    // 0x15137A4C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x15137A50: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15137A54: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15137A58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15137A5C: lwc1        $f6, 0x481C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X481C);
    // 0x15137A60: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15137A64: lui         $at, 0x42D4
    ctx->r1 = S32(0X42D4 << 16);
    // 0x15137A68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15137A6C: mfhi        $a3
    ctx->r7 = hi;
    // 0x15137A70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15137A74: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15137A78: addiu       $a2, $a2, 0x9B
    ctx->r6 = ADD32(ctx->r6, 0X9B);
    // 0x15137A7C: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x15137A80: andi        $t4, $a2, 0xFF
    ctx->r12 = ctx->r6 & 0XFF;
    // 0x15137A84: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x15137A88: lbu         $t4, 0xE7($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XE7);
    // 0x15137A8C: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15137A90: lwc1        $f4, 0x4820($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4820);
    // 0x15137A94: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x15137A98: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15137A9C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15137AA0: lw          $t5, 0xE8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE8);
    // 0x15137AA4: mfhi        $t7
    ctx->r15 = hi;
    // 0x15137AA8: addiu       $a3, $a3, 0x64
    ctx->r7 = ADD32(ctx->r7, 0X64);
    // 0x15137AAC: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x15137AB0: addiu       $t2, $t7, 0xCB
    ctx->r10 = ADD32(ctx->r15, 0XCB);
    // 0x15137AB4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15137AB8: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x15137ABC: addiu       $t1, $sp, 0x9C
    ctx->r9 = ADD32(ctx->r29, 0X9C);
    // 0x15137AC0: addiu       $t8, $sp, 0xBC
    ctx->r24 = ADD32(ctx->r29, 0XBC);
    // 0x15137AC4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15137AC8: mul.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15137ACC: bne         $v1, $zero, L_15137AD8
    if (ctx->r3 != 0) {
        // 0x15137AD0: nop
    
            goto L_15137AD8;
    }
    // 0x15137AD0: nop

    // 0x15137AD4: break       7
    do_break(353598164);
L_15137AD8:
    // 0x15137AD8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15137ADC: bne         $v1, $zero, L_15137AE8
    if (ctx->r3 != 0) {
        // 0x15137AE0: nop
    
            goto L_15137AE8;
    }
    // 0x15137AE0: nop

    // 0x15137AE4: break       7
    do_break(353598180);
L_15137AE8:
    // 0x15137AE8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15137AEC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15137AF0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x15137AF4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15137AF8: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x15137AFC: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x15137B00: jal         0x15136698
    // 0x15137B04: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    func_15136698(rdram, ctx);
        goto after_12;
    // 0x15137B04: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    after_12:
    // 0x15137B08: jal         0x150ADA20
    // 0x15137B0C: nop

    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x15137B0C: nop

    after_13:
    // 0x15137B10: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x15137B14: beq         $t6, $zero, L_15137B2C
    if (ctx->r14 == 0) {
        // 0x15137B18: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_15137B2C;
    }
    // 0x15137B18: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15137B1C: lui         $t7, 0x151B
    ctx->r15 = S32(0X151B << 16);
    // 0x15137B20: addiu       $t7, $t7, 0x5BF0
    ctx->r15 = ADD32(ctx->r15, 0X5BF0);
    // 0x15137B24: b           L_15137B38
    // 0x15137B28: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
        goto L_15137B38;
    // 0x15137B28: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
L_15137B2C:
    // 0x15137B2C: lui         $t2, 0x151B
    ctx->r10 = S32(0X151B << 16);
    // 0x15137B30: addiu       $t2, $t2, 0x6010
    ctx->r10 = ADD32(ctx->r10, 0X6010);
    // 0x15137B34: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
L_15137B38:
    // 0x15137B38: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x15137B3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15137B40: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15137B44: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x15137B48: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15137B4C: lwc1        $f18, 0xC4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x15137B50: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x15137B54: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x15137B58: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x15137B5C: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x15137B60: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x15137B64: jal         0x150ADA68
    // 0x15137B68: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x15137B68: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    after_14:
    // 0x15137B6C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15137B70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15137B74: nop

    // 0x15137B78: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15137B7C: jal         0x150ADA68
    // 0x15137B80: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_15;
    // 0x15137B80: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x15137B84: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15137B88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15137B8C: nop

    // 0x15137B90: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15137B94: jal         0x150ADA68
    // 0x15137B98: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_16;
    // 0x15137B98: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    after_16:
    // 0x15137B9C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15137BA0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15137BA4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15137BA8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15137BAC: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x15137BB0: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x15137BB4: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x15137BB8: jal         0x150ADA68
    // 0x15137BBC: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_17;
    // 0x15137BBC: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    after_17:
    // 0x15137BC0: lui         $at, 0x42CA
    ctx->r1 = S32(0X42CA << 16);
    // 0x15137BC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15137BC8: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x15137BCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15137BD0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15137BD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15137BD8: lwc1        $f16, 0x4824($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4824);
    // 0x15137BDC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15137BE0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15137BE4: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x15137BE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15137BEC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15137BF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15137BF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15137BF8: lbu         $t5, 0xE7($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XE7);
    // 0x15137BFC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15137C00: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x15137C04: addiu       $t1, $sp, 0x60
    ctx->r9 = ADD32(ctx->r29, 0X60);
    // 0x15137C08: addiu       $t8, $zero, 0x3E8
    ctx->r24 = ADD32(0, 0X3E8);
    // 0x15137C0C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15137C10: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x15137C14: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x15137C18: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x15137C1C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x15137C20: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15137C24: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15137C28: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x15137C2C: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x15137C30: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
    // 0x15137C34: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15137C38: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x15137C3C: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x15137C40: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x15137C44: jalr        $t9
    // 0x15137C48: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x15137C48: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    after_18:
L_15137C4C:
    // 0x15137C4C: jal         0x15145A50
    // 0x15137C50: lw          $a0, 0xE0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE0);
    func_15145A50(rdram, ctx);
        goto after_19;
    // 0x15137C50: lw          $a0, 0xE0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE0);
    after_19:
L_15137C54:
    // 0x15137C54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_15137C58:
    // 0x15137C58: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x15137C5C: jr          $ra
    // 0x15137C60: nop

    return;
    return;
    // 0x15137C60: nop

;}
RECOMP_FUNC void func_1506ED0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506ED0C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506ED10: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x1506ED14: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506ED18: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506ED1C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1506ED20: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1506ED24: sb          $t6, 0x83($t7)
    MEM_B(0X83, ctx->r15) = ctx->r14;
    // 0x1506ED28: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1506ED2C: lbu         $t8, 0x100($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X100);
    // 0x1506ED30: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x1506ED34: sb          $t9, 0x100($v0)
    MEM_B(0X100, ctx->r2) = ctx->r25;
    // 0x1506ED38: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x1506ED3C: lw          $t2, 0x31C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X31C);
    // 0x1506ED40: sb          $t0, 0x31($t2)
    MEM_B(0X31, ctx->r10) = ctx->r8;
    // 0x1506ED44: jr          $ra
    // 0x1506ED48: nop

    return;
    return;
    // 0x1506ED48: nop

;}
RECOMP_FUNC void func_1513D668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513D668: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1513D66C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x1513D670: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x1513D674: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1513D678: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x1513D67C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x1513D680: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1513D684: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1513D688: lbu         $t8, 0x63($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X63);
    // 0x1513D68C: lbu         $t9, 0x67($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X67);
    // 0x1513D690: lh          $t0, 0x6A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X6A);
    // 0x1513D694: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1513D698: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1513D69C: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x1513D6A0: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x1513D6A4: lbu         $t3, 0x7F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X7F);
    // 0x1513D6A8: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x1513D6AC: lbu         $t5, 0x87($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X87);
    // 0x1513D6B0: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x1513D6B4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1513D6B8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1513D6BC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1513D6C0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1513D6C4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1513D6C8: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x1513D6CC: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x1513D6D0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x1513D6D4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x1513D6D8: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x1513D6DC: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x1513D6E0: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x1513D6E4: jal         0x1513D594
    // 0x1513D6E8: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    func_1513D594(rdram, ctx);
        goto after_0;
    // 0x1513D6E8: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    after_0:
    // 0x1513D6EC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1513D6F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1513D6F4: jr          $ra
    // 0x1513D6F8: nop

    return;
    return;
    // 0x1513D6F8: nop

;}
RECOMP_FUNC void func_151D6970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D6970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D6974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D6978: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151D697C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151D6980: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x151D6984: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x151D6988: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151D698C: beq         $v0, $at, L_151D699C
    if (ctx->r2 == ctx->r1) {
        // 0x151D6990: addiu       $at, $zero, 0x33
        ctx->r1 = ADD32(0, 0X33);
            goto L_151D699C;
    }
    // 0x151D6990: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x151D6994: bnel        $v0, $at, L_151D69A8
    if (ctx->r2 != ctx->r1) {
        // 0x151D6998: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151D69A8;
    }
    goto skip_0;
    // 0x151D6998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_151D699C:
    // 0x151D699C: jal         0x150D6730
    // 0x151D69A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150D6730(rdram, ctx);
        goto after_0;
    // 0x151D69A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x151D69A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151D69A8:
    // 0x151D69A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D69AC: jr          $ra
    // 0x151D69B0: nop

    return;
    return;
    // 0x151D69B0: nop

;}
RECOMP_FUNC void func_160019A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x160019A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x160019AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x160019B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x160019B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x160019B8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x160019BC: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x160019C0: beq         $t7, $zero, L_160019D0
    if (ctx->r15 == 0) {
        // 0x160019C4: nop
    
            goto L_160019D0;
    }
    // 0x160019C4: nop

    // 0x160019C8: b           L_16001A54
    // 0x160019CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_16001A54;
    // 0x160019CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_160019D0:
    // 0x160019D0: jal         0x16001984
    // 0x160019D4: nop

    func_16001984(rdram, ctx);
        goto after_0;
    // 0x160019D4: nop

    after_0:
    // 0x160019D8: beq         $v0, $zero, L_160019E8
    if (ctx->r2 == 0) {
        // 0x160019DC: lw          $t8, 0x18($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18);
            goto L_160019E8;
    }
    // 0x160019DC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x160019E0: b           L_16001A54
    // 0x160019E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_16001A54;
    // 0x160019E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_160019E8:
    // 0x160019E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x160019EC: bne         $t8, $at, L_160019FC
    if (ctx->r24 != ctx->r1) {
        // 0x160019F0: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_160019FC;
    }
    // 0x160019F0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x160019F4: jal         0x10023D20
    // 0x160019F8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x160019F8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
L_160019FC:
    // 0x160019FC: jal         0x100233C0
    // 0x16001A00: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x16001A00: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x16001A04: lui         $t9, 0xA480
    ctx->r25 = S32(0XA480 << 16);
    // 0x16001A08: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x16001A0C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x16001A10: lui         $t3, 0x1FC0
    ctx->r11 = S32(0X1FC0 << 16);
    // 0x16001A14: ori         $t3, $t3, 0x7C0
    ctx->r11 = ctx->r11 | 0X7C0;
    // 0x16001A18: bne         $t0, $zero, L_16001A34
    if (ctx->r8 != 0) {
        // 0x16001A1C: lui         $t4, 0xA480
        ctx->r12 = S32(0XA480 << 16);
            goto L_16001A34;
    }
    // 0x16001A1C: lui         $t4, 0xA480
    ctx->r12 = S32(0XA480 << 16);
    // 0x16001A20: lui         $t1, 0x1FC0
    ctx->r9 = S32(0X1FC0 << 16);
    // 0x16001A24: ori         $t1, $t1, 0x7C0
    ctx->r9 = ctx->r9 | 0X7C0;
    // 0x16001A28: lui         $t2, 0xA480
    ctx->r10 = S32(0XA480 << 16);
    // 0x16001A2C: b           L_16001A38
    // 0x16001A30: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
        goto L_16001A38;
    // 0x16001A30: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
L_16001A34:
    // 0x16001A34: sw          $t3, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r11;
L_16001A38:
    // 0x16001A38: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x16001A3C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x16001A40: bnel        $t5, $zero, L_16001A54
    if (ctx->r13 != 0) {
        // 0x16001A44: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_16001A54;
    }
    goto skip_0;
    // 0x16001A44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x16001A48: jal         0x10022D10
    // 0x16001A4C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    osInvalDCache_recomp(rdram, ctx);
        goto after_3;
    // 0x16001A4C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_3:
    // 0x16001A50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_16001A54:
    // 0x16001A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x16001A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x16001A5C: jr          $ra
    // 0x16001A60: nop

    return;
    return;
    // 0x16001A60: nop

;}
RECOMP_FUNC void func_1505C1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505C1A4: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x1505C1A8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1505C1AC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1505C1B0: beq         $v0, $at, L_1505C1D0
    if (ctx->r2 == ctx->r1) {
        // 0x1505C1B4: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_1505C1D0;
    }
    // 0x1505C1B4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1505C1B8: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x1505C1BC: lw          $v1, 0x1588($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1588);
    // 0x1505C1C0: beq         $v1, $zero, L_1505C1D0
    if (ctx->r3 == 0) {
        // 0x1505C1C4: addiu       $v0, $v1, -0xC
        ctx->r2 = ADD32(ctx->r3, -0XC);
            goto L_1505C1D0;
    }
    // 0x1505C1C4: addiu       $v0, $v1, -0xC
    ctx->r2 = ADD32(ctx->r3, -0XC);
    // 0x1505C1C8: b           L_1505C1D8
    // 0x1505C1CC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
        goto L_1505C1D8;
    // 0x1505C1CC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
L_1505C1D0:
    // 0x1505C1D0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x1505C1D4: addiu       $a0, $a0, -0x5608
    ctx->r4 = ADD32(ctx->r4, -0X5608);
L_1505C1D8:
    // 0x1505C1D8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1505C1DC: jr          $ra
    // 0x1505C1E0: nop

    return;
    return;
    // 0x1505C1E0: nop

;}
RECOMP_FUNC void func_100019F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100019F0: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x100019F4: addiu       $at, $zero, 0x7FF
    ctx->r1 = ADD32(0, 0X7FF);
    // 0x100019F8: andi        $v1, $a2, 0x7FF0
    ctx->r3 = ctx->r6 & 0X7FF0;
    // 0x100019FC: sra         $t6, $v1, 4
    ctx->r14 = S32(SIGNED(ctx->r3) >> 4);
    // 0x10001A00: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x10001A04: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x10001A08: bne         $v1, $at, L_10001A6C
    if (ctx->r3 != ctx->r1) {
        // 0x10001A0C: nop
    
            goto L_10001A6C;
    }
    // 0x10001A0C: nop

    // 0x10001A10: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x10001A14: lhu         $t9, 0x0($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X0);
    // 0x10001A18: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x10001A1C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x10001A20: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x10001A24: bne         $t0, $zero, L_10001A50
    if (ctx->r8 != 0) {
        // 0x10001A28: sra         $t4, $v0, 16
        ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
            goto L_10001A50;
    }
    // 0x10001A28: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x10001A2C: lhu         $t1, 0x2($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X2);
    // 0x10001A30: bne         $t1, $zero, L_10001A50
    if (ctx->r9 != 0) {
        // 0x10001A34: nop
    
            goto L_10001A50;
    }
    // 0x10001A34: nop

    // 0x10001A38: lhu         $t2, 0x4($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X4);
    // 0x10001A3C: bne         $t2, $zero, L_10001A50
    if (ctx->r10 != 0) {
        // 0x10001A40: nop
    
            goto L_10001A50;
    }
    // 0x10001A40: nop

    // 0x10001A44: lhu         $t3, 0x6($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X6);
    // 0x10001A48: beql        $t3, $zero, L_10001A5C
    if (ctx->r11 == 0) {
        // 0x10001A4C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_10001A5C;
    }
    goto skip_0;
    // 0x10001A4C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_0:
L_10001A50:
    // 0x10001A50: jr          $ra
    // 0x10001A54: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    return;
    // 0x10001A54: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x10001A58: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_10001A5C:
    // 0x10001A5C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x10001A60: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x10001A64: jr          $ra
    // 0x10001A68: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    return;
    // 0x10001A68: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_10001A6C:
    // 0x10001A6C: blez        $v1, L_10001A8C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x10001A70: andi        $t5, $a2, 0x800F
        ctx->r13 = ctx->r6 & 0X800F;
            goto L_10001A8C;
    }
    // 0x10001A70: andi        $t5, $a2, 0x800F
    ctx->r13 = ctx->r6 & 0X800F;
    // 0x10001A74: ori         $t6, $t5, 0x3FF0
    ctx->r14 = ctx->r13 | 0X3FF0;
    // 0x10001A78: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x10001A7C: addiu       $t7, $v1, -0x3FE
    ctx->r15 = ADD32(ctx->r3, -0X3FE);
    // 0x10001A80: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x10001A84: jr          $ra
    // 0x10001A88: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    return;
    // 0x10001A88: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_10001A8C:
    // 0x10001A8C: bgez        $v1, L_10001A9C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x10001A90: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_10001A9C;
    }
    // 0x10001A90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x10001A94: jr          $ra
    // 0x10001A98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    return;
    // 0x10001A98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_10001A9C:
    // 0x10001A9C: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x10001AA0: jr          $ra
    // 0x10001AA4: nop

    return;
    return;
    // 0x10001AA4: nop

;}
RECOMP_FUNC void func_15147D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15147D64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15147D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15147D6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15147D70: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15147D74: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x15147D78: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x15147D7C: addiu       $a0, $a0, 0x5760
    ctx->r4 = ADD32(ctx->r4, 0X5760);
    // 0x15147D80: jal         0x15169260
    // 0x15147D84: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_15169260(rdram, ctx);
        goto after_0;
    // 0x15147D84: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x15147D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15147D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15147D90: jr          $ra
    // 0x15147D94: nop

    return;
    return;
    // 0x15147D94: nop

;}
RECOMP_FUNC void func_15055B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15055B0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15055B10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15055B14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15055B18: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15055B1C: addiu       $t6, $zero, 0x27
    ctx->r14 = ADD32(0, 0X27);
    // 0x15055B20: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x15055B24: lhu         $a1, 0x84($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X84);
    // 0x15055B28: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15055B2C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15055B30: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15055B34: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x15055B38: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x15055B3C: jal         0x1505E650
    // 0x15055B40: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x15055B40: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x15055B44: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x15055B48: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
    // 0x15055B4C: sh          $zero, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = 0;
    // 0x15055B50: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x15055B54: sh          $t7, 0x21C($a0)
    MEM_H(0X21C, ctx->r4) = ctx->r15;
    // 0x15055B58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15055B5C: jr          $ra
    // 0x15055B60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x15055B60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_15101148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15101148: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1510114C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15101150: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15101154: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x15101158: lw          $t7, 0x138($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X138);
    // 0x1510115C: beql        $t7, $zero, L_15101170
    if (ctx->r15 == 0) {
        // 0x15101160: lw          $v0, 0x20($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X20);
            goto L_15101170;
    }
    goto skip_0;
    // 0x15101160: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x15101164: jal         0x1516979C
    // 0x15101168: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_1516979C(rdram, ctx);
        goto after_0;
    // 0x15101168: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x1510116C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
L_15101170:
    // 0x15101170: lw          $a0, 0x13C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X13C);
    // 0x15101174: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x15101178: beql        $a0, $zero, L_15101190
    if (ctx->r4 == 0) {
        // 0x1510117C: lw          $a0, 0x24($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X24);
            goto L_15101190;
    }
    goto skip_1;
    // 0x1510117C: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    skip_1:
    // 0x15101180: jal         0x1516979C
    // 0x15101184: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_1516979C(rdram, ctx);
        goto after_1;
    // 0x15101184: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x15101188: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x1510118C: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
L_15101190:
    // 0x15101190: beql        $a0, $zero, L_151011A8
    if (ctx->r4 == 0) {
        // 0x15101194: lw          $a0, 0x30($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X30);
            goto L_151011A8;
    }
    goto skip_2;
    // 0x15101194: lw          $a0, 0x30($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X30);
    skip_2:
    // 0x15101198: jal         0x1516979C
    // 0x1510119C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_1516979C(rdram, ctx);
        goto after_2;
    // 0x1510119C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x151011A0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151011A4: lw          $a0, 0x30($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X30);
L_151011A8:
    // 0x151011A8: beql        $a0, $zero, L_151011C0
    if (ctx->r4 == 0) {
        // 0x151011AC: lw          $a0, 0x34($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X34);
            goto L_151011C0;
    }
    goto skip_3;
    // 0x151011AC: lw          $a0, 0x34($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X34);
    skip_3:
    // 0x151011B0: jal         0x1516979C
    // 0x151011B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_1516979C(rdram, ctx);
        goto after_3;
    // 0x151011B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x151011B8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151011BC: lw          $a0, 0x34($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X34);
L_151011C0:
    // 0x151011C0: beq         $a0, $zero, L_151011D0
    if (ctx->r4 == 0) {
        // 0x151011C4: nop
    
            goto L_151011D0;
    }
    // 0x151011C4: nop

    // 0x151011C8: jal         0x1516979C
    // 0x151011CC: nop

    func_1516979C(rdram, ctx);
        goto after_4;
    // 0x151011CC: nop

    after_4:
L_151011D0:
    // 0x151011D0: jal         0x1513CAA0
    // 0x151011D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_1513CAA0(rdram, ctx);
        goto after_5;
    // 0x151011D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x151011D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151011DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151011E0: jr          $ra
    // 0x151011E4: nop

    return;
    return;
    // 0x151011E4: nop

;}
RECOMP_FUNC void func_15071E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071E3C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15071E40: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15071E44: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15071E48: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x15071E4C: sb          $t6, 0x248($t7)
    MEM_B(0X248, ctx->r15) = ctx->r14;
    // 0x15071E50: jr          $ra
    // 0x15071E54: nop

    return;
    return;
    // 0x15071E54: nop

;}
RECOMP_FUNC void func_150FF084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FF084: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x150FF088: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x150FF08C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150FF090: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x150FF094: sw          $a1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r5;
    // 0x150FF098: sw          $a2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r6;
    // 0x150FF09C: jal         0x150FF288
    // 0x150FF0A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150FF288(rdram, ctx);
        goto after_0;
    // 0x150FF0A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x150FF0A4: beq         $v0, $zero, L_150FF274
    if (ctx->r2 == 0) {
        // 0x150FF0A8: sw          $v0, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r2;
            goto L_150FF274;
    }
    // 0x150FF0A8: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x150FF0AC: jal         0x151D5148
    // 0x150FF0B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151D5148(rdram, ctx);
        goto after_1;
    // 0x150FF0B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x150FF0B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150FF0B8: addiu       $a1, $sp, 0x10C
    ctx->r5 = ADD32(ctx->r29, 0X10C);
    // 0x150FF0BC: addiu       $a2, $sp, 0x100
    ctx->r6 = ADD32(ctx->r29, 0X100);
    // 0x150FF0C0: jal         0x150FF2AC
    // 0x150FF0C4: addiu       $a3, $sp, 0xF4
    ctx->r7 = ADD32(ctx->r29, 0XF4);
    func_150FF2AC(rdram, ctx);
        goto after_2;
    // 0x150FF0C4: addiu       $a3, $sp, 0xF4
    ctx->r7 = ADD32(ctx->r29, 0XF4);
    after_2:
    // 0x150FF0C8: lw          $t6, 0x1D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1D4);
    // 0x150FF0CC: addiu       $a0, $sp, 0x6F
    ctx->r4 = ADD32(ctx->r29, 0X6F);
    // 0x150FF0D0: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x150FF0D4: beq         $t6, $zero, L_150FF0E8
    if (ctx->r14 == 0) {
        // 0x150FF0D8: addiu       $a2, $sp, 0x124
        ctx->r6 = ADD32(ctx->r29, 0X124);
            goto L_150FF0E8;
    }
    // 0x150FF0D8: addiu       $a2, $sp, 0x124
    ctx->r6 = ADD32(ctx->r29, 0X124);
    // 0x150FF0DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150FF0E0: b           L_150FF0EC
    // 0x150FF0E4: sb          $t7, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r15;
        goto L_150FF0EC;
    // 0x150FF0E4: sb          $t7, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r15;
L_150FF0E8:
    // 0x150FF0E8: sb          $zero, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = 0;
L_150FF0EC:
    // 0x150FF0EC: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x150FF0F0: addiu       $t8, $sp, 0xDC
    ctx->r24 = ADD32(ctx->r29, 0XDC);
    // 0x150FF0F4: addiu       $t9, $sp, 0x10C
    ctx->r25 = ADD32(ctx->r29, 0X10C);
    // 0x150FF0F8: addiu       $t0, $sp, 0x100
    ctx->r8 = ADD32(ctx->r29, 0X100);
    // 0x150FF0FC: addiu       $t1, $sp, 0xF4
    ctx->r9 = ADD32(ctx->r29, 0XF4);
    // 0x150FF100: addiu       $t2, $sp, 0xD0
    ctx->r10 = ADD32(ctx->r29, 0XD0);
    // 0x150FF104: addiu       $t3, $sp, 0xC4
    ctx->r11 = ADD32(ctx->r29, 0XC4);
    // 0x150FF108: addiu       $t4, $sp, 0x78
    ctx->r12 = ADD32(ctx->r29, 0X78);
    // 0x150FF10C: addiu       $t5, $sp, 0x74
    ctx->r13 = ADD32(ctx->r29, 0X74);
    // 0x150FF110: addiu       $t6, $sp, 0x118
    ctx->r14 = ADD32(ctx->r29, 0X118);
    // 0x150FF114: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x150FF118: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x150FF11C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x150FF120: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x150FF124: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x150FF128: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x150FF12C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150FF130: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150FF134: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150FF138: addiu       $a3, $sp, 0xE8
    ctx->r7 = ADD32(ctx->r29, 0XE8);
    // 0x150FF13C: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x150FF140: jal         0x150FF2D4
    // 0x150FF144: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    func_150FF2D4(rdram, ctx);
        goto after_3;
    // 0x150FF144: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    after_3:
    // 0x150FF148: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x150FF14C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x150FF150: bne         $t8, $zero, L_150FF160
    if (ctx->r24 != 0) {
        // 0x150FF154: nop
    
            goto L_150FF160;
    }
    // 0x150FF154: nop

    // 0x150FF158: b           L_150FF160
    // 0x150FF15C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_150FF160;
    // 0x150FF15C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150FF160:
    // 0x150FF160: jal         0x150ADA20
    // 0x150FF164: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150FF164: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_4:
    // 0x150FF168: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FF16C: lwc1        $f4, 0x2114($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2114);
    // 0x150FF170: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FF174: lwc1        $f6, 0x2118($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2118);
    // 0x150FF178: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150FF17C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FF180: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150FF184: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150FF188: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x150FF18C: lbu         $t6, 0x137($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X137);
    // 0x150FF190: lw          $t7, 0x138($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X138);
    // 0x150FF194: mfhi        $t4
    ctx->r12 = hi;
    // 0x150FF198: addiu       $t5, $t4, 0x327
    ctx->r13 = ADD32(ctx->r12, 0X327);
    // 0x150FF19C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150FF1A0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150FF1A4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150FF1A8: addiu       $t2, $zero, 0x1A
    ctx->r10 = ADD32(0, 0X1A);
    // 0x150FF1AC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150FF1B0: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x150FF1B4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x150FF1B8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x150FF1BC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x150FF1C0: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x150FF1C4: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x150FF1C8: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    // 0x150FF1CC: addiu       $a1, $sp, 0x10C
    ctx->r5 = ADD32(ctx->r29, 0X10C);
    // 0x150FF1D0: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x150FF1D4: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x150FF1D8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150FF1DC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x150FF1E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150FF1E4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x150FF1E8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x150FF1EC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x150FF1F0: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x150FF1F4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x150FF1F8: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x150FF1FC: jal         0x150F7470
    // 0x150FF200: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    func_150F7470(rdram, ctx);
        goto after_5;
    // 0x150FF200: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    after_5:
    // 0x150FF204: lbu         $t8, 0x6F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X6F);
    // 0x150FF208: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    // 0x150FF20C: lbu         $a1, 0x137($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X137);
    // 0x150FF210: beql        $t8, $zero, L_150FF278
    if (ctx->r24 == 0) {
        // 0x150FF214: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_150FF278;
    }
    goto skip_0;
    // 0x150FF214: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_0:
    // 0x150FF218: jal         0x151D3F14
    // 0x150FF21C: lw          $a2, 0x138($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X138);
    func_151D3F14(rdram, ctx);
        goto after_6;
    // 0x150FF21C: lw          $a2, 0x138($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X138);
    after_6:
    // 0x150FF220: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x150FF224: lw          $t9, 0x1D4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1D4);
    // 0x150FF228: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150FF22C: lbu         $t1, 0x2($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X2);
    // 0x150FF230: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150FF234: lbu         $t3, 0x137($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X137);
    // 0x150FF238: lw          $t4, 0x138($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X138);
    // 0x150FF23C: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x150FF240: addiu       $a0, $sp, 0xE8
    ctx->r4 = ADD32(ctx->r29, 0XE8);
    // 0x150FF244: addiu       $a1, $sp, 0xDC
    ctx->r5 = ADD32(ctx->r29, 0XDC);
    // 0x150FF248: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x150FF24C: addu        $a2, $t9, $t2
    ctx->r6 = ADD32(ctx->r25, ctx->r10);
    // 0x150FF250: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150FF254: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x150FF258: jal         0x151D4408
    // 0x150FF25C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    func_151D4408(rdram, ctx);
        goto after_7;
    // 0x150FF25C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_7:
    // 0x150FF260: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    // 0x150FF264: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x150FF268: lbu         $a2, 0x137($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X137);
    // 0x150FF26C: jal         0x150FF474
    // 0x150FF270: lw          $a3, 0x138($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X138);
    func_150FF474(rdram, ctx);
        goto after_8;
    // 0x150FF270: lw          $a3, 0x138($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X138);
    after_8:
L_150FF274:
    // 0x150FF274: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_150FF278:
    // 0x150FF278: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x150FF27C: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    // 0x150FF280: jr          $ra
    // 0x150FF284: nop

    return;
    return;
    // 0x150FF284: nop

;}
RECOMP_FUNC void func_15078890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15078890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15078894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15078898: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507889C: lbu         $v0, 0x1892($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1892);
    // 0x150788A0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150788A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150788A8: bne         $v0, $zero, L_150788C8
    if (ctx->r2 != 0) {
        // 0x150788AC: nop
    
            goto L_150788C8;
    }
    // 0x150788AC: nop

    // 0x150788B0: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x150788B4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150788B8: lbu         $t6, 0x1891($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1891);
    // 0x150788BC: lbu         $t8, 0x251($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X251);
    // 0x150788C0: beq         $t6, $t8, L_150788E4
    if (ctx->r14 == ctx->r24) {
        // 0x150788C4: nop
    
            goto L_150788E4;
    }
    // 0x150788C4: nop

L_150788C8:
    // 0x150788C8: bne         $v0, $at, L_150788F0
    if (ctx->r2 != ctx->r1) {
        // 0x150788CC: lui         $t0, 0x800D
        ctx->r8 = S32(0X800D << 16);
            goto L_150788F0;
    }
    // 0x150788CC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150788D0: lw          $t0, 0x154C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X154C);
    // 0x150788D4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150788D8: lbu         $t9, 0x1891($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1891);
    // 0x150788DC: lbu         $t1, 0x251($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X251);
    // 0x150788E0: beq         $t9, $t1, L_150788F0
    if (ctx->r25 == ctx->r9) {
        // 0x150788E4: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_150788F0;
    }
L_150788E4:
    // 0x150788E4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150788E8: jal         0x15075400
    // 0x150788EC: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x150788EC: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
L_150788F0:
    // 0x150788F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150788F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150788F8: jr          $ra
    // 0x150788FC: nop

    return;
    return;
    // 0x150788FC: nop

;}
RECOMP_FUNC void func_15072AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072AF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15072AFC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15072B00: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15072B04: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15072B08: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15072B0C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x15072B10: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x15072B14: lhu         $a1, 0x84($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X84);
    // 0x15072B18: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15072B1C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x15072B20: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x15072B24: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x15072B28: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15072B2C: jal         0x1505E650
    // 0x15072B30: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x15072B30: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x15072B34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15072B38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15072B3C: jr          $ra
    // 0x15072B40: nop

    return;
    return;
    // 0x15072B40: nop

;}
RECOMP_FUNC void guPerspective(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15048134: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15048138: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x1504813C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x15048140: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15048144: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x15048148: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1504814C: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15048150: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x15048154: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x15048158: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x1504815C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x15048160: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15048164: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x15048168: jal         0x15047F00
    // 0x1504816C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspectiveF(rdram, ctx);
        goto after_0;
    // 0x1504816C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x15048170: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x15048174: jal         0x150A7790
    // 0x15048178: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x15048178: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x1504817C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15048180: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x15048184: jr          $ra
    // 0x15048188: nop

    return;
    return;
    // 0x15048188: nop

;}
RECOMP_FUNC void func_1506B9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B9C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506B9C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506B9C8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1506B9CC: lbu         $t6, 0x3E78($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3E78);
    // 0x1506B9D0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1506B9D4: addiu       $t8, $t8, -0x18E0
    ctx->r24 = ADD32(ctx->r24, -0X18E0);
    // 0x1506B9D8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x1506B9DC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x1506B9E0: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x1506B9E4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1506B9E8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1506B9EC: ori         $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 | 0X4000;
    // 0x1506B9F0: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x1506B9F4: lw          $t1, 0x154C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X154C);
    // 0x1506B9F8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506B9FC: lw          $a0, 0x31C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X31C);
    // 0x1506BA00: beq         $a0, $zero, L_1506BA34
    if (ctx->r4 == 0) {
        // 0x1506BA04: nop
    
            goto L_1506BA34;
    }
    // 0x1506BA04: nop

    // 0x1506BA08: sb          $zero, 0x78($a0)
    MEM_B(0X78, ctx->r4) = 0;
    // 0x1506BA0C: lbu         $v0, 0x1940($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1940);
    // 0x1506BA10: addiu       $t3, $t3, 0x2E60
    ctx->r11 = ADD32(ctx->r11, 0X2E60);
    // 0x1506BA14: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1506BA18: sra         $t2, $v0, 3
    ctx->r10 = S32(SIGNED(ctx->r2) >> 3);
    // 0x1506BA1C: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
    // 0x1506BA20: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x1506BA24: andi        $t5, $v0, 0x7
    ctx->r13 = ctx->r2 & 0X7;
    // 0x1506BA28: sllv        $t7, $t6, $t5
    ctx->r15 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x1506BA2C: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x1506BA30: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_1506BA34:
    // 0x1506BA34: jal         0x1507F640
    // 0x1506BA38: nop

    func_1507F640(rdram, ctx);
        goto after_0;
    // 0x1506BA38: nop

    after_0:
    // 0x1506BA3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506BA40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506BA44: jr          $ra
    // 0x1506BA48: nop

    return;
    return;
    // 0x1506BA48: nop

;}
RECOMP_FUNC void func_1503F62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503F62C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1503F630: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x1503F634: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1503F638: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1503F63C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x1503F640: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1503F644: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1503F648: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x1503F64C: addiu       $a0, $zero, 0x3F8
    ctx->r4 = ADD32(0, 0X3F8);
    // 0x1503F650: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1503F654: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1503F658: jal         0x10003C40
    // 0x1503F65C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1503F65C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x1503F660: lw          $s1, 0x58($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X58);
    // 0x1503F664: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x1503F668: bne         $v0, $zero, L_1503F678
    if (ctx->r2 != 0) {
        // 0x1503F66C: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_1503F678;
    }
    // 0x1503F66C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x1503F670: b           L_1503F7A4
    // 0x1503F674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1503F7A4;
    // 0x1503F674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1503F678:
    // 0x1503F678: jal         0x100226F0
    // 0x1503F67C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x1503F67C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_1:
    // 0x1503F680: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x1503F684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1503F688: addiu       $t1, $sp, 0x3C
    ctx->r9 = ADD32(ctx->r29, 0X3C);
    // 0x1503F68C: sb          $v0, 0x215($t6)
    MEM_B(0X215, ctx->r14) = ctx->r2;
    // 0x1503F690: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x1503F694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1503F698: sb          $v0, 0x45($t7)
    MEM_B(0X45, ctx->r15) = ctx->r2;
    // 0x1503F69C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x1503F6A0: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x1503F6A4: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x1503F6A8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1503F6AC: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1503F6B0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1503F6B4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x1503F6B8: addiu       $t0, $t9, 0x3F0
    ctx->r8 = ADD32(ctx->r25, 0X3F0);
    // 0x1503F6BC: jal         0x1502FE10
    // 0x1503F6C0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_1502FE10(rdram, ctx);
        goto after_2;
    // 0x1503F6C0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x1503F6C4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x1503F6C8: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x1503F6CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1503F6D0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1503F6D4: sb          $t2, 0x3F4($t3)
    MEM_B(0X3F4, ctx->r11) = ctx->r10;
    // 0x1503F6D8: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x1503F6DC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x1503F6E0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1503F6E4: sb          $t4, 0x3F5($t5)
    MEM_B(0X3F5, ctx->r13) = ctx->r12;
    // 0x1503F6E8: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x1503F6EC: sb          $zero, 0x3F6($t6)
    MEM_B(0X3F6, ctx->r14) = 0;
    // 0x1503F6F0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x1503F6F4: sll         $t7, $a0, 6
    ctx->r15 = S32(ctx->r4 << 6);
    // 0x1503F6F8: jal         0x10003C40
    // 0x1503F6FC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    allocate_memory(rdram, ctx);
        goto after_3;
    // 0x1503F6FC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_3:
    // 0x1503F700: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x1503F704: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1503F708: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1503F70C: sw          $v0, 0x3E8($t8)
    MEM_W(0X3E8, ctx->r24) = ctx->r2;
    // 0x1503F710: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x1503F714: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1503F718: sll         $t9, $a0, 6
    ctx->r25 = S32(ctx->r4 << 6);
    // 0x1503F71C: jal         0x10003C40
    // 0x1503F720: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    allocate_memory(rdram, ctx);
        goto after_4;
    // 0x1503F720: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_4:
    // 0x1503F724: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x1503F728: sw          $v0, 0x3EC($t0)
    MEM_W(0X3EC, ctx->r8) = ctx->r2;
    // 0x1503F72C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x1503F730: lw          $a0, 0x3E8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3E8);
    // 0x1503F734: beq         $a0, $zero, L_1503F750
    if (ctx->r4 == 0) {
        // 0x1503F738: nop
    
            goto L_1503F750;
    }
    // 0x1503F738: nop

    // 0x1503F73C: lw          $t1, 0x3EC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3EC);
    // 0x1503F740: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1503F744: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1503F748: bne         $t1, $zero, L_1503F78C
    if (ctx->r9 != 0) {
        // 0x1503F74C: lui         $a3, 0x3F80
        ctx->r7 = S32(0X3F80 << 16);
            goto L_1503F78C;
    }
    // 0x1503F74C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
L_1503F750:
    // 0x1503F750: bnel        $a0, $zero, L_1503F768
    if (ctx->r4 != 0) {
        // 0x1503F754: lw          $a0, 0x3EC($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X3EC);
            goto L_1503F768;
    }
    goto skip_0;
    // 0x1503F754: lw          $a0, 0x3EC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3EC);
    skip_0:
    // 0x1503F758: jal         0x10004074
    // 0x1503F75C: nop

    func_10004074(rdram, ctx);
        goto after_5;
    // 0x1503F75C: nop

    after_5:
    // 0x1503F760: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x1503F764: lw          $a0, 0x3EC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3EC);
L_1503F768:
    // 0x1503F768: bne         $a0, $zero, L_1503F77C
    if (ctx->r4 != 0) {
        // 0x1503F76C: nop
    
            goto L_1503F77C;
    }
    // 0x1503F76C: nop

    // 0x1503F770: jal         0x10004074
    // 0x1503F774: nop

    func_10004074(rdram, ctx);
        goto after_6;
    // 0x1503F774: nop

    after_6:
    // 0x1503F778: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
L_1503F77C:
    // 0x1503F77C: jal         0x10004074
    // 0x1503F780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_10004074(rdram, ctx);
        goto after_7;
    // 0x1503F780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x1503F784: b           L_1503F7A4
    // 0x1503F788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1503F7A4;
    // 0x1503F788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1503F78C:
    // 0x1503F78C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1503F790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1503F794: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1503F798: jal         0x1503F5B8
    // 0x1503F79C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_1503F5B8(rdram, ctx);
        goto after_8;
    // 0x1503F79C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x1503F7A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1503F7A4:
    // 0x1503F7A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1503F7A8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x1503F7AC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x1503F7B0: jr          $ra
    // 0x1503F7B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x1503F7B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_15183974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15183974: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15183978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518397C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15183980: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x15183984: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x15183988: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1518398C: addiu       $t7, $t7, -0x2180
    ctx->r15 = ADD32(ctx->r15, -0X2180);
    // 0x15183990: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15183994: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x15183998: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x1518399C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x151839A0: bnel        $t8, $zero, L_151839C0
    if (ctx->r24 != 0) {
        // 0x151839A4: lw          $t9, 0x14($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X14);
            goto L_151839C0;
    }
    goto skip_0;
    // 0x151839A4: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    skip_0:
    // 0x151839A8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151839AC: jal         0x15183ACC
    // 0x151839B0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_15183ACC(rdram, ctx);
        goto after_0;
    // 0x151839B0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x151839B4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x151839B8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x151839BC: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
L_151839C0:
    // 0x151839C0: addiu       $a0, $a1, 0x1
    ctx->r4 = ADD32(ctx->r5, 0X1);
    // 0x151839C4: bnel        $t9, $zero, L_151839E4
    if (ctx->r25 != 0) {
        // 0x151839C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151839E4;
    }
    goto skip_1;
    // 0x151839C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x151839CC: jal         0x15183ACC
    // 0x151839D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_15183ACC(rdram, ctx);
        goto after_1;
    // 0x151839D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x151839D4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x151839D8: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x151839DC: sw          $t0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r8;
    // 0x151839E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151839E4:
    // 0x151839E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151839E8: jr          $ra
    // 0x151839EC: nop

    return;
    return;
    // 0x151839EC: nop

;}
RECOMP_FUNC void func_1506FCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FCFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FD00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FD04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FD08: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FD0C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FD10: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1506FD14: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1506FD18: jal         0x15196438
    // 0x1506FD1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15196438(rdram, ctx);
        goto after_0;
    // 0x1506FD1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1506FD20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FD24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FD28: jr          $ra
    // 0x1506FD2C: nop

    return;
    return;
    // 0x1506FD2C: nop

;}
RECOMP_FUNC void func_150F51BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F51BC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x150F51C0: addiu       $v1, $v1, -0x74C0
    ctx->r3 = ADD32(ctx->r3, -0X74C0);
    // 0x150F51C4: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x150F51C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F51CC: beql        $t6, $zero, L_150F51E0
    if (ctx->r14 == 0) {
        // 0x150F51D0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150F51E0;
    }
    goto skip_0;
    // 0x150F51D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x150F51D4: jr          $ra
    // 0x150F51D8: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    return;
    return;
    // 0x150F51D8: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x150F51DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150F51E0:
    // 0x150F51E0: jr          $ra
    // 0x150F51E4: nop

    return;
    return;
    // 0x150F51E4: nop

;}
RECOMP_FUNC void func_15194D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15194D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15194D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15194D88: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15194D8C: jal         0x15194FF4
    // 0x15194D90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15194FF4(rdram, ctx);
        goto after_0;
    // 0x15194D90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x15194D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15194D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15194D9C: jr          $ra
    // 0x15194DA0: nop

    return;
    return;
    // 0x15194DA0: nop

;}
RECOMP_FUNC void func_15104608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15104608: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x1510460C: swc1        $f14, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f14.u32l;
    // 0x15104610: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15104614: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x15104618: jr          $ra
    // 0x1510461C: nop

    return;
    return;
    // 0x1510461C: nop

;}
RECOMP_FUNC void func_15007558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15007558: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1500755C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15007560: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15007564: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15007568: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1500756C: addiu       $a0, $a0, 0xBFC
    ctx->r4 = ADD32(ctx->r4, 0XBFC);
    // 0x15007570: addiu       $v1, $v1, 0xBE0
    ctx->r3 = ADD32(ctx->r3, 0XBE0);
    // 0x15007574: addiu       $v0, $v0, -0x1CA8
    ctx->r2 = ADD32(ctx->r2, -0X1CA8);
L_15007578:
    // 0x15007578: lb          $t6, 0x0($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X0);
    // 0x1500757C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15007580: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x15007584: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15007588: bne         $at, $zero, L_15007578
    if (ctx->r1 != 0) {
        // 0x1500758C: sb          $t6, 0x1($v0)
        MEM_B(0X1, ctx->r2) = ctx->r14;
            goto L_15007578;
    }
    // 0x1500758C: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x15007590: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15007594: addiu       $v1, $zero, 0xCC
    ctx->r3 = ADD32(0, 0XCC);
    // 0x15007598: addiu       $v0, $v0, -0x1CA6
    ctx->r2 = ADD32(ctx->r2, -0X1CA6);
    // 0x1500759C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x150075A0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
L_150075A4:
    // 0x150075A4: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x150075A8: lbu         $t1, 0x1($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1);
    // 0x150075AC: andi        $t8, $a0, 0x3
    ctx->r24 = ctx->r4 & 0X3;
    // 0x150075B0: addiu       $t2, $a0, 0x1
    ctx->r10 = ADD32(ctx->r4, 0X1);
    // 0x150075B4: andi        $t3, $t2, 0x3
    ctx->r11 = ctx->r10 & 0X3;
    // 0x150075B8: sllv        $t9, $t7, $t8
    ctx->r25 = S32(ctx->r15 << (ctx->r24 & 31));
    // 0x150075BC: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x150075C0: sllv        $t4, $t1, $t3
    ctx->r12 = S32(ctx->r9 << (ctx->r11 & 31));
    // 0x150075C4: lbu         $t2, 0x3($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X3);
    // 0x150075C8: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x150075CC: addiu       $t7, $a0, 0x2
    ctx->r15 = ADD32(ctx->r4, 0X2);
    // 0x150075D0: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x150075D4: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x150075D8: addiu       $t1, $a0, 0x3
    ctx->r9 = ADD32(ctx->r4, 0X3);
    // 0x150075DC: andi        $t3, $t1, 0x3
    ctx->r11 = ctx->r9 & 0X3;
    // 0x150075E0: sllv        $t9, $t6, $t8
    ctx->r25 = S32(ctx->r14 << (ctx->r24 & 31));
    // 0x150075E4: addu        $t0, $t5, $t9
    ctx->r8 = ADD32(ctx->r13, ctx->r25);
    // 0x150075E8: sllv        $t4, $t2, $t3
    ctx->r12 = S32(ctx->r10 << (ctx->r11 & 31));
    // 0x150075EC: addu        $v1, $t0, $t4
    ctx->r3 = ADD32(ctx->r8, ctx->r12);
    // 0x150075F0: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x150075F4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x150075F8: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x150075FC: bne         $a0, $a1, L_150075A4
    if (ctx->r4 != ctx->r5) {
        // 0x15007600: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_150075A4;
    }
    // 0x15007600: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15007604: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15007608: addiu       $a2, $a2, -0x1CA8
    ctx->r6 = ADD32(ctx->r6, -0X1CA8);
    // 0x1500760C: sh          $t5, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r13;
    // 0x15007610: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x15007614: lbu         $t7, -0x53A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X53A4);
    // 0x15007618: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1500761C: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    // 0x15007620: bne         $t7, $zero, L_15007634
    if (ctx->r15 != 0) {
        // 0x15007624: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_15007634;
    }
    // 0x15007624: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15007628: jal         0x151DCEF0
    // 0x1500762C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_151DCEF0(rdram, ctx);
        goto after_0;
    // 0x1500762C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x15007630: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_15007634:
    // 0x15007634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15007638: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1500763C: jr          $ra
    // 0x15007640: nop

    return;
    return;
    // 0x15007640: nop

;}
RECOMP_FUNC void func_15005E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15005E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15005E78: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x15005E7C: sh          $t6, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r14;
    // 0x15005E80: jal         0x15124B18
    // 0x15005E84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15124B18(rdram, ctx);
        goto after_0;
    // 0x15005E84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15005E88: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15005E8C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15005E90: sb          $t7, 0x23C($a0)
    MEM_B(0X23C, ctx->r4) = ctx->r15;
    // 0x15005E94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15005E98: jr          $ra
    // 0x15005E9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15005E9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void n_alSynAddSndPlayer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001C700: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1001C704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001C708: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1001C70C: jal         0x10024880
    // 0x1001C710: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x1001C710: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x1001C714: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x1001C718: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x1001C71C: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x1001C720: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1001C724: lw          $t7, 0x20($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X20);
    // 0x1001C728: sw          $t7, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r15;
    // 0x1001C72C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x1001C730: lw          $t9, -0x45BC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45BC);
    // 0x1001C734: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001C738: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1001C73C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x1001C740: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x1001C744: lw          $t3, -0x45BC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X45BC);
    // 0x1001C748: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x1001C74C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x1001C750: jal         0x10024880
    // 0x1001C754: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x1001C754: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x1001C758: b           L_1001C760
    // 0x1001C75C: nop

        goto L_1001C760;
    // 0x1001C75C: nop

L_1001C760:
    // 0x1001C760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001C764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1001C768: jr          $ra
    // 0x1001C76C: nop

    return;
    return;
    // 0x1001C76C: nop

;}
RECOMP_FUNC void n_alEvtqNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001C060: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x1001C064: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x1001C068: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x1001C06C: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x1001C070: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x1001C074: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x1001C078: blez        $a2, L_1001C0F8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x1001C07C: sw          $zero, 0xC($sp)
        MEM_W(0XC, ctx->r29) = 0;
            goto L_1001C0F8;
    }
    // 0x1001C07C: sw          $zero, 0xC($sp)
    MEM_W(0XC, ctx->r29) = 0;
L_1001C080:
    // 0x1001C080: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x1001C084: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x1001C088: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1001C08C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1001C090: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x1001C094: sw          $t8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r24;
    // 0x1001C098: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x1001C09C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x1001C0A0: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x1001C0A4: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1001C0A8: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x1001C0AC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x1001C0B0: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x1001C0B4: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x1001C0B8: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x1001C0BC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1001C0C0: beq         $t5, $zero, L_1001C0D8
    if (ctx->r13 == 0) {
        // 0x1001C0C4: nop
    
            goto L_1001C0D8;
    }
    // 0x1001C0C4: nop

    // 0x1001C0C8: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x1001C0CC: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x1001C0D0: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1001C0D4: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
L_1001C0D8:
    // 0x1001C0D8: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x1001C0DC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x1001C0E0: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x1001C0E4: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x1001C0E8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x1001C0EC: slt         $at, $t2, $a2
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x1001C0F0: bne         $at, $zero, L_1001C080
    if (ctx->r1 != 0) {
        // 0x1001C0F4: sw          $t2, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r10;
            goto L_1001C080;
    }
    // 0x1001C0F4: sw          $t2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r10;
L_1001C0F8:
    // 0x1001C0F8: b           L_1001C100
    // 0x1001C0FC: nop

        goto L_1001C100;
    // 0x1001C0FC: nop

L_1001C100:
    // 0x1001C100: jr          $ra
    // 0x1001C104: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x1001C104: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_15030AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15030AF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15030AF8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15030AFC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x15030B00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15030B04: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15030B08: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15030B0C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15030B10: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15030B14: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x15030B18: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x15030B1C: lbu         $v1, 0x3B($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X3B);
    // 0x15030B20: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x15030B24: bne         $v1, $zero, L_15030B34
    if (ctx->r3 != 0) {
        // 0x15030B28: nop
    
            goto L_15030B34;
    }
    // 0x15030B28: nop

    // 0x15030B2C: b           L_15030D40
    // 0x15030B30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15030D40;
    // 0x15030B30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15030B34:
    // 0x15030B34: bne         $t8, $zero, L_15030B84
    if (ctx->r24 != 0) {
        // 0x15030B38: lui         $s0, 0x800C
        ctx->r16 = S32(0X800C << 16);
            goto L_15030B84;
    }
    // 0x15030B38: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x15030B3C: lw          $s0, 0x3EE0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X3EE0);
    // 0x15030B40: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x15030B44: beql        $s0, $zero, L_15030B88
    if (ctx->r16 == 0) {
        // 0x15030B48: addiu       $a0, $zero, 0x5C
        ctx->r4 = ADD32(0, 0X5C);
            goto L_15030B88;
    }
    goto skip_0;
    // 0x15030B48: addiu       $a0, $zero, 0x5C
    ctx->r4 = ADD32(0, 0X5C);
    skip_0:
L_15030B4C:
    // 0x15030B4C: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x15030B50: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x15030B54: bne         $v1, $t9, L_15030B7C
    if (ctx->r3 != ctx->r25) {
        // 0x15030B58: nop
    
            goto L_15030B7C;
    }
    // 0x15030B58: nop

    // 0x15030B5C: lbu         $t2, 0x6($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X6);
    // 0x15030B60: bne         $t0, $t2, L_15030B7C
    if (ctx->r8 != ctx->r10) {
        // 0x15030B64: nop
    
            goto L_15030B7C;
    }
    // 0x15030B64: nop

    // 0x15030B68: lbu         $t3, 0x1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1);
    // 0x15030B6C: bne         $s1, $t3, L_15030B7C
    if (ctx->r17 != ctx->r11) {
        // 0x15030B70: nop
    
            goto L_15030B7C;
    }
    // 0x15030B70: nop

    // 0x15030B74: b           L_15030D40
    // 0x15030B78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15030D40;
    // 0x15030B78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15030B7C:
    // 0x15030B7C: bne         $v0, $zero, L_15030B4C
    if (ctx->r2 != 0) {
        // 0x15030B80: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15030B4C;
    }
    // 0x15030B80: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_15030B84:
    // 0x15030B84: addiu       $a0, $zero, 0x5C
    ctx->r4 = ADD32(0, 0X5C);
L_15030B88:
    // 0x15030B88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15030B8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15030B90: jal         0x10003C40
    // 0x15030B94: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15030B94: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x15030B98: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x15030B9C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x15030BA0: bne         $v0, $zero, L_15030BB0
    if (ctx->r2 != 0) {
        // 0x15030BA4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15030BB0;
    }
    // 0x15030BA4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15030BA8: b           L_15030D40
    // 0x15030BAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15030D40;
    // 0x15030BAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15030BB0:
    // 0x15030BB0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15030BB4: lw          $v1, 0x3EE0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3EE0);
    // 0x15030BB8: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x15030BBC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15030BC0: beq         $v1, $zero, L_15030BD4
    if (ctx->r3 == 0) {
        // 0x15030BC4: addiu       $t7, $zero, 0xFF
        ctx->r15 = ADD32(0, 0XFF);
            goto L_15030BD4;
    }
    // 0x15030BC4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15030BC8: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x15030BCC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15030BD0: lw          $v1, 0x3EE0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3EE0);
L_15030BD4:
    // 0x15030BD4: sw          $v1, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->r3;
    // 0x15030BD8: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
    // 0x15030BDC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x15030BE0: sw          $v0, 0x3EE0($at)
    MEM_W(0X3EE0, ctx->r1) = ctx->r2;
    // 0x15030BE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15030BE8: lbu         $t5, 0x3B($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X3B);
    // 0x15030BEC: sb          $s1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r17;
    // 0x15030BF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15030BF4: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x15030BF8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x15030BFC: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x15030C00: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x15030C04: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x15030C08: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x15030C0C: sb          $t7, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r15;
    // 0x15030C10: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x15030C14: sb          $a1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r5;
    // 0x15030C18: sb          $t0, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r8;
    // 0x15030C1C: swc1        $f4, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f4.u32l;
    // 0x15030C20: sb          $t6, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r14;
    // 0x15030C24: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x15030C28: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x15030C2C: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x15030C30: sw          $zero, 0x38($v0)
    MEM_W(0X38, ctx->r2) = 0;
    // 0x15030C34: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x15030C38: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x15030C3C: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x15030C40: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x15030C44: sh          $zero, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = 0;
    // 0x15030C48: sb          $t8, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r24;
    // 0x15030C4C: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x15030C50: andi        $t8, $a1, 0x4
    ctx->r24 = ctx->r5 & 0X4;
    // 0x15030C54: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x15030C58: sh          $t9, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r25;
    // 0x15030C5C: lhu         $t2, 0x2($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X2);
    // 0x15030C60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15030C64: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15030C68: sh          $t2, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r10;
    // 0x15030C6C: lhu         $t3, 0x4($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X4);
    // 0x15030C70: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15030C74: sh          $t3, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r11;
    // 0x15030C78: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x15030C7C: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    // 0x15030C80: sb          $t4, 0x17($v0)
    MEM_B(0X17, ctx->r2) = ctx->r12;
    // 0x15030C84: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x15030C88: sb          $a0, 0x16($v0)
    MEM_B(0X16, ctx->r2) = ctx->r4;
    // 0x15030C8C: sb          $t5, 0x15($v0)
    MEM_B(0X15, ctx->r2) = ctx->r13;
    // 0x15030C90: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x15030C94: sh          $t6, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = ctx->r14;
    // 0x15030C98: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x15030C9C: sb          $zero, 0x13($v0)
    MEM_B(0X13, ctx->r2) = 0;
    // 0x15030CA0: sw          $zero, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = 0;
    // 0x15030CA4: sw          $zero, 0x50($v0)
    MEM_W(0X50, ctx->r2) = 0;
    // 0x15030CA8: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x15030CAC: sh          $zero, 0x22($v0)
    MEM_H(0X22, ctx->r2) = 0;
    // 0x15030CB0: beq         $a0, $at, L_15030CBC
    if (ctx->r4 == ctx->r1) {
        // 0x15030CB4: sh          $t7, 0x20($v0)
        MEM_H(0X20, ctx->r2) = ctx->r15;
            goto L_15030CBC;
    }
    // 0x15030CB4: sh          $t7, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r15;
    // 0x15030CB8: beq         $t8, $zero, L_15030CDC
    if (ctx->r24 == 0) {
        // 0x15030CBC: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_15030CDC;
    }
L_15030CBC:
    // 0x15030CBC: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x15030CC0: jal         0x10003C40
    // 0x15030CC4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x15030CC4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_1:
    // 0x15030CC8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x15030CCC: bne         $v0, $zero, L_15030CE0
    if (ctx->r2 != 0) {
        // 0x15030CD0: sw          $v0, 0x34($s0)
        MEM_W(0X34, ctx->r16) = ctx->r2;
            goto L_15030CE0;
    }
    // 0x15030CD0: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x15030CD4: b           L_15030CE0
    // 0x15030CD8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_15030CE0;
    // 0x15030CD8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_15030CDC:
    // 0x15030CDC: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
L_15030CE0:
    // 0x15030CE0: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x15030CE4: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x15030CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15030CEC: bnel        $v0, $zero, L_15030D00
    if (ctx->r2 != 0) {
        // 0x15030CF0: sh          $v0, 0x1C($s0)
        MEM_H(0X1C, ctx->r16) = ctx->r2;
            goto L_15030D00;
    }
    goto skip_1;
    // 0x15030CF0: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    skip_1:
    // 0x15030CF4: b           L_15030D00
    // 0x15030CF8: sh          $t9, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r25;
        goto L_15030D00;
    // 0x15030CF8: sh          $t9, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r25;
    // 0x15030CFC: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
L_15030D00:
    // 0x15030D00: bne         $t1, $zero, L_15030D18
    if (ctx->r9 != 0) {
        // 0x15030D04: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_15030D18;
    }
    // 0x15030D04: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x15030D08: jal         0x1502FFD8
    // 0x15030D0C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_1502FFD8(rdram, ctx);
        goto after_2;
    // 0x15030D0C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_2:
    // 0x15030D10: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x15030D14: or          $t1, $t1, $v0
    ctx->r9 = ctx->r9 | ctx->r2;
L_15030D18:
    // 0x15030D18: beq         $t1, $zero, L_15030D34
    if (ctx->r9 == 0) {
        // 0x15030D1C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15030D34;
    }
    // 0x15030D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15030D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15030D24: jal         0x15030158
    // 0x15030D28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15030158(rdram, ctx);
        goto after_3;
    // 0x15030D28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x15030D2C: b           L_15030D40
    // 0x15030D30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15030D40;
    // 0x15030D30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15030D34:
    // 0x15030D34: jal         0x15031A50
    // 0x15030D38: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_15031A50(rdram, ctx);
        goto after_4;
    // 0x15030D38: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_4:
    // 0x15030D3C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15030D40:
    // 0x15030D40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15030D44: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15030D48: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15030D4C: jr          $ra
    // 0x15030D50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15030D50: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_150718E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150718E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150718E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150718EC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x150718F0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x150718F4: lw          $t6, -0x6448($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6448);
    // 0x150718F8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150718FC: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15071900: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x15071904: lw          $t7, 0x1D4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1D4);
    // 0x15071908: bne         $t7, $zero, L_15071924
    if (ctx->r15 != 0) {
        // 0x1507190C: nop
    
            goto L_15071924;
    }
    // 0x1507190C: nop

    // 0x15071910: lbu         $t8, 0x74($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X74);
    // 0x15071914: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15071918: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x1507191C: bnel        $t9, $at, L_1507198C
    if (ctx->r25 != ctx->r1) {
        // 0x15071920: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507198C;
    }
    goto skip_0;
    // 0x15071920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_15071924:
    // 0x15071924: jal         0x150ADA20
    // 0x15071928: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15071928: nop

    after_0:
    // 0x1507192C: andi        $t0, $v0, 0x3
    ctx->r8 = ctx->r2 & 0X3;
    // 0x15071930: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15071934: lw          $t3, 0x154C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X154C);
    // 0x15071938: addu        $t1, $sp, $t0
    ctx->r9 = ADD32(ctx->r29, ctx->r8);
    // 0x1507193C: lbu         $t1, 0x20($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X20);
    // 0x15071940: lw          $t4, 0x1D4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1D4);
    // 0x15071944: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x15071948: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x1507194C: addiu       $a0, $a0, 0x5480
    ctx->r4 = ADD32(ctx->r4, 0X5480);
    // 0x15071950: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x15071954: jal         0x15143134
    // 0x15071958: addu        $a2, $t2, $t4
    ctx->r6 = ADD32(ctx->r10, ctx->r12);
    func_15143134(rdram, ctx);
        goto after_1;
    // 0x15071958: addu        $a2, $t2, $t4
    ctx->r6 = ADD32(ctx->r10, ctx->r12);
    after_1:
    // 0x1507195C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15071960: lw          $t5, 0x154C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X154C);
    // 0x15071964: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x15071968: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1507196C: lwc1        $f4, 0x180($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X180);
    // 0x15071970: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x15071974: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15071978: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1507197C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15071980: jal         0x151C329C
    // 0x15071984: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_151C329C(rdram, ctx);
        goto after_2;
    // 0x15071984: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x15071988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507198C:
    // 0x1507198C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15071990: jr          $ra
    // 0x15071994: nop

    return;
    return;
    // 0x15071994: nop

;}
RECOMP_FUNC void func_150AC1C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150AB644:
    // 0x150AC1C4: cvt.w.s     $f3, $f7
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 7);
    ctx->f_odd[(3 - 1) * 2] = CVT_W_S(ctx->f7.fl);
    // 0x150AC1C8: mfc1        $fp, $f3
    ctx->r30 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x150AC1CC: sub.s       $f9, $f6, $f29
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f9.fl = ctx->f6.fl - ctx->f29.fl;
    // 0x150AC1D0: sub.s       $f10, $f7, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f7.fl - ctx->f30.fl;
    // 0x150AC1D4: sub.s       $f11, $f8, $f31
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 31);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f31.fl); 
    ctx->f11.fl = ctx->f8.fl - ctx->f31.fl;
    // 0x150AC1D8: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x150AC1DC: mul.s       $f3, $f9, $f9
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f3.fl = MUL_S(ctx->f9.fl, ctx->f9.fl);
    // 0x150AC1E0: nop

    // 0x150AC1E4: mul.s       $f4, $f11, $f11
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f4.fl = MUL_S(ctx->f11.fl, ctx->f11.fl);
    // 0x150AC1E8: add.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f4.fl;
    // 0x150AC1EC: c.eq.s      $f3, $f18
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f3.fl == ctx->f18.fl;
    // 0x150AC1F0: bc1t        L_150AC218
    if (c1cs) {
        // 0x150AC1F4: nop
    
            goto L_150AC218;
    }
    // 0x150AC1F4: nop

    // 0x150AC1F8: sqrt.s      $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = sqrtf(ctx->f3.fl);
    // 0x150AC1FC: neg.s       $f11, $f11
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f11.fl); 
    ctx->f11.fl = -ctx->f11.fl;
    // 0x150AC200: lui         $t1, 0x3F80
    ctx->r9 = S32(0X3F80 << 16);
    // 0x150AC204: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x150AC208: div.s       $f9, $f9, $f3
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f9.fl = DIV_S(ctx->f9.fl, ctx->f3.fl);
    // 0x150AC20C: swc1        $f9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x150AC210: div.s       $f11, $f11, $f3
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f11.fl = DIV_S(ctx->f11.fl, ctx->f3.fl);
    // 0x150AC214: swc1        $f11, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
L_150AC218:
    // 0x150AC218: c.ult.s     $f29, $f6
    CHECK_FR(ctx, 29);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f29.fl < ctx->f6.fl;
    // 0x150AC21C: bc1f        L_150AC230
    if (!c1cs) {
        // 0x150AC220: nop
    
            goto L_150AC230;
    }
    // 0x150AC220: nop

    // 0x150AC224: mov.s       $f3, $f29
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 29);
    ctx->f3.fl = ctx->f29.fl;
    // 0x150AC228: j           L_150AC238
    // 0x150AC22C: mov.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = ctx->f6.fl;
        goto L_150AC238;
    // 0x150AC22C: mov.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = ctx->f6.fl;
L_150AC230:
    // 0x150AC230: mov.s       $f3, $f6
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 6);
    ctx->f3.fl = ctx->f6.fl;
    // 0x150AC234: mov.s       $f4, $f29
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 29);
    ctx->f4.fl = ctx->f29.fl;
L_150AC238:
    // 0x150AC238: c.ult.s     $f31, $f8
    CHECK_FR(ctx, 31);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f31.fl < ctx->f8.fl;
    // 0x150AC23C: bc1f        L_150AC250
    if (!c1cs) {
        // 0x150AC240: nop
    
            goto L_150AC250;
    }
    // 0x150AC240: nop

    // 0x150AC244: mov.s       $f5, $f31
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 31);
    ctx->f5.fl = ctx->f31.fl;
    // 0x150AC248: j           L_150AC258
    // 0x150AC24C: mov.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = ctx->f8.fl;
        goto L_150AC258;
    // 0x150AC24C: mov.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = ctx->f8.fl;
L_150AC250:
    // 0x150AC250: mov.s       $f5, $f8
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 8);
    ctx->f5.fl = ctx->f8.fl;
    // 0x150AC254: mov.s       $f6, $f31
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 31);
    ctx->f6.fl = ctx->f31.fl;
L_150AC258:
    // 0x150AC258: trunc.w.s   $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f_odd[(3 - 1) * 2] = TRUNC_W_S(ctx->f3.fl);
    // 0x150AC25C: trunc.w.s   $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150AC260: trunc.w.s   $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    ctx->f_odd[(5 - 1) * 2] = TRUNC_W_S(ctx->f5.fl);
    // 0x150AC264: trunc.w.s   $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150AC268: mfc1        $s2, $f3
    ctx->r18 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x150AC26C: mfc1        $s3, $f4
    ctx->r19 = (int32_t)ctx->f4.u32l;
    // 0x150AC270: mfc1        $s4, $f5
    ctx->r20 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x150AC274: mfc1        $s5, $f6
    ctx->r21 = (int32_t)ctx->f6.u32l;
    // 0x150AC278: lw          $t1, 0x158($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X158);
    // 0x150AC27C: sub         $s2, $s2, $t1
    ctx->r18 = SUB32(ctx->r18, ctx->r9);
    // 0x150AC280: add         $s3, $s3, $t1
    ctx->r19 = ADD32(ctx->r19, ctx->r9);
    // 0x150AC284: sub         $s4, $s4, $t1
    ctx->r20 = SUB32(ctx->r20, ctx->r9);
    // 0x150AC288: jr          $t0
    // 0x150AC28C: add         $s5, $s5, $t1
    ctx->r21 = ADD32(ctx->r21, ctx->r9);
    return;

    // 0x150AC28C: add         $s5, $s5, $t1
    ctx->r21 = ADD32(ctx->r21, ctx->r9);
    // 0x150AC290: beq         $s0, $zero, L_150AC2A0
    if (ctx->r16 == 0) {
        // 0x150AC294: sw          $gp, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r28;
            goto L_150AC2A0;
    }
    // 0x150AC294: sw          $gp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r28;
    // 0x150AC298: j           L_150AB644
    // 0x150AC29C: nop

    static_5_150AB644(rdram, ctx);
    return;
    // 0x150AC29C: nop

L_150AC2A0:
    // 0x150AC2A0: lw          $t0, 0x1DC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1DC);
    // 0x150AC2A4: jr          $t0
    // 0x150AC2A8: nop

    // 0x150AC2AC: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150AC2B0: lwc1        $f1, 0x38($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x150AC2B4: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150AC2B8: lw          $t0, 0x140($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X140);
    // 0x150AC2BC: swc1        $f0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f0.u32l;
    // 0x150AC2C0: swc1        $f1, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f_odd[(1 - 1) * 2];
    // 0x150AC2C4: swc1        $f2, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f2.u32l;
    // 0x150AC2C8: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x150AC2CC: bne         $t1, $zero, L_150AC2D8
    if (ctx->r9 != 0) {
        // 0x150AC2D0: nop
    
            goto L_150AC2D8;
    }
    // 0x150AC2D0: nop

    // 0x150AC2D4: sw          $zero, 0x20($t0)
    MEM_W(0X20, ctx->r8) = 0;
L_150AC2D8:
    // 0x150AC2D8: lw          $s0, 0x170($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X170);
    // 0x150AC2DC: lw          $s1, 0x174($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X174);
    // 0x150AC2E0: lw          $s2, 0x178($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X178);
    // 0x150AC2E4: lw          $s3, 0x17C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X17C);
    // 0x150AC2E8: lw          $s4, 0x180($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X180);
    // 0x150AC2EC: lw          $s5, 0x184($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X184);
    // 0x150AC2F0: lw          $s6, 0x188($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X188);
    // 0x150AC2F4: lw          $s7, 0x18C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X18C);
    // 0x150AC2F8: lw          $fp, 0x190($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X190);
    // 0x150AC2FC: lw          $gp, 0x194($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X194);
    // 0x150AC300: lwc1        $f20, 0x198($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X198);
    // 0x150AC304: lwc1        $f21, 0x19C($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X19C);
    // 0x150AC308: lwc1        $f22, 0x1A0($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x150AC30C: lwc1        $f23, 0x1A4($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X1A4);
    // 0x150AC310: lwc1        $f24, 0x1A8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x150AC314: lwc1        $f25, 0x1AC($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X1AC);
    // 0x150AC318: lwc1        $f26, 0x1B0($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x150AC31C: lwc1        $f27, 0x1B4($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X1B4);
    // 0x150AC320: lwc1        $f28, 0x1B8($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x150AC324: lwc1        $f29, 0x1BC($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X1BC);
    // 0x150AC328: lwc1        $f30, 0x1C0($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x150AC32C: lwc1        $f31, 0x1C4($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X1C4);
    // 0x150AC330: lw          $ra, 0x264($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X264);
    // 0x150AC334: lw          $v0, 0x164($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X164);
    // 0x150AC338: addiu       $sp, $sp, 0x268
    ctx->r29 = ADD32(ctx->r29, 0X268);
    // 0x150AC33C: jr          $ra
    // 0x150AC340: nop

    return;
    return;
    // 0x150AC340: nop

;}
RECOMP_FUNC void func_1513BA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513BA10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513BA14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513BA18: lbu         $t6, 0x48($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X48);
    // 0x1513BA1C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513BA20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1513BA24: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x1513BA28: lw          $t9, -0x63BC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X63BC);
    // 0x1513BA2C: jalr        $t9
    // 0x1513BA30: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1513BA30: nop

    after_0:
    // 0x1513BA34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513BA38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513BA3C: jr          $ra
    // 0x1513BA40: nop

    return;
    return;
    // 0x1513BA40: nop

;}
RECOMP_FUNC void func_1502460C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502460C: addiu       $sp, $sp, -0x158
    ctx->r29 = ADD32(ctx->r29, -0X158);
    // 0x15024610: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x15024614: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15024618: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1502461C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x15024620: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15024624: sw          $a1, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r5;
    // 0x15024628: sw          $a2, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r6;
    // 0x1502462C: sw          $a3, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r7;
    // 0x15024630: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15024634: lb          $t6, 0xBF4($t6)
    ctx->r14 = MEM_B(ctx->r14, 0XBF4);
    // 0x15024638: beql        $t6, $zero, L_150249AC
    if (ctx->r14 == 0) {
        // 0x1502463C: lb          $a1, 0x0($s2)
        ctx->r5 = MEM_B(ctx->r18, 0X0);
            goto L_150249AC;
    }
    goto skip_0;
    // 0x1502463C: lb          $a1, 0x0($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X0);
    skip_0:
    // 0x15024640: lb          $a1, 0x0($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X0);
    // 0x15024644: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x15024648: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x1502464C: beq         $t4, $a1, L_15024674
    if (ctx->r12 == ctx->r5) {
        // 0x15024650: addiu       $s1, $sp, 0x140
        ctx->r17 = ADD32(ctx->r29, 0X140);
            goto L_15024674;
    }
    // 0x15024650: addiu       $s1, $sp, 0x140
    ctx->r17 = ADD32(ctx->r29, 0X140);
    // 0x15024654: beq         $a1, $at, L_15024674
    if (ctx->r5 == ctx->r1) {
        // 0x15024658: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_15024674;
    }
    // 0x15024658: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1502465C: beq         $a1, $at, L_15024674
    if (ctx->r5 == ctx->r1) {
        // 0x15024660: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_15024674;
    }
    // 0x15024660: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x15024664: beq         $a1, $at, L_15024674
    if (ctx->r5 == ctx->r1) {
        // 0x15024668: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_15024674;
    }
    // 0x15024668: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x1502466C: bnel        $a1, $at, L_150249AC
    if (ctx->r5 != ctx->r1) {
        // 0x15024670: lb          $a1, 0x0($s2)
        ctx->r5 = MEM_B(ctx->r18, 0X0);
            goto L_150249AC;
    }
    goto skip_1;
    // 0x15024670: lb          $a1, 0x0($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X0);
    skip_1:
L_15024674:
    // 0x15024674: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x15024678: addiu       $t7, $t7, 0x4118
    ctx->r15 = ADD32(ctx->r15, 0X4118);
    // 0x1502467C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x15024680: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15024684: addiu       $v0, $v0, -0x1555
    ctx->r2 = ADD32(ctx->r2, -0X1555);
    // 0x15024688: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x1502468C: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x15024690: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x15024694: lbu         $at, 0x8($t7)
    ctx->r1 = MEM_BU(ctx->r15, 0X8);
    // 0x15024698: sb          $at, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r1;
    // 0x1502469C: lb          $a1, 0x0($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X0);
    // 0x150246A0: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x150246A4: bne         $t4, $a1, L_150246B4
    if (ctx->r12 != ctx->r5) {
        // 0x150246A8: nop
    
            goto L_150246B4;
    }
    // 0x150246A8: nop

    // 0x150246AC: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x150246B0: bne         $t5, $zero, L_15024718
    if (ctx->r13 != 0) {
        // 0x150246B4: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_15024718;
    }
L_150246B4:
    // 0x150246B4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150246B8: bne         $a1, $at, L_150246CC
    if (ctx->r5 != ctx->r1) {
        // 0x150246BC: addiu       $v0, $v0, -0x1555
        ctx->r2 = ADD32(ctx->r2, -0X1555);
            goto L_150246CC;
    }
    // 0x150246BC: addiu       $v0, $v0, -0x1555
    ctx->r2 = ADD32(ctx->r2, -0X1555);
    // 0x150246C0: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x150246C4: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x150246C8: bne         $t2, $t6, L_15024718
    if (ctx->r10 != ctx->r14) {
        // 0x150246CC: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_15024718;
    }
L_150246CC:
    // 0x150246CC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x150246D0: bnel        $a1, $at, L_150246E8
    if (ctx->r5 != ctx->r1) {
        // 0x150246D4: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_150246E8;
    }
    goto skip_2;
    // 0x150246D4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    skip_2:
    // 0x150246D8: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x150246DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150246E0: bne         $t8, $at, L_15024718
    if (ctx->r24 != ctx->r1) {
        // 0x150246E4: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_15024718;
    }
    // 0x150246E4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
L_150246E8:
    // 0x150246E8: bnel        $a1, $at, L_15024700
    if (ctx->r5 != ctx->r1) {
        // 0x150246EC: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_15024700;
    }
    goto skip_3;
    // 0x150246EC: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    skip_3:
    // 0x150246F0: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x150246F4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x150246F8: bne         $t1, $t7, L_15024718
    if (ctx->r9 != ctx->r15) {
        // 0x150246FC: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_15024718;
    }
    // 0x150246FC: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
L_15024700:
    // 0x15024700: bnel        $a1, $at, L_15024724
    if (ctx->r5 != ctx->r1) {
        // 0x15024704: lb          $t5, 0x4($s2)
        ctx->r13 = MEM_B(ctx->r18, 0X4);
            goto L_15024724;
    }
    goto skip_4;
    // 0x15024704: lb          $t5, 0x4($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X4);
    skip_4:
    // 0x15024708: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x1502470C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15024710: beql        $a2, $t9, L_15024724
    if (ctx->r6 == ctx->r25) {
        // 0x15024714: lb          $t5, 0x4($s2)
        ctx->r13 = MEM_B(ctx->r18, 0X4);
            goto L_15024724;
    }
    goto skip_5;
    // 0x15024714: lb          $t5, 0x4($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X4);
    skip_5:
L_15024718:
    // 0x15024718: b           L_150265B4
    // 0x1502471C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x1502471C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15024720: lb          $t5, 0x4($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X4);
L_15024724:
    // 0x15024724: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15024728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1502472C: bne         $t5, $zero, L_1502473C
    if (ctx->r13 != 0) {
        // 0x15024730: nop
    
            goto L_1502473C;
    }
    // 0x15024730: nop

    // 0x15024734: b           L_1502473C
    // 0x15024738: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
        goto L_1502473C;
    // 0x15024738: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_1502473C:
    // 0x1502473C: jal         0x150234A4
    // 0x15024740: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    func_150234A4(rdram, ctx);
        goto after_0;
    // 0x15024740: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    after_0:
    // 0x15024744: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15024748: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x1502474C: beq         $v0, $zero, L_150265B0
    if (ctx->r2 == 0) {
        // 0x15024750: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_150265B0;
    }
    // 0x15024750: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15024754: lb          $v1, 0x4($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X4);
    // 0x15024758: bne         $v1, $zero, L_150248E8
    if (ctx->r3 != 0) {
        // 0x1502475C: nop
    
            goto L_150248E8;
    }
    // 0x1502475C: nop

    // 0x15024760: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x15024764: beql        $t6, $zero, L_15024784
    if (ctx->r14 == 0) {
        // 0x15024768: lw          $a1, 0x168($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X168);
            goto L_15024784;
    }
    goto skip_6;
    // 0x15024768: lw          $a1, 0x168($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X168);
    skip_6:
    // 0x1502476C: lw          $a0, 0x34($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X34);
    // 0x15024770: jal         0x1516D2E0
    // 0x15024774: sw          $v0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r2;
    func_1516D2E0(rdram, ctx);
        goto after_1;
    // 0x15024774: sw          $v0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r2;
    after_1:
    // 0x15024778: lw          $s0, 0x150($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X150);
    // 0x1502477C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x15024780: lw          $a1, 0x168($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X168);
L_15024784:
    // 0x15024784: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15024788: lh          $t5, 0x2($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X2);
    // 0x1502478C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x15024790: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15024794: lw          $t9, 0x35E0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X35E0);
    // 0x15024798: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x1502479C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x150247A0: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x150247A4: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x150247A8: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
    // 0x150247AC: ori         $t7, $zero, 0x8013
    ctx->r15 = 0 | 0X8013;
    // 0x150247B0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x150247B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150247B8: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x150247BC: bne         $v0, $at, L_150247D0
    if (ctx->r2 != ctx->r1) {
        // 0x150247C0: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_150247D0;
    }
    // 0x150247C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150247C4: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x150247C8: b           L_150247F0
    // 0x150247CC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
        goto L_150247F0;
    // 0x150247CC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_150247D0:
    // 0x150247D0: addiu       $at, $zero, 0xBF
    ctx->r1 = ADD32(0, 0XBF);
    // 0x150247D4: bne         $v0, $at, L_150247EC
    if (ctx->r2 != ctx->r1) {
        // 0x150247D8: ori         $t9, $zero, 0x8011
        ctx->r25 = 0 | 0X8011;
            goto L_150247EC;
    }
    // 0x150247D8: ori         $t9, $zero, 0x8011
    ctx->r25 = 0 | 0X8011;
    // 0x150247DC: ori         $t5, $zero, 0x8019
    ctx->r13 = 0 | 0X8019;
    // 0x150247E0: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x150247E4: b           L_150247F0
    // 0x150247E8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
        goto L_150247F0;
    // 0x150247E8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_150247EC:
    // 0x150247EC: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
L_150247F0:
    // 0x150247F0: sw          $a0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r4;
    // 0x150247F4: sh          $t6, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r14;
    // 0x150247F8: sb          $a2, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r6;
    // 0x150247FC: sh          $zero, 0x28($s0)
    MEM_H(0X28, ctx->r16) = 0;
    // 0x15024800: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x15024804: addiu       $t0, $zero, 0x44
    ctx->r8 = ADD32(0, 0X44);
    // 0x15024808: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1502480C: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15024810: addiu       $t8, $t8, 0x3958
    ctx->r24 = ADD32(ctx->r24, 0X3958);
    // 0x15024814: addu        $v0, $a1, $t8
    ctx->r2 = ADD32(ctx->r5, ctx->r24);
    // 0x15024818: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x1502481C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15024820: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15024824: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15024828: mflo        $v1
    ctx->r3 = lo;
    // 0x1502482C: addu        $t9, $t5, $v1
    ctx->r25 = ADD32(ctx->r13, ctx->r3);
    // 0x15024830: addiu       $t6, $t9, 0xC
    ctx->r14 = ADD32(ctx->r25, 0XC);
    // 0x15024834: sw          $t6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r14;
    // 0x15024838: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x1502483C: sb          $a2, 0x2F($s0)
    MEM_B(0X2F, ctx->r16) = ctx->r6;
    // 0x15024840: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15024844: addu        $t7, $t8, $v1
    ctx->r15 = ADD32(ctx->r24, ctx->r3);
    // 0x15024848: addiu       $t5, $t7, 0x10
    ctx->r13 = ADD32(ctx->r15, 0X10);
    // 0x1502484C: sw          $t5, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r13;
    // 0x15024850: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x15024854: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x15024858: addiu       $t8, $t6, 0x14
    ctx->r24 = ADD32(ctx->r14, 0X14);
    // 0x1502485C: sw          $t8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r24;
    // 0x15024860: lb          $t7, 0x5($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X5);
    // 0x15024864: multu       $t7, $t1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15024868: mflo        $t5
    ctx->r13 = lo;
    // 0x1502486C: addu        $t9, $s1, $t5
    ctx->r25 = ADD32(ctx->r17, ctx->r13);
    // 0x15024870: lbu         $t6, 0x0($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X0);
    // 0x15024874: sb          $t6, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r14;
    // 0x15024878: lb          $t8, 0x5($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X5);
    // 0x1502487C: multu       $t8, $t1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15024880: mflo        $t7
    ctx->r15 = lo;
    // 0x15024884: addu        $t5, $s1, $t7
    ctx->r13 = ADD32(ctx->r17, ctx->r15);
    // 0x15024888: lbu         $t9, 0x1($t5)
    ctx->r25 = MEM_BU(ctx->r13, 0X1);
    // 0x1502488C: sb          $t9, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r25;
    // 0x15024890: lb          $t6, 0x5($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X5);
    // 0x15024894: multu       $t6, $t1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15024898: mflo        $t8
    ctx->r24 = lo;
    // 0x1502489C: addu        $t7, $s1, $t8
    ctx->r15 = ADD32(ctx->r17, ctx->r24);
    // 0x150248A0: lbu         $t5, 0x2($t7)
    ctx->r13 = MEM_BU(ctx->r15, 0X2);
    // 0x150248A4: addiu       $t7, $s0, 0x4
    ctx->r15 = ADD32(ctx->r16, 0X4);
    // 0x150248A8: sb          $t5, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r13;
    // 0x150248AC: lb          $t9, 0x5($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X5);
    // 0x150248B0: bnel        $t9, $at, L_150248CC
    if (ctx->r25 != ctx->r1) {
        // 0x150248B4: lw          $t5, 0x178($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X178);
            goto L_150248CC;
    }
    goto skip_7;
    // 0x150248B4: lw          $t5, 0x178($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X178);
    skip_7:
    // 0x150248B8: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x150248BC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x150248C0: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x150248C4: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x150248C8: lw          $t5, 0x178($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X178);
L_150248CC:
    // 0x150248CC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150248D0: sw          $s0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r16;
    // 0x150248D4: jal         0x1516A7B0
    // 0x150248D8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_1516A7B0(rdram, ctx);
        goto after_2;
    // 0x150248D8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_2:
    // 0x150248DC: lw          $a1, 0x150($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X150);
    // 0x150248E0: b           L_150265B0
    // 0x150248E4: sw          $v0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r2;
        goto L_150265B0;
    // 0x150248E4: sw          $v0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r2;
L_150248E8:
    // 0x150248E8: bne         $a2, $v1, L_15024900
    if (ctx->r6 != ctx->r3) {
        // 0x150248EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15024900;
    }
    // 0x150248EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150248F0: jal         0x15023440
    // 0x150248F4: lb          $a1, 0x5($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X5);
    func_15023440(rdram, ctx);
        goto after_3;
    // 0x150248F4: lb          $a1, 0x5($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X5);
    after_3:
    // 0x150248F8: b           L_150265B4
    // 0x150248FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150248FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024900:
    // 0x15024900: lb          $t9, 0x5($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X5);
    // 0x15024904: bnel        $t9, $zero, L_1502492C
    if (ctx->r25 != 0) {
        // 0x15024908: lw          $a0, 0x34($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X34);
            goto L_1502492C;
    }
    goto skip_8;
    // 0x15024908: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    skip_8:
    // 0x1502490C: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x15024910: jal         0x1516D378
    // 0x15024914: sw          $s0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r16;
    func_1516D378(rdram, ctx);
        goto after_4;
    // 0x15024914: sw          $s0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r16;
    after_4:
    // 0x15024918: lw          $a1, 0x150($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X150);
    // 0x1502491C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x15024920: b           L_15024940
    // 0x15024924: sw          $v0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r2;
        goto L_15024940;
    // 0x15024924: sw          $v0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r2;
    // 0x15024928: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
L_1502492C:
    // 0x1502492C: jal         0x1516D3C4
    // 0x15024930: sw          $s0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r16;
    func_1516D3C4(rdram, ctx);
        goto after_5;
    // 0x15024930: sw          $s0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r16;
    after_5:
    // 0x15024934: lw          $a1, 0x150($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X150);
    // 0x15024938: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x1502493C: sw          $v0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r2;
L_15024940:
    // 0x15024940: lh          $v1, 0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X6);
    // 0x15024944: beq         $v1, $zero, L_150265B0
    if (ctx->r3 == 0) {
        // 0x15024948: addiu       $a0, $v1, -0x1
        ctx->r4 = ADD32(ctx->r3, -0X1);
            goto L_150265B0;
    }
    // 0x15024948: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    // 0x1502494C: multu       $a0, $t1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15024950: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15024954: mflo        $t6
    ctx->r14 = lo;
    // 0x15024958: addu        $v0, $s1, $t6
    ctx->r2 = ADD32(ctx->r17, ctx->r14);
    // 0x1502495C: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x15024960: sb          $t8, 0x2C($a1)
    MEM_B(0X2C, ctx->r5) = ctx->r24;
    // 0x15024964: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x15024968: sb          $t7, 0x2D($a1)
    MEM_B(0X2D, ctx->r5) = ctx->r15;
    // 0x1502496C: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x15024970: bne         $a0, $at, L_1502498C
    if (ctx->r4 != ctx->r1) {
        // 0x15024974: sb          $t5, 0x2E($a1)
        MEM_B(0X2E, ctx->r5) = ctx->r13;
            goto L_1502498C;
    }
    // 0x15024974: sb          $t5, 0x2E($a1)
    MEM_B(0X2E, ctx->r5) = ctx->r13;
    // 0x15024978: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x1502497C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x15024980: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x15024984: b           L_150265B0
    // 0x15024988: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
        goto L_150265B0;
    // 0x15024988: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
L_1502498C:
    // 0x1502498C: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x15024990: lui         $at, 0xFFFB
    ctx->r1 = S32(0XFFFB << 16);
    // 0x15024994: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x15024998: and         $t7, $t8, $at
    ctx->r15 = ctx->r24 & ctx->r1;
    // 0x1502499C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x150249A0: b           L_150265B4
    // 0x150249A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150249A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150249A8: lb          $a1, 0x0($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X0);
L_150249AC:
    // 0x150249AC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x150249B0: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x150249B4: bne         $a1, $at, L_15024A58
    if (ctx->r5 != ctx->r1) {
        // 0x150249B8: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_15024A58;
    }
    // 0x150249B8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x150249BC: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x150249C0: beql        $s0, $zero, L_150265B4
    if (ctx->r16 == 0) {
        // 0x150249C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_9;
    // 0x150249C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_9:
    // 0x150249C8: lh          $t5, 0x6($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X6);
    // 0x150249CC: lw          $a0, 0x16C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X16C);
    // 0x150249D0: beql        $t5, $zero, L_150249EC
    if (ctx->r13 == 0) {
        // 0x150249D4: lb          $t9, 0x5($s2)
        ctx->r25 = MEM_B(ctx->r18, 0X5);
            goto L_150249EC;
    }
    goto skip_10;
    // 0x150249D4: lb          $t9, 0x5($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X5);
    skip_10:
    // 0x150249D8: jal         0x1507EB4C
    // 0x150249DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1507EB4C(rdram, ctx);
        goto after_6;
    // 0x150249DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x150249E0: b           L_150265B4
    // 0x150249E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150249E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150249E8: lb          $t9, 0x5($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X5);
L_150249EC:
    // 0x150249EC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150249F0: lw          $a2, 0x15C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X15C);
    // 0x150249F4: beq         $t9, $zero, L_15024A04
    if (ctx->r25 == 0) {
        // 0x150249F8: addiu       $a3, $sp, 0x138
        ctx->r7 = ADD32(ctx->r29, 0X138);
            goto L_15024A04;
    }
    // 0x150249F8: addiu       $a3, $sp, 0x138
    ctx->r7 = ADD32(ctx->r29, 0X138);
    // 0x150249FC: b           L_15024A34
    // 0x15024A00: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
        goto L_15024A34;
    // 0x15024A00: ori         $v1, $zero, 0xFFFF
    ctx->r3 = 0 | 0XFFFF;
L_15024A04:
    // 0x15024A04: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
    // 0x15024A08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15024A0C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15024A10: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15024A14: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15024A18: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15024A1C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15024A20: jal         0x15023BB0
    // 0x15024A24: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_15023BB0(rdram, ctx);
        goto after_7;
    // 0x15024A24: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_7:
    // 0x15024A28: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x15024A2C: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x15024A30: subu        $v1, $v0, $t8
    ctx->r3 = SUB32(ctx->r2, ctx->r24);
L_15024A34:
    // 0x15024A34: lb          $t7, 0x4($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X4);
    // 0x15024A38: lw          $a0, 0x16C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X16C);
    // 0x15024A3C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x15024A40: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x15024A44: andi        $a3, $v1, 0xFFFF
    ctx->r7 = ctx->r3 & 0XFFFF;
    // 0x15024A48: jal         0x1507E7E4
    // 0x15024A4C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_1507E7E4(rdram, ctx);
        goto after_8;
    // 0x15024A4C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_8:
    // 0x15024A50: b           L_150265B4
    // 0x15024A54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024A54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024A58:
    // 0x15024A58: bne         $v0, $a1, L_15024B30
    if (ctx->r2 != ctx->r5) {
        // 0x15024A5C: addiu       $t2, $zero, 0x4
        ctx->r10 = ADD32(0, 0X4);
            goto L_15024B30;
    }
    // 0x15024A5C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x15024A60: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15024A64: bnel        $s1, $zero, L_15024A78
    if (ctx->r17 != 0) {
        // 0x15024A68: lb          $v1, 0x4($s2)
        ctx->r3 = MEM_B(ctx->r18, 0X4);
            goto L_15024A78;
    }
    goto skip_11;
    // 0x15024A68: lb          $v1, 0x4($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X4);
    skip_11:
    // 0x15024A6C: b           L_150265B4
    // 0x15024A70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024A70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15024A74: lb          $v1, 0x4($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X4);
L_15024A78:
    // 0x15024A78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15024A7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15024A80: bne         $v1, $zero, L_15024AA0
    if (ctx->r3 != 0) {
        // 0x15024A84: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_15024AA0;
    }
    // 0x15024A84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15024A88: lh          $a1, 0x2($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X2);
    // 0x15024A8C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x15024A90: jal         0x15083568
    // 0x15024A94: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    func_15083568(rdram, ctx);
        goto after_9;
    // 0x15024A94: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_9:
    // 0x15024A98: b           L_150265B4
    // 0x15024A9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024A9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024AA0:
    // 0x15024AA0: bne         $a2, $v1, L_15024AC0
    if (ctx->r6 != ctx->r3) {
        // 0x15024AA4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_15024AC0;
    }
    // 0x15024AA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15024AA8: lh          $a1, 0x2($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X2);
    // 0x15024AAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15024AB0: jal         0x150836CC
    // 0x15024AB4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    func_150836CC(rdram, ctx);
        goto after_10;
    // 0x15024AB4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_10:
    // 0x15024AB8: b           L_150265B4
    // 0x15024ABC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024ABC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024AC0:
    // 0x15024AC0: lh          $a1, 0x2($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X2);
    // 0x15024AC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15024AC8: jal         0x1503195C
    // 0x15024ACC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    func_1503195C(rdram, ctx);
        goto after_11;
    // 0x15024ACC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_11:
    // 0x15024AD0: beql        $v0, $zero, L_150265B4
    if (ctx->r2 == 0) {
        // 0x15024AD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_12;
    // 0x15024AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_12:
    // 0x15024AD8: lb          $v1, 0x4($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X4);
    // 0x15024ADC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15024AE0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x15024AE4: bne         $v1, $at, L_15024B08
    if (ctx->r3 != ctx->r1) {
        // 0x15024AE8: nop
    
            goto L_15024B08;
    }
    // 0x15024AE8: nop

    // 0x15024AEC: lb          $t5, 0x5($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X5);
    // 0x15024AF0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x15024AF4: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x15024AF8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x15024AFC: lw          $t6, 0x214($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X214);
    // 0x15024B00: b           L_150265B0
    // 0x15024B04: sh          $t6, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r14;
        goto L_150265B0;
    // 0x15024B04: sh          $t6, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r14;
L_15024B08:
    // 0x15024B08: bnel        $t1, $v1, L_150265B4
    if (ctx->r9 != ctx->r3) {
        // 0x15024B0C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_13;
    // 0x15024B0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_13:
    // 0x15024B10: lb          $t8, 0x5($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X5);
    // 0x15024B14: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x15024B18: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x15024B1C: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x15024B20: lw          $t5, 0x214($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X214);
    // 0x15024B24: sh          $t5, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r13;
    // 0x15024B28: b           L_150265B4
    // 0x15024B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024B30:
    // 0x15024B30: bne         $t2, $a1, L_15024BD4
    if (ctx->r10 != ctx->r5) {
        // 0x15024B34: addiu       $t1, $zero, 0x3
        ctx->r9 = ADD32(0, 0X3);
            goto L_15024BD4;
    }
    // 0x15024B34: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x15024B38: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15024B3C: bne         $s1, $zero, L_15024B4C
    if (ctx->r17 != 0) {
        // 0x15024B40: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_15024B4C;
    }
    // 0x15024B40: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15024B44: b           L_150265B4
    // 0x15024B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024B4C:
    // 0x15024B4C: lw          $t9, 0x168($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X168);
    // 0x15024B50: lw          $a2, 0x15C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X15C);
    // 0x15024B54: addiu       $a3, $sp, 0x12C
    ctx->r7 = ADD32(ctx->r29, 0X12C);
    // 0x15024B58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15024B5C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15024B60: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15024B64: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15024B68: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15024B6C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15024B70: jal         0x15023BB0
    // 0x15024B74: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    func_15023BB0(rdram, ctx);
        goto after_12;
    // 0x15024B74: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    after_12:
    // 0x15024B78: lw          $t6, 0x164($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X164);
    // 0x15024B7C: subu        $v1, $v0, $t6
    ctx->r3 = SUB32(ctx->r2, ctx->r14);
    // 0x15024B80: bgez        $v1, L_15024B90
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15024B84: sra         $t8, $v1, 1
        ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
            goto L_15024B90;
    }
    // 0x15024B84: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x15024B88: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x15024B8C: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_15024B90:
    // 0x15024B90: slti        $at, $t8, 0x100
    ctx->r1 = SIGNED(ctx->r24) < 0X100 ? 1 : 0;
    // 0x15024B94: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x15024B98: bne         $at, $zero, L_15024BA8
    if (ctx->r1 != 0) {
        // 0x15024B9C: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_15024BA8;
    }
    // 0x15024B9C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x15024BA0: b           L_15024BB4
    // 0x15024BA4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
        goto L_15024BB4;
    // 0x15024BA4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
L_15024BA8:
    // 0x15024BA8: bnel        $v1, $zero, L_15024BB8
    if (ctx->r3 != 0) {
        // 0x15024BAC: lb          $t7, 0x4($s2)
        ctx->r15 = MEM_B(ctx->r18, 0X4);
            goto L_15024BB8;
    }
    goto skip_14;
    // 0x15024BAC: lb          $t7, 0x4($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X4);
    skip_14:
    // 0x15024BB0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_15024BB4:
    // 0x15024BB4: lb          $t7, 0x4($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X4);
L_15024BB8:
    // 0x15024BB8: bnel        $t7, $zero, L_150265B4
    if (ctx->r15 != 0) {
        // 0x15024BBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_15;
    // 0x15024BBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_15:
    // 0x15024BC0: lh          $t5, 0x2($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X2);
    // 0x15024BC4: sb          $a0, 0x135($s1)
    MEM_B(0X135, ctx->r17) = ctx->r4;
    // 0x15024BC8: sb          $t5, 0x134($s1)
    MEM_B(0X134, ctx->r17) = ctx->r13;
    // 0x15024BCC: b           L_150265B4
    // 0x15024BD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024BD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024BD4:
    // 0x15024BD4: bne         $t1, $a1, L_15024C64
    if (ctx->r9 != ctx->r5) {
        // 0x15024BD8: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_15024C64;
    }
    // 0x15024BD8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x15024BDC: lw          $v0, 0x168($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X168);
    // 0x15024BE0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15024BE4: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x15024BE8: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x15024BEC: lbu         $t9, 0x363A($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X363A);
    // 0x15024BF0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15024BF4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15024BF8: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x15024BFC: bne         $at, $zero, L_15024C0C
    if (ctx->r1 != 0) {
        // 0x15024C00: addu        $t8, $t8, $t6
        ctx->r24 = ADD32(ctx->r24, ctx->r14);
            goto L_15024C0C;
    }
    // 0x15024C00: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x15024C04: b           L_150265B4
    // 0x15024C08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024C08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024C0C:
    // 0x15024C0C: lw          $t8, 0x35F0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X35F0);
    // 0x15024C10: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    // 0x15024C14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15024C18: addu        $t5, $t8, $t7
    ctx->r13 = ADD32(ctx->r24, ctx->r15);
    // 0x15024C1C: lhu         $t9, 0x0($t5)
    ctx->r25 = MEM_HU(ctx->r13, 0X0);
    // 0x15024C20: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15024C24: addiu       $v1, $v1, 0x35F8
    ctx->r3 = ADD32(ctx->r3, 0X35F8);
    // 0x15024C28: bnel        $a2, $t9, L_150265B4
    if (ctx->r6 != ctx->r25) {
        // 0x15024C2C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_16;
    // 0x15024C2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_16:
    // 0x15024C30: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x15024C34: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x15024C38: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15024C3C: beql        $s0, $t6, L_150265B4
    if (ctx->r16 == ctx->r14) {
        // 0x15024C40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_17;
    // 0x15024C40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_17:
    // 0x15024C44: sb          $s0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r16;
    // 0x15024C48: lw          $v0, -0x4010($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4010);
    // 0x15024C4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15024C50: sb          $t8, -0x400C($at)
    MEM_B(-0X400C, ctx->r1) = ctx->r24;
    // 0x15024C54: lw          $t7, 0x5F0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X5F0);
    // 0x15024C58: ori         $t5, $t7, 0x4
    ctx->r13 = ctx->r15 | 0X4;
    // 0x15024C5C: b           L_150265B0
    // 0x15024C60: sw          $t5, 0x5F0($v0)
    MEM_W(0X5F0, ctx->r2) = ctx->r13;
        goto L_150265B0;
    // 0x15024C60: sw          $t5, 0x5F0($v0)
    MEM_W(0X5F0, ctx->r2) = ctx->r13;
L_15024C64:
    // 0x15024C64: bne         $a0, $a1, L_15024C98
    if (ctx->r4 != ctx->r5) {
        // 0x15024C68: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_15024C98;
    }
    // 0x15024C68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15024C6C: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15024C70: bnel        $s1, $zero, L_15024C84
    if (ctx->r17 != 0) {
        // 0x15024C74: lh          $t9, 0x2($s2)
        ctx->r25 = MEM_H(ctx->r18, 0X2);
            goto L_15024C84;
    }
    goto skip_18;
    // 0x15024C74: lh          $t9, 0x2($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X2);
    skip_18:
    // 0x15024C78: b           L_150265B4
    // 0x15024C7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024C7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15024C80: lh          $t9, 0x2($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X2);
L_15024C84:
    // 0x15024C84: lb          $t8, 0x4($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X4);
    // 0x15024C88: addiu       $t6, $t9, 0xA
    ctx->r14 = ADD32(ctx->r25, 0XA);
    // 0x15024C8C: addu        $t7, $s1, $t8
    ctx->r15 = ADD32(ctx->r17, ctx->r24);
    // 0x15024C90: b           L_150265B0
    // 0x15024C94: sb          $t6, 0x6C($t7)
    MEM_B(0X6C, ctx->r15) = ctx->r14;
        goto L_150265B0;
    // 0x15024C94: sb          $t6, 0x6C($t7)
    MEM_B(0X6C, ctx->r15) = ctx->r14;
L_15024C98:
    // 0x15024C98: bne         $a2, $a1, L_15024CD0
    if (ctx->r6 != ctx->r5) {
        // 0x15024C9C: addiu       $a3, $zero, 0x5
        ctx->r7 = ADD32(0, 0X5);
            goto L_15024CD0;
    }
    // 0x15024C9C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x15024CA0: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15024CA4: bnel        $s1, $zero, L_15024CB8
    if (ctx->r17 != 0) {
        // 0x15024CA8: lh          $v0, 0x2($s2)
        ctx->r2 = MEM_H(ctx->r18, 0X2);
            goto L_15024CB8;
    }
    goto skip_19;
    // 0x15024CA8: lh          $v0, 0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X2);
    skip_19:
    // 0x15024CAC: b           L_150265B4
    // 0x15024CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15024CB4: lh          $v0, 0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X2);
L_15024CB8:
    // 0x15024CB8: bnel        $v0, $zero, L_15024CC8
    if (ctx->r2 != 0) {
        // 0x15024CBC: sb          $v0, 0x1C9($s1)
        MEM_B(0X1C9, ctx->r17) = ctx->r2;
            goto L_15024CC8;
    }
    goto skip_20;
    // 0x15024CBC: sb          $v0, 0x1C9($s1)
    MEM_B(0X1C9, ctx->r17) = ctx->r2;
    skip_20:
    // 0x15024CC0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x15024CC4: sb          $v0, 0x1C9($s1)
    MEM_B(0X1C9, ctx->r17) = ctx->r2;
L_15024CC8:
    // 0x15024CC8: b           L_150265B4
    // 0x15024CCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024CCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024CD0:
    // 0x15024CD0: bne         $a3, $a1, L_150265A8
    if (ctx->r7 != ctx->r5) {
        // 0x15024CD4: nop
    
            goto L_150265A8;
    }
    // 0x15024CD4: nop

    // 0x15024CD8: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x15024CDC: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x15024CE0: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x15024CE4: bne         $s0, $at, L_15024D38
    if (ctx->r16 != ctx->r1) {
        // 0x15024CE8: nop
    
            goto L_15024D38;
    }
    // 0x15024CE8: nop

    // 0x15024CEC: lb          $t5, 0x4($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X4);
    // 0x15024CF0: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x15024CF4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15024CF8: bne         $t5, $zero, L_15024D30
    if (ctx->r13 != 0) {
        // 0x15024CFC: addiu       $t0, $zero, 0x44
        ctx->r8 = ADD32(0, 0X44);
            goto L_15024D30;
    }
    // 0x15024CFC: addiu       $t0, $zero, 0x44
    ctx->r8 = ADD32(0, 0X44);
    // 0x15024D00: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15024D04: lw          $t9, 0x168($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X168);
    // 0x15024D08: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15024D0C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15024D10: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x15024D14: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x15024D18: lw          $t6, 0x3958($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3958);
    // 0x15024D1C: mflo        $t5
    ctx->r13 = lo;
    // 0x15024D20: addu        $t9, $t6, $t5
    ctx->r25 = ADD32(ctx->r14, ctx->r13);
    // 0x15024D24: addiu       $t8, $t9, 0x28
    ctx->r24 = ADD32(ctx->r25, 0X28);
    // 0x15024D28: b           L_150265B0
    // 0x15024D2C: sw          $t8, -0x21E8($at)
    MEM_W(-0X21E8, ctx->r1) = ctx->r24;
        goto L_150265B0;
    // 0x15024D2C: sw          $t8, -0x21E8($at)
    MEM_W(-0X21E8, ctx->r1) = ctx->r24;
L_15024D30:
    // 0x15024D30: b           L_150265B0
    // 0x15024D34: sw          $zero, -0x21E8($at)
    MEM_W(-0X21E8, ctx->r1) = 0;
        goto L_150265B0;
    // 0x15024D34: sw          $zero, -0x21E8($at)
    MEM_W(-0X21E8, ctx->r1) = 0;
L_15024D38:
    // 0x15024D38: bne         $t3, $s0, L_15024D58
    if (ctx->r11 != ctx->r16) {
        // 0x15024D3C: lw          $t6, 0x168($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X168);
            goto L_15024D58;
    }
    // 0x15024D3C: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
    // 0x15024D40: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x15024D44: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15024D48: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15024D4C: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x15024D50: b           L_150265B0
    // 0x15024D54: sb          $t7, 0x3656($at)
    MEM_B(0X3656, ctx->r1) = ctx->r15;
        goto L_150265B0;
    // 0x15024D54: sb          $t7, 0x3656($at)
    MEM_B(0X3656, ctx->r1) = ctx->r15;
L_15024D58:
    // 0x15024D58: bne         $a0, $s0, L_15024D78
    if (ctx->r4 != ctx->r16) {
        // 0x15024D5C: lw          $t9, 0x168($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X168);
            goto L_15024D78;
    }
    // 0x15024D5C: lw          $t9, 0x168($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X168);
    // 0x15024D60: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x15024D64: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15024D68: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x15024D6C: sltiu       $t5, $v0, 0x1
    ctx->r13 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x15024D70: b           L_150265B0
    // 0x15024D74: sb          $t5, 0x3658($at)
    MEM_B(0X3658, ctx->r1) = ctx->r13;
        goto L_150265B0;
    // 0x15024D74: sb          $t5, 0x3658($at)
    MEM_B(0X3658, ctx->r1) = ctx->r13;
L_15024D78:
    // 0x15024D78: bne         $v0, $s0, L_15024D9C
    if (ctx->r2 != ctx->r16) {
        // 0x15024D7C: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_15024D9C;
    }
    // 0x15024D7C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x15024D80: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x15024D84: lw          $t7, 0x168($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X168);
    // 0x15024D88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15024D8C: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x15024D90: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15024D94: b           L_150265B0
    // 0x15024D98: sb          $t8, 0x3654($at)
    MEM_B(0X3654, ctx->r1) = ctx->r24;
        goto L_150265B0;
    // 0x15024D98: sb          $t8, 0x3654($at)
    MEM_B(0X3654, ctx->r1) = ctx->r24;
L_15024D9C:
    // 0x15024D9C: bne         $s0, $at, L_15024DBC
    if (ctx->r16 != ctx->r1) {
        // 0x15024DA0: lw          $t5, 0x168($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X168);
            goto L_15024DBC;
    }
    // 0x15024DA0: lw          $t5, 0x168($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X168);
    // 0x15024DA4: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x15024DA8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15024DAC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x15024DB0: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x15024DB4: b           L_150265B0
    // 0x15024DB8: sb          $t6, 0x365A($at)
    MEM_B(0X365A, ctx->r1) = ctx->r14;
        goto L_150265B0;
    // 0x15024DB8: sb          $t6, 0x365A($at)
    MEM_B(0X365A, ctx->r1) = ctx->r14;
L_15024DBC:
    // 0x15024DBC: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x15024DC0: bne         $s0, $at, L_15024DDC
    if (ctx->r16 != ctx->r1) {
        // 0x15024DC4: lw          $t8, 0x168($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X168);
            goto L_15024DDC;
    }
    // 0x15024DC4: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x15024DC8: lb          $t9, 0x4($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X4);
    // 0x15024DCC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15024DD0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15024DD4: b           L_150265B0
    // 0x15024DD8: sb          $t9, 0x365C($at)
    MEM_B(0X365C, ctx->r1) = ctx->r25;
        goto L_150265B0;
    // 0x15024DD8: sb          $t9, 0x365C($at)
    MEM_B(0X365C, ctx->r1) = ctx->r25;
L_15024DDC:
    // 0x15024DDC: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x15024DE0: bne         $s0, $at, L_15024E00
    if (ctx->r16 != ctx->r1) {
        // 0x15024DE4: lw          $t6, 0x168($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X168);
            goto L_15024E00;
    }
    // 0x15024DE4: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
    // 0x15024DE8: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x15024DEC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15024DF0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15024DF4: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x15024DF8: b           L_150265B0
    // 0x15024DFC: sb          $t7, 0x365E($at)
    MEM_B(0X365E, ctx->r1) = ctx->r15;
        goto L_150265B0;
    // 0x15024DFC: sb          $t7, 0x365E($at)
    MEM_B(0X365E, ctx->r1) = ctx->r15;
L_15024E00:
    // 0x15024E00: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x15024E04: bne         $s0, $at, L_15024E4C
    if (ctx->r16 != ctx->r1) {
        // 0x15024E08: lw          $s1, 0x16C($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X16C);
            goto L_15024E4C;
    }
    // 0x15024E08: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15024E0C: bnel        $s1, $zero, L_15024E20
    if (ctx->r17 != 0) {
        // 0x15024E10: lb          $t5, 0x4($s2)
        ctx->r13 = MEM_B(ctx->r18, 0X4);
            goto L_15024E20;
    }
    goto skip_21;
    // 0x15024E10: lb          $t5, 0x4($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X4);
    skip_21:
    // 0x15024E14: b           L_150265B4
    // 0x15024E18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024E18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15024E1C: lb          $t5, 0x4($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X4);
L_15024E20:
    // 0x15024E20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15024E24: bne         $t5, $zero, L_15024E3C
    if (ctx->r13 != 0) {
        // 0x15024E28: nop
    
            goto L_15024E3C;
    }
    // 0x15024E28: nop

    // 0x15024E2C: jal         0x15053430
    // 0x15024E30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15053430(rdram, ctx);
        goto after_13;
    // 0x15024E30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x15024E34: b           L_150265B4
    // 0x15024E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024E3C:
    // 0x15024E3C: jal         0x15060F28
    // 0x15024E40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_14;
    // 0x15024E40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x15024E44: b           L_150265B4
    // 0x15024E48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024E48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024E4C:
    // 0x15024E4C: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x15024E50: bne         $s0, $at, L_15024F24
    if (ctx->r16 != ctx->r1) {
        // 0x15024E54: addiu       $t0, $zero, 0x44
        ctx->r8 = ADD32(0, 0X44);
            goto L_15024F24;
    }
    // 0x15024E54: addiu       $t0, $zero, 0x44
    ctx->r8 = ADD32(0, 0X44);
    // 0x15024E58: addiu       $v0, $sp, 0x11C
    ctx->r2 = ADD32(ctx->r29, 0X11C);
    // 0x15024E5C: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15024E60: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x15024E64: addiu       $t9, $t9, 0x4124
    ctx->r25 = ADD32(ctx->r25, 0X4124);
    // 0x15024E68: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x15024E6C: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x15024E70: lhu         $at, 0x4($t9)
    ctx->r1 = MEM_HU(ctx->r25, 0X4);
    // 0x15024E74: bne         $s1, $zero, L_15024E84
    if (ctx->r17 != 0) {
        // 0x15024E78: sh          $at, 0x4($v0)
        MEM_H(0X4, ctx->r2) = ctx->r1;
            goto L_15024E84;
    }
    // 0x15024E78: sh          $at, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r1;
    // 0x15024E7C: b           L_150265B4
    // 0x15024E80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024E80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024E84:
    // 0x15024E84: lb          $t6, 0x4($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X4);
    // 0x15024E88: bnel        $t6, $zero, L_15024F18
    if (ctx->r14 != 0) {
        // 0x15024E8C: sb          $zero, 0xA4($s1)
        MEM_B(0XA4, ctx->r17) = 0;
            goto L_15024F18;
    }
    goto skip_22;
    // 0x15024E8C: sb          $zero, 0xA4($s1)
    MEM_B(0XA4, ctx->r17) = 0;
    skip_22:
    // 0x15024E90: lb          $t5, 0x5($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X5);
    // 0x15024E94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15024E98: addiu       $t0, $zero, 0x44
    ctx->r8 = ADD32(0, 0X44);
    // 0x15024E9C: multu       $t5, $t1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15024EA0: mflo        $t8
    ctx->r24 = lo;
    // 0x15024EA4: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x15024EA8: lbu         $t7, 0x0($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X0);
    // 0x15024EAC: sb          $t7, 0xA5($s1)
    MEM_B(0XA5, ctx->r17) = ctx->r15;
    // 0x15024EB0: lb          $t6, 0x5($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X5);
    // 0x15024EB4: multu       $t6, $t1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15024EB8: mflo        $t5
    ctx->r13 = lo;
    // 0x15024EBC: addu        $t8, $v0, $t5
    ctx->r24 = ADD32(ctx->r2, ctx->r13);
    // 0x15024EC0: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x15024EC4: sb          $t9, 0xA6($s1)
    MEM_B(0XA6, ctx->r17) = ctx->r25;
    // 0x15024EC8: lb          $t7, 0x5($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X5);
    // 0x15024ECC: multu       $t7, $t1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15024ED0: mflo        $t6
    ctx->r14 = lo;
    // 0x15024ED4: addu        $t5, $v0, $t6
    ctx->r13 = ADD32(ctx->r2, ctx->r14);
    // 0x15024ED8: lbu         $t8, 0x2($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0X2);
    // 0x15024EDC: sb          $a2, 0xA4($s1)
    MEM_B(0XA4, ctx->r17) = ctx->r6;
    // 0x15024EE0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15024EE4: sb          $t8, 0xA7($s1)
    MEM_B(0XA7, ctx->r17) = ctx->r24;
    // 0x15024EE8: lw          $t5, 0x15C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X15C);
    // 0x15024EEC: lw          $t9, 0x168($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X168);
    // 0x15024EF0: multu       $t5, $t0
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15024EF4: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x15024EF8: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x15024EFC: lw          $t6, 0x3958($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3958);
    // 0x15024F00: mflo        $t8
    ctx->r24 = lo;
    // 0x15024F04: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x15024F08: addiu       $t7, $t9, 0x30
    ctx->r15 = ADD32(ctx->r25, 0X30);
    // 0x15024F0C: b           L_150265B0
    // 0x15024F10: sw          $t7, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r15;
        goto L_150265B0;
    // 0x15024F10: sw          $t7, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r15;
    // 0x15024F14: sb          $zero, 0xA4($s1)
    MEM_B(0XA4, ctx->r17) = 0;
L_15024F18:
    // 0x15024F18: sw          $zero, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = 0;
    // 0x15024F1C: b           L_150265B4
    // 0x15024F20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024F20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024F24:
    // 0x15024F24: bne         $t0, $s0, L_15024F60
    if (ctx->r8 != ctx->r16) {
        // 0x15024F28: addiu       $at, $zero, 0x17
        ctx->r1 = ADD32(0, 0X17);
            goto L_15024F60;
    }
    // 0x15024F28: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x15024F2C: lb          $t5, 0x5($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X5);
    // 0x15024F30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15024F34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15024F38: beq         $t5, $zero, L_15024F4C
    if (ctx->r13 == 0) {
        // 0x15024F3C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_15024F4C;
    }
    // 0x15024F3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15024F40: lh          $a2, 0x6($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X6);
    // 0x15024F44: b           L_15024F4C
    // 0x15024F48: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_15024F4C;
    // 0x15024F48: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_15024F4C:
    // 0x15024F4C: lb          $a1, 0x4($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X4);
    // 0x15024F50: jal         0x1501C730
    // 0x15024F54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1501C730(rdram, ctx);
        goto after_15;
    // 0x15024F54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x15024F58: b           L_150265B4
    // 0x15024F5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024F5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15024F60:
    // 0x15024F60: bne         $s0, $at, L_15024FB0
    if (ctx->r16 != ctx->r1) {
        // 0x15024F64: lw          $s1, 0x16C($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X16C);
            goto L_15024FB0;
    }
    // 0x15024F64: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15024F68: bnel        $s1, $zero, L_15024F7C
    if (ctx->r17 != 0) {
        // 0x15024F6C: lb          $v0, 0x4($s2)
        ctx->r2 = MEM_B(ctx->r18, 0X4);
            goto L_15024F7C;
    }
    goto skip_23;
    // 0x15024F6C: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    skip_23:
    // 0x15024F70: b           L_150265B4
    // 0x15024F74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024F74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15024F78: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
L_15024F7C:
    // 0x15024F7C: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x15024F80: andi        $v1, $t6, 0xFF
    ctx->r3 = ctx->r14 & 0XFF;
    // 0x15024F84: beq         $v1, $zero, L_15024F98
    if (ctx->r3 == 0) {
        // 0x15024F88: sb          $t6, 0x1FF($s1)
        MEM_B(0X1FF, ctx->r17) = ctx->r14;
            goto L_15024F98;
    }
    // 0x15024F88: sb          $t6, 0x1FF($s1)
    MEM_B(0X1FF, ctx->r17) = ctx->r14;
    // 0x15024F8C: lb          $t8, 0x5($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X5);
    // 0x15024F90: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x15024F94: sb          $t9, 0x1FF($s1)
    MEM_B(0X1FF, ctx->r17) = ctx->r25;
L_15024F98:
    // 0x15024F98: lb          $t7, 0x4($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X4);
    // 0x15024F9C: bnel        $t7, $zero, L_150265B4
    if (ctx->r15 != 0) {
        // 0x15024FA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_24;
    // 0x15024FA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_24:
    // 0x15024FA4: lh          $t5, 0x6($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X6);
    // 0x15024FA8: b           L_150265B0
    // 0x15024FAC: sb          $t5, 0x201($s1)
    MEM_B(0X201, ctx->r17) = ctx->r13;
        goto L_150265B0;
    // 0x15024FAC: sb          $t5, 0x201($s1)
    MEM_B(0X201, ctx->r17) = ctx->r13;
L_15024FB0:
    // 0x15024FB0: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x15024FB4: bne         $s0, $at, L_15025004
    if (ctx->r16 != ctx->r1) {
        // 0x15024FB8: lw          $s1, 0x16C($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X16C);
            goto L_15025004;
    }
    // 0x15024FB8: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15024FBC: bnel        $s1, $zero, L_15024FD0
    if (ctx->r17 != 0) {
        // 0x15024FC0: lb          $v0, 0x4($s2)
        ctx->r2 = MEM_B(ctx->r18, 0X4);
            goto L_15024FD0;
    }
    goto skip_25;
    // 0x15024FC0: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    skip_25:
    // 0x15024FC4: b           L_150265B4
    // 0x15024FC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15024FC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15024FCC: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
L_15024FD0:
    // 0x15024FD0: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x15024FD4: andi        $v1, $t6, 0xFF
    ctx->r3 = ctx->r14 & 0XFF;
    // 0x15024FD8: beq         $v1, $zero, L_15024FEC
    if (ctx->r3 == 0) {
        // 0x15024FDC: sb          $t6, 0x206($s1)
        MEM_B(0X206, ctx->r17) = ctx->r14;
            goto L_15024FEC;
    }
    // 0x15024FDC: sb          $t6, 0x206($s1)
    MEM_B(0X206, ctx->r17) = ctx->r14;
    // 0x15024FE0: lb          $t8, 0x5($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X5);
    // 0x15024FE4: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x15024FE8: sb          $t9, 0x206($s1)
    MEM_B(0X206, ctx->r17) = ctx->r25;
L_15024FEC:
    // 0x15024FEC: lb          $t7, 0x4($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X4);
    // 0x15024FF0: bnel        $t7, $zero, L_150265B4
    if (ctx->r15 != 0) {
        // 0x15024FF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_26;
    // 0x15024FF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_26:
    // 0x15024FF8: lh          $t5, 0x6($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X6);
    // 0x15024FFC: b           L_150265B0
    // 0x15025000: sb          $t5, 0x208($s1)
    MEM_B(0X208, ctx->r17) = ctx->r13;
        goto L_150265B0;
    // 0x15025000: sb          $t5, 0x208($s1)
    MEM_B(0X208, ctx->r17) = ctx->r13;
L_15025004:
    // 0x15025004: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x15025008: beq         $s0, $at, L_150265B0
    if (ctx->r16 == ctx->r1) {
        // 0x1502500C: addiu       $v1, $zero, 0x1D
        ctx->r3 = ADD32(0, 0X1D);
            goto L_150265B0;
    }
    // 0x1502500C: addiu       $v1, $zero, 0x1D
    ctx->r3 = ADD32(0, 0X1D);
    // 0x15025010: bne         $v1, $s0, L_15025070
    if (ctx->r3 != ctx->r16) {
        // 0x15025014: addiu       $s1, $zero, 0x1E
        ctx->r17 = ADD32(0, 0X1E);
            goto L_15025070;
    }
    // 0x15025014: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
    // 0x15025018: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
    // 0x1502501C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15025020: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x15025024: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x15025028: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1502502C: lw          $t9, 0x35F0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X35F0);
    // 0x15025030: sll         $t5, $t7, 3
    ctx->r13 = S32(ctx->r15 << 3);
    // 0x15025034: lw          $v0, 0x170($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X170);
    // 0x15025038: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x1502503C: lhu         $t8, 0x0($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X0);
    // 0x15025040: bnel        $t1, $t8, L_150265B4
    if (ctx->r9 != ctx->r24) {
        // 0x15025044: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_27;
    // 0x15025044: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_27:
    // 0x15025048: beql        $v0, $zero, L_150265B4
    if (ctx->r2 == 0) {
        // 0x1502504C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_28;
    // 0x1502504C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_28:
    // 0x15025050: lb          $t7, 0x4($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X4);
    // 0x15025054: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15025058: bne         $t7, $zero, L_15025068
    if (ctx->r15 != 0) {
        // 0x1502505C: nop
    
            goto L_15025068;
    }
    // 0x1502505C: nop

    // 0x15025060: b           L_150265B0
    // 0x15025064: sb          $a2, 0x6E($v0)
    MEM_B(0X6E, ctx->r2) = ctx->r6;
        goto L_150265B0;
    // 0x15025064: sb          $a2, 0x6E($v0)
    MEM_B(0X6E, ctx->r2) = ctx->r6;
L_15025068:
    // 0x15025068: b           L_150265B0
    // 0x1502506C: sb          $zero, 0x6E($v0)
    MEM_B(0X6E, ctx->r2) = 0;
        goto L_150265B0;
    // 0x1502506C: sb          $zero, 0x6E($v0)
    MEM_B(0X6E, ctx->r2) = 0;
L_15025070:
    // 0x15025070: bne         $s1, $s0, L_15025098
    if (ctx->r17 != ctx->r16) {
        // 0x15025074: lui         $at, 0x800C
        ctx->r1 = S32(0X800C << 16);
            goto L_15025098;
    }
    // 0x15025074: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15025078: lb          $t9, 0x4($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X4);
    // 0x1502507C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15025080: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x15025084: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x15025088: sb          $t5, 0x35C2($at)
    MEM_B(0X35C2, ctx->r1) = ctx->r13;
    // 0x1502508C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15025090: b           L_150265B0
    // 0x15025094: sb          $t6, 0x35C3($at)
    MEM_B(0X35C3, ctx->r1) = ctx->r14;
        goto L_150265B0;
    // 0x15025094: sb          $t6, 0x35C3($at)
    MEM_B(0X35C3, ctx->r1) = ctx->r14;
L_15025098:
    // 0x15025098: bne         $t1, $s0, L_150250F4
    if (ctx->r9 != ctx->r16) {
        // 0x1502509C: addiu       $at, $zero, 0x6C
        ctx->r1 = ADD32(0, 0X6C);
            goto L_150250F4;
    }
    // 0x1502509C: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x150250A0: jal         0x151149AC
    // 0x150250A4: lbu         $a0, 0x7($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X7);
    func_151149AC(rdram, ctx);
        goto after_16;
    // 0x150250A4: lbu         $a0, 0x7($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X7);
    after_16:
    // 0x150250A8: bnel        $v0, $zero, L_150250BC
    if (ctx->r2 != 0) {
        // 0x150250AC: lbu         $t8, 0x73($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X73);
            goto L_150250BC;
    }
    goto skip_29;
    // 0x150250AC: lbu         $t8, 0x73($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X73);
    skip_29:
    // 0x150250B0: b           L_150265B4
    // 0x150250B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150250B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150250B8: lbu         $t8, 0x73($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X73);
L_150250BC:
    // 0x150250BC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x150250C0: and         $t7, $t8, $at
    ctx->r15 = ctx->r24 & ctx->r1;
    // 0x150250C4: sb          $t7, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r15;
    // 0x150250C8: lb          $t9, 0x5($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X5);
    // 0x150250CC: ori         $t6, $t7, 0x2
    ctx->r14 = ctx->r15 | 0X2;
    // 0x150250D0: bnel        $t9, $zero, L_150250E4
    if (ctx->r25 != 0) {
        // 0x150250D4: lbu         $t8, 0x73($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X73);
            goto L_150250E4;
    }
    goto skip_30;
    // 0x150250D4: lbu         $t8, 0x73($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X73);
    skip_30:
    // 0x150250D8: b           L_150265B0
    // 0x150250DC: sb          $t6, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r14;
        goto L_150265B0;
    // 0x150250DC: sb          $t6, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r14;
    // 0x150250E0: lbu         $t8, 0x73($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X73);
L_150250E4:
    // 0x150250E4: ori         $t7, $t8, 0x1
    ctx->r15 = ctx->r24 | 0X1;
    // 0x150250E8: sb          $t7, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r15;
    // 0x150250EC: b           L_150265B4
    // 0x150250F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150250F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150250F4:
    // 0x150250F4: bnel        $s0, $at, L_15025500
    if (ctx->r16 != ctx->r1) {
        // 0x150250F8: addiu       $at, $zero, 0x6E
        ctx->r1 = ADD32(0, 0X6E);
            goto L_15025500;
    }
    goto skip_31;
    // 0x150250F8: addiu       $at, $zero, 0x6E
    ctx->r1 = ADD32(0, 0X6E);
    skip_31:
    // 0x150250FC: lbu         $t9, 0x4($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X4);
    // 0x15025100: sltiu       $at, $t9, 0x18
    ctx->r1 = ctx->r25 < 0X18 ? 1 : 0;
    // 0x15025104: beq         $at, $zero, L_150265B0
    if (ctx->r1 == 0) {
        // 0x15025108: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_150265B0;
    }
    // 0x15025108: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1502510C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15025110: addu        $at, $at, $t9
    gpr jr_addend_15025118 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x15025114: lw          $t9, 0x6B80($at)
    ctx->r25 = ADD32(ctx->r1, 0X6B80);
    // 0x15025118: jr          $t9
    // 0x1502511C: nop

    switch (jr_addend_15025118 >> 2) {
        case 0: goto L_15025120; break;
        case 1: goto L_15025190; break;
        case 2: goto L_15025218; break;
        case 3: goto L_15025244; break;
        case 4: goto L_15025290; break;
        case 5: goto L_150252A0; break;
        case 6: goto L_150252B8; break;
        case 7: goto L_150252C8; break;
        case 8: goto L_150252F4; break;
        case 9: goto L_15025304; break;
        case 10: goto L_15025390; break;
        case 11: goto L_150253B8; break;
        case 12: goto L_150253CC; break;
        case 13: goto L_150253DC; break;
        case 14: goto L_150253EC; break;
        case 15: goto L_150253FC; break;
        case 16: goto L_15025410; break;
        case 17: goto L_15025424; break;
        case 18: goto L_15025438; break;
        case 19: goto L_15025448; break;
        case 20: goto L_1502545C; break;
        case 21: goto L_15025484; break;
        case 22: goto L_150254B0; break;
        case 23: goto L_150254D0; break;
        default: switch_error(__func__, 0x15025118, 0x80096B80);
    }
    // 0x1502511C: nop

L_15025120:
    // 0x15025120: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x15025124: lw          $t5, 0x168($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X168);
    // 0x15025128: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1502512C: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15025130: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x15025134: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x15025138: lw          $t8, 0x3958($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3958);
    // 0x1502513C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15025140: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x15025144: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15025148: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    // 0x1502514C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15025150: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15025154: mflo        $t9
    ctx->r25 = lo;
    // 0x15025158: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x1502515C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15025160: swc1        $f4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f4.u32l;
    // 0x15025164: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15025168: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
    // 0x1502516C: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15025170: swc1        $f8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f8.u32l;
    // 0x15025174: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    // 0x15025178: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1502517C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15025180: jal         0x151BE850
    // 0x15025184: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_151BE850(rdram, ctx);
        goto after_17;
    // 0x15025184: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_17:
    // 0x15025188: b           L_150265B4
    // 0x1502518C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x1502518C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025190:
    // 0x15025190: lw          $t6, 0x15C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X15C);
    // 0x15025194: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x15025198: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1502519C: multu       $t6, $t0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150251A0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x150251A4: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x150251A8: lw          $t5, 0x3958($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3958);
    // 0x150251AC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150251B0: lwc1        $f4, 0x6BE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6BE0);
    // 0x150251B4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150251B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150251BC: lw          $t9, 0x178($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X178);
    // 0x150251C0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150251C4: mflo        $t7
    ctx->r15 = lo;
    // 0x150251C8: addu        $v1, $t5, $t7
    ctx->r3 = ADD32(ctx->r13, ctx->r15);
    // 0x150251CC: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150251D0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150251D4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x150251D8: swc1        $f10, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f10.u32l;
    // 0x150251DC: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x150251E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150251E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150251E8: swc1        $f16, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f16.u32l;
    // 0x150251EC: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150251F0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x150251F4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150251F8: addiu       $a3, $sp, 0xF8
    ctx->r7 = ADD32(ctx->r29, 0XF8);
    // 0x150251FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15025200: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15025204: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x15025208: jal         0x151A9390
    // 0x1502520C: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    func_151A9390(rdram, ctx);
        goto after_18;
    // 0x1502520C: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    after_18:
    // 0x15025210: b           L_150265B4
    // 0x15025214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025218:
    // 0x15025218: lb          $t5, 0x5($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X5);
    // 0x1502521C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15025220: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x15025224: beq         $t5, $zero, L_15025234
    if (ctx->r13 == 0) {
        // 0x15025228: nop
    
            goto L_15025234;
    }
    // 0x15025228: nop

    // 0x1502522C: b           L_15025234
    // 0x15025230: addiu       $v0, $zero, 0x2B
    ctx->r2 = ADD32(0, 0X2B);
        goto L_15025234;
    // 0x15025230: addiu       $v0, $zero, 0x2B
    ctx->r2 = ADD32(0, 0X2B);
L_15025234:
    // 0x15025234: jal         0x151494E0
    // 0x15025238: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_151494E0(rdram, ctx);
        goto after_19;
    // 0x15025238: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_19:
    // 0x1502523C: b           L_150265B4
    // 0x15025240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025244:
    // 0x15025244: lb          $t7, 0x5($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X5);
    // 0x15025248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1502524C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15025250: beq         $t7, $zero, L_15025274
    if (ctx->r15 == 0) {
        // 0x15025254: nop
    
            goto L_15025274;
    }
    // 0x15025254: nop

    // 0x15025258: jal         0x1515F170
    // 0x1502525C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_1515F170(rdram, ctx);
        goto after_20;
    // 0x1502525C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_20:
    // 0x15025260: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x15025264: jal         0x1515F170
    // 0x15025268: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1515F170(rdram, ctx);
        goto after_21;
    // 0x15025268: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x1502526C: b           L_150265B4
    // 0x15025270: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025270: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025274:
    // 0x15025274: jal         0x1515F170
    // 0x15025278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1515F170(rdram, ctx);
        goto after_22;
    // 0x15025278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
    // 0x1502527C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x15025280: jal         0x1515F170
    // 0x15025284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1515F170(rdram, ctx);
        goto after_23;
    // 0x15025284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_23:
    // 0x15025288: b           L_150265B4
    // 0x1502528C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x1502528C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025290:
    // 0x15025290: jal         0x151645C4
    // 0x15025294: lbu         $a0, 0x5($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X5);
    func_151645C4(rdram, ctx);
        goto after_24;
    // 0x15025294: lbu         $a0, 0x5($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X5);
    after_24:
    // 0x15025298: b           L_150265B4
    // 0x1502529C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x1502529C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150252A0:
    // 0x150252A0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x150252A4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x150252A8: jal         0x151616D0
    // 0x150252AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_151616D0(rdram, ctx);
        goto after_25;
    // 0x150252AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_25:
    // 0x150252B0: b           L_150265B4
    // 0x150252B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150252B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150252B8:
    // 0x150252B8: jal         0x151CD35C
    // 0x150252BC: lb          $a0, 0x5($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X5);
    func_151CD35C(rdram, ctx);
        goto after_26;
    // 0x150252BC: lb          $a0, 0x5($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X5);
    after_26:
    // 0x150252C0: b           L_150265B4
    // 0x150252C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150252C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150252C8:
    // 0x150252C8: lb          $t8, 0x5($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X5);
    // 0x150252CC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x150252D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150252D4: beq         $t8, $zero, L_150252E4
    if (ctx->r24 == 0) {
        // 0x150252D8: nop
    
            goto L_150252E4;
    }
    // 0x150252D8: nop

    // 0x150252DC: b           L_150252E4
    // 0x150252E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150252E4;
    // 0x150252E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150252E4:
    // 0x150252E4: jal         0x1515F170
    // 0x150252E8: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_1515F170(rdram, ctx);
        goto after_27;
    // 0x150252E8: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_27:
    // 0x150252EC: b           L_150265B4
    // 0x150252F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150252F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150252F4:
    // 0x150252F4: jal         0x150B648C
    // 0x150252F8: lbu         $a0, 0x5($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X5);
    func_150B648C(rdram, ctx);
        goto after_28;
    // 0x150252F8: lbu         $a0, 0x5($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X5);
    after_28:
    // 0x150252FC: b           L_150265B4
    // 0x15025300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025304:
    // 0x15025304: addiu       $v1, $sp, 0xE4
    ctx->r3 = ADD32(ctx->r29, 0XE4);
    // 0x15025308: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1502530C: addiu       $t9, $t9, 0x6A20
    ctx->r25 = ADD32(ctx->r25, 0X6A20);
    // 0x15025310: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x15025314: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15025318: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x1502531C: lw          $t7, 0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X4);
    // 0x15025320: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x15025324: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x15025328: sw          $at, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r1;
    // 0x1502532C: lw          $t7, 0xC($t9)
    ctx->r15 = MEM_W(ctx->r25, 0XC);
    // 0x15025330: sw          $t7, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r15;
L_15025334:
    // 0x15025334: addiu       $v1, $sp, 0xE4
    ctx->r3 = ADD32(ctx->r29, 0XE4);
    // 0x15025338: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x1502533C: addu        $t5, $v1, $t8
    ctx->r13 = ADD32(ctx->r3, ctx->r24);
    // 0x15025340: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15025344: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15025348: lw          $t7, 0x3098($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3098);
    // 0x1502534C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x15025350: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x15025354: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15025358: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x1502535C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15025360: sb          $v0, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r2;
    // 0x15025364: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x15025368: jal         0x151C970C
    // 0x1502536C: addu        $a1, $t9, $t7
    ctx->r5 = ADD32(ctx->r25, ctx->r15);
    func_151C970C(rdram, ctx);
        goto after_29;
    // 0x1502536C: addu        $a1, $t9, $t7
    ctx->r5 = ADD32(ctx->r25, ctx->r15);
    after_29:
    // 0x15025370: lbu         $v0, 0xF7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XF7);
    // 0x15025374: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15025378: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x1502537C: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x15025380: bne         $at, $zero, L_15025334
    if (ctx->r1 != 0) {
        // 0x15025384: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_15025334;
    }
    // 0x15025384: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x15025388: b           L_150265B4
    // 0x1502538C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x1502538C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025390:
    // 0x15025390: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15025394: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15025398: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1502539C: lw          $a0, -0x4010($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4010);
    // 0x150253A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150253A4: lb          $a2, 0x15F($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X15F);
    // 0x150253A8: jal         0x151C9DE8
    // 0x150253AC: lbu         $a3, 0x17B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X17B);
    func_151C9DE8(rdram, ctx);
        goto after_30;
    // 0x150253AC: lbu         $a3, 0x17B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X17B);
    after_30:
    // 0x150253B0: b           L_150265B4
    // 0x150253B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150253B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150253B8:
    // 0x150253B8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150253BC: jal         0x151C9ED4
    // 0x150253C0: lw          $a0, -0x4010($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4010);
    func_151C9ED4(rdram, ctx);
        goto after_31;
    // 0x150253C0: lw          $a0, -0x4010($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4010);
    after_31:
    // 0x150253C4: b           L_150265B4
    // 0x150253C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150253C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150253CC:
    // 0x150253CC: jal         0x150E0300
    // 0x150253D0: nop

    func_150E0300(rdram, ctx);
        goto after_32;
    // 0x150253D0: nop

    after_32:
    // 0x150253D4: b           L_150265B4
    // 0x150253D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150253D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150253DC:
    // 0x150253DC: jal         0x150FAD28
    // 0x150253E0: nop

    func_150FAD28(rdram, ctx);
        goto after_33;
    // 0x150253E0: nop

    after_33:
    // 0x150253E4: b           L_150265B4
    // 0x150253E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150253E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150253EC:
    // 0x150253EC: jal         0x150F5340
    // 0x150253F0: nop

    func_150F5340(rdram, ctx);
        goto after_34;
    // 0x150253F0: nop

    after_34:
    // 0x150253F4: b           L_150265B4
    // 0x150253F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150253F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150253FC:
    // 0x150253FC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x15025400: jal         0x150FAA40
    // 0x15025404: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_150FAA40(rdram, ctx);
        goto after_35;
    // 0x15025404: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_35:
    // 0x15025408: b           L_150265B4
    // 0x1502540C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x1502540C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025410:
    // 0x15025410: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15025414: jal         0x15169040
    // 0x15025418: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    func_15169040(rdram, ctx);
        goto after_36;
    // 0x15025418: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    after_36:
    // 0x1502541C: b           L_150265B4
    // 0x15025420: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025420: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025424:
    // 0x15025424: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15025428: jal         0x15169040
    // 0x1502542C: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    func_15169040(rdram, ctx);
        goto after_37;
    // 0x1502542C: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    after_37:
    // 0x15025430: b           L_150265B4
    // 0x15025434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025438:
    // 0x15025438: jal         0x151CD394
    // 0x1502543C: lb          $a0, 0x5($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X5);
    func_151CD394(rdram, ctx);
        goto after_38;
    // 0x1502543C: lb          $a0, 0x5($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X5);
    after_38:
    // 0x15025440: b           L_150265B4
    // 0x15025444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025448:
    // 0x15025448: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x1502544C: jal         0x1515F170
    // 0x15025450: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1515F170(rdram, ctx);
        goto after_39;
    // 0x15025450: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_39:
    // 0x15025454: b           L_150265B4
    // 0x15025458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1502545C:
    // 0x1502545C: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15025460: beql        $s1, $zero, L_150265B4
    if (ctx->r17 == 0) {
        // 0x15025464: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_32;
    // 0x15025464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_32:
    // 0x15025468: jal         0x15190518
    // 0x1502546C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15190518(rdram, ctx);
        goto after_40;
    // 0x1502546C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_40:
    // 0x15025470: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15025474: jal         0x1518F45C
    // 0x15025478: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    func_1518F45C(rdram, ctx);
        goto after_41;
    // 0x15025478: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    after_41:
    // 0x1502547C: b           L_150265B4
    // 0x15025480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025484:
    // 0x15025484: lb          $t6, 0x5($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X5);
    // 0x15025488: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1502548C: addiu       $v0, $zero, 0x56
    ctx->r2 = ADD32(0, 0X56);
    // 0x15025490: beq         $t6, $zero, L_150254A0
    if (ctx->r14 == 0) {
        // 0x15025494: nop
    
            goto L_150254A0;
    }
    // 0x15025494: nop

    // 0x15025498: b           L_150254A0
    // 0x1502549C: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
        goto L_150254A0;
    // 0x1502549C: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
L_150254A0:
    // 0x150254A0: jal         0x151494E0
    // 0x150254A4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_151494E0(rdram, ctx);
        goto after_42;
    // 0x150254A4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_42:
    // 0x150254A8: b           L_150265B4
    // 0x150254AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150254AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150254B0:
    // 0x150254B0: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x150254B4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150254B8: beq         $s1, $zero, L_150265B0
    if (ctx->r17 == 0) {
        // 0x150254BC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_150265B0;
    }
    // 0x150254BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150254C0: jal         0x151937F4
    // 0x150254C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151937F4(rdram, ctx);
        goto after_43;
    // 0x150254C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_43:
    // 0x150254C8: b           L_150265B4
    // 0x150254CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150254CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150254D0:
    // 0x150254D0: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x150254D4: addiu       $a0, $sp, 0xDC
    ctx->r4 = ADD32(ctx->r29, 0XDC);
    // 0x150254D8: beql        $s1, $zero, L_150265B4
    if (ctx->r17 == 0) {
        // 0x150254DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_33;
    // 0x150254DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_33:
    // 0x150254E0: sw          $s1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r17;
    // 0x150254E4: lbu         $t9, 0x3B($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X3B);
    // 0x150254E8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x150254EC: jal         0x15191B8C
    // 0x150254F0: sb          $t9, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = ctx->r25;
    func_15191B8C(rdram, ctx);
        goto after_44;
    // 0x150254F0: sb          $t9, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = ctx->r25;
    after_44:
    // 0x150254F4: b           L_150265B4
    // 0x150254F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150254F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150254FC: addiu       $at, $zero, 0x6E
    ctx->r1 = ADD32(0, 0X6E);
L_15025500:
    // 0x15025500: bne         $s0, $at, L_15025574
    if (ctx->r16 != ctx->r1) {
        // 0x15025504: nop
    
            goto L_15025574;
    }
    // 0x15025504: nop

    // 0x15025508: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x1502550C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15025510: jal         0x1519003C
    // 0x15025514: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    func_1519003C(rdram, ctx);
        goto after_45;
    // 0x15025514: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    after_45:
    // 0x15025518: beq         $v0, $zero, L_150265B0
    if (ctx->r2 == 0) {
        // 0x1502551C: lw          $t7, 0xD4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XD4);
            goto L_150265B0;
    }
    // 0x1502551C: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x15025520: lh          $v1, 0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X6);
    // 0x15025524: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15025528: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1502552C: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x15025530: beq         $at, $zero, L_150265B0
    if (ctx->r1 == 0) {
        // 0x15025534: addu        $t8, $v1, $v0
        ctx->r24 = ADD32(ctx->r3, ctx->r2);
            goto L_150265B0;
    }
    // 0x15025534: addu        $t8, $v1, $v0
    ctx->r24 = ADD32(ctx->r3, ctx->r2);
    // 0x15025538: lbu         $a1, 0x0($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X0);
    // 0x1502553C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x15025540: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x15025544: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15025548: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1502554C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x15025550: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x15025554: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15025558: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1502555C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15025560: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15025564: jal         0x1518F51C
    // 0x15025568: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_1518F51C(rdram, ctx);
        goto after_46;
    // 0x15025568: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_46:
    // 0x1502556C: b           L_150265B4
    // 0x15025570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025574:
    // 0x15025574: bne         $a3, $s0, L_15025664
    if (ctx->r7 != ctx->r16) {
        // 0x15025578: addiu       $at, $zero, 0x36
        ctx->r1 = ADD32(0, 0X36);
            goto L_15025664;
    }
    // 0x15025578: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x1502557C: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x15025580: addiu       $t5, $t5, 0x412C
    ctx->r13 = ADD32(ctx->r13, 0X412C);
    // 0x15025584: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x15025588: lw          $t9, 0x4($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X4);
    // 0x1502558C: addiu       $t8, $sp, 0xB8
    ctx->r24 = ADD32(ctx->r29, 0XB8);
    // 0x15025590: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x15025594: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x15025598: lw          $t9, 0xC($t5)
    ctx->r25 = MEM_W(ctx->r13, 0XC);
    // 0x1502559C: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x150255A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150255A4: sw          $t9, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r25;
    // 0x150255A8: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x150255AC: lb          $t7, 0x4($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X4);
    // 0x150255B0: lw          $a2, 0x15C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X15C);
    // 0x150255B4: addiu       $a3, $sp, 0xCC
    ctx->r7 = ADD32(ctx->r29, 0XCC);
    // 0x150255B8: bne         $t7, $zero, L_150265B0
    if (ctx->r15 != 0) {
        // 0x150255BC: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_150265B0;
    }
    // 0x150255BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150255C0: lb          $v1, 0x5($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X5);
    // 0x150255C4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150255C8: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x150255CC: bne         $at, $zero, L_150255D8
    if (ctx->r1 != 0) {
        // 0x150255D0: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_150255D8;
    }
    // 0x150255D0: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x150255D4: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
L_150255D8:
    // 0x150255D8: lb          $a1, 0x0($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X0);
    // 0x150255DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150255E0: lh          $t8, 0x2($s2)
    ctx->r24 = MEM_H(ctx->r18, 0X2);
    // 0x150255E4: lw          $t9, 0x168($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X168);
    // 0x150255E8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x150255EC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x150255F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150255F4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150255F8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150255FC: jal         0x15023BB0
    // 0x15025600: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    func_15023BB0(rdram, ctx);
        goto after_47;
    // 0x15025600: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    after_47:
    // 0x15025604: lh          $t6, 0x6($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X6);
    // 0x15025608: lw          $t7, 0x164($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X164);
    // 0x1502560C: lw          $a0, 0x16C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X16C);
    // 0x15025610: beq         $t6, $zero, L_15025624
    if (ctx->r14 == 0) {
        // 0x15025614: subu        $v1, $v0, $t7
        ctx->r3 = SUB32(ctx->r2, ctx->r15);
            goto L_15025624;
    }
    // 0x15025614: subu        $v1, $v0, $t7
    ctx->r3 = SUB32(ctx->r2, ctx->r15);
    // 0x15025618: addiu       $v1, $zero, 0x3E7
    ctx->r3 = ADD32(0, 0X3E7);
    // 0x1502561C: b           L_15025628
    // 0x15025620: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_15025628;
    // 0x15025620: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_15025624:
    // 0x15025624: lbu         $v0, 0x17B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X17B);
L_15025628:
    // 0x15025628: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x1502562C: addu        $a1, $sp, $t8
    ctx->r5 = ADD32(ctx->r29, ctx->r24);
    // 0x15025630: lh          $a1, 0xBA($a1)
    ctx->r5 = MEM_H(ctx->r5, 0XBA);
    // 0x15025634: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x15025638: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1502563C: addiu       $t9, $t9, 0x6A30
    ctx->r25 = ADD32(ctx->r25, 0X6A30);
    // 0x15025640: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x15025644: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x15025648: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1502564C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15025650: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x15025654: jal         0x1518D1C0
    // 0x15025658: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1518D1C0(rdram, ctx);
        goto after_48;
    // 0x15025658: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_48:
    // 0x1502565C: b           L_150265B4
    // 0x15025660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025664:
    // 0x15025664: bnel        $s0, $at, L_150256C8
    if (ctx->r16 != ctx->r1) {
        // 0x15025668: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_150256C8;
    }
    goto skip_34;
    // 0x15025668: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    skip_34:
    // 0x1502566C: lb          $v1, 0x4($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X4);
    // 0x15025670: lw          $a0, 0x16C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X16C);
    // 0x15025674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15025678: bne         $v1, $zero, L_1502569C
    if (ctx->r3 != 0) {
        // 0x1502567C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_1502569C;
    }
    // 0x1502567C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15025680: lw          $t7, 0x178($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X178);
    // 0x15025684: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    // 0x15025688: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1502568C: jal         0x1519D030
    // 0x15025690: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_1519D030(rdram, ctx);
        goto after_49;
    // 0x15025690: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_49:
    // 0x15025694: b           L_150265B4
    // 0x15025698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1502569C:
    // 0x1502569C: bne         $a2, $v1, L_150265B0
    if (ctx->r6 != ctx->r3) {
        // 0x150256A0: lw          $s1, 0x16C($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X16C);
            goto L_150265B0;
    }
    // 0x150256A0: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x150256A4: sw          $s1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r17;
    // 0x150256A8: lbu         $t6, 0x3B($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X3B);
    // 0x150256AC: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x150256B0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x150256B4: jal         0x15147D64
    // 0x150256B8: sb          $t6, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r14;
    func_15147D64(rdram, ctx);
        goto after_50;
    // 0x150256B8: sb          $t6, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r14;
    after_50:
    // 0x150256BC: b           L_150265B4
    // 0x150256C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150256C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150256C4: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
L_150256C8:
    // 0x150256C8: bnel        $s0, $at, L_15025748
    if (ctx->r16 != ctx->r1) {
        // 0x150256CC: addiu       $at, $zero, 0x46
        ctx->r1 = ADD32(0, 0X46);
            goto L_15025748;
    }
    goto skip_35;
    // 0x150256CC: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    skip_35:
    // 0x150256D0: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x150256D4: bne         $s1, $zero, L_150256E4
    if (ctx->r17 != 0) {
        // 0x150256D8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_150256E4;
    }
    // 0x150256D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150256DC: b           L_150265B4
    // 0x150256E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150256E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150256E4:
    // 0x150256E4: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x150256E8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x150256EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150256F0: beq         $v0, $zero, L_15025718
    if (ctx->r2 == 0) {
        // 0x150256F4: nop
    
            goto L_15025718;
    }
    // 0x150256F4: nop

    // 0x150256F8: beq         $v0, $a2, L_15025720
    if (ctx->r2 == ctx->r6) {
        // 0x150256FC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15025720;
    }
    // 0x150256FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15025700: beq         $v0, $at, L_15025728
    if (ctx->r2 == ctx->r1) {
        // 0x15025704: nop
    
            goto L_15025728;
    }
    // 0x15025704: nop

    // 0x15025708: beql        $v0, $t1, L_15025734
    if (ctx->r2 == ctx->r9) {
        // 0x1502570C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_15025734;
    }
    goto skip_36;
    // 0x1502570C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    skip_36:
    // 0x15025710: b           L_15025734
    // 0x15025714: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_15025734;
    // 0x15025714: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_15025718:
    // 0x15025718: b           L_15025734
    // 0x1502571C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_15025734;
    // 0x1502571C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_15025720:
    // 0x15025720: b           L_15025734
    // 0x15025724: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_15025734;
    // 0x15025724: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_15025728:
    // 0x15025728: b           L_15025734
    // 0x1502572C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_15025734;
    // 0x1502572C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x15025730: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_15025734:
    // 0x15025734: jal         0x1514D3B0
    // 0x15025738: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_1514D3B0(rdram, ctx);
        goto after_51;
    // 0x15025738: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_51:
    // 0x1502573C: b           L_150265B4
    // 0x15025740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15025744: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
L_15025748:
    // 0x15025748: bnel        $s0, $at, L_15025780
    if (ctx->r16 != ctx->r1) {
        // 0x1502574C: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_15025780;
    }
    goto skip_37;
    // 0x1502574C: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    skip_37:
    // 0x15025750: lb          $t8, 0x4($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X4);
    // 0x15025754: beq         $t8, $zero, L_1502576C
    if (ctx->r24 == 0) {
        // 0x15025758: nop
    
            goto L_1502576C;
    }
    // 0x15025758: nop

    // 0x1502575C: jal         0x150C5C74
    // 0x15025760: lw          $a0, 0x16C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X16C);
    func_150C5C74(rdram, ctx);
        goto after_52;
    // 0x15025760: lw          $a0, 0x16C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X16C);
    after_52:
    // 0x15025764: b           L_150265B4
    // 0x15025768: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025768: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1502576C:
    // 0x1502576C: jal         0x150C5C9C
    // 0x15025770: lw          $a0, 0x16C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X16C);
    func_150C5C9C(rdram, ctx);
        goto after_53;
    // 0x15025770: lw          $a0, 0x16C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X16C);
    after_53:
    // 0x15025774: b           L_150265B4
    // 0x15025778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1502577C: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
L_15025780:
    // 0x15025780: bnel        $s0, $at, L_150257E0
    if (ctx->r16 != ctx->r1) {
        // 0x15025784: addiu       $at, $zero, 0x58
        ctx->r1 = ADD32(0, 0X58);
            goto L_150257E0;
    }
    goto skip_38;
    // 0x15025784: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
    skip_38:
    // 0x15025788: lb          $v1, 0x4($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X4);
    // 0x1502578C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x15025790: addiu       $a3, $a3, 0x3650
    ctx->r7 = ADD32(ctx->r7, 0X3650);
    // 0x15025794: beq         $v1, $zero, L_150257B4
    if (ctx->r3 == 0) {
        // 0x15025798: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_150257B4;
    }
    // 0x15025798: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1502579C: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x150257A0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150257A4: addiu       $v0, $v0, 0x364C
    ctx->r2 = ADD32(ctx->r2, 0X364C);
    // 0x150257A8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150257AC: b           L_150257C8
    // 0x150257B0: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
        goto L_150257C8;
    // 0x150257B0: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_150257B4:
    // 0x150257B4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150257B8: lwc1        $f16, -0x64E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X64E0);
    // 0x150257BC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150257C0: addiu       $v0, $v0, 0x364C
    ctx->r2 = ADD32(ctx->r2, 0X364C);
    // 0x150257C4: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
L_150257C8:
    // 0x150257C8: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x150257CC: jal         0x1510B458
    // 0x150257D0: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    func_1510B458(rdram, ctx);
        goto after_54;
    // 0x150257D0: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    after_54:
    // 0x150257D4: b           L_150265B4
    // 0x150257D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150257D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150257DC: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
L_150257E0:
    // 0x150257E0: bne         $s0, $at, L_15025848
    if (ctx->r16 != ctx->r1) {
        // 0x150257E4: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_15025848;
    }
    // 0x150257E4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x150257E8: lh          $v1, 0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X6);
    // 0x150257EC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150257F0: addiu       $v0, $v0, 0x364C
    ctx->r2 = ADD32(ctx->r2, 0X364C);
    // 0x150257F4: beq         $v1, $zero, L_15025820
    if (ctx->r3 == 0) {
        // 0x150257F8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15025820;
    }
    // 0x150257F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150257FC: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x15025800: addu        $t5, $t5, $v1
    ctx->r13 = ADD32(ctx->r13, ctx->r3);
    // 0x15025804: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x15025808: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x1502580C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x15025810: addiu       $a3, $a3, 0x3650
    ctx->r7 = ADD32(ctx->r7, 0X3650);
    // 0x15025814: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15025818: b           L_15025834
    // 0x1502581C: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
        goto L_15025834;
    // 0x1502581C: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
L_15025820:
    // 0x15025820: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15025824: lwc1        $f6, -0x64E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X64E4);
    // 0x15025828: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x1502582C: addiu       $a3, $a3, 0x3650
    ctx->r7 = ADD32(ctx->r7, 0X3650);
    // 0x15025830: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
L_15025834:
    // 0x15025834: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x15025838: jal         0x1510B458
    // 0x1502583C: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    func_1510B458(rdram, ctx);
        goto after_55;
    // 0x1502583C: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    after_55:
    // 0x15025840: b           L_150265B4
    // 0x15025844: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025844: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025848:
    // 0x15025848: bne         $v0, $s0, L_150258B0
    if (ctx->r2 != ctx->r16) {
        // 0x1502584C: addiu       $at, $zero, 0x3D
        ctx->r1 = ADD32(0, 0X3D);
            goto L_150258B0;
    }
    // 0x1502584C: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x15025850: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15025854: beql        $s1, $zero, L_150265B4
    if (ctx->r17 == 0) {
        // 0x15025858: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_39;
    // 0x15025858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_39:
    // 0x1502585C: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x15025860: lb          $v1, 0x5($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X5);
    // 0x15025864: lh          $t7, 0x6($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X6);
    // 0x15025868: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x1502586C: bne         $v1, $zero, L_1502587C
    if (ctx->r3 != 0) {
        // 0x15025870: or          $v0, $t9, $t7
        ctx->r2 = ctx->r25 | ctx->r15;
            goto L_1502587C;
    }
    // 0x15025870: or          $v0, $t9, $t7
    ctx->r2 = ctx->r25 | ctx->r15;
    // 0x15025874: b           L_150265B0
    // 0x15025878: sw          $v0, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->r2;
        goto L_150265B0;
    // 0x15025878: sw          $v0, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->r2;
L_1502587C:
    // 0x1502587C: bnel        $a2, $v1, L_15025898
    if (ctx->r6 != ctx->r3) {
        // 0x15025880: lw          $t5, 0x94($s1)
        ctx->r13 = MEM_W(ctx->r17, 0X94);
            goto L_15025898;
    }
    goto skip_40;
    // 0x15025880: lw          $t5, 0x94($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X94);
    skip_40:
    // 0x15025884: lw          $t6, 0x94($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X94);
    // 0x15025888: or          $t8, $t6, $v0
    ctx->r24 = ctx->r14 | ctx->r2;
    // 0x1502588C: b           L_150265B0
    // 0x15025890: sw          $t8, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->r24;
        goto L_150265B0;
    // 0x15025890: sw          $t8, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->r24;
    // 0x15025894: lw          $t5, 0x94($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X94);
L_15025898:
    // 0x15025898: ori         $t9, $v0, 0x1
    ctx->r25 = ctx->r2 | 0X1;
    // 0x1502589C: nor         $t9, $t9, $zero
    ctx->r25 = ~(ctx->r25 | 0);
    // 0x150258A0: and         $t7, $t5, $t9
    ctx->r15 = ctx->r13 & ctx->r25;
    // 0x150258A4: sw          $t7, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->r15;
    // 0x150258A8: b           L_150265B4
    // 0x150258AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150258AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150258B0:
    // 0x150258B0: bnel        $s0, $at, L_15025914
    if (ctx->r16 != ctx->r1) {
        // 0x150258B4: addiu       $at, $zero, 0x42
        ctx->r1 = ADD32(0, 0X42);
            goto L_15025914;
    }
    goto skip_41;
    // 0x150258B4: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    skip_41:
    // 0x150258B8: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x150258BC: beql        $s1, $zero, L_150265B4
    if (ctx->r17 == 0) {
        // 0x150258C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_42;
    // 0x150258C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_42:
    // 0x150258C4: lb          $t6, 0x4($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X4);
    // 0x150258C8: bnel        $t6, $zero, L_15025908
    if (ctx->r14 != 0) {
        // 0x150258CC: sb          $zero, 0x65($s1)
        MEM_B(0X65, ctx->r17) = 0;
            goto L_15025908;
    }
    goto skip_43;
    // 0x150258CC: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    skip_43:
    // 0x150258D0: jal         0x15083FB0
    // 0x150258D4: lbu         $a0, 0x7($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X7);
    func_15083FB0(rdram, ctx);
        goto after_56;
    // 0x150258D4: lbu         $a0, 0x7($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X7);
    after_56:
    // 0x150258D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150258DC: beql        $v0, $at, L_150265B4
    if (ctx->r2 == ctx->r1) {
        // 0x150258E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_44;
    // 0x150258E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_44:
    // 0x150258E4: lbu         $t8, 0x101($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X101);
    // 0x150258E8: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x150258EC: sb          $t9, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r25;
    // 0x150258F0: ori         $t5, $t8, 0x4
    ctx->r13 = ctx->r24 | 0X4;
    // 0x150258F4: sb          $t5, 0x101($s1)
    MEM_B(0X101, ctx->r17) = ctx->r13;
    // 0x150258F8: lb          $t7, 0x5($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X5);
    // 0x150258FC: b           L_150265B0
    // 0x15025900: sw          $t7, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r15;
        goto L_150265B0;
    // 0x15025900: sw          $t7, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r15;
    // 0x15025904: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
L_15025908:
    // 0x15025908: b           L_150265B4
    // 0x1502590C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x1502590C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15025910: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
L_15025914:
    // 0x15025914: bnel        $s0, $at, L_150259E0
    if (ctx->r16 != ctx->r1) {
        // 0x15025918: addiu       $at, $zero, 0x43
        ctx->r1 = ADD32(0, 0X43);
            goto L_150259E0;
    }
    goto skip_45;
    // 0x15025918: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    skip_45:
    // 0x1502591C: lb          $v1, 0x4($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X4);
    // 0x15025920: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15025924: bne         $v1, $zero, L_15025938
    if (ctx->r3 != 0) {
        // 0x15025928: nop
    
            goto L_15025938;
    }
    // 0x15025928: nop

    // 0x1502592C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15025930: b           L_150265B0
    // 0x15025934: sb          $a2, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r6;
        goto L_150265B0;
    // 0x15025934: sb          $a2, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r6;
L_15025938:
    // 0x15025938: bne         $a2, $v1, L_1502594C
    if (ctx->r6 != ctx->r3) {
        // 0x1502593C: addiu       $t6, $zero, 0x4
        ctx->r14 = ADD32(0, 0X4);
            goto L_1502594C;
    }
    // 0x1502593C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x15025940: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15025944: b           L_150265B0
    // 0x15025948: sb          $t6, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r14;
        goto L_150265B0;
    // 0x15025948: sb          $t6, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r14;
L_1502594C:
    // 0x1502594C: bne         $t1, $v1, L_15025960
    if (ctx->r9 != ctx->r3) {
        // 0x15025950: addiu       $t8, $zero, 0x2
        ctx->r24 = ADD32(0, 0X2);
            goto L_15025960;
    }
    // 0x15025950: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x15025954: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15025958: b           L_150265B0
    // 0x1502595C: sb          $t8, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r24;
        goto L_150265B0;
    // 0x1502595C: sb          $t8, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r24;
L_15025960:
    // 0x15025960: bne         $t2, $v1, L_15025974
    if (ctx->r10 != ctx->r3) {
        // 0x15025964: addiu       $t5, $zero, 0x5
        ctx->r13 = ADD32(0, 0X5);
            goto L_15025974;
    }
    // 0x15025964: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x15025968: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1502596C: b           L_150265B0
    // 0x15025970: sb          $t5, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r13;
        goto L_150265B0;
    // 0x15025970: sb          $t5, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r13;
L_15025974:
    // 0x15025974: bne         $a3, $v1, L_1502598C
    if (ctx->r7 != ctx->r3) {
        // 0x15025978: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_1502598C;
    }
    // 0x15025978: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1502597C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x15025980: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15025984: b           L_150265B0
    // 0x15025988: sb          $t9, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r25;
        goto L_150265B0;
    // 0x15025988: sb          $t9, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r25;
L_1502598C:
    // 0x1502598C: bne         $v1, $at, L_150259A0
    if (ctx->r3 != ctx->r1) {
        // 0x15025990: addiu       $t7, $zero, 0x7
        ctx->r15 = ADD32(0, 0X7);
            goto L_150259A0;
    }
    // 0x15025990: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x15025994: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15025998: b           L_150265B0
    // 0x1502599C: sb          $t7, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r15;
        goto L_150265B0;
    // 0x1502599C: sb          $t7, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r15;
L_150259A0:
    // 0x150259A0: bne         $t4, $v1, L_150259B4
    if (ctx->r12 != ctx->r3) {
        // 0x150259A4: addiu       $t6, $zero, 0x8
        ctx->r14 = ADD32(0, 0X8);
            goto L_150259B4;
    }
    // 0x150259A4: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x150259A8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150259AC: b           L_150265B0
    // 0x150259B0: sb          $t6, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r14;
        goto L_150265B0;
    // 0x150259B0: sb          $t6, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r14;
L_150259B4:
    // 0x150259B4: bne         $t3, $v1, L_150259C8
    if (ctx->r11 != ctx->r3) {
        // 0x150259B8: addiu       $t8, $zero, 0x9
        ctx->r24 = ADD32(0, 0X9);
            goto L_150259C8;
    }
    // 0x150259B8: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x150259BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150259C0: b           L_150265B0
    // 0x150259C4: sb          $t8, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r24;
        goto L_150265B0;
    // 0x150259C4: sb          $t8, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r24;
L_150259C8:
    // 0x150259C8: bne         $a0, $v1, L_150265B0
    if (ctx->r4 != ctx->r3) {
        // 0x150259CC: addiu       $t5, $zero, 0xA
        ctx->r13 = ADD32(0, 0XA);
            goto L_150265B0;
    }
    // 0x150259CC: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x150259D0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150259D4: b           L_150265B0
    // 0x150259D8: sb          $t5, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r13;
        goto L_150265B0;
    // 0x150259D8: sb          $t5, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r13;
    // 0x150259DC: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
L_150259E0:
    // 0x150259E0: bnel        $s0, $at, L_15025A84
    if (ctx->r16 != ctx->r1) {
        // 0x150259E4: addiu       $at, $zero, 0x45
        ctx->r1 = ADD32(0, 0X45);
            goto L_15025A84;
    }
    goto skip_46;
    // 0x150259E4: addiu       $at, $zero, 0x45
    ctx->r1 = ADD32(0, 0X45);
    skip_46:
    // 0x150259E8: lb          $t9, 0x4($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X4);
    // 0x150259EC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150259F0: lw          $a2, 0x15C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X15C);
    // 0x150259F4: bne         $t9, $zero, L_150265B0
    if (ctx->r25 != 0) {
        // 0x150259F8: addiu       $a3, $sp, 0x98
        ctx->r7 = ADD32(ctx->r29, 0X98);
            goto L_150265B0;
    }
    // 0x150259F8: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x150259FC: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
    // 0x15025A00: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15025A04: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15025A08: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15025A0C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15025A10: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15025A14: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15025A18: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15025A1C: jal         0x15023BB0
    // 0x15025A20: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_15023BB0(rdram, ctx);
        goto after_57;
    // 0x15025A20: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_57:
    // 0x15025A24: lw          $t7, 0x15C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X15C);
    // 0x15025A28: addiu       $t0, $zero, 0x44
    ctx->r8 = ADD32(0, 0X44);
    // 0x15025A2C: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x15025A30: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15025A34: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15025A38: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x15025A3C: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x15025A40: lw          $t9, 0x3958($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3958);
    // 0x15025A44: lw          $t7, 0x164($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X164);
    // 0x15025A48: lw          $a3, 0x178($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X178);
    // 0x15025A4C: subu        $a2, $v0, $t7
    ctx->r6 = SUB32(ctx->r2, ctx->r15);
    // 0x15025A50: mflo        $t6
    ctx->r14 = lo;
    // 0x15025A54: addu        $v1, $t9, $t6
    ctx->r3 = ADD32(ctx->r25, ctx->r14);
    // 0x15025A58: lwc1        $f8, 0x24($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X24);
    // 0x15025A5C: lwc1        $f16, 0x28($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X28);
    // 0x15025A60: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15025A64: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15025A68: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x15025A6C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x15025A70: jal         0x150B7220
    // 0x15025A74: nop

    func_150B7220(rdram, ctx);
        goto after_58;
    // 0x15025A74: nop

    after_58:
    // 0x15025A78: b           L_150265B4
    // 0x15025A7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025A7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15025A80: addiu       $at, $zero, 0x45
    ctx->r1 = ADD32(0, 0X45);
L_15025A84:
    // 0x15025A84: bnel        $s0, $at, L_15025B04
    if (ctx->r16 != ctx->r1) {
        // 0x15025A88: addiu       $at, $zero, 0x49
        ctx->r1 = ADD32(0, 0X49);
            goto L_15025B04;
    }
    goto skip_47;
    // 0x15025A88: addiu       $at, $zero, 0x49
    ctx->r1 = ADD32(0, 0X49);
    skip_47:
    // 0x15025A8C: lb          $t9, 0x4($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X4);
    // 0x15025A90: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15025A94: lw          $a2, 0x15C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X15C);
    // 0x15025A98: bne         $t9, $zero, L_150265B0
    if (ctx->r25 != 0) {
        // 0x15025A9C: addiu       $a3, $sp, 0x90
        ctx->r7 = ADD32(ctx->r29, 0X90);
            goto L_150265B0;
    }
    // 0x15025A9C: addiu       $a3, $sp, 0x90
    ctx->r7 = ADD32(ctx->r29, 0X90);
    // 0x15025AA0: lw          $t8, 0x168($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X168);
    // 0x15025AA4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15025AA8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15025AAC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15025AB0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15025AB4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15025AB8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15025ABC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15025AC0: jal         0x15023BB0
    // 0x15025AC4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    func_15023BB0(rdram, ctx);
        goto after_59;
    // 0x15025AC4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    after_59:
    // 0x15025AC8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15025ACC: lw          $t7, -0x1618($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1618);
    // 0x15025AD0: lw          $t5, 0x164($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X164);
    // 0x15025AD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15025AD8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15025ADC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15025AE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15025AE4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15025AE8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15025AEC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15025AF0: jal         0x151A4FD0
    // 0x15025AF4: subu        $a1, $v0, $t5
    ctx->r5 = SUB32(ctx->r2, ctx->r13);
    func_151A4FD0(rdram, ctx);
        goto after_60;
    // 0x15025AF4: subu        $a1, $v0, $t5
    ctx->r5 = SUB32(ctx->r2, ctx->r13);
    after_60:
    // 0x15025AF8: b           L_150265B4
    // 0x15025AFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025AFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15025B00: addiu       $at, $zero, 0x49
    ctx->r1 = ADD32(0, 0X49);
L_15025B04:
    // 0x15025B04: bnel        $s0, $at, L_15025B3C
    if (ctx->r16 != ctx->r1) {
        // 0x15025B08: addiu       $at, $zero, 0x4B
        ctx->r1 = ADD32(0, 0X4B);
            goto L_15025B3C;
    }
    goto skip_48;
    // 0x15025B08: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    skip_48:
    // 0x15025B0C: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15025B10: beql        $s1, $zero, L_150265B4
    if (ctx->r17 == 0) {
        // 0x15025B14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_49;
    // 0x15025B14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_49:
    // 0x15025B18: lb          $v1, 0x4($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X4);
    // 0x15025B1C: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x15025B20: beq         $at, $zero, L_150265B0
    if (ctx->r1 == 0) {
        // 0x15025B24: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_150265B0;
    }
    // 0x15025B24: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x15025B28: lh          $t9, 0x6($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X6);
    // 0x15025B2C: addu        $t8, $s1, $t6
    ctx->r24 = ADD32(ctx->r17, ctx->r14);
    // 0x15025B30: b           L_150265B0
    // 0x15025B34: sw          $t9, 0x2E4($t8)
    MEM_W(0X2E4, ctx->r24) = ctx->r25;
        goto L_150265B0;
    // 0x15025B34: sw          $t9, 0x2E4($t8)
    MEM_W(0X2E4, ctx->r24) = ctx->r25;
    // 0x15025B38: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
L_15025B3C:
    // 0x15025B3C: bnel        $s0, $at, L_15025B80
    if (ctx->r16 != ctx->r1) {
        // 0x15025B40: addiu       $at, $zero, 0x4A
        ctx->r1 = ADD32(0, 0X4A);
            goto L_15025B80;
    }
    goto skip_50;
    // 0x15025B40: addiu       $at, $zero, 0x4A
    ctx->r1 = ADD32(0, 0X4A);
    skip_50:
    // 0x15025B44: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15025B48: beql        $s1, $zero, L_150265B4
    if (ctx->r17 == 0) {
        // 0x15025B4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_51;
    // 0x15025B4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_51:
    // 0x15025B50: lb          $t6, 0x5($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X5);
    // 0x15025B54: lh          $t5, 0x6($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X6);
    // 0x15025B58: andi        $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 & 0XFF;
    // 0x15025B5C: sll         $t8, $t9, 16
    ctx->r24 = S32(ctx->r25 << 16);
    // 0x15025B60: lb          $t9, 0x4($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X4);
    // 0x15025B64: andi        $t7, $t5, 0xFFFF
    ctx->r15 = ctx->r13 & 0XFFFF;
    // 0x15025B68: or          $t5, $t7, $t8
    ctx->r13 = ctx->r15 | ctx->r24;
    // 0x15025B6C: sll         $t7, $t9, 24
    ctx->r15 = S32(ctx->r25 << 24);
    // 0x15025B70: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x15025B74: b           L_150265B0
    // 0x15025B78: sw          $t8, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r24;
        goto L_150265B0;
    // 0x15025B78: sw          $t8, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r24;
    // 0x15025B7C: addiu       $at, $zero, 0x4A
    ctx->r1 = ADD32(0, 0X4A);
L_15025B80:
    // 0x15025B80: bnel        $s0, $at, L_15025BB8
    if (ctx->r16 != ctx->r1) {
        // 0x15025B84: addiu       $at, $zero, 0x54
        ctx->r1 = ADD32(0, 0X54);
            goto L_15025BB8;
    }
    goto skip_52;
    // 0x15025B84: addiu       $at, $zero, 0x54
    ctx->r1 = ADD32(0, 0X54);
    skip_52:
    // 0x15025B88: lb          $t6, 0x4($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X4);
    // 0x15025B8C: bne         $t6, $zero, L_15025BA4
    if (ctx->r14 != 0) {
        // 0x15025B90: nop
    
            goto L_15025BA4;
    }
    // 0x15025B90: nop

    // 0x15025B94: jal         0x10011FB0
    // 0x15025B98: lb          $a0, 0x5($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X5);
    func_10011FB0(rdram, ctx);
        goto after_61;
    // 0x15025B98: lb          $a0, 0x5($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X5);
    after_61:
    // 0x15025B9C: b           L_150265B4
    // 0x15025BA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025BA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025BA4:
    // 0x15025BA4: jal         0x10011FB0
    // 0x15025BA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_10011FB0(rdram, ctx);
        goto after_62;
    // 0x15025BA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_62:
    // 0x15025BAC: b           L_150265B4
    // 0x15025BB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025BB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15025BB4: addiu       $at, $zero, 0x54
    ctx->r1 = ADD32(0, 0X54);
L_15025BB8:
    // 0x15025BB8: bne         $s0, $at, L_15025BD8
    if (ctx->r16 != ctx->r1) {
        // 0x15025BBC: lw          $t7, 0x168($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X168);
            goto L_15025BD8;
    }
    // 0x15025BBC: lw          $t7, 0x168($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X168);
    // 0x15025BC0: lb          $t9, 0x4($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X4);
    // 0x15025BC4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15025BC8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15025BCC: nor         $t5, $t9, $zero
    ctx->r13 = ~(ctx->r25 | 0);
    // 0x15025BD0: b           L_150265B0
    // 0x15025BD4: sb          $t5, 0x3660($at)
    MEM_B(0X3660, ctx->r1) = ctx->r13;
        goto L_150265B0;
    // 0x15025BD4: sb          $t5, 0x3660($at)
    MEM_B(0X3660, ctx->r1) = ctx->r13;
L_15025BD8:
    // 0x15025BD8: addiu       $at, $zero, 0x55
    ctx->r1 = ADD32(0, 0X55);
    // 0x15025BDC: bnel        $s0, $at, L_15025BF8
    if (ctx->r16 != ctx->r1) {
        // 0x15025BE0: addiu       $at, $zero, 0x59
        ctx->r1 = ADD32(0, 0X59);
            goto L_15025BF8;
    }
    goto skip_53;
    // 0x15025BE0: addiu       $at, $zero, 0x59
    ctx->r1 = ADD32(0, 0X59);
    skip_53:
    // 0x15025BE4: jal         0x150C851C
    // 0x15025BE8: lb          $a0, 0x4($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X4);
    func_150C851C(rdram, ctx);
        goto after_63;
    // 0x15025BE8: lb          $a0, 0x4($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X4);
    after_63:
    // 0x15025BEC: b           L_150265B4
    // 0x15025BF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025BF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15025BF4: addiu       $at, $zero, 0x59
    ctx->r1 = ADD32(0, 0X59);
L_15025BF8:
    // 0x15025BF8: bnel        $s0, $at, L_15025C14
    if (ctx->r16 != ctx->r1) {
        // 0x15025BFC: addiu       $at, $zero, 0x5A
        ctx->r1 = ADD32(0, 0X5A);
            goto L_15025C14;
    }
    goto skip_54;
    // 0x15025BFC: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    skip_54:
    // 0x15025C00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15025C04: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15025C08: b           L_150265B0
    // 0x15025C0C: sb          $a2, 0x3C8B($at)
    MEM_B(0X3C8B, ctx->r1) = ctx->r6;
        goto L_150265B0;
    // 0x15025C0C: sb          $a2, 0x3C8B($at)
    MEM_B(0X3C8B, ctx->r1) = ctx->r6;
    // 0x15025C10: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
L_15025C14:
    // 0x15025C14: bnel        $s0, $at, L_15025D34
    if (ctx->r16 != ctx->r1) {
        // 0x15025C18: addiu       $at, $zero, 0x71
        ctx->r1 = ADD32(0, 0X71);
            goto L_15025D34;
    }
    goto skip_55;
    // 0x15025C18: addiu       $at, $zero, 0x71
    ctx->r1 = ADD32(0, 0X71);
    skip_55:
    // 0x15025C1C: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15025C20: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15025C24: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x15025C28: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x15025C2C: subu        $t8, $s1, $v0
    ctx->r24 = SUB32(ctx->r17, ctx->r2);
    // 0x15025C30: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x15025C34: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15025C38: addiu       $a2, $a2, 0x3E78
    ctx->r6 = ADD32(ctx->r6, 0X3E78);
    // 0x15025C3C: mflo        $t6
    ctx->r14 = lo;
    // 0x15025C40: sb          $t6, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r14;
    // 0x15025C44: lbu         $v1, 0x4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4);
    // 0x15025C48: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x15025C4C: lui         $a1, 0x431C
    ctx->r5 = S32(0X431C << 16);
    // 0x15025C50: bne         $v1, $at, L_15025C94
    if (ctx->r3 != ctx->r1) {
        // 0x15025C54: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_15025C94;
    }
    // 0x15025C54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15025C58: sb          $zero, 0x124($s1)
    MEM_B(0X124, ctx->r17) = 0;
    // 0x15025C5C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x15025C60: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15025C64: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15025C68: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x15025C6C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15025C70: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15025C74: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15025C78: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15025C7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15025C80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15025C84: jal         0x15052F9C
    // 0x15025C88: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_15052F9C(rdram, ctx);
        goto after_64;
    // 0x15025C88: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_64:
    // 0x15025C8C: b           L_150265B4
    // 0x15025C90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025C90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025C94:
    // 0x15025C94: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x15025C98: bne         $v1, $at, L_15025CE4
    if (ctx->r3 != ctx->r1) {
        // 0x15025C9C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_15025CE4;
    }
    // 0x15025C9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15025CA0: sb          $zero, 0x124($s1)
    MEM_B(0X124, ctx->r17) = 0;
    // 0x15025CA4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15025CA8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15025CAC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15025CB0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15025CB4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x15025CB8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15025CBC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15025CC0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15025CC4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15025CC8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15025CCC: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    // 0x15025CD0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x15025CD4: jal         0x15052F9C
    // 0x15025CD8: addiu       $a3, $zero, 0x44
    ctx->r7 = ADD32(0, 0X44);
    func_15052F9C(rdram, ctx);
        goto after_65;
    // 0x15025CD8: addiu       $a3, $zero, 0x44
    ctx->r7 = ADD32(0, 0X44);
    after_65:
    // 0x15025CDC: b           L_150265B4
    // 0x15025CE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025CE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025CE4:
    // 0x15025CE4: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x15025CE8: bne         $v1, $at, L_150265B0
    if (ctx->r3 != ctx->r1) {
        // 0x15025CEC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_150265B0;
    }
    // 0x15025CEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15025CF0: sb          $zero, 0x124($s1)
    MEM_B(0X124, ctx->r17) = 0;
    // 0x15025CF4: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x15025CF8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15025CFC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15025D00: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x15025D04: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15025D08: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15025D0C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15025D10: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15025D14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15025D18: lui         $a1, 0x431C
    ctx->r5 = S32(0X431C << 16);
    // 0x15025D1C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x15025D20: jal         0x15052F9C
    // 0x15025D24: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_15052F9C(rdram, ctx);
        goto after_66;
    // 0x15025D24: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_66:
    // 0x15025D28: b           L_150265B4
    // 0x15025D2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025D2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15025D30: addiu       $at, $zero, 0x71
    ctx->r1 = ADD32(0, 0X71);
L_15025D34:
    // 0x15025D34: bnel        $s0, $at, L_15025D84
    if (ctx->r16 != ctx->r1) {
        // 0x15025D38: addiu       $at, $zero, 0x37
        ctx->r1 = ADD32(0, 0X37);
            goto L_15025D84;
    }
    goto skip_56;
    // 0x15025D38: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    skip_56:
    // 0x15025D3C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15025D40: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x15025D44: lw          $t9, 0x31C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X31C);
    // 0x15025D48: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x15025D4C: sh          $zero, 0xCC($v0)
    MEM_H(0XCC, ctx->r2) = 0;
    // 0x15025D50: sb          $zero, 0x4E($t9)
    MEM_B(0X4E, ctx->r25) = 0;
    // 0x15025D54: lw          $t5, 0x31C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X31C);
    // 0x15025D58: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x15025D5C: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x15025D60: sb          $zero, 0x27($t5)
    MEM_B(0X27, ctx->r13) = 0;
    // 0x15025D64: lw          $t7, 0xF8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XF8);
    // 0x15025D68: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x15025D6C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x15025D70: beq         $s1, $zero, L_150265B0
    if (ctx->r17 == 0) {
        // 0x15025D74: sw          $t8, 0xF8($v0)
        MEM_W(0XF8, ctx->r2) = ctx->r24;
            goto L_150265B0;
    }
    // 0x15025D74: sw          $t8, 0xF8($v0)
    MEM_W(0XF8, ctx->r2) = ctx->r24;
    // 0x15025D78: b           L_150265B0
    // 0x15025D7C: sb          $zero, 0x13C($s1)
    MEM_B(0X13C, ctx->r17) = 0;
        goto L_150265B0;
    // 0x15025D7C: sb          $zero, 0x13C($s1)
    MEM_B(0X13C, ctx->r17) = 0;
    // 0x15025D80: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
L_15025D84:
    // 0x15025D84: bne         $s0, $at, L_15025E54
    if (ctx->r16 != ctx->r1) {
        // 0x15025D88: lui         $t6, 0x8008
        ctx->r14 = S32(0X8008 << 16);
            goto L_15025E54;
    }
    // 0x15025D88: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x15025D8C: addiu       $s0, $sp, 0x78
    ctx->r16 = ADD32(ctx->r29, 0X78);
    // 0x15025D90: addiu       $t6, $t6, 0x413C
    ctx->r14 = ADD32(ctx->r14, 0X413C);
    // 0x15025D94: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x15025D98: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15025D9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15025DA0: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x15025DA4: lw          $t5, 0x4($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X4);
    // 0x15025DA8: addiu       $a3, $sp, 0x88
    ctx->r7 = ADD32(ctx->r29, 0X88);
    // 0x15025DAC: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x15025DB0: lbu         $at, 0x8($t6)
    ctx->r1 = MEM_BU(ctx->r14, 0X8);
    // 0x15025DB4: sb          $at, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r1;
    // 0x15025DB8: lb          $a1, 0x0($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X0);
    // 0x15025DBC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15025DC0: lh          $t8, 0x2($s2)
    ctx->r24 = MEM_H(ctx->r18, 0X2);
    // 0x15025DC4: lw          $t9, 0x168($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X168);
    // 0x15025DC8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15025DCC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15025DD0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15025DD4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15025DD8: lw          $a2, 0x15C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X15C);
    // 0x15025DDC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15025DE0: jal         0x15023BB0
    // 0x15025DE4: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    func_15023BB0(rdram, ctx);
        goto after_67;
    // 0x15025DE4: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    after_67:
    // 0x15025DE8: lb          $t5, 0x4($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X4);
    // 0x15025DEC: lw          $t6, 0x164($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X164);
    // 0x15025DF0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x15025DF4: bne         $t5, $zero, L_15025E44
    if (ctx->r13 != 0) {
        // 0x15025DF8: subu        $t0, $v0, $t6
        ctx->r8 = SUB32(ctx->r2, ctx->r14);
            goto L_15025E44;
    }
    // 0x15025DF8: subu        $t0, $v0, $t6
    ctx->r8 = SUB32(ctx->r2, ctx->r14);
    // 0x15025DFC: lh          $v1, 0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X6);
    // 0x15025E00: addiu       $a3, $zero, 0x7F
    ctx->r7 = ADD32(0, 0X7F);
    // 0x15025E04: beq         $v1, $zero, L_15025E14
    if (ctx->r3 == 0) {
        // 0x15025E08: nop
    
            goto L_15025E14;
    }
    // 0x15025E08: nop

    // 0x15025E0C: b           L_15025E14
    // 0x15025E10: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
        goto L_15025E14;
    // 0x15025E10: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
L_15025E14:
    // 0x15025E14: lb          $t7, 0x5($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X5);
    // 0x15025E18: multu       $t7, $t1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15025E1C: mflo        $t8
    ctx->r24 = lo;
    // 0x15025E20: addu        $v0, $s0, $t8
    ctx->r2 = ADD32(ctx->r16, ctx->r24);
    // 0x15025E24: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x15025E28: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x15025E2C: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x15025E30: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15025E34: jal         0x1517F488
    // 0x15025E38: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_1517F488(rdram, ctx);
        goto after_68;
    // 0x15025E38: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_68:
    // 0x15025E3C: b           L_150265B4
    // 0x15025E40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025E40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025E44:
    // 0x15025E44: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15025E48: sh          $zero, -0x21F0($at)
    MEM_H(-0X21F0, ctx->r1) = 0;
    // 0x15025E4C: b           L_150265B4
    // 0x15025E50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025E50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025E54:
    // 0x15025E54: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x15025E58: bne         $s0, $at, L_15025EE0
    if (ctx->r16 != ctx->r1) {
        // 0x15025E5C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_15025EE0;
    }
    // 0x15025E5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15025E60: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
    // 0x15025E64: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15025E68: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15025E6C: lw          $a2, 0x15C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X15C);
    // 0x15025E70: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    // 0x15025E74: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15025E78: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15025E7C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15025E80: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15025E84: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15025E88: jal         0x15023BB0
    // 0x15025E8C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_15023BB0(rdram, ctx);
        goto after_69;
    // 0x15025E8C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_69:
    // 0x15025E90: lb          $t7, 0x4($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X4);
    // 0x15025E94: lw          $t5, 0x164($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X164);
    // 0x15025E98: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15025E9C: bne         $t7, $zero, L_15025ED4
    if (ctx->r15 != 0) {
        // 0x15025EA0: subu        $a1, $v0, $t5
        ctx->r5 = SUB32(ctx->r2, ctx->r13);
            goto L_15025ED4;
    }
    // 0x15025EA0: subu        $a1, $v0, $t5
    ctx->r5 = SUB32(ctx->r2, ctx->r13);
    // 0x15025EA4: lh          $v1, 0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X6);
    // 0x15025EA8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x15025EAC: addiu       $a3, $zero, 0x7F
    ctx->r7 = ADD32(0, 0X7F);
    // 0x15025EB0: beq         $v1, $zero, L_15025EC0
    if (ctx->r3 == 0) {
        // 0x15025EB4: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_15025EC0;
    }
    // 0x15025EB4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15025EB8: b           L_15025EC0
    // 0x15025EBC: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
        goto L_15025EC0;
    // 0x15025EBC: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_15025EC0:
    // 0x15025EC0: lb          $a0, 0x5($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X5);
    // 0x15025EC4: jal         0x1517F720
    // 0x15025EC8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1517F720(rdram, ctx);
        goto after_70;
    // 0x15025EC8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_70:
    // 0x15025ECC: b           L_150265B4
    // 0x15025ED0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025ED0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025ED4:
    // 0x15025ED4: sh          $zero, -0x21F8($at)
    MEM_H(-0X21F8, ctx->r1) = 0;
    // 0x15025ED8: b           L_150265B4
    // 0x15025EDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15025EDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15025EE0:
    // 0x15025EE0: addiu       $at, $zero, 0x5C
    ctx->r1 = ADD32(0, 0X5C);
    // 0x15025EE4: bnel        $s0, $at, L_15026058
    if (ctx->r16 != ctx->r1) {
        // 0x15025EE8: addiu       $at, $zero, 0x62
        ctx->r1 = ADD32(0, 0X62);
            goto L_15026058;
    }
    goto skip_57;
    // 0x15025EE8: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    skip_57:
    // 0x15025EEC: lb          $t9, 0x4($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X4);
    // 0x15025EF0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15025EF4: lw          $a2, 0x15C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X15C);
    // 0x15025EF8: bne         $t9, $zero, L_150265B0
    if (ctx->r25 != 0) {
        // 0x15025EFC: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_150265B0;
    }
    // 0x15025EFC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15025F00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15025F04: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15025F08: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15025F0C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15025F10: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x15025F14: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x15025F18: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15025F1C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15025F20: lb          $t9, 0x5($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X5);
    // 0x15025F24: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
    // 0x15025F28: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x15025F2C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x15025F30: jal         0x15023BB0
    // 0x15025F34: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_15023BB0(rdram, ctx);
        goto after_71;
    // 0x15025F34: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_71:
    // 0x15025F38: lb          $a1, 0x0($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X0);
    // 0x15025F3C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15025F40: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x15025F44: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x15025F48: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15025F4C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x15025F50: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15025F54: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15025F58: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x15025F5C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15025F60: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15025F64: lb          $t5, 0x5($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X5);
    // 0x15025F68: lw          $t7, 0x168($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X168);
    // 0x15025F6C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15025F70: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15025F74: lw          $a2, 0x15C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X15C);
    // 0x15025F78: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x15025F7C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x15025F80: jal         0x15023BB0
    // 0x15025F84: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    func_15023BB0(rdram, ctx);
        goto after_72;
    // 0x15025F84: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_72:
    // 0x15025F88: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x15025F8C: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x15025F90: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15025F94: bne         $t9, $zero, L_15025FA0
    if (ctx->r25 != 0) {
        // 0x15025F98: subu        $s0, $v0, $t8
        ctx->r16 = SUB32(ctx->r2, ctx->r24);
            goto L_15025FA0;
    }
    // 0x15025F98: subu        $s0, $v0, $t8
    ctx->r16 = SUB32(ctx->r2, ctx->r24);
    // 0x15025F9C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_15025FA0:
    // 0x15025FA0: lb          $a1, 0x0($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X0);
    // 0x15025FA4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15025FA8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15025FAC: lh          $t5, 0x2($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X2);
    // 0x15025FB0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15025FB4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x15025FB8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15025FBC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x15025FC0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x15025FC4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x15025FC8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15025FCC: lb          $t6, 0x5($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X5);
    // 0x15025FD0: lw          $t5, 0x168($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X168);
    // 0x15025FD4: lw          $a2, 0x15C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X15C);
    // 0x15025FD8: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x15025FDC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x15025FE0: jal         0x15023BB0
    // 0x15025FE4: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    func_15023BB0(rdram, ctx);
        goto after_73;
    // 0x15025FE4: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    after_73:
    // 0x15025FE8: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x15025FEC: subu        $a2, $s1, $v0
    ctx->r6 = SUB32(ctx->r17, ctx->r2);
    // 0x15025FF0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15025FF4: bne         $t7, $zero, L_15026000
    if (ctx->r15 != 0) {
        // 0x15025FF8: lw          $t8, 0x164($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X164);
            goto L_15026000;
    }
    // 0x15025FF8: lw          $t8, 0x164($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X164);
    // 0x15025FFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_15026000:
    // 0x15026000: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x15026004: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x15026008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502600C: bne         $v0, $at, L_1502602C
    if (ctx->r2 != ctx->r1) {
        // 0x15026010: subu        $t9, $s1, $t8
        ctx->r25 = SUB32(ctx->r17, ctx->r24);
            goto L_1502602C;
    }
    // 0x15026010: subu        $t9, $s1, $t8
    ctx->r25 = SUB32(ctx->r17, ctx->r24);
    // 0x15026014: subu        $t6, $t9, $a2
    ctx->r14 = SUB32(ctx->r25, ctx->r6);
    // 0x15026018: subu        $a1, $t6, $s0
    ctx->r5 = SUB32(ctx->r14, ctx->r16);
    // 0x1502601C: jal         0x150F5420
    // 0x15026020: lb          $a3, 0x5($s2)
    ctx->r7 = MEM_B(ctx->r18, 0X5);
    func_150F5420(rdram, ctx);
        goto after_74;
    // 0x15026020: lb          $a3, 0x5($s2)
    ctx->r7 = MEM_B(ctx->r18, 0X5);
    after_74:
    // 0x15026024: b           L_150265B4
    // 0x15026028: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15026028: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1502602C:
    // 0x1502602C: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x15026030: bne         $v0, $at, L_150265B0
    if (ctx->r2 != ctx->r1) {
        // 0x15026034: lw          $t5, 0x164($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X164);
            goto L_150265B0;
    }
    // 0x15026034: lw          $t5, 0x164($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X164);
    // 0x15026038: subu        $t7, $s1, $t5
    ctx->r15 = SUB32(ctx->r17, ctx->r13);
    // 0x1502603C: subu        $t8, $t7, $a2
    ctx->r24 = SUB32(ctx->r15, ctx->r6);
    // 0x15026040: subu        $a1, $t8, $s0
    ctx->r5 = SUB32(ctx->r24, ctx->r16);
    // 0x15026044: jal         0x1510A930
    // 0x15026048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1510A930(rdram, ctx);
        goto after_75;
    // 0x15026048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_75:
    // 0x1502604C: b           L_150265B4
    // 0x15026050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15026050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15026054: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
L_15026058:
    // 0x15026058: bne         $s0, $at, L_1502606C
    if (ctx->r16 != ctx->r1) {
        // 0x1502605C: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_1502606C;
    }
    // 0x1502605C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x15026060: lw          $t9, 0xDF0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XDF0);
    // 0x15026064: b           L_150265B0
    // 0x15026068: sb          $zero, 0x8($t9)
    MEM_B(0X8, ctx->r25) = 0;
        goto L_150265B0;
    // 0x15026068: sb          $zero, 0x8($t9)
    MEM_B(0X8, ctx->r25) = 0;
L_1502606C:
    // 0x1502606C: addiu       $at, $zero, 0x7C
    ctx->r1 = ADD32(0, 0X7C);
    // 0x15026070: bnel        $s0, $at, L_15026090
    if (ctx->r16 != ctx->r1) {
        // 0x15026074: addiu       $at, $zero, 0x84
        ctx->r1 = ADD32(0, 0X84);
            goto L_15026090;
    }
    goto skip_58;
    // 0x15026074: addiu       $at, $zero, 0x84
    ctx->r1 = ADD32(0, 0X84);
    skip_58:
    // 0x15026078: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x1502607C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15026080: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x15026084: b           L_150265B0
    // 0x15026088: sb          $t6, 0x3681($at)
    MEM_B(0X3681, ctx->r1) = ctx->r14;
        goto L_150265B0;
    // 0x15026088: sb          $t6, 0x3681($at)
    MEM_B(0X3681, ctx->r1) = ctx->r14;
    // 0x1502608C: addiu       $at, $zero, 0x84
    ctx->r1 = ADD32(0, 0X84);
L_15026090:
    // 0x15026090: bnel        $s0, $at, L_150260B0
    if (ctx->r16 != ctx->r1) {
        // 0x15026094: addiu       $at, $zero, 0x85
        ctx->r1 = ADD32(0, 0X85);
            goto L_150260B0;
    }
    goto skip_59;
    // 0x15026094: addiu       $at, $zero, 0x85
    ctx->r1 = ADD32(0, 0X85);
    skip_59:
    // 0x15026098: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x1502609C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150260A0: sltiu       $t5, $v0, 0x1
    ctx->r13 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x150260A4: b           L_150265B0
    // 0x150260A8: sb          $t5, 0x3682($at)
    MEM_B(0X3682, ctx->r1) = ctx->r13;
        goto L_150265B0;
    // 0x150260A8: sb          $t5, 0x3682($at)
    MEM_B(0X3682, ctx->r1) = ctx->r13;
    // 0x150260AC: addiu       $at, $zero, 0x85
    ctx->r1 = ADD32(0, 0X85);
L_150260B0:
    // 0x150260B0: bnel        $s0, $at, L_150260D0
    if (ctx->r16 != ctx->r1) {
        // 0x150260B4: addiu       $at, $zero, 0x63
        ctx->r1 = ADD32(0, 0X63);
            goto L_150260D0;
    }
    goto skip_60;
    // 0x150260B4: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    skip_60:
    // 0x150260B8: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x150260BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150260C0: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x150260C4: b           L_150265B0
    // 0x150260C8: sb          $t7, 0x3683($at)
    MEM_B(0X3683, ctx->r1) = ctx->r15;
        goto L_150265B0;
    // 0x150260C8: sb          $t7, 0x3683($at)
    MEM_B(0X3683, ctx->r1) = ctx->r15;
    // 0x150260CC: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
L_150260D0:
    // 0x150260D0: bnel        $s0, $at, L_150260EC
    if (ctx->r16 != ctx->r1) {
        // 0x150260D4: addiu       $at, $zero, 0x64
        ctx->r1 = ADD32(0, 0X64);
            goto L_150260EC;
    }
    goto skip_61;
    // 0x150260D4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    skip_61:
    // 0x150260D8: lh          $t8, 0x6($s2)
    ctx->r24 = MEM_H(ctx->r18, 0X6);
    // 0x150260DC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x150260E0: b           L_150265B0
    // 0x150260E4: sw          $t8, 0x1FDC($at)
    MEM_W(0X1FDC, ctx->r1) = ctx->r24;
        goto L_150265B0;
    // 0x150260E4: sw          $t8, 0x1FDC($at)
    MEM_W(0X1FDC, ctx->r1) = ctx->r24;
    // 0x150260E8: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
L_150260EC:
    // 0x150260EC: bnel        $s0, $at, L_15026168
    if (ctx->r16 != ctx->r1) {
        // 0x150260F0: addiu       $at, $zero, 0x66
        ctx->r1 = ADD32(0, 0X66);
            goto L_15026168;
    }
    goto skip_62;
    // 0x150260F0: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    skip_62:
    // 0x150260F4: lb          $t9, 0x4($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X4);
    // 0x150260F8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150260FC: bne         $t9, $zero, L_1502615C
    if (ctx->r25 != 0) {
        // 0x15026100: nop
    
            goto L_1502615C;
    }
    // 0x15026100: nop

    // 0x15026104: lw          $t8, 0x15C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X15C);
    // 0x15026108: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
    // 0x1502610C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15026110: multu       $t8, $t0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15026114: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x15026118: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x1502611C: lw          $t7, 0x3958($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3958);
    // 0x15026120: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15026124: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15026128: sb          $a2, -0x21C0($at)
    MEM_B(-0X21C0, ctx->r1) = ctx->r6;
    // 0x1502612C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15026130: mflo        $t9
    ctx->r25 = lo;
    // 0x15026134: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x15026138: addiu       $t6, $v0, 0x28
    ctx->r14 = ADD32(ctx->r2, 0X28);
    // 0x1502613C: sw          $t6, -0x21BC($at)
    MEM_W(-0X21BC, ctx->r1) = ctx->r14;
    // 0x15026140: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15026144: addiu       $t5, $v0, 0x24
    ctx->r13 = ADD32(ctx->r2, 0X24);
    // 0x15026148: sw          $t5, -0x21B8($at)
    MEM_W(-0X21B8, ctx->r1) = ctx->r13;
    // 0x1502614C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15026150: addiu       $t8, $v0, 0x2C
    ctx->r24 = ADD32(ctx->r2, 0X2C);
    // 0x15026154: b           L_150265B0
    // 0x15026158: sw          $t8, -0x21B4($at)
    MEM_W(-0X21B4, ctx->r1) = ctx->r24;
        goto L_150265B0;
    // 0x15026158: sw          $t8, -0x21B4($at)
    MEM_W(-0X21B4, ctx->r1) = ctx->r24;
L_1502615C:
    // 0x1502615C: b           L_150265B0
    // 0x15026160: sb          $zero, -0x21C0($at)
    MEM_B(-0X21C0, ctx->r1) = 0;
        goto L_150265B0;
    // 0x15026160: sb          $zero, -0x21C0($at)
    MEM_B(-0X21C0, ctx->r1) = 0;
    // 0x15026164: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
L_15026168:
    // 0x15026168: bnel        $s0, $at, L_15026188
    if (ctx->r16 != ctx->r1) {
        // 0x1502616C: addiu       $at, $zero, 0x67
        ctx->r1 = ADD32(0, 0X67);
            goto L_15026188;
    }
    goto skip_63;
    // 0x1502616C: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    skip_63:
    // 0x15026170: lb          $t7, 0x4($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X4);
    // 0x15026174: bnel        $t7, $zero, L_150265B4
    if (ctx->r15 != 0) {
        // 0x15026178: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_64;
    // 0x15026178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_64:
    // 0x1502617C: b           L_150265B4
    // 0x15026180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x15026180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15026184: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
L_15026188:
    // 0x15026188: bnel        $s0, $at, L_150261A4
    if (ctx->r16 != ctx->r1) {
        // 0x1502618C: addiu       $at, $zero, 0x73
        ctx->r1 = ADD32(0, 0X73);
            goto L_150261A4;
    }
    goto skip_65;
    // 0x1502618C: addiu       $at, $zero, 0x73
    ctx->r1 = ADD32(0, 0X73);
    skip_65:
    // 0x15026190: jal         0x151DE7D4
    // 0x15026194: nop

    func_151DE7D4(rdram, ctx);
        goto after_76;
    // 0x15026194: nop

    after_76:
    // 0x15026198: b           L_150265B4
    // 0x1502619C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x1502619C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150261A0: addiu       $at, $zero, 0x73
    ctx->r1 = ADD32(0, 0X73);
L_150261A4:
    // 0x150261A4: bnel        $s0, $at, L_150261C0
    if (ctx->r16 != ctx->r1) {
        // 0x150261A8: addiu       $at, $zero, 0x69
        ctx->r1 = ADD32(0, 0X69);
            goto L_150261C0;
    }
    goto skip_66;
    // 0x150261A8: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    skip_66:
    // 0x150261AC: jal         0x151E53E8
    // 0x150261B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_151E53E8(rdram, ctx);
        goto after_77;
    // 0x150261B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_77:
    // 0x150261B4: b           L_150265B4
    // 0x150261B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150261B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150261BC: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
L_150261C0:
    // 0x150261C0: bnel        $s0, $at, L_150262EC
    if (ctx->r16 != ctx->r1) {
        // 0x150261C4: addiu       $at, $zero, 0x6A
        ctx->r1 = ADD32(0, 0X6A);
            goto L_150262EC;
    }
    goto skip_67;
    // 0x150261C4: addiu       $at, $zero, 0x6A
    ctx->r1 = ADD32(0, 0X6A);
    skip_67:
    // 0x150261C8: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x150261CC: beql        $s1, $zero, L_150265B4
    if (ctx->r17 == 0) {
        // 0x150261D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_68;
    // 0x150261D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_68:
    // 0x150261D4: lb          $v1, 0x4($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X4);
    // 0x150261D8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150261DC: bne         $v1, $zero, L_150261FC
    if (ctx->r3 != 0) {
        // 0x150261E0: nop
    
            goto L_150261FC;
    }
    // 0x150261E0: nop

    // 0x150261E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150261E8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150261EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150261F0: swc1        $f4, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f4.u32l;
    // 0x150261F4: b           L_150265B0
    // 0x150261F8: swc1        $f6, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f6.u32l;
        goto L_150265B0;
    // 0x150261F8: swc1        $f6, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f6.u32l;
L_150261FC:
    // 0x150261FC: bne         $a2, $v1, L_15026218
    if (ctx->r6 != ctx->r3) {
        // 0x15026200: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15026218;
    }
    // 0x15026200: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15026204: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15026208: nop

    // 0x1502620C: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x15026210: b           L_150265B0
    // 0x15026214: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
        goto L_150265B0;
    // 0x15026214: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
L_15026218:
    // 0x15026218: bne         $v1, $at, L_15026230
    if (ctx->r3 != ctx->r1) {
        // 0x1502621C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_15026230;
    }
    // 0x1502621C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15026220: jal         0x150836CC
    // 0x15026224: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_150836CC(rdram, ctx);
        goto after_78;
    // 0x15026224: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_78:
    // 0x15026228: b           L_150265B0
    // 0x1502622C: sb          $zero, 0xA9($s1)
    MEM_B(0XA9, ctx->r17) = 0;
        goto L_150265B0;
    // 0x1502622C: sb          $zero, 0xA9($s1)
    MEM_B(0XA9, ctx->r17) = 0;
L_15026230:
    // 0x15026230: bne         $t1, $v1, L_1502629C
    if (ctx->r9 != ctx->r3) {
        // 0x15026234: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_1502629C;
    }
    // 0x15026234: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15026238: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x1502623C: subu        $t9, $s1, $v0
    ctx->r25 = SUB32(ctx->r17, ctx->r2);
    // 0x15026240: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x15026244: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x15026248: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1502624C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15026250: mflo        $t5
    ctx->r13 = lo;
    // 0x15026254: lw          $t7, 0x31C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X31C);
    // 0x15026258: addiu       $a2, $a2, 0x3E78
    ctx->r6 = ADD32(ctx->r6, 0X3E78);
    // 0x1502625C: addiu       $t8, $t5, 0x64
    ctx->r24 = ADD32(ctx->r13, 0X64);
    // 0x15026260: sb          $t5, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r13;
    // 0x15026264: sb          $t8, 0x13C($v0)
    MEM_B(0X13C, ctx->r2) = ctx->r24;
    // 0x15026268: swc1        $f0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f0.u32l;
    // 0x1502626C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15026270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15026274: jal         0x1505959C
    // 0x15026278: sh          $zero, 0x18($t7)
    MEM_H(0X18, ctx->r15) = 0;
    func_1505959C(rdram, ctx);
        goto after_79;
    // 0x15026278: sh          $zero, 0x18($t7)
    MEM_H(0X18, ctx->r15) = 0;
    after_79:
    // 0x1502627C: lbu         $t6, 0x101($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X101);
    // 0x15026280: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15026284: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x15026288: ori         $t5, $t6, 0x4
    ctx->r13 = ctx->r14 | 0X4;
    // 0x1502628C: sw          $t9, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->r25;
    // 0x15026290: sb          $a2, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r6;
    // 0x15026294: b           L_150265B0
    // 0x15026298: sb          $t5, 0x101($s1)
    MEM_B(0X101, ctx->r17) = ctx->r13;
        goto L_150265B0;
    // 0x15026298: sb          $t5, 0x101($s1)
    MEM_B(0X101, ctx->r17) = ctx->r13;
L_1502629C:
    // 0x1502629C: bne         $t2, $v1, L_150262B8
    if (ctx->r10 != ctx->r3) {
        // 0x150262A0: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_150262B8;
    }
    // 0x150262A0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150262A4: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x150262A8: lw          $t8, 0x31C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X31C);
    // 0x150262AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150262B0: b           L_150265B0
    // 0x150262B4: sb          $a2, 0x17($t8)
    MEM_B(0X17, ctx->r24) = ctx->r6;
        goto L_150265B0;
    // 0x150262B4: sb          $a2, 0x17($t8)
    MEM_B(0X17, ctx->r24) = ctx->r6;
L_150262B8:
    // 0x150262B8: bne         $a3, $v1, L_150262D0
    if (ctx->r7 != ctx->r3) {
        // 0x150262BC: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_150262D0;
    }
    // 0x150262BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150262C0: jal         0x15073F1C
    // 0x150262C4: sw          $s1, 0x154C($at)
    MEM_W(0X154C, ctx->r1) = ctx->r17;
    func_15073F1C(rdram, ctx);
        goto after_80;
    // 0x150262C4: sw          $s1, 0x154C($at)
    MEM_W(0X154C, ctx->r1) = ctx->r17;
    after_80:
    // 0x150262C8: b           L_150265B4
    // 0x150262CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x150262CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150262D0:
    // 0x150262D0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x150262D4: bnel        $v1, $at, L_150265B4
    if (ctx->r3 != ctx->r1) {
        // 0x150262D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_69;
    // 0x150262D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_69:
    // 0x150262DC: lw          $t7, 0x31C($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X31C);
    // 0x150262E0: b           L_150265B0
    // 0x150262E4: sb          $zero, 0x4E($t7)
    MEM_B(0X4E, ctx->r15) = 0;
        goto L_150265B0;
    // 0x150262E4: sb          $zero, 0x4E($t7)
    MEM_B(0X4E, ctx->r15) = 0;
    // 0x150262E8: addiu       $at, $zero, 0x6A
    ctx->r1 = ADD32(0, 0X6A);
L_150262EC:
    // 0x150262EC: bnel        $s0, $at, L_15026314
    if (ctx->r16 != ctx->r1) {
        // 0x150262F0: addiu       $at, $zero, 0x7A
        ctx->r1 = ADD32(0, 0X7A);
            goto L_15026314;
    }
    goto skip_70;
    // 0x150262F0: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    skip_70:
    // 0x150262F4: lh          $t9, 0x6($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X6);
    // 0x150262F8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150262FC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x15026300: nop

    // 0x15026304: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15026308: b           L_150265B0
    // 0x1502630C: swc1        $f10, 0x3674($at)
    MEM_W(0X3674, ctx->r1) = ctx->f10.u32l;
        goto L_150265B0;
    // 0x1502630C: swc1        $f10, 0x3674($at)
    MEM_W(0X3674, ctx->r1) = ctx->f10.u32l;
    // 0x15026310: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
L_15026314:
    // 0x15026314: bnel        $s0, $at, L_15026350
    if (ctx->r16 != ctx->r1) {
        // 0x15026318: addiu       $at, $zero, 0x6B
        ctx->r1 = ADD32(0, 0X6B);
            goto L_15026350;
    }
    goto skip_71;
    // 0x15026318: addiu       $at, $zero, 0x6B
    ctx->r1 = ADD32(0, 0X6B);
    skip_71:
    // 0x1502631C: lb          $t6, 0x5($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X5);
    // 0x15026320: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15026324: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15026328: mflo        $t5
    ctx->r13 = lo;
    // 0x1502632C: sw          $t5, 0x367C($at)
    MEM_W(0X367C, ctx->r1) = ctx->r13;
    // 0x15026330: lh          $t8, 0x6($s2)
    ctx->r24 = MEM_H(ctx->r18, 0X6);
    // 0x15026334: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15026338: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x1502633C: nop

    // 0x15026340: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15026344: b           L_150265B0
    // 0x15026348: swc1        $f18, 0x3678($at)
    MEM_W(0X3678, ctx->r1) = ctx->f18.u32l;
        goto L_150265B0;
    // 0x15026348: swc1        $f18, 0x3678($at)
    MEM_W(0X3678, ctx->r1) = ctx->f18.u32l;
    // 0x1502634C: addiu       $at, $zero, 0x6B
    ctx->r1 = ADD32(0, 0X6B);
L_15026350:
    // 0x15026350: beq         $s0, $at, L_150265B0
    if (ctx->r16 == ctx->r1) {
        // 0x15026354: addiu       $at, $zero, 0x6D
        ctx->r1 = ADD32(0, 0X6D);
            goto L_150265B0;
    }
    // 0x15026354: addiu       $at, $zero, 0x6D
    ctx->r1 = ADD32(0, 0X6D);
    // 0x15026358: bnel        $s0, $at, L_15026378
    if (ctx->r16 != ctx->r1) {
        // 0x1502635C: addiu       $at, $zero, 0x74
        ctx->r1 = ADD32(0, 0X74);
            goto L_15026378;
    }
    goto skip_72;
    // 0x1502635C: addiu       $at, $zero, 0x74
    ctx->r1 = ADD32(0, 0X74);
    skip_72:
    // 0x15026360: lb          $v0, 0x4($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X4);
    // 0x15026364: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15026368: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x1502636C: b           L_150265B0
    // 0x15026370: sb          $t7, 0x3662($at)
    MEM_B(0X3662, ctx->r1) = ctx->r15;
        goto L_150265B0;
    // 0x15026370: sb          $t7, 0x3662($at)
    MEM_B(0X3662, ctx->r1) = ctx->r15;
    // 0x15026374: addiu       $at, $zero, 0x74
    ctx->r1 = ADD32(0, 0X74);
L_15026378:
    // 0x15026378: bnel        $s0, $at, L_15026394
    if (ctx->r16 != ctx->r1) {
        // 0x1502637C: addiu       $at, $zero, 0x6F
        ctx->r1 = ADD32(0, 0X6F);
            goto L_15026394;
    }
    goto skip_73;
    // 0x1502637C: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    skip_73:
    // 0x15026380: lb          $t9, 0x5($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X5);
    // 0x15026384: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15026388: b           L_150265B0
    // 0x1502638C: sb          $t9, -0x15F4($at)
    MEM_B(-0X15F4, ctx->r1) = ctx->r25;
        goto L_150265B0;
    // 0x1502638C: sb          $t9, -0x15F4($at)
    MEM_B(-0X15F4, ctx->r1) = ctx->r25;
    // 0x15026390: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
L_15026394:
    // 0x15026394: bnel        $s0, $at, L_150263C0
    if (ctx->r16 != ctx->r1) {
        // 0x15026398: addiu       $at, $zero, 0x70
        ctx->r1 = ADD32(0, 0X70);
            goto L_150263C0;
    }
    goto skip_74;
    // 0x15026398: addiu       $at, $zero, 0x70
    ctx->r1 = ADD32(0, 0X70);
    skip_74:
    // 0x1502639C: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x150263A0: beql        $s1, $zero, L_150265B4
    if (ctx->r17 == 0) {
        // 0x150263A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_75;
    // 0x150263A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_75:
    // 0x150263A8: lb          $t5, 0x4($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X4);
    // 0x150263AC: lb          $t6, 0x5($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X5);
    // 0x150263B0: addu        $t8, $s1, $t5
    ctx->r24 = ADD32(ctx->r17, ctx->r13);
    // 0x150263B4: b           L_150265B0
    // 0x150263B8: sb          $t6, 0x68($t8)
    MEM_B(0X68, ctx->r24) = ctx->r14;
        goto L_150265B0;
    // 0x150263B8: sb          $t6, 0x68($t8)
    MEM_B(0X68, ctx->r24) = ctx->r14;
    // 0x150263BC: addiu       $at, $zero, 0x70
    ctx->r1 = ADD32(0, 0X70);
L_150263C0:
    // 0x150263C0: bne         $s0, $at, L_150263D4
    if (ctx->r16 != ctx->r1) {
        // 0x150263C4: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_150263D4;
    }
    // 0x150263C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150263C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150263CC: b           L_150265B0
    // 0x150263D0: sb          $a2, 0x3C8C($at)
    MEM_B(0X3C8C, ctx->r1) = ctx->r6;
        goto L_150265B0;
    // 0x150263D0: sb          $a2, 0x3C8C($at)
    MEM_B(0X3C8C, ctx->r1) = ctx->r6;
L_150263D4:
    // 0x150263D4: addiu       $at, $zero, 0x72
    ctx->r1 = ADD32(0, 0X72);
    // 0x150263D8: bnel        $s0, $at, L_1502641C
    if (ctx->r16 != ctx->r1) {
        // 0x150263DC: addiu       $at, $zero, 0x78
        ctx->r1 = ADD32(0, 0X78);
            goto L_1502641C;
    }
    goto skip_76;
    // 0x150263DC: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    skip_76:
    // 0x150263E0: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x150263E4: beql        $s1, $zero, L_150265B4
    if (ctx->r17 == 0) {
        // 0x150263E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_77;
    // 0x150263E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_77:
    // 0x150263EC: lbu         $t7, 0x4($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X4);
    // 0x150263F0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150263F4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x150263F8: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x150263FC: lw          $t5, 0x1C90($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1C90);
    // 0x15026400: lh          $t6, 0x6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X6);
    // 0x15026404: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15026408: nop

    // 0x1502640C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15026410: b           L_150265B0
    // 0x15026414: swc1        $f6, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = ctx->f6.u32l;
        goto L_150265B0;
    // 0x15026414: swc1        $f6, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = ctx->f6.u32l;
    // 0x15026418: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
L_1502641C:
    // 0x1502641C: bne         $s0, $at, L_15026430
    if (ctx->r16 != ctx->r1) {
        // 0x15026420: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_15026430;
    }
    // 0x15026420: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15026424: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15026428: b           L_150265B0
    // 0x1502642C: sb          $a2, 0x3C8D($at)
    MEM_B(0X3C8D, ctx->r1) = ctx->r6;
        goto L_150265B0;
    // 0x1502642C: sb          $a2, 0x3C8D($at)
    MEM_B(0X3C8D, ctx->r1) = ctx->r6;
L_15026430:
    // 0x15026430: addiu       $at, $zero, 0x79
    ctx->r1 = ADD32(0, 0X79);
    // 0x15026434: bne         $s0, $at, L_15026454
    if (ctx->r16 != ctx->r1) {
        // 0x15026438: lw          $v0, 0x170($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X170);
            goto L_15026454;
    }
    // 0x15026438: lw          $v0, 0x170($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X170);
    // 0x1502643C: beql        $v0, $zero, L_150265B4
    if (ctx->r2 == 0) {
        // 0x15026440: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_78;
    // 0x15026440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_78:
    // 0x15026444: sw          $zero, 0x84($v0)
    MEM_W(0X84, ctx->r2) = 0;
    // 0x15026448: sw          $zero, 0x80($v0)
    MEM_W(0X80, ctx->r2) = 0;
    // 0x1502644C: b           L_150265B0
    // 0x15026450: sw          $zero, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = 0;
        goto L_150265B0;
    // 0x15026450: sw          $zero, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = 0;
L_15026454:
    // 0x15026454: addiu       $at, $zero, 0x7B
    ctx->r1 = ADD32(0, 0X7B);
    // 0x15026458: bne         $s0, $at, L_1502647C
    if (ctx->r16 != ctx->r1) {
        // 0x1502645C: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_1502647C;
    }
    // 0x1502645C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15026460: lw          $t8, -0x1610($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1610);
    // 0x15026464: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15026468: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1502646C: bnel        $v1, $t8, L_150265B4
    if (ctx->r3 != ctx->r24) {
        // 0x15026470: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_79;
    // 0x15026470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_79:
    // 0x15026474: b           L_150265B0
    // 0x15026478: sb          $a2, 0x3680($at)
    MEM_B(0X3680, ctx->r1) = ctx->r6;
        goto L_150265B0;
    // 0x15026478: sb          $a2, 0x3680($at)
    MEM_B(0X3680, ctx->r1) = ctx->r6;
L_1502647C:
    // 0x1502647C: addiu       $at, $zero, 0x7D
    ctx->r1 = ADD32(0, 0X7D);
    // 0x15026480: bnel        $s0, $at, L_150264B0
    if (ctx->r16 != ctx->r1) {
        // 0x15026484: addiu       $at, $zero, 0x7E
        ctx->r1 = ADD32(0, 0X7E);
            goto L_150264B0;
    }
    goto skip_80;
    // 0x15026484: addiu       $at, $zero, 0x7E
    ctx->r1 = ADD32(0, 0X7E);
    skip_80:
    // 0x15026488: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x1502648C: beql        $s1, $zero, L_150265B4
    if (ctx->r17 == 0) {
        // 0x15026490: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_81;
    // 0x15026490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_81:
    // 0x15026494: lb          $t7, 0x4($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X4);
    // 0x15026498: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1502649C: bnel        $t7, $zero, L_150265B4
    if (ctx->r15 != 0) {
        // 0x150264A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150265B4;
    }
    goto skip_82;
    // 0x150264A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_82:
    // 0x150264A4: b           L_150265B0
    // 0x150264A8: sb          $a2, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r6;
        goto L_150265B0;
    // 0x150264A8: sb          $a2, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r6;
    // 0x150264AC: addiu       $at, $zero, 0x7E
    ctx->r1 = ADD32(0, 0X7E);
L_150264B0:
    // 0x150264B0: bnel        $s0, $at, L_150264E8
    if (ctx->r16 != ctx->r1) {
        // 0x150264B4: addiu       $at, $zero, 0x7F
        ctx->r1 = ADD32(0, 0X7F);
            goto L_150264E8;
    }
    goto skip_83;
    // 0x150264B4: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    skip_83:
    // 0x150264B8: lw          $s1, 0x16C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X16C);
    // 0x150264BC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150264C0: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x150264C4: beq         $s1, $zero, L_150265B0
    if (ctx->r17 == 0) {
        // 0x150264C8: subu        $t9, $s1, $v0
        ctx->r25 = SUB32(ctx->r17, ctx->r2);
            goto L_150265B0;
    }
    // 0x150264C8: subu        $t9, $s1, $v0
    ctx->r25 = SUB32(ctx->r17, ctx->r2);
    // 0x150264CC: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x150264D0: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x150264D4: mflo        $t5
    ctx->r13 = lo;
    // 0x150264D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150264DC: b           L_150265B0
    // 0x150264E0: sb          $t5, 0x18D0($at)
    MEM_B(0X18D0, ctx->r1) = ctx->r13;
        goto L_150265B0;
    // 0x150264E0: sb          $t5, 0x18D0($at)
    MEM_B(0X18D0, ctx->r1) = ctx->r13;
    // 0x150264E4: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
L_150264E8:
    // 0x150264E8: bne         $s0, $at, L_150264FC
    if (ctx->r16 != ctx->r1) {
        // 0x150264EC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_150264FC;
    }
    // 0x150264EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150264F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150264F4: b           L_150265B0
    // 0x150264F8: sb          $a2, -0x4154($at)
    MEM_B(-0X4154, ctx->r1) = ctx->r6;
        goto L_150265B0;
    // 0x150264F8: sb          $a2, -0x4154($at)
    MEM_B(-0X4154, ctx->r1) = ctx->r6;
L_150264FC:
    // 0x150264FC: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x15026500: bnel        $s0, $at, L_1502651C
    if (ctx->r16 != ctx->r1) {
        // 0x15026504: addiu       $at, $zero, 0x81
        ctx->r1 = ADD32(0, 0X81);
            goto L_1502651C;
    }
    goto skip_84;
    // 0x15026504: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    skip_84:
    // 0x15026508: lb          $t6, 0x4($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X4);
    // 0x1502650C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15026510: b           L_150265B0
    // 0x15026514: sb          $t6, -0x1613($at)
    MEM_B(-0X1613, ctx->r1) = ctx->r14;
        goto L_150265B0;
    // 0x15026514: sb          $t6, -0x1613($at)
    MEM_B(-0X1613, ctx->r1) = ctx->r14;
    // 0x15026518: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
L_1502651C:
    // 0x1502651C: bnel        $s0, $at, L_15026554
    if (ctx->r16 != ctx->r1) {
        // 0x15026520: addiu       $at, $zero, 0x82
        ctx->r1 = ADD32(0, 0X82);
            goto L_15026554;
    }
    goto skip_85;
    // 0x15026520: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    skip_85:
    // 0x15026524: lb          $a0, 0x4($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X4);
    // 0x15026528: xori        $t8, $a0, 0x1
    ctx->r24 = ctx->r4 ^ 0X1;
    // 0x1502652C: jal         0x15093818
    // 0x15026530: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_15093818(rdram, ctx);
        goto after_81;
    // 0x15026530: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_81:
    // 0x15026534: lh          $t7, 0x6($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X6);
    // 0x15026538: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1502653C: multu       $t7, $s1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15026540: mflo        $t9
    ctx->r25 = lo;
    // 0x15026544: sw          $t9, 0x2450($at)
    MEM_W(0X2450, ctx->r1) = ctx->r25;
    // 0x15026548: b           L_150265B4
    // 0x1502654C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150265B4;
    // 0x1502654C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15026550: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
L_15026554:
    // 0x15026554: bnel        $s0, $at, L_15026588
    if (ctx->r16 != ctx->r1) {
        // 0x15026558: addiu       $at, $zero, 0x83
        ctx->r1 = ADD32(0, 0X83);
            goto L_15026588;
    }
    goto skip_86;
    // 0x15026558: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    skip_86:
    // 0x1502655C: lb          $t5, 0x4($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X4);
    // 0x15026560: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15026564: addiu       $v0, $v0, 0x3C9D
    ctx->r2 = ADD32(ctx->r2, 0X3C9D);
    // 0x15026568: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x1502656C: slti        $at, $t6, 0x65
    ctx->r1 = SIGNED(ctx->r14) < 0X65 ? 1 : 0;
    // 0x15026570: bne         $at, $zero, L_150265B0
    if (ctx->r1 != 0) {
        // 0x15026574: sb          $t5, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r13;
            goto L_150265B0;
    }
    // 0x15026574: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x15026578: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x1502657C: b           L_150265B0
    // 0x15026580: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
        goto L_150265B0;
    // 0x15026580: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x15026584: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
L_15026588:
    // 0x15026588: bne         $s0, $at, L_150265A0
    if (ctx->r16 != ctx->r1) {
        // 0x1502658C: nop
    
            goto L_150265A0;
    }
    // 0x1502658C: nop

    // 0x15026590: lh          $t7, 0x6($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X6);
    // 0x15026594: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15026598: b           L_150265B0
    // 0x1502659C: sh          $t7, 0x3C9E($at)
    MEM_H(0X3C9E, ctx->r1) = ctx->r15;
        goto L_150265B0;
    // 0x1502659C: sh          $t7, 0x3C9E($at)
    MEM_H(0X3C9E, ctx->r1) = ctx->r15;
L_150265A0:
    // 0x150265A0: b           L_150265B4
    // 0x150265A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150265B4;
    // 0x150265A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150265A8:
    // 0x150265A8: b           L_150265B4
    // 0x150265AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150265B4;
    // 0x150265AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150265B0:
    // 0x150265B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150265B4:
    // 0x150265B4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x150265B8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x150265BC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x150265C0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x150265C4: jr          $ra
    // 0x150265C8: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
    return;
    return;
    // 0x150265C8: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
;}
RECOMP_FUNC void func_151B222C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B222C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151B2230: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151B2234: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x151B2238: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151B223C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151B2240: addiu       $s1, $a0, 0x28
    ctx->r17 = ADD32(ctx->r4, 0X28);
L_151B2244:
    // 0x151B2244: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x151B2248: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x151B224C: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    // 0x151B2250: beql        $a0, $zero, L_151B2264
    if (ctx->r4 == 0) {
        // 0x151B2254: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_151B2264;
    }
    goto skip_0;
    // 0x151B2254: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x151B2258: jal         0x1516972C
    // 0x151B225C: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151B225C: nop

    after_0:
    // 0x151B2260: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_151B2264:
    // 0x151B2264: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x151B2268: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x151B226C: bne         $at, $zero, L_151B2244
    if (ctx->r1 != 0) {
        // 0x151B2270: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_151B2244;
    }
    // 0x151B2270: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x151B2274: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x151B2278: beql        $a0, $zero, L_151B228C
    if (ctx->r4 == 0) {
        // 0x151B227C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151B228C;
    }
    goto skip_1;
    // 0x151B227C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x151B2280: jal         0x1516972C
    // 0x151B2284: nop

    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x151B2284: nop

    after_1:
    // 0x151B2288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151B228C:
    // 0x151B228C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x151B2290: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x151B2294: jr          $ra
    // 0x151B2298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151B2298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_15185DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15185DD4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15185DD8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x15185DDC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15185DE0: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x15185DE4: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x15185DE8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15185DEC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x15185DF0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x15185DF4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x15185DF8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15185DFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15185E00: sll         $t6, $s6, 2
    ctx->r14 = S32(ctx->r22 << 2);
    // 0x15185E04: addu        $t6, $t6, $s6
    ctx->r14 = ADD32(ctx->r14, ctx->r22);
    // 0x15185E08: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x15185E0C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15185E10: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x15185E14: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x15185E18: addu        $s2, $t6, $a0
    ctx->r18 = ADD32(ctx->r14, ctx->r4);
    // 0x15185E1C: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x15185E20: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x15185E24: addiu       $s2, $s2, -0x14
    ctx->r18 = ADD32(ctx->r18, -0X14);
    // 0x15185E28: lw          $s5, -0x2B68($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X2B68);
    // 0x15185E2C: lw          $s3, -0x2B40($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X2B40);
    // 0x15185E30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15185E34: blez        $s6, L_15185EF8
    if (SIGNED(ctx->r22) <= 0) {
        // 0x15185E38: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_15185EF8;
    }
    // 0x15185E38: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_15185E3C:
    // 0x15185E3C: jalr        $s3
    // 0x15185E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_0;
    // 0x15185E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x15185E44: beq         $v0, $zero, L_15185EC8
    if (ctx->r2 == 0) {
        // 0x15185E48: nop
    
            goto L_15185EC8;
    }
    // 0x15185E48: nop

    // 0x15185E4C: jalr        $s3
    // 0x15185E50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_1;
    // 0x15185E50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x15185E54: beq         $v0, $zero, L_15185E8C
    if (ctx->r2 == 0) {
        // 0x15185E58: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_15185E8C;
    }
    // 0x15185E58: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15185E5C: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x15185E60: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x15185E64: sw          $at, -0x14($s1)
    MEM_W(-0X14, ctx->r17) = ctx->r1;
    // 0x15185E68: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x15185E6C: sw          $t8, -0x10($s1)
    MEM_W(-0X10, ctx->r17) = ctx->r24;
    // 0x15185E70: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x15185E74: sw          $at, -0xC($s1)
    MEM_W(-0XC, ctx->r17) = ctx->r1;
    // 0x15185E78: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x15185E7C: sw          $t8, -0x8($s1)
    MEM_W(-0X8, ctx->r17) = ctx->r24;
    // 0x15185E80: lw          $at, 0x10($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X10);
    // 0x15185E84: b           L_15185EE8
    // 0x15185E88: sw          $at, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r1;
        goto L_15185EE8;
    // 0x15185E88: sw          $at, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r1;
L_15185E8C:
    // 0x15185E8C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15185E90: jalr        $s5
    // 0x15185E94: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_2;
    // 0x15185E94: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x15185E98: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x15185E9C: addiu       $s1, $v0, 0x14
    ctx->r17 = ADD32(ctx->r2, 0X14);
    // 0x15185EA0: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x15185EA4: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x15185EA8: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x15185EAC: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x15185EB0: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x15185EB4: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x15185EB8: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
    // 0x15185EBC: lw          $at, 0x10($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X10);
    // 0x15185EC0: b           L_15185EE8
    // 0x15185EC4: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
        goto L_15185EE8;
    // 0x15185EC4: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
L_15185EC8:
    // 0x15185EC8: jalr        $s3
    // 0x15185ECC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_3;
    // 0x15185ECC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x15185ED0: beq         $v0, $zero, L_15185EE8
    if (ctx->r2 == 0) {
        // 0x15185ED4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_15185EE8;
    }
    // 0x15185ED4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15185ED8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15185EDC: jalr        $s5
    // 0x15185EE0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_4;
    // 0x15185EE0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x15185EE4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_15185EE8:
    // 0x15185EE8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x15185EEC: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x15185EF0: bne         $s4, $s6, L_15185E3C
    if (ctx->r20 != ctx->r22) {
        // 0x15185EF4: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_15185E3C;
    }
    // 0x15185EF4: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_15185EF8:
    // 0x15185EF8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x15185EFC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15185F00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15185F04: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15185F08: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15185F0C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15185F10: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15185F14: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15185F18: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15185F1C: jr          $ra
    // 0x15185F20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x15185F20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_15134070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15134070: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x15134074: slti        $at, $v0, 0x17
    ctx->r1 = SIGNED(ctx->r2) < 0X17 ? 1 : 0;
    // 0x15134078: bne         $at, $zero, L_151340A0
    if (ctx->r1 != 0) {
        // 0x1513407C: addiu       $t6, $v0, -0x34
        ctx->r14 = ADD32(ctx->r2, -0X34);
            goto L_151340A0;
    }
    // 0x1513407C: addiu       $t6, $v0, -0x34
    ctx->r14 = ADD32(ctx->r2, -0X34);
    // 0x15134080: sltiu       $at, $t6, 0x81
    ctx->r1 = ctx->r14 < 0X81 ? 1 : 0;
    // 0x15134084: beq         $at, $zero, L_15134160
    if (ctx->r1 == 0) {
        // 0x15134088: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_15134160;
    }
    // 0x15134088: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1513408C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15134090: addu        $at, $at, $t6
    gpr jr_addend_15134098 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15134094: lw          $t6, 0x4350($at)
    ctx->r14 = ADD32(ctx->r1, 0X4350);
    // 0x15134098: jr          $t6
    // 0x1513409C: nop

    switch (jr_addend_15134098 >> 2) {
        case 0: goto L_151340F8; break;
        case 1: goto L_15134160; break;
        case 2: goto L_15134160; break;
        case 3: goto L_15134160; break;
        case 4: goto L_151340E8; break;
        case 5: goto L_15134160; break;
        case 6: goto L_15134160; break;
        case 7: goto L_15134108; break;
        case 8: goto L_15134160; break;
        case 9: goto L_15134160; break;
        case 10: goto L_15134160; break;
        case 11: goto L_15134160; break;
        case 12: goto L_15134160; break;
        case 13: goto L_15134160; break;
        case 14: goto L_15134160; break;
        case 15: goto L_15134160; break;
        case 16: goto L_15134160; break;
        case 17: goto L_15134160; break;
        case 18: goto L_15134160; break;
        case 19: goto L_15134100; break;
        case 20: goto L_15134160; break;
        case 21: goto L_15134160; break;
        case 22: goto L_15134160; break;
        case 23: goto L_15134160; break;
        case 24: goto L_15134160; break;
        case 25: goto L_15134160; break;
        case 26: goto L_15134160; break;
        case 27: goto L_15134160; break;
        case 28: goto L_15134160; break;
        case 29: goto L_15134160; break;
        case 30: goto L_15134160; break;
        case 31: goto L_15134160; break;
        case 32: goto L_15134160; break;
        case 33: goto L_15134160; break;
        case 34: goto L_15134160; break;
        case 35: goto L_15134160; break;
        case 36: goto L_15134118; break;
        case 37: goto L_15134160; break;
        case 38: goto L_15134110; break;
        case 39: goto L_15134118; break;
        case 40: goto L_15134160; break;
        case 41: goto L_15134160; break;
        case 42: goto L_15134160; break;
        case 43: goto L_15134110; break;
        case 44: goto L_15134160; break;
        case 45: goto L_15134160; break;
        case 46: goto L_15134160; break;
        case 47: goto L_15134160; break;
        case 48: goto L_15134160; break;
        case 49: goto L_15134160; break;
        case 50: goto L_15134160; break;
        case 51: goto L_15134160; break;
        case 52: goto L_15134160; break;
        case 53: goto L_15134160; break;
        case 54: goto L_15134160; break;
        case 55: goto L_15134160; break;
        case 56: goto L_15134160; break;
        case 57: goto L_15134160; break;
        case 58: goto L_15134160; break;
        case 59: goto L_15134160; break;
        case 60: goto L_151340D8; break;
        case 61: goto L_15134160; break;
        case 62: goto L_15134160; break;
        case 63: goto L_15134160; break;
        case 64: goto L_15134110; break;
        case 65: goto L_15134110; break;
        case 66: goto L_15134160; break;
        case 67: goto L_15134160; break;
        case 68: goto L_15134160; break;
        case 69: goto L_15134160; break;
        case 70: goto L_15134110; break;
        case 71: goto L_15134160; break;
        case 72: goto L_15134160; break;
        case 73: goto L_15134160; break;
        case 74: goto L_15134160; break;
        case 75: goto L_15134160; break;
        case 76: goto L_15134118; break;
        case 77: goto L_15134160; break;
        case 78: goto L_15134160; break;
        case 79: goto L_15134160; break;
        case 80: goto L_15134160; break;
        case 81: goto L_15134160; break;
        case 82: goto L_15134160; break;
        case 83: goto L_151340C0; break;
        case 84: goto L_15134120; break;
        case 85: goto L_15134160; break;
        case 86: goto L_15134160; break;
        case 87: goto L_15134160; break;
        case 88: goto L_15134160; break;
        case 89: goto L_15134160; break;
        case 90: goto L_15134160; break;
        case 91: goto L_15134160; break;
        case 92: goto L_15134120; break;
        case 93: goto L_151340E8; break;
        case 94: goto L_15134160; break;
        case 95: goto L_15134160; break;
        case 96: goto L_15134160; break;
        case 97: goto L_15134160; break;
        case 98: goto L_15134138; break;
        case 99: goto L_15134160; break;
        case 100: goto L_151340F0; break;
        case 101: goto L_15134160; break;
        case 102: goto L_15134150; break;
        case 103: goto L_15134160; break;
        case 104: goto L_15134128; break;
        case 105: goto L_15134130; break;
        case 106: goto L_15134160; break;
        case 107: goto L_15134148; break;
        case 108: goto L_15134140; break;
        case 109: goto L_15134160; break;
        case 110: goto L_15134160; break;
        case 111: goto L_15134160; break;
        case 112: goto L_15134160; break;
        case 113: goto L_15134160; break;
        case 114: goto L_15134160; break;
        case 115: goto L_15134160; break;
        case 116: goto L_15134160; break;
        case 117: goto L_15134160; break;
        case 118: goto L_15134160; break;
        case 119: goto L_151340E0; break;
        case 120: goto L_15134160; break;
        case 121: goto L_15134160; break;
        case 122: goto L_15134160; break;
        case 123: goto L_15134160; break;
        case 124: goto L_151340C0; break;
        case 125: goto L_151340C8; break;
        case 126: goto L_151340D8; break;
        case 127: goto L_15134160; break;
        case 128: goto L_151340D0; break;
        default: switch_error(__func__, 0x15134098, 0x800A4350);
    }
    // 0x1513409C: nop

L_151340A0:
    // 0x151340A0: sltiu       $at, $v0, 0x17
    ctx->r1 = ctx->r2 < 0X17 ? 1 : 0;
    // 0x151340A4: beq         $at, $zero, L_15134160
    if (ctx->r1 == 0) {
        // 0x151340A8: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_15134160;
    }
    // 0x151340A8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x151340AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151340B0: addu        $at, $at, $t7
    gpr jr_addend_151340B8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x151340B4: lw          $t7, 0x4554($at)
    ctx->r15 = ADD32(ctx->r1, 0X4554);
    // 0x151340B8: jr          $t7
    // 0x151340BC: nop

    switch (jr_addend_151340B8 >> 2) {
        case 0: goto L_15134158; break;
        case 1: goto L_15134158; break;
        case 2: goto L_15134158; break;
        case 3: goto L_15134158; break;
        case 4: goto L_15134158; break;
        case 5: goto L_15134160; break;
        case 6: goto L_15134160; break;
        case 7: goto L_15134160; break;
        case 8: goto L_15134160; break;
        case 9: goto L_15134160; break;
        case 10: goto L_15134160; break;
        case 11: goto L_15134160; break;
        case 12: goto L_15134160; break;
        case 13: goto L_15134160; break;
        case 14: goto L_15134160; break;
        case 15: goto L_15134160; break;
        case 16: goto L_151340E8; break;
        case 17: goto L_15134108; break;
        case 18: goto L_15134160; break;
        case 19: goto L_15134160; break;
        case 20: goto L_15134108; break;
        case 21: goto L_15134160; break;
        case 22: goto L_15134120; break;
        default: switch_error(__func__, 0x151340B8, 0x800A4554);
    }
    // 0x151340BC: nop

L_151340C0:
    // 0x151340C0: jr          $ra
    // 0x151340C4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    return;
    return;
    // 0x151340C4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_151340C8:
    // 0x151340C8: jr          $ra
    // 0x151340CC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    return;
    return;
    // 0x151340CC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_151340D0:
    // 0x151340D0: jr          $ra
    // 0x151340D4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    return;
    // 0x151340D4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_151340D8:
    // 0x151340D8: jr          $ra
    // 0x151340DC: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    return;
    return;
    // 0x151340DC: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
L_151340E0:
    // 0x151340E0: jr          $ra
    // 0x151340E4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    return;
    return;
    // 0x151340E4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_151340E8:
    // 0x151340E8: jr          $ra
    // 0x151340EC: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    return;
    return;
    // 0x151340EC: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_151340F0:
    // 0x151340F0: jr          $ra
    // 0x151340F4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    return;
    return;
    // 0x151340F4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_151340F8:
    // 0x151340F8: jr          $ra
    // 0x151340FC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    return;
    return;
    // 0x151340FC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_15134100:
    // 0x15134100: jr          $ra
    // 0x15134104: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    return;
    return;
    // 0x15134104: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_15134108:
    // 0x15134108: jr          $ra
    // 0x1513410C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x1513410C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15134110:
    // 0x15134110: jr          $ra
    // 0x15134114: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    return;
    // 0x15134114: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_15134118:
    // 0x15134118: jr          $ra
    // 0x1513411C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    return;
    // 0x1513411C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_15134120:
    // 0x15134120: jr          $ra
    // 0x15134124: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    return;
    // 0x15134124: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_15134128:
    // 0x15134128: jr          $ra
    // 0x1513412C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    return;
    // 0x1513412C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_15134130:
    // 0x15134130: jr          $ra
    // 0x15134134: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    return;
    // 0x15134134: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_15134138:
    // 0x15134138: jr          $ra
    // 0x1513413C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    return;
    // 0x1513413C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_15134140:
    // 0x15134140: jr          $ra
    // 0x15134144: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    return;
    // 0x15134144: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_15134148:
    // 0x15134148: jr          $ra
    // 0x1513414C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    return;
    return;
    // 0x1513414C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_15134150:
    // 0x15134150: jr          $ra
    // 0x15134154: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    return;
    return;
    // 0x15134154: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_15134158:
    // 0x15134158: jr          $ra
    // 0x1513415C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1513415C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15134160:
    // 0x15134160: addiu       $v0, $zero, 0x63
    ctx->r2 = ADD32(0, 0X63);
    // 0x15134164: jr          $ra
    // 0x15134168: nop

    return;
    return;
    // 0x15134168: nop

;}
RECOMP_FUNC void func_15071F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071F54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15071F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15071F5C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15071F60: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15071F64: lw          $a1, 0x1580($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1580);
    // 0x15071F68: jal         0x1507C8E0
    // 0x15071F6C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_1507C8E0(rdram, ctx);
        goto after_0;
    // 0x15071F6C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x15071F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15071F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15071F78: jr          $ra
    // 0x15071F7C: nop

    return;
    return;
    // 0x15071F7C: nop

;}
RECOMP_FUNC void func_150C5DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C5DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C5DC8: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x150C5DCC: beq         $t6, $zero, L_150C5DEC
    if (ctx->r14 == 0) {
        // 0x150C5DD0: nop
    
            goto L_150C5DEC;
    }
    // 0x150C5DD0: nop

    // 0x150C5DD4: lw          $v0, 0x58($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X58);
    // 0x150C5DD8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150C5DDC: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x150C5DE0: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
    // 0x150C5DE4: b           L_150C5E00
    // 0x150C5DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150C5E00;
    // 0x150C5DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C5DEC:
    // 0x150C5DEC: jal         0x150C6460
    // 0x150C5DF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150C6460(rdram, ctx);
        goto after_0;
    // 0x150C5DF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150C5DF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150C5DF8: sw          $v0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r2;
    // 0x150C5DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C5E00:
    // 0x150C5E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C5E04: jr          $ra
    // 0x150C5E08: nop

    return;
    return;
    // 0x150C5E08: nop

;}
RECOMP_FUNC void func_150FCF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FCF1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150FCF20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150FCF24: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150FCF28: lw          $v0, -0x6560($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6560);
    // 0x150FCF2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150FCF30: bnel        $v0, $zero, L_150FCF48
    if (ctx->r2 != 0) {
        // 0x150FCF34: lh          $t6, 0x0($v0)
        ctx->r14 = MEM_H(ctx->r2, 0X0);
            goto L_150FCF48;
    }
    goto skip_0;
    // 0x150FCF34: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    skip_0:
    // 0x150FCF38: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150FCF3C: b           L_150FCFA4
    // 0x150FCF40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_150FCFA4;
    // 0x150FCF40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150FCF44: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
L_150FCF48:
    // 0x150FCF48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FCF4C: lui         $a2, 0x44FA
    ctx->r6 = S32(0X44FA << 16);
    // 0x150FCF50: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x150FCF54: lui         $a3, 0x460C
    ctx->r7 = S32(0X460C << 16);
    // 0x150FCF58: ori         $a3, $a3, 0xB400
    ctx->r7 = ctx->r7 | 0XB400;
    // 0x150FCF5C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150FCF60: lwc1        $f4, 0x1F2C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1F2C);
    // 0x150FCF64: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x150FCF68: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x150FCF6C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x150FCF70: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x150FCF74: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x150FCF78: nop

    // 0x150FCF7C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150FCF80: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x150FCF84: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x150FCF88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150FCF8C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x150FCF90: nop

    // 0x150FCF94: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150FCF98: jal         0x15165BB0
    // 0x150FCF9C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_15165BB0(rdram, ctx);
        goto after_0;
    // 0x150FCF9C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x150FCFA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_150FCFA4:
    // 0x150FCFA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150FCFA8: jr          $ra
    // 0x150FCFAC: nop

    return;
    return;
    // 0x150FCFAC: nop

;}
RECOMP_FUNC void func_10012E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10012E04: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x10012E08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10012E0C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x10012E10: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x10012E14: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x10012E18: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x10012E1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x10012E20: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x10012E24: lbu         $t6, 0x47($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X47);
    // 0x10012E28: bne         $t6, $zero, L_10012E38
    if (ctx->r14 != 0) {
        // 0x10012E2C: nop
    
            goto L_10012E38;
    }
    // 0x10012E2C: nop

    // 0x10012E30: b           L_10012F80
    // 0x10012E34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_10012F80;
    // 0x10012E34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_10012E38:
    // 0x10012E38: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x10012E3C: lw          $t7, 0x2800($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2800);
    // 0x10012E40: beq         $t7, $zero, L_10012F70
    if (ctx->r15 == 0) {
        // 0x10012E44: nop
    
            goto L_10012F70;
    }
    // 0x10012E44: nop

    // 0x10012E48: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x10012E4C: lw          $t8, 0x2800($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2800);
    // 0x10012E50: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x10012E54: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x10012E58: lw          $t9, 0x2800($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2800);
    // 0x10012E5C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10012E60: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x10012E64: sw          $t0, 0x2800($at)
    MEM_W(0X2800, ctx->r1) = ctx->r8;
    // 0x10012E68: lbu         $t1, 0x3B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3B);
    // 0x10012E6C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x10012E70: sb          $t1, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r9;
    // 0x10012E74: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x10012E78: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x10012E7C: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x10012E80: lbu         $t5, 0x47($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X47);
    // 0x10012E84: sll         $t6, $t5, 14
    ctx->r14 = S32(ctx->r13 << 14);
    // 0x10012E88: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x10012E8C: lbu         $s0, 0x3B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X3B);
    // 0x10012E90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x10012E94: beq         $s0, $at, L_10012EB0
    if (ctx->r16 == ctx->r1) {
        // 0x10012E98: nop
    
            goto L_10012EB0;
    }
    // 0x10012E98: nop

    // 0x10012E9C: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x10012EA0: beq         $s0, $at, L_10012F24
    if (ctx->r16 == ctx->r1) {
        // 0x10012EA4: nop
    
            goto L_10012F24;
    }
    // 0x10012EA4: nop

    // 0x10012EA8: b           L_10012F68
    // 0x10012EAC: nop

        goto L_10012F68;
    // 0x10012EAC: nop

L_10012EB0:
    // 0x10012EB0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x10012EB4: sh          $zero, 0x24($t7)
    MEM_H(0X24, ctx->r15) = 0;
    // 0x10012EB8: lbu         $t8, 0x3F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3F);
    // 0x10012EBC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x10012EC0: addiu       $t9, $zero, 0x103
    ctx->r25 = ADD32(0, 0X103);
    // 0x10012EC4: subu        $t0, $t9, $t8
    ctx->r8 = SUB32(ctx->r25, ctx->r24);
    // 0x10012EC8: sh          $t0, 0x22($t1)
    MEM_H(0X22, ctx->r9) = ctx->r8;
    // 0x10012ECC: lbu         $t2, 0x43($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X43);
    // 0x10012ED0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x10012ED4: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x10012ED8: sb          $t3, 0x28($t4)
    MEM_B(0X28, ctx->r12) = ctx->r11;
    // 0x10012EDC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x10012EE0: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x10012EE4: lbu         $t6, 0x28($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X28);
    // 0x10012EE8: subu        $t9, $t7, $t6
    ctx->r25 = SUB32(ctx->r15, ctx->r14);
    // 0x10012EEC: sb          $t9, 0x29($t5)
    MEM_B(0X29, ctx->r13) = ctx->r25;
    // 0x10012EF0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x10012EF4: lbu         $t0, 0x29($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X29);
    // 0x10012EF8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x10012EFC: bgez        $t0, L_10012F14
    if (SIGNED(ctx->r8) >= 0) {
        // 0x10012F00: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_10012F14;
    }
    // 0x10012F00: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x10012F04: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x10012F08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x10012F0C: nop

    // 0x10012F10: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_10012F14:
    // 0x10012F14: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x10012F18: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
    // 0x10012F1C: b           L_10012F70
    // 0x10012F20: nop

        goto L_10012F70;
    // 0x10012F20: nop

L_10012F24:
    // 0x10012F24: jal         0x10012D80
    // 0x10012F28: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
    func_10012D80(rdram, ctx);
        goto after_0;
    // 0x10012F28: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
    after_0:
    // 0x10012F2C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x10012F30: swc1        $f0, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f0.u32l;
    // 0x10012F34: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x10012F38: sh          $zero, 0x24($t3)
    MEM_H(0X24, ctx->r11) = 0;
    // 0x10012F3C: lbu         $t4, 0x3F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X3F);
    // 0x10012F40: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x10012F44: addiu       $t7, $zero, 0x103
    ctx->r15 = ADD32(0, 0X103);
    // 0x10012F48: subu        $t6, $t7, $t4
    ctx->r14 = SUB32(ctx->r15, ctx->r12);
    // 0x10012F4C: sh          $t6, 0x22($t9)
    MEM_H(0X22, ctx->r25) = ctx->r14;
    // 0x10012F50: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x10012F54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x10012F58: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x10012F5C: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
    // 0x10012F60: b           L_10012F70
    // 0x10012F64: nop

        goto L_10012F70;
    // 0x10012F64: nop

L_10012F68:
    // 0x10012F68: b           L_10012F70
    // 0x10012F6C: nop

        goto L_10012F70;
    // 0x10012F6C: nop

L_10012F70:
    // 0x10012F70: b           L_10012F80
    // 0x10012F74: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
        goto L_10012F80;
    // 0x10012F74: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x10012F78: b           L_10012F80
    // 0x10012F7C: nop

        goto L_10012F80;
    // 0x10012F7C: nop

L_10012F80:
    // 0x10012F80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x10012F84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x10012F88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x10012F8C: jr          $ra
    // 0x10012F90: nop

    return;
    return;
    // 0x10012F90: nop

;}
RECOMP_FUNC void func_15040CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040CC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15040CCC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15040CD0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15040CD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15040CD8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15040CDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15040CE0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15040CE4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_15040CE8:
    // 0x15040CE8: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x15040CEC: bnel        $at, $zero, L_15040CE8
    if (ctx->r1 != 0) {
        // 0x15040CF0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15040CE8;
    }
    goto skip_0;
    // 0x15040CF0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x15040CF4: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x15040CF8: addiu       $s1, $s1, 0x44B0
    ctx->r17 = ADD32(ctx->r17, 0X44B0);
    // 0x15040CFC: addiu       $s0, $zero, -0x14
    ctx->r16 = ADD32(0, -0X14);
    // 0x15040D00: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
L_15040D04:
    // 0x15040D04: addu        $a0, $t6, $s2
    ctx->r4 = ADD32(ctx->r14, ctx->r18);
    // 0x15040D08: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x15040D0C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15040D10: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x15040D14: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x15040D18: jalr        $t9
    // 0x15040D1C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15040D1C: nop

    after_0:
    // 0x15040D20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15040D24: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x15040D28: bnel        $at, $zero, L_15040D04
    if (ctx->r1 != 0) {
        // 0x15040D2C: sll         $t6, $s0, 3
        ctx->r14 = S32(ctx->r16 << 3);
            goto L_15040D04;
    }
    goto skip_1;
    // 0x15040D2C: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    skip_1:
    // 0x15040D30: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x15040D34: lw          $a0, 0x48B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X48B0);
    // 0x15040D38: beql        $a0, $zero, L_15040D4C
    if (ctx->r4 == 0) {
        // 0x15040D3C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15040D4C;
    }
    goto skip_2;
    // 0x15040D3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x15040D40: jal         0x1500390C
    // 0x15040D44: nop

    func_1500390C(rdram, ctx);
        goto after_1;
    // 0x15040D44: nop

    after_1:
    // 0x15040D48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15040D4C:
    // 0x15040D4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15040D50: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15040D54: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15040D58: jr          $ra
    // 0x15040D5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x15040D5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1505841C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505841C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15058420: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x15058424: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15058428: lbu         $v0, 0x246($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X246);
    // 0x1505842C: lbu         $t8, 0x249($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X249);
    // 0x15058430: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15058434: andi        $t6, $v0, 0x1F
    ctx->r14 = ctx->r2 & 0X1F;
    // 0x15058438: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x1505843C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15058440: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15058444: lwc1        $f8, -0x6B98($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6B98);
    // 0x15058448: andi        $t0, $v0, 0x80
    ctx->r8 = ctx->r2 & 0X80;
    // 0x1505844C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15058450: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15058454: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15058458: bnel        $t0, $zero, L_150584F8
    if (ctx->r8 != 0) {
        // 0x1505845C: lbu         $t4, 0x223($a0)
        ctx->r12 = MEM_BU(ctx->r4, 0X223);
            goto L_150584F8;
    }
    goto skip_0;
    // 0x1505845C: lbu         $t4, 0x223($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X223);
    skip_0:
    // 0x15058460: lwc1        $f12, 0x3C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15058464: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15058468: nop

    // 0x1505846C: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x15058470: nop

    // 0x15058474: bc1t        L_150584A8
    if (c1cs) {
        // 0x15058478: nop
    
            goto L_150584A8;
    }
    // 0x15058478: nop

    // 0x1505847C: lhu         $t1, 0x22C($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X22C);
    // 0x15058480: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15058484: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x15058488: beql        $t2, $zero, L_150584B4
    if (ctx->r10 == 0) {
        // 0x1505848C: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_150584B4;
    }
    goto skip_1;
    // 0x1505848C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_1:
    // 0x15058490: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15058494: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x15058498: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x1505849C: nop

    // 0x150584A0: bc1fl       L_150584B4
    if (!c1cs) {
        // 0x150584A4: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_150584B4;
    }
    goto skip_2;
    // 0x150584A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_2:
L_150584A8:
    // 0x150584A8: b           L_150584F4
    // 0x150584AC: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_150584F4;
    // 0x150584AC: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x150584B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_150584B4:
    // 0x150584B4: lwc1        $f6, 0x14C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14C);
    // 0x150584B8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150584BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150584C0: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150584C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150584C8: lwc1        $f18, -0x6B94($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6B94);
    // 0x150584CC: andi        $t3, $v0, 0x20
    ctx->r11 = ctx->r2 & 0X20;
    // 0x150584D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150584D4: mul.s       $f2, $f12, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x150584D8: nop

    // 0x150584DC: mul.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150584E0: div.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150584E4: bne         $t3, $zero, L_150584F4
    if (ctx->r11 != 0) {
        // 0x150584E8: add.s       $f0, $f16, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
            goto L_150584F4;
    }
    // 0x150584E8: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150584EC: lwc1        $f4, -0x6B90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6B90);
    // 0x150584F0: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_150584F4:
    // 0x150584F4: lbu         $t4, 0x223($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X223);
L_150584F8:
    // 0x150584F8: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x150584FC: bnel        $t4, $at, L_1505852C
    if (ctx->r12 != ctx->r1) {
        // 0x15058500: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_1505852C;
    }
    goto skip_3;
    // 0x15058500: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    skip_3:
    // 0x15058504: lbu         $t5, 0x250($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X250);
    // 0x15058508: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505850C: lwc1        $f10, -0x6B8C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6B8C);
    // 0x15058510: andi        $t6, $t5, 0x7F
    ctx->r14 = ctx->r13 & 0X7F;
    // 0x15058514: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15058518: nop

    // 0x1505851C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15058520: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15058524: nop

    // 0x15058528: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
L_1505852C:
    // 0x1505852C: bnel        $v0, $at, L_15058540
    if (ctx->r2 != ctx->r1) {
        // 0x15058530: lb          $t7, 0x1D0($a0)
        ctx->r15 = MEM_B(ctx->r4, 0X1D0);
            goto L_15058540;
    }
    goto skip_4;
    // 0x15058530: lb          $t7, 0x1D0($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X1D0);
    skip_4:
    // 0x15058534: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15058538: nop

    // 0x1505853C: lb          $t7, 0x1D0($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X1D0);
L_15058540:
    // 0x15058540: lhu         $a1, 0x244($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X244);
    // 0x15058544: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x15058548: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x1505854C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15058550: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x15058554: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15058558: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1505855C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15058560: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x15058564: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x15058568: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x1505856C: jal         0x1505E650
    // 0x15058570: nop

    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x15058570: nop

    after_0:
    // 0x15058574: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x15058578: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1505857C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x15058580: lbu         $t8, 0x246($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X246);
    // 0x15058584: bnel        $t8, $at, L_150585E4
    if (ctx->r24 != ctx->r1) {
        // 0x15058588: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150585E4;
    }
    goto skip_5;
    // 0x15058588: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x1505858C: lbu         $t9, 0x19A0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X19A0);
    // 0x15058590: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x15058594: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15058598: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x1505859C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x150585A0: lw          $t1, 0x18B0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X18B0);
    // 0x150585A4: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x150585A8: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x150585AC: nop

    // 0x150585B0: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150585B4: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x150585B8: nop

    // 0x150585BC: bc1fl       L_150585E4
    if (!c1cs) {
        // 0x150585C0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150585E4;
    }
    goto skip_6;
    // 0x150585C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x150585C4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150585C8: lw          $v0, 0x2D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2D0);
    // 0x150585CC: sub.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x150585D0: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150585D4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150585D8: div.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150585DC: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x150585E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150585E4:
    // 0x150585E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150585E8: jr          $ra
    // 0x150585EC: nop

    return;
    return;
    // 0x150585EC: nop

;}
RECOMP_FUNC void func_15175958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15175958: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x1517595C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x15175960: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15175964: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15175968: lbu         $v0, 0xED($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XED);
    // 0x1517596C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15175970: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15175974: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15175978: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x1517597C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15175980: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15175984: lw          $t7, -0x2180($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2180);
    // 0x15175988: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x1517598C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15175990: beq         $t7, $zero, L_151759A8
    if (ctx->r15 == 0) {
        // 0x15175994: nop
    
            goto L_151759A8;
    }
    // 0x15175994: nop

    // 0x15175998: lw          $t9, -0x2088($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2088);
    // 0x1517599C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x151759A0: bne         $t9, $zero, L_151759B8
    if (ctx->r25 != 0) {
        // 0x151759A4: nop
    
            goto L_151759B8;
    }
    // 0x151759A4: nop

L_151759A8:
    // 0x151759A8: jal         0x1516972C
    // 0x151759AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151759AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x151759B0: b           L_1517684C
    // 0x151759B4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_1517684C;
    // 0x151759B4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_151759B8:
    // 0x151759B8: beq         $v0, $at, L_151759C8
    if (ctx->r2 == ctx->r1) {
        // 0x151759BC: lbu         $v1, 0xF0($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0XF0);
            goto L_151759C8;
    }
    // 0x151759BC: lbu         $v1, 0xF0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF0);
    // 0x151759C0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x151759C4: bne         $v0, $at, L_15175AD8
    if (ctx->r2 != ctx->r1) {
        // 0x151759C8: lui         $t1, 0x800C
        ctx->r9 = S32(0X800C << 16);
            goto L_15175AD8;
    }
L_151759C8:
    // 0x151759C8: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x151759CC: lw          $t1, -0x1610($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1610);
    // 0x151759D0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151759D4: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x151759D8: bnel        $t1, $at, L_15175ADC
    if (ctx->r9 != ctx->r1) {
        // 0x151759DC: lbu         $t3, 0xF1($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XF1);
            goto L_15175ADC;
    }
    goto skip_0;
    // 0x151759DC: lbu         $t3, 0xF1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XF1);
    skip_0:
    // 0x151759E0: lbu         $t2, 0x35EA($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X35EA);
    // 0x151759E4: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x151759E8: beql        $t2, $zero, L_15175ADC
    if (ctx->r10 == 0) {
        // 0x151759EC: lbu         $t3, 0xF1($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XF1);
            goto L_15175ADC;
    }
    goto skip_1;
    // 0x151759EC: lbu         $t3, 0xF1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XF1);
    skip_1:
    // 0x151759F0: lbu         $t3, 0x35E8($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X35E8);
    // 0x151759F4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151759F8: bnel        $t3, $at, L_15175ADC
    if (ctx->r11 != ctx->r1) {
        // 0x151759FC: lbu         $t3, 0xF1($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XF1);
            goto L_15175ADC;
    }
    goto skip_2;
    // 0x151759FC: lbu         $t3, 0xF1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XF1);
    skip_2:
    // 0x15175A00: lh          $t4, 0x92($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X92);
    // 0x15175A04: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15175A08: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15175A0C: andi        $t5, $t4, 0xFFF7
    ctx->r13 = ctx->r12 & 0XFFF7;
    // 0x15175A10: sh          $t5, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r13;
    // 0x15175A14: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x15175A18: beq         $t6, $zero, L_15175A34
    if (ctx->r14 == 0) {
        // 0x15175A1C: nop
    
            goto L_15175A34;
    }
    // 0x15175A1C: nop

    // 0x15175A20: lbu         $t7, 0x35E8($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35E8);
    // 0x15175A24: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15175A28: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15175A2C: beq         $t7, $at, L_15175A44
    if (ctx->r15 == ctx->r1) {
        // 0x15175A30: nop
    
            goto L_15175A44;
    }
    // 0x15175A30: nop

L_15175A34:
    // 0x15175A34: jal         0x1516972C
    // 0x15175A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x15175A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x15175A3C: b           L_1517684C
    // 0x15175A40: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_1517684C;
    // 0x15175A40: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15175A44:
    // 0x15175A44: lw          $t8, 0x35B0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X35B0);
    // 0x15175A48: slti        $at, $t8, 0x3C
    ctx->r1 = SIGNED(ctx->r24) < 0X3C ? 1 : 0;
    // 0x15175A4C: bnel        $at, $zero, L_15175ADC
    if (ctx->r1 != 0) {
        // 0x15175A50: lbu         $t3, 0xF1($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XF1);
            goto L_15175ADC;
    }
    goto skip_3;
    // 0x15175A50: lbu         $t3, 0xF1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XF1);
    skip_3:
    // 0x15175A54: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
    // 0x15175A58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15175A5C: andi        $t9, $v0, 0x200
    ctx->r25 = ctx->r2 & 0X200;
    // 0x15175A60: bne         $t9, $zero, L_15175AD8
    if (ctx->r25 != 0) {
        // 0x15175A64: andi        $t1, $v0, 0xFFB3
        ctx->r9 = ctx->r2 & 0XFFB3;
            goto L_15175AD8;
    }
    // 0x15175A64: andi        $t1, $v0, 0xFFB3
    ctx->r9 = ctx->r2 & 0XFFB3;
    // 0x15175A68: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x15175A6C: sh          $t2, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r10;
    // 0x15175A70: lwc1        $f6, 0x717C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X717C);
    // 0x15175A74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15175A78: lwc1        $f4, 0x98($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X98);
    // 0x15175A7C: lwc1        $f10, 0x7180($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7180);
    // 0x15175A80: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x15175A84: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15175A88: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    // 0x15175A8C: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15175A90: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    // 0x15175A94: jal         0x150484A0
    // 0x15175A98: swc1        $f14, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f14.u32l;
    func_150484A0(rdram, ctx);
        goto after_2;
    // 0x15175A98: swc1        $f14, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f14.u32l;
    after_2:
    // 0x15175A9C: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15175AA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15175AA4: lwc1        $f4, 0x7184($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7184);
    // 0x15175AA8: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15175AAC: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15175AB0: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x15175AB4: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x15175AB8: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15175ABC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15175AC0: swc1        $f6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f6.u32l;
    // 0x15175AC4: lwc1        $f8, 0x7188($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7188);
    // 0x15175AC8: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x15175ACC: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15175AD0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15175AD4: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
L_15175AD8:
    // 0x15175AD8: lbu         $t3, 0xF1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XF1);
L_15175ADC:
    // 0x15175ADC: bne         $t3, $zero, L_15175B64
    if (ctx->r11 != 0) {
        // 0x15175AE0: nop
    
            goto L_15175B64;
    }
    // 0x15175AE0: nop

    // 0x15175AE4: lh          $t4, 0x92($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X92);
    // 0x15175AE8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15175AEC: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x15175AF0: beq         $t5, $zero, L_15175B1C
    if (ctx->r13 == 0) {
        // 0x15175AF4: nop
    
            goto L_15175B1C;
    }
    // 0x15175AF4: nop

    // 0x15175AF8: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
    // 0x15175AFC: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15175B00: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15175B04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15175B08: lbu         $t7, -0x20A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X20A4);
    // 0x15175B0C: bne         $t7, $zero, L_15175B1C
    if (ctx->r15 != 0) {
        // 0x15175B10: nop
    
            goto L_15175B1C;
    }
    // 0x15175B10: nop

    // 0x15175B14: b           L_15175B44
    // 0x15175B18: sb          $t8, 0xF1($s0)
    MEM_B(0XF1, ctx->r16) = ctx->r24;
        goto L_15175B44;
    // 0x15175B18: sb          $t8, 0xF1($s0)
    MEM_B(0XF1, ctx->r16) = ctx->r24;
L_15175B1C:
    // 0x15175B1C: beq         $v1, $at, L_15175B44
    if (ctx->r3 == ctx->r1) {
        // 0x15175B20: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_15175B44;
    }
    // 0x15175B20: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15175B24: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x15175B28: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x15175B2C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x15175B30: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x15175B34: bnel        $at, $zero, L_15175B44
    if (ctx->r1 != 0) {
        // 0x15175B38: sb          $v1, 0xF0($s0)
        MEM_B(0XF0, ctx->r16) = ctx->r3;
            goto L_15175B44;
    }
    goto skip_4;
    // 0x15175B38: sb          $v1, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r3;
    skip_4:
    // 0x15175B3C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x15175B40: sb          $v1, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r3;
L_15175B44:
    // 0x15175B44: lbu         $v0, 0xED($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XED);
    // 0x15175B48: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x15175B4C: addiu       $t3, $t3, -0x2180
    ctx->r11 = ADD32(ctx->r11, -0X2180);
    // 0x15175B50: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x15175B54: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x15175B58: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x15175B5C: b           L_15175BB4
    // 0x15175B60: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
        goto L_15175BB4;
    // 0x15175B60: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
L_15175B64:
    // 0x15175B64: bne         $v1, $zero, L_15175B7C
    if (ctx->r3 != 0) {
        // 0x15175B68: lui         $t4, 0x800C
        ctx->r12 = S32(0X800C << 16);
            goto L_15175B7C;
    }
    // 0x15175B68: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15175B6C: jal         0x1516972C
    // 0x15175B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_3;
    // 0x15175B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x15175B74: b           L_1517684C
    // 0x15175B78: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_1517684C;
    // 0x15175B78: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15175B7C:
    // 0x15175B7C: lw          $t4, -0x161C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X161C);
    // 0x15175B80: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15175B84: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x15175B88: subu        $v1, $v1, $t5
    ctx->r3 = SUB32(ctx->r3, ctx->r13);
    // 0x15175B8C: bgezl       $v1, L_15175B9C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15175B90: lbu         $v0, 0xED($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0XED);
            goto L_15175B9C;
    }
    goto skip_5;
    // 0x15175B90: lbu         $v0, 0xED($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XED);
    skip_5:
    // 0x15175B94: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15175B98: lbu         $v0, 0xED($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XED);
L_15175B9C:
    // 0x15175B9C: addiu       $t7, $t7, -0x2180
    ctx->r15 = ADD32(ctx->r15, -0X2180);
    // 0x15175BA0: sb          $v1, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r3;
    // 0x15175BA4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15175BA8: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x15175BAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15175BB0: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
L_15175BB4:
    // 0x15175BB4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15175BB8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x15175BBC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15175BC0: sw          $a0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r4;
    // 0x15175BC4: sb          $t1, -0x2098($at)
    MEM_B(-0X2098, ctx->r1) = ctx->r9;
    // 0x15175BC8: lhu         $a1, 0xEE($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XEE);
    // 0x15175BCC: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x15175BD0: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x15175BD4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15175BD8: addiu       $t9, $t9, -0x2F50
    ctx->r25 = ADD32(ctx->r25, -0X2F50);
    // 0x15175BDC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x15175BE0: beq         $a1, $zero, L_15175C6C
    if (ctx->r5 == 0) {
        // 0x15175BE4: addu        $t0, $t8, $t9
        ctx->r8 = ADD32(ctx->r24, ctx->r25);
            goto L_15175C6C;
    }
    // 0x15175BE4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x15175BE8: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    // 0x15175BEC: jal         0x1000F3D0
    // 0x15175BF0: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    func_1000F3D0(rdram, ctx);
        goto after_4;
    // 0x15175BF0: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    after_4:
    // 0x15175BF4: beq         $v0, $zero, L_15175C68
    if (ctx->r2 == 0) {
        // 0x15175BF8: lw          $t0, 0x70($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X70);
            goto L_15175C68;
    }
    // 0x15175BF8: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x15175BFC: lhu         $a0, 0xEE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XEE);
    // 0x15175C00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15175C04: lwc1        $f6, 0x98($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X98);
    // 0x15175C08: addiu       $t8, $zero, 0x3E8
    ctx->r24 = ADD32(0, 0X3E8);
    // 0x15175C0C: addiu       $t9, $zero, 0xFA0
    ctx->r25 = ADD32(0, 0XFA0);
    // 0x15175C10: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15175C14: addiu       $a1, $zero, 0x7D00
    ctx->r5 = ADD32(0, 0X7D00);
    // 0x15175C18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15175C1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15175C20: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x15175C24: nop

    // 0x15175C28: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15175C2C: lwc1        $f10, 0x9C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x15175C30: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15175C34: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x15175C38: nop

    // 0x15175C3C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15175C40: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x15175C44: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x15175C48: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x15175C4C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15175C50: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x15175C54: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x15175C58: jal         0x1000F91C
    // 0x15175C5C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_1000F91C(rdram, ctx);
        goto after_5;
    // 0x15175C5C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_5:
    // 0x15175C60: b           L_15175C6C
    // 0x15175C64: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
        goto L_15175C6C;
    // 0x15175C64: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
L_15175C68:
    // 0x15175C68: sh          $zero, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = 0;
L_15175C6C:
    // 0x15175C6C: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
    // 0x15175C70: andi        $t1, $v0, 0x4
    ctx->r9 = ctx->r2 & 0X4;
    // 0x15175C74: beql        $t1, $zero, L_15175FA4
    if (ctx->r9 == 0) {
        // 0x15175C78: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_15175FA4;
    }
    goto skip_6;
    // 0x15175C78: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_6:
    // 0x15175C7C: lwc1        $f10, 0x98($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X98);
    // 0x15175C80: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x15175C84: lh          $a2, 0xD0($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XD0);
    // 0x15175C88: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15175C8C: lh          $a3, 0xD4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XD4);
    // 0x15175C90: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x15175C94: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15175C98: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x15175C9C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x15175CA0: jal         0x150AD960
    // 0x15175CA4: nop

    func_150AD960(rdram, ctx);
        goto after_6;
    // 0x15175CA4: nop

    after_6:
    // 0x15175CA8: lh          $t4, 0x92($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X92);
    // 0x15175CAC: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x15175CB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15175CB4: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x15175CB8: beq         $t5, $zero, L_15175CD8
    if (ctx->r13 == 0) {
        // 0x15175CBC: nop
    
            goto L_15175CD8;
    }
    // 0x15175CBC: nop

    // 0x15175CC0: lh          $t6, 0xD8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XD8);
    // 0x15175CC4: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15175CC8: beq         $at, $zero, L_15175CD8
    if (ctx->r1 == 0) {
        // 0x15175CCC: nop
    
            goto L_15175CD8;
    }
    // 0x15175CCC: nop

    // 0x15175CD0: b           L_15175CD8
    // 0x15175CD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_15175CD8;
    // 0x15175CD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_15175CD8:
    // 0x15175CD8: lh          $t7, 0xD6($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XD6);
    // 0x15175CDC: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15175CE0: bnel        $at, $zero, L_15175CF4
    if (ctx->r1 != 0) {
        // 0x15175CE4: lh          $t8, 0xD0($s0)
        ctx->r24 = MEM_H(ctx->r16, 0XD0);
            goto L_15175CF4;
    }
    goto skip_7;
    // 0x15175CE4: lh          $t8, 0xD0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XD0);
    skip_7:
    // 0x15175CE8: beql        $a1, $zero, L_15175D88
    if (ctx->r5 == 0) {
        // 0x15175CEC: lbu         $v0, 0x91($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X91);
            goto L_15175D88;
    }
    goto skip_8;
    // 0x15175CEC: lbu         $v0, 0x91($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X91);
    skip_8:
    // 0x15175CF0: lh          $t8, 0xD0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XD0);
L_15175CF4:
    // 0x15175CF4: lwc1        $f6, 0x98($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X98);
    // 0x15175CF8: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x15175CFC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x15175D00: nop

    // 0x15175D04: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15175D08: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15175D0C: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x15175D10: lh          $t9, 0xD4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XD4);
    // 0x15175D14: lwc1        $f10, 0xA0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x15175D18: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x15175D1C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15175D20: sw          $a1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r5;
    // 0x15175D24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15175D28: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15175D2C: jal         0x150490A8
    // 0x15175D30: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    func_150490A8(rdram, ctx);
        goto after_7;
    // 0x15175D30: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x15175D34: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x15175D38: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x15175D3C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15175D40: beql        $a1, $zero, L_15175D50
    if (ctx->r5 == 0) {
        // 0x15175D44: slti        $at, $v1, 0x100
        ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
            goto L_15175D50;
    }
    goto skip_9;
    // 0x15175D44: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    skip_9:
    // 0x15175D48: addiu       $v1, $v0, 0x80
    ctx->r3 = ADD32(ctx->r2, 0X80);
    // 0x15175D4C: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
L_15175D50:
    // 0x15175D50: bnel        $at, $zero, L_15175D60
    if (ctx->r1 != 0) {
        // 0x15175D54: mtc1        $v1, $f4
        ctx->f4.u32l = ctx->r3;
            goto L_15175D60;
    }
    goto skip_10;
    // 0x15175D54: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    skip_10:
    // 0x15175D58: addiu       $v1, $v1, -0x100
    ctx->r3 = ADD32(ctx->r3, -0X100);
    // 0x15175D5C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
L_15175D60:
    // 0x15175D60: lui         $at, 0x3FB4
    ctx->r1 = S32(0X3FB4 << 16);
    // 0x15175D64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15175D68: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15175D6C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x15175D70: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x15175D74: swc1        $f8, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f8.u32l;
    // 0x15175D78: lbu         $t1, 0x3($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X3);
    // 0x15175D7C: sb          $t2, 0x91($s0)
    MEM_B(0X91, ctx->r16) = ctx->r10;
    // 0x15175D80: sh          $t1, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r9;
    // 0x15175D84: lbu         $v0, 0x91($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X91);
L_15175D88:
    // 0x15175D88: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15175D8C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15175D90: bne         $v0, $at, L_15175E4C
    if (ctx->r2 != ctx->r1) {
        // 0x15175D94: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_15175E4C;
    }
    // 0x15175D94: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15175D98: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x15175D9C: lwc1        $f2, 0xE0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x15175DA0: lwc1        $f12, 0xAC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x15175DA4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x15175DA8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15175DAC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x15175DB0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15175DB4: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15175DB8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15175DBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15175DC0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15175DC4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x15175DC8: mul.s       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15175DCC: bc1fl       L_15175DDC
    if (!c1cs) {
        // 0x15175DD0: abs.s       $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
            goto L_15175DDC;
    }
    goto skip_11;
    // 0x15175DD0: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    skip_11:
    // 0x15175DD4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x15175DD8: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
L_15175DDC:
    // 0x15175DDC: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x15175DE0: nop

    // 0x15175DE4: bc1fl       L_15175DF4
    if (!c1cs) {
        // 0x15175DE8: c.lt.s      $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
            goto L_15175DF4;
    }
    goto skip_12;
    // 0x15175DE8: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    skip_12:
    // 0x15175DEC: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x15175DF0: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
L_15175DF4:
    // 0x15175DF4: nop

    // 0x15175DF8: bc1fl       L_15175E18
    if (!c1cs) {
        // 0x15175DFC: c.lt.s      $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
            goto L_15175E18;
    }
    goto skip_13;
    // 0x15175DFC: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    skip_13:
    // 0x15175E00: lwc1        $f8, 0xB8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x15175E04: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x15175E08: nop

    // 0x15175E0C: bc1tl       L_15175E34
    if (c1cs) {
        // 0x15175E10: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_15175E34;
    }
    goto skip_14;
    // 0x15175E10: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    skip_14:
    // 0x15175E14: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
L_15175E18:
    // 0x15175E18: lwc1        $f2, 0xB8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x15175E1C: bc1fl       L_15175E44
    if (!c1cs) {
        // 0x15175E20: add.s       $f4, $f2, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_15175E44;
    }
    goto skip_15;
    // 0x15175E20: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
    skip_15:
    // 0x15175E24: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x15175E28: nop

    // 0x15175E2C: bc1f        L_15175E40
    if (!c1cs) {
        // 0x15175E30: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_15175E40;
    }
    // 0x15175E30: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
L_15175E34:
    // 0x15175E34: sb          $t4, 0x91($s0)
    MEM_B(0X91, ctx->r16) = ctx->r12;
    // 0x15175E38: b           L_15175E4C
    // 0x15175E3C: andi        $v0, $t4, 0xFF
    ctx->r2 = ctx->r12 & 0XFF;
        goto L_15175E4C;
    // 0x15175E3C: andi        $v0, $t4, 0xFF
    ctx->r2 = ctx->r12 & 0XFF;
L_15175E40:
    // 0x15175E40: add.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f14.fl;
L_15175E44:
    // 0x15175E44: lbu         $v0, 0x91($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X91);
    // 0x15175E48: swc1        $f4, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f4.u32l;
L_15175E4C:
    // 0x15175E4C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15175E50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15175E54: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15175E58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15175E5C: bnel        $v0, $at, L_15175F64
    if (ctx->r2 != ctx->r1) {
        // 0x15175E60: lwc1        $f2, 0xB8($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0XB8);
            goto L_15175F64;
    }
    goto skip_16;
    // 0x15175E60: lwc1        $f2, 0xB8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB8);
    skip_16:
    // 0x15175E64: lwc1        $f2, 0xB8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x15175E68: c.eq.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl == ctx->f2.fl;
    // 0x15175E6C: nop

    // 0x15175E70: bc1tl       L_15175EFC
    if (c1cs) {
        // 0x15175E74: lh          $t7, 0xDC($s0)
        ctx->r15 = MEM_H(ctx->r16, 0XDC);
            goto L_15175EFC;
    }
    goto skip_17;
    // 0x15175E74: lh          $t7, 0xDC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XDC);
    skip_17:
    // 0x15175E78: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x15175E7C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15175E80: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15175E84: bc1f        L_15175EC4
    if (!c1cs) {
        // 0x15175E88: nop
    
            goto L_15175EC4;
    }
    // 0x15175E88: nop

    // 0x15175E8C: lw          $t5, -0x161C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X161C);
    // 0x15175E90: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x15175E94: nop

    // 0x15175E98: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15175E9C: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x15175EA0: sub.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x15175EA4: swc1        $f4, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f4.u32l;
    // 0x15175EA8: lwc1        $f10, 0xB8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x15175EAC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x15175EB0: nop

    // 0x15175EB4: bc1fl       L_15175EFC
    if (!c1cs) {
        // 0x15175EB8: lh          $t7, 0xDC($s0)
        ctx->r15 = MEM_H(ctx->r16, 0XDC);
            goto L_15175EFC;
    }
    goto skip_18;
    // 0x15175EB8: lh          $t7, 0xDC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XDC);
    skip_18:
    // 0x15175EBC: b           L_15175EF8
    // 0x15175EC0: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
        goto L_15175EF8;
    // 0x15175EC0: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
L_15175EC4:
    // 0x15175EC4: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x15175EC8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15175ECC: nop

    // 0x15175ED0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15175ED4: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x15175ED8: add.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x15175EDC: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
    // 0x15175EE0: lwc1        $f6, 0xB8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x15175EE4: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x15175EE8: nop

    // 0x15175EEC: bc1fl       L_15175EFC
    if (!c1cs) {
        // 0x15175EF0: lh          $t7, 0xDC($s0)
        ctx->r15 = MEM_H(ctx->r16, 0XDC);
            goto L_15175EFC;
    }
    goto skip_19;
    // 0x15175EF0: lh          $t7, 0xDC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XDC);
    skip_19:
    // 0x15175EF4: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
L_15175EF8:
    // 0x15175EF8: lh          $t7, 0xDC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XDC);
L_15175EFC:
    // 0x15175EFC: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x15175F00: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x15175F04: sh          $t9, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r25;
    // 0x15175F08: lh          $t1, 0xDC($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XDC);
    // 0x15175F0C: bgtzl       $t1, L_15175F64
    if (SIGNED(ctx->r9) > 0) {
        // 0x15175F10: lwc1        $f2, 0xB8($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0XB8);
            goto L_15175F64;
    }
    goto skip_20;
    // 0x15175F10: lwc1        $f2, 0xB8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB8);
    skip_20:
    // 0x15175F14: jal         0x150ADA20
    // 0x15175F18: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x15175F18: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    after_8:
    // 0x15175F1C: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x15175F20: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15175F24: mfhi        $t2
    ctx->r10 = hi;
    // 0x15175F28: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x15175F2C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15175F30: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x15175F34: bgez        $t2, L_15175F4C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x15175F38: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_15175F4C;
    }
    // 0x15175F38: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15175F3C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15175F40: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15175F44: nop

    // 0x15175F48: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_15175F4C:
    // 0x15175F4C: swc1        $f4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f4.u32l;
    // 0x15175F50: lbu         $t3, 0x2($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X2);
    // 0x15175F54: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x15175F58: sb          $t4, 0x91($s0)
    MEM_B(0X91, ctx->r16) = ctx->r12;
    // 0x15175F5C: sh          $t3, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = ctx->r11;
    // 0x15175F60: lwc1        $f2, 0xB8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB8);
L_15175F64:
    // 0x15175F64: lwc1        $f12, 0x10($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X10);
    // 0x15175F68: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x15175F6C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x15175F70: nop

    // 0x15175F74: bc1fl       L_15175FA0
    if (!c1cs) {
        // 0x15175F78: lh          $v0, 0x92($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X92);
            goto L_15175FA0;
    }
    goto skip_21;
    // 0x15175F78: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
    skip_21:
    // 0x15175F7C: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x15175F80: nop

    // 0x15175F84: bc1fl       L_15175F98
    if (!c1cs) {
        // 0x15175F88: neg.s       $f6, $f12
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = -ctx->f12.fl;
            goto L_15175F98;
    }
    goto skip_22;
    // 0x15175F88: neg.s       $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = -ctx->f12.fl;
    skip_22:
    // 0x15175F8C: b           L_15175F9C
    // 0x15175F90: swc1        $f12, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f12.u32l;
        goto L_15175F9C;
    // 0x15175F90: swc1        $f12, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f12.u32l;
    // 0x15175F94: neg.s       $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = -ctx->f12.fl;
L_15175F98:
    // 0x15175F98: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_15175F9C:
    // 0x15175F9C: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
L_15175FA0:
    // 0x15175FA0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_15175FA4:
    // 0x15175FA4: andi        $t5, $v0, 0x80
    ctx->r13 = ctx->r2 & 0X80;
    // 0x15175FA8: beql        $t5, $zero, L_15176044
    if (ctx->r13 == 0) {
        // 0x15175FAC: andi        $t6, $v0, 0x40
        ctx->r14 = ctx->r2 & 0X40;
            goto L_15176044;
    }
    goto skip_23;
    // 0x15175FAC: andi        $t6, $v0, 0x40
    ctx->r14 = ctx->r2 & 0X40;
    skip_23:
    // 0x15175FB0: lwc1        $f8, 0x98($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X98);
    // 0x15175FB4: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x15175FB8: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    // 0x15175FBC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15175FC0: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x15175FC4: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x15175FC8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15175FCC: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x15175FD0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15175FD4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15175FD8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15175FDC: jal         0x1510F8D8
    // 0x15175FE0: nop

    func_1510F8D8(rdram, ctx);
        goto after_9;
    // 0x15175FE0: nop

    after_9:
    // 0x15175FE4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15175FE8: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x15175FEC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15175FF0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15175FF4: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15175FF8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15175FFC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15176000: swc1        $f6, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f6.u32l;
    // 0x15176004: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x15176008: beq         $t9, $zero, L_15176038
    if (ctx->r25 == 0) {
        // 0x1517600C: nop
    
            goto L_15176038;
    }
    // 0x1517600C: nop

    // 0x15176010: lw          $t1, -0x41C4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X41C4);
    // 0x15176014: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x15176018: lw          $t3, -0x41A4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X41A4);
    // 0x1517601C: subu        $v0, $t9, $t1
    ctx->r2 = SUB32(ctx->r25, ctx->r9);
    // 0x15176020: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x15176024: mflo        $t2
    ctx->r10 = lo;
    // 0x15176028: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x1517602C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x15176030: b           L_15176038
    // 0x15176034: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
        goto L_15176038;
    // 0x15176034: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
L_15176038:
    // 0x15176038: sw          $v1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r3;
    // 0x1517603C: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
    // 0x15176040: andi        $t6, $v0, 0x40
    ctx->r14 = ctx->r2 & 0X40;
L_15176044:
    // 0x15176044: beql        $t6, $zero, L_151761BC
    if (ctx->r14 == 0) {
        // 0x15176048: andi        $t6, $v0, 0x200
        ctx->r14 = ctx->r2 & 0X200;
            goto L_151761BC;
    }
    goto skip_24;
    // 0x15176048: andi        $t6, $v0, 0x200
    ctx->r14 = ctx->r2 & 0X200;
    skip_24:
    // 0x1517604C: lh          $v1, 0xDE($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XDE);
    // 0x15176050: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15176054: bltzl       $v1, L_15176154
    if (SIGNED(ctx->r3) < 0) {
        // 0x15176058: lwc1        $f0, 0xB4($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0XB4);
            goto L_15176154;
    }
    goto skip_25;
    // 0x15176058: lwc1        $f0, 0xB4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB4);
    skip_25:
    // 0x1517605C: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x15176060: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x15176064: subu        $t8, $v1, $t7
    ctx->r24 = SUB32(ctx->r3, ctx->r15);
    // 0x15176068: sh          $t8, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r24;
    // 0x1517606C: lh          $t9, 0xDE($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XDE);
    // 0x15176070: bgtzl       $t9, L_1517610C
    if (SIGNED(ctx->r25) > 0) {
        // 0x15176074: lwc1        $f0, 0xA8($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0XA8);
            goto L_1517610C;
    }
    goto skip_26;
    // 0x15176074: lwc1        $f0, 0xA8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA8);
    skip_26:
    // 0x15176078: sh          $t1, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r9;
    // 0x1517607C: jal         0x150ADA20
    // 0x15176080: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x15176080: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    after_10:
    // 0x15176084: lh          $t2, 0xDA($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XDA);
    // 0x15176088: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1517608C: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x15176090: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x15176094: mfhi        $t3
    ctx->r11 = hi;
    // 0x15176098: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x1517609C: bne         $t2, $zero, L_151760A8
    if (ctx->r10 != 0) {
        // 0x151760A0: nop
    
            goto L_151760A8;
    }
    // 0x151760A0: nop

    // 0x151760A4: break       7
    do_break(353853604);
L_151760A8:
    // 0x151760A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151760AC: bgez        $t3, L_151760C0
    if (SIGNED(ctx->r11) >= 0) {
        // 0x151760B0: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_151760C0;
    }
    // 0x151760B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151760B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151760B8: nop

    // 0x151760BC: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_151760C0:
    // 0x151760C0: lh          $t4, 0xD2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XD2);
    // 0x151760C4: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x151760C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151760CC: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x151760D0: nop

    // 0x151760D4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151760D8: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151760DC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x151760E0: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x151760E4: bc1fl       L_15176100
    if (!c1cs) {
        // 0x151760E8: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_15176100;
    }
    goto skip_27;
    // 0x151760E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_27:
    // 0x151760EC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x151760F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151760F4: b           L_15176148
    // 0x151760F8: swc1        $f6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f6.u32l;
        goto L_15176148;
    // 0x151760F8: swc1        $f6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f6.u32l;
    // 0x151760FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_15176100:
    // 0x15176100: b           L_15176148
    // 0x15176104: swc1        $f10, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
        goto L_15176148;
    // 0x15176104: swc1        $f10, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f10.u32l;
    // 0x15176108: lwc1        $f0, 0xA8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA8);
L_1517610C:
    // 0x1517610C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x15176110: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x15176114: nop

    // 0x15176118: bc1fl       L_15176130
    if (!c1cs) {
        // 0x1517611C: c.lt.s      $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
            goto L_15176130;
    }
    goto skip_28;
    // 0x1517611C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    skip_28:
    // 0x15176120: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15176124: b           L_15176148
    // 0x15176128: swc1        $f8, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f8.u32l;
        goto L_15176148;
    // 0x15176128: swc1        $f8, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f8.u32l;
    // 0x1517612C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
L_15176130:
    // 0x15176130: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15176134: bc1f        L_15176148
    if (!c1cs) {
        // 0x15176138: nop
    
            goto L_15176148;
    }
    // 0x15176138: nop

    // 0x1517613C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15176140: nop

    // 0x15176144: swc1        $f4, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f4.u32l;
L_15176148:
    // 0x15176148: b           L_151761B8
    // 0x1517614C: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
        goto L_151761B8;
    // 0x1517614C: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
    // 0x15176150: lwc1        $f0, 0xB4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB4);
L_15176154:
    // 0x15176154: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x15176158: nop

    // 0x1517615C: bc1fl       L_15176180
    if (!c1cs) {
        // 0x15176160: c.lt.s      $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
            goto L_15176180;
    }
    goto skip_29;
    // 0x15176160: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    skip_29:
    // 0x15176164: lwc1        $f6, 0x9C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x15176168: lwc1        $f10, 0xE4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x1517616C: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x15176170: nop

    // 0x15176174: bc1tl       L_151761A8
    if (c1cs) {
        // 0x15176178: neg.s       $f6, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
            goto L_151761A8;
    }
    goto skip_30;
    // 0x15176178: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    skip_30:
    // 0x1517617C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
L_15176180:
    // 0x15176180: nop

    // 0x15176184: bc1fl       L_151761BC
    if (!c1cs) {
        // 0x15176188: andi        $t6, $v0, 0x200
        ctx->r14 = ctx->r2 & 0X200;
            goto L_151761BC;
    }
    goto skip_31;
    // 0x15176188: andi        $t6, $v0, 0x200
    ctx->r14 = ctx->r2 & 0X200;
    skip_31:
    // 0x1517618C: lwc1        $f8, 0xE4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x15176190: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x15176194: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x15176198: nop

    // 0x1517619C: bc1fl       L_151761BC
    if (!c1cs) {
        // 0x151761A0: andi        $t6, $v0, 0x200
        ctx->r14 = ctx->r2 & 0X200;
            goto L_151761BC;
    }
    goto skip_32;
    // 0x151761A0: andi        $t6, $v0, 0x200
    ctx->r14 = ctx->r2 & 0X200;
    skip_32:
    // 0x151761A4: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
L_151761A8:
    // 0x151761A8: addiu       $t5, $zero, 0x78
    ctx->r13 = ADD32(0, 0X78);
    // 0x151761AC: sh          $t5, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r13;
    // 0x151761B0: swc1        $f6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f6.u32l;
    // 0x151761B4: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
L_151761B8:
    // 0x151761B8: andi        $t6, $v0, 0x200
    ctx->r14 = ctx->r2 & 0X200;
L_151761BC:
    // 0x151761BC: bnel        $t6, $zero, L_151763D0
    if (ctx->r14 != 0) {
        // 0x151761C0: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_151763D0;
    }
    goto skip_33;
    // 0x151761C0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_33:
    // 0x151761C4: lwc1        $f10, 0xA8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x151761C8: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x151761CC: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151761D0: swc1        $f4, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f4.u32l;
    // 0x151761D4: lwc1        $f2, 0x8($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X8);
    // 0x151761D8: lwc1        $f0, 0xA8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x151761DC: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
    // 0x151761E0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x151761E4: nop

    // 0x151761E8: bc1fl       L_151761FC
    if (!c1cs) {
        // 0x151761EC: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_151761FC;
    }
    goto skip_34;
    // 0x151761EC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_34:
    // 0x151761F0: b           L_15176218
    // 0x151761F4: swc1        $f12, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f12.u32l;
        goto L_15176218;
    // 0x151761F4: swc1        $f12, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f12.u32l;
    // 0x151761F8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_151761FC:
    // 0x151761FC: nop

    // 0x15176200: bc1fl       L_15176214
    if (!c1cs) {
        // 0x15176204: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_15176214;
    }
    goto skip_35;
    // 0x15176204: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_35:
    // 0x15176208: b           L_15176214
    // 0x1517620C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_15176214;
    // 0x1517620C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x15176210: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_15176214:
    // 0x15176214: swc1        $f12, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f12.u32l;
L_15176218:
    // 0x15176218: lwc1        $f2, 0xB8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x1517621C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15176220: lwc1        $f12, 0x718C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X718C);
    // 0x15176224: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x15176228: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x1517622C: nop

    // 0x15176230: bc1fl       L_1517630C
    if (!c1cs) {
        // 0x15176234: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_1517630C;
    }
    goto skip_36;
    // 0x15176234: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_36:
    // 0x15176238: lwc1        $f6, 0xAC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x1517623C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15176240: add.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x15176244: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
    // 0x15176248: lwc1        $f12, 0xAC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x1517624C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x15176250: nop

    // 0x15176254: bc1fl       L_15176278
    if (!c1cs) {
        // 0x15176258: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_15176278;
    }
    goto skip_37;
    // 0x15176258: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_37:
    // 0x1517625C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15176260: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15176264: nop

    // 0x15176268: add.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x1517626C: b           L_15176294
    // 0x15176270: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
        goto L_15176294;
    // 0x15176270: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
    // 0x15176274: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_15176278:
    // 0x15176278: nop

    // 0x1517627C: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x15176280: nop

    // 0x15176284: bc1fl       L_15176298
    if (!c1cs) {
        // 0x15176288: lh          $t7, 0x92($s0)
        ctx->r15 = MEM_H(ctx->r16, 0X92);
            goto L_15176298;
    }
    goto skip_38;
    // 0x15176288: lh          $t7, 0x92($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X92);
    skip_38:
    // 0x1517628C: sub.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x15176290: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
L_15176294:
    // 0x15176294: lh          $t7, 0x92($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X92);
L_15176298:
    // 0x15176298: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x1517629C: bne         $t8, $zero, L_15176300
    if (ctx->r24 != 0) {
        // 0x151762A0: nop
    
            goto L_15176300;
    }
    // 0x151762A0: nop

    // 0x151762A4: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x151762A8: lwc1        $f6, 0xB0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x151762AC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x151762B0: add.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x151762B4: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x151762B8: swc1        $f10, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f10.u32l;
    // 0x151762BC: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x151762C0: lwc1        $f2, 0xB0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x151762C4: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
    // 0x151762C8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x151762CC: nop

    // 0x151762D0: bc1fl       L_151762E4
    if (!c1cs) {
        // 0x151762D4: c.lt.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
            goto L_151762E4;
    }
    goto skip_39;
    // 0x151762D4: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    skip_39:
    // 0x151762D8: b           L_15176378
    // 0x151762DC: swc1        $f12, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f12.u32l;
        goto L_15176378;
    // 0x151762DC: swc1        $f12, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f12.u32l;
    // 0x151762E0: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
L_151762E4:
    // 0x151762E4: nop

    // 0x151762E8: bc1fl       L_151762FC
    if (!c1cs) {
        // 0x151762EC: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_151762FC;
    }
    goto skip_40;
    // 0x151762EC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_40:
    // 0x151762F0: b           L_151762FC
    // 0x151762F4: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
        goto L_151762FC;
    // 0x151762F4: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x151762F8: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_151762FC:
    // 0x151762FC: swc1        $f12, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f12.u32l;
L_15176300:
    // 0x15176300: b           L_1517637C
    // 0x15176304: lh          $t9, 0xA4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA4);
        goto L_1517637C;
    // 0x15176304: lh          $t9, 0xA4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA4);
    // 0x15176308: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_1517630C:
    // 0x1517630C: lwc1        $f2, 0xB0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x15176310: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x15176314: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x15176318: nop

    // 0x1517631C: bc1fl       L_15176338
    if (!c1cs) {
        // 0x15176320: c.lt.s      $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
            goto L_15176338;
    }
    goto skip_41;
    // 0x15176320: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    skip_41:
    // 0x15176324: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15176328: lwc1        $f2, 0xB0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x1517632C: b           L_15176350
    // 0x15176330: swc1        $f8, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f8.u32l;
        goto L_15176350;
    // 0x15176330: swc1        $f8, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f8.u32l;
    // 0x15176334: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
L_15176338:
    // 0x15176338: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1517633C: bc1fl       L_15176354
    if (!c1cs) {
        // 0x15176340: lwc1        $f6, 0xBC($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0XBC);
            goto L_15176354;
    }
    goto skip_42;
    // 0x15176340: lwc1        $f6, 0xBC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XBC);
    skip_42:
    // 0x15176344: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15176348: lwc1        $f2, 0xB0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x1517634C: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
L_15176350:
    // 0x15176350: lwc1        $f6, 0xBC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XBC);
L_15176354:
    // 0x15176354: add.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x15176358: swc1        $f10, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f10.u32l;
    // 0x1517635C: lwc1        $f0, 0xB0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x15176360: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x15176364: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x15176368: nop

    // 0x1517636C: bc1fl       L_1517637C
    if (!c1cs) {
        // 0x15176370: lh          $t9, 0xA4($s0)
        ctx->r25 = MEM_H(ctx->r16, 0XA4);
            goto L_1517637C;
    }
    goto skip_43;
    // 0x15176370: lh          $t9, 0xA4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA4);
    skip_43:
    // 0x15176374: swc1        $f14, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f14.u32l;
L_15176378:
    // 0x15176378: lh          $t9, 0xA4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA4);
L_1517637C:
    // 0x1517637C: lh          $t1, 0xA6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XA6);
    // 0x15176380: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x15176384: sh          $t2, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = ctx->r10;
    // 0x15176388: lbu         $v1, 0x1($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X1);
    // 0x1517638C: lh          $v0, 0xA4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA4);
    // 0x15176390: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15176394: beql        $at, $zero, L_151763AC
    if (ctx->r1 == 0) {
        // 0x15176398: lbu         $v1, 0x0($t0)
        ctx->r3 = MEM_BU(ctx->r8, 0X0);
            goto L_151763AC;
    }
    goto skip_44;
    // 0x15176398: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    skip_44:
    // 0x1517639C: sh          $v1, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = ctx->r3;
    // 0x151763A0: b           L_151763CC
    // 0x151763A4: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
        goto L_151763CC;
    // 0x151763A4: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
    // 0x151763A8: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
L_151763AC:
    // 0x151763AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151763B0: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x151763B4: beq         $at, $zero, L_151763C4
    if (ctx->r1 == 0) {
        // 0x151763B8: nop
    
            goto L_151763C4;
    }
    // 0x151763B8: nop

    // 0x151763BC: b           L_151763C4
    // 0x151763C0: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_151763C4;
    // 0x151763C0: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_151763C4:
    // 0x151763C4: sh          $a0, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = ctx->r4;
    // 0x151763C8: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
L_151763CC:
    // 0x151763CC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_151763D0:
    // 0x151763D0: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x151763D4: bne         $t3, $zero, L_15176498
    if (ctx->r11 != 0) {
        // 0x151763D8: andi        $v1, $v0, 0x200
        ctx->r3 = ctx->r2 & 0X200;
            goto L_15176498;
    }
    // 0x151763D8: andi        $v1, $v0, 0x200
    ctx->r3 = ctx->r2 & 0X200;
    // 0x151763DC: lwc1        $f8, 0xA8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x151763E0: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x151763E4: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x151763E8: c.le.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl <= ctx->f8.fl;
    // 0x151763EC: nop

    // 0x151763F0: bc1fl       L_1517644C
    if (!c1cs) {
        // 0x151763F4: lw          $t9, 0x8($t8)
        ctx->r25 = MEM_W(ctx->r24, 0X8);
            goto L_1517644C;
    }
    goto skip_45;
    // 0x151763F4: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    skip_45:
    // 0x151763F8: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x151763FC: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
    // 0x15176400: lwc1        $f2, 0x20($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X20);
    // 0x15176404: bne         $t5, $t6, L_15176490
    if (ctx->r13 != ctx->r14) {
        // 0x15176408: nop
    
            goto L_15176490;
    }
    // 0x15176408: nop

    // 0x1517640C: lwc1        $f0, 0x18($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X18);
    // 0x15176410: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15176414: nop

    // 0x15176418: bc1f        L_15176490
    if (!c1cs) {
        // 0x1517641C: nop
    
            goto L_15176490;
    }
    // 0x1517641C: nop

    // 0x15176420: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
    // 0x15176424: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x15176428: nop

    // 0x1517642C: bc1f        L_15176490
    if (!c1cs) {
        // 0x15176430: nop
    
            goto L_15176490;
    }
    // 0x15176430: nop

    // 0x15176434: lw          $t7, 0x8($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X8);
    // 0x15176438: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
    // 0x1517643C: sw          $t7, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r15;
    // 0x15176440: b           L_15176498
    // 0x15176444: andi        $v1, $v0, 0x200
    ctx->r3 = ctx->r2 & 0X200;
        goto L_15176498;
    // 0x15176444: andi        $v1, $v0, 0x200
    ctx->r3 = ctx->r2 & 0X200;
    // 0x15176448: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
L_1517644C:
    // 0x1517644C: lw          $t1, 0x94($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X94);
    // 0x15176450: lwc1        $f2, 0x20($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X20);
    // 0x15176454: bne         $t9, $t1, L_15176490
    if (ctx->r25 != ctx->r9) {
        // 0x15176458: nop
    
            goto L_15176490;
    }
    // 0x15176458: nop

    // 0x1517645C: lwc1        $f0, 0x18($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X18);
    // 0x15176460: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15176464: nop

    // 0x15176468: bc1f        L_15176490
    if (!c1cs) {
        // 0x1517646C: nop
    
            goto L_15176490;
    }
    // 0x1517646C: nop

    // 0x15176470: neg.s       $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = -ctx->f2.fl;
    // 0x15176474: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x15176478: nop

    // 0x1517647C: bc1f        L_15176490
    if (!c1cs) {
        // 0x15176480: nop
    
            goto L_15176490;
    }
    // 0x15176480: nop

    // 0x15176484: lw          $t2, 0x4($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X4);
    // 0x15176488: lh          $v0, 0x92($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X92);
    // 0x1517648C: sw          $t2, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r10;
L_15176490:
    // 0x15176490: b           L_15176498
    // 0x15176494: andi        $v1, $v0, 0x200
    ctx->r3 = ctx->r2 & 0X200;
        goto L_15176498;
    // 0x15176494: andi        $v1, $v0, 0x200
    ctx->r3 = ctx->r2 & 0X200;
L_15176498:
    // 0x15176498: beq         $v1, $zero, L_151765EC
    if (ctx->r3 == 0) {
        // 0x1517649C: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_151765EC;
    }
    // 0x1517649C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151764A0: lwc1        $f12, 0x7190($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7190);
    // 0x151764A4: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x151764A8: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x151764AC: lwc1        $f2, 0xB8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x151764B0: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x151764B4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x151764B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151764BC: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151764C0: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x151764C4: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151764C8: swc1        $f6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f6.u32l;
    // 0x151764CC: lwc1        $f10, 0x7194($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7194);
    // 0x151764D0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x151764D4: add.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x151764D8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151764DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151764E0: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x151764E4: lwc1        $f4, 0xB8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x151764E8: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x151764EC: nop

    // 0x151764F0: bc1f        L_151764FC
    if (!c1cs) {
        // 0x151764F4: nop
    
            goto L_151764FC;
    }
    // 0x151764F4: nop

    // 0x151764F8: swc1        $f12, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f12.u32l;
L_151764FC:
    // 0x151764FC: lwc1        $f10, 0x7198($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7198);
    // 0x15176500: lwc1        $f6, 0xBC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x15176504: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15176508: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1517650C: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x15176510: lwc1        $f10, 0xBC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x15176514: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x15176518: nop

    // 0x1517651C: bc1f        L_15176528
    if (!c1cs) {
        // 0x15176520: nop
    
            goto L_15176528;
    }
    // 0x15176520: nop

    // 0x15176524: swc1        $f2, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f2.u32l;
L_15176528:
    // 0x15176528: jal         0x150AD78C
    // 0x1517652C: lwc1        $f12, 0xB4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB4);
    func_150AD78C(rdram, ctx);
        goto after_11;
    // 0x1517652C: lwc1        $f12, 0xB4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB4);
    after_11:
    // 0x15176530: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x15176534: jal         0x150AD780
    // 0x15176538: lwc1        $f12, 0xB4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB4);
    func_150AD780(rdram, ctx);
        goto after_12;
    // 0x15176538: lwc1        $f12, 0xB4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XB4);
    after_12:
    // 0x1517653C: lwc1        $f2, 0xBC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x15176540: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15176544: lwc1        $f8, 0x719C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X719C);
    // 0x15176548: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x1517654C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15176550: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15176554: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15176558: swc1        $f4, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f4.u32l;
    // 0x1517655C: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x15176560: lwc1        $f8, 0x71A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X71A0);
    // 0x15176564: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x15176568: mul.s       $f6, $f2, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x1517656C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15176570: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15176574: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15176578: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1517657C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15176580: sub.s       $f6, $f2, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x15176584: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x15176588: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1517658C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15176590: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15176594: lwc1        $f8, 0x9C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x15176598: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1517659C: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x151765A0: swc1        $f10, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f10.u32l;
    // 0x151765A4: lwc1        $f8, 0x71A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X71A4);
    // 0x151765A8: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x151765AC: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x151765B0: nop

    // 0x151765B4: bc1t        L_151765DC
    if (c1cs) {
        // 0x151765B8: nop
    
            goto L_151765DC;
    }
    // 0x151765B8: nop

    // 0x151765BC: lbu         $t5, 0x35EA($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X35EA);
    // 0x151765C0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151765C4: beq         $t5, $zero, L_151765DC
    if (ctx->r13 == 0) {
        // 0x151765C8: nop
    
            goto L_151765DC;
    }
    // 0x151765C8: nop

    // 0x151765CC: lbu         $t6, 0x35E8($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35E8);
    // 0x151765D0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151765D4: beql        $t6, $at, L_151766C8
    if (ctx->r14 == ctx->r1) {
        // 0x151765D8: lbu         $t9, 0x0($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X0);
            goto L_151766C8;
    }
    goto skip_46;
    // 0x151765D8: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    skip_46:
L_151765DC:
    // 0x151765DC: jal         0x1516972C
    // 0x151765E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_13;
    // 0x151765E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x151765E4: b           L_1517684C
    // 0x151765E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_1517684C;
    // 0x151765E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_151765EC:
    // 0x151765EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151765F0: lwc1        $f0, 0x71A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X71A8);
    // 0x151765F4: lwc1        $f6, 0xA8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x151765F8: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151765FC: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
    // 0x15176600: lwc1        $f4, 0xAC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x15176604: lwc1        $f12, 0xAC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x15176608: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1517660C: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x15176610: lwc1        $f6, 0xB0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x15176614: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15176618: jal         0x150AD78C
    // 0x1517661C: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    func_150AD78C(rdram, ctx);
        goto after_14;
    // 0x1517661C: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x15176620: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x15176624: jal         0x150AD78C
    // 0x15176628: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    func_150AD78C(rdram, ctx);
        goto after_15;
    // 0x15176628: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    after_15:
    // 0x1517662C: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x15176630: jal         0x150AD780
    // 0x15176634: lwc1        $f12, 0xAC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XAC);
    func_150AD780(rdram, ctx);
        goto after_16;
    // 0x15176634: lwc1        $f12, 0xAC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XAC);
    after_16:
    // 0x15176638: lwc1        $f12, 0xB0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x1517663C: jal         0x150AD780
    // 0x15176640: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    func_150AD780(rdram, ctx);
        goto after_17;
    // 0x15176640: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    after_17:
    // 0x15176644: lwc1        $f14, 0xA0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x15176648: lwc1        $f4, 0xA4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x1517664C: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x15176650: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15176654: mul.s       $f8, $f14, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x15176658: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x1517665C: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x15176660: mul.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x15176664: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x15176668: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x1517666C: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x15176670: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x15176674: lh          $t4, 0xA4($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XA4);
    // 0x15176678: lwc1        $f6, 0x98($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X98);
    // 0x1517667C: multu       $t4, $t7
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15176680: mflo        $v0
    ctx->r2 = lo;
    // 0x15176684: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x15176688: nop

    // 0x1517668C: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15176690: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x15176694: lwc1        $f10, 0x9C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x15176698: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1517669C: swc1        $f8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f8.u32l;
    // 0x151766A0: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x151766A4: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151766A8: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x151766AC: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151766B0: swc1        $f8, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f8.u32l;
    // 0x151766B4: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x151766B8: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151766BC: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151766C0: swc1        $f8, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f8.u32l;
    // 0x151766C4: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
L_151766C8:
    // 0x151766C8: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x151766CC: bnel        $t9, $at, L_1517677C
    if (ctx->r25 != ctx->r1) {
        // 0x151766D0: lh          $t4, 0x92($s0)
        ctx->r12 = MEM_H(ctx->r16, 0X92);
            goto L_1517677C;
    }
    goto skip_47;
    // 0x151766D0: lh          $t4, 0x92($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X92);
    skip_47:
    // 0x151766D4: lbu         $t1, 0x90($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X90);
    // 0x151766D8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151766DC: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x151766E0: lbu         $t8, -0x20A0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X20A0);
    // 0x151766E4: bnel        $t8, $zero, L_1517677C
    if (ctx->r24 != 0) {
        // 0x151766E8: lh          $t4, 0x92($s0)
        ctx->r12 = MEM_H(ctx->r16, 0X92);
            goto L_1517677C;
    }
    goto skip_48;
    // 0x151766E8: lh          $t4, 0x92($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X92);
    skip_48:
    // 0x151766EC: jal         0x150ADA20
    // 0x151766F0: nop

    func_150ADA20(rdram, ctx);
        goto after_18;
    // 0x151766F0: nop

    after_18:
    // 0x151766F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151766F8: lwc1        $f10, 0x98($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X98);
    // 0x151766FC: andi        $a2, $v0, 0x7F
    ctx->r6 = ctx->r2 & 0X7F;
    // 0x15176700: sll         $t2, $a2, 16
    ctx->r10 = S32(ctx->r6 << 16);
    // 0x15176704: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15176708: sra         $a2, $t2, 16
    ctx->r6 = S32(SIGNED(ctx->r10) >> 16);
    // 0x1517670C: addiu       $t2, $zero, 0xFA0
    ctx->r10 = ADD32(0, 0XFA0);
    // 0x15176710: addiu       $t8, $zero, 0x1F4
    ctx->r24 = ADD32(0, 0X1F4);
    // 0x15176714: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x15176718: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x1517671C: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x15176720: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15176724: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x15176728: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1517672C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15176730: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x15176734: nop

    // 0x15176738: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1517673C: lwc1        $f10, 0xA0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x15176740: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x15176744: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x15176748: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1517674C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x15176750: jal         0x10010F88
    // 0x15176754: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_10010F88(rdram, ctx);
        goto after_19;
    // 0x15176754: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_19:
    // 0x15176758: jal         0x150ADA20
    // 0x1517675C: nop

    func_150ADA20(rdram, ctx);
        goto after_20;
    // 0x1517675C: nop

    after_20:
    // 0x15176760: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
    // 0x15176764: andi        $t3, $v0, 0x3F
    ctx->r11 = ctx->r2 & 0X3F;
    // 0x15176768: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517676C: addiu       $t5, $t3, 0x1E
    ctx->r13 = ADD32(ctx->r11, 0X1E);
    // 0x15176770: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15176774: sb          $t5, -0x20A0($at)
    MEM_B(-0X20A0, ctx->r1) = ctx->r13;
    // 0x15176778: lh          $t4, 0x92($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X92);
L_1517677C:
    // 0x1517677C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15176780: addiu       $a0, $a0, -0x63F0
    ctx->r4 = ADD32(ctx->r4, -0X63F0);
    // 0x15176784: andi        $t7, $t4, 0x2
    ctx->r15 = ctx->r12 & 0X2;
    // 0x15176788: beq         $t7, $zero, L_15176848
    if (ctx->r15 == 0) {
        // 0x1517678C: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_15176848;
    }
    // 0x1517678C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15176790: lwc1        $f4, -0x64E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X64E0);
    // 0x15176794: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15176798: lwc1        $f8, -0x64E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X64E4);
    // 0x1517679C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x151767A0: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x151767A4: lw          $a2, 0x9C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X9C);
    // 0x151767A8: lw          $a3, 0xA0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA0);
    // 0x151767AC: lwc1        $f10, 0x35E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X35E0);
    // 0x151767B0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x151767B4: lwc1        $f6, 0x35E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X35E4);
    // 0x151767B8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151767BC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151767C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x151767C4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x151767C8: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x151767CC: jal         0x1510AEE0
    // 0x151767D0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_1510AEE0(rdram, ctx);
        goto after_21;
    // 0x151767D0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_21:
    // 0x151767D4: beq         $v0, $zero, L_15176848
    if (ctx->r2 == 0) {
        // 0x151767D8: lui         $t9, 0x800D
        ctx->r25 = S32(0X800D << 16);
            goto L_15176848;
    }
    // 0x151767D8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x151767DC: lw          $t9, 0x2138($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2138);
    // 0x151767E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151767E4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151767E8: bne         $t9, $at, L_15176840
    if (ctx->r25 != ctx->r1) {
        // 0x151767EC: addiu       $a0, $a0, -0x63B0
        ctx->r4 = ADD32(ctx->r4, -0X63B0);
            goto L_15176840;
    }
    // 0x151767EC: addiu       $a0, $a0, -0x63B0
    ctx->r4 = ADD32(ctx->r4, -0X63B0);
    // 0x151767F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151767F4: lwc1        $f4, -0x64E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X64E0);
    // 0x151767F8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151767FC: lwc1        $f8, -0x64E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X64E4);
    // 0x15176800: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15176804: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x15176808: lw          $a2, 0x9C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X9C);
    // 0x1517680C: lw          $a3, 0xA0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XA0);
    // 0x15176810: lwc1        $f10, 0x35E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X35E0);
    // 0x15176814: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15176818: lwc1        $f6, 0x35E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X35E4);
    // 0x1517681C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15176820: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15176824: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15176828: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x1517682C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x15176830: jal         0x1510AEE0
    // 0x15176834: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_1510AEE0(rdram, ctx);
        goto after_22;
    // 0x15176834: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_22:
    // 0x15176838: beql        $v0, $zero, L_1517684C
    if (ctx->r2 == 0) {
        // 0x1517683C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1517684C;
    }
    goto skip_49;
    // 0x1517683C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_49:
L_15176840:
    // 0x15176840: jal         0x1516972C
    // 0x15176844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_23;
    // 0x15176844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
L_15176848:
    // 0x15176848: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1517684C:
    // 0x1517684C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15176850: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x15176854: jr          $ra
    // 0x15176858: nop

    return;
    return;
    // 0x15176858: nop

;}
RECOMP_FUNC void func_151DD460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DD460: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151DD464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151DD468: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x151DD46C: jal         0x10025750
    // 0x151DD470: nop

    __osSiGetAccess_recomp(rdram, ctx);
        goto after_0;
    // 0x151DD470: nop

    after_0:
    // 0x151DD474: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x151DD478: jal         0x151DD710
    // 0x151DD47C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_151DD710(rdram, ctx);
        goto after_1;
    // 0x151DD47C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x151DD480: beq         $v0, $zero, L_151DD490
    if (ctx->r2 == 0) {
        // 0x151DD484: lhu         $t6, 0x24($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0X24);
            goto L_151DD490;
    }
    // 0x151DD484: lhu         $t6, 0x24($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X24);
    // 0x151DD488: b           L_151DD4B8
    // 0x151DD48C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151DD4B8;
    // 0x151DD48C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151DD490:
    // 0x151DD490: andi        $t7, $t6, 0xC000
    ctx->r15 = ctx->r14 & 0XC000;
    // 0x151DD494: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x151DD498: beq         $t7, $at, L_151DD4B0
    if (ctx->r15 == ctx->r1) {
        // 0x151DD49C: ori         $at, $zero, 0xC000
        ctx->r1 = 0 | 0XC000;
            goto L_151DD4B0;
    }
    // 0x151DD49C: ori         $at, $zero, 0xC000
    ctx->r1 = 0 | 0XC000;
    // 0x151DD4A0: beq         $t7, $at, L_151DD4B8
    if (ctx->r15 == ctx->r1) {
        // 0x151DD4A4: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_151DD4B8;
    }
    // 0x151DD4A4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x151DD4A8: b           L_151DD4B8
    // 0x151DD4AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151DD4B8;
    // 0x151DD4AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151DD4B0:
    // 0x151DD4B0: b           L_151DD4B8
    // 0x151DD4B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_151DD4B8;
    // 0x151DD4B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151DD4B8:
    // 0x151DD4B8: jal         0x10025794
    // 0x151DD4BC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    __osSiRelAccess_recomp(rdram, ctx);
        goto after_2;
    // 0x151DD4BC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_2:
    // 0x151DD4C0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x151DD4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151DD4C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151DD4CC: jr          $ra
    // 0x151DD4D0: nop

    return;
    return;
    // 0x151DD4D0: nop

;}
RECOMP_FUNC void func_150EEF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EEF40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150EEF44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150EEF48: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150EEF4C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150EEF50: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x150EEF54: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x150EEF58: lbu         $t6, 0x3B($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3B);
    // 0x150EEF5C: sb          $a3, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r7;
    // 0x150EEF60: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x150EEF64: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    // 0x150EEF68: jal         0x151403A8
    // 0x150EEF6C: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    func_151403A8(rdram, ctx);
        goto after_0;
    // 0x150EEF6C: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x150EEF70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150EEF74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150EEF78: jr          $ra
    // 0x150EEF7C: nop

    return;
    return;
    // 0x150EEF7C: nop

;}
RECOMP_FUNC void func_1506FEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FEA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FEA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FEA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FEAC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FEB0: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FEB4: jal         0x151AABC4
    // 0x1506FEB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_151AABC4(rdram, ctx);
        goto after_0;
    // 0x1506FEB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x1506FEBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FEC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FEC4: jr          $ra
    // 0x1506FEC8: nop

    return;
    return;
    // 0x1506FEC8: nop

;}
RECOMP_FUNC void func_150F20F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F20F0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150F20F4: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150F20F8: addiu       $t0, $t0, -0x6710
    ctx->r8 = ADD32(ctx->r8, -0X6710);
    // 0x150F20FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150F2100: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x150F2104: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x150F2108: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150F210C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x150F2110: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150F2114: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x150F2118: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150F211C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x150F2120: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150F2124: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x150F2128: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150F212C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x150F2130: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150F2134: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150F2138: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x150F213C: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150F2140: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F2144: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x150F2148: nop

    // 0x150F214C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150F2150: nop

    // 0x150F2154: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x150F2158: beq         $v1, $zero, L_150F2184
    if (ctx->r3 == 0) {
        // 0x150F215C: add.s       $f2, $f4, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
            goto L_150F2184;
    }
    // 0x150F215C: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150F2160: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150F2164: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x150F2168: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x150F216C: beq         $at, $zero, L_150F217C
    if (ctx->r1 == 0) {
        // 0x150F2170: subu        $t8, $v1, $v0
        ctx->r24 = SUB32(ctx->r3, ctx->r2);
            goto L_150F217C;
    }
    // 0x150F2170: subu        $t8, $v1, $v0
    ctx->r24 = SUB32(ctx->r3, ctx->r2);
    // 0x150F2174: b           L_150F2220
    // 0x150F2178: sb          $t8, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r24;
        goto L_150F2220;
    // 0x150F2178: sb          $t8, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r24;
L_150F217C:
    // 0x150F217C: b           L_150F2220
    // 0x150F2180: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
        goto L_150F2220;
    // 0x150F2180: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
L_150F2184:
    // 0x150F2184: lwc1        $f8, 0x191C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X191C);
    // 0x150F2188: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150F218C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F2190: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x150F2194: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    // 0x150F2198: addiu       $t1, $zero, 0x4E20
    ctx->r9 = ADD32(0, 0X4E20);
    // 0x150F219C: addiu       $t2, $zero, 0x4A38
    ctx->r10 = ADD32(0, 0X4A38);
    // 0x150F21A0: bc1f        L_150F2220
    if (!c1cs) {
        // 0x150F21A4: addiu       $t3, $sp, 0x4C
        ctx->r11 = ADD32(ctx->r29, 0X4C);
            goto L_150F2220;
    }
    // 0x150F21A4: addiu       $t3, $sp, 0x4C
    ctx->r11 = ADD32(ctx->r29, 0X4C);
    // 0x150F21A8: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150F21AC: addiu       $t4, $sp, 0x48
    ctx->r12 = ADD32(ctx->r29, 0X48);
    // 0x150F21B0: addiu       $t5, $sp, 0x44
    ctx->r13 = ADD32(ctx->r29, 0X44);
    // 0x150F21B4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150F21B8: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x150F21BC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x150F21C0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150F21C4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x150F21C8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150F21CC: jal         0x100114D0
    // 0x150F21D0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_100114D0(rdram, ctx);
        goto after_0;
    // 0x150F21D0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_0:
    // 0x150F21D4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x150F21D8: addiu       $t7, $t6, 0x80
    ctx->r15 = ADD32(ctx->r14, 0X80);
    // 0x150F21DC: jal         0x150ADA20
    // 0x150F21E0: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150F21E0: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    after_1:
    // 0x150F21E4: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150F21E8: andi        $t8, $v0, 0x7F
    ctx->r24 = ctx->r2 & 0X7F;
    // 0x150F21EC: addiu       $t9, $t8, 0x80
    ctx->r25 = ADD32(ctx->r24, 0X80);
    // 0x150F21F0: addiu       $t0, $t0, -0x6710
    ctx->r8 = ADD32(ctx->r8, -0X6710);
    // 0x150F21F4: jal         0x150ADA20
    // 0x150F21F8: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150F21F8: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
    after_2:
    // 0x150F21FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150F2200: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F2204: mfhi        $a0
    ctx->r4 = hi;
    // 0x150F2208: addiu       $a0, $a0, 0x6C
    ctx->r4 = ADD32(ctx->r4, 0X6C);
    // 0x150F220C: addiu       $a1, $zero, 0x5DC0
    ctx->r5 = ADD32(0, 0X5DC0);
    // 0x150F2210: lbu         $a2, 0x4F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X4F);
    // 0x150F2214: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F2218: jal         0x10010F30
    // 0x150F221C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_3;
    // 0x150F221C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_150F2220:
    // 0x150F2220: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150F2224: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x150F2228: jr          $ra
    // 0x150F222C: nop

    return;
    return;
    // 0x150F222C: nop

;}
RECOMP_FUNC void func_150881CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150881CC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150881D0: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x150881D4: lw          $v1, 0x72A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X72A0);
    // 0x150881D8: sll         $t6, $a1, 5
    ctx->r14 = S32(ctx->r5 << 5);
    // 0x150881DC: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x150881E0: bne         $v1, $zero, L_150881F0
    if (ctx->r3 != 0) {
        // 0x150881E4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_150881F0;
    }
    // 0x150881E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150881E8: jr          $ra
    // 0x150881EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150881EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150881F0:
    // 0x150881F0: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    // 0x150881F4: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x150881F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150881FC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15088200: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15088204: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15088208: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x1508820C: nop

    // 0x15088210: jr          $ra
    // 0x15088214: nop

    return;
    return;
    // 0x15088214: nop

;}
RECOMP_FUNC void func_1000F1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000F1A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1000F1AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000F1B0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F1B4: sw          $zero, 0x2760($at)
    MEM_W(0X2760, ctx->r1) = 0;
    // 0x1000F1B8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F1BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1000F1C0: sb          $t6, 0x1FD9($at)
    MEM_B(0X1FD9, ctx->r1) = ctx->r14;
    // 0x1000F1C4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F1C8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x1000F1CC: sb          $zero, 0x1FD8($at)
    MEM_B(0X1FD8, ctx->r1) = 0;
    // 0x1000F1D0: addiu       $a0, $a0, 0x25E0
    ctx->r4 = ADD32(ctx->r4, 0X25E0);
    // 0x1000F1D4: jal         0x100226F0
    // 0x1000F1D8: addiu       $a1, $zero, 0x180
    ctx->r5 = ADD32(0, 0X180);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x1000F1D8: addiu       $a1, $zero, 0x180
    ctx->r5 = ADD32(0, 0X180);
    after_0:
    // 0x1000F1DC: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000F1E0: addiu       $v1, $v1, 0x25E0
    ctx->r3 = ADD32(ctx->r3, 0X25E0);
    // 0x1000F1E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1000F1E8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_1000F1EC:
    // 0x1000F1EC: addiu       $t8, $v0, 0x11
    ctx->r24 = ADD32(ctx->r2, 0X11);
    // 0x1000F1F0: addiu       $t9, $v0, 0x12
    ctx->r25 = ADD32(ctx->r2, 0X12);
    // 0x1000F1F4: addiu       $t0, $v0, 0x13
    ctx->r8 = ADD32(ctx->r2, 0X13);
    // 0x1000F1F8: addiu       $t7, $v0, 0x10
    ctx->r15 = ADD32(ctx->r2, 0X10);
    // 0x1000F1FC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1000F200: sh          $t0, 0x26($v1)
    MEM_H(0X26, ctx->r3) = ctx->r8;
    // 0x1000F204: sh          $t9, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r25;
    // 0x1000F208: sh          $t8, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r24;
    // 0x1000F20C: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x1000F210: bne         $v0, $a0, L_1000F1EC
    if (ctx->r2 != ctx->r4) {
        // 0x1000F214: sh          $t7, -0x2E($v1)
        MEM_H(-0X2E, ctx->r3) = ctx->r15;
            goto L_1000F1EC;
    }
    // 0x1000F214: sh          $t7, -0x2E($v1)
    MEM_H(-0X2E, ctx->r3) = ctx->r15;
    // 0x1000F218: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F21C: jal         0x100176EC
    // 0x1000F220: sw          $zero, 0x1F50($at)
    MEM_W(0X1F50, ctx->r1) = 0;
    func_100176EC(rdram, ctx);
        goto after_1;
    // 0x1000F220: sw          $zero, 0x1F50($at)
    MEM_W(0X1F50, ctx->r1) = 0;
    after_1:
    // 0x1000F224: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000F228: addiu       $v0, $v0, 0x1F61
    ctx->r2 = ADD32(ctx->r2, 0X1F61);
    // 0x1000F22C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x1000F230: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000F234: sb          $zero, 0x1F60($at)
    MEM_B(0X1F60, ctx->r1) = 0;
    // 0x1000F238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000F23C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1000F240: jr          $ra
    // 0x1000F244: nop

    return;
    return;
    // 0x1000F244: nop

;}
RECOMP_FUNC void func_15168A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15168A4C: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x15168A50: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x15168A54: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15168A58: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15168A5C: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x15168A60: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15168A64: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x15168A68: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x15168A6C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x15168A70: addiu       $t9, $t9, -0x31B0
    ctx->r25 = ADD32(ctx->r25, -0X31B0);
    // 0x15168A74: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x15168A78: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x15168A7C: beq         $t0, $zero, L_15168A88
    if (ctx->r8 == 0) {
        // 0x15168A80: sw          $t0, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r8;
            goto L_15168A88;
    }
    // 0x15168A80: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x15168A84: sw          $a0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r4;
L_15168A88:
    // 0x15168A88: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x15168A8C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x15168A90: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x15168A94: jr          $ra
    // 0x15168A98: nop

    return;
    return;
    // 0x15168A98: nop

;}
RECOMP_FUNC void func_1514C470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514C470: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x1514C474: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x1514C478: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x1514C47C: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x1514C480: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x1514C484: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x1514C488: lwc1        $f26, 0xC0($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x1514C48C: mov.s       $f28, $f12
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 12);
    ctx->f28.fl = ctx->f12.fl;
    // 0x1514C490: mov.s       $f30, $f14
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 14);
    ctx->f30.fl = ctx->f14.fl;
    // 0x1514C494: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x1514C498: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x1514C49C: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x1514C4A0: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x1514C4A4: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x1514C4A8: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x1514C4AC: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x1514C4B0: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x1514C4B4: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x1514C4B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1514C4BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1514C4C0: lbu         $t9, 0xC7($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XC7);
    // 0x1514C4C4: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x1514C4C8: c.lt.s      $f26, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f26.fl < ctx->f4.fl;
    // 0x1514C4CC: addiu       $t1, $t1, -0x5600
    ctx->r9 = ADD32(ctx->r9, -0X5600);
    // 0x1514C4D0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1514C4D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1514C4D8: bc1t        L_1514C640
    if (c1cs) {
        // 0x1514C4DC: addu        $s1, $t0, $t1
        ctx->r17 = ADD32(ctx->r8, ctx->r9);
            goto L_1514C640;
    }
    // 0x1514C4DC: addu        $s1, $t0, $t1
    ctx->r17 = ADD32(ctx->r8, ctx->r9);
    // 0x1514C4E0: trunc.w.s   $f6, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    ctx->f6.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x1514C4E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1514C4E8: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
    // 0x1514C4EC: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x1514C4F0: nop

    // 0x1514C4F4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x1514C4F8: beql        $t8, $zero, L_1514C544
    if (ctx->r24 == 0) {
        // 0x1514C4FC: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_1514C544;
    }
    goto skip_0;
    // 0x1514C4FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_0:
    // 0x1514C500: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1514C504: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1514C508: sub.s       $f10, $f20, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f28.fl;
    // 0x1514C50C: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x1514C510: lwc1        $f18, 0xB0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x1514C514: sub.s       $f8, $f26, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f26.fl - ctx->f16.fl;
    // 0x1514C518: sub.s       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f30.fl;
    // 0x1514C51C: div.s       $f0, $f16, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f8.fl);
    // 0x1514C520: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1514C524: mul.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1514C528: sub.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x1514C52C: mul.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1514C530: nop

    // 0x1514C534: mul.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1514C538: b           L_1514C578
    // 0x1514C53C: nop

        goto L_1514C578;
    // 0x1514C53C: nop

    // 0x1514C540: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_1514C544:
    // 0x1514C544: sub.s       $f6, $f20, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f28.fl;
    // 0x1514C548: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x1514C54C: lwc1        $f18, 0xB0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x1514C550: sub.s       $f4, $f26, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f26.fl - ctx->f16.fl;
    // 0x1514C554: sub.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f30.fl;
    // 0x1514C558: div.s       $f0, $f16, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x1514C55C: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1514C560: mul.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1514C564: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x1514C568: mul.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1514C56C: nop

    // 0x1514C570: mul.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1514C574: nop

L_1514C578:
    // 0x1514C578: mov.s       $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    ctx->f20.fl = ctx->f28.fl;
    // 0x1514C57C: swc1        $f28, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f28.u32l;
    // 0x1514C580: swc1        $f30, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f30.u32l;
    // 0x1514C584: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x1514C588: mov.s       $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    ctx->f24.fl = ctx->f18.fl;
    // 0x1514C58C: lwc1        $f30, 0xCC($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x1514C590: lbu         $s4, 0xD7($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0XD7);
    // 0x1514C594: lw          $s3, 0xD0($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD0);
    // 0x1514C598: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
L_1514C59C:
    // 0x1514C59C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x1514C5A0: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x1514C5A4: sra         $t2, $a1, 16
    ctx->r10 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1514C5A8: beq         $v0, $zero, L_1514C61C
    if (ctx->r2 == 0) {
        // 0x1514C5AC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_1514C61C;
    }
    // 0x1514C5AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1514C5B0: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x1514C5B4: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1514C5B8: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x1514C5BC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x1514C5C0: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x1514C5C4: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x1514C5C8: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x1514C5CC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1514C5D0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1514C5D4: swc1        $f28, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f28.u32l;
    // 0x1514C5D8: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x1514C5DC: swc1        $f30, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f30.u32l;
    // 0x1514C5E0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x1514C5E4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x1514C5E8: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x1514C5EC: swc1        $f12, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f12.u32l;
    // 0x1514C5F0: swc1        $f14, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f14.u32l;
    // 0x1514C5F4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x1514C5F8: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x1514C5FC: jalr        $v0
    // 0x1514C600: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x1514C600: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1514C604: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1514C608: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1514C60C: lwc1        $f2, 0x90($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X90);
    // 0x1514C610: lwc1        $f12, 0x94($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X94);
    // 0x1514C614: beq         $v0, $zero, L_1514C640
    if (ctx->r2 == 0) {
        // 0x1514C618: lwc1        $f14, 0x98($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X98);
            goto L_1514C640;
    }
    // 0x1514C618: lwc1        $f14, 0x98($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X98);
L_1514C61C:
    // 0x1514C61C: sub.s       $f26, $f26, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f26.fl = ctx->f26.fl - ctx->f16.fl;
    // 0x1514C620: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1514C624: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x1514C628: add.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f2.fl;
    // 0x1514C62C: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    // 0x1514C630: c.lt.s      $f28, $f26
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f28.fl < ctx->f26.fl;
    // 0x1514C634: add.s       $f22, $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f12.fl;
    // 0x1514C638: bc1t        L_1514C59C
    if (c1cs) {
        // 0x1514C63C: add.s       $f24, $f24, $f14
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f14.fl;
            goto L_1514C59C;
    }
    // 0x1514C63C: add.s       $f24, $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f14.fl;
L_1514C640:
    // 0x1514C640: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x1514C644: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x1514C648: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x1514C64C: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x1514C650: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x1514C654: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x1514C658: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x1514C65C: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x1514C660: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x1514C664: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x1514C668: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x1514C66C: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x1514C670: jr          $ra
    // 0x1514C674: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    return;
    // 0x1514C674: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_150D22A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D22A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D22AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D22B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150D22B4: jal         0x150D22D4
    // 0x150D22B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150D22D4(rdram, ctx);
        goto after_0;
    // 0x150D22B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150D22BC: jal         0x15149368
    // 0x150D22C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15149368(rdram, ctx);
        goto after_1;
    // 0x150D22C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150D22C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D22C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D22CC: jr          $ra
    // 0x150D22D0: nop

    return;
    return;
    // 0x150D22D0: nop

;}
RECOMP_FUNC void func_1507A270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A270: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507A274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507A278: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507A27C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507A280: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1507A284: lb          $a2, 0x1891($a2)
    ctx->r6 = MEM_B(ctx->r6, 0X1891);
    // 0x1507A288: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    // 0x1507A28C: jal         0x1503DE70
    // 0x1507A290: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_1503DE70(rdram, ctx);
        goto after_0;
    // 0x1507A290: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x1507A294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507A298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507A29C: jr          $ra
    // 0x1507A2A0: nop

    return;
    return;
    // 0x1507A2A0: nop

;}
RECOMP_FUNC void _allocatePVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001DF3C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x1001DF40: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1001DF44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1001DF48: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1001DF4C: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x1001DF50: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x1001DF54: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x1001DF58: beq         $t7, $zero, L_1001E018
    if (ctx->r15 == 0) {
        // 0x1001DF5C: sw          $t7, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r15;
            goto L_1001E018;
    }
    // 0x1001DF5C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x1001DF60: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x1001DF64: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x1001DF68: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x1001DF6C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1001DF70: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x1001DF74: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x1001DF78: beq         $t1, $zero, L_1001DF90
    if (ctx->r9 == 0) {
        // 0x1001DF7C: nop
    
            goto L_1001DF90;
    }
    // 0x1001DF7C: nop

    // 0x1001DF80: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x1001DF84: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x1001DF88: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x1001DF8C: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
L_1001DF90:
    // 0x1001DF90: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x1001DF94: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x1001DF98: beq         $t6, $zero, L_1001DFB0
    if (ctx->r14 == 0) {
        // 0x1001DF9C: nop
    
            goto L_1001DFB0;
    }
    // 0x1001DF9C: nop

    // 0x1001DFA0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x1001DFA4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1001DFA8: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x1001DFAC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_1001DFB0:
    // 0x1001DFB0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x1001DFB4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1001DFB8: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x1001DFBC: lw          $t1, -0x45BC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45BC);
    // 0x1001DFC0: addiu       $t2, $t1, 0xC
    ctx->r10 = ADD32(ctx->r9, 0XC);
    // 0x1001DFC4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1001DFC8: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x1001DFCC: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x1001DFD0: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1001DFD4: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x1001DFD8: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x1001DFDC: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x1001DFE0: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x1001DFE4: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x1001DFE8: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1001DFEC: beq         $t9, $zero, L_1001E004
    if (ctx->r25 == 0) {
        // 0x1001DFF0: nop
    
            goto L_1001E004;
    }
    // 0x1001DFF0: nop

    // 0x1001DFF4: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x1001DFF8: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x1001DFFC: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x1001E000: sw          $t0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r8;
L_1001E004:
    // 0x1001E004: lw          $t3, 0x14($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14);
    // 0x1001E008: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x1001E00C: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x1001E010: b           L_1001E150
    // 0x1001E014: nop

        goto L_1001E150;
    // 0x1001E014: nop

L_1001E018:
    // 0x1001E018: lui         $t5, 0x8003
    ctx->r13 = S32(0X8003 << 16);
    // 0x1001E01C: lw          $t5, -0x45BC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X45BC);
    // 0x1001E020: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x1001E024: beq         $t6, $zero, L_1001E0E4
    if (ctx->r14 == 0) {
        // 0x1001E028: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_1001E0E4;
    }
    // 0x1001E028: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1001E02C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1001E030: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x1001E034: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x1001E038: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x1001E03C: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x1001E040: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x1001E044: beq         $t1, $zero, L_1001E05C
    if (ctx->r9 == 0) {
        // 0x1001E048: nop
    
            goto L_1001E05C;
    }
    // 0x1001E048: nop

    // 0x1001E04C: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x1001E050: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x1001E054: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x1001E058: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
L_1001E05C:
    // 0x1001E05C: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x1001E060: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x1001E064: beq         $t5, $zero, L_1001E07C
    if (ctx->r13 == 0) {
        // 0x1001E068: nop
    
            goto L_1001E07C;
    }
    // 0x1001E068: nop

    // 0x1001E06C: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x1001E070: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1001E074: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x1001E078: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_1001E07C:
    // 0x1001E07C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x1001E080: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x1001E084: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x1001E088: lw          $t1, -0x45BC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45BC);
    // 0x1001E08C: addiu       $t0, $t1, 0xC
    ctx->r8 = ADD32(ctx->r9, 0XC);
    // 0x1001E090: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x1001E094: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x1001E098: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x1001E09C: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x1001E0A0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x1001E0A4: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x1001E0A8: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x1001E0AC: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x1001E0B0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x1001E0B4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1001E0B8: beq         $t8, $zero, L_1001E0D0
    if (ctx->r24 == 0) {
        // 0x1001E0BC: nop
    
            goto L_1001E0D0;
    }
    // 0x1001E0BC: nop

    // 0x1001E0C0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x1001E0C4: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x1001E0C8: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x1001E0CC: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
L_1001E0D0:
    // 0x1001E0D0: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x1001E0D4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x1001E0D8: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x1001E0DC: b           L_1001E150
    // 0x1001E0E0: nop

        goto L_1001E150;
    // 0x1001E0E0: nop

L_1001E0E4:
    // 0x1001E0E4: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x1001E0E8: lw          $t4, -0x45BC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X45BC);
    // 0x1001E0EC: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x1001E0F0: beq         $t5, $zero, L_1001E150
    if (ctx->r13 == 0) {
        // 0x1001E0F4: sw          $t5, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r13;
            goto L_1001E150;
    }
    // 0x1001E0F4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_1001E0F8:
    // 0x1001E0F8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x1001E0FC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x1001E100: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001E104: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x1001E108: lh          $t1, 0x1A($t8)
    ctx->r9 = MEM_H(ctx->r24, 0X1A);
    // 0x1001E10C: slt         $at, $a1, $t1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x1001E110: bne         $at, $zero, L_1001E140
    if (ctx->r1 != 0) {
        // 0x1001E114: nop
    
            goto L_1001E140;
    }
    // 0x1001E114: nop

    // 0x1001E118: lw          $t9, 0x90($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X90);
    // 0x1001E11C: bne         $t9, $zero, L_1001E140
    if (ctx->r25 != 0) {
        // 0x1001E120: nop
    
            goto L_1001E140;
    }
    // 0x1001E120: nop

    // 0x1001E124: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1001E128: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x1001E12C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x1001E130: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x1001E134: lh          $a1, 0x1A($t3)
    ctx->r5 = MEM_H(ctx->r11, 0X1A);
    // 0x1001E138: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1001E13C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_1001E140:
    // 0x1001E140: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x1001E144: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1001E148: bne         $t6, $zero, L_1001E0F8
    if (ctx->r14 != 0) {
        // 0x1001E14C: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_1001E0F8;
    }
    // 0x1001E14C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_1001E150:
    // 0x1001E150: b           L_1001E160
    // 0x1001E154: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_1001E160;
    // 0x1001E154: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x1001E158: b           L_1001E160
    // 0x1001E15C: nop

        goto L_1001E160;
    // 0x1001E15C: nop

L_1001E160:
    // 0x1001E160: jr          $ra
    // 0x1001E164: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1001E164: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1001E168: nop

    // 0x1001E16C: nop

;}
RECOMP_FUNC void _n_freeParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10019744: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10019748: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x1001974C: lw          $t7, 0x40($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X40);
    // 0x10019750: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x10019754: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10019758: lw          $t8, -0x45BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45BC);
    // 0x1001975C: sw          $a0, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->r4;
    // 0x10019760: jr          $ra
    // 0x10019764: nop

    return;
    return;
    // 0x10019764: nop

    // 0x10019768: jr          $ra
    // 0x1001976C: nop

    return;
    return;
    // 0x1001976C: nop

;}
RECOMP_FUNC void func_1519257C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519257C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15192580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15192584: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15192588: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1519258C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15192590: jal         0x15192308
    // 0x15192594: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_15192308(rdram, ctx);
        goto after_0;
    // 0x15192594: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x15192598: beq         $v0, $zero, L_151925B0
    if (ctx->r2 == 0) {
        // 0x1519259C: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_151925B0;
    }
    // 0x1519259C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x151925A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151925A4: jal         0x15192358
    // 0x151925A8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_15192358(rdram, ctx);
        goto after_1;
    // 0x151925A8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x151925AC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_151925B0:
    // 0x151925B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151925B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151925B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151925BC: jr          $ra
    // 0x151925C0: nop

    return;
    return;
    // 0x151925C0: nop

;}
RECOMP_FUNC void func_150BB700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BB700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150BB704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150BB708: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150BB70C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150BB710: addiu       $a1, $zero, 0x4047
    ctx->r5 = ADD32(0, 0X4047);
    // 0x150BB714: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150BB718: jal         0x1509BE40
    // 0x150BB71C: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_0;
    // 0x150BB71C: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_0:
    // 0x150BB720: beq         $v0, $zero, L_150BB738
    if (ctx->r2 == 0) {
        // 0x150BB724: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_150BB738;
    }
    // 0x150BB724: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x150BB728: lw          $t6, 0x84($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X84);
    // 0x150BB72C: ori         $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 | 0X1000;
    // 0x150BB730: b           L_150BB748
    // 0x150BB734: sw          $t7, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->r15;
        goto L_150BB748;
    // 0x150BB734: sw          $t7, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->r15;
L_150BB738:
    // 0x150BB738: lw          $t8, 0x84($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X84);
    // 0x150BB73C: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x150BB740: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x150BB744: sw          $t9, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->r25;
L_150BB748:
    // 0x150BB748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150BB74C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150BB750: jr          $ra
    // 0x150BB754: nop

    return;
    return;
    // 0x150BB754: nop

;}
RECOMP_FUNC void func_151C05F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C05F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151C05F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151C05F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151C05FC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151C0600: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x151C0604: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x151C0608: lui         $a3, 0x3A03
    ctx->r7 = S32(0X3A03 << 16);
    // 0x151C060C: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x151C0610: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x151C0614: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151C0618: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151C061C: ori         $a3, $a3, 0x126F
    ctx->r7 = ctx->r7 | 0X126F;
    // 0x151C0620: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    // 0x151C0624: lui         $a2, 0x44FA
    ctx->r6 = S32(0X44FA << 16);
    // 0x151C0628: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151C062C: jal         0x151D5404
    // 0x151C0630: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_151D5404(rdram, ctx);
        goto after_0;
    // 0x151C0630: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x151C0634: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151C0638: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151C063C: jr          $ra
    // 0x151C0640: nop

    return;
    return;
    // 0x151C0640: nop

;}
RECOMP_FUNC void func_1502DB20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502DB20: slti        $at, $a0, 0x3C
    ctx->r1 = SIGNED(ctx->r4) < 0X3C ? 1 : 0;
    // 0x1502DB24: bne         $at, $zero, L_1502DB4C
    if (ctx->r1 != 0) {
        // 0x1502DB28: addiu       $t6, $a0, -0x75
        ctx->r14 = ADD32(ctx->r4, -0X75);
            goto L_1502DB4C;
    }
    // 0x1502DB28: addiu       $t6, $a0, -0x75
    ctx->r14 = ADD32(ctx->r4, -0X75);
    // 0x1502DB2C: sltiu       $at, $t6, 0x40
    ctx->r1 = ctx->r14 < 0X40 ? 1 : 0;
    // 0x1502DB30: beq         $at, $zero, L_1502DB6C
    if (ctx->r1 == 0) {
        // 0x1502DB34: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_1502DB6C;
    }
    // 0x1502DB34: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502DB38: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1502DB3C: addu        $at, $at, $t6
    gpr jr_addend_1502DB44 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1502DB40: lw          $t6, 0x6DF8($at)
    ctx->r14 = ADD32(ctx->r1, 0X6DF8);
    // 0x1502DB44: jr          $t6
    // 0x1502DB48: nop

    switch (jr_addend_1502DB44 >> 2) {
        case 0: goto L_1502DB54; break;
        case 1: goto L_1502DB6C; break;
        case 2: goto L_1502DB6C; break;
        case 3: goto L_1502DB6C; break;
        case 4: goto L_1502DB6C; break;
        case 5: goto L_1502DB6C; break;
        case 6: goto L_1502DB6C; break;
        case 7: goto L_1502DB6C; break;
        case 8: goto L_1502DB6C; break;
        case 9: goto L_1502DB6C; break;
        case 10: goto L_1502DB6C; break;
        case 11: goto L_1502DB6C; break;
        case 12: goto L_1502DB6C; break;
        case 13: goto L_1502DB54; break;
        case 14: goto L_1502DB6C; break;
        case 15: goto L_1502DB6C; break;
        case 16: goto L_1502DB6C; break;
        case 17: goto L_1502DB6C; break;
        case 18: goto L_1502DB6C; break;
        case 19: goto L_1502DB54; break;
        case 20: goto L_1502DB6C; break;
        case 21: goto L_1502DB6C; break;
        case 22: goto L_1502DB6C; break;
        case 23: goto L_1502DB6C; break;
        case 24: goto L_1502DB6C; break;
        case 25: goto L_1502DB6C; break;
        case 26: goto L_1502DB6C; break;
        case 27: goto L_1502DB54; break;
        case 28: goto L_1502DB6C; break;
        case 29: goto L_1502DB6C; break;
        case 30: goto L_1502DB6C; break;
        case 31: goto L_1502DB6C; break;
        case 32: goto L_1502DB6C; break;
        case 33: goto L_1502DB54; break;
        case 34: goto L_1502DB6C; break;
        case 35: goto L_1502DB54; break;
        case 36: goto L_1502DB6C; break;
        case 37: goto L_1502DB6C; break;
        case 38: goto L_1502DB6C; break;
        case 39: goto L_1502DB54; break;
        case 40: goto L_1502DB54; break;
        case 41: goto L_1502DB6C; break;
        case 42: goto L_1502DB54; break;
        case 43: goto L_1502DB54; break;
        case 44: goto L_1502DB6C; break;
        case 45: goto L_1502DB6C; break;
        case 46: goto L_1502DB6C; break;
        case 47: goto L_1502DB6C; break;
        case 48: goto L_1502DB6C; break;
        case 49: goto L_1502DB6C; break;
        case 50: goto L_1502DB6C; break;
        case 51: goto L_1502DB6C; break;
        case 52: goto L_1502DB6C; break;
        case 53: goto L_1502DB6C; break;
        case 54: goto L_1502DB6C; break;
        case 55: goto L_1502DB6C; break;
        case 56: goto L_1502DB6C; break;
        case 57: goto L_1502DB6C; break;
        case 58: goto L_1502DB6C; break;
        case 59: goto L_1502DB6C; break;
        case 60: goto L_1502DB54; break;
        case 61: goto L_1502DB54; break;
        case 62: goto L_1502DB6C; break;
        case 63: goto L_1502DB54; break;
        default: switch_error(__func__, 0x1502DB44, 0x80096DF8);
    }
    // 0x1502DB48: nop

L_1502DB4C:
    // 0x1502DB4C: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x1502DB50: bne         $a0, $at, L_1502DB6C
    if (ctx->r4 != ctx->r1) {
        // 0x1502DB54: sll         $t7, $a0, 1
        ctx->r15 = S32(ctx->r4 << 1);
            goto L_1502DB6C;
    }
L_1502DB54:
    // 0x1502DB54: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x1502DB58: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1502DB5C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1502DB60: lhu         $v0, 0x4ED0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4ED0);
    // 0x1502DB64: jr          $ra
    // 0x1502DB68: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    return;
    return;
    // 0x1502DB68: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_1502DB6C:
    // 0x1502DB6C: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x1502DB70: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1502DB74: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x1502DB78: lhu         $v0, 0x4ED0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4ED0);
    // 0x1502DB7C: jr          $ra
    // 0x1502DB80: nop

    return;
    return;
    // 0x1502DB80: nop

;}
RECOMP_FUNC void func_1508A1BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508A1BC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x1508A1C0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1508A1C4: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x1508A1C8: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x1508A1CC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x1508A1D0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x1508A1D4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1508A1D8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1508A1DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1508A1E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1508A1E4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1508A1E8: lw          $v0, 0x23B0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X23B0);
    // 0x1508A1EC: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x1508A1F0: addiu       $ra, $zero, -0x1
    ctx->r31 = ADD32(0, -0X1);
    // 0x1508A1F4: addiu       $t6, $v0, 0xE64
    ctx->r14 = ADD32(ctx->r2, 0XE64);
    // 0x1508A1F8: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    // 0x1508A1FC: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x1508A200: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x1508A204: addiu       $t8, $v0, 0x15C
    ctx->r24 = ADD32(ctx->r2, 0X15C);
    // 0x1508A208: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x1508A20C: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x1508A210: lb          $t9, 0x1704($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X1704);
    // 0x1508A214: addiu       $a1, $v0, 0x39C
    ctx->r5 = ADD32(ctx->r2, 0X39C);
    // 0x1508A218: addiu       $s6, $v0, 0x9C
    ctx->r22 = ADD32(ctx->r2, 0X9C);
    // 0x1508A21C: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x1508A220: addiu       $t3, $v0, 0x5DC
    ctx->r11 = ADD32(ctx->r2, 0X5DC);
    // 0x1508A224: addiu       $t1, $v0, 0x9DC
    ctx->r9 = ADD32(ctx->r2, 0X9DC);
    // 0x1508A228: sb          $t6, 0x1704($v0)
    MEM_B(0X1704, ctx->r2) = ctx->r14;
    // 0x1508A22C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1508A230: lw          $v0, 0x23B0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X23B0);
    // 0x1508A234: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1508A238: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x1508A23C: lb          $v1, 0x1704($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1704);
    // 0x1508A240: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x1508A244: addiu       $s7, $zero, 0x7D00
    ctx->r23 = ADD32(0, 0X7D00);
    // 0x1508A248: bnel        $t7, $v1, L_1508A264
    if (ctx->r15 != ctx->r3) {
        // 0x1508A24C: sllv        $t9, $t8, $v1
        ctx->r25 = S32(ctx->r24 << (ctx->r3 & 31));
            goto L_1508A264;
    }
    goto skip_0;
    // 0x1508A24C: sllv        $t9, $t8, $v1
    ctx->r25 = S32(ctx->r24 << (ctx->r3 & 31));
    skip_0:
    // 0x1508A250: sb          $zero, 0x1704($v0)
    MEM_B(0X1704, ctx->r2) = 0;
    // 0x1508A254: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1508A258: lw          $v0, 0x23B0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X23B0);
    // 0x1508A25C: lb          $v1, 0x1704($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1704);
    // 0x1508A260: sllv        $t9, $t8, $v1
    ctx->r25 = S32(ctx->r24 << (ctx->r3 & 31));
L_1508A264:
    // 0x1508A264: sll         $t2, $v1, 4
    ctx->r10 = S32(ctx->r3 << 4);
    // 0x1508A268: and         $t6, $t9, $a0
    ctx->r14 = ctx->r25 & ctx->r4;
    // 0x1508A26C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x1508A270: bne         $t6, $zero, L_1508A2A8
    if (ctx->r14 != 0) {
        // 0x1508A274: or          $s1, $t2, $zero
        ctx->r17 = ctx->r10 | 0;
            goto L_1508A2A8;
    }
    // 0x1508A274: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x1508A278: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x1508A27C: addu        $v1, $t3, $t7
    ctx->r3 = ADD32(ctx->r11, ctx->r15);
    // 0x1508A280: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
L_1508A284:
    // 0x1508A284: addu        $v0, $v1, $t5
    ctx->r2 = ADD32(ctx->r3, ctx->r13);
    // 0x1508A288: addiu       $t5, $t5, 0x10
    ctx->r13 = ADD32(ctx->r13, 0X10);
    // 0x1508A28C: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x1508A290: sw          $ra, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r31;
    // 0x1508A294: sw          $ra, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r31;
    // 0x1508A298: bne         $t5, $a0, L_1508A284
    if (ctx->r13 != ctx->r4) {
        // 0x1508A29C: sw          $ra, 0xC($v0)
        MEM_W(0XC, ctx->r2) = ctx->r31;
            goto L_1508A284;
    }
    // 0x1508A29C: sw          $ra, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r31;
    // 0x1508A2A0: b           L_1508A6D0
    // 0x1508A2A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1508A6D0;
    // 0x1508A2A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1508A2A8:
    // 0x1508A2A8: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x1508A2AC: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x1508A2B0: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x1508A2B4: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x1508A2B8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1508A2BC: addu        $t9, $v0, $t6
    ctx->r25 = ADD32(ctx->r2, ctx->r14);
    // 0x1508A2C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1508A2C4: sw          $t8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r24;
    // 0x1508A2C8: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x1508A2CC: lw          $t7, 0x16C0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X16C0);
    // 0x1508A2D0: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x1508A2D4: blez        $t8, L_1508A63C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x1508A2D8: sw          $t7, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r15;
            goto L_1508A63C;
    }
    // 0x1508A2D8: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x1508A2DC: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x1508A2E0: addiu       $s4, $s4, -0x3D30
    ctx->r20 = ADD32(ctx->r20, -0X3D30);
    // 0x1508A2E4: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x1508A2E8: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x1508A2EC: addiu       $s5, $zero, 0x32C
    ctx->r21 = ADD32(0, 0X32C);
    // 0x1508A2F0: addiu       $ra, $zero, -0x1
    ctx->r31 = ADD32(0, -0X1);
L_1508A2F4:
    // 0x1508A2F4: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x1508A2F8: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x1508A2FC: blez        $t6, L_1508A628
    if (SIGNED(ctx->r14) <= 0) {
        // 0x1508A300: addu        $t8, $t7, $t5
        ctx->r24 = ADD32(ctx->r15, ctx->r13);
            goto L_1508A628;
    }
    // 0x1508A300: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x1508A304: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x1508A308: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x1508A30C: beql        $t9, $t6, L_1508A62C
    if (ctx->r25 == ctx->r14) {
        // 0x1508A310: lw          $t9, 0x70($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X70);
            goto L_1508A62C;
    }
    goto skip_1;
    // 0x1508A310: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    skip_1:
    // 0x1508A314: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1508A318: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x1508A31C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1508A320: lw          $t6, 0x23B0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X23B0);
    // 0x1508A324: addu        $t9, $s6, $t8
    ctx->r25 = ADD32(ctx->r22, ctx->r24);
    // 0x1508A328: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x1508A32C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x1508A330: lb          $a2, -0x270($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X270);
    // 0x1508A334: addu        $a1, $s6, $t5
    ctx->r5 = ADD32(ctx->r22, ctx->r13);
    // 0x1508A338: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x1508A33C: mflo        $t7
    ctx->r15 = lo;
    // 0x1508A340: addu        $v1, $s4, $t7
    ctx->r3 = ADD32(ctx->r20, ctx->r15);
    // 0x1508A344: beq         $v1, $zero, L_1508A398
    if (ctx->r3 == 0) {
        // 0x1508A348: lh          $a3, 0x16BC($t6)
        ctx->r7 = MEM_H(ctx->r14, 0X16BC);
            goto L_1508A398;
    }
    // 0x1508A348: lh          $a3, 0x16BC($t6)
    ctx->r7 = MEM_H(ctx->r14, 0X16BC);
    // 0x1508A34C: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x1508A350: lwc1        $f6, 0x14($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1508A354: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1508A358: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1508A35C: mflo        $t8
    ctx->r24 = lo;
    // 0x1508A360: addu        $v0, $s4, $t8
    ctx->r2 = ADD32(ctx->r20, ctx->r24);
    // 0x1508A364: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1508A368: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1508A36C: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1508A370: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1508A374: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1508A378: nop

    // 0x1508A37C: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1508A380: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1508A384: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1508A388: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x1508A38C: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x1508A390: b           L_1508A39C
    // 0x1508A394: nop

        goto L_1508A39C;
    // 0x1508A394: nop

L_1508A398:
    // 0x1508A398: addiu       $t0, $zero, 0x7D00
    ctx->r8 = ADD32(0, 0X7D00);
L_1508A39C:
    // 0x1508A39C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x1508A3A0: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x1508A3A4: or          $s2, $t0, $zero
    ctx->r18 = ctx->r8 | 0;
    // 0x1508A3A8: beq         $a0, $t6, L_1508A3B4
    if (ctx->r4 == ctx->r14) {
        // 0x1508A3AC: sllv        $t8, $t7, $s0
        ctx->r24 = S32(ctx->r15 << (ctx->r16 & 31));
            goto L_1508A3B4;
    }
    // 0x1508A3AC: sllv        $t8, $t7, $s0
    ctx->r24 = S32(ctx->r15 << (ctx->r16 & 31));
    // 0x1508A3B0: addiu       $t0, $t0, 0x1F4
    ctx->r8 = ADD32(ctx->r8, 0X1F4);
L_1508A3B4:
    // 0x1508A3B4: and         $t6, $t8, $t9
    ctx->r14 = ctx->r24 & ctx->r25;
    // 0x1508A3B8: beq         $t6, $zero, L_1508A3E0
    if (ctx->r14 == 0) {
        // 0x1508A3BC: slt         $at, $s0, $a2
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_1508A3E0;
    }
    // 0x1508A3BC: slt         $at, $s0, $a2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x1508A3C0: slti        $at, $t0, 0xBB9
    ctx->r1 = SIGNED(ctx->r8) < 0XBB9 ? 1 : 0;
    // 0x1508A3C4: bnel        $at, $zero, L_1508A41C
    if (ctx->r1 != 0) {
        // 0x1508A3C8: addiu       $at, $zero, 0xB7
        ctx->r1 = ADD32(0, 0XB7);
            goto L_1508A41C;
    }
    goto skip_2;
    // 0x1508A3C8: addiu       $at, $zero, 0xB7
    ctx->r1 = ADD32(0, 0XB7);
    skip_2:
    // 0x1508A3CC: lbu         $t7, 0x65($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X65);
    // 0x1508A3D0: beql        $t7, $zero, L_1508A41C
    if (ctx->r15 == 0) {
        // 0x1508A3D4: addiu       $at, $zero, 0xB7
        ctx->r1 = ADD32(0, 0XB7);
            goto L_1508A41C;
    }
    goto skip_3;
    // 0x1508A3D4: addiu       $at, $zero, 0xB7
    ctx->r1 = ADD32(0, 0XB7);
    skip_3:
    // 0x1508A3D8: b           L_1508A418
    // 0x1508A3DC: or          $t0, $ra, $zero
    ctx->r8 = ctx->r31 | 0;
        goto L_1508A418;
    // 0x1508A3DC: or          $t0, $ra, $zero
    ctx->r8 = ctx->r31 | 0;
L_1508A3E0:
    // 0x1508A3E0: bne         $at, $zero, L_1508A3EC
    if (ctx->r1 != 0) {
        // 0x1508A3E4: sll         $t8, $t0, 1
        ctx->r24 = S32(ctx->r8 << 1);
            goto L_1508A3EC;
    }
    // 0x1508A3E4: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x1508A3E8: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
L_1508A3EC:
    // 0x1508A3EC: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x1508A3F0: beq         $a3, $at, L_1508A418
    if (ctx->r7 == ctx->r1) {
        // 0x1508A3F4: lw          $t9, 0x64($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X64);
            goto L_1508A418;
    }
    // 0x1508A3F4: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x1508A3F8: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x1508A3FC: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x1508A400: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1508A404: beq         $v0, $at, L_1508A414
    if (ctx->r2 == ctx->r1) {
        // 0x1508A408: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_1508A414;
    }
    // 0x1508A408: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1508A40C: bnel        $v0, $at, L_1508A41C
    if (ctx->r2 != ctx->r1) {
        // 0x1508A410: addiu       $at, $zero, 0xB7
        ctx->r1 = ADD32(0, 0XB7);
            goto L_1508A41C;
    }
    goto skip_4;
    // 0x1508A410: addiu       $at, $zero, 0xB7
    ctx->r1 = ADD32(0, 0XB7);
    skip_4:
L_1508A414:
    // 0x1508A414: or          $t0, $ra, $zero
    ctx->r8 = ctx->r31 | 0;
L_1508A418:
    // 0x1508A418: addiu       $at, $zero, 0xB7
    ctx->r1 = ADD32(0, 0XB7);
L_1508A41C:
    // 0x1508A41C: bnel        $a3, $at, L_1508A4D0
    if (ctx->r7 != ctx->r1) {
        // 0x1508A420: slt         $at, $s0, $a2
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_1508A4D0;
    }
    goto skip_5;
    // 0x1508A420: slt         $at, $s0, $a2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
    skip_5:
    // 0x1508A424: bne         $t0, $ra, L_1508A430
    if (ctx->r8 != ctx->r31) {
        // 0x1508A428: slt         $at, $s0, $a2
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_1508A430;
    }
    // 0x1508A428: slt         $at, $s0, $a2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x1508A42C: or          $t0, $s2, $zero
    ctx->r8 = ctx->r18 | 0;
L_1508A430:
    // 0x1508A430: lbu         $t7, 0x13C($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X13C);
    // 0x1508A434: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x1508A438: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x1508A43C: beq         $t7, $zero, L_1508A4CC
    if (ctx->r15 == 0) {
        // 0x1508A440: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_1508A4CC;
    }
    // 0x1508A440: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x1508A444: bne         $at, $zero, L_1508A454
    if (ctx->r1 != 0) {
        // 0x1508A448: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_1508A454;
    }
    // 0x1508A448: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x1508A44C: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x1508A450: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
L_1508A454:
    // 0x1508A454: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
    // 0x1508A458: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x1508A45C: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x1508A460: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
    // 0x1508A464: sw          $t4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r12;
    // 0x1508A468: jal         0x150859AC
    // 0x1508A46C: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    func_150859AC(rdram, ctx);
        goto after_0;
    // 0x1508A46C: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    after_0:
    // 0x1508A470: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x1508A474: addiu       $t6, $v0, 0x2
    ctx->r14 = ADD32(ctx->r2, 0X2);
    // 0x1508A478: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x1508A47C: div         $zero, $t0, $t6
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r14)));
    // 0x1508A480: lb          $a2, -0x270($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X270);
    // 0x1508A484: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x1508A488: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x1508A48C: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x1508A490: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x1508A494: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x1508A498: addiu       $ra, $zero, -0x1
    ctx->r31 = ADD32(0, -0X1);
    // 0x1508A49C: bne         $t6, $zero, L_1508A4A8
    if (ctx->r14 != 0) {
        // 0x1508A4A0: nop
    
            goto L_1508A4A8;
    }
    // 0x1508A4A0: nop

    // 0x1508A4A4: break       7
    do_break(352887972);
L_1508A4A8:
    // 0x1508A4A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1508A4AC: bne         $t6, $at, L_1508A4C0
    if (ctx->r14 != ctx->r1) {
        // 0x1508A4B0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1508A4C0;
    }
    // 0x1508A4B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1508A4B4: bne         $t0, $at, L_1508A4C0
    if (ctx->r8 != ctx->r1) {
        // 0x1508A4B8: nop
    
            goto L_1508A4C0;
    }
    // 0x1508A4B8: nop

    // 0x1508A4BC: break       6
    do_break(352887996);
L_1508A4C0:
    // 0x1508A4C0: mflo        $t0
    ctx->r8 = lo;
    // 0x1508A4C4: nop

    // 0x1508A4C8: nop

L_1508A4CC:
    // 0x1508A4CC: slt         $at, $s0, $a2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
L_1508A4D0:
    // 0x1508A4D0: beq         $at, $zero, L_1508A504
    if (ctx->r1 == 0) {
        // 0x1508A4D4: nop
    
            goto L_1508A504;
    }
    // 0x1508A4D4: nop

    // 0x1508A4D8: beq         $t0, $ra, L_1508A504
    if (ctx->r8 == ctx->r31) {
        // 0x1508A4DC: nop
    
            goto L_1508A504;
    }
    // 0x1508A4DC: nop

    // 0x1508A4E0: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x1508A4E4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1508A4E8: lw          $t7, 0x23B0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X23B0);
    // 0x1508A4EC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1508A4F0: lwc1        $f10, 0x16B8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X16B8);
    // 0x1508A4F4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1508A4F8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1508A4FC: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x1508A500: nop

L_1508A504:
    // 0x1508A504: bltzl       $t0, L_1508A61C
    if (SIGNED(ctx->r8) < 0) {
        // 0x1508A508: slt         $at, $s2, $s7
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r23) ? 1 : 0;
            goto L_1508A61C;
    }
    goto skip_6;
    // 0x1508A508: slt         $at, $s2, $s7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r23) ? 1 : 0;
    skip_6:
    // 0x1508A50C: blez        $t4, L_1508A558
    if (SIGNED(ctx->r12) <= 0) {
        // 0x1508A510: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_1508A558;
    }
    // 0x1508A510: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1508A514: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x1508A518: addu        $t6, $t1, $t9
    ctx->r14 = ADD32(ctx->r9, ctx->r25);
    // 0x1508A51C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1508A520: slt         $at, $t7, $t0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1508A524: beql        $at, $zero, L_1508A55C
    if (ctx->r1 == 0) {
        // 0x1508A528: slt         $at, $a2, $t4
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r12) ? 1 : 0;
            goto L_1508A55C;
    }
    goto skip_7;
    // 0x1508A528: slt         $at, $a2, $t4
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r12) ? 1 : 0;
    skip_7:
    // 0x1508A52C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_1508A530:
    // 0x1508A530: slt         $at, $a2, $t4
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x1508A534: beq         $at, $zero, L_1508A558
    if (ctx->r1 == 0) {
        // 0x1508A538: sll         $t8, $s1, 2
        ctx->r24 = S32(ctx->r17 << 2);
            goto L_1508A558;
    }
    // 0x1508A538: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x1508A53C: addu        $t9, $t1, $t8
    ctx->r25 = ADD32(ctx->r9, ctx->r24);
    // 0x1508A540: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x1508A544: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x1508A548: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1508A54C: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1508A550: bnel        $at, $zero, L_1508A530
    if (ctx->r1 != 0) {
        // 0x1508A554: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_1508A530;
    }
    goto skip_8;
    // 0x1508A554: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_8:
L_1508A558:
    // 0x1508A558: slt         $at, $a2, $t4
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r12) ? 1 : 0;
L_1508A55C:
    // 0x1508A55C: beq         $at, $zero, L_1508A5FC
    if (ctx->r1 == 0) {
        // 0x1508A560: or          $a1, $t4, $zero
        ctx->r5 = ctx->r12 | 0;
            goto L_1508A5FC;
    }
    // 0x1508A560: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x1508A564: subu        $v0, $t4, $a2
    ctx->r2 = SUB32(ctx->r12, ctx->r6);
    // 0x1508A568: andi        $t9, $v0, 0x3
    ctx->r25 = ctx->r2 & 0X3;
    // 0x1508A56C: negu        $v0, $t9
    ctx->r2 = SUB32(0, ctx->r25);
    // 0x1508A570: beq         $v0, $zero, L_1508A5A4
    if (ctx->r2 == 0) {
        // 0x1508A574: addu        $a3, $v0, $t4
        ctx->r7 = ADD32(ctx->r2, ctx->r12);
            goto L_1508A5A4;
    }
    // 0x1508A574: addu        $a3, $v0, $t4
    ctx->r7 = ADD32(ctx->r2, ctx->r12);
L_1508A578:
    // 0x1508A578: addu        $a0, $t2, $a1
    ctx->r4 = ADD32(ctx->r10, ctx->r5);
    // 0x1508A57C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1508A580: addu        $v0, $t3, $t6
    ctx->r2 = ADD32(ctx->r11, ctx->r14);
    // 0x1508A584: lw          $t7, -0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, -0X4);
    // 0x1508A588: addu        $v1, $t1, $t6
    ctx->r3 = ADD32(ctx->r9, ctx->r14);
    // 0x1508A58C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x1508A590: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1508A594: lw          $t8, -0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X4);
    // 0x1508A598: bne         $a3, $a1, L_1508A578
    if (ctx->r7 != ctx->r5) {
        // 0x1508A59C: sw          $t8, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r24;
            goto L_1508A578;
    }
    // 0x1508A59C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x1508A5A0: beq         $a2, $a1, L_1508A5FC
    if (ctx->r6 == ctx->r5) {
        // 0x1508A5A4: addu        $a0, $t2, $a1
        ctx->r4 = ADD32(ctx->r10, ctx->r5);
            goto L_1508A5FC;
    }
L_1508A5A4:
    // 0x1508A5A4: addu        $a0, $t2, $a1
    ctx->r4 = ADD32(ctx->r10, ctx->r5);
    // 0x1508A5A8: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x1508A5AC: addu        $v0, $t3, $t9
    ctx->r2 = ADD32(ctx->r11, ctx->r25);
    // 0x1508A5B0: lw          $t6, -0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, -0X4);
    // 0x1508A5B4: addu        $v1, $t1, $t9
    ctx->r3 = ADD32(ctx->r9, ctx->r25);
    // 0x1508A5B8: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x1508A5BC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1508A5C0: lw          $t7, -0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, -0X4);
    // 0x1508A5C4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x1508A5C8: lw          $t8, -0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, -0X8);
    // 0x1508A5CC: sw          $t8, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r24;
    // 0x1508A5D0: lw          $t9, -0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X8);
    // 0x1508A5D4: sw          $t9, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r25;
    // 0x1508A5D8: lw          $t6, -0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, -0XC);
    // 0x1508A5DC: sw          $t6, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r14;
    // 0x1508A5E0: lw          $t7, -0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, -0XC);
    // 0x1508A5E4: sw          $t7, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r15;
    // 0x1508A5E8: lw          $t8, -0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, -0X10);
    // 0x1508A5EC: sw          $t8, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->r24;
    // 0x1508A5F0: lw          $t9, -0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, -0X10);
    // 0x1508A5F4: bne         $a2, $a1, L_1508A5A4
    if (ctx->r6 != ctx->r5) {
        // 0x1508A5F8: sw          $t9, -0xC($v1)
        MEM_W(-0XC, ctx->r3) = ctx->r25;
            goto L_1508A5A4;
    }
    // 0x1508A5F8: sw          $t9, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r25;
L_1508A5FC:
    // 0x1508A5FC: addu        $v0, $t2, $a2
    ctx->r2 = ADD32(ctx->r10, ctx->r6);
    // 0x1508A600: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1508A604: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x1508A608: sw          $s0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r16;
    // 0x1508A60C: addu        $t8, $t1, $t6
    ctx->r24 = ADD32(ctx->r9, ctx->r14);
    // 0x1508A610: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x1508A614: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    // 0x1508A618: slt         $at, $s2, $s7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r23) ? 1 : 0;
L_1508A61C:
    // 0x1508A61C: beql        $at, $zero, L_1508A62C
    if (ctx->r1 == 0) {
        // 0x1508A620: lw          $t9, 0x70($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X70);
            goto L_1508A62C;
    }
    goto skip_9;
    // 0x1508A620: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    skip_9:
    // 0x1508A624: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
L_1508A628:
    // 0x1508A628: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
L_1508A62C:
    // 0x1508A62C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1508A630: addiu       $t5, $t5, 0x4
    ctx->r13 = ADD32(ctx->r13, 0X4);
    // 0x1508A634: bne         $s0, $t9, L_1508A2F4
    if (ctx->r16 != ctx->r25) {
        // 0x1508A638: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_1508A2F4;
    }
    // 0x1508A638: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
L_1508A63C:
    // 0x1508A63C: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x1508A640: addiu       $ra, $zero, -0x1
    ctx->r31 = ADD32(0, -0X1);
    // 0x1508A644: beq         $at, $zero, L_1508A6B0
    if (ctx->r1 == 0) {
        // 0x1508A648: or          $s0, $t4, $zero
        ctx->r16 = ctx->r12 | 0;
            goto L_1508A6B0;
    }
    // 0x1508A648: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x1508A64C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x1508A650: subu        $a0, $a1, $t4
    ctx->r4 = SUB32(ctx->r5, ctx->r12);
    // 0x1508A654: andi        $t6, $a0, 0x3
    ctx->r14 = ctx->r4 & 0X3;
    // 0x1508A658: beq         $t6, $zero, L_1508A684
    if (ctx->r14 == 0) {
        // 0x1508A65C: addu        $v0, $t6, $t4
        ctx->r2 = ADD32(ctx->r14, ctx->r12);
            goto L_1508A684;
    }
    // 0x1508A65C: addu        $v0, $t6, $t4
    ctx->r2 = ADD32(ctx->r14, ctx->r12);
    // 0x1508A660: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x1508A664: addu        $v1, $t3, $t7
    ctx->r3 = ADD32(ctx->r11, ctx->r15);
    // 0x1508A668: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
L_1508A66C:
    // 0x1508A66C: addu        $t8, $v1, $t5
    ctx->r24 = ADD32(ctx->r3, ctx->r13);
    // 0x1508A670: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1508A674: sw          $ra, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r31;
    // 0x1508A678: bne         $v0, $s0, L_1508A66C
    if (ctx->r2 != ctx->r16) {
        // 0x1508A67C: addiu       $t5, $t5, 0x4
        ctx->r13 = ADD32(ctx->r13, 0X4);
            goto L_1508A66C;
    }
    // 0x1508A67C: addiu       $t5, $t5, 0x4
    ctx->r13 = ADD32(ctx->r13, 0X4);
    // 0x1508A680: beq         $s0, $a1, L_1508A6B0
    if (ctx->r16 == ctx->r5) {
        // 0x1508A684: sll         $t9, $t2, 2
        ctx->r25 = S32(ctx->r10 << 2);
            goto L_1508A6B0;
    }
L_1508A684:
    // 0x1508A684: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x1508A688: addu        $v1, $t3, $t9
    ctx->r3 = ADD32(ctx->r11, ctx->r25);
    // 0x1508A68C: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x1508A690: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
L_1508A694:
    // 0x1508A694: addu        $v0, $v1, $t5
    ctx->r2 = ADD32(ctx->r3, ctx->r13);
    // 0x1508A698: addiu       $t5, $t5, 0x10
    ctx->r13 = ADD32(ctx->r13, 0X10);
    // 0x1508A69C: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x1508A6A0: sw          $ra, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r31;
    // 0x1508A6A4: sw          $ra, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r31;
    // 0x1508A6A8: bne         $t5, $a0, L_1508A694
    if (ctx->r13 != ctx->r4) {
        // 0x1508A6AC: sw          $ra, 0xC($v0)
        MEM_W(0XC, ctx->r2) = ctx->r31;
            goto L_1508A694;
    }
    // 0x1508A6AC: sw          $ra, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r31;
L_1508A6B0:
    // 0x1508A6B0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1508A6B4: lw          $v0, 0x23B0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X23B0);
    // 0x1508A6B8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x1508A6BC: addiu       $t6, $v0, 0x51C
    ctx->r14 = ADD32(ctx->r2, 0X51C);
    // 0x1508A6C0: beq         $t6, $zero, L_1508A6CC
    if (ctx->r14 == 0) {
        // 0x1508A6C4: addu        $t8, $v0, $t7
        ctx->r24 = ADD32(ctx->r2, ctx->r15);
            goto L_1508A6CC;
    }
    // 0x1508A6C4: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x1508A6C8: sw          $s7, 0x51C($t8)
    MEM_W(0X51C, ctx->r24) = ctx->r23;
L_1508A6CC:
    // 0x1508A6CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1508A6D0:
    // 0x1508A6D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1508A6D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1508A6D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1508A6DC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1508A6E0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1508A6E4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x1508A6E8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x1508A6EC: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x1508A6F0: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x1508A6F4: jr          $ra
    // 0x1508A6F8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    return;
    // 0x1508A6F8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_15125924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15125924: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15125928: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1512592C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15125930: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15125934: lw          $v0, 0x3D4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3D4);
    // 0x15125938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1512593C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15125940: beq         $v0, $zero, L_15125960
    if (ctx->r2 == 0) {
        // 0x15125944: nop
    
            goto L_15125960;
    }
    // 0x15125944: nop

    // 0x15125948: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1512594C: lbu         $v1, 0x4E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4E);
    // 0x15125950: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15125954: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15125958: b           L_15125964
    // 0x1512595C: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
        goto L_15125964;
    // 0x1512595C: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
L_15125960:
    // 0x15125960: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
L_15125964:
    // 0x15125964: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x15125968: bnel        $t8, $zero, L_15125A5C
    if (ctx->r24 != 0) {
        // 0x1512596C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15125A5C;
    }
    goto skip_0;
    // 0x1512596C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x15125970: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x15125974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15125978: andi        $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 & 0X4000;
    // 0x1512597C: bnel        $t0, $zero, L_15125998
    if (ctx->r8 != 0) {
        // 0x15125980: sw          $v1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r3;
            goto L_15125998;
    }
    goto skip_1;
    // 0x15125980: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    skip_1:
    // 0x15125984: lw          $t1, 0x3D0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3D0);
    // 0x15125988: lbu         $t2, 0x102($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X102);
    // 0x1512598C: beql        $t2, $zero, L_15125A5C
    if (ctx->r10 == 0) {
        // 0x15125990: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15125A5C;
    }
    goto skip_2;
    // 0x15125990: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x15125994: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
L_15125998:
    // 0x15125998: jal         0x15125490
    // 0x1512599C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    func_15125490(rdram, ctx);
        goto after_0;
    // 0x1512599C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_0:
    // 0x151259A0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x151259A4: beq         $v0, $zero, L_15125A00
    if (ctx->r2 == 0) {
        // 0x151259A8: lw          $a1, 0x28($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X28);
            goto L_15125A00;
    }
    // 0x151259A8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151259AC: bnel        $v1, $zero, L_15125A04
    if (ctx->r3 != 0) {
        // 0x151259B0: lw          $t7, 0x2C($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X2C);
            goto L_15125A04;
    }
    goto skip_3;
    // 0x151259B0: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    skip_3:
    // 0x151259B4: bne         $a1, $zero, L_15125A00
    if (ctx->r5 != 0) {
        // 0x151259B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15125A00;
    }
    // 0x151259B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151259BC: addiu       $t3, $zero, 0xD
    ctx->r11 = ADD32(0, 0XD);
    // 0x151259C0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151259C4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x151259C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151259CC: jal         0x15123934
    // 0x151259D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15123934(rdram, ctx);
        goto after_1;
    // 0x151259D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x151259D4: beql        $v0, $zero, L_15125A5C
    if (ctx->r2 == 0) {
        // 0x151259D8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15125A5C;
    }
    goto skip_4;
    // 0x151259D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x151259DC: lw          $t4, 0x6C8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X6C8);
    // 0x151259E0: bnel        $t4, $zero, L_15125A5C
    if (ctx->r12 != 0) {
        // 0x151259E4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15125A5C;
    }
    goto skip_5;
    // 0x151259E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x151259E8: jal         0x15124B18
    // 0x151259EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15124B18(rdram, ctx);
        goto after_2;
    // 0x151259EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x151259F0: lw          $t5, 0x5F0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5F0);
    // 0x151259F4: ori         $t6, $t5, 0x1000
    ctx->r14 = ctx->r13 | 0X1000;
    // 0x151259F8: b           L_15125A58
    // 0x151259FC: sw          $t6, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r14;
        goto L_15125A58;
    // 0x151259FC: sw          $t6, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r14;
L_15125A00:
    // 0x15125A00: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
L_15125A04:
    // 0x15125A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15125A08: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x15125A0C: beql        $t8, $zero, L_15125A2C
    if (ctx->r24 == 0) {
        // 0x15125A10: lw          $v0, 0x5F0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X5F0);
            goto L_15125A2C;
    }
    goto skip_6;
    // 0x15125A10: lw          $v0, 0x5F0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5F0);
    skip_6:
    // 0x15125A14: jal         0x151239CC
    // 0x15125A18: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_151239CC(rdram, ctx);
        goto after_3;
    // 0x15125A18: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_3:
    // 0x15125A1C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15125A20: nop

    // 0x15125A24: swc1        $f8, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f8.u32l;
    // 0x15125A28: lw          $v0, 0x5F0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5F0);
L_15125A2C:
    // 0x15125A2C: andi        $t9, $v0, 0x1000
    ctx->r25 = ctx->r2 & 0X1000;
    // 0x15125A30: beql        $t9, $zero, L_15125A5C
    if (ctx->r25 == 0) {
        // 0x15125A34: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15125A5C;
    }
    goto skip_7;
    // 0x15125A34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_7:
    // 0x15125A38: lwc1        $f10, 0x2FC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x15125A3C: lwc1        $f16, 0x354($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X354);
    // 0x15125A40: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x15125A44: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x15125A48: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15125A4C: sw          $t0, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r8;
    // 0x15125A50: swc1        $f0, 0x344($s0)
    MEM_W(0X344, ctx->r16) = ctx->f0.u32l;
    // 0x15125A54: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
L_15125A58:
    // 0x15125A58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15125A5C:
    // 0x15125A5C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15125A60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15125A64: jr          $ra
    // 0x15125A68: nop

    return;
    return;
    // 0x15125A68: nop

;}
RECOMP_FUNC void func_1514FB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514FB98: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1514FB9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1514FBA0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1514FBA4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1514FBA8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1514FBAC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x1514FBB0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x1514FBB4: jal         0x15146078
    // 0x1514FBB8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_15146078(rdram, ctx);
        goto after_0;
    // 0x1514FBB8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x1514FBBC: beq         $v0, $zero, L_1514FBEC
    if (ctx->r2 == 0) {
        // 0x1514FBC0: lw          $a1, 0x40($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X40);
            goto L_1514FBEC;
    }
    // 0x1514FBC0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x1514FBC4: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x1514FBC8: lbu         $t6, 0x47($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X47);
    // 0x1514FBCC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x1514FBD0: addiu       $a0, $a1, 0x10
    ctx->r4 = ADD32(ctx->r5, 0X10);
    // 0x1514FBD4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x1514FBD8: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x1514FBDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1514FBE0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1514FBE4: jal         0x1514F8F8
    // 0x1514FBE8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_1514F8F8(rdram, ctx);
        goto after_1;
    // 0x1514FBE8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_1:
L_1514FBEC:
    // 0x1514FBEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1514FBF0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1514FBF4: jr          $ra
    // 0x1514FBF8: nop

    return;
    return;
    // 0x1514FBF8: nop

;}
RECOMP_FUNC void func_151CD7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CD7BC: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x151CD7C0: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x151CD7C4: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x151CD7C8: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x151CD7CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151CD7D0: addiu       $s2, $s2, -0x165C
    ctx->r18 = ADD32(ctx->r18, -0X165C);
    // 0x151CD7D4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x151CD7D8: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x151CD7DC: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x151CD7E0: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x151CD7E4: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x151CD7E8: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x151CD7EC: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x151CD7F0: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x151CD7F4: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x151CD7F8: lw          $s1, 0x98($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X98);
    // 0x151CD7FC: lwc1        $f6, 0x0($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X0);
    // 0x151CD800: lw          $s3, 0x94($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X94);
    // 0x151CD804: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x151CD808: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x151CD80C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151CD810: lwc1        $f6, 0x14($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14);
    // 0x151CD814: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151CD818: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x151CD81C: lwc1        $f10, 0x0($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X0);
    // 0x151CD820: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x151CD824: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    // 0x151CD828: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x151CD82C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151CD830: jal         0x15144B68
    // 0x151CD834: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    func_15144B68(rdram, ctx);
        goto after_0;
    // 0x151CD834: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    after_0:
    // 0x151CD838: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x151CD83C: jal         0x15144B68
    // 0x151CD840: lwc1        $f12, 0xC($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XC);
    func_15144B68(rdram, ctx);
        goto after_1;
    // 0x151CD840: lwc1        $f12, 0xC($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XC);
    after_1:
    // 0x151CD844: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
    // 0x151CD848: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
    // 0x151CD84C: lwc1        $f10, 0x30($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X30);
    // 0x151CD850: lwc1        $f6, 0x2C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x151CD854: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x151CD858: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151CD85C: swc1        $f10, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f10.u32l;
    // 0x151CD860: jal         0x15144B68
    // 0x151CD864: lwc1        $f12, 0x2C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X2C);
    func_15144B68(rdram, ctx);
        goto after_2;
    // 0x151CD864: lwc1        $f12, 0x2C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X2C);
    after_2:
    // 0x151CD868: swc1        $f0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f0.u32l;
    // 0x151CD86C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CD870: lwc1        $f4, -0x5038($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5038);
    // 0x151CD874: lwc1        $f6, 0x0($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X0);
    // 0x151CD878: lwc1        $f10, 0x40($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X40);
    // 0x151CD87C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151CD880: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151CD884: jal         0x150ADA68
    // 0x151CD888: swc1        $f4, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151CD888: swc1        $f4, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f4.u32l;
    after_3:
    // 0x151CD88C: lui         $at, 0x4680
    ctx->r1 = S32(0X4680 << 16);
    // 0x151CD890: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151CD894: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CD898: lwc1        $f6, -0x5034($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5034);
    // 0x151CD89C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CD8A0: lwc1        $f10, -0x5030($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5030);
    // 0x151CD8A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CD8A8: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151CD8AC: lwc1        $f10, -0x502C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X502C);
    // 0x151CD8B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151CD8B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151CD8B8: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151CD8BC: lwc1        $f8, 0x0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X0);
    // 0x151CD8C0: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x151CD8C4: lwc1        $f10, 0x3C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x151CD8C8: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151CD8CC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151CD8D0: swc1        $f6, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f6.u32l;
    // 0x151CD8D4: lwc1        $f2, 0x3C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x151CD8D8: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x151CD8DC: nop

    // 0x151CD8E0: bc1fl       L_151CD908
    if (!c1cs) {
        // 0x151CD8E4: lwc1        $f0, 0x40($s1)
        ctx->f0.u32l = MEM_W(ctx->r17, 0X40);
            goto L_151CD908;
    }
    goto skip_0;
    // 0x151CD8E4: lwc1        $f0, 0x40($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X40);
    skip_0:
    // 0x151CD8E8: sub.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f12.fl;
L_151CD8EC:
    // 0x151CD8EC: swc1        $f8, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f8.u32l;
    // 0x151CD8F0: lwc1        $f2, 0x3C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x151CD8F4: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x151CD8F8: nop

    // 0x151CD8FC: bc1tl       L_151CD8EC
    if (c1cs) {
        // 0x151CD900: sub.s       $f8, $f2, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_151CD8EC;
    }
    goto skip_1;
    // 0x151CD900: sub.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f12.fl;
    skip_1:
    // 0x151CD904: lwc1        $f0, 0x40($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X40);
L_151CD908:
    // 0x151CD908: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x151CD90C: nop

    // 0x151CD910: bc1fl       L_151CDB60
    if (!c1cs) {
        // 0x151CD914: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151CDB60;
    }
    goto skip_2;
    // 0x151CD914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x151CD918: div.s       $f28, $f18, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f28.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151CD91C: lwc1        $f10, 0x20($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X20);
    // 0x151CD920: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
    // 0x151CD924: addiu       $v0, $s1, 0x18
    ctx->r2 = ADD32(ctx->r17, 0X18);
    // 0x151CD928: addiu       $t6, $sp, 0x9C
    ctx->r14 = ADD32(ctx->r29, 0X9C);
    // 0x151CD92C: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151CD930: mul.s       $f6, $f16, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f28.fl);
    // 0x151CD934: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x151CD938: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x151CD93C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151CD940: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151CD944: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x151CD948: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151CD94C: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    // 0x151CD950: swc1        $f16, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f16.u32l;
    // 0x151CD954: jal         0x15047D60
    // 0x151CD958: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x151CD958: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    after_4:
    // 0x151CD95C: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151CD960: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151CD964: lwc1        $f12, 0xC($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0XC);
    // 0x151CD968: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151CD96C: lwc1        $f10, 0x18($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X18);
    // 0x151CD970: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151CD974: jal         0x15047D60
    // 0x151CD978: sub.s       $f30, $f8, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f30.fl = ctx->f8.fl - ctx->f10.fl;
    sinf_recomp(rdram, ctx);
        goto after_5;
    // 0x151CD978: sub.s       $f30, $f8, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f30.fl = ctx->f8.fl - ctx->f10.fl;
    after_5:
    // 0x151CD97C: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x151CD980: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151CD984: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151CD988: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x151CD98C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151CD990: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151CD994: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x151CD998: jal         0x15047D60
    // 0x151CD99C: lwc1        $f12, 0x2C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X2C);
    sinf_recomp(rdram, ctx);
        goto after_6;
    // 0x151CD99C: lwc1        $f12, 0x2C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X2C);
    after_6:
    // 0x151CD9A0: lwc1        $f8, 0x28($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X28);
    // 0x151CD9A4: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x151CD9A8: lwc1        $f12, 0x34($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X34);
    // 0x151CD9AC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151CD9B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151CD9B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151CD9B8: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x151CD9BC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151CD9C0: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x151CD9C4: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x151CD9C8: lwc1        $f10, 0x38($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X38);
    // 0x151CD9CC: lwc1        $f14, 0x3C($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x151CD9D0: sub.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x151CD9D4: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151CD9D8: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x151CD9DC: lwc1        $f6, 0x40($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X40);
    // 0x151CD9E0: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x151CD9E4: nop

    // 0x151CD9E8: bc1fl       L_151CDB3C
    if (!c1cs) {
        // 0x151CD9EC: addiu       $t3, $sp, 0x9C
        ctx->r11 = ADD32(ctx->r29, 0X9C);
            goto L_151CDB3C;
    }
    goto skip_3;
    // 0x151CD9EC: addiu       $t3, $sp, 0x9C
    ctx->r11 = ADD32(ctx->r29, 0X9C);
    skip_3:
    // 0x151CD9F0: mul.s       $f20, $f30, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = MUL_S(ctx->f30.fl, ctx->f28.fl);
    // 0x151CD9F4: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x151CD9F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CD9FC: mul.s       $f22, $f10, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x151CDA00: lwc1        $f30, -0x5028($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X5028);
    // 0x151CDA04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CDA08: mul.s       $f24, $f8, $f28
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f24.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x151CDA0C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151CDA10: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x151CDA14: mul.s       $f26, $f4, $f28
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f26.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x151CDA18: lwc1        $f28, -0x5024($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X5024);
    // 0x151CDA1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CDA20: lwc1        $f2, -0x5020($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5020);
    // 0x151CDA24: lb          $t0, 0x2E($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X2E);
L_151CDA28:
    // 0x151CDA28: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x151CDA2C: multu       $t0, $a0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151CDA30: mflo        $t1
    ctx->r9 = lo;
    // 0x151CDA34: addu        $v0, $t1, $s3
    ctx->r2 = ADD32(ctx->r9, ctx->r19);
    // 0x151CDA38: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x151CDA3C: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151CDA40: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x151CDA44: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x151CDA48: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
    // 0x151CDA4C: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x151CDA50: sh          $a1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r5;
    // 0x151CDA54: swc1        $f14, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f14.u32l;
    // 0x151CDA58: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x151CDA5C: lwc1        $f0, 0x0($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X0);
    // 0x151CDA60: add.s       $f12, $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f24.fl;
    // 0x151CDA64: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x151CDA68: add.s       $f14, $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f26.fl;
    // 0x151CDA6C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x151CDA70: nop

    // 0x151CDA74: mul.s       $f10, $f28, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f28.fl, ctx->f6.fl);
    // 0x151CDA78: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151CDA7C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x151CDA80: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151CDA84: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x151CDA88: lwc1        $f10, 0x0($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X0);
    // 0x151CDA8C: mul.s       $f6, $f30, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f30.fl, ctx->f10.fl);
    // 0x151CDA90: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x151CDA94: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x151CDA98: lb          $t2, 0x2E($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2E);
    // 0x151CDA9C: lbu         $t4, 0x25($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X25);
    // 0x151CDAA0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x151CDAA4: sb          $t3, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r11;
    // 0x151CDAA8: lb          $v0, 0x2E($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2E);
    // 0x151CDAAC: bne         $t4, $v0, L_151CDABC
    if (ctx->r12 != ctx->r2) {
        // 0x151CDAB0: nop
    
            goto L_151CDABC;
    }
    // 0x151CDAB0: nop

    // 0x151CDAB4: sb          $zero, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = 0;
    // 0x151CDAB8: lb          $v0, 0x2E($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2E);
L_151CDABC:
    // 0x151CDABC: lb          $t5, 0x2C($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2C);
    // 0x151CDAC0: lb          $v1, 0x2D($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2D);
    // 0x151CDAC4: addiu       $t8, $t5, 0x1
    ctx->r24 = ADD32(ctx->r13, 0X1);
    // 0x151CDAC8: bne         $v1, $v0, L_151CDAF8
    if (ctx->r3 != ctx->r2) {
        // 0x151CDACC: sb          $t8, 0x2C($s0)
        MEM_B(0X2C, ctx->r16) = ctx->r24;
            goto L_151CDAF8;
    }
    // 0x151CDACC: sb          $t8, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r24;
    // 0x151CDAD0: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x151CDAD4: sb          $t7, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r15;
    // 0x151CDAD8: lb          $t9, 0x2D($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X2D);
    // 0x151CDADC: lbu         $t6, 0x25($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X25);
    // 0x151CDAE0: bnel        $t6, $t9, L_151CDAF0
    if (ctx->r14 != ctx->r25) {
        // 0x151CDAE4: lb          $t0, 0x2C($s0)
        ctx->r8 = MEM_B(ctx->r16, 0X2C);
            goto L_151CDAF0;
    }
    goto skip_4;
    // 0x151CDAE4: lb          $t0, 0x2C($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X2C);
    skip_4:
    // 0x151CDAE8: sb          $zero, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = 0;
    // 0x151CDAEC: lb          $t0, 0x2C($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X2C);
L_151CDAF0:
    // 0x151CDAF0: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x151CDAF4: sb          $t1, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r9;
L_151CDAF8:
    // 0x151CDAF8: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x151CDAFC: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x151CDB00: add.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x151CDB04: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x151CDB08: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x151CDB0C: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x151CDB10: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x151CDB14: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x151CDB18: lwc1        $f10, 0x40($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X40);
    // 0x151CDB1C: sub.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x151CDB20: swc1        $f6, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f6.u32l;
    // 0x151CDB24: lwc1        $f8, 0x40($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X40);
    // 0x151CDB28: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x151CDB2C: nop

    // 0x151CDB30: bc1tl       L_151CDA28
    if (c1cs) {
        // 0x151CDB34: lb          $t0, 0x2E($s0)
        ctx->r8 = MEM_B(ctx->r16, 0X2E);
            goto L_151CDA28;
    }
    goto skip_5;
    // 0x151CDB34: lb          $t0, 0x2E($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X2E);
    skip_5:
    // 0x151CDB38: addiu       $t3, $sp, 0x9C
    ctx->r11 = ADD32(ctx->r29, 0X9C);
L_151CDB3C:
    // 0x151CDB3C: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x151CDB40: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x151CDB44: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151CDB48: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x151CDB4C: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x151CDB50: swc1        $f12, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f12.u32l;
    // 0x151CDB54: swc1        $f14, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f14.u32l;
    // 0x151CDB58: swc1        $f16, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f16.u32l;
    // 0x151CDB5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151CDB60:
    // 0x151CDB60: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x151CDB64: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x151CDB68: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x151CDB6C: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x151CDB70: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x151CDB74: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x151CDB78: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x151CDB7C: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x151CDB80: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x151CDB84: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x151CDB88: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x151CDB8C: jr          $ra
    // 0x151CDB90: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    return;
    // 0x151CDB90: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_150E411C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E411C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150E4120: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150E4124: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E4128: lwc1        $f4, 0x1054($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1054);
    // 0x150E412C: lui         $a1, 0x3EB4
    ctx->r5 = S32(0X3EB4 << 16);
    // 0x150E4130: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x150E4134: lui         $a3, 0x3F10
    ctx->r7 = S32(0X3F10 << 16);
    // 0x150E4138: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150E413C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150E4140: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150E4144: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x150E4148: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150E414C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150E4150: ori         $a3, $a3, 0xE561
    ctx->r7 = ctx->r7 | 0XE561;
    // 0x150E4154: ori         $a2, $a2, 0x74BD
    ctx->r6 = ctx->r6 | 0X74BD;
    // 0x150E4158: ori         $a1, $a1, 0x3959
    ctx->r5 = ctx->r5 | 0X3959;
    // 0x150E415C: jal         0x151C3B0C
    // 0x150E4160: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_151C3B0C(rdram, ctx);
        goto after_0;
    // 0x150E4160: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x150E4164: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150E4168: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150E416C: jr          $ra
    // 0x150E4170: nop

    return;
    return;
    // 0x150E4170: nop

;}
RECOMP_FUNC void func_10009400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10009400: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x10009404: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x10009408: lui         $s6, 0x8004
    ctx->r22 = S32(0X8004 << 16);
    // 0x1000940C: addiu       $s6, $s6, -0x1A30
    ctx->r22 = ADD32(ctx->r22, -0X1A30);
    // 0x10009410: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x10009414: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x10009418: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1000941C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x10009420: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x10009424: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x10009428: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1000942C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x10009430: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x10009434: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x10009438: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1000943C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x10009440: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x10009444: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x10009448: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x1000944C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x10009450: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x10009454: jal         0x100051C8
    // 0x10009458: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_100051C8(rdram, ctx);
        goto after_0;
    // 0x10009458: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_0:
    // 0x1000945C: lui         $s7, 0x8003
    ctx->r23 = S32(0X8003 << 16);
    // 0x10009460: addiu       $s7, $s7, -0x53A4
    ctx->r23 = ADD32(ctx->r23, -0X53A4);
    // 0x10009464: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x10009468: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x1000946C: addiu       $s2, $sp, 0x5C
    ctx->r18 = ADD32(ctx->r29, 0X5C);
    // 0x10009470: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_10009474:
    // 0x10009474: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x10009478: jal         0x10023440
    // 0x1000947C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x1000947C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_1:
    // 0x10009480: lbu         $t6, 0x0($s7)
    ctx->r14 = MEM_BU(ctx->r23, 0X0);
    // 0x10009484: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x10009488: sltiu       $at, $s0, 0x2
    ctx->r1 = ctx->r16 < 0X2 ? 1 : 0;
    // 0x1000948C: beql        $t6, $zero, L_1000949C
    if (ctx->r14 == 0) {
        // 0x10009490: lw          $t8, 0x5C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X5C);
            goto L_1000949C;
    }
    goto skip_0;
    // 0x10009490: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    skip_0:
    // 0x10009494: sh          $s3, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r19;
    // 0x10009498: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
L_1000949C:
    // 0x1000949C: lh          $v0, 0x0($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X0);
    // 0x100094A0: beq         $v0, $fp, L_100094C0
    if (ctx->r2 == ctx->r30) {
        // 0x100094A4: nop
    
            goto L_100094C0;
    }
    // 0x100094A4: nop

    // 0x100094A8: beq         $v0, $s3, L_1000952C
    if (ctx->r2 == ctx->r19) {
        // 0x100094AC: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_1000952C;
    }
    // 0x100094AC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x100094B0: beql        $v0, $at, L_10009538
    if (ctx->r2 == ctx->r1) {
        // 0x100094B4: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_10009538;
    }
    goto skip_1;
    // 0x100094B4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_1:
    // 0x100094B8: b           L_10009538
    // 0x100094BC: nop

        goto L_10009538;
    // 0x100094BC: nop

L_100094C0:
    // 0x100094C0: bne         $at, $zero, L_100094CC
    if (ctx->r1 != 0) {
        // 0x100094C4: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_100094CC;
    }
    // 0x100094C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x100094C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_100094CC:
    // 0x100094CC: bne         $s0, $zero, L_10009524
    if (ctx->r16 != 0) {
        // 0x100094D0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_10009524;
    }
    // 0x100094D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x100094D4: lw          $t9, -0x51BC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X51BC);
    // 0x100094D8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x100094DC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x100094E0: divu        $zero, $t9, $at
    lo = S32(U32(ctx->r25) / U32(ctx->r1)); hi = S32(U32(ctx->r25) % U32(ctx->r1));
    // 0x100094E4: mfhi        $t0
    ctx->r8 = hi;
    // 0x100094E8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x100094EC: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x100094F0: jal         0x100095A0
    // 0x100094F4: lw          $a0, -0x1C70($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1C70);
    func_100095A0(rdram, ctx);
        goto after_2;
    // 0x100094F4: lw          $a0, -0x1C70($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1C70);
    after_2:
    // 0x100094F8: beq         $v0, $zero, L_10009524
    if (ctx->r2 == 0) {
        // 0x100094FC: nop
    
            goto L_10009524;
    }
    // 0x100094FC: nop

    // 0x10009500: bne         $s4, $zero, L_10009520
    if (ctx->r20 != 0) {
        // 0x10009504: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_10009520;
    }
    // 0x10009504: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10009508: addiu       $a0, $a0, -0x19F8
    ctx->r4 = ADD32(ctx->r4, -0X19F8);
    // 0x1000950C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x10009510: jal         0x10023440
    // 0x10009514: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x10009514: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_3:
    // 0x10009518: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x1000951C: lw          $s5, 0x4($t2)
    ctx->r21 = MEM_W(ctx->r10, 0X4);
L_10009520:
    // 0x10009520: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_10009524:
    // 0x10009524: b           L_10009538
    // 0x10009528: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_10009538;
    // 0x10009528: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1000952C:
    // 0x1000952C: b           L_10009538
    // 0x10009530: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_10009538;
    // 0x10009530: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x10009534: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_10009538:
    // 0x10009538: beql        $s1, $zero, L_10009474
    if (ctx->r17 == 0) {
        // 0x1000953C: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_10009474;
    }
    goto skip_2;
    // 0x1000953C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_2:
    // 0x10009540: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10009544: addiu       $s2, $sp, 0x5C
    ctx->r18 = ADD32(ctx->r29, 0X5C);
    // 0x10009548: addiu       $a0, $a0, -0x19C0
    ctx->r4 = ADD32(ctx->r4, -0X19C0);
    // 0x1000954C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x10009550: jal         0x10018E0C
    // 0x10009554: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    n_alClose(rdram, ctx);
        goto after_4;
    // 0x10009554: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_4:
    // 0x10009558: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_1000955C:
    // 0x1000955C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x10009560: jal         0x10023440
    // 0x10009564: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x10009564: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x10009568: b           L_1000955C
    // 0x1000956C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
        goto L_1000955C;
    // 0x1000956C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x10009570: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x10009574: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x10009578: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1000957C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x10009580: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x10009584: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x10009588: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1000958C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x10009590: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x10009594: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x10009598: jr          $ra
    // 0x1000959C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x1000959C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_150F02A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F02A0: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x150F02A4: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x150F02A8: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x150F02AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150F02B0: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x150F02B4: sw          $zero, 0x12C($t8)
    MEM_W(0X12C, ctx->r24) = 0;
    // 0x150F02B8: jr          $ra
    // 0x150F02BC: nop

    return;
    return;
    // 0x150F02BC: nop

;}
RECOMP_FUNC void func_10003930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10003930: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x10003934: lbu         $t6, -0x7F80($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X7F80);
    // 0x10003938: lui         $v0, 0x803F
    ctx->r2 = S32(0X803F << 16);
    // 0x1000393C: ori         $v0, $v0, 0x5000
    ctx->r2 = ctx->r2 | 0X5000;
    // 0x10003940: beq         $t6, $zero, L_1000397C
    if (ctx->r14 == 0) {
        // 0x10003944: lui         $v1, 0x803F
        ctx->r3 = S32(0X803F << 16);
            goto L_1000397C;
    }
    // 0x10003944: lui         $v1, 0x803F
    ctx->r3 = S32(0X803F << 16);
    // 0x10003948: lui         $v0, 0x807F
    ctx->r2 = S32(0X807F << 16);
    // 0x1000394C: ori         $v0, $v0, 0x5000
    ctx->r2 = ctx->r2 | 0X5000;
    // 0x10003950: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003954: lui         $v1, 0x807F
    ctx->r3 = S32(0X807F << 16);
    // 0x10003958: sw          $v0, -0x7F70($at)
    MEM_W(-0X7F70, ctx->r1) = ctx->r2;
    // 0x1000395C: ori         $v1, $v1, 0xE000
    ctx->r3 = ctx->r3 | 0XE000;
    // 0x10003960: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003964: sw          $v1, -0x7F6C($at)
    MEM_W(-0X7F6C, ctx->r1) = ctx->r3;
    // 0x10003968: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000396C: sw          $v1, -0x7F64($at)
    MEM_W(-0X7F64, ctx->r1) = ctx->r3;
    // 0x10003970: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003974: jr          $ra
    // 0x10003978: sw          $v0, -0x7F68($at)
    MEM_W(-0X7F68, ctx->r1) = ctx->r2;
    return;
    return;
    // 0x10003978: sw          $v0, -0x7F68($at)
    MEM_W(-0X7F68, ctx->r1) = ctx->r2;
L_1000397C:
    // 0x1000397C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003980: sw          $v0, -0x7F70($at)
    MEM_W(-0X7F70, ctx->r1) = ctx->r2;
    // 0x10003984: ori         $v1, $v1, 0xE000
    ctx->r3 = ctx->r3 | 0XE000;
    // 0x10003988: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000398C: sw          $v1, -0x7F6C($at)
    MEM_W(-0X7F6C, ctx->r1) = ctx->r3;
    // 0x10003990: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003994: sw          $v1, -0x7F64($at)
    MEM_W(-0X7F64, ctx->r1) = ctx->r3;
    // 0x10003998: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000399C: sw          $v0, -0x7F68($at)
    MEM_W(-0X7F68, ctx->r1) = ctx->r2;
    // 0x100039A0: jr          $ra
    // 0x100039A4: nop

    return;
    return;
    // 0x100039A4: nop

;}
RECOMP_FUNC void func_15058F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15058F24: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x15058F28: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x15058F2C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15058F30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15058F34: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x15058F38: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x15058F3C: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x15058F40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15058F44: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x15058F48: sub.s       $f16, $f0, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x15058F4C: bc1fl       L_15058F5C
    if (!c1cs) {
        // 0x15058F50: lwc1        $f4, 0x118($a0)
        ctx->f4.u32l = MEM_W(ctx->r4, 0X118);
            goto L_15058F5C;
    }
    goto skip_0;
    // 0x15058F50: lwc1        $f4, 0x118($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X118);
    skip_0:
    // 0x15058F54: sub.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f0.fl;
    // 0x15058F58: lwc1        $f4, 0x118($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X118);
L_15058F5C:
    // 0x15058F5C: lwc1        $f2, 0x18($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15058F60: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15058F64: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x15058F68: nop

    // 0x15058F6C: bc1tl       L_15058F88
    if (c1cs) {
        // 0x15058F70: lbu         $t7, 0xAD($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0XAD);
            goto L_15058F88;
    }
    goto skip_1;
    // 0x15058F70: lbu         $t7, 0xAD($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XAD);
    skip_1:
    // 0x15058F74: lbu         $t6, 0xAD($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XAD);
    // 0x15058F78: slti        $at, $t6, 0x64
    ctx->r1 = SIGNED(ctx->r14) < 0X64 ? 1 : 0;
    // 0x15058F7C: bnel        $at, $zero, L_15059138
    if (ctx->r1 != 0) {
        // 0x15058F80: ldc1        $f20, 0x8($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
            goto L_15059138;
    }
    goto skip_2;
    // 0x15058F80: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    skip_2:
    // 0x15058F84: lbu         $t7, 0xAD($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XAD);
L_15058F88:
    // 0x15058F88: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15058F8C: bnel        $t7, $zero, L_15058FC8
    if (ctx->r15 != 0) {
        // 0x15058F90: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_15058FC8;
    }
    goto skip_3;
    // 0x15058F90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_3:
    // 0x15058F94: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x15058F98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15058F9C: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15058FA0: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x15058FA4: mul.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x15058FA8: swc1        $f14, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f14.u32l;
    // 0x15058FAC: sb          $t8, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r24;
    // 0x15058FB0: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15058FB4: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x15058FB8: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
    // 0x15058FBC: b           L_15059110
    // 0x15058FC0: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
        goto L_15059110;
    // 0x15058FC0: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15058FC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_15058FC8:
    // 0x15058FC8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x15058FCC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15058FD0: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x15058FD4: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x15058FD8: nop

    // 0x15058FDC: bc1fl       L_15058FEC
    if (!c1cs) {
        // 0x15058FE0: c.lt.s      $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
            goto L_15058FEC;
    }
    goto skip_4;
    // 0x15058FE0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    skip_4:
    // 0x15058FE4: sb          $zero, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = 0;
    // 0x15058FE8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
L_15058FEC:
    // 0x15058FEC: nop

    // 0x15058FF0: bc1fl       L_15059014
    if (!c1cs) {
        // 0x15058FF4: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_15059014;
    }
    goto skip_5;
    // 0x15058FF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_5:
    // 0x15058FF8: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x15058FFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15059000: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15059004: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x15059008: b           L_15059110
    // 0x1505900C: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
        goto L_15059110;
    // 0x1505900C: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
    // 0x15059010: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_15059014:
    // 0x15059014: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x15059018: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1505901C: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x15059020: lwc1        $f2, 0x18($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15059024: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x15059028: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1505902C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15059030: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15059034: sub.s       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x15059038: abs.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = fabsf(ctx->f12.fl);
    // 0x1505903C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x15059040: nop

    // 0x15059044: bc1fl       L_1505909C
    if (!c1cs) {
        // 0x15059048: c.lt.s      $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
            goto L_1505909C;
    }
    goto skip_6;
    // 0x15059048: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    skip_6:
    // 0x1505904C: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15059050: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15059054: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15059058: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1505905C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15059060: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x15059064: nop

    // 0x15059068: bc1fl       L_1505909C
    if (!c1cs) {
        // 0x1505906C: c.lt.s      $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
            goto L_1505909C;
    }
    goto skip_7;
    // 0x1505906C: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    skip_7:
    // 0x15059070: lwc1        $f6, -0x6B5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6B5C);
    // 0x15059074: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15059078: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505907C: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x15059080: swc1        $f18, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f18.u32l;
    // 0x15059084: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15059088: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x1505908C: sub.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x15059090: b           L_15059110
    // 0x15059094: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
        goto L_15059110;
    // 0x15059094: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    // 0x15059098: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
L_1505909C:
    // 0x1505909C: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x150590A0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150590A4: bc1fl       L_150590E8
    if (!c1cs) {
        // 0x150590A8: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_150590E8;
    }
    goto skip_8;
    // 0x150590A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_8:
    // 0x150590AC: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x150590B0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150590B4: bc1fl       L_15059114
    if (!c1cs) {
        // 0x150590B8: lui         $at, 0xC2C8
        ctx->r1 = S32(0XC2C8 << 16);
            goto L_15059114;
    }
    goto skip_9;
    // 0x150590B8: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    skip_9:
    // 0x150590BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150590C0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150590C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150590C8: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x150590CC: nop

    // 0x150590D0: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150590D4: swc1        $f8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f8.u32l;
    // 0x150590D8: swc1        $f10, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f10.u32l;
    // 0x150590DC: b           L_15059110
    // 0x150590E0: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
        goto L_15059110;
    // 0x150590E0: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x150590E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_150590E8:
    // 0x150590E8: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x150590EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150590F0: mul.s       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x150590F4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150590F8: mul.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x150590FC: bc1fl       L_1505910C
    if (!c1cs) {
        // 0x15059100: swc1        $f4, 0x24($a0)
        MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
            goto L_1505910C;
    }
    goto skip_10;
    // 0x15059100: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    skip_10:
    // 0x15059104: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x15059108: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
L_1505910C:
    // 0x1505910C: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
L_15059110:
    // 0x15059110: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
L_15059114:
    // 0x15059114: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15059118: nop

    // 0x1505911C: mul.s       $f2, $f10, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x15059120: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15059124: nop

    // 0x15059128: bc1fl       L_15059138
    if (!c1cs) {
        // 0x1505912C: ldc1        $f20, 0x8($sp)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
            goto L_15059138;
    }
    goto skip_11;
    // 0x1505912C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    skip_11:
    // 0x15059130: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x15059134: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_15059138:
    // 0x15059138: jr          $ra
    // 0x1505913C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x1505913C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_1515A920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515A920: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1515A924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515A928: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1515A92C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1515A930: lw          $a0, 0x2F4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X2F4);
    // 0x1515A934: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x1515A938: jal         0x1514ECE0
    // 0x1515A93C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_1514ECE0(rdram, ctx);
        goto after_0;
    // 0x1515A93C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x1515A940: bne         $v0, $zero, L_1515A950
    if (ctx->r2 != 0) {
        // 0x1515A944: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_1515A950;
    }
    // 0x1515A944: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x1515A948: b           L_1515A964
    // 0x1515A94C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1515A964;
    // 0x1515A94C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1515A950:
    // 0x1515A950: lw          $v1, 0x10($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X10);
    // 0x1515A954: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x1515A958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1515A95C: addiu       $t7, $v1, 0x34
    ctx->r15 = ADD32(ctx->r3, 0X34);
    // 0x1515A960: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_1515A964:
    // 0x1515A964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515A968: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1515A96C: jr          $ra
    // 0x1515A970: nop

    return;
    return;
    // 0x1515A970: nop

;}
RECOMP_FUNC void func_15169850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15169850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15169854: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15169858: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x1516985C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15169860: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15169864: bne         $a1, $zero, L_1516989C
    if (ctx->r5 != 0) {
        // 0x15169868: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_1516989C;
    }
    // 0x15169868: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x1516986C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x15169870: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x15169874: beq         $t7, $t8, L_1516988C
    if (ctx->r15 == ctx->r24) {
        // 0x15169878: nop
    
            goto L_1516988C;
    }
    // 0x15169878: nop

    // 0x1516987C: lbu         $t9, 0x4($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X4);
    // 0x15169880: lbu         $t0, 0x0($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X0);
    // 0x15169884: bnel        $t9, $t0, L_151698E8
    if (ctx->r25 != ctx->r8) {
        // 0x15169888: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151698E8;
    }
    goto skip_0;
    // 0x15169888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_1516988C:
    // 0x1516988C: jal         0x1516972C
    // 0x15169890: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15169890: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_0:
    // 0x15169894: b           L_151698E8
    // 0x15169898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151698E8;
    // 0x15169898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1516989C:
    // 0x1516989C: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x151698A0: bnel        $v0, $at, L_151698E8
    if (ctx->r2 != ctx->r1) {
        // 0x151698A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151698E8;
    }
    goto skip_1;
    // 0x151698A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x151698A8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x151698AC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x151698B0: bnel        $v1, $v0, L_151698D0
    if (ctx->r3 != ctx->r2) {
        // 0x151698B4: lw          $t3, 0x4($a0)
        ctx->r11 = MEM_W(ctx->r4, 0X4);
            goto L_151698D0;
    }
    goto skip_2;
    // 0x151698B4: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    skip_2:
    // 0x151698B8: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x151698BC: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x151698C0: lbu         $t2, 0x9($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X9);
    // 0x151698C4: b           L_151698E4
    // 0x151698C8: sb          $t2, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r10;
        goto L_151698E4;
    // 0x151698C8: sb          $t2, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r10;
    // 0x151698CC: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
L_151698D0:
    // 0x151698D0: bnel        $t3, $v0, L_151698E8
    if (ctx->r11 != ctx->r2) {
        // 0x151698D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151698E8;
    }
    goto skip_3;
    // 0x151698D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x151698D8: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x151698DC: lbu         $t4, 0x8($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X8);
    // 0x151698E0: sb          $t4, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r12;
L_151698E4:
    // 0x151698E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151698E8:
    // 0x151698E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151698EC: jr          $ra
    // 0x151698F0: nop

    return;
    return;
    // 0x151698F0: nop

    // 0x151698F4: nop

    // 0x151698F8: nop

    // 0x151698FC: nop

;}
RECOMP_FUNC void func_150F0328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F0328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F032C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F0330: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F0334: jal         0x150F0380
    // 0x150F0338: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F0380(rdram, ctx);
        goto after_0;
    // 0x150F0338: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F033C: jal         0x151411A4
    // 0x150F0340: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151411A4(rdram, ctx);
        goto after_1;
    // 0x150F0340: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F0344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F0348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F034C: jr          $ra
    // 0x150F0350: nop

    return;
    return;
    // 0x150F0350: nop

;}
RECOMP_FUNC void func_1511A6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511A6FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1511A700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1511A704: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x1511A708: beql        $t6, $zero, L_1511A720
    if (ctx->r14 == 0) {
        // 0x1511A70C: addiu       $a1, $a0, 0x80
        ctx->r5 = ADD32(ctx->r4, 0X80);
            goto L_1511A720;
    }
    goto skip_0;
    // 0x1511A70C: addiu       $a1, $a0, 0x80
    ctx->r5 = ADD32(ctx->r4, 0X80);
    skip_0:
    // 0x1511A710: jal         0x15116110
    // 0x1511A714: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15116110(rdram, ctx);
        goto after_0;
    // 0x1511A714: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1511A718: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1511A71C: addiu       $a1, $a0, 0x80
    ctx->r5 = ADD32(ctx->r4, 0X80);
L_1511A720:
    // 0x1511A720: jal         0x1511A494
    // 0x1511A724: addiu       $a2, $a0, 0x84
    ctx->r6 = ADD32(ctx->r4, 0X84);
    func_1511A494(rdram, ctx);
        goto after_1;
    // 0x1511A724: addiu       $a2, $a0, 0x84
    ctx->r6 = ADD32(ctx->r4, 0X84);
    after_1:
    // 0x1511A728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1511A72C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1511A730: jr          $ra
    // 0x1511A734: nop

    return;
    return;
    // 0x1511A734: nop

;}
RECOMP_FUNC void func_1518A3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518A3C0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x1518A3C4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x1518A3C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1518A3CC: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x1518A3D0: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x1518A3D4: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
    // 0x1518A3D8: addiu       $t0, $sp, 0x48
    ctx->r8 = ADD32(ctx->r29, 0X48);
    // 0x1518A3DC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1518A3E0: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x1518A3E4: addiu       $t4, $sp, 0x54
    ctx->r12 = ADD32(ctx->r29, 0X54);
    // 0x1518A3E8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1518A3EC: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x1518A3F0: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x1518A3F4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1518A3F8: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1518A3FC: lw          $at, 0x0($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X0);
    // 0x1518A400: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x1518A404: lw          $t3, 0x4($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X4);
    // 0x1518A408: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x1518A40C: lw          $at, 0x8($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X8);
    // 0x1518A410: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x1518A414: lw          $t5, 0xC0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC0);
    // 0x1518A418: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x1518A41C: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x1518A420: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x1518A424: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x1518A428: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x1518A42C: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x1518A430: lbu         $t3, 0xD7($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XD7);
    // 0x1518A434: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x1518A438: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x1518A43C: lbu         $t9, 0xCF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XCF);
    // 0x1518A440: lh          $t0, 0xD2($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XD2);
    // 0x1518A444: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x1518A448: sb          $t2, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r10;
    // 0x1518A44C: sb          $t1, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r9;
    // 0x1518A450: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x1518A454: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x1518A458: sb          $t9, 0x68($sp)
    MEM_B(0X68, ctx->r29) = ctx->r25;
    // 0x1518A45C: beq         $t3, $zero, L_1518A488
    if (ctx->r11 == 0) {
        // 0x1518A460: sh          $t0, 0x6C($sp)
        MEM_H(0X6C, ctx->r29) = ctx->r8;
            goto L_1518A488;
    }
    // 0x1518A460: sh          $t0, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r8;
    // 0x1518A464: jal         0x150ADA20
    // 0x1518A468: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1518A468: nop

    after_0:
    // 0x1518A46C: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x1518A470: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1518A474: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x1518A478: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x1518A47C: lw          $t4, -0x2A48($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X2A48);
    // 0x1518A480: b           L_1518A4A8
    // 0x1518A484: sb          $t4, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = ctx->r12;
        goto L_1518A4A8;
    // 0x1518A484: sb          $t4, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = ctx->r12;
L_1518A488:
    // 0x1518A488: jal         0x150ADA20
    // 0x1518A48C: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1518A48C: nop

    after_1:
    // 0x1518A490: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x1518A494: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x1518A498: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1518A49C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x1518A4A0: lw          $t9, -0x2A50($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2A50);
    // 0x1518A4A4: sb          $t9, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = ctx->r25;
L_1518A4A8:
    // 0x1518A4A8: lui         $t2, 0x22
    ctx->r10 = S32(0X22 << 16);
    // 0x1518A4AC: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x1518A4B0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1518A4B4: ori         $t2, $t2, 0x205
    ctx->r10 = ctx->r10 | 0X205;
    // 0x1518A4B8: ori         $t1, $t1, 0x600
    ctx->r9 = ctx->r9 | 0X600;
    // 0x1518A4BC: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x1518A4C0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1518A4C4: addiu       $t7, $zero, 0x4A
    ctx->r15 = ADD32(0, 0X4A);
    // 0x1518A4C8: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x1518A4CC: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x1518A4D0: sb          $t6, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r14;
    // 0x1518A4D4: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x1518A4D8: sw          $t2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r10;
    // 0x1518A4DC: sw          $t1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r9;
    // 0x1518A4E0: sb          $t0, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = ctx->r8;
    // 0x1518A4E4: sw          $t3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r11;
    // 0x1518A4E8: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
    // 0x1518A4EC: sw          $t8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r24;
    // 0x1518A4F0: sw          $t4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r12;
    // 0x1518A4F4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1518A4F8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1518A4FC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1518A500: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1518A504: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1518A508: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1518A50C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1518A510: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1518A514: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x1518A518: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x1518A51C: sb          $zero, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = 0;
    // 0x1518A520: sb          $t5, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r13;
    // 0x1518A524: sb          $t9, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r25;
    // 0x1518A528: sb          $t2, 0x92($sp)
    MEM_B(0X92, ctx->r29) = ctx->r10;
    // 0x1518A52C: sb          $t1, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r9;
    // 0x1518A530: sb          $t0, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r8;
    // 0x1518A534: sb          $t3, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r11;
    // 0x1518A538: sb          $t7, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r15;
    // 0x1518A53C: sb          $t8, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r24;
    // 0x1518A540: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x1518A544: sb          $zero, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = 0;
    // 0x1518A548: sb          $t4, 0x9D($sp)
    MEM_B(0X9D, ctx->r29) = ctx->r12;
    // 0x1518A54C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x1518A550: addiu       $t5, $sp, 0xA0
    ctx->r13 = ADD32(ctx->r29, 0XA0);
    // 0x1518A554: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x1518A558: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x1518A55C: lw          $t1, 0x4($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X4);
    // 0x1518A560: addiu       $t3, $zero, 0x15
    ctx->r11 = ADD32(0, 0X15);
    // 0x1518A564: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x1518A568: sw          $t1, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r9;
    // 0x1518A56C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x1518A570: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1518A574: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1518A578: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x1518A57C: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    // 0x1518A580: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x1518A584: lbu         $t4, 0xDF($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XDF);
    // 0x1518A588: addiu       $t8, $t7, 0x38
    ctx->r24 = ADD32(ctx->r15, 0X38);
    // 0x1518A58C: sh          $t0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r8;
    // 0x1518A590: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x1518A594: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1518A598: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1518A59C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x1518A5A0: jal         0x151580B0
    // 0x1518A5A4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_151580B0(rdram, ctx);
        goto after_2;
    // 0x1518A5A4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_2:
    // 0x1518A5A8: bne         $v0, $zero, L_1518A5B8
    if (ctx->r2 != 0) {
        // 0x1518A5AC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1518A5B8;
    }
    // 0x1518A5AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1518A5B0: b           L_1518A5E4
    // 0x1518A5B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518A5E4;
    // 0x1518A5B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518A5B8:
    // 0x1518A5B8: addiu       $a0, $v1, 0xF8
    ctx->r4 = ADD32(ctx->r3, 0XF8);
    // 0x1518A5BC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x1518A5C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x1518A5C4: jal         0x10022EC0
    // 0x1518A5C8: sw          $v1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x1518A5C8: sw          $v1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r3;
    after_3:
    // 0x1518A5CC: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x1518A5D0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x1518A5D4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x1518A5D8: jal         0x10022EC0
    // 0x1518A5DC: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x1518A5DC: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    after_4:
    // 0x1518A5E0: lw          $v0, 0xAC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XAC);
L_1518A5E4:
    // 0x1518A5E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1518A5E8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x1518A5EC: jr          $ra
    // 0x1518A5F0: nop

    return;
    return;
    // 0x1518A5F0: nop

;}
RECOMP_FUNC void func_150F5C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F5C98: addiu       $sp, $sp, -0x148
    ctx->r29 = ADD32(ctx->r29, -0X148);
    // 0x150F5C9C: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x150F5CA0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x150F5CA4: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150F5CA8: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x150F5CAC: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x150F5CB0: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x150F5CB4: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x150F5CB8: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x150F5CBC: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x150F5CC0: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x150F5CC4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x150F5CC8: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x150F5CCC: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x150F5CD0: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x150F5CD4: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x150F5CD8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x150F5CDC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150F5CE0: lw          $s0, 0x28($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X28);
    // 0x150F5CE4: addiu       $s1, $s2, 0x28
    ctx->r17 = ADD32(ctx->r18, 0X28);
    // 0x150F5CE8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150F5CEC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x150F5CF0: beq         $t6, $zero, L_150F5D08
    if (ctx->r14 == 0) {
        // 0x150F5CF4: nop
    
            goto L_150F5D08;
    }
    // 0x150F5CF4: nop

    // 0x150F5CF8: lbu         $t7, 0x4($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X4);
    // 0x150F5CFC: lbu         $t8, 0x3B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3B);
    // 0x150F5D00: beql        $t7, $t8, L_150F5D14
    if (ctx->r15 == ctx->r24) {
        // 0x150F5D04: lw          $t0, 0x1D4($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X1D4);
            goto L_150F5D14;
    }
    goto skip_0;
    // 0x150F5D04: lw          $t0, 0x1D4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1D4);
    skip_0:
L_150F5D08:
    // 0x150F5D08: b           L_150F60F0
    // 0x150F5D0C: sh          $t9, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r25;
        goto L_150F60F0;
    // 0x150F5D0C: sh          $t9, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r25;
    // 0x150F5D10: lw          $t0, 0x1D4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1D4);
L_150F5D14:
    // 0x150F5D14: beql        $t0, $zero, L_150F60F4
    if (ctx->r8 == 0) {
        // 0x150F5D18: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150F60F4;
    }
    goto skip_1;
    // 0x150F5D18: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_1:
    // 0x150F5D1C: jal         0x150ADA68
    // 0x150F5D20: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150F5D20: nop

    after_0:
    // 0x150F5D24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F5D28: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150F5D2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F5D30: lwc1        $f4, 0x1B50($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1B50);
    // 0x150F5D34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F5D38: lwc1        $f6, 0x1B54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1B54);
    // 0x150F5D3C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F5D40: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F5D44: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150F5D48: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150F5D4C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150F5D50: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150F5D54: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150F5D58: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150F5D5C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150F5D60: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150F5D64: addiu       $t4, $zero, 0xB4
    ctx->r12 = ADD32(0, 0XB4);
    // 0x150F5D68: addiu       $t5, $zero, 0xB4
    ctx->r13 = ADD32(0, 0XB4);
    // 0x150F5D6C: addiu       $t6, $zero, 0xB4
    ctx->r14 = ADD32(0, 0XB4);
    // 0x150F5D70: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150F5D74: addiu       $t7, $t7, 0x1B00
    ctx->r15 = ADD32(ctx->r15, 0X1B00);
    // 0x150F5D78: addiu       $t8, $t8, 0x1B0C
    ctx->r24 = ADD32(ctx->r24, 0X1B0C);
    // 0x150F5D7C: addiu       $t9, $sp, 0xC0
    ctx->r25 = ADD32(ctx->r29, 0XC0);
    // 0x150F5D80: addiu       $t0, $sp, 0xB4
    ctx->r8 = ADD32(ctx->r29, 0XB4);
    // 0x150F5D84: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x150F5D88: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    // 0x150F5D8C: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x150F5D90: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x150F5D94: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150F5D98: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
    // 0x150F5D9C: nop

    // 0x150F5DA0: bc1fl       L_150F60F4
    if (!c1cs) {
        // 0x150F5DA4: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150F60F4;
    }
    goto skip_2;
    // 0x150F5DA4: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_2:
    // 0x150F5DA8: sb          $t1, 0xE4($sp)
    MEM_B(0XE4, ctx->r29) = ctx->r9;
    // 0x150F5DAC: sb          $t2, 0xE5($sp)
    MEM_B(0XE5, ctx->r29) = ctx->r10;
    // 0x150F5DB0: sb          $t3, 0xE6($sp)
    MEM_B(0XE6, ctx->r29) = ctx->r11;
    // 0x150F5DB4: sb          $t4, 0xE8($sp)
    MEM_B(0XE8, ctx->r29) = ctx->r12;
    // 0x150F5DB8: sb          $t5, 0xE9($sp)
    MEM_B(0XE9, ctx->r29) = ctx->r13;
    // 0x150F5DBC: sb          $t6, 0xEA($sp)
    MEM_B(0XEA, ctx->r29) = ctx->r14;
    // 0x150F5DC0: sw          $t7, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r15;
    // 0x150F5DC4: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    // 0x150F5DC8: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
    // 0x150F5DCC: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
    // 0x150F5DD0: lw          $a2, 0x1D4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1D4);
    // 0x150F5DD4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x150F5DD8: jal         0x15145EA4
    // 0x150F5DDC: addiu       $a2, $a2, 0x140
    ctx->r6 = ADD32(ctx->r6, 0X140);
    func_15145EA4(rdram, ctx);
        goto after_1;
    // 0x150F5DDC: addiu       $a2, $a2, 0x140
    ctx->r6 = ADD32(ctx->r6, 0X140);
    after_1:
    // 0x150F5DE0: lui         $t3, 0x20
    ctx->r11 = S32(0X20 << 16);
    // 0x150F5DE4: lui         $t4, 0x9F
    ctx->r12 = S32(0X9F << 16);
    // 0x150F5DE8: addiu       $t1, $zero, 0x6C
    ctx->r9 = ADD32(0, 0X6C);
    // 0x150F5DEC: addiu       $t2, $zero, 0x5103
    ctx->r10 = ADD32(0, 0X5103);
    // 0x150F5DF0: ori         $t3, $t3, 0x5
    ctx->r11 = ctx->r11 | 0X5;
    // 0x150F5DF4: ori         $t4, $t4, 0x600
    ctx->r12 = ctx->r12 | 0X600;
    // 0x150F5DF8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150F5DFC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150F5E00: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150F5E04: sb          $t1, 0xED($sp)
    MEM_B(0XED, ctx->r29) = ctx->r9;
    // 0x150F5E08: sh          $t2, 0xD8($sp)
    MEM_H(0XD8, ctx->r29) = ctx->r10;
    // 0x150F5E0C: sw          $t3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r11;
    // 0x150F5E10: sw          $t4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r12;
    // 0x150F5E14: sw          $zero, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = 0;
    // 0x150F5E18: sw          $zero, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = 0;
    // 0x150F5E1C: sb          $t5, 0xE7($sp)
    MEM_B(0XE7, ctx->r29) = ctx->r13;
    // 0x150F5E20: sb          $t6, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = ctx->r14;
    // 0x150F5E24: addiu       $t8, $t8, 0x5480
    ctx->r24 = ADD32(ctx->r24, 0X5480);
    // 0x150F5E28: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x150F5E2C: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150F5E30: lwc1        $f16, 0xC0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x150F5E34: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150F5E38: lwc1        $f18, 0xC4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150F5E3C: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x150F5E40: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150F5E44: addiu       $t7, $sp, 0x10C
    ctx->r15 = ADD32(ctx->r29, 0X10C);
    // 0x150F5E48: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150F5E4C: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x150F5E50: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x150F5E54: sub.s       $f22, $f10, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150F5E58: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x150F5E5C: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x150F5E60: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x150F5E64: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F5E68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F5E6C: lwc1        $f16, 0x1B58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1B58);
    // 0x150F5E70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F5E74: sub.s       $f24, $f6, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x150F5E78: lwc1        $f6, 0x1B5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1B5C);
    // 0x150F5E7C: lui         $at, 0x4314
    ctx->r1 = S32(0X4314 << 16);
    // 0x150F5E80: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150F5E84: lui         $t2, 0x84
    ctx->r10 = S32(0X84 << 16);
    // 0x150F5E88: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x150F5E8C: ori         $t2, $t2, 0xCE07
    ctx->r10 = ctx->r10 | 0XCE07;
    // 0x150F5E90: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x150F5E94: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x150F5E98: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x150F5E9C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x150F5EA0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150F5EA4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F5EA8: addiu       $t7, $zero, 0x3E8
    ctx->r15 = ADD32(0, 0X3E8);
    // 0x150F5EAC: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150F5EB0: sw          $t2, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r10;
    // 0x150F5EB4: sb          $t3, 0x130($sp)
    MEM_B(0X130, ctx->r29) = ctx->r11;
    // 0x150F5EB8: sb          $t4, 0x131($sp)
    MEM_B(0X131, ctx->r29) = ctx->r12;
    // 0x150F5EBC: sb          $t5, 0x132($sp)
    MEM_B(0X132, ctx->r29) = ctx->r13;
    // 0x150F5EC0: sb          $t6, 0x133($sp)
    MEM_B(0X133, ctx->r29) = ctx->r14;
    // 0x150F5EC4: sb          $t0, 0x134($sp)
    MEM_B(0X134, ctx->r29) = ctx->r8;
    // 0x150F5EC8: sb          $zero, 0x135($sp)
    MEM_B(0X135, ctx->r29) = 0;
    // 0x150F5ECC: sw          $zero, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = 0;
    // 0x150F5ED0: sb          $t9, 0x136($sp)
    MEM_B(0X136, ctx->r29) = ctx->r25;
    // 0x150F5ED4: sh          $t7, 0x138($sp)
    MEM_H(0X138, ctx->r29) = ctx->r15;
    // 0x150F5ED8: addiu       $fp, $sp, 0xCC
    ctx->r30 = ADD32(ctx->r29, 0XCC);
    // 0x150F5EDC: addiu       $s7, $sp, 0xD0
    ctx->r23 = ADD32(ctx->r29, 0XD0);
    // 0x150F5EE0: addiu       $s6, $zero, -0xC1
    ctx->r22 = ADD32(0, -0XC1);
    // 0x150F5EE4: addiu       $s5, $zero, 0x1A
    ctx->r21 = ADD32(0, 0X1A);
    // 0x150F5EE8: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
    // 0x150F5EEC: addiu       $s3, $zero, 0x15
    ctx->r19 = ADD32(0, 0X15);
    // 0x150F5EF0: sub.s       $f26, $f4, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x150F5EF4: swc1        $f10, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f10.u32l;
    // 0x150F5EF8: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    // 0x150F5EFC: swc1        $f6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f6.u32l;
L_150F5F00:
    // 0x150F5F00: jal         0x150ADA20
    // 0x150F5F04: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150F5F04: nop

    after_2:
    // 0x150F5F08: divu        $zero, $v0, $s3
    lo = S32(U32(ctx->r2) / U32(ctx->r19)); hi = S32(U32(ctx->r2) % U32(ctx->r19));
    // 0x150F5F0C: mfhi        $v1
    ctx->r3 = hi;
    // 0x150F5F10: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x150F5F14: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x150F5F18: sra         $t1, $t8, 16
    ctx->r9 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150F5F1C: div         $zero, $s4, $t1
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r9)));
    // 0x150F5F20: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x150F5F24: bne         $s3, $zero, L_150F5F30
    if (ctx->r19 != 0) {
        // 0x150F5F28: nop
    
            goto L_150F5F30;
    }
    // 0x150F5F28: nop

    // 0x150F5F2C: break       7
    do_break(353328940);
L_150F5F30:
    // 0x150F5F30: mflo        $t2
    ctx->r10 = lo;
    // 0x150F5F34: sh          $t1, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r9;
    // 0x150F5F38: sh          $t1, 0xEE($sp)
    MEM_H(0XEE, ctx->r29) = ctx->r9;
    // 0x150F5F3C: bne         $v1, $zero, L_150F5F48
    if (ctx->r3 != 0) {
        // 0x150F5F40: nop
    
            goto L_150F5F48;
    }
    // 0x150F5F40: nop

    // 0x150F5F44: break       7
    do_break(353328964);
L_150F5F48:
    // 0x150F5F48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150F5F4C: bne         $v1, $at, L_150F5F60
    if (ctx->r3 != ctx->r1) {
        // 0x150F5F50: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150F5F60;
    }
    // 0x150F5F50: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150F5F54: bne         $s4, $at, L_150F5F60
    if (ctx->r20 != ctx->r1) {
        // 0x150F5F58: nop
    
            goto L_150F5F60;
    }
    // 0x150F5F58: nop

    // 0x150F5F5C: break       6
    do_break(353328988);
L_150F5F60:
    // 0x150F5F60: sh          $t2, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r10;
    // 0x150F5F64: jal         0x150ADA20
    // 0x150F5F68: sh          $v1, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150F5F68: sh          $v1, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = ctx->r3;
    after_3:
    // 0x150F5F6C: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x150F5F70: mfhi        $t3
    ctx->r11 = hi;
    // 0x150F5F74: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x150F5F78: bne         $s5, $zero, L_150F5F84
    if (ctx->r21 != 0) {
        // 0x150F5F7C: nop
    
            goto L_150F5F84;
    }
    // 0x150F5F7C: nop

    // 0x150F5F80: break       7
    do_break(353329024);
L_150F5F84:
    // 0x150F5F84: sb          $t4, 0xEB($sp)
    MEM_B(0XEB, ctx->r29) = ctx->r12;
    // 0x150F5F88: jal         0x150ADA68
    // 0x150F5F8C: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150F5F8C: nop

    after_4:
    // 0x150F5F90: mul.s       $f18, $f0, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150F5F94: add.s       $f2, $f18, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f30.fl;
    // 0x150F5F98: swc1        $f2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f2.u32l;
    // 0x150F5F9C: jal         0x150ADA68
    // 0x150F5FA0: swc1        $f2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150F5FA0: swc1        $f2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x150F5FA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F5FA8: lwc1        $f4, 0x1B60($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1B60);
    // 0x150F5FAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F5FB0: lwc1        $f10, 0x1B64($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1B64);
    // 0x150F5FB4: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150F5FB8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150F5FBC: jal         0x150ADA68
    // 0x150F5FC0: swc1        $f16, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150F5FC0: swc1        $f16, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x150F5FC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F5FC8: lwc1        $f6, 0x1B68($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1B68);
    // 0x150F5FCC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F5FD0: lwc1        $f4, 0x1B6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1B6C);
    // 0x150F5FD4: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150F5FD8: add.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150F5FDC: mul.s       $f8, $f22, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x150F5FE0: nop

    // 0x150F5FE4: mul.s       $f10, $f24, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x150F5FE8: nop

    // 0x150F5FEC: mul.s       $f16, $f26, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f26.fl, ctx->f2.fl);
    // 0x150F5FF0: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
    // 0x150F5FF4: swc1        $f10, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f10.u32l;
    // 0x150F5FF8: jal         0x150ADA68
    // 0x150F5FFC: swc1        $f16, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150F5FFC: swc1        $f16, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x150F6000: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F6004: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F6008: lwc1        $f18, 0x118($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X118);
    // 0x150F600C: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x150F6010: mul.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150F6014: lwc1        $f16, 0x11C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x150F6018: lw          $t5, 0x128($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X128);
    // 0x150F601C: and         $t6, $t5, $s6
    ctx->r14 = ctx->r13 & ctx->r22;
    // 0x150F6020: sw          $t6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r14;
    // 0x150F6024: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150F6028: lwc1        $f18, 0xC4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150F602C: mul.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150F6030: lwc1        $f16, 0xC8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150F6034: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150F6038: lwc1        $f8, 0x120($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X120);
    // 0x150F603C: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x150F6040: swc1        $f10, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f10.u32l;
    // 0x150F6044: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150F6048: swc1        $f4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f4.u32l;
    // 0x150F604C: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150F6050: jal         0x150ADA20
    // 0x150F6054: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150F6054: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x150F6058: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x150F605C: beq         $t0, $zero, L_150F606C
    if (ctx->r8 == 0) {
        // 0x150F6060: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_150F606C;
    }
    // 0x150F6060: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150F6064: b           L_150F606C
    // 0x150F6068: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
        goto L_150F606C;
    // 0x150F6068: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
L_150F606C:
    // 0x150F606C: jal         0x150ADA20
    // 0x150F6070: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150F6070: nop

    after_9:
    // 0x150F6074: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x150F6078: beq         $t9, $zero, L_150F6088
    if (ctx->r25 == 0) {
        // 0x150F607C: lw          $t7, 0x128($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X128);
            goto L_150F6088;
    }
    // 0x150F607C: lw          $t7, 0x128($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X128);
    // 0x150F6080: b           L_150F608C
    // 0x150F6084: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_150F608C;
    // 0x150F6084: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_150F6088:
    // 0x150F6088: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150F608C:
    // 0x150F608C: or          $t8, $v0, $s0
    ctx->r24 = ctx->r2 | ctx->r16;
    // 0x150F6090: or          $t1, $t7, $t8
    ctx->r9 = ctx->r15 | ctx->r24;
    // 0x150F6094: sw          $t1, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r9;
    // 0x150F6098: lbu         $t2, 0xC($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0XC);
    // 0x150F609C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x150F60A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150F60A4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150F60A8: lbu         $t3, 0x1($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X1);
    // 0x150F60AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F60B0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x150F60B4: jal         0x15130280
    // 0x150F60B8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_15130280(rdram, ctx);
        goto after_10;
    // 0x150F60B8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_10:
    // 0x150F60BC: beq         $v0, $zero, L_150F60D0
    if (ctx->r2 == 0) {
        // 0x150F60C0: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_150F60D0;
    }
    // 0x150F60C0: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x150F60C4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x150F60C8: jal         0x10022EC0
    // 0x150F60CC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x150F60CC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_11:
L_150F60D0:
    // 0x150F60D0: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150F60D4: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x150F60D8: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x150F60DC: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150F60E0: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
    // 0x150F60E4: nop

    // 0x150F60E8: bc1t        L_150F5F00
    if (c1cs) {
        // 0x150F60EC: nop
    
            goto L_150F5F00;
    }
    // 0x150F60EC: nop

L_150F60F0:
    // 0x150F60F0: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_150F60F4:
    // 0x150F60F4: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150F60F8: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x150F60FC: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x150F6100: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x150F6104: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x150F6108: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x150F610C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x150F6110: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x150F6114: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x150F6118: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x150F611C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x150F6120: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x150F6124: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x150F6128: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x150F612C: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x150F6130: jr          $ra
    // 0x150F6134: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
    return;
    return;
    // 0x150F6134: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
;}
RECOMP_FUNC void func_151044F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151044F4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x151044F8: lw          $v1, -0x3A14($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A14);
    // 0x151044FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15104500: beq         $v1, $zero, L_15104510
    if (ctx->r3 == 0) {
        // 0x15104504: nop
    
            goto L_15104510;
    }
    // 0x15104504: nop

    // 0x15104508: jr          $ra
    // 0x1510450C: lbu         $v0, 0x7D($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X7D);
    return;
    return;
    // 0x1510450C: lbu         $v0, 0x7D($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X7D);
L_15104510:
    // 0x15104510: jr          $ra
    // 0x15104514: nop

    return;
    return;
    // 0x15104514: nop

;}
RECOMP_FUNC void func_15034F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15034F20: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15034F24: sb          $zero, 0x3F00($at)
    MEM_B(0X3F00, ctx->r1) = 0;
    // 0x15034F28: jr          $ra
    // 0x15034F2C: nop

    return;
    return;
    // 0x15034F2C: nop

;}
RECOMP_FUNC void func_1519D9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519D9F4: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x1519D9F8: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x1519D9FC: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x1519DA00: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1519DA04: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1519DA08: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1519DA0C: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x1519DA10: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x1519DA14: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    // 0x1519DA18: lb          $t6, 0x2C($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X2C);
    // 0x1519DA1C: addiu       $a0, $s1, 0x84
    ctx->r4 = ADD32(ctx->r17, 0X84);
    // 0x1519DA20: lh          $a1, 0xD2($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XD2);
    // 0x1519DA24: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x1519DA28: bnel        $at, $zero, L_1519E1D8
    if (ctx->r1 != 0) {
        // 0x1519DA2C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_1519E1D8;
    }
    goto skip_0;
    // 0x1519DA2C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_0:
    // 0x1519DA30: lbu         $t7, 0x25($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X25);
    // 0x1519DA34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1519DA38: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    // 0x1519DA3C: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x1519DA40: jal         0x151D5D60
    // 0x1519DA44: addiu       $a2, $t8, 0xA0
    ctx->r6 = ADD32(ctx->r24, 0XA0);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x1519DA44: addiu       $a2, $t8, 0xA0
    ctx->r6 = ADD32(ctx->r24, 0XA0);
    after_0:
    // 0x1519DA48: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DA4C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1519DA50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1519DA54: beql        $a0, $zero, L_1519E1D8
    if (ctx->r4 == 0) {
        // 0x1519DA58: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_1519E1D8;
    }
    goto skip_1;
    // 0x1519DA58: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_1:
    // 0x1519DA5C: lw          $t0, 0x98($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X98);
    // 0x1519DA60: lw          $s2, 0x94($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X94);
    // 0x1519DA64: sb          $t9, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r25;
    // 0x1519DA68: lbu         $v0, 0x6($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X6);
    // 0x1519DA6C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1519DA70: addiu       $s3, $zero, 0x24
    ctx->r19 = ADD32(0, 0X24);
    // 0x1519DA74: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x1519DA78: beql        $t6, $zero, L_1519DAE0
    if (ctx->r14 == 0) {
        // 0x1519DA7C: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_1519DAE0;
    }
    goto skip_2;
    // 0x1519DA7C: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    skip_2:
    // 0x1519DA80: lbu         $a0, 0x5C($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X5C);
    // 0x1519DA84: lb          $v0, 0x2D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2D);
L_1519DA88:
    // 0x1519DA88: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519DA8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1519DA90: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x1519DA94: mflo        $t7
    ctx->r15 = lo;
    // 0x1519DA98: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x1519DA9C: sb          $v1, 0x20($t8)
    MEM_B(0X20, ctx->r24) = ctx->r3;
    // 0x1519DAA0: lbu         $t9, 0x5D($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X5D);
    // 0x1519DAA4: lbu         $t7, 0x25($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X25);
    // 0x1519DAA8: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x1519DAAC: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x1519DAB0: andi        $t6, $v1, 0xFF
    ctx->r14 = ctx->r3 & 0XFF;
    // 0x1519DAB4: bne         $v0, $t7, L_1519DAC0
    if (ctx->r2 != ctx->r15) {
        // 0x1519DAB8: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_1519DAC0;
    }
    // 0x1519DAB8: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x1519DABC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1519DAC0:
    // 0x1519DAC0: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    // 0x1519DAC4: beql        $a0, $zero, L_1519DADC
    if (ctx->r4 == 0) {
        // 0x1519DAC8: lbu         $v0, 0x6($t0)
        ctx->r2 = MEM_BU(ctx->r8, 0X6);
            goto L_1519DADC;
    }
    goto skip_3;
    // 0x1519DAC8: lbu         $v0, 0x6($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X6);
    skip_3:
    // 0x1519DACC: lb          $t6, 0x2E($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X2E);
    // 0x1519DAD0: bne         $v0, $t6, L_1519DA88
    if (ctx->r2 != ctx->r14) {
        // 0x1519DAD4: nop
    
            goto L_1519DA88;
    }
    // 0x1519DAD4: nop

    // 0x1519DAD8: lbu         $v0, 0x6($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X6);
L_1519DADC:
    // 0x1519DADC: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
L_1519DAE0:
    // 0x1519DAE0: beq         $t7, $zero, L_1519DB68
    if (ctx->r15 == 0) {
        // 0x1519DAE4: addiu       $s3, $zero, 0x24
        ctx->r19 = ADD32(0, 0X24);
            goto L_1519DB68;
    }
    // 0x1519DAE4: addiu       $s3, $zero, 0x24
    ctx->r19 = ADD32(0, 0X24);
    // 0x1519DAE8: lb          $v0, 0x2E($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2E);
    // 0x1519DAEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519DAF0: lbu         $a1, 0x5E($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X5E);
    // 0x1519DAF4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1519DAF8: bgez        $v0, L_1519DB08
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1519DAFC: nop
    
            goto L_1519DB08;
    }
    // 0x1519DAFC: nop

    // 0x1519DB00: lbu         $v0, 0x25($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X25);
    // 0x1519DB04: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_1519DB08:
    // 0x1519DB08: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519DB0C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x1519DB10: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1519DB14: mflo        $t8
    ctx->r24 = lo;
    // 0x1519DB18: addu        $v1, $s2, $t8
    ctx->r3 = ADD32(ctx->r18, ctx->r24);
    // 0x1519DB1C: lbu         $t9, 0x20($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X20);
    // 0x1519DB20: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519DB24: mflo        $t6
    ctx->r14 = lo;
    // 0x1519DB28: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x1519DB2C: sb          $t7, 0x20($v1)
    MEM_B(0X20, ctx->r3) = ctx->r15;
    // 0x1519DB30: lbu         $t8, 0x5F($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X5F);
    // 0x1519DB34: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x1519DB38: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1519DB3C: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x1519DB40: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x1519DB44: bgez        $v0, L_1519DB54
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1519DB48: or          $a2, $t9, $zero
        ctx->r6 = ctx->r25 | 0;
            goto L_1519DB54;
    }
    // 0x1519DB48: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x1519DB4C: lbu         $v0, 0x25($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X25);
    // 0x1519DB50: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_1519DB54:
    // 0x1519DB54: beq         $a1, $zero, L_1519DB68
    if (ctx->r5 == 0) {
        // 0x1519DB58: nop
    
            goto L_1519DB68;
    }
    // 0x1519DB58: nop

    // 0x1519DB5C: lb          $t8, 0x2E($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X2E);
    // 0x1519DB60: bne         $v0, $t8, L_1519DB08
    if (ctx->r2 != ctx->r24) {
        // 0x1519DB64: nop
    
            goto L_1519DB08;
    }
    // 0x1519DB64: nop

L_1519DB68:
    // 0x1519DB68: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x1519DB6C: addiu       $t9, $zero, 0x1F
    ctx->r25 = ADD32(0, 0X1F);
    // 0x1519DB70: addiu       $t6, $sp, 0x95
    ctx->r14 = ADD32(ctx->r29, 0X95);
    // 0x1519DB74: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x1519DB78: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x1519DB7C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1519DB80: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1519DB84: addiu       $a1, $a1, 0xCD4
    ctx->r5 = ADD32(ctx->r5, 0XCD4);
    // 0x1519DB88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1519DB8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519DB90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1519DB94: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1519DB98: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1519DB9C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1519DBA0: jal         0x15142E24
    // 0x1519DBA4: sw          $t0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r8;
    func_15142E24(rdram, ctx);
        goto after_1;
    // 0x1519DBA4: sw          $t0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r8;
    after_1:
    // 0x1519DBA8: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
    // 0x1519DBAC: addiu       $s0, $sp, 0x95
    ctx->r16 = ADD32(ctx->r29, 0X95);
    // 0x1519DBB0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1519DBB4: lbu         $a1, 0x40($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X40);
    // 0x1519DBB8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1519DBBC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1519DBC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1519DBC4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x1519DBC8: jal         0x15142C10
    // 0x1519DBCC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    func_15142C10(rdram, ctx);
        goto after_2;
    // 0x1519DBCC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    after_2:
    // 0x1519DBD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1519DBD4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x1519DBD8: jal         0x1513F4E4
    // 0x1519DBDC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_3;
    // 0x1519DBDC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x1519DBE0: lui         $a2, 0x16
    ctx->r6 = S32(0X16 << 16);
    // 0x1519DBE4: ori         $a2, $a2, 0x600
    ctx->r6 = ctx->r6 | 0X600;
    // 0x1519DBE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1519DBEC: jal         0x15142B7C
    // 0x1519DBF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15142B7C(rdram, ctx);
        goto after_4;
    // 0x1519DBF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x1519DBF4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1519DBF8: lw          $a1, 0x2C9C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C9C);
    // 0x1519DBFC: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x1519DC00: lui         $a2, 0x50
    ctx->r6 = S32(0X50 << 16);
    // 0x1519DC04: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x1519DC08: ori         $a1, $t8, 0x2CA0
    ctx->r5 = ctx->r24 | 0X2CA0;
    // 0x1519DC0C: ori         $a2, $a2, 0x49D8
    ctx->r6 = ctx->r6 | 0X49D8;
    // 0x1519DC10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1519DC14: jal         0x15142FBC
    // 0x1519DC18: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_15142FBC(rdram, ctx);
        goto after_5;
    // 0x1519DC18: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_5:
    // 0x1519DC1C: lhu         $t6, 0x1E($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X1E);
    // 0x1519DC20: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1519DC24: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x1519DC28: beql        $t7, $zero, L_1519DCD0
    if (ctx->r15 == 0) {
        // 0x1519DC2C: lb          $a0, 0x2E($s1)
        ctx->r4 = MEM_B(ctx->r17, 0X2E);
            goto L_1519DCD0;
    }
    goto skip_4;
    // 0x1519DC2C: lb          $a0, 0x2E($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X2E);
    skip_4:
    // 0x1519DC30: lb          $t0, 0x2E($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X2E);
    // 0x1519DC34: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x1519DC38: bgezl       $t0, L_1519DC4C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1519DC3C: lw          $at, 0x10($s1)
        ctx->r1 = MEM_W(ctx->r17, 0X10);
            goto L_1519DC4C;
    }
    goto skip_5;
    // 0x1519DC3C: lw          $at, 0x10($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X10);
    skip_5:
    // 0x1519DC40: lbu         $t0, 0x25($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X25);
    // 0x1519DC44: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x1519DC48: lw          $at, 0x10($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X10);
L_1519DC4C:
    // 0x1519DC4C: addiu       $t8, $sp, 0xA4
    ctx->r24 = ADD32(ctx->r29, 0XA4);
    // 0x1519DC50: multu       $t0, $s3
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519DC54: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x1519DC58: lw          $t6, 0x14($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X14);
    // 0x1519DC5C: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x1519DC60: lw          $at, 0x18($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X18);
    // 0x1519DC64: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1519DC68: addiu       $t6, $t6, -0x2E28
    ctx->r14 = ADD32(ctx->r14, -0X2E28);
    // 0x1519DC6C: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x1519DC70: lh          $a1, 0xD2($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XD2);
    // 0x1519DC74: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1519DC78: mflo        $t7
    ctx->r15 = lo;
    // 0x1519DC7C: addiu       $t8, $t8, -0x2E18
    ctx->r24 = ADD32(ctx->r24, -0X2E18);
    // 0x1519DC80: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x1519DC84: addu        $v0, $s2, $t7
    ctx->r2 = ADD32(ctx->r18, ctx->r15);
    // 0x1519DC88: addu        $t4, $t9, $t8
    ctx->r12 = ADD32(ctx->r25, ctx->r24);
    // 0x1519DC8C: lwc1        $f14, 0x0($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X0);
    // 0x1519DC90: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1519DC94: addu        $t5, $t9, $t6
    ctx->r13 = ADD32(ctx->r25, ctx->r14);
    // 0x1519DC98: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x1519DC9C: mul.s       $f18, $f14, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x1519DCA0: lbu         $t3, 0x21($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X21);
    // 0x1519DCA4: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1519DCA8: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x1519DCAC: lh          $t9, 0x1C($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X1C);
    // 0x1519DCB0: lbu         $t7, 0x20($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X20);
    // 0x1519DCB4: multu       $t7, $t9
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519DCB8: mflo        $a2
    ctx->r6 = lo;
    // 0x1519DCBC: sra         $t8, $a2, 8
    ctx->r24 = S32(SIGNED(ctx->r6) >> 8);
    // 0x1519DCC0: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x1519DCC4: b           L_1519DD88
    // 0x1519DCC8: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
        goto L_1519DD88;
    // 0x1519DCC8: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1519DCCC: lb          $a0, 0x2E($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X2E);
L_1519DCD0:
    // 0x1519DCD0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x1519DCD4: bgezl       $a0, L_1519DCE8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x1519DCD8: addiu       $t0, $a0, -0x1
        ctx->r8 = ADD32(ctx->r4, -0X1);
            goto L_1519DCE8;
    }
    goto skip_6;
    // 0x1519DCD8: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
    skip_6:
    // 0x1519DCDC: lbu         $a0, 0x25($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X25);
    // 0x1519DCE0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x1519DCE4: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
L_1519DCE8:
    // 0x1519DCE8: bgez        $t0, L_1519DCF8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1519DCEC: nop
    
            goto L_1519DCF8;
    }
    // 0x1519DCEC: nop

    // 0x1519DCF0: lbu         $t0, 0x25($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X25);
    // 0x1519DCF4: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
L_1519DCF8:
    // 0x1519DCF8: multu       $a0, $s3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519DCFC: addiu       $t8, $sp, 0xA4
    ctx->r24 = ADD32(ctx->r29, 0XA4);
    // 0x1519DD00: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1519DD04: addiu       $t6, $t6, -0x2E18
    ctx->r14 = ADD32(ctx->r14, -0X2E18);
    // 0x1519DD08: mflo        $t9
    ctx->r25 = lo;
    // 0x1519DD0C: addu        $v1, $s2, $t9
    ctx->r3 = ADD32(ctx->r18, ctx->r25);
    // 0x1519DD10: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x1519DD14: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x1519DD18: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x1519DD1C: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x1519DD20: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x1519DD24: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x1519DD28: lh          $a1, 0xD2($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XD2);
    // 0x1519DD2C: lwc1        $f0, 0x18($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1519DD30: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1519DD34: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x1519DD38: addu        $t4, $t9, $t6
    ctx->r12 = ADD32(ctx->r25, ctx->r14);
    // 0x1519DD3C: lwc1        $f14, 0x0($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X0);
    // 0x1519DD40: addiu       $t8, $t8, -0x2E28
    ctx->r24 = ADD32(ctx->r24, -0X2E28);
    // 0x1519DD44: addu        $t5, $t9, $t8
    ctx->r13 = ADD32(ctx->r25, ctx->r24);
    // 0x1519DD48: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x1519DD4C: mul.s       $f18, $f14, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x1519DD50: lbu         $t3, 0x21($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X21);
    // 0x1519DD54: mul.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1519DD58: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x1519DD5C: lh          $t9, 0x1C($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X1C);
    // 0x1519DD60: lbu         $t7, 0x20($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X20);
    // 0x1519DD64: multu       $t7, $t9
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519DD68: sll         $t9, $t0, 3
    ctx->r25 = S32(ctx->r8 << 3);
    // 0x1519DD6C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x1519DD70: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1519DD74: addu        $v0, $s2, $t9
    ctx->r2 = ADD32(ctx->r18, ctx->r25);
    // 0x1519DD78: mflo        $a2
    ctx->r6 = lo;
    // 0x1519DD7C: sra         $t6, $a2, 8
    ctx->r14 = S32(SIGNED(ctx->r6) >> 8);
    // 0x1519DD80: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x1519DD84: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
L_1519DD88:
    // 0x1519DD88: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x1519DD8C: addiu       $t6, $sp, 0xB0
    ctx->r14 = ADD32(ctx->r29, 0XB0);
    // 0x1519DD90: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x1519DD94: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1519DD98: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x1519DD9C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x1519DDA0: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x1519DDA4: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1519DDA8: lh          $t8, 0x1C($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X1C);
    // 0x1519DDAC: lbu         $t7, 0x20($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X20);
    // 0x1519DDB0: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x1519DDB4: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1519DDB8: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519DDBC: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x1519DDC0: lbu         $t1, 0x21($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X21);
    // 0x1519DDC4: sll         $v0, $t3, 6
    ctx->r2 = S32(ctx->r11 << 6);
    // 0x1519DDC8: mul.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x1519DDCC: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1519DDD0: mul.s       $f12, $f16, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1519DDD4: mflo        $t2
    ctx->r10 = lo;
    // 0x1519DDD8: sra         $t6, $t2, 8
    ctx->r14 = S32(SIGNED(ctx->r10) >> 8);
    // 0x1519DDDC: sll         $t9, $t6, 16
    ctx->r25 = S32(ctx->r14 << 16);
    // 0x1519DDE0: sra         $t2, $t9, 16
    ctx->r10 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1519DDE4: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DDE8: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x1519DDEC: nop

    // 0x1519DDF0: sh          $t6, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r14;
    // 0x1519DDF4: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x1519DDF8: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DDFC: addiu       $t9, $zero, 0x7C0
    ctx->r25 = ADD32(0, 0X7C0);
    // 0x1519DE00: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1519DE04: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x1519DE08: nop

    // 0x1519DE0C: sh          $t8, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r24;
    // 0x1519DE10: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1519DE14: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1519DE18: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DE1C: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1519DE20: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1519DE24: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x1519DE28: nop

    // 0x1519DE2C: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    // 0x1519DE30: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DE34: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
    // 0x1519DE38: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DE3C: sh          $t9, 0xA($t7)
    MEM_H(0XA, ctx->r15) = ctx->r25;
    // 0x1519DE40: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DE44: sb          $a3, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r7;
    // 0x1519DE48: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DE4C: sb          $a3, 0xD($t6)
    MEM_B(0XD, ctx->r14) = ctx->r7;
    // 0x1519DE50: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DE54: sb          $a3, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r7;
    // 0x1519DE58: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DE5C: sb          $a2, 0xF($t7)
    MEM_B(0XF, ctx->r15) = ctx->r6;
    // 0x1519DE60: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DE64: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x1519DE68: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x1519DE6C: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DE70: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x1519DE74: addiu       $t9, $t6, 0x10
    ctx->r25 = ADD32(ctx->r14, 0X10);
    // 0x1519DE78: sw          $t9, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r25;
    // 0x1519DE7C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1519DE80: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x1519DE84: nop

    // 0x1519DE88: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x1519DE8C: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x1519DE90: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DE94: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1519DE98: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x1519DE9C: nop

    // 0x1519DEA0: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x1519DEA4: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1519DEA8: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1519DEAC: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DEB0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1519DEB4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1519DEB8: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x1519DEBC: nop

    // 0x1519DEC0: sh          $t6, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r14;
    // 0x1519DEC4: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DEC8: sh          $v0, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r2;
    // 0x1519DECC: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DED0: sh          $zero, 0xA($t9)
    MEM_H(0XA, ctx->r25) = 0;
    // 0x1519DED4: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DED8: sb          $a3, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r7;
    // 0x1519DEDC: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DEE0: sb          $a3, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r7;
    // 0x1519DEE4: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DEE8: sb          $a3, 0xE($t8)
    MEM_B(0XE, ctx->r24) = ctx->r7;
    // 0x1519DEEC: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DEF0: sb          $a2, 0xF($t9)
    MEM_B(0XF, ctx->r25) = ctx->r6;
    // 0x1519DEF4: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DEF8: sh          $zero, 0x6($t6)
    MEM_H(0X6, ctx->r14) = 0;
    // 0x1519DEFC: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DF00: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x1519DF04: sw          $t8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r24;
    // 0x1519DF08: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
L_1519DF0C:
    // 0x1519DF0C: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DF10: sll         $v1, $t1, 6
    ctx->r3 = S32(ctx->r9 << 6);
    // 0x1519DF14: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x1519DF18: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x1519DF1C: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x1519DF20: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1519DF24: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1519DF28: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1519DF2C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x1519DF30: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x1519DF34: nop

    // 0x1519DF38: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x1519DF3C: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1519DF40: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DF44: addiu       $t7, $zero, 0x7C0
    ctx->r15 = ADD32(0, 0X7C0);
    // 0x1519DF48: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1519DF4C: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x1519DF50: nop

    // 0x1519DF54: sh          $t9, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r25;
    // 0x1519DF58: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x1519DF5C: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DF60: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x1519DF64: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1519DF68: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x1519DF6C: nop

    // 0x1519DF70: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x1519DF74: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DF78: sh          $v1, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r3;
    // 0x1519DF7C: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DF80: sh          $t7, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r15;
    // 0x1519DF84: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DF88: sb          $a3, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r7;
    // 0x1519DF8C: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DF90: sb          $a3, 0xD($t6)
    MEM_B(0XD, ctx->r14) = ctx->r7;
    // 0x1519DF94: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DF98: sb          $a3, 0xE($t7)
    MEM_B(0XE, ctx->r15) = ctx->r7;
    // 0x1519DF9C: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DFA0: sb          $t2, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r10;
    // 0x1519DFA4: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DFA8: sh          $zero, 0x6($t9)
    MEM_H(0X6, ctx->r25) = 0;
    // 0x1519DFAC: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x1519DFB0: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DFB4: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x1519DFB8: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x1519DFBC: sw          $t7, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r15;
    // 0x1519DFC0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1519DFC4: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x1519DFC8: nop

    // 0x1519DFCC: sh          $t9, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r25;
    // 0x1519DFD0: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1519DFD4: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DFD8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1519DFDC: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x1519DFE0: nop

    // 0x1519DFE4: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x1519DFE8: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x1519DFEC: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x1519DFF0: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x1519DFF4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1519DFF8: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x1519DFFC: nop

    // 0x1519E000: sh          $t6, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r14;
    // 0x1519E004: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x1519E008: sh          $v1, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r3;
    // 0x1519E00C: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x1519E010: sh          $zero, 0xA($t7)
    MEM_H(0XA, ctx->r15) = 0;
    // 0x1519E014: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519E018: sb          $a3, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r7;
    // 0x1519E01C: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x1519E020: sb          $a3, 0xD($t8)
    MEM_B(0XD, ctx->r24) = ctx->r7;
    // 0x1519E024: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x1519E028: sb          $a3, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r7;
    // 0x1519E02C: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x1519E030: sb          $t2, 0xF($t7)
    MEM_B(0XF, ctx->r15) = ctx->r10;
    // 0x1519E034: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519E038: lui         $t7, 0x100
    ctx->r15 = S32(0X100 << 16);
    // 0x1519E03C: ori         $t7, $t7, 0x4008
    ctx->r15 = ctx->r15 | 0X4008;
    // 0x1519E040: sh          $zero, 0x6($t6)
    MEM_H(0X6, ctx->r14) = 0;
    // 0x1519E044: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x1519E048: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x1519E04C: sw          $t9, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r25;
    // 0x1519E050: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1519E054: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519E058: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1519E05C: lui         $t9, 0x500
    ctx->r25 = S32(0X500 << 16);
    // 0x1519E060: addiu       $t8, $t6, -0x40
    ctx->r24 = ADD32(ctx->r14, -0X40);
    // 0x1519E064: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x1519E068: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1519E06C: ori         $t9, $t9, 0x204
    ctx->r25 = ctx->r25 | 0X204;
    // 0x1519E070: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1519E074: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1519E078: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1519E07C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1519E080: lui         $t7, 0x502
    ctx->r15 = S32(0X502 << 16);
    // 0x1519E084: ori         $t7, $t7, 0x604
    ctx->r15 = ctx->r15 | 0X604;
    // 0x1519E088: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x1519E08C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x1519E090: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1519E094: beq         $at, $zero, L_1519E11C
    if (ctx->r1 == 0) {
        // 0x1519E098: lw          $a0, 0xC4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XC4);
            goto L_1519E11C;
    }
    // 0x1519E098: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x1519E09C: addiu       $a1, $a0, -0x20
    ctx->r5 = ADD32(ctx->r4, -0X20);
    // 0x1519E0A0: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x1519E0A4: sb          $t1, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r9;
    // 0x1519E0A8: sh          $t2, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r10;
    // 0x1519E0AC: sb          $t3, 0x9A($sp)
    MEM_B(0X9A, ctx->r29) = ctx->r11;
    // 0x1519E0B0: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    // 0x1519E0B4: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x1519E0B8: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x1519E0BC: jal         0x10022EC0
    // 0x1519E0C0: swc1        $f12, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f12.u32l;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x1519E0C0: swc1        $f12, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f12.u32l;
    after_6:
    // 0x1519E0C4: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x1519E0C8: lw          $t0, 0xA0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA0);
    // 0x1519E0CC: lbu         $t1, 0x9B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X9B);
    // 0x1519E0D0: lh          $t8, -0x18($t6)
    ctx->r24 = MEM_H(ctx->r14, -0X18);
    // 0x1519E0D4: lh          $t2, 0x98($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X98);
    // 0x1519E0D8: lbu         $t3, 0x9A($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X9A);
    // 0x1519E0DC: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x1519E0E0: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x1519E0E4: lwc1        $f2, 0x8C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1519E0E8: lwc1        $f12, 0x90($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X90);
    // 0x1519E0EC: addiu       $t9, $t8, -0x4000
    ctx->r25 = ADD32(ctx->r24, -0X4000);
    // 0x1519E0F0: sh          $t9, -0x18($t6)
    MEM_H(-0X18, ctx->r14) = ctx->r25;
    // 0x1519E0F4: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x1519E0F8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x1519E0FC: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x1519E100: sw          $t8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r24;
    // 0x1519E104: lh          $t9, -0x18($t8)
    ctx->r25 = MEM_H(ctx->r24, -0X18);
    // 0x1519E108: addiu       $t6, $t9, -0x4000
    ctx->r14 = ADD32(ctx->r25, -0X4000);
    // 0x1519E10C: sh          $t6, -0x18($t8)
    MEM_H(-0X18, ctx->r24) = ctx->r14;
    // 0x1519E110: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x1519E114: addiu       $t9, $t7, 0x10
    ctx->r25 = ADD32(ctx->r15, 0X10);
    // 0x1519E118: sw          $t9, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r25;
L_1519E11C:
    // 0x1519E11C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x1519E120: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x1519E124: bgezl       $t0, L_1519E138
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1519E128: lb          $v1, 0x2D($s1)
        ctx->r3 = MEM_B(ctx->r17, 0X2D);
            goto L_1519E138;
    }
    goto skip_7;
    // 0x1519E128: lb          $v1, 0x2D($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2D);
    skip_7:
    // 0x1519E12C: lbu         $t0, 0x25($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X25);
    // 0x1519E130: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x1519E134: lb          $v1, 0x2D($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2D);
L_1519E138:
    // 0x1519E138: beq         $a0, $v1, L_1519E1CC
    if (ctx->r4 == ctx->r3) {
        // 0x1519E13C: nop
    
            goto L_1519E1CC;
    }
    // 0x1519E13C: nop

    // 0x1519E140: multu       $a0, $s3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519E144: addiu       $t6, $sp, 0xA4
    ctx->r14 = ADD32(ctx->r29, 0XA4);
    // 0x1519E148: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x1519E14C: mflo        $t8
    ctx->r24 = lo;
    // 0x1519E150: addu        $t7, $s2, $t8
    ctx->r15 = ADD32(ctx->r18, ctx->r24);
    // 0x1519E154: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x1519E158: multu       $t0, $s3
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519E15C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1519E160: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x1519E164: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x1519E168: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x1519E16C: mflo        $t9
    ctx->r25 = lo;
    // 0x1519E170: addu        $v0, $s2, $t9
    ctx->r2 = ADD32(ctx->r18, ctx->r25);
    // 0x1519E174: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1519E178: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x1519E17C: addiu       $t6, $sp, 0xB0
    ctx->r14 = ADD32(ctx->r29, 0XB0);
    // 0x1519E180: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1519E184: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x1519E188: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x1519E18C: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x1519E190: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1519E194: lh          $t7, 0x1C($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X1C);
    // 0x1519E198: lbu         $t9, 0x20($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X20);
    // 0x1519E19C: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x1519E1A0: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1519E1A4: multu       $t9, $t7
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519E1A8: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x1519E1AC: mul.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519E1B0: lbu         $t1, 0x21($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X21);
    // 0x1519E1B4: lb          $v1, 0x2D($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2D);
    // 0x1519E1B8: mul.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1519E1BC: mflo        $t2
    ctx->r10 = lo;
    // 0x1519E1C0: sra         $t6, $t2, 8
    ctx->r14 = S32(SIGNED(ctx->r10) >> 8);
    // 0x1519E1C4: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x1519E1C8: sra         $t2, $t8, 16
    ctx->r10 = S32(SIGNED(ctx->r24) >> 16);
L_1519E1CC:
    // 0x1519E1CC: bnel        $a0, $v1, L_1519DF0C
    if (ctx->r4 != ctx->r3) {
        // 0x1519E1D0: lwc1        $f4, 0xB0($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
            goto L_1519DF0C;
    }
    goto skip_8;
    // 0x1519E1D0: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    skip_8:
    // 0x1519E1D4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1519E1D8:
    // 0x1519E1D8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1519E1DC: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x1519E1E0: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x1519E1E4: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x1519E1E8: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x1519E1EC: jr          $ra
    // 0x1519E1F0: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    return;
    // 0x1519E1F0: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_1502F490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502F490: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x1502F494: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1502F498: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x1502F49C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x1502F4A0: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x1502F4A4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x1502F4A8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x1502F4AC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x1502F4B0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x1502F4B4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x1502F4B8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1502F4BC: sw          $a0, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r4;
    // 0x1502F4C0: sw          $a1, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r5;
    // 0x1502F4C4: sw          $a2, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r6;
    // 0x1502F4C8: sw          $a3, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r7;
    // 0x1502F4CC: lw          $t6, 0x138($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X138);
    // 0x1502F4D0: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1502F4D4: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x1502F4D8: lbu         $t1, 0x4($t6)
    ctx->r9 = MEM_BU(ctx->r14, 0X4);
    // 0x1502F4DC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1502F4E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1502F4E4: sll         $ra, $t1, 2
    ctx->r31 = S32(ctx->r9 << 2);
    // 0x1502F4E8: addu        $t0, $t0, $ra
    ctx->r8 = ADD32(ctx->r8, ctx->r31);
    // 0x1502F4EC: lw          $t0, 0x6070($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6070);
    // 0x1502F4F0: addu        $a1, $a1, $ra
    ctx->r5 = ADD32(ctx->r5, ctx->r31);
    // 0x1502F4F4: addiu       $v0, $sp, 0xF4
    ctx->r2 = ADD32(ctx->r29, 0XF4);
    // 0x1502F4F8: beq         $t0, $zero, L_1502F918
    if (ctx->r8 == 0) {
        // 0x1502F4FC: subu        $t8, $t8, $t7
        ctx->r24 = SUB32(ctx->r24, ctx->r15);
            goto L_1502F918;
    }
    // 0x1502F4FC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1502F500: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1502F504: addu        $v1, $t0, $t8
    ctx->r3 = ADD32(ctx->r8, ctx->r24);
    // 0x1502F508: lw          $a1, 0x19A0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X19A0);
    // 0x1502F50C: addiu       $a0, $sp, 0x100
    ctx->r4 = ADD32(ctx->r29, 0X100);
L_1502F510:
    // 0x1502F510: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1502F514: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1502F518: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1502F51C: addu        $t6, $a1, $t9
    ctx->r14 = ADD32(ctx->r5, ctx->r25);
    // 0x1502F520: bne         $v0, $a0, L_1502F510
    if (ctx->r2 != ctx->r4) {
        // 0x1502F524: sw          $t6, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r14;
            goto L_1502F510;
    }
    // 0x1502F524: sw          $t6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r14;
    // 0x1502F528: sll         $t7, $t1, 1
    ctx->r15 = S32(ctx->r9 << 1);
    // 0x1502F52C: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x1502F530: addu        $s1, $s1, $t7
    ctx->r17 = ADD32(ctx->r17, ctx->r15);
    // 0x1502F534: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1502F538: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x1502F53C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1502F540: addiu       $t2, $t2, 0x5C08
    ctx->r10 = ADD32(ctx->r10, 0X5C08);
    // 0x1502F544: lhu         $s1, 0x5EF8($s1)
    ctx->r17 = MEM_HU(ctx->r17, 0X5EF8);
    // 0x1502F548: addiu       $t1, $sp, 0xF4
    ctx->r9 = ADD32(ctx->r29, 0XF4);
    // 0x1502F54C: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
    // 0x1502F550: addiu       $t4, $sp, 0x114
    ctx->r12 = ADD32(ctx->r29, 0X114);
    // 0x1502F554: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
L_1502F558:
    // 0x1502F558: beq         $t5, $s1, L_1502F918
    if (ctx->r13 == ctx->r17) {
        // 0x1502F55C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_1502F918;
    }
    // 0x1502F55C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1502F560: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_1502F564:
    // 0x1502F564: sllv        $a0, $t8, $a3
    ctx->r4 = S32(ctx->r24 << (ctx->r7 & 31));
    // 0x1502F568: and         $t9, $a0, $t0
    ctx->r25 = ctx->r4 & ctx->r8;
    // 0x1502F56C: bnel        $t9, $zero, L_1502F5D0
    if (ctx->r25 != 0) {
        // 0x1502F570: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_1502F5D0;
    }
    goto skip_0;
    // 0x1502F570: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_0:
    // 0x1502F574: multu       $t5, $t3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1502F578: addu        $t7, $t2, $ra
    ctx->r15 = ADD32(ctx->r10, ctx->r31);
    // 0x1502F57C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1502F580: sll         $v1, $a3, 2
    ctx->r3 = S32(ctx->r7 << 2);
    // 0x1502F584: addu        $t6, $t1, $v1
    ctx->r14 = ADD32(ctx->r9, ctx->r3);
    // 0x1502F588: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x1502F58C: mflo        $t9
    ctx->r25 = lo;
    // 0x1502F590: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x1502F594: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x1502F598: sltu        $at, $a1, $a2
    ctx->r1 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x1502F59C: bnel        $at, $zero, L_1502F5D0
    if (ctx->r1 != 0) {
        // 0x1502F5A0: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_1502F5D0;
    }
    goto skip_1;
    // 0x1502F5A0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_1:
    // 0x1502F5A4: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x1502F5A8: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x1502F5AC: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x1502F5B0: sltu        $at, $a1, $t8
    ctx->r1 = ctx->r5 < ctx->r24 ? 1 : 0;
    // 0x1502F5B4: beql        $at, $zero, L_1502F5D0
    if (ctx->r1 == 0) {
        // 0x1502F5B8: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_1502F5D0;
    }
    goto skip_2;
    // 0x1502F5B8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_2:
    // 0x1502F5BC: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x1502F5C0: addu        $t6, $t4, $v1
    ctx->r14 = ADD32(ctx->r12, ctx->r3);
    // 0x1502F5C4: or          $t0, $a0, $t0
    ctx->r8 = ctx->r4 | ctx->r8;
    // 0x1502F5C8: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x1502F5CC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_1502F5D0:
    // 0x1502F5D0: slti        $at, $a3, 0x3
    ctx->r1 = SIGNED(ctx->r7) < 0X3 ? 1 : 0;
    // 0x1502F5D4: bnel        $at, $zero, L_1502F564
    if (ctx->r1 != 0) {
        // 0x1502F5D8: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_1502F564;
    }
    goto skip_3;
    // 0x1502F5D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    skip_3:
    // 0x1502F5DC: bne         $t0, $s0, L_1502F558
    if (ctx->r8 != ctx->r16) {
        // 0x1502F5E0: addiu       $t5, $t5, 0x1
        ctx->r13 = ADD32(ctx->r13, 0X1);
            goto L_1502F558;
    }
    // 0x1502F5E0: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x1502F5E4: lw          $v0, 0x138($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X138);
    // 0x1502F5E8: lw          $v1, 0x1D8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1D8);
    // 0x1502F5EC: beql        $v1, $zero, L_1502F91C
    if (ctx->r3 == 0) {
        // 0x1502F5F0: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_1502F91C;
    }
    goto skip_4;
    // 0x1502F5F0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_4:
    // 0x1502F5F4: lw          $t7, 0x1D4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1D4);
    // 0x1502F5F8: or          $s6, $v1, $zero
    ctx->r22 = ctx->r3 | 0;
    // 0x1502F5FC: addiu       $fp, $sp, 0xAC
    ctx->r30 = ADD32(ctx->r29, 0XAC);
    // 0x1502F600: beq         $t7, $zero, L_1502F918
    if (ctx->r15 == 0) {
        // 0x1502F604: addiu       $s7, $zero, 0x24
        ctx->r23 = ADD32(0, 0X24);
            goto L_1502F918;
    }
    // 0x1502F604: addiu       $s7, $zero, 0x24
    ctx->r23 = ADD32(0, 0X24);
    // 0x1502F608: addiu       $t8, $sp, 0xD0
    ctx->r24 = ADD32(ctx->r29, 0XD0);
L_1502F60C:
    // 0x1502F60C: bne         $fp, $t8, L_1502F618
    if (ctx->r30 != ctx->r24) {
        // 0x1502F610: lw          $v0, 0x138($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X138);
            goto L_1502F618;
    }
    // 0x1502F610: lw          $v0, 0x138($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X138);
    // 0x1502F614: lw          $s6, 0x1D4($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X1D4);
L_1502F618:
    // 0x1502F618: addiu       $s1, $sp, 0x114
    ctx->r17 = ADD32(ctx->r29, 0X114);
    // 0x1502F61C: addiu       $s2, $sp, 0xF4
    ctx->r18 = ADD32(ctx->r29, 0XF4);
    // 0x1502F620: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x1502F624: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    // 0x1502F628: addiu       $s4, $fp, 0x4
    ctx->r20 = ADD32(ctx->r30, 0X4);
    // 0x1502F62C: addiu       $s5, $fp, 0x8
    ctx->r21 = ADD32(ctx->r30, 0X8);
L_1502F630:
    // 0x1502F630: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x1502F634: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1502F638: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x1502F63C: sll         $t6, $t9, 6
    ctx->r14 = S32(ctx->r25 << 6);
    // 0x1502F640: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x1502F644: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x1502F648: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1502F64C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x1502F650: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x1502F654: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1502F658: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x1502F65C: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x1502F660: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x1502F664: addu        $a0, $t6, $s6
    ctx->r4 = ADD32(ctx->r14, ctx->r22);
    // 0x1502F668: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1502F66C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x1502F670: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1502F674: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x1502F678: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x1502F67C: jal         0x150A7960
    // 0x1502F680: nop

    func_150A7960(rdram, ctx);
        goto after_0;
    // 0x1502F680: nop

    after_0:
    // 0x1502F684: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x1502F688: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x1502F68C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x1502F690: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x1502F694: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x1502F698: bne         $s3, $s7, L_1502F630
    if (ctx->r19 != ctx->r23) {
        // 0x1502F69C: addiu       $s5, $s5, 0xC
        ctx->r21 = ADD32(ctx->r21, 0XC);
            goto L_1502F630;
    }
    // 0x1502F69C: addiu       $s5, $s5, 0xC
    ctx->r21 = ADD32(ctx->r21, 0XC);
    // 0x1502F6A0: addiu       $fp, $fp, 0x24
    ctx->r30 = ADD32(ctx->r30, 0X24);
    // 0x1502F6A4: addiu       $t6, $sp, 0xF4
    ctx->r14 = ADD32(ctx->r29, 0XF4);
    // 0x1502F6A8: sltu        $at, $fp, $t6
    ctx->r1 = ctx->r30 < ctx->r14 ? 1 : 0;
    // 0x1502F6AC: bnel        $at, $zero, L_1502F60C
    if (ctx->r1 != 0) {
        // 0x1502F6B0: addiu       $t8, $sp, 0xD0
        ctx->r24 = ADD32(ctx->r29, 0XD0);
            goto L_1502F60C;
    }
    goto skip_5;
    // 0x1502F6B0: addiu       $t8, $sp, 0xD0
    ctx->r24 = ADD32(ctx->r29, 0XD0);
    skip_5:
    // 0x1502F6B4: addiu       $fp, $sp, 0xAC
    ctx->r30 = ADD32(ctx->r29, 0XAC);
    // 0x1502F6B8: addiu       $t1, $sp, 0x94
    ctx->r9 = ADD32(ctx->r29, 0X94);
    // 0x1502F6BC: addiu       $t0, $sp, 0x7C
    ctx->r8 = ADD32(ctx->r29, 0X7C);
    // 0x1502F6C0: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    // 0x1502F6C4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_1502F6C8:
    // 0x1502F6C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1502F6CC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x1502F6D0: or          $v0, $fp, $zero
    ctx->r2 = ctx->r30 | 0;
    // 0x1502F6D4: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_1502F6D8:
    // 0x1502F6D8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1502F6DC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1502F6E0: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1502F6E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1502F6E8: sub.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x1502F6EC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1502F6F0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1502F6F4: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x1502F6F8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x1502F6FC: swc1        $f18, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f18.u32l;
    // 0x1502F700: bne         $v1, $a2, L_1502F6D8
    if (ctx->r3 != ctx->r6) {
        // 0x1502F704: swc1        $f6, -0x4($a1)
        MEM_W(-0X4, ctx->r5) = ctx->f6.u32l;
            goto L_1502F6D8;
    }
    // 0x1502F704: swc1        $f6, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f6.u32l;
    // 0x1502F708: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x1502F70C: sltu        $at, $t0, $a3
    ctx->r1 = ctx->r8 < ctx->r7 ? 1 : 0;
    // 0x1502F710: addiu       $fp, $fp, 0x24
    ctx->r30 = ADD32(ctx->r30, 0X24);
    // 0x1502F714: bne         $at, $zero, L_1502F6C8
    if (ctx->r1 != 0) {
        // 0x1502F718: addiu       $t1, $t1, 0xC
        ctx->r9 = ADD32(ctx->r9, 0XC);
            goto L_1502F6C8;
    }
    // 0x1502F718: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x1502F71C: lw          $t1, 0x13C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X13C);
    // 0x1502F720: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1502F724: lw          $t0, 0x140($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X140);
    // 0x1502F728: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x1502F72C: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x1502F730: lw          $a2, 0x144($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X144);
    // 0x1502F734: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1502F738: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1502F73C: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x1502F740: swc1        $f18, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f18.u32l;
    // 0x1502F744: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x1502F748: lwc1        $f18, 0xB4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1502F74C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1502F750: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x1502F754: swc1        $f8, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f8.u32l;
    // 0x1502F758: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x1502F75C: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1502F760: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x1502F764: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1502F768: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1502F76C: swc1        $f4, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f4.u32l;
    // 0x1502F770: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x1502F774: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1502F778: lwc1        $f4, 0x134($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X134);
    // 0x1502F77C: sub.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1502F780: lwc1        $f6, 0x12C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1502F784: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    // 0x1502F788: nop

    // 0x1502F78C: bc1tl       L_1502F7B0
    if (c1cs) {
        // 0x1502F790: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_1502F7B0;
    }
    goto skip_6;
    // 0x1502F790: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_6:
    // 0x1502F794: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1502F798: mov.s       $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = ctx->f8.fl;
    // 0x1502F79C: mul.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1502F7A0: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1502F7A4: b           L_1502F7B4
    // 0x1502F7A8: div.s       $f2, $f18, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
        goto L_1502F7B4;
    // 0x1502F7A8: div.s       $f2, $f18, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1502F7AC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_1502F7B0:
    // 0x1502F7B0: lwc1        $f14, 0x84($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X84);
L_1502F7B4:
    // 0x1502F7B4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x1502F7B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1502F7BC: bc1tl       L_1502F91C
    if (c1cs) {
        // 0x1502F7C0: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_1502F91C;
    }
    goto skip_7;
    // 0x1502F7C0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_7:
    // 0x1502F7C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1502F7C8: nop

    // 0x1502F7CC: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x1502F7D0: nop

    // 0x1502F7D4: bc1tl       L_1502F91C
    if (c1cs) {
        // 0x1502F7D8: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_1502F91C;
    }
    goto skip_8;
    // 0x1502F7D8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_8:
    // 0x1502F7DC: c.eq.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
    // 0x1502F7E0: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x1502F7E4: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x1502F7E8: bc1tl       L_1502F808
    if (c1cs) {
        // 0x1502F7EC: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_1502F808;
    }
    goto skip_9;
    // 0x1502F7EC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_9:
    // 0x1502F7F0: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x1502F7F4: lwc1        $f4, 0x134($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X134);
    // 0x1502F7F8: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1502F7FC: b           L_1502F80C
    // 0x1502F800: div.s       $f0, $f10, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
        goto L_1502F80C;
    // 0x1502F800: div.s       $f0, $f10, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x1502F804: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_1502F808:
    // 0x1502F808: nop

L_1502F80C:
    // 0x1502F80C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x1502F810: nop

    // 0x1502F814: bc1tl       L_1502F91C
    if (c1cs) {
        // 0x1502F818: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_1502F91C;
    }
    goto skip_10;
    // 0x1502F818: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_10:
    // 0x1502F81C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x1502F820: addiu       $v1, $sp, 0x120
    ctx->r3 = ADD32(ctx->r29, 0X120);
    // 0x1502F824: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x1502F828: addiu       $v0, $sp, 0x94
    ctx->r2 = ADD32(ctx->r29, 0X94);
    // 0x1502F82C: bc1t        L_1502F918
    if (c1cs) {
        // 0x1502F830: addiu       $a1, $sp, 0xA0
        ctx->r5 = ADD32(ctx->r29, 0XA0);
            goto L_1502F918;
    }
    // 0x1502F830: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x1502F834: lwc1        $f12, 0xC($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XC);
    // 0x1502F838: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1502F83C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1502F840: mul.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1502F844: beq         $v0, $a1, L_1502F874
    if (ctx->r2 == ctx->r5) {
        // 0x1502F848: nop
    
            goto L_1502F874;
    }
    // 0x1502F848: nop

L_1502F84C:
    // 0x1502F84C: mul.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x1502F850: lwc1        $f12, 0x10($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X10);
    // 0x1502F854: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1502F858: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1502F85C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1502F860: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1502F864: add.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x1502F868: mul.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1502F86C: bne         $v0, $a1, L_1502F84C
    if (ctx->r2 != ctx->r5) {
        // 0x1502F870: swc1        $f14, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->f14.u32l;
            goto L_1502F84C;
    }
    // 0x1502F870: swc1        $f14, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f14.u32l;
L_1502F874:
    // 0x1502F874: mul.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x1502F878: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1502F87C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1502F880: add.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x1502F884: swc1        $f14, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f14.u32l;
    // 0x1502F888: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1502F88C: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x1502F890: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1502F894: lwc1        $f18, 0x120($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1502F898: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x1502F89C: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x1502F8A0: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1502F8A4: lwc1        $f8, 0x12C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1502F8A8: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x1502F8AC: swc1        $f10, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f10.u32l;
    // 0x1502F8B0: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1502F8B4: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1502F8B8: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x1502F8BC: sub.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x1502F8C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1502F8C4: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x1502F8C8: lwc1        $f18, 0xD4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x1502F8CC: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1502F8D0: lwc1        $f6, 0x130($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X130);
    // 0x1502F8D4: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x1502F8D8: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x1502F8DC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1502F8E0: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x1502F8E4: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1502F8E8: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x1502F8EC: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    // 0x1502F8F0: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x1502F8F4: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x1502F8F8: lwc1        $f18, 0x134($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X134);
    // 0x1502F8FC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1502F900: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1502F904: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x1502F908: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x1502F90C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1502F910: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1502F914: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
L_1502F918:
    // 0x1502F918: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_1502F91C:
    // 0x1502F91C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1502F920: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x1502F924: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x1502F928: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x1502F92C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x1502F930: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x1502F934: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x1502F938: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x1502F93C: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x1502F940: jr          $ra
    // 0x1502F944: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    return;
    // 0x1502F944: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_1509E900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509E900: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1509E904: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1509E908: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x1509E90C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1509E910: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1509E914: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1509E918: jal         0x151149AC
    // 0x1509E91C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x1509E91C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    after_0:
    // 0x1509E920: bne         $v0, $zero, L_1509E930
    if (ctx->r2 != 0) {
        // 0x1509E924: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_1509E930;
    }
    // 0x1509E924: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x1509E928: b           L_1509ED60
    // 0x1509E92C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509ED60;
    // 0x1509E92C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509E930:
    // 0x1509E930: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x1509E934: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x1509E938: beq         $at, $zero, L_1509ED5C
    if (ctx->r1 == 0) {
        // 0x1509E93C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_1509ED5C;
    }
    // 0x1509E93C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1509E940: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1509E944: addu        $at, $at, $t6
    gpr jr_addend_1509E94C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1509E948: lw          $t6, -0xC10($at)
    ctx->r14 = ADD32(ctx->r1, -0XC10);
    // 0x1509E94C: jr          $t6
    // 0x1509E950: nop

    switch (jr_addend_1509E94C >> 2) {
        case 0: goto L_1509E954; break;
        case 1: goto L_1509E978; break;
        case 2: goto L_1509E988; break;
        case 3: goto L_1509EA40; break;
        case 4: goto L_1509EAD8; break;
        case 5: goto L_1509EB18; break;
        case 6: goto L_1509EB28; break;
        case 7: goto L_1509EB4C; break;
        case 8: goto L_1509EB80; break;
        case 9: goto L_1509EBAC; break;
        case 10: goto L_1509EBBC; break;
        case 11: goto L_1509EC14; break;
        case 12: goto L_1509E9C8; break;
        case 13: goto L_1509EC2C; break;
        case 14: goto L_1509EC4C; break;
        case 15: goto L_1509EC88; break;
        case 16: goto L_1509ECE8; break;
        case 17: goto L_1509ED48; break;
        case 18: goto L_1509ED54; break;
        default: switch_error(__func__, 0x1509E94C, 0x8009F3F0);
    }
    // 0x1509E950: nop

L_1509E954:
    // 0x1509E954: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x1509E958: sb          $zero, 0x6E($v0)
    MEM_B(0X6E, ctx->r2) = 0;
    // 0x1509E95C: beq         $t7, $zero, L_1509E970
    if (ctx->r15 == 0) {
        // 0x1509E960: nop
    
            goto L_1509E970;
    }
    // 0x1509E960: nop

    // 0x1509E964: lbu         $t8, 0x6F($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6F);
    // 0x1509E968: ori         $t9, $t8, 0xF
    ctx->r25 = ctx->r24 | 0XF;
    // 0x1509E96C: sb          $t9, 0x6F($v0)
    MEM_B(0X6F, ctx->r2) = ctx->r25;
L_1509E970:
    // 0x1509E970: b           L_1509ED60
    // 0x1509E974: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509ED60;
    // 0x1509E974: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509E978:
    // 0x1509E978: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1509E97C: sb          $t0, 0x6E($a3)
    MEM_B(0X6E, ctx->r7) = ctx->r8;
    // 0x1509E980: b           L_1509ED60
    // 0x1509E984: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509ED60;
    // 0x1509E984: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509E988:
    // 0x1509E988: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x1509E98C: lui         $a0, 0x7FFF
    ctx->r4 = S32(0X7FFF << 16);
    // 0x1509E990: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x1509E994: beql        $a0, $v1, L_1509E9A4
    if (ctx->r4 == ctx->r3) {
        // 0x1509E998: lw          $v1, 0xC($s0)
        ctx->r3 = MEM_W(ctx->r16, 0XC);
            goto L_1509E9A4;
    }
    goto skip_0;
    // 0x1509E998: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    skip_0:
    // 0x1509E99C: sh          $v1, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r3;
    // 0x1509E9A0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
L_1509E9A4:
    // 0x1509E9A4: beql        $a0, $v1, L_1509E9B4
    if (ctx->r4 == ctx->r3) {
        // 0x1509E9A8: lw          $v1, 0x10($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X10);
            goto L_1509E9B4;
    }
    goto skip_1;
    // 0x1509E9A8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    skip_1:
    // 0x1509E9AC: sh          $v1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r3;
    // 0x1509E9B0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
L_1509E9B4:
    // 0x1509E9B4: beq         $a0, $v1, L_1509E9C0
    if (ctx->r4 == ctx->r3) {
        // 0x1509E9B8: nop
    
            goto L_1509E9C0;
    }
    // 0x1509E9B8: nop

    // 0x1509E9BC: sh          $v1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r3;
L_1509E9C0:
    // 0x1509E9C0: b           L_1509ED60
    // 0x1509E9C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509ED60;
    // 0x1509E9C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509E9C8:
    // 0x1509E9C8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x1509E9CC: jal         0x15086D48
    // 0x1509E9D0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    func_15086D48(rdram, ctx);
        goto after_1;
    // 0x1509E9D0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_1:
    // 0x1509E9D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1509E9D8: beq         $v0, $at, L_1509EA38
    if (ctx->r2 == ctx->r1) {
        // 0x1509E9DC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1509EA38;
    }
    // 0x1509E9DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1509E9E0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x1509E9E4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x1509E9E8: jal         0x15086CBC
    // 0x1509E9EC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_15086CBC(rdram, ctx);
        goto after_2;
    // 0x1509E9EC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x1509E9F0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1509E9F4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x1509E9F8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1509E9FC: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x1509EA00: nop

    // 0x1509EA04: sh          $t2, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r10;
    // 0x1509EA08: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1509EA0C: lw          $t3, 0xC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC);
    // 0x1509EA10: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1509EA14: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x1509EA18: nop

    // 0x1509EA1C: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x1509EA20: sh          $t8, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r24;
    // 0x1509EA24: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1509EA28: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1509EA2C: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x1509EA30: nop

    // 0x1509EA34: sh          $t0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r8;
L_1509EA38:
    // 0x1509EA38: b           L_1509ED60
    // 0x1509EA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509ED60;
    // 0x1509EA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509EA40:
    // 0x1509EA40: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x1509EA44: lui         $at, 0x4EF0
    ctx->r1 = S32(0X4EF0 << 16);
    // 0x1509EA48: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1509EA4C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x1509EA50: nop

    // 0x1509EA54: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1509EA58: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x1509EA5C: nop

    // 0x1509EA60: bc1t        L_1509EA78
    if (c1cs) {
        // 0x1509EA64: lui         $at, 0x4780
        ctx->r1 = S32(0X4780 << 16);
            goto L_1509EA78;
    }
    // 0x1509EA64: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x1509EA68: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1509EA6C: nop

    // 0x1509EA70: div.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
    // 0x1509EA74: swc1        $f6, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f6.u32l;
L_1509EA78:
    // 0x1509EA78: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x1509EA7C: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x1509EA80: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1509EA84: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x1509EA88: nop

    // 0x1509EA8C: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1509EA90: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x1509EA94: nop

    // 0x1509EA98: bc1tl       L_1509EAAC
    if (c1cs) {
        // 0x1509EA9C: lw          $t4, 0x10($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X10);
            goto L_1509EAAC;
    }
    goto skip_2;
    // 0x1509EA9C: lw          $t4, 0x10($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X10);
    skip_2:
    // 0x1509EAA0: div.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
    // 0x1509EAA4: swc1        $f10, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f10.u32l;
    // 0x1509EAA8: lw          $t4, 0x10($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X10);
L_1509EAAC:
    // 0x1509EAAC: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x1509EAB0: nop

    // 0x1509EAB4: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1509EAB8: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x1509EABC: nop

    // 0x1509EAC0: bc1t        L_1509EAD0
    if (c1cs) {
        // 0x1509EAC4: nop
    
            goto L_1509EAD0;
    }
    // 0x1509EAC4: nop

    // 0x1509EAC8: div.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f12.fl);
    // 0x1509EACC: swc1        $f18, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->f18.u32l;
L_1509EAD0:
    // 0x1509EAD0: b           L_1509ED60
    // 0x1509EAD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509ED60;
    // 0x1509EAD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509EAD8:
    // 0x1509EAD8: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x1509EADC: lui         $a0, 0x7FFF
    ctx->r4 = S32(0X7FFF << 16);
    // 0x1509EAE0: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x1509EAE4: beql        $a0, $v1, L_1509EAF4
    if (ctx->r4 == ctx->r3) {
        // 0x1509EAE8: lw          $v1, 0xC($s0)
        ctx->r3 = MEM_W(ctx->r16, 0XC);
            goto L_1509EAF4;
    }
    goto skip_3;
    // 0x1509EAE8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    skip_3:
    // 0x1509EAEC: sw          $v1, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r3;
    // 0x1509EAF0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
L_1509EAF4:
    // 0x1509EAF4: beql        $a0, $v1, L_1509EB04
    if (ctx->r4 == ctx->r3) {
        // 0x1509EAF8: lw          $v1, 0x10($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X10);
            goto L_1509EB04;
    }
    goto skip_4;
    // 0x1509EAF8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    skip_4:
    // 0x1509EAFC: sw          $v1, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r3;
    // 0x1509EB00: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
L_1509EB04:
    // 0x1509EB04: beq         $a0, $v1, L_1509EB10
    if (ctx->r4 == ctx->r3) {
        // 0x1509EB08: nop
    
            goto L_1509EB10;
    }
    // 0x1509EB08: nop

    // 0x1509EB0C: sw          $v1, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r3;
L_1509EB10:
    // 0x1509EB10: b           L_1509ED60
    // 0x1509EB14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509ED60;
    // 0x1509EB14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509EB18:
    // 0x1509EB18: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x1509EB1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1509EB20: b           L_1509ED60
    // 0x1509EB24: sw          $t5, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r13;
        goto L_1509ED60;
    // 0x1509EB24: sw          $t5, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r13;
L_1509EB28:
    // 0x1509EB28: lbu         $t6, 0x73($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X73);
    // 0x1509EB2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1509EB30: andi        $t7, $t6, 0xFFFC
    ctx->r15 = ctx->r14 & 0XFFFC;
    // 0x1509EB34: sb          $t7, 0x73($a3)
    MEM_B(0X73, ctx->r7) = ctx->r15;
    // 0x1509EB38: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x1509EB3C: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x1509EB40: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x1509EB44: b           L_1509ED60
    // 0x1509EB48: sb          $t0, 0x73($a3)
    MEM_B(0X73, ctx->r7) = ctx->r8;
        goto L_1509ED60;
    // 0x1509EB48: sb          $t0, 0x73($a3)
    MEM_B(0X73, ctx->r7) = ctx->r8;
L_1509EB4C:
    // 0x1509EB4C: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x1509EB50: beql        $t1, $zero, L_1509EB70
    if (ctx->r9 == 0) {
        // 0x1509EB54: lbu         $t5, 0x73($v0)
        ctx->r13 = MEM_BU(ctx->r2, 0X73);
            goto L_1509EB70;
    }
    goto skip_5;
    // 0x1509EB54: lbu         $t5, 0x73($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X73);
    skip_5:
    // 0x1509EB58: lbu         $t2, 0x73($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X73);
    // 0x1509EB5C: ori         $t4, $t2, 0x4
    ctx->r12 = ctx->r10 | 0X4;
    // 0x1509EB60: sb          $t4, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r12;
    // 0x1509EB64: b           L_1509ED60
    // 0x1509EB68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509ED60;
    // 0x1509EB68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1509EB6C: lbu         $t5, 0x73($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X73);
L_1509EB70:
    // 0x1509EB70: andi        $t6, $t5, 0xFFFB
    ctx->r14 = ctx->r13 & 0XFFFB;
    // 0x1509EB74: sb          $t6, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r14;
    // 0x1509EB78: b           L_1509ED60
    // 0x1509EB7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509ED60;
    // 0x1509EB7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509EB80:
    // 0x1509EB80: lw          $t3, 0x3C($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X3C);
    // 0x1509EB84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1509EB88: andi        $t8, $t3, 0xFFFF
    ctx->r24 = ctx->r11 & 0XFFFF;
    // 0x1509EB8C: sw          $t8, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r24;
    // 0x1509EB90: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x1509EB94: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x1509EB98: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x1509EB9C: sw          $t1, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r9;
    // 0x1509EBA0: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x1509EBA4: b           L_1509ED60
    // 0x1509EBA8: sw          $t2, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->r10;
        goto L_1509ED60;
    // 0x1509EBA8: sw          $t2, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->r10;
L_1509EBAC:
    // 0x1509EBAC: jal         0x150E4928
    // 0x1509EBB0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_150E4928(rdram, ctx);
        goto after_3;
    // 0x1509EBB0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x1509EBB4: b           L_1509ED60
    // 0x1509EBB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509ED60;
    // 0x1509EBB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509EBBC:
    // 0x1509EBBC: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x1509EBC0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x1509EBC4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x1509EBC8: multu       $t4, $a0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1509EBCC: addiu       $v1, $v1, -0x7370
    ctx->r3 = ADD32(ctx->r3, -0X7370);
    // 0x1509EBD0: mflo        $t5
    ctx->r13 = lo;
    // 0x1509EBD4: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x1509EBD8: lw          $t3, 0x0($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X0);
    // 0x1509EBDC: sw          $t3, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r11;
    // 0x1509EBE0: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x1509EBE4: multu       $t8, $a0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1509EBE8: mflo        $t9
    ctx->r25 = lo;
    // 0x1509EBEC: addu        $t7, $v1, $t9
    ctx->r15 = ADD32(ctx->r3, ctx->r25);
    // 0x1509EBF0: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x1509EBF4: sw          $t0, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r8;
    // 0x1509EBF8: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x1509EBFC: multu       $t1, $a0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1509EC00: mflo        $t2
    ctx->r10 = lo;
    // 0x1509EC04: addu        $t4, $v1, $t2
    ctx->r12 = ADD32(ctx->r3, ctx->r10);
    // 0x1509EC08: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x1509EC0C: b           L_1509ED5C
    // 0x1509EC10: sb          $t5, 0x92($v0)
    MEM_B(0X92, ctx->r2) = ctx->r13;
        goto L_1509ED5C;
    // 0x1509EC10: sb          $t5, 0x92($v0)
    MEM_B(0X92, ctx->r2) = ctx->r13;
L_1509EC14:
    // 0x1509EC14: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x1509EC18: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x1509EC1C: jal         0x15173C90
    // 0x1509EC20: lbu         $a2, 0x72($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X72);
    func_15173C90(rdram, ctx);
        goto after_4;
    // 0x1509EC20: lbu         $a2, 0x72($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X72);
    after_4:
    // 0x1509EC24: b           L_1509ED60
    // 0x1509EC28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509ED60;
    // 0x1509EC28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509EC2C:
    // 0x1509EC2C: lw          $t3, 0xC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC);
    // 0x1509EC30: lbu         $t6, 0x4F($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4F);
    // 0x1509EC34: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x1509EC38: nor         $t8, $t3, $zero
    ctx->r24 = ~(ctx->r11 | 0);
    // 0x1509EC3C: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x1509EC40: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x1509EC44: b           L_1509ED5C
    // 0x1509EC48: sb          $t0, 0x4F($v0)
    MEM_B(0X4F, ctx->r2) = ctx->r8;
        goto L_1509ED5C;
    // 0x1509EC48: sb          $t0, 0x4F($v0)
    MEM_B(0X4F, ctx->r2) = ctx->r8;
L_1509EC4C:
    // 0x1509EC4C: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x1509EC50: lui         $a0, 0x7FFF
    ctx->r4 = S32(0X7FFF << 16);
    // 0x1509EC54: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x1509EC58: beql        $a0, $v1, L_1509EC68
    if (ctx->r4 == ctx->r3) {
        // 0x1509EC5C: lw          $v1, 0xC($s0)
        ctx->r3 = MEM_W(ctx->r16, 0XC);
            goto L_1509EC68;
    }
    goto skip_6;
    // 0x1509EC5C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    skip_6:
    // 0x1509EC60: sh          $v1, 0x5A($v0)
    MEM_H(0X5A, ctx->r2) = ctx->r3;
    // 0x1509EC64: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
L_1509EC68:
    // 0x1509EC68: beql        $a0, $v1, L_1509EC78
    if (ctx->r4 == ctx->r3) {
        // 0x1509EC6C: lw          $v1, 0x10($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X10);
            goto L_1509EC78;
    }
    goto skip_7;
    // 0x1509EC6C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    skip_7:
    // 0x1509EC70: sh          $v1, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = ctx->r3;
    // 0x1509EC74: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
L_1509EC78:
    // 0x1509EC78: beql        $a0, $v1, L_1509ED60
    if (ctx->r4 == ctx->r3) {
        // 0x1509EC7C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509ED60;
    }
    goto skip_8;
    // 0x1509EC7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_8:
    // 0x1509EC80: b           L_1509ED5C
    // 0x1509EC84: sh          $v1, 0x5E($v0)
    MEM_H(0X5E, ctx->r2) = ctx->r3;
        goto L_1509ED5C;
    // 0x1509EC84: sh          $v1, 0x5E($v0)
    MEM_H(0X5E, ctx->r2) = ctx->r3;
L_1509EC88:
    // 0x1509EC88: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x1509EC8C: lui         $a0, 0x7FFF
    ctx->r4 = S32(0X7FFF << 16);
    // 0x1509EC90: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x1509EC94: beql        $a0, $v1, L_1509ECB0
    if (ctx->r4 == ctx->r3) {
        // 0x1509EC98: lw          $v1, 0xC($s0)
        ctx->r3 = MEM_W(ctx->r16, 0XC);
            goto L_1509ECB0;
    }
    goto skip_9;
    // 0x1509EC98: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    skip_9:
    // 0x1509EC9C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x1509ECA0: nop

    // 0x1509ECA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1509ECA8: swc1        $f6, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->f6.u32l;
    // 0x1509ECAC: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
L_1509ECB0:
    // 0x1509ECB0: beql        $a0, $v1, L_1509ECCC
    if (ctx->r4 == ctx->r3) {
        // 0x1509ECB4: lw          $v1, 0x10($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X10);
            goto L_1509ECCC;
    }
    goto skip_10;
    // 0x1509ECB4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    skip_10:
    // 0x1509ECB8: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x1509ECBC: nop

    // 0x1509ECC0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1509ECC4: swc1        $f10, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->f10.u32l;
    // 0x1509ECC8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
L_1509ECCC:
    // 0x1509ECCC: beql        $a0, $v1, L_1509ED60
    if (ctx->r4 == ctx->r3) {
        // 0x1509ECD0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509ED60;
    }
    goto skip_11;
    // 0x1509ECD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_11:
    // 0x1509ECD4: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x1509ECD8: nop

    // 0x1509ECDC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1509ECE0: b           L_1509ED5C
    // 0x1509ECE4: swc1        $f18, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->f18.u32l;
        goto L_1509ED5C;
    // 0x1509ECE4: swc1        $f18, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->f18.u32l;
L_1509ECE8:
    // 0x1509ECE8: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x1509ECEC: lui         $a0, 0x7FFF
    ctx->r4 = S32(0X7FFF << 16);
    // 0x1509ECF0: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x1509ECF4: beql        $a0, $v1, L_1509ED10
    if (ctx->r4 == ctx->r3) {
        // 0x1509ECF8: lw          $v1, 0xC($s0)
        ctx->r3 = MEM_W(ctx->r16, 0XC);
            goto L_1509ED10;
    }
    goto skip_12;
    // 0x1509ECF8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    skip_12:
    // 0x1509ECFC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x1509ED00: nop

    // 0x1509ED04: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1509ED08: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x1509ED0C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
L_1509ED10:
    // 0x1509ED10: beql        $a0, $v1, L_1509ED2C
    if (ctx->r4 == ctx->r3) {
        // 0x1509ED14: lw          $v1, 0x10($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X10);
            goto L_1509ED2C;
    }
    goto skip_13;
    // 0x1509ED14: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    skip_13:
    // 0x1509ED18: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x1509ED1C: nop

    // 0x1509ED20: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1509ED24: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x1509ED28: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
L_1509ED2C:
    // 0x1509ED2C: beql        $a0, $v1, L_1509ED60
    if (ctx->r4 == ctx->r3) {
        // 0x1509ED30: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509ED60;
    }
    goto skip_14;
    // 0x1509ED30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_14:
    // 0x1509ED34: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x1509ED38: nop

    // 0x1509ED3C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1509ED40: b           L_1509ED5C
    // 0x1509ED44: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
        goto L_1509ED5C;
    // 0x1509ED44: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
L_1509ED48:
    // 0x1509ED48: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x1509ED4C: b           L_1509ED5C
    // 0x1509ED50: sh          $t1, 0x88($v0)
    MEM_H(0X88, ctx->r2) = ctx->r9;
        goto L_1509ED5C;
    // 0x1509ED50: sh          $t1, 0x88($v0)
    MEM_H(0X88, ctx->r2) = ctx->r9;
L_1509ED54:
    // 0x1509ED54: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x1509ED58: sb          $t2, 0x8A($v0)
    MEM_B(0X8A, ctx->r2) = ctx->r10;
L_1509ED5C:
    // 0x1509ED5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509ED60:
    // 0x1509ED60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1509ED64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1509ED68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1509ED6C: jr          $ra
    // 0x1509ED70: nop

    return;
    return;
    // 0x1509ED70: nop

;}
RECOMP_FUNC void func_15175390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15175390: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x15175394: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x15175398: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x1517539C: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x151753A0: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x151753A4: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x151753A8: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x151753AC: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x151753B0: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x151753B4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x151753B8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x151753BC: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x151753C0: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x151753C4: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x151753C8: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x151753CC: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x151753D0: lw          $t6, 0xDC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XDC);
    // 0x151753D4: lw          $t8, 0xD4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD4);
    // 0x151753D8: lw          $t9, 0xDC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XDC);
    // 0x151753DC: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x151753E0: beq         $t7, $zero, L_151753EC
    if (ctx->r15 == 0) {
        // 0x151753E4: lui         $at, 0x1
        ctx->r1 = S32(0X1 << 16);
            goto L_151753EC;
    }
    // 0x151753E4: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x151753E8: blez        $t8, L_15175924
    if (SIGNED(ctx->r24) <= 0) {
        // 0x151753EC: and         $t0, $t9, $at
        ctx->r8 = ctx->r25 & ctx->r1;
            goto L_15175924;
    }
L_151753EC:
    // 0x151753EC: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x151753F0: beq         $t0, $zero, L_15175484
    if (ctx->r8 == 0) {
        // 0x151753F4: sw          $t0, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r8;
            goto L_15175484;
    }
    // 0x151753F4: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x151753F8: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x151753FC: lw          $t4, 0xC0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC0);
    // 0x15175400: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15175404: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15175408: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x1517540C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x15175410: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15175414: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x15175418: lw          $t1, -0x4010($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4010);
    // 0x1517541C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15175420: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15175424: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x15175428: sll         $t3, $t3, 5
    ctx->r11 = S32(ctx->r11 << 5);
    // 0x1517542C: lw          $t5, 0xC4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC4);
    // 0x15175430: addu        $v0, $t1, $t3
    ctx->r2 = ADD32(ctx->r9, ctx->r11);
    // 0x15175434: lwc1        $f8, 0x2F8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x15175438: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x1517543C: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x15175440: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15175444: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x15175448: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1517544C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15175450: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x15175454: lwc1        $f4, 0x2FC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x15175458: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1517545C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x15175460: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x15175464: lwc1        $f16, 0x300($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X300);
    // 0x15175468: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1517546C: jal         0x15048FC8
    // 0x15175470: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    func_15048FC8(rdram, ctx);
        goto after_0;
    // 0x15175470: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x15175474: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x15175478: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x1517547C: nop

    // 0x15175480: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
L_15175484:
    // 0x15175484: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    // 0x15175488: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x1517548C: blezl       $t9, L_15175928
    if (SIGNED(ctx->r25) <= 0) {
        // 0x15175490: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_15175928;
    }
    goto skip_0;
    // 0x15175490: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_0:
    // 0x15175494: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15175498: lw          $s5, 0xD8($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XD8);
    // 0x1517549C: lw          $t0, 0xE4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE4);
L_151754A0:
    // 0x151754A0: beql        $t0, $zero, L_151754D4
    if (ctx->r8 == 0) {
        // 0x151754A4: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_151754D4;
    }
    goto skip_1;
    // 0x151754A4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    skip_1:
    // 0x151754A8: jal         0x150ADA20
    // 0x151754AC: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151754AC: nop

    after_1:
    // 0x151754B0: lw          $t2, 0xE4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE4);
    // 0x151754B4: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x151754B8: mfhi        $s2
    ctx->r18 = hi;
    // 0x151754BC: bne         $t2, $zero, L_151754C8
    if (ctx->r10 != 0) {
        // 0x151754C0: nop
    
            goto L_151754C8;
    }
    // 0x151754C0: nop

    // 0x151754C4: break       7
    do_break(353850564);
L_151754C8:
    // 0x151754C8: b           L_151754D8
    // 0x151754CC: lw          $t1, 0xE0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE0);
        goto L_151754D8;
    // 0x151754CC: lw          $t1, 0xE0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE0);
    // 0x151754D0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_151754D4:
    // 0x151754D4: lw          $t1, 0xE0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE0);
L_151754D8:
    // 0x151754D8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151754DC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151754E0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151754E4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151754E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151754EC: addiu       $a2, $zero, 0xF8
    ctx->r6 = ADD32(0, 0XF8);
    // 0x151754F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151754F4: jal         0x15167A68
    // 0x151754F8: addu        $a0, $t1, $s2
    ctx->r4 = ADD32(ctx->r9, ctx->r18);
    func_15167A68(rdram, ctx);
        goto after_2;
    // 0x151754F8: addu        $a0, $t1, $s2
    ctx->r4 = ADD32(ctx->r9, ctx->r18);
    after_2:
    // 0x151754FC: beq         $v0, $zero, L_15175924
    if (ctx->r2 == 0) {
        // 0x15175500: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15175924;
    }
    // 0x15175500: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15175504: lw          $fp, 0xFC($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XFC);
    // 0x15175508: lw          $s7, 0xDC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XDC);
    // 0x1517550C: lw          $t5, 0xCC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XCC);
    // 0x15175510: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x15175514: andi        $t6, $fp, 0x1
    ctx->r14 = ctx->r30 & 0X1;
    // 0x15175518: and         $t7, $s7, $at
    ctx->r15 = ctx->r23 & ctx->r1;
    // 0x1517551C: or          $s7, $t7, $zero
    ctx->r23 = ctx->r15 | 0;
    // 0x15175520: or          $fp, $t6, $zero
    ctx->r30 = ctx->r14 | 0;
    // 0x15175524: lw          $s4, 0xC4($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC4);
    // 0x15175528: jal         0x150ADA20
    // 0x1517552C: subu        $s1, $t5, $s5
    ctx->r17 = SUB32(ctx->r13, ctx->r21);
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1517552C: subu        $s1, $t5, $s5
    ctx->r17 = SUB32(ctx->r13, ctx->r21);
    after_3:
    // 0x15175530: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x15175534: mfhi        $v1
    ctx->r3 = hi;
    // 0x15175538: addu        $s3, $v1, $s5
    ctx->r19 = ADD32(ctx->r3, ctx->r21);
    // 0x1517553C: bne         $s1, $zero, L_15175548
    if (ctx->r17 != 0) {
        // 0x15175540: nop
    
            goto L_15175548;
    }
    // 0x15175540: nop

    // 0x15175544: break       7
    do_break(353850692);
L_15175548:
    // 0x15175548: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1517554C: bne         $s1, $at, L_15175560
    if (ctx->r17 != ctx->r1) {
        // 0x15175550: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15175560;
    }
    // 0x15175550: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15175554: bne         $v0, $at, L_15175560
    if (ctx->r2 != ctx->r1) {
        // 0x15175558: nop
    
            goto L_15175560;
    }
    // 0x15175558: nop

    // 0x1517555C: break       6
    do_break(353850716);
L_15175560:
    // 0x15175560: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    // 0x15175564: bgez        $v1, L_15175574
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15175568: nop
    
            goto L_15175574;
    }
    // 0x15175568: nop

    // 0x1517556C: b           L_15175574
    // 0x15175570: subu        $s3, $v1, $s5
    ctx->r19 = SUB32(ctx->r3, ctx->r21);
        goto L_15175574;
    // 0x15175570: subu        $s3, $v1, $s5
    ctx->r19 = SUB32(ctx->r3, ctx->r21);
L_15175574:
    // 0x15175574: jal         0x150ADA20
    // 0x15175578: addu        $s3, $s3, $t8
    ctx->r19 = ADD32(ctx->r19, ctx->r24);
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15175578: addu        $s3, $s3, $t8
    ctx->r19 = ADD32(ctx->r19, ctx->r24);
    after_4:
    // 0x1517557C: div         $zero, $v0, $s1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r17)));
    // 0x15175580: mfhi        $v1
    ctx->r3 = hi;
    // 0x15175584: lw          $t0, 0xF0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF0);
    // 0x15175588: bne         $s1, $zero, L_15175594
    if (ctx->r17 != 0) {
        // 0x1517558C: nop
    
            goto L_15175594;
    }
    // 0x1517558C: nop

    // 0x15175590: break       7
    do_break(353850768);
L_15175594:
    // 0x15175594: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15175598: bne         $s1, $at, L_151755AC
    if (ctx->r17 != ctx->r1) {
        // 0x1517559C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151755AC;
    }
    // 0x1517559C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151755A0: bne         $v0, $at, L_151755AC
    if (ctx->r2 != ctx->r1) {
        // 0x151755A4: nop
    
            goto L_151755AC;
    }
    // 0x151755A4: nop

    // 0x151755A8: break       6
    do_break(353850792);
L_151755AC:
    // 0x151755AC: addu        $s1, $v1, $s5
    ctx->r17 = ADD32(ctx->r3, ctx->r21);
    // 0x151755B0: bgez        $v1, L_151755C0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151755B4: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_151755C0;
    }
    // 0x151755B4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151755B8: b           L_151755C0
    // 0x151755BC: subu        $s1, $v1, $s5
    ctx->r17 = SUB32(ctx->r3, ctx->r21);
        goto L_151755C0;
    // 0x151755BC: subu        $s1, $v1, $s5
    ctx->r17 = SUB32(ctx->r3, ctx->r21);
L_151755C0:
    // 0x151755C0: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x151755C4: lw          $a1, 0xC4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC4);
    // 0x151755C8: beq         $t0, $zero, L_151755D4
    if (ctx->r8 == 0) {
        // 0x151755CC: addu        $s1, $s1, $t9
        ctx->r17 = ADD32(ctx->r17, ctx->r25);
            goto L_151755D4;
    }
    // 0x151755CC: addu        $s1, $s1, $t9
    ctx->r17 = ADD32(ctx->r17, ctx->r25);
    // 0x151755D0: beq         $fp, $zero, L_151755F0
    if (ctx->r30 == 0) {
        // 0x151755D4: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_151755F0;
    }
L_151755D4:
    // 0x151755D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x151755D8: jal         0x1510F8D8
    // 0x151755DC: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    func_1510F8D8(rdram, ctx);
        goto after_5;
    // 0x151755DC: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    after_5:
    // 0x151755E0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x151755E4: nop

    // 0x151755E8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151755EC: swc1        $f8, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f8.u32l;
L_151755F0:
    // 0x151755F0: lw          $t2, 0xF0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XF0);
    // 0x151755F4: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    // 0x151755F8: bne         $t2, $zero, L_15175614
    if (ctx->r10 != 0) {
        // 0x151755FC: nop
    
            goto L_15175614;
    }
    // 0x151755FC: nop

    // 0x15175600: lwc1        $f10, 0xC8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x15175604: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15175608: mfc1        $s4, $f16
    ctx->r20 = (int32_t)ctx->f16.u32l;
    // 0x1517560C: b           L_15175648
    // 0x15175610: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
        goto L_15175648;
    // 0x15175610: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
L_15175614:
    // 0x15175614: beql        $t3, $zero, L_15175648
    if (ctx->r11 == 0) {
        // 0x15175618: lw          $t7, 0xBC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XBC);
            goto L_15175648;
    }
    goto skip_2;
    // 0x15175618: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    skip_2:
    // 0x1517561C: jal         0x150ADA20
    // 0x15175620: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x15175620: nop

    after_6:
    // 0x15175624: lw          $t5, 0xD4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD4);
    // 0x15175628: lw          $t4, 0xC4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC4);
    // 0x1517562C: divu        $zero, $v0, $t5
    lo = S32(U32(ctx->r2) / U32(ctx->r13)); hi = S32(U32(ctx->r2) % U32(ctx->r13));
    // 0x15175630: mfhi        $t6
    ctx->r14 = hi;
    // 0x15175634: addu        $s4, $t4, $t6
    ctx->r20 = ADD32(ctx->r12, ctx->r14);
    // 0x15175638: bne         $t5, $zero, L_15175644
    if (ctx->r13 != 0) {
        // 0x1517563C: nop
    
            goto L_15175644;
    }
    // 0x1517563C: nop

    // 0x15175640: break       7
    do_break(353850944);
L_15175644:
    // 0x15175644: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
L_15175648:
    // 0x15175648: mtc1        $s3, $f18
    ctx->f18.u32l = ctx->r19;
    // 0x1517564C: mtc1        $s4, $f6
    ctx->f6.u32l = ctx->r20;
    // 0x15175650: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x15175654: sb          $t7, 0x90($s0)
    MEM_B(0X90, ctx->r16) = ctx->r15;
    // 0x15175658: lw          $t8, 0xDC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XDC);
    // 0x1517565C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15175660: sh          $t8, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r24;
    // 0x15175664: lw          $t9, 0xF0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF0);
    // 0x15175668: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1517566C: swc1        $f4, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f4.u32l;
    // 0x15175670: sb          $t9, 0x91($s0)
    MEM_B(0X91, ctx->r16) = ctx->r25;
    // 0x15175674: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15175678: swc1        $f8, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->f8.u32l;
    // 0x1517567C: jal         0x150ADA20
    // 0x15175680: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15175680: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
    after_7:
    // 0x15175684: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15175688: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1517568C: mfhi        $t0
    ctx->r8 = hi;
    // 0x15175690: addiu       $t2, $t0, 0xA
    ctx->r10 = ADD32(ctx->r8, 0XA);
    // 0x15175694: sh          $t2, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = ctx->r10;
    // 0x15175698: sh          $zero, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = 0;
    // 0x1517569C: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x151756A0: beq         $t1, $zero, L_151756E4
    if (ctx->r9 == 0) {
        // 0x151756A4: nop
    
            goto L_151756E4;
    }
    // 0x151756A4: nop

    // 0x151756A8: jal         0x150ADA20
    // 0x151756AC: nop

    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151756AC: nop

    after_8:
    // 0x151756B0: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x151756B4: andi        $t3, $v0, 0x1F
    ctx->r11 = ctx->r2 & 0X1F;
    // 0x151756B8: addu        $v1, $t3, $t5
    ctx->r3 = ADD32(ctx->r11, ctx->r13);
    // 0x151756BC: addiu       $v1, $v1, -0xF
    ctx->r3 = ADD32(ctx->r3, -0XF);
    // 0x151756C0: bgez        $v1, L_151756D0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151756C4: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_151756D0;
    }
    // 0x151756C4: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x151756C8: b           L_15175700
    // 0x151756CC: addiu       $a0, $v1, 0x168
    ctx->r4 = ADD32(ctx->r3, 0X168);
        goto L_15175700;
    // 0x151756CC: addiu       $a0, $v1, 0x168
    ctx->r4 = ADD32(ctx->r3, 0X168);
L_151756D0:
    // 0x151756D0: slti        $at, $v1, 0x168
    ctx->r1 = SIGNED(ctx->r3) < 0X168 ? 1 : 0;
    // 0x151756D4: bne         $at, $zero, L_15175700
    if (ctx->r1 != 0) {
        // 0x151756D8: nop
    
            goto L_15175700;
    }
    // 0x151756D8: nop

    // 0x151756DC: b           L_15175700
    // 0x151756E0: addiu       $a0, $v1, -0x168
    ctx->r4 = ADD32(ctx->r3, -0X168);
        goto L_15175700;
    // 0x151756E0: addiu       $a0, $v1, -0x168
    ctx->r4 = ADD32(ctx->r3, -0X168);
L_151756E4:
    // 0x151756E4: jal         0x150ADA20
    // 0x151756E8: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x151756E8: nop

    after_9:
    // 0x151756EC: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x151756F0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151756F4: mfhi        $a0
    ctx->r4 = hi;
    // 0x151756F8: nop

    // 0x151756FC: nop

L_15175700:
    // 0x15175700: beql        $s7, $zero, L_1517573C
    if (ctx->r23 == 0) {
        // 0x15175704: swc1        $f20, 0xA8($s0)
        MEM_W(0XA8, ctx->r16) = ctx->f20.u32l;
            goto L_1517573C;
    }
    goto skip_3;
    // 0x15175704: swc1        $f20, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f20.u32l;
    skip_3:
    // 0x15175708: jal         0x150ADA20
    // 0x1517570C: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x1517570C: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    after_10:
    // 0x15175710: andi        $t4, $v0, 0x1F
    ctx->r12 = ctx->r2 & 0X1F;
    // 0x15175714: addiu       $t6, $t4, -0xF
    ctx->r14 = ADD32(ctx->r12, -0XF);
    // 0x15175718: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x1517571C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x15175720: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15175724: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15175728: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x1517572C: swc1        $f6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f6.u32l;
    // 0x15175730: b           L_15175740
    // 0x15175734: swc1        $f4, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f4.u32l;
        goto L_15175740;
    // 0x15175734: swc1        $f4, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f4.u32l;
    // 0x15175738: swc1        $f20, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f20.u32l;
L_1517573C:
    // 0x1517573C: swc1        $f20, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f20.u32l;
L_15175740:
    // 0x15175740: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x15175744: swc1        $f20, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f20.u32l;
    // 0x15175748: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1517574C: jal         0x150ADA20
    // 0x15175750: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x15175750: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
    after_11:
    // 0x15175754: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x15175758: addiu       $t8, $t7, -0x80
    ctx->r24 = ADD32(ctx->r15, -0X80);
    // 0x1517575C: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x15175760: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15175764: lwc1        $f4, 0x7178($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7178);
    // 0x15175768: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1517576C: swc1        $f20, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f20.u32l;
    // 0x15175770: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15175774: jal         0x150ADA20
    // 0x15175778: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x15175778: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
    after_12:
    // 0x1517577C: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x15175780: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x15175784: lui         $at, 0x3800
    ctx->r1 = S32(0X3800 << 16);
    // 0x15175788: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1517578C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15175790: lwc1        $f4, 0xF8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x15175794: lwc1        $f8, 0xF4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x15175798: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1517579C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151757A0: nop

    // 0x151757A4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151757A8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151757AC: swc1        $f10, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f10.u32l;
    // 0x151757B0: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x151757B4: beq         $t0, $at, L_151757D8
    if (ctx->r8 == ctx->r1) {
        // 0x151757B8: nop
    
            goto L_151757D8;
    }
    // 0x151757B8: nop

    // 0x151757BC: beq         $t0, $zero, L_151757D8
    if (ctx->r8 == 0) {
        // 0x151757C0: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_151757D8;
    }
    // 0x151757C0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x151757C4: jal         0x150ADA20
    // 0x151757C8: nop

    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x151757C8: nop

    after_13:
    // 0x151757CC: lw          $t2, 0xEC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XEC);
    // 0x151757D0: b           L_151757D8
    // 0x151757D4: and         $s2, $v0, $t2
    ctx->r18 = ctx->r2 & ctx->r10;
        goto L_151757D8;
    // 0x151757D4: and         $s2, $v0, $t2
    ctx->r18 = ctx->r2 & ctx->r10;
L_151757D8:
    // 0x151757D8: lw          $t1, 0xE8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XE8);
    // 0x151757DC: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x151757E0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151757E4: addu        $s2, $s2, $t1
    ctx->r18 = ADD32(ctx->r18, ctx->r9);
    // 0x151757E8: sll         $t3, $s2, 2
    ctx->r11 = S32(ctx->r18 << 2);
    // 0x151757EC: addu        $t3, $t3, $s2
    ctx->r11 = ADD32(ctx->r11, ctx->r18);
    // 0x151757F0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x151757F4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x151757F8: lw          $t5, -0x2178($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X2178);
    // 0x151757FC: sb          $s2, 0xED($s0)
    MEM_B(0XED, ctx->r16) = ctx->r18;
    // 0x15175800: sw          $t5, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r13;
    // 0x15175804: lw          $t4, 0xC0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC0);
    // 0x15175808: sh          $t4, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r12;
    // 0x1517580C: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x15175810: sh          $t6, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r14;
    // 0x15175814: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x15175818: sh          $t7, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r15;
    // 0x1517581C: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x15175820: sh          $s5, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r21;
    // 0x15175824: sh          $t8, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r24;
    // 0x15175828: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x1517582C: sh          $zero, 0xDC($s0)
    MEM_H(0XDC, ctx->r16) = 0;
    // 0x15175830: sh          $zero, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = 0;
    // 0x15175834: sw          $zero, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = 0;
    // 0x15175838: swc1        $f16, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f16.u32l;
    // 0x1517583C: bne         $s6, $zero, L_15175890
    if (ctx->r22 != 0) {
        // 0x15175840: sh          $t9, 0xDA($s0)
        MEM_H(0XDA, ctx->r16) = ctx->r25;
            goto L_15175890;
    }
    // 0x15175840: sh          $t9, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r25;
    // 0x15175844: lw          $t0, 0xE0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE0);
    // 0x15175848: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x1517584C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15175850: bne         $t0, $at, L_15175894
    if (ctx->r8 != ctx->r1) {
        // 0x15175854: addiu       $a1, $zero, 0xA2
        ctx->r5 = ADD32(0, 0XA2);
            goto L_15175894;
    }
    // 0x15175854: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    // 0x15175858: addiu       $t2, $zero, 0x3E8
    ctx->r10 = ADD32(0, 0X3E8);
    // 0x1517585C: addiu       $t1, $zero, 0xFA0
    ctx->r9 = ADD32(0, 0XFA0);
    // 0x15175860: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x15175864: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x15175868: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x1517586C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15175870: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15175874: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15175878: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x1517587C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x15175880: jal         0x10010E78
    // 0x15175884: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    func_10010E78(rdram, ctx);
        goto after_14;
    // 0x15175884: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    after_14:
    // 0x15175888: b           L_15175894
    // 0x1517588C: sh          $v0, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = ctx->r2;
        goto L_15175894;
    // 0x1517588C: sh          $v0, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = ctx->r2;
L_15175890:
    // 0x15175890: sh          $zero, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = 0;
L_15175894:
    // 0x15175894: beql        $fp, $zero, L_1517590C
    if (ctx->r30 == 0) {
        // 0x15175898: sb          $zero, 0xEC($s0)
        MEM_B(0XEC, ctx->r16) = 0;
            goto L_1517590C;
    }
    goto skip_4;
    // 0x15175898: sb          $zero, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = 0;
    skip_4:
    // 0x1517589C: lh          $t3, 0x92($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X92);
    // 0x151758A0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151758A4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x151758A8: ori         $t5, $t3, 0x80
    ctx->r13 = ctx->r11 | 0X80;
    // 0x151758AC: sh          $t5, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r13;
    // 0x151758B0: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x151758B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151758B8: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x151758BC: beq         $t4, $zero, L_151758EC
    if (ctx->r12 == 0) {
        // 0x151758C0: nop
    
            goto L_151758EC;
    }
    // 0x151758C0: nop

    // 0x151758C4: lw          $t6, -0x41C4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X41C4);
    // 0x151758C8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151758CC: lw          $t8, -0x41A4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X41A4);
    // 0x151758D0: subu        $v0, $t4, $t6
    ctx->r2 = SUB32(ctx->r12, ctx->r14);
    // 0x151758D4: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x151758D8: mflo        $t7
    ctx->r15 = lo;
    // 0x151758DC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x151758E0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x151758E4: b           L_151758EC
    // 0x151758E8: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
        goto L_151758EC;
    // 0x151758E8: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
L_151758EC:
    // 0x151758EC: srl         $t2, $v1, 5
    ctx->r10 = S32(U32(ctx->r3) >> 5);
    // 0x151758F0: andi        $t1, $t2, 0x3
    ctx->r9 = ctx->r10 & 0X3;
    // 0x151758F4: sw          $v1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r3;
    // 0x151758F8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x151758FC: lbu         $t3, 0x7170($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X7170);
    // 0x15175900: b           L_1517590C
    // 0x15175904: sb          $t3, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = ctx->r11;
        goto L_1517590C;
    // 0x15175904: sb          $t3, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = ctx->r11;
    // 0x15175908: sb          $zero, 0xEC($s0)
    MEM_B(0XEC, ctx->r16) = 0;
L_1517590C:
    // 0x1517590C: sb          $zero, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = 0;
    // 0x15175910: sb          $zero, 0xF1($s0)
    MEM_B(0XF1, ctx->r16) = 0;
    // 0x15175914: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x15175918: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x1517591C: bnel        $s6, $t5, L_151754A0
    if (ctx->r22 != ctx->r13) {
        // 0x15175920: lw          $t0, 0xE4($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XE4);
            goto L_151754A0;
    }
    goto skip_5;
    // 0x15175920: lw          $t0, 0xE4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE4);
    skip_5:
L_15175924:
    // 0x15175924: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_15175928:
    // 0x15175928: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x1517592C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x15175930: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x15175934: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x15175938: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x1517593C: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x15175940: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x15175944: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x15175948: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x1517594C: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x15175950: jr          $ra
    // 0x15175954: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x15175954: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_150DDF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DDF88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150DDF8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150DDF90: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150DDF94: jal         0x150DBD70
    // 0x150DDF98: lbu         $a0, 0x28($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X28);
    func_150DBD70(rdram, ctx);
        goto after_0;
    // 0x150DDF98: lbu         $a0, 0x28($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X28);
    after_0:
    // 0x150DDF9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150DDFA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150DDFA4: jr          $ra
    // 0x150DDFA8: nop

    return;
    return;
    // 0x150DDFA8: nop

;}
RECOMP_FUNC void func_1515B21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515B21C: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x1515B220: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x1515B224: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1515B228: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x1515B22C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x1515B230: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x1515B234: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x1515B238: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x1515B23C: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x1515B240: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x1515B244: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x1515B248: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x1515B24C: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x1515B250: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x1515B254: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x1515B258: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x1515B25C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1515B260: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1515B264: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x1515B268: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1515B26C: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x1515B270: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1515B274: addiu       $t6, $zero, 0x2F
    ctx->r14 = ADD32(0, 0X2F);
    // 0x1515B278: addiu       $t7, $zero, 0xC01
    ctx->r15 = ADD32(0, 0XC01);
    // 0x1515B27C: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x1515B280: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1515B284: addiu       $t0, $zero, 0x3207
    ctx->r8 = ADD32(0, 0X3207);
    // 0x1515B288: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x1515B28C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1515B290: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x1515B294: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x1515B298: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x1515B29C: swc1        $f16, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f16.u32l;
    // 0x1515B2A0: lwc1        $f18, 0x38($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1515B2A4: addiu       $s0, $a0, 0x28
    ctx->r16 = ADD32(ctx->r4, 0X28);
    // 0x1515B2A8: c.lt.s      $f28, $f18
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f28.fl < ctx->f18.fl;
    // 0x1515B2AC: nop

    // 0x1515B2B0: bc1fl       L_1515B5BC
    if (!c1cs) {
        // 0x1515B2B4: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_1515B5BC;
    }
    goto skip_0;
    // 0x1515B2B4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_0:
    // 0x1515B2B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1515B2BC: nop

    // 0x1515B2C0: sb          $t6, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r14;
    // 0x1515B2C4: sh          $t7, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r15;
    // 0x1515B2C8: sw          $t8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r24;
    // 0x1515B2CC: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x1515B2D0: sb          $zero, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = 0;
    // 0x1515B2D4: sb          $zero, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = 0;
    // 0x1515B2D8: sb          $zero, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = 0;
    // 0x1515B2DC: sb          $zero, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = 0;
    // 0x1515B2E0: sb          $zero, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = 0;
    // 0x1515B2E4: sb          $zero, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = 0;
    // 0x1515B2E8: sb          $zero, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = 0;
    // 0x1515B2EC: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x1515B2F0: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x1515B2F4: sb          $t9, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r25;
    // 0x1515B2F8: sh          $zero, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = 0;
    // 0x1515B2FC: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    // 0x1515B300: sw          $t0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r8;
    // 0x1515B304: sb          $t1, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r9;
    // 0x1515B308: sb          $t2, 0xF5($sp)
    MEM_B(0XF5, ctx->r29) = ctx->r10;
    // 0x1515B30C: sb          $t3, 0xF6($sp)
    MEM_B(0XF6, ctx->r29) = ctx->r11;
    // 0x1515B310: sb          $t4, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r12;
    // 0x1515B314: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x1515B318: addiu       $t5, $sp, 0xC4
    ctx->r13 = ADD32(ctx->r29, 0XC4);
    // 0x1515B31C: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x1515B320: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x1515B324: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x1515B328: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x1515B32C: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x1515B330: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x1515B334: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x1515B338: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B33C: lwc1        $f4, 0x6438($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6438);
    // 0x1515B340: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B344: lwc1        $f6, 0x643C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X643C);
    // 0x1515B348: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x1515B34C: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x1515B350: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x1515B354: sh          $t9, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r25;
    // 0x1515B358: sh          $t0, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r8;
    // 0x1515B35C: sb          $zero, 0x70($sp)
    MEM_B(0X70, ctx->r29) = 0;
    // 0x1515B360: sb          $zero, 0x71($sp)
    MEM_B(0X71, ctx->r29) = 0;
    // 0x1515B364: sb          $zero, 0x84($sp)
    MEM_B(0X84, ctx->r29) = 0;
    // 0x1515B368: sb          $zero, 0x85($sp)
    MEM_B(0X85, ctx->r29) = 0;
    // 0x1515B36C: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x1515B370: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x1515B374: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x1515B378: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x1515B37C: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1515B380: jal         0x150ADA20
    // 0x1515B384: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1515B384: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x1515B388: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x1515B38C: beq         $t1, $zero, L_1515B39C
    if (ctx->r9 == 0) {
        // 0x1515B390: lw          $t2, 0xEC($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XEC);
            goto L_1515B39C;
    }
    // 0x1515B390: lw          $t2, 0xEC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XEC);
    // 0x1515B394: ori         $t3, $t2, 0x40
    ctx->r11 = ctx->r10 | 0X40;
    // 0x1515B398: sw          $t3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r11;
L_1515B39C:
    // 0x1515B39C: jal         0x150ADA20
    // 0x1515B3A0: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1515B3A0: nop

    after_1:
    // 0x1515B3A4: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x1515B3A8: beq         $t4, $zero, L_1515B3BC
    if (ctx->r12 == 0) {
        // 0x1515B3AC: lui         $at, 0x4140
        ctx->r1 = S32(0X4140 << 16);
            goto L_1515B3BC;
    }
    // 0x1515B3AC: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x1515B3B0: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x1515B3B4: ori         $t6, $t7, 0x80
    ctx->r14 = ctx->r15 | 0X80;
    // 0x1515B3B8: sw          $t6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r14;
L_1515B3BC:
    // 0x1515B3BC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x1515B3C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B3C4: lwc1        $f26, 0x6440($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X6440);
    // 0x1515B3C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B3CC: lwc1        $f24, 0x6444($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6444);
    // 0x1515B3D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B3D4: lwc1        $f22, 0x6448($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6448);
    // 0x1515B3D8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1515B3DC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1515B3E0: addiu       $s5, $sp, 0x6C
    ctx->r21 = ADD32(ctx->r29, 0X6C);
    // 0x1515B3E4: addiu       $s4, $sp, 0x94
    ctx->r20 = ADD32(ctx->r29, 0X94);
    // 0x1515B3E8: addiu       $s3, $zero, 0x97
    ctx->r19 = ADD32(0, 0X97);
    // 0x1515B3EC: addiu       $s2, $zero, 0x98
    ctx->r18 = ADD32(0, 0X98);
    // 0x1515B3F0: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_1515B3F4:
    // 0x1515B3F4: jal         0x150ADA68
    // 0x1515B3F8: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x1515B3F8: nop

    after_2:
    // 0x1515B3FC: mul.s       $f8, $f0, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x1515B400: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B404: lwc1        $f16, 0x644C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X644C);
    // 0x1515B408: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x1515B40C: jal         0x150ADA20
    // 0x1515B410: swc1        $f18, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1515B410: swc1        $f18, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x1515B414: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x1515B418: mfhi        $t5
    ctx->r13 = hi;
    // 0x1515B41C: addiu       $t8, $t5, 0x96
    ctx->r24 = ADD32(ctx->r13, 0X96);
    // 0x1515B420: bne         $s2, $zero, L_1515B42C
    if (ctx->r18 != 0) {
        // 0x1515B424: nop
    
            goto L_1515B42C;
    }
    // 0x1515B424: nop

    // 0x1515B428: break       7
    do_break(353743912);
L_1515B42C:
    // 0x1515B42C: sh          $t8, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = ctx->r24;
    // 0x1515B430: jal         0x150ADA20
    // 0x1515B434: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x1515B434: nop

    after_4:
    // 0x1515B438: divu        $zero, $v0, $s3
    lo = S32(U32(ctx->r2) / U32(ctx->r19)); hi = S32(U32(ctx->r2) % U32(ctx->r19));
    // 0x1515B43C: mfhi        $t9
    ctx->r25 = hi;
    // 0x1515B440: addiu       $t0, $t9, 0x37
    ctx->r8 = ADD32(ctx->r25, 0X37);
    // 0x1515B444: bne         $s3, $zero, L_1515B450
    if (ctx->r19 != 0) {
        // 0x1515B448: nop
    
            goto L_1515B450;
    }
    // 0x1515B448: nop

    // 0x1515B44C: break       7
    do_break(353743948);
L_1515B450:
    // 0x1515B450: sb          $t0, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r8;
    // 0x1515B454: jal         0x150ADA68
    // 0x1515B458: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x1515B458: nop

    after_5:
    // 0x1515B45C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x1515B460: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1515B464: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1515B468: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1515B46C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1515B470: add.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1515B474: swc1        $f2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f2.u32l;
    // 0x1515B478: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x1515B47C: jal         0x150ADA20
    // 0x1515B480: swc1        $f2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1515B480: swc1        $f2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x1515B484: divu        $zero, $v0, $s1
    lo = S32(U32(ctx->r2) / U32(ctx->r17)); hi = S32(U32(ctx->r2) % U32(ctx->r17));
    // 0x1515B488: mfhi        $t1
    ctx->r9 = hi;
    // 0x1515B48C: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x1515B490: bne         $s1, $zero, L_1515B49C
    if (ctx->r17 != 0) {
        // 0x1515B494: nop
    
            goto L_1515B49C;
    }
    // 0x1515B494: nop

    // 0x1515B498: break       7
    do_break(353744024);
L_1515B49C:
    // 0x1515B49C: sb          $t2, 0x72($sp)
    MEM_B(0X72, ctx->r29) = ctx->r10;
    // 0x1515B4A0: jal         0x150ADA20
    // 0x1515B4A4: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1515B4A4: nop

    after_7:
    // 0x1515B4A8: divu        $zero, $v0, $s1
    lo = S32(U32(ctx->r2) / U32(ctx->r17)); hi = S32(U32(ctx->r2) % U32(ctx->r17));
    // 0x1515B4AC: mfhi        $t3
    ctx->r11 = hi;
    // 0x1515B4B0: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x1515B4B4: bne         $s1, $zero, L_1515B4C0
    if (ctx->r17 != 0) {
        // 0x1515B4B8: nop
    
            goto L_1515B4C0;
    }
    // 0x1515B4B8: nop

    // 0x1515B4BC: break       7
    do_break(353744060);
L_1515B4C0:
    // 0x1515B4C0: sb          $t4, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r12;
    // 0x1515B4C4: jal         0x150ADA68
    // 0x1515B4C8: nop

    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x1515B4C8: nop

    after_8:
    // 0x1515B4CC: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1515B4D0: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1515B4D4: add.s       $f16, $f8, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x1515B4D8: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1515B4DC: jal         0x150ADA68
    // 0x1515B4E0: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x1515B4E0: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x1515B4E4: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1515B4E8: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1515B4EC: add.s       $f10, $f6, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x1515B4F0: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x1515B4F4: jal         0x150ADA20
    // 0x1515B4F8: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x1515B4F8: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x1515B4FC: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x1515B500: addiu       $t6, $t7, 0x2
    ctx->r14 = ADD32(ctx->r15, 0X2);
    // 0x1515B504: jal         0x150ADA20
    // 0x1515B508: sb          $t6, 0x86($sp)
    MEM_B(0X86, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x1515B508: sb          $t6, 0x86($sp)
    MEM_B(0X86, ctx->r29) = ctx->r14;
    after_11:
    // 0x1515B50C: andi        $t5, $v0, 0x3
    ctx->r13 = ctx->r2 & 0X3;
    // 0x1515B510: addiu       $t8, $t5, 0x2
    ctx->r24 = ADD32(ctx->r13, 0X2);
    // 0x1515B514: jal         0x150ADA68
    // 0x1515B518: sb          $t8, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r24;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x1515B518: sb          $t8, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r24;
    after_12:
    // 0x1515B51C: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x1515B520: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1515B524: add.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x1515B528: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1515B52C: jal         0x150ADA68
    // 0x1515B530: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x1515B530: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x1515B534: mul.s       $f8, $f0, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x1515B538: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1515B53C: add.s       $f16, $f8, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x1515B540: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1515B544: jal         0x150ADA68
    // 0x1515B548: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x1515B548: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x1515B54C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B550: lwc1        $f6, 0x6450($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x1515B554: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x1515B558: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1515B55C: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1515B560: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B564: lwc1        $f18, 0x6454($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6454);
    // 0x1515B568: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x1515B56C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1515B570: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x1515B574: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1515B578: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1515B57C: jal         0x151303BC
    // 0x1515B580: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    func_151303BC(rdram, ctx);
        goto after_15;
    // 0x1515B580: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    after_15:
    // 0x1515B584: beq         $v0, $zero, L_1515B598
    if (ctx->r2 == 0) {
        // 0x1515B588: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_1515B598;
    }
    // 0x1515B588: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x1515B58C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x1515B590: jal         0x10022EC0
    // 0x1515B594: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x1515B594: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_16:
L_1515B598:
    // 0x1515B598: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1515B59C: sub.s       $f10, $f6, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f28.fl;
    // 0x1515B5A0: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x1515B5A4: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1515B5A8: c.lt.s      $f28, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f28.fl < ctx->f8.fl;
    // 0x1515B5AC: nop

    // 0x1515B5B0: bc1t        L_1515B3F4
    if (c1cs) {
        // 0x1515B5B4: nop
    
            goto L_1515B3F4;
    }
    // 0x1515B5B4: nop

    // 0x1515B5B8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_1515B5BC:
    // 0x1515B5BC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x1515B5C0: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x1515B5C4: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x1515B5C8: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x1515B5CC: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x1515B5D0: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x1515B5D4: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x1515B5D8: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x1515B5DC: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x1515B5E0: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x1515B5E4: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x1515B5E8: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x1515B5EC: jr          $ra
    // 0x1515B5F0: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    return;
    // 0x1515B5F0: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void static_3_1000777C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000777C: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10007780: sw          $k0, -0x41FC($at)
    MEM_W(-0X41FC, ctx->r1) = ctx->r26;
    // 0x10007784: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x10007788: sh          $t1, 0x10($k0)
    MEM_H(0X10, ctx->r26) = ctx->r9;
    // 0x1000778C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x10007790: sh          $t1, 0x12($k0)
    MEM_H(0X12, ctx->r26) = ctx->r9;
    // 0x10007794: mfc0        $t2, BadVaddr
    ctx->r10 = cop0_badvaddr_read(ctx);
    // 0x10007798: sw          $t2, 0x124($k0)
    MEM_W(0X124, ctx->r26) = ctx->r10;
    // 0x1000779C: jal         0x10007DAC
    // 0x100077A0: nop

    func_10007DAC(rdram, ctx);
        goto after_0;
    // 0x100077A0: nop

    after_0:
    // 0x100077A4: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x100077A8: jal         0x100077B8
    // 0x100077AC: nop

    func_100077B8(rdram, ctx);
        goto after_1;
    // 0x100077AC: nop

    after_1:
    // 0x100077B0: j           L_10007A38
    // 0x100077B4: nop

    func_10007A38(rdram, ctx);
    return;
    // 0x100077B4: nop

;}
RECOMP_FUNC void static_3_10015044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void static_5_150A3BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A3BAC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150A3BB0: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x150A3BB4: addu        $t9, $s0, $t4
    ctx->r25 = ADD32(ctx->r16, ctx->r12);
    // 0x150A3BB8: lh          $t5, 0x0($t9)
    ctx->r13 = MEM_H(ctx->r25, 0X0);
    // 0x150A3BBC: lh          $s2, 0x2($t9)
    ctx->r18 = MEM_H(ctx->r25, 0X2);
    // 0x150A3BC0: addiu       $t5, $t5, -0x2
    ctx->r13 = ADD32(ctx->r13, -0X2);
    // 0x150A3BC4: slt         $at, $a0, $t5
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x150A3BC8: bne         $at, $zero, L_150A3F50
    if (ctx->r1 != 0) {
        // 0x150A3BCC: addiu       $s2, $s2, -0x2
        ctx->r18 = ADD32(ctx->r18, -0X2);
            goto L_150A3F50;
    }
    // 0x150A3BCC: addiu       $s2, $s2, -0x2
    ctx->r18 = ADD32(ctx->r18, -0X2);
    // 0x150A3BD0: slt         $at, $a1, $s2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x150A3BD4: bne         $at, $zero, L_150A3F50
    if (ctx->r1 != 0) {
        // 0x150A3BD8: lh          $s5, 0x4($t9)
        ctx->r21 = MEM_H(ctx->r25, 0X4);
            goto L_150A3F50;
    }
    // 0x150A3BD8: lh          $s5, 0x4($t9)
    ctx->r21 = MEM_H(ctx->r25, 0X4);
    // 0x150A3BDC: lh          $fp, 0x6($t9)
    ctx->r30 = MEM_H(ctx->r25, 0X6);
    // 0x150A3BE0: addiu       $s5, $s5, 0x2
    ctx->r21 = ADD32(ctx->r21, 0X2);
    // 0x150A3BE4: slt         $at, $s5, $a0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x150A3BE8: bne         $at, $zero, L_150A3F50
    if (ctx->r1 != 0) {
        // 0x150A3BEC: addiu       $fp, $fp, 0x2
        ctx->r30 = ADD32(ctx->r30, 0X2);
            goto L_150A3F50;
    }
    // 0x150A3BEC: addiu       $fp, $fp, 0x2
    ctx->r30 = ADD32(ctx->r30, 0X2);
    // 0x150A3BF0: slt         $at, $fp, $a1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x150A3BF4: bne         $at, $zero, L_150A3F50
    if (ctx->r1 != 0) {
        // 0x150A3BF8: addu        $t9, $s0, $t3
        ctx->r25 = ADD32(ctx->r16, ctx->r11);
            goto L_150A3F50;
    }
    // 0x150A3BF8: addu        $t9, $s0, $t3
    ctx->r25 = ADD32(ctx->r16, ctx->r11);
    // 0x150A3BFC: srl         $s0, $s0, 1
    ctx->r16 = S32(U32(ctx->r16) >> 1);
    // 0x150A3C00: addu        $t9, $t9, $s0
    ctx->r25 = ADD32(ctx->r25, ctx->r16);
    // 0x150A3C04: lw          $s2, 0x0($t9)
    ctx->r18 = MEM_W(ctx->r25, 0X0);
    // 0x150A3C08: lw          $s5, 0x4($t9)
    ctx->r21 = MEM_W(ctx->r25, 0X4);
    // 0x150A3C0C: lw          $fp, 0x8($t9)
    ctx->r30 = MEM_W(ctx->r25, 0X8);
    // 0x150A3C10: addu        $s2, $s2, $t0
    ctx->r18 = ADD32(ctx->r18, ctx->r8);
    // 0x150A3C14: addu        $s5, $s5, $t0
    ctx->r21 = ADD32(ctx->r21, ctx->r8);
    // 0x150A3C18: addu        $fp, $fp, $t0
    ctx->r30 = ADD32(ctx->r30, ctx->r8);
    // 0x150A3C1C: lh          $s0, 0x0($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X0);
    // 0x150A3C20: lh          $s1, 0x2($s2)
    ctx->r17 = MEM_H(ctx->r18, 0X2);
    // 0x150A3C24: lh          $s2, 0x4($s2)
    ctx->r18 = MEM_H(ctx->r18, 0X4);
    // 0x150A3C28: lh          $s3, 0x0($s5)
    ctx->r19 = MEM_H(ctx->r21, 0X0);
    // 0x150A3C2C: lh          $s4, 0x2($s5)
    ctx->r20 = MEM_H(ctx->r21, 0X2);
    // 0x150A3C30: lh          $s5, 0x4($s5)
    ctx->r21 = MEM_H(ctx->r21, 0X4);
    // 0x150A3C34: lh          $s6, 0x0($fp)
    ctx->r22 = MEM_H(ctx->r30, 0X0);
    // 0x150A3C38: lh          $s7, 0x2($fp)
    ctx->r23 = MEM_H(ctx->r30, 0X2);
    // 0x150A3C3C: lh          $fp, 0x4($fp)
    ctx->r30 = MEM_H(ctx->r30, 0X4);
    // 0x150A3C40: slt         $at, $s2, $s5
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x150A3C44: beq         $at, $zero, L_150A3C84
    if (ctx->r1 == 0) {
        // 0x150A3C48: nop
    
            goto L_150A3C84;
    }
    // 0x150A3C48: nop

    // 0x150A3C4C: slt         $at, $fp, $s2
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x150A3C50: beq         $at, $zero, L_150A3CBC
    if (ctx->r1 == 0) {
        // 0x150A3C54: nop
    
            goto L_150A3CBC;
    }
    // 0x150A3C54: nop

L_150A3C58:
    // 0x150A3C58: or          $t5, $s6, $zero
    ctx->r13 = ctx->r22 | 0;
    // 0x150A3C5C: or          $t6, $fp, $zero
    ctx->r14 = ctx->r30 | 0;
    // 0x150A3C60: or          $t7, $s7, $zero
    ctx->r15 = ctx->r23 | 0;
    // 0x150A3C64: or          $s6, $s0, $zero
    ctx->r22 = ctx->r16 | 0;
    // 0x150A3C68: or          $fp, $s2, $zero
    ctx->r30 = ctx->r18 | 0;
    // 0x150A3C6C: or          $s7, $s1, $zero
    ctx->r23 = ctx->r17 | 0;
    // 0x150A3C70: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x150A3C74: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x150A3C78: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x150A3C7C: j           L_150A3CBC
    // 0x150A3C80: nop

        goto L_150A3CBC;
    // 0x150A3C80: nop

L_150A3C84:
    // 0x150A3C84: slt         $at, $s5, $fp
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x150A3C88: beq         $at, $zero, L_150A3C58
    if (ctx->r1 == 0) {
        // 0x150A3C8C: nop
    
            goto L_150A3C58;
    }
    // 0x150A3C8C: nop

    // 0x150A3C90: or          $t5, $s3, $zero
    ctx->r13 = ctx->r19 | 0;
    // 0x150A3C94: or          $t6, $s5, $zero
    ctx->r14 = ctx->r21 | 0;
    // 0x150A3C98: or          $t7, $s4, $zero
    ctx->r15 = ctx->r20 | 0;
    // 0x150A3C9C: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
    // 0x150A3CA0: or          $s5, $s2, $zero
    ctx->r21 = ctx->r18 | 0;
    // 0x150A3CA4: or          $s4, $s1, $zero
    ctx->r20 = ctx->r17 | 0;
    // 0x150A3CA8: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x150A3CAC: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x150A3CB0: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x150A3CB4: j           L_150A3CBC
    // 0x150A3CB8: nop

        goto L_150A3CBC;
    // 0x150A3CB8: nop

L_150A3CBC:
    // 0x150A3CBC: slt         $at, $a1, $s2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x150A3CC0: bne         $at, $zero, L_150A3F50
    if (ctx->r1 != 0) {
        // 0x150A3CC4: nop
    
            goto L_150A3F50;
    }
    // 0x150A3CC4: nop

    // 0x150A3CC8: slt         $at, $fp, $s5
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x150A3CCC: beq         $at, $zero, L_150A3CF8
    if (ctx->r1 == 0) {
        // 0x150A3CD0: nop
    
            goto L_150A3CF8;
    }
    // 0x150A3CD0: nop

    // 0x150A3CD4: or          $t5, $s3, $zero
    ctx->r13 = ctx->r19 | 0;
    // 0x150A3CD8: or          $t6, $s5, $zero
    ctx->r14 = ctx->r21 | 0;
    // 0x150A3CDC: or          $t7, $s4, $zero
    ctx->r15 = ctx->r20 | 0;
    // 0x150A3CE0: or          $s3, $s6, $zero
    ctx->r19 = ctx->r22 | 0;
    // 0x150A3CE4: or          $s5, $fp, $zero
    ctx->r21 = ctx->r30 | 0;
    // 0x150A3CE8: or          $s4, $s7, $zero
    ctx->r20 = ctx->r23 | 0;
    // 0x150A3CEC: or          $s6, $t5, $zero
    ctx->r22 = ctx->r13 | 0;
    // 0x150A3CF0: or          $fp, $t6, $zero
    ctx->r30 = ctx->r14 | 0;
    // 0x150A3CF4: or          $s7, $t7, $zero
    ctx->r23 = ctx->r15 | 0;
L_150A3CF8:
    // 0x150A3CF8: slt         $at, $fp, $a1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x150A3CFC: bne         $at, $zero, L_150A3F50
    if (ctx->r1 != 0) {
        // 0x150A3D00: nop
    
            goto L_150A3F50;
    }
    // 0x150A3D00: nop

    // 0x150A3D04: sub         $t6, $fp, $s2
    ctx->r14 = SUB32(ctx->r30, ctx->r18);
    // 0x150A3D08: addiu       $t6, $t6, 0x1
    ctx->r14 = ADD32(ctx->r14, 0X1);
    // 0x150A3D0C: sub         $t7, $s6, $s0
    ctx->r15 = SUB32(ctx->r22, ctx->r16);
    // 0x150A3D10: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x150A3D14: div         $zero, $t7, $t6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r14)));
    // 0x150A3D18: sub         $t5, $a1, $s2
    ctx->r13 = SUB32(ctx->r5, ctx->r18);
    // 0x150A3D1C: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x150A3D20: nop

    // 0x150A3D24: mtc1        $t6, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r14;
    // 0x150A3D28: nop

    // 0x150A3D2C: mflo        $t7
    ctx->r15 = lo;
    // 0x150A3D30: nop

    // 0x150A3D34: nop

    // 0x150A3D38: mult        $t5, $t7
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A3D3C: mflo        $t5
    ctx->r13 = lo;
    // 0x150A3D40: nop

    // 0x150A3D44: nop

    // 0x150A3D48: sra         $t5, $t5, 8
    ctx->r13 = S32(SIGNED(ctx->r13) >> 8);
    // 0x150A3D4C: sub         $t6, $fp, $s5
    ctx->r14 = SUB32(ctx->r30, ctx->r21);
    // 0x150A3D50: addu        $fp, $t5, $s0
    ctx->r30 = ADD32(ctx->r13, ctx->r16);
    // 0x150A3D54: sub         $t5, $a1, $s5
    ctx->r13 = SUB32(ctx->r5, ctx->r21);
    // 0x150A3D58: mtc1        $t5, $f14
    ctx->f14.u32l = ctx->r13;
    // 0x150A3D5C: nop

    // 0x150A3D60: bgez        $t5, L_150A3D78
    if (SIGNED(ctx->r13) >= 0) {
        // 0x150A3D64: nop
    
            goto L_150A3D78;
    }
    // 0x150A3D64: nop

    // 0x150A3D68: sub         $t6, $s5, $s2
    ctx->r14 = SUB32(ctx->r21, ctx->r18);
    // 0x150A3D6C: sub         $t5, $a1, $s2
    ctx->r13 = SUB32(ctx->r5, ctx->r18);
    // 0x150A3D70: or          $s6, $s3, $zero
    ctx->r22 = ctx->r19 | 0;
    // 0x150A3D74: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
L_150A3D78:
    // 0x150A3D78: addiu       $t6, $t6, 0x1
    ctx->r14 = ADD32(ctx->r14, 0X1);
    // 0x150A3D7C: sub         $t7, $s6, $s3
    ctx->r15 = SUB32(ctx->r22, ctx->r19);
    // 0x150A3D80: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x150A3D84: div         $zero, $t7, $t6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r14)));
    // 0x150A3D88: mtc1        $t5, $f12
    ctx->f12.u32l = ctx->r13;
    // 0x150A3D8C: nop

    // 0x150A3D90: mtc1        $t6, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r14;
    // 0x150A3D94: nop

    // 0x150A3D98: mflo        $t7
    ctx->r15 = lo;
    // 0x150A3D9C: nop

    // 0x150A3DA0: nop

    // 0x150A3DA4: mult        $t5, $t7
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A3DA8: mflo        $t5
    ctx->r13 = lo;
    // 0x150A3DAC: nop

    // 0x150A3DB0: nop

    // 0x150A3DB4: sra         $t5, $t5, 8
    ctx->r13 = S32(SIGNED(ctx->r13) >> 8);
    // 0x150A3DB8: addu        $s6, $t5, $s3
    ctx->r22 = ADD32(ctx->r13, ctx->r19);
    // 0x150A3DBC: sub         $t6, $s6, $a0
    ctx->r14 = SUB32(ctx->r22, ctx->r4);
    // 0x150A3DC0: sub         $t7, $fp, $a0
    ctx->r15 = SUB32(ctx->r30, ctx->r4);
    // 0x150A3DC4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x150A3DC8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150A3DCC: bnel        $at, $zero, L_150A3DD4
    if (ctx->r1 != 0) {
        // 0x150A3DD0: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_150A3DD4;
    }
    goto skip_0;
    // 0x150A3DD0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    skip_0:
L_150A3DD4:
    // 0x150A3DD4: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x150A3DD8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x150A3DDC: xor         $t5, $t7, $t6
    ctx->r13 = ctx->r15 ^ ctx->r14;
    // 0x150A3DE0: bgez        $t5, L_150A3F50
    if (SIGNED(ctx->r13) >= 0) {
        // 0x150A3DE4: nop
    
            goto L_150A3F50;
    }
    // 0x150A3DE4: nop

    // 0x150A3DE8: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x150A3DEC: or          $t9, $s1, $zero
    ctx->r25 = ctx->r17 | 0;
    // 0x150A3DF0: slt         $at, $t9, $s4
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x150A3DF4: beq         $at, $zero, L_150A3E00
    if (ctx->r1 == 0) {
        // 0x150A3DF8: nop
    
            goto L_150A3E00;
    }
    // 0x150A3DF8: nop

    // 0x150A3DFC: or          $t9, $s4, $zero
    ctx->r25 = ctx->r20 | 0;
L_150A3E00:
    // 0x150A3E00: slt         $at, $t9, $s7
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x150A3E04: beq         $at, $zero, L_150A3E10
    if (ctx->r1 == 0) {
        // 0x150A3E08: nop
    
            goto L_150A3E10;
    }
    // 0x150A3E08: nop

    // 0x150A3E0C: or          $t9, $s7, $zero
    ctx->r25 = ctx->r23 | 0;
L_150A3E10:
    // 0x150A3E10: sll         $t9, $t9, 8
    ctx->r25 = S32(ctx->r25 << 8);
    // 0x150A3E14: sub         $t7, $s7, $s1
    ctx->r15 = SUB32(ctx->r23, ctx->r17);
    // 0x150A3E18: mfc1        $t6, $f11
    ctx->r14 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x150A3E1C: nop

    // 0x150A3E20: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x150A3E24: div         $zero, $t7, $t6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r14)));
    // 0x150A3E28: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x150A3E2C: nop

    // 0x150A3E30: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
    // 0x150A3E34: slt         $at, $s4, $s3
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x150A3E38: beq         $at, $zero, L_150A3E44
    if (ctx->r1 == 0) {
        // 0x150A3E3C: nop
    
            goto L_150A3E44;
    }
    // 0x150A3E3C: nop

    // 0x150A3E40: or          $s3, $s4, $zero
    ctx->r19 = ctx->r20 | 0;
L_150A3E44:
    // 0x150A3E44: mflo        $t7
    ctx->r15 = lo;
    // 0x150A3E48: nop

    // 0x150A3E4C: nop

    // 0x150A3E50: mult        $t5, $t7
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A3E54: or          $t7, $s3, $zero
    ctx->r15 = ctx->r19 | 0;
    // 0x150A3E58: slt         $at, $s7, $t7
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x150A3E5C: beq         $at, $zero, L_150A3E68
    if (ctx->r1 == 0) {
        // 0x150A3E60: nop
    
            goto L_150A3E68;
    }
    // 0x150A3E60: nop

    // 0x150A3E64: or          $t7, $s7, $zero
    ctx->r15 = ctx->r23 | 0;
L_150A3E68:
    // 0x150A3E68: mflo        $t5
    ctx->r13 = lo;
    // 0x150A3E6C: nop

    // 0x150A3E70: nop

    // 0x150A3E74: sll         $s3, $s1, 8
    ctx->r19 = S32(ctx->r17 << 8);
    // 0x150A3E78: addu        $s3, $s3, $t5
    ctx->r19 = ADD32(ctx->r19, ctx->r13);
    // 0x150A3E7C: mfc1        $t6, $f14
    ctx->r14 = (int32_t)ctx->f14.u32l;
    // 0x150A3E80: nop

    // 0x150A3E84: bgez        $t6, L_150A3E94
    if (SIGNED(ctx->r14) >= 0) {
        // 0x150A3E88: nop
    
            goto L_150A3E94;
    }
    // 0x150A3E88: nop

    // 0x150A3E8C: or          $s7, $s4, $zero
    ctx->r23 = ctx->r20 | 0;
    // 0x150A3E90: or          $s4, $s1, $zero
    ctx->r20 = ctx->r17 | 0;
L_150A3E94:
    // 0x150A3E94: sll         $s1, $t7, 8
    ctx->r17 = S32(ctx->r15 << 8);
    // 0x150A3E98: sub         $t7, $s7, $s4
    ctx->r15 = SUB32(ctx->r23, ctx->r20);
    // 0x150A3E9C: mfc1        $t6, $f13
    ctx->r14 = (int32_t)ctx->f_odd[(13 - 1) * 2];
    // 0x150A3EA0: nop

    // 0x150A3EA4: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x150A3EA8: div         $zero, $t7, $t6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r14)));
    // 0x150A3EAC: mfc1        $t5, $f12
    ctx->r13 = (int32_t)ctx->f12.u32l;
    // 0x150A3EB0: nop

    // 0x150A3EB4: mflo        $t7
    ctx->r15 = lo;
    // 0x150A3EB8: nop

    // 0x150A3EBC: nop

    // 0x150A3EC0: mult        $t5, $t7
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A3EC4: mflo        $t5
    ctx->r13 = lo;
    // 0x150A3EC8: nop

    // 0x150A3ECC: nop

    // 0x150A3ED0: sll         $s4, $s4, 8
    ctx->r20 = S32(ctx->r20 << 8);
    // 0x150A3ED4: addu        $s5, $t5, $s4
    ctx->r21 = ADD32(ctx->r13, ctx->r20);
    // 0x150A3ED8: sub         $fp, $fp, $s6
    ctx->r30 = SUB32(ctx->r30, ctx->r22);
    // 0x150A3EDC: sub         $s3, $s3, $s5
    ctx->r19 = SUB32(ctx->r19, ctx->r21);
    // 0x150A3EE0: sll         $s3, $s3, 8
    ctx->r19 = S32(ctx->r19 << 8);
    // 0x150A3EE4: div         $zero, $s3, $fp
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r30))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r30)));
    // 0x150A3EE8: sub         $s0, $a0, $s6
    ctx->r16 = SUB32(ctx->r4, ctx->r22);
    // 0x150A3EEC: mflo        $fp
    ctx->r30 = lo;
    // 0x150A3EF0: nop

    // 0x150A3EF4: nop

    // 0x150A3EF8: mult        $s0, $fp
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A3EFC: mflo        $s0
    ctx->r16 = lo;
    // 0x150A3F00: nop

    // 0x150A3F04: nop

    // 0x150A3F08: sra         $s0, $s0, 8
    ctx->r16 = S32(SIGNED(ctx->r16) >> 8);
    // 0x150A3F0C: addu        $s5, $s5, $s0
    ctx->r21 = ADD32(ctx->r21, ctx->r16);
    // 0x150A3F10: slt         $at, $t9, $s5
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x150A3F14: beq         $at, $zero, L_150A3F20
    if (ctx->r1 == 0) {
        // 0x150A3F18: nop
    
            goto L_150A3F20;
    }
    // 0x150A3F18: nop

    // 0x150A3F1C: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
L_150A3F20:
    // 0x150A3F20: slt         $at, $s5, $s1
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x150A3F24: beq         $at, $zero, L_150A3F30
    if (ctx->r1 == 0) {
        // 0x150A3F28: nop
    
            goto L_150A3F30;
    }
    // 0x150A3F28: nop

    // 0x150A3F2C: or          $s5, $s1, $zero
    ctx->r21 = ctx->r17 | 0;
L_150A3F30:
    // 0x150A3F30: sw          $s5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r21;
    // 0x150A3F34: sw          $t0, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r8;
    // 0x150A3F38: sw          $gp, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r28;
    // 0x150A3F3C: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x150A3F40: beq         $v0, $at, L_150A3F50
    if (ctx->r2 == ctx->r1) {
        // 0x150A3F44: nop
    
            goto L_150A3F50;
    }
    // 0x150A3F44: nop

    // 0x150A3F48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150A3F4C: addiu       $t2, $t2, 0x10
    ctx->r10 = ADD32(ctx->r10, 0X10);
L_150A3F50:
    // 0x150A3F50: addiu       $t8, $t8, 0x1
    ctx->r24 = ADD32(ctx->r24, 0X1);
    // 0x150A3F54: jr          $ra
    // 0x150A3F58: nop

    return;
    return;
    // 0x150A3F58: nop

;}
RECOMP_FUNC void static_5_150A3F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A3F5C: mfc1        $s0, $f0
    ctx->r16 = (int32_t)ctx->f0.u32l;
    // 0x150A3F60: nop

    // 0x150A3F64: mfc1        $s1, $f1
    ctx->r17 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x150A3F68: nop

    // 0x150A3F6C: mfc1        $s2, $f2
    ctx->r18 = (int32_t)ctx->f2.u32l;
    // 0x150A3F70: nop

    // 0x150A3F74: mfc1        $s3, $f3
    ctx->r19 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x150A3F78: nop

    // 0x150A3F7C: mfc1        $s4, $f4
    ctx->r20 = (int32_t)ctx->f4.u32l;
    // 0x150A3F80: nop

    // 0x150A3F84: mfc1        $s5, $f5
    ctx->r21 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x150A3F88: nop

    // 0x150A3F8C: mfc1        $s6, $f6
    ctx->r22 = (int32_t)ctx->f6.u32l;
    // 0x150A3F90: nop

    // 0x150A3F94: mfc1        $s7, $f7
    ctx->r23 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x150A3F98: nop

    // 0x150A3F9C: mfc1        $fp, $f8
    ctx->r30 = (int32_t)ctx->f8.u32l;
    // 0x150A3FA0: nop

    // 0x150A3FA4: mfc1        $gp, $f9
    ctx->r28 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x150A3FA8: nop

    // 0x150A3FAC: mfc1        $ra, $f15
    ctx->r31 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x150A3FB0: nop

    // 0x150A3FB4: jr          $ra
    // 0x150A3FB8: nop

    return;
    return;
    // 0x150A3FB8: nop

;}
RECOMP_FUNC void static_5_150A3FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A3FBC: jr          $ra
    // 0x150A3FC0: nop

    return;
    return;
    // 0x150A3FC0: nop

;}
RECOMP_FUNC void static_5_150A43D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A43D8: jr          $ra
    // 0x150A43DC: nop

    return;
    return;
    // 0x150A43DC: nop

;}
RECOMP_FUNC void static_5_150A49F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A3BAC:
    // 0x150A49F4: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
L_150A3F5C:
    // 0x150A49F8: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150A49FC: addiu       $t1, $t1, -0x4228
    ctx->r9 = ADD32(ctx->r9, -0X4228);
    // 0x150A4A00: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x150A4A04: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x150A4A08: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x150A4A0C: addiu       $t3, $t3, -0x41C4
    ctx->r11 = ADD32(ctx->r11, -0X41C4);
    // 0x150A4A10: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x150A4A14: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150A4A18: addiu       $t1, $t1, -0x4218
    ctx->r9 = ADD32(ctx->r9, -0X4218);
    // 0x150A4A1C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x150A4A20: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x150A4A24: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x150A4A28: addiu       $t3, $t3, -0x41C0
    ctx->r11 = ADD32(ctx->r11, -0X41C0);
    // 0x150A4A2C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x150A4A30: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150A4A34: addiu       $t1, $t1, -0x4208
    ctx->r9 = ADD32(ctx->r9, -0X4208);
    // 0x150A4A38: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x150A4A3C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x150A4A40: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x150A4A44: addiu       $t3, $t3, -0x41BC
    ctx->r11 = ADD32(ctx->r11, -0X41BC);
    // 0x150A4A48: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x150A4A4C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150A4A50: addiu       $t1, $t1, -0x41F8
    ctx->r9 = ADD32(ctx->r9, -0X41F8);
    // 0x150A4A54: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x150A4A58: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x150A4A5C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x150A4A60: addiu       $t3, $t3, -0x41B8
    ctx->r11 = ADD32(ctx->r11, -0X41B8);
    // 0x150A4A64: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x150A4A68: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150A4A6C: addiu       $t1, $t1, -0x41E8
    ctx->r9 = ADD32(ctx->r9, -0X41E8);
    // 0x150A4A70: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x150A4A74: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x150A4A78: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x150A4A7C: addiu       $t3, $t3, -0x41B4
    ctx->r11 = ADD32(ctx->r11, -0X41B4);
    // 0x150A4A80: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x150A4A84: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150A4A88: addiu       $t0, $t0, -0x41B0
    ctx->r8 = ADD32(ctx->r8, -0X41B0);
    // 0x150A4A8C: jr          $ra
    // 0x150A4A90: sw          $a0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r4;
    return;
    return;
    // 0x150A4A90: sw          $a0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r4;
    // 0x150A4A94: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x150A4A98: mtc1        $s1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r17;
    // 0x150A4A9C: mtc1        $s2, $f2
    ctx->f2.u32l = ctx->r18;
    // 0x150A4AA0: mtc1        $s3, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r19;
    // 0x150A4AA4: mtc1        $s4, $f4
    ctx->f4.u32l = ctx->r20;
    // 0x150A4AA8: mtc1        $s5, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r21;
    // 0x150A4AAC: mtc1        $s6, $f6
    ctx->f6.u32l = ctx->r22;
    // 0x150A4AB0: mtc1        $s7, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r23;
    // 0x150A4AB4: mtc1        $fp, $f8
    ctx->f8.u32l = ctx->r30;
    // 0x150A4AB8: mtc1        $gp, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r28;
    // 0x150A4ABC: mtc1        $ra, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r31;
    // 0x150A4AC0: lui         $ra, 0x150A
    ctx->r31 = S32(0X150A << 16);
    // 0x150A4AC4: addiu       $ra, $ra, 0x4AF4
    ctx->r31 = ADD32(ctx->r31, 0X4AF4);
    // 0x150A4AC8: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150A4ACC: addiu       $t2, $t2, 0x3300
    ctx->r10 = ADD32(ctx->r10, 0X3300);
    // 0x150A4AD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150A4AD4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x150A4AD8: lw          $t4, -0x41C0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X41C0);
    // 0x150A4ADC: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x150A4AE0: lw          $t3, -0x41C4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X41C4);
    // 0x150A4AE4: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150A4AE8: lw          $t1, -0x41B4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X41B4);
    // 0x150A4AEC: or          $t8, $zero, $zero
    ctx->r24 = 0 | 0;
    // 0x150A4AF0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x150A4AF4: beq         $t8, $t1, L_150A3F5C
    if (ctx->r24 == ctx->r9) {
        // 0x150A4AF8: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
        // 0x150A4AF8: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    static_5_150A3F5C(rdram, ctx);
        return;
    }
    // 0x150A4AF8: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x150A4AFC: j           L_150A3BAC
    // 0x150A4B00: nop

    static_5_150A3BAC(rdram, ctx);
    return;
    // 0x150A4B00: nop

;}
RECOMP_FUNC void static_5_150A5174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A515C:
    // 0x150A5174: lb          $t0, 0x0($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X0);
L_150A5174:
    // 0x150A5178: beq         $t0, $v0, L_150A51A8
    if (ctx->r8 == ctx->r2) {
        // 0x150A517C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_150A51A8;
    }
    // 0x150A517C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150A5180: beq         $t0, $at, L_150A5230
    if (ctx->r8 == ctx->r1) {
        // 0x150A5184: addiu       $at, $zero, -0xD
        ctx->r1 = ADD32(0, -0XD);
            goto L_150A5230;
    }
    // 0x150A5184: addiu       $at, $zero, -0xD
    ctx->r1 = ADD32(0, -0XD);
    // 0x150A5188: beq         $t0, $at, L_150A530C
    if (ctx->r8 == ctx->r1) {
        // 0x150A518C: addiu       $at, $zero, -0x21
        ctx->r1 = ADD32(0, -0X21);
            goto L_150A530C;
    }
    // 0x150A518C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x150A5190: beq         $t0, $at, L_150A5328
    if (ctx->r8 == ctx->r1) {
        // 0x150A5194: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_150A5328;
    }
    // 0x150A5194: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_150A5198:
    // 0x150A5198: ld          $t0, -0x8($a0)
    ctx->r8 = LD(ctx->r4, -0X8);
    // 0x150A519C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x150A51A0: j           L_150A5174
    // 0x150A51A4: sd          $t0, -0x8($a1)
    SD(ctx->r8, -0X8, ctx->r5);
        goto L_150A5174;
    // 0x150A51A4: sd          $t0, -0x8($a1)
    SD(ctx->r8, -0X8, ctx->r5);
L_150A51A8:
    // 0x150A51A8: lbu         $t0, 0x1($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1);
    // 0x150A51AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150A51B0: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x150A51B4: addu        $s0, $t0, $t7
    ctx->r16 = ADD32(ctx->r8, ctx->r15);
    // 0x150A51B8: lbu         $t1, 0x1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1);
    // 0x150A51BC: lbu         $t2, 0x2($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2);
    // 0x150A51C0: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x150A51C4: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x150A51C8: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x150A51CC: addu        $s1, $t0, $t7
    ctx->r17 = ADD32(ctx->r8, ctx->r15);
    // 0x150A51D0: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x150A51D4: lbu         $t5, 0x1($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X1);
    // 0x150A51D8: lbu         $t0, 0x2($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X2);
    // 0x150A51DC: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x150A51E0: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x150A51E4: lbu         $t0, 0x3($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X3);
    // 0x150A51E8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x150A51EC: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x150A51F0: addu        $s2, $t0, $t7
    ctx->r18 = ADD32(ctx->r8, ctx->r15);
    // 0x150A51F4: lbu         $t3, 0x2($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X2);
    // 0x150A51F8: lbu         $t5, 0x1($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X1);
    // 0x150A51FC: lbu         $t0, 0x0($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X0);
    // 0x150A5200: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x150A5204: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x150A5208: beql        $t2, $zero, L_150A5174
    if (ctx->r10 == 0) {
        // 0x150A520C: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_150A5174;
    }
    goto skip_0;
    // 0x150A520C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_0:
    // 0x150A5210: bne         $t1, $zero, L_150A515C
    if (ctx->r9 != 0) {
        // 0x150A5214: addu        $t4, $t4, $t0
        ctx->r12 = ADD32(ctx->r12, ctx->r8);
        // 0x150A5214: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    func_150A515C(rdram, ctx);
        return;
    }
    // 0x150A5214: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x150A5218: beq         $t4, $at, L_150A515C
    if (ctx->r12 == ctx->r1) {
        // 0x150A521C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
        // 0x150A521C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    func_150A515C(rdram, ctx);
        return;
    }
    // 0x150A521C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150A5220: beq         $t4, $at, L_150A515C
    if (ctx->r12 == ctx->r1) {
        // 0x150A5224: nop
    
        // 0x150A5224: nop

    func_150A515C(rdram, ctx);
        return;
    }
    // 0x150A5224: nop

    // 0x150A5228: j           L_150A5174
    // 0x150A522C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_150A5174;
    // 0x150A522C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_150A5230:
    // 0x150A5230: lb          $t2, -0x8($a1)
    ctx->r10 = MEM_B(ctx->r5, -0X8);
    // 0x150A5234: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x150A5238: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x150A523C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150A5240: bne         $t2, $at, L_150A524C
    if (ctx->r10 != ctx->r1) {
        // 0x150A5244: addu        $t0, $t0, $gp
        ctx->r8 = ADD32(ctx->r8, ctx->r28);
            goto L_150A524C;
    }
    // 0x150A5244: addu        $t0, $t0, $gp
    ctx->r8 = ADD32(ctx->r8, ctx->r28);
    // 0x150A5248: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
L_150A524C:
    // 0x150A524C: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
    // 0x150A5250: srl         $t1, $t1, 8
    ctx->r9 = S32(U32(ctx->r9) >> 8);
    // 0x150A5254: andi        $t1, $t1, 0xFFF0
    ctx->r9 = ctx->r9 & 0XFFF0;
    // 0x150A5258: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
L_150A525C:
    // 0x150A525C: lh          $t4, 0x0($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X0);
    // 0x150A5260: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x150A5264: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x150A5268: lh          $t3, 0x2($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X2);
    // 0x150A526C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150A5270: mtc1        $t3, $f30
    ctx->f30.u32l = ctx->r11;
    // 0x150A5274: mul.s       $f12, $f18, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150A5278: lh          $t4, 0x4($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X4);
    // 0x150A527C: cvt.s.w     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.fl = CVT_S_W(ctx->f30.u32l);
    // 0x150A5280: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x150A5284: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x150A5288: mul.s       $f14, $f30, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f30.fl, ctx->f4.fl);
    // 0x150A528C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150A5290: add.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x150A5294: mul.s       $f14, $f10, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x150A5298: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150A529C: add.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x150A52A0: c.ole.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x150A52A4: bc1f        L_150A52B0
    if (!c1cs) {
        // 0x150A52A8: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_150A52B0;
    }
    // 0x150A52A8: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x150A52AC: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
L_150A52B0:
    // 0x150A52B0: mul.s       $f12, $f18, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x150A52B4: abs.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = fabsf(ctx->f16.fl);
    // 0x150A52B8: mul.s       $f14, $f30, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = MUL_S(ctx->f30.fl, ctx->f22.fl);
    // 0x150A52BC: add.s       $f12, $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f26.fl;
    // 0x150A52C0: mul.s       $f10, $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x150A52C4: add.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x150A52C8: sb          $t6, -0x2($t2)
    MEM_B(-0X2, ctx->r10) = ctx->r14;
    // 0x150A52CC: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x150A52D0: mfc1        $t3, $f12
    ctx->r11 = (int32_t)ctx->f12.u32l;
    // 0x150A52D4: abs.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = fabsf(ctx->f12.fl);
    // 0x150A52D8: and         $t3, $t3, $t8
    ctx->r11 = ctx->r11 & ctx->r24;
    // 0x150A52DC: srl         $t3, $t3, 31
    ctx->r11 = S32(U32(ctx->r11) >> 31);
    // 0x150A52E0: mul.s       $f12, $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f28.fl);
    // 0x150A52E4: sb          $t3, -0x4($t2)
    MEM_B(-0X4, ctx->r10) = ctx->r11;
    // 0x150A52E8: c.ole.s     $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x150A52EC: bc1t        L_150A5304
    if (c1cs) {
        // 0x150A52F0: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_150A5304;
    }
    // 0x150A52F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_150A52F4:
    // 0x150A52F4: bne         $t0, $t1, L_150A525C
    if (ctx->r8 != ctx->r9) {
        // 0x150A52F8: sb          $t6, -0x3($t2)
        MEM_B(-0X3, ctx->r10) = ctx->r14;
            goto L_150A525C;
    }
    // 0x150A52F8: sb          $t6, -0x3($t2)
    MEM_B(-0X3, ctx->r10) = ctx->r14;
    // 0x150A52FC: j           L_150A5198
    // 0x150A5300: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_150A5198;
    // 0x150A5300: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_150A5304:
    // 0x150A5304: j           L_150A52F4
    // 0x150A5308: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
        goto L_150A52F4;
    // 0x150A5308: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
L_150A530C:
    // 0x150A530C: beq         $zero, $t9, L_150A531C
    if (0 == ctx->r25) {
        // 0x150A5310: addiu       $t0, $zero, 0x0
        ctx->r8 = ADD32(0, 0X0);
            goto L_150A531C;
    }
    // 0x150A5310: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x150A5314: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x150A5318: sw          $t0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r8;
L_150A531C:
    // 0x150A531C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x150A5320: j           L_150A5198
    // 0x150A5324: or          $t9, $a1, $zero
    ctx->r25 = ctx->r5 | 0;
        goto L_150A5198;
    // 0x150A5324: or          $t9, $a1, $zero
    ctx->r25 = ctx->r5 | 0;
L_150A5328:
    // 0x150A5328: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x150A532C: lwc1        $f20, 0x0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X0);
    // 0x150A5330: lwc1        $f22, 0x4($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X4);
    // 0x150A5334: lwc1        $f24, 0x8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X8);
    // 0x150A5338: lwc1        $f26, 0xC($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0XC);
    // 0x150A533C: lwc1        $f28, 0x10($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X10);
    // 0x150A5340: lwc1        $f30, 0x14($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X14);
    // 0x150A5344: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150A5348: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150A534C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150A5350: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x150A5354: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x150A5358: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x150A535C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x150A5360: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x150A5364: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x150A5368: lw          $gp, 0x3C($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X3C);
    // 0x150A536C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x150A5370: jr          $ra
    // 0x150A5374: nop

    return;
    return;
    // 0x150A5374: nop

;}
RECOMP_FUNC void static_5_150A579C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A5708:
    // 0x150A579C: lb          $t0, 0x0($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X0);
L_150A5740:
    // 0x150A57A0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_150A576C:
    // 0x150A57A4: srl         $t2, $t0, 4
    ctx->r10 = S32(U32(ctx->r8) >> 4);
L_150A5798:
    // 0x150A57A8: beql        $t2, $s0, L_150A576C
    if (ctx->r10 == ctx->r16) {
        // 0x150A57AC: lwl         $t2, 0x0($t1)
        ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r9, 0X0);
        // 0x150A57AC: lwl         $t2, 0x0($t1)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r9, 0X0);
    static_5_150A576C(rdram, ctx);
        return;
    }
    goto skip_0;
L_150A579C:
    // 0x150A57AC: lwl         $t2, 0x0($t1)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r9, 0X0);
    skip_0:
    // 0x150A57B0: beq         $t0, $s1, L_150A593C
    if (ctx->r8 == ctx->r17) {
        // 0x150A57B4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
        // 0x150A57B4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    static_5_150A593C(rdram, ctx);
        return;
    }
    // 0x150A57B4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150A57B8: beq         $t0, $at, L_150A5740
    if (ctx->r8 == ctx->r1) {
        // 0x150A57BC: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
        // 0x150A57BC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    static_5_150A5740(rdram, ctx);
        return;
    }
    // 0x150A57BC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x150A57C0: beq         $t0, $at, L_150A5708
    if (ctx->r8 == ctx->r1) {
        // 0x150A57C4: addiu       $at, $zero, -0xB
        ctx->r1 = ADD32(0, -0XB);
        // 0x150A57C4: addiu       $at, $zero, -0xB
    ctx->r1 = ADD32(0, -0XB);
    func_150A5708(rdram, ctx);
        return;
    }
    // 0x150A57C4: addiu       $at, $zero, -0xB
    ctx->r1 = ADD32(0, -0XB);
    // 0x150A57C8: beq         $t0, $at, L_150A59B8
    if (ctx->r8 == ctx->r1) {
        // 0x150A57CC: addiu       $at, $zero, -0xE
        ctx->r1 = ADD32(0, -0XE);
        // 0x150A57CC: addiu       $at, $zero, -0xE
    ctx->r1 = ADD32(0, -0XE);
    static_5_150A59B8(rdram, ctx);
        return;
    }
    // 0x150A57CC: addiu       $at, $zero, -0xE
    ctx->r1 = ADD32(0, -0XE);
    // 0x150A57D0: beq         $t0, $at, L_150A59EC
    if (ctx->r8 == ctx->r1) {
        // 0x150A57D4: addiu       $at, $zero, -0xD
        ctx->r1 = ADD32(0, -0XD);
        // 0x150A57D4: addiu       $at, $zero, -0xD
    ctx->r1 = ADD32(0, -0XD);
    static_5_150A59EC(rdram, ctx);
        return;
    }
    // 0x150A57D4: addiu       $at, $zero, -0xD
    ctx->r1 = ADD32(0, -0XD);
    // 0x150A57D8: beq         $t0, $at, L_150A5948
    if (ctx->r8 == ctx->r1) {
        // 0x150A57DC: addiu       $at, $zero, -0x11
        ctx->r1 = ADD32(0, -0X11);
        // 0x150A57DC: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    static_5_150A5948(rdram, ctx);
        return;
    }
    // 0x150A57DC: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x150A57E0: beq         $t0, $at, L_150A595C
    if (ctx->r8 == ctx->r1) {
        // 0x150A57E4: addiu       $at, $zero, -0x4
        ctx->r1 = ADD32(0, -0X4);
        // 0x150A57E4: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    static_5_150A595C(rdram, ctx);
        return;
    }
    // 0x150A57E4: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x150A57E8: beq         $t0, $at, L_150A5978
    if (ctx->r8 == ctx->r1) {
        // 0x150A57EC: addiu       $at, $zero, -0x3
        ctx->r1 = ADD32(0, -0X3);
        // 0x150A57EC: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    static_5_150A5978(rdram, ctx);
        return;
    }
    // 0x150A57EC: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x150A57F0: beq         $t0, $at, L_150A5994
    if (ctx->r8 == ctx->r1) {
        // 0x150A57F4: addiu       $at, $zero, -0x29
        ctx->r1 = ADD32(0, -0X29);
        // 0x150A57F4: addiu       $at, $zero, -0x29
    ctx->r1 = ADD32(0, -0X29);
    static_5_150A5994(rdram, ctx);
        return;
    }
    // 0x150A57F4: addiu       $at, $zero, -0x29
    ctx->r1 = ADD32(0, -0X29);
    // 0x150A57F8: beq         $t0, $at, L_150A5A20
    if (ctx->r8 == ctx->r1) {
        // 0x150A57FC: addiu       $at, $zero, -0x10
        ctx->r1 = ADD32(0, -0X10);
        // 0x150A57FC: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    static_5_150A5A20(rdram, ctx);
        return;
    }
    // 0x150A57FC: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x150A5800: beq         $t0, $at, L_150A5A40
    if (ctx->r8 == ctx->r1) {
        // 0x150A5804: addiu       $at, $zero, -0x19
        ctx->r1 = ADD32(0, -0X19);
        // 0x150A5804: addiu       $at, $zero, -0x19
    ctx->r1 = ADD32(0, -0X19);
    static_5_150A5A40(rdram, ctx);
        return;
    }
    // 0x150A5804: addiu       $at, $zero, -0x19
    ctx->r1 = ADD32(0, -0X19);
    // 0x150A5808: beq         $t0, $at, L_150A5708
    if (ctx->r8 == ctx->r1) {
        // 0x150A580C: addiu       $at, $zero, -0x1A
        ctx->r1 = ADD32(0, -0X1A);
            goto L_150A5708;
    }
    // 0x150A580C: addiu       $at, $zero, -0x1A
    ctx->r1 = ADD32(0, -0X1A);
    // 0x150A5810: beq         $t0, $at, L_150A5708
    if (ctx->r8 == ctx->r1) {
        // 0x150A5814: addiu       $at, $zero, -0x21
        ctx->r1 = ADD32(0, -0X21);
            goto L_150A5708;
    }
    // 0x150A5814: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x150A5818: beq         $t0, $at, L_150A5A48
    if (ctx->r8 == ctx->r1) {
        // 0x150A581C: ld          $t0, -0x8($a0)
        ctx->r8 = LD(ctx->r4, -0X8);
        // 0x150A581C: ld          $t0, -0x8($a0)
    ctx->r8 = LD(ctx->r4, -0X8);
    static_5_150A5A48(rdram, ctx);
        return;
    }
    // 0x150A581C: ld          $t0, -0x8($a0)
    ctx->r8 = LD(ctx->r4, -0X8);
    // 0x150A5820: j           L_150A5798
    // 0x150A5824: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    static_5_150A5798(rdram, ctx);
    return;
    // 0x150A5824: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
;}
RECOMP_FUNC void static_5_150A593C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A579C:
    // 0x150A593C: ld          $t6, -0x8($a0)
    ctx->r14 = LD(ctx->r4, -0X8);
    // 0x150A5940: j           L_150A579C
    // 0x150A5944: ori         $t4, $t4, 0x1
    ctx->r12 = ctx->r12 | 0X1;
    static_5_150A579C(rdram, ctx);
    return;
    // 0x150A5944: ori         $t4, $t4, 0x1
    ctx->r12 = ctx->r12 | 0X1;
;}
RECOMP_FUNC void static_5_150A5948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A579C:
    // 0x150A5948: ld          $t5, -0x8($a0)
    ctx->r13 = LD(ctx->r4, -0X8);
    // 0x150A594C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150A5950: addiu       $s7, $zero, 0x0
    ctx->r23 = ADD32(0, 0X0);
    // 0x150A5954: j           L_150A579C
    // 0x150A5958: ori         $t4, $t4, 0x2
    ctx->r12 = ctx->r12 | 0X2;
    static_5_150A579C(rdram, ctx);
    return;
    // 0x150A5958: ori         $t4, $t4, 0x2
    ctx->r12 = ctx->r12 | 0X2;
;}
RECOMP_FUNC void static_5_150A595C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A579C:
    // 0x150A595C: ld          $t9, -0x8($a0)
    ctx->r25 = LD(ctx->r4, -0X8);
    // 0x150A5960: ori         $t4, $t4, 0x20
    ctx->r12 = ctx->r12 | 0X20;
    // 0x150A5964: bne         $t9, $s2, L_150A579C
    if (ctx->r25 != ctx->r18) {
        // 0x150A5968: nop
    
        // 0x150A5968: nop

    static_5_150A579C(rdram, ctx);
        return;
    }
    // 0x150A5968: nop

    // 0x150A596C: addiu       $t9, $zero, 0x0
    ctx->r25 = ADD32(0, 0X0);
    // 0x150A5970: j           L_150A579C
    // 0x150A5974: xori        $t4, $t4, 0x20
    ctx->r12 = ctx->r12 ^ 0X20;
    static_5_150A579C(rdram, ctx);
    return;
    // 0x150A5974: xori        $t4, $t4, 0x20
    ctx->r12 = ctx->r12 ^ 0X20;
;}
RECOMP_FUNC void static_5_150A5978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A579C:
    // 0x150A5978: ld          $s3, -0x8($a0)
    ctx->r19 = LD(ctx->r4, -0X8);
    // 0x150A597C: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x150A5980: bne         $s3, $s4, L_150A579C
    if (ctx->r19 != ctx->r20) {
        // 0x150A5984: nop
    
        // 0x150A5984: nop

    static_5_150A579C(rdram, ctx);
        return;
    }
    // 0x150A5984: nop

    // 0x150A5988: addiu       $s3, $zero, 0x0
    ctx->r19 = ADD32(0, 0X0);
    // 0x150A598C: j           L_150A579C
    // 0x150A5990: xori        $t4, $t4, 0x40
    ctx->r12 = ctx->r12 ^ 0X40;
    static_5_150A579C(rdram, ctx);
    return;
    // 0x150A5990: xori        $t4, $t4, 0x40
    ctx->r12 = ctx->r12 ^ 0X40;
;}
RECOMP_FUNC void static_5_150A5994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A579C:
    // 0x150A5994: bne         $a2, $zero, L_150A59B0
    if (ctx->r6 != 0) {
        // 0x150A5998: nop
    
            goto L_150A59B0;
    }
    // 0x150A5998: nop

    // 0x150A599C: ld          $s5, -0x8($a0)
    ctx->r21 = LD(ctx->r4, -0X8);
    // 0x150A59A0: bne         $s5, $s6, L_150A579C
    if (ctx->r21 != ctx->r22) {
        // 0x150A59A4: nop
    
        // 0x150A59A4: nop

    static_5_150A579C(rdram, ctx);
        return;
    }
    // 0x150A59A4: nop

    // 0x150A59A8: j           L_150A579C
    // 0x150A59AC: addiu       $s5, $zero, 0x0
    ctx->r21 = ADD32(0, 0X0);
    static_5_150A579C(rdram, ctx);
    return;
    // 0x150A59AC: addiu       $s5, $zero, 0x0
    ctx->r21 = ADD32(0, 0X0);
L_150A59B0:
    // 0x150A59B0: j           L_150A579C
    // 0x150A59B4: ld          $a3, -0x8($a0)
    ctx->r7 = LD(ctx->r4, -0X8);
    static_5_150A579C(rdram, ctx);
    return;
    // 0x150A59B4: ld          $a3, -0x8($a0)
    ctx->r7 = LD(ctx->r4, -0X8);
;}

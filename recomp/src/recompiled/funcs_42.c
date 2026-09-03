#include <stdio.h>
#include <stdbool.h>
#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_150BA37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BA37C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150BA380: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x150BA384: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BA388: lwc1        $f4, -0x1D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1D4);
    // 0x150BA38C: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150BA390: lwc1        $f10, 0x114($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X114);
    // 0x150BA394: lwc1        $f18, 0x110($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X110);
    // 0x150BA398: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150BA39C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150BA3A0: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150BA3A4: lwc1        $f10, 0x34($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X34);
    // 0x150BA3A8: swc1        $f16, 0x114($a0)
    MEM_W(0X114, ctx->r4) = ctx->f16.u32l;
    // 0x150BA3AC: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150BA3B0: lwc1        $f16, 0x114($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X114);
    // 0x150BA3B4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150BA3B8: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x150BA3BC: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x150BA3C0: swc1        $f8, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f8.u32l;
    // 0x150BA3C4: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150BA3C8: lwc1        $f8, 0x118($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X118);
    // 0x150BA3CC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150BA3D0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150BA3D4: lwc1        $f10, 0x3C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x150BA3D8: swc1        $f6, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f6.u32l;
    // 0x150BA3DC: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150BA3E0: lwc1        $f6, 0x11C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X11C);
    // 0x150BA3E4: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x150BA3E8: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x150BA3EC: lwc1        $f10, 0x40($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X40);
    // 0x150BA3F0: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x150BA3F4: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150BA3F8: lwc1        $f4, 0x120($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X120);
    // 0x150BA3FC: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150BA400: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150BA404: lwc1        $f10, 0x44($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X44);
    // 0x150BA408: swc1        $f18, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f18.u32l;
    // 0x150BA40C: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150BA410: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150BA414: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150BA418: swc1        $f16, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f16.u32l;
    // 0x150BA41C: jr          $ra
    // 0x150BA420: nop

    return;
    return;
    // 0x150BA420: nop

;}
RECOMP_FUNC void func_151A743C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A743C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151A7440: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x151A7444: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151A7448: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151A744C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x151A7450: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x151A7454: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x151A7458: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x151A745C: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151A7460: lw          $t6, 0x174($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X174);
    // 0x151A7464: addiu       $v1, $a1, 0x170
    ctx->r3 = ADD32(ctx->r5, 0X170);
    // 0x151A7468: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151A746C: beq         $t6, $zero, L_151A7490
    if (ctx->r14 == 0) {
        // 0x151A7470: swc1        $f8, 0x3C($a1)
        MEM_W(0X3C, ctx->r5) = ctx->f8.u32l;
            goto L_151A7490;
    }
    // 0x151A7470: swc1        $f8, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f8.u32l;
    // 0x151A7474: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x151A7478: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x151A747C: jal         0x1516972C
    // 0x151A7480: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151A7480: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_0:
    // 0x151A7484: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x151A7488: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x151A748C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_151A7490:
    // 0x151A7490: addiu       $v1, $a1, 0x170
    ctx->r3 = ADD32(ctx->r5, 0X170);
    // 0x151A7494: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151A7498: lwc1        $f2, 0x48($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X48);
    // 0x151A749C: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x151A74A0: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x151A74A4: nop

    // 0x151A74A8: bc1fl       L_151A75B4
    if (!c1cs) {
        // 0x151A74AC: lwc1        $f0, 0x14($a1)
        ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
            goto L_151A75B4;
    }
    goto skip_0;
    // 0x151A74AC: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    skip_0:
    // 0x151A74B0: lw          $t7, 0x60($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X60);
    // 0x151A74B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151A74B8: lh          $t5, 0x64($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X64);
    // 0x151A74BC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x151A74C0: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x151A74C4: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x151A74C8: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x151A74CC: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x151A74D0: sw          $t8, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r24;
    // 0x151A74D4: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x151A74D8: sw          $t0, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r8;
    // 0x151A74DC: and         $t4, $t2, $at
    ctx->r12 = ctx->r10 & ctx->r1;
    // 0x151A74E0: sw          $t2, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r10;
    // 0x151A74E4: slti        $at, $t5, 0x21
    ctx->r1 = SIGNED(ctx->r13) < 0X21 ? 1 : 0;
    // 0x151A74E8: sw          $t4, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r12;
    // 0x151A74EC: swc1        $f0, 0x44($a1)
    MEM_W(0X44, ctx->r5) = ctx->f0.u32l;
    // 0x151A74F0: swc1        $f0, 0x48($a1)
    MEM_W(0X48, ctx->r5) = ctx->f0.u32l;
    // 0x151A74F4: bne         $at, $zero, L_151A7504
    if (ctx->r1 != 0) {
        // 0x151A74F8: swc1        $f0, 0x4C($a1)
        MEM_W(0X4C, ctx->r5) = ctx->f0.u32l;
            goto L_151A7504;
    }
    // 0x151A74F8: swc1        $f0, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = ctx->f0.u32l;
    // 0x151A74FC: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x151A7500: sh          $t6, 0x64($a1)
    MEM_H(0X64, ctx->r5) = ctx->r14;
L_151A7504:
    // 0x151A7504: lbu         $t7, 0x8($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X8);
    // 0x151A7508: beql        $t7, $zero, L_151A7600
    if (ctx->r15 == 0) {
        // 0x151A750C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151A7600;
    }
    goto skip_1;
    // 0x151A750C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x151A7510: lbu         $t8, 0x9($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X9);
    // 0x151A7514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151A7518: beql        $t8, $zero, L_151A7528
    if (ctx->r24 == 0) {
        // 0x151A751C: sw          $v1, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r3;
            goto L_151A7528;
    }
    goto skip_2;
    // 0x151A751C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    skip_2:
    // 0x151A7520: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151A7524: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
L_151A7528:
    // 0x151A7528: sb          $a0, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r4;
    // 0x151A752C: jal         0x150ADA20
    // 0x151A7530: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151A7530: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    after_1:
    // 0x151A7534: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x151A7538: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151A753C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151A7540: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151A7544: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x151A7548: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151A754C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151A7550: lwc1        $f0, 0x18($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X18);
    // 0x151A7554: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x151A7558: mfhi        $t9
    ctx->r25 = hi;
    // 0x151A755C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151A7560: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x151A7564: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151A7568: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151A756C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x151A7570: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x151A7574: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
    // 0x151A7578: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x151A757C: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151A7580: lwc1        $f14, 0x58($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151A7584: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x151A7588: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x151A758C: lh          $t1, 0xA($v1)
    ctx->r9 = MEM_H(ctx->r3, 0XA);
    // 0x151A7590: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x151A7594: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x151A7598: lh          $t2, 0xC($v1)
    ctx->r10 = MEM_H(ctx->r3, 0XC);
    // 0x151A759C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x151A75A0: jal         0x1514AB5C
    // 0x151A75A4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    func_1514AB5C(rdram, ctx);
        goto after_2;
    // 0x151A75A4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    after_2:
    // 0x151A75A8: b           L_151A7600
    // 0x151A75AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151A7600;
    // 0x151A75AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151A75B0: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
L_151A75B4:
    // 0x151A75B4: lwc1        $f6, 0x44($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X44);
    // 0x151A75B8: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    // 0x151A75BC: lwc1        $f18, 0x4C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4C);
    // 0x151A75C0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151A75C4: lwc1        $f6, 0x50($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X50);
    // 0x151A75C8: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151A75CC: lwc1        $f10, 0x54($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X54);
    // 0x151A75D0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151A75D4: swc1        $f8, 0x44($a1)
    MEM_W(0X44, ctx->r5) = ctx->f8.u32l;
    // 0x151A75D8: lwc1        $f18, 0x58($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X58);
    // 0x151A75DC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151A75E0: swc1        $f16, 0x48($a1)
    MEM_W(0X48, ctx->r5) = ctx->f16.u32l;
    // 0x151A75E4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151A75E8: swc1        $f4, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = ctx->f4.u32l;
    // 0x151A75EC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151A75F0: swc1        $f8, 0x50($a1)
    MEM_W(0X50, ctx->r5) = ctx->f8.u32l;
    // 0x151A75F4: swc1        $f16, 0x54($a1)
    MEM_W(0X54, ctx->r5) = ctx->f16.u32l;
    // 0x151A75F8: swc1        $f4, 0x58($a1)
    MEM_W(0X58, ctx->r5) = ctx->f4.u32l;
    // 0x151A75FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151A7600:
    // 0x151A7600: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151A7604: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x151A7608: jr          $ra
    // 0x151A760C: nop

    return;
    return;
    // 0x151A760C: nop

;}
RECOMP_FUNC void func_151D2E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D2E14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D2E18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D2E1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D2E20: jal         0x151D2DAC
    // 0x151D2E24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151D2DAC(rdram, ctx);
        goto after_0;
    // 0x151D2E24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151D2E28: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x151D2E2C: lw          $v0, 0x2C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X2C);
    // 0x151D2E30: beq         $v0, $zero, L_151D2E44
    if (ctx->r2 == 0) {
        // 0x151D2E34: nop
    
            goto L_151D2E44;
    }
    // 0x151D2E34: nop

    // 0x151D2E38: jal         0x1516979C
    // 0x151D2E3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_1516979C(rdram, ctx);
        goto after_1;
    // 0x151D2E3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x151D2E40: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_151D2E44:
    // 0x151D2E44: jal         0x15169824
    // 0x151D2E48: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_15169824(rdram, ctx);
        goto after_2;
    // 0x151D2E48: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x151D2E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D2E50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D2E54: jr          $ra
    // 0x151D2E58: nop

    return;
    return;
    // 0x151D2E58: nop

;}
RECOMP_FUNC void func_15128540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15128540: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15128544: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15128548: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1512854C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15128550: jal         0x151253CC
    // 0x15128554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151253CC(rdram, ctx);
        goto after_0;
    // 0x15128554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x15128558: beq         $v0, $zero, L_15128568
    if (ctx->r2 == 0) {
        // 0x1512855C: nop
    
            goto L_15128568;
    }
    // 0x1512855C: nop

    // 0x15128560: b           L_1512866C
    // 0x15128564: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1512866C;
    // 0x15128564: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15128568:
    // 0x15128568: jal         0x15128030
    // 0x1512856C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15128030(rdram, ctx);
        goto after_1;
    // 0x1512856C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x15128570: beql        $v0, $zero, L_15128584
    if (ctx->r2 == 0) {
        // 0x15128574: lw          $v0, 0x2C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X2C);
            goto L_15128584;
    }
    goto skip_0;
    // 0x15128574: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    skip_0:
    // 0x15128578: b           L_1512866C
    // 0x1512857C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1512866C;
    // 0x1512857C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15128580: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
L_15128584:
    // 0x15128584: sll         $t6, $v0, 12
    ctx->r14 = S32(ctx->r2 << 12);
    // 0x15128588: bgez        $t6, L_151285D0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1512858C: sll         $t9, $v0, 11
        ctx->r25 = S32(ctx->r2 << 11);
            goto L_151285D0;
    }
    // 0x1512858C: sll         $t9, $v0, 11
    ctx->r25 = S32(ctx->r2 << 11);
    // 0x15128590: jal         0x1512A360
    // 0x15128594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1512A360(rdram, ctx);
        goto after_2;
    // 0x15128594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x15128598: lw          $at, 0x2A4($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X2A4);
    // 0x1512859C: lw          $t8, 0x2A8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2A8);
    // 0x151285A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151285A4: sw          $at, 0x2BC($s0)
    MEM_W(0X2BC, ctx->r16) = ctx->r1;
    // 0x151285A8: lw          $at, 0x2AC($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X2AC);
    // 0x151285AC: sw          $t8, 0x2C0($s0)
    MEM_W(0X2C0, ctx->r16) = ctx->r24;
    // 0x151285B0: jal         0x151256BC
    // 0x151285B4: sw          $at, 0x2C4($s0)
    MEM_W(0X2C4, ctx->r16) = ctx->r1;
    func_151256BC(rdram, ctx);
        goto after_3;
    // 0x151285B4: sw          $at, 0x2C4($s0)
    MEM_W(0X2C4, ctx->r16) = ctx->r1;
    after_3:
    // 0x151285B8: jal         0x151236D0
    // 0x151285BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151236D0(rdram, ctx);
        goto after_4;
    // 0x151285BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x151285C0: jal         0x151284C4
    // 0x151285C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151284C4(rdram, ctx);
        goto after_5;
    // 0x151285C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x151285C8: b           L_1512866C
    // 0x151285CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1512866C;
    // 0x151285CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151285D0:
    // 0x151285D0: bgez        $t9, L_151285F8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x151285D4: sll         $t0, $v0, 10
        ctx->r8 = S32(ctx->r2 << 10);
            goto L_151285F8;
    }
    // 0x151285D4: sll         $t0, $v0, 10
    ctx->r8 = S32(ctx->r2 << 10);
    // 0x151285D8: jal         0x1512E4B0
    // 0x151285DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1512E4B0(rdram, ctx);
        goto after_6;
    // 0x151285DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x151285E0: jal         0x151236D0
    // 0x151285E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151236D0(rdram, ctx);
        goto after_7;
    // 0x151285E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x151285E8: jal         0x151284C4
    // 0x151285EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151284C4(rdram, ctx);
        goto after_8;
    // 0x151285EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x151285F0: b           L_1512866C
    // 0x151285F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1512866C;
    // 0x151285F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151285F8:
    // 0x151285F8: bgez        $t0, L_15128620
    if (SIGNED(ctx->r8) >= 0) {
        // 0x151285FC: sll         $t1, $v0, 9
        ctx->r9 = S32(ctx->r2 << 9);
            goto L_15128620;
    }
    // 0x151285FC: sll         $t1, $v0, 9
    ctx->r9 = S32(ctx->r2 << 9);
    // 0x15128600: jal         0x151219D0
    // 0x15128604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151219D0(rdram, ctx);
        goto after_9;
    // 0x15128604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x15128608: jal         0x151236D0
    // 0x1512860C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151236D0(rdram, ctx);
        goto after_10;
    // 0x1512860C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x15128610: jal         0x151284C4
    // 0x15128614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151284C4(rdram, ctx);
        goto after_11;
    // 0x15128614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x15128618: b           L_1512866C
    // 0x1512861C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1512866C;
    // 0x1512861C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15128620:
    // 0x15128620: bgez        $t1, L_15128648
    if (SIGNED(ctx->r9) >= 0) {
        // 0x15128624: nop
    
            goto L_15128648;
    }
    // 0x15128624: nop

    // 0x15128628: jal         0x1512D380
    // 0x1512862C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1512D380(rdram, ctx);
        goto after_12;
    // 0x1512862C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x15128630: jal         0x151236D0
    // 0x15128634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151236D0(rdram, ctx);
        goto after_13;
    // 0x15128634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x15128638: jal         0x151284C4
    // 0x1512863C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151284C4(rdram, ctx);
        goto after_14;
    // 0x1512863C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x15128640: b           L_1512866C
    // 0x15128644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1512866C;
    // 0x15128644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15128648:
    // 0x15128648: jal         0x15126378
    // 0x1512864C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15126378(rdram, ctx);
        goto after_15;
    // 0x1512864C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x15128650: beql        $v0, $zero, L_1512866C
    if (ctx->r2 == 0) {
        // 0x15128654: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1512866C;
    }
    goto skip_1;
    // 0x15128654: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x15128658: jal         0x151284C4
    // 0x1512865C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151284C4(rdram, ctx);
        goto after_16;
    // 0x1512865C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x15128660: b           L_1512866C
    // 0x15128664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1512866C;
    // 0x15128664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15128668: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1512866C:
    // 0x1512866C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15128670: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15128674: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15128678: jr          $ra
    // 0x1512867C: nop

    return;
    return;
    // 0x1512867C: nop

;}
RECOMP_FUNC void func_15169040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15169040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15169044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15169048: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1516904C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15169050: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x15169054: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15169058: jal         0x15169070
    // 0x1516905C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    func_15169070(rdram, ctx);
        goto after_0;
    // 0x1516905C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    after_0:
    // 0x15169060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15169064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15169068: jr          $ra
    // 0x1516906C: nop

    return;
    return;
    // 0x1516906C: nop

;}
RECOMP_FUNC void func_151ACBD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151ACBD4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151ACBD8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x151ACBDC: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x151ACBE0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x151ACBE4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151ACBE8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x151ACBEC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151ACBF0: addiu       $s3, $s3, -0x1610
    ctx->r19 = ADD32(ctx->r19, -0X1610);
    // 0x151ACBF4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151ACBF8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x151ACBFC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x151ACC00: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x151ACC04: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x151ACC08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151ACC0C: bne         $t6, $at, L_151ACC1C
    if (ctx->r14 != ctx->r1) {
        // 0x151ACC10: addiu       $a2, $s0, 0x58
        ctx->r6 = ADD32(ctx->r16, 0X58);
            goto L_151ACC1C;
    }
    // 0x151ACC10: addiu       $a2, $s0, 0x58
    ctx->r6 = ADD32(ctx->r16, 0X58);
    // 0x151ACC14: b           L_151ACC20
    // 0x151ACC18: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
        goto L_151ACC20;
    // 0x151ACC18: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
L_151ACC1C:
    // 0x151ACC1C: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
L_151ACC20:
    // 0x151ACC20: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151ACC24: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151ACC28: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151ACC2C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151ACC30: jal         0x15167A68
    // 0x151ACC34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x151ACC34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x151ACC38: bne         $v0, $zero, L_151ACC48
    if (ctx->r2 != 0) {
        // 0x151ACC3C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151ACC48;
    }
    // 0x151ACC3C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151ACC40: b           L_151AD154
    // 0x151ACC44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151AD154;
    // 0x151ACC44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151ACC48:
    // 0x151ACC48: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
    // 0x151ACC4C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151ACC50: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x151ACC54: jal         0x10022EC0
    // 0x151ACC58: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151ACC58: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_1:
    // 0x151ACC5C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x151ACC60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151ACC64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151ACC68: lwc1        $f6, 0x2C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x151ACC6C: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    // 0x151ACC70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151ACC74: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151ACC78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151ACC7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151ACC80: sw          $zero, 0x44($v1)
    MEM_W(0X44, ctx->r3) = 0;
    // 0x151ACC84: sh          $zero, 0x52($v1)
    MEM_H(0X52, ctx->r3) = 0;
    // 0x151ACC88: jal         0x10003C40
    // 0x151ACC8C: swc1        $f8, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f8.u32l;
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x151ACC8C: swc1        $f8, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f8.u32l;
    after_2:
    // 0x151ACC90: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x151ACC94: addiu       $s2, $zero, 0x14
    ctx->r18 = ADD32(0, 0X14);
    // 0x151ACC98: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x151ACC9C: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x151ACCA0: lwc1        $f6, 0x18($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X18);
    // 0x151ACCA4: lwc1        $f18, 0x1C($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x151ACCA8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151ACCAC: lwc1        $f10, 0x24($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X24);
    // 0x151ACCB0: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x151ACCB4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151ACCB8: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x151ACCBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151ACCC0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151ACCC4: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x151ACCC8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x151ACCCC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151ACCD0: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x151ACCD4: sb          $s2, 0x42($v1)
    MEM_B(0X42, ctx->r3) = ctx->r18;
    // 0x151ACCD8: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x151ACCDC: b           L_151ACD68
    // 0x151ACCE0: subu        $a2, $t1, $t0
    ctx->r6 = SUB32(ctx->r9, ctx->r8);
        goto L_151ACD68;
    // 0x151ACCE0: subu        $a2, $t1, $t0
    ctx->r6 = SUB32(ctx->r9, ctx->r8);
    // 0x151ACCE4: div         $zero, $zero, $a1
    lo = S32(S64(S32(0)) / S64(S32(ctx->r5))); hi = S32(S64(S32(0)) % S64(S32(ctx->r5)));
    // 0x151ACCE8: mtc1        $a3, $f18
    ctx->f18.u32l = ctx->r7;
    // 0x151ACCEC: mflo        $t6
    ctx->r14 = lo;
    // 0x151ACCF0: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x151ACCF4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151ACCF8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x151ACCFC: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x151ACD00: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x151ACD04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151ACD08: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151ACD0C: swc1        $f4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f4.u32l;
    // 0x151ACD10: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x151ACD14: bne         $a1, $zero, L_151ACD20
    if (ctx->r5 != 0) {
        // 0x151ACD18: nop
    
            goto L_151ACD20;
    }
    // 0x151ACD18: nop

    // 0x151ACD1C: break       7
    do_break(354077980);
L_151ACD20:
    // 0x151ACD20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151ACD24: bne         $a1, $at, L_151ACD38
    if (ctx->r5 != ctx->r1) {
        // 0x151ACD28: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151ACD38;
    }
    // 0x151ACD28: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151ACD2C: bne         $zero, $at, L_151ACD38
    if (0 != ctx->r1) {
        // 0x151ACD30: nop
    
            goto L_151ACD38;
    }
    // 0x151ACD30: nop

    // 0x151ACD34: break       6
    do_break(354078004);
L_151ACD38:
    // 0x151ACD38: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151ACD3C: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
    // 0x151ACD40: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x151ACD44: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151ACD48: swc1        $f16, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f16.u32l;
    // 0x151ACD4C: lw          $t6, 0x38($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X38);
    // 0x151ACD50: swc1        $f0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f0.u32l;
    // 0x151ACD54: lw          $t7, 0x38($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X38);
    // 0x151ACD58: swc1        $f0, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f0.u32l;
    // 0x151ACD5C: lw          $t8, 0x38($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X38);
    // 0x151ACD60: beq         $t2, $s2, L_151ACEC4
    if (ctx->r10 == ctx->r18) {
        // 0x151ACD64: swc1        $f0, 0x14($t8)
        MEM_W(0X14, ctx->r24) = ctx->f0.u32l;
            goto L_151ACEC4;
    }
    // 0x151ACD64: swc1        $f0, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f0.u32l;
L_151ACD68:
    // 0x151ACD68: multu       $a2, $t2
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151ACD6C: mtc1        $a3, $f18
    ctx->f18.u32l = ctx->r7;
    // 0x151ACD70: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x151ACD74: sll         $v0, $t2, 2
    ctx->r2 = S32(ctx->r10 << 2);
    // 0x151ACD78: subu        $v0, $v0, $t2
    ctx->r2 = SUB32(ctx->r2, ctx->r10);
    // 0x151ACD7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151ACD80: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x151ACD84: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x151ACD88: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151ACD8C: mflo        $a0
    ctx->r4 = lo;
    // 0x151ACD90: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151ACD94: nop

L_151ACD98:
    // 0x151ACD98: div         $zero, $a0, $a1
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r5)));
    // 0x151ACD9C: mflo        $t7
    ctx->r15 = lo;
    // 0x151ACDA0: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x151ACDA4: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x151ACDA8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x151ACDAC: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x151ACDB0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151ACDB4: swc1        $f2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f2.u32l;
    // 0x151ACDB8: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x151ACDBC: bne         $a1, $zero, L_151ACDC8
    if (ctx->r5 != 0) {
        // 0x151ACDC0: nop
    
            goto L_151ACDC8;
    }
    // 0x151ACDC0: nop

    // 0x151ACDC4: break       7
    do_break(354078148);
L_151ACDC8:
    // 0x151ACDC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151ACDCC: bne         $a1, $at, L_151ACDE0
    if (ctx->r5 != ctx->r1) {
        // 0x151ACDD0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151ACDE0;
    }
    // 0x151ACDD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151ACDD4: bne         $a0, $at, L_151ACDE0
    if (ctx->r4 != ctx->r1) {
        // 0x151ACDD8: nop
    
            goto L_151ACDE0;
    }
    // 0x151ACDD8: nop

    // 0x151ACDDC: break       6
    do_break(354078172);
L_151ACDE0:
    // 0x151ACDE0: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x151ACDE4: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
    // 0x151ACDE8: lw          $t7, 0x38($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X38);
    // 0x151ACDEC: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x151ACDF0: swc1        $f12, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f12.u32l;
    // 0x151ACDF4: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x151ACDF8: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x151ACDFC: swc1        $f0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f0.u32l;
    // 0x151ACE00: lw          $t7, 0x38($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X38);
    // 0x151ACE04: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x151ACE08: swc1        $f0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f0.u32l;
    // 0x151ACE0C: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x151ACE10: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x151ACE14: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x151ACE18: multu       $a2, $t9
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151ACE1C: swc1        $f0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f0.u32l;
    // 0x151ACE20: lw          $t7, 0x38($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X38);
    // 0x151ACE24: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x151ACE28: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x151ACE2C: swc1        $f2, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f2.u32l;
    // 0x151ACE30: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x151ACE34: mflo        $t6
    ctx->r14 = lo;
    // 0x151ACE38: nop

    // 0x151ACE3C: nop

    // 0x151ACE40: div         $zero, $t6, $a1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r5)));
    // 0x151ACE44: mflo        $t7
    ctx->r15 = lo;
    // 0x151ACE48: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x151ACE4C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x151ACE50: bne         $a1, $zero, L_151ACE5C
    if (ctx->r5 != 0) {
        // 0x151ACE54: nop
    
            goto L_151ACE5C;
    }
    // 0x151ACE54: nop

    // 0x151ACE58: break       7
    do_break(354078296);
L_151ACE5C:
    // 0x151ACE5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151ACE60: bne         $a1, $at, L_151ACE74
    if (ctx->r5 != ctx->r1) {
        // 0x151ACE64: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151ACE74;
    }
    // 0x151ACE64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151ACE68: bne         $t6, $at, L_151ACE74
    if (ctx->r14 != ctx->r1) {
        // 0x151ACE6C: nop
    
            goto L_151ACE74;
    }
    // 0x151ACE6C: nop

    // 0x151ACE70: break       6
    do_break(354078320);
L_151ACE74:
    // 0x151ACE74: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151ACE78: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x151ACE7C: swc1        $f16, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f16.u32l;
    // 0x151ACE80: lw          $t7, 0x38($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X38);
    // 0x151ACE84: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x151ACE88: swc1        $f12, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f12.u32l;
    // 0x151ACE8C: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x151ACE90: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x151ACE94: swc1        $f0, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f0.u32l;
    // 0x151ACE98: lw          $t7, 0x38($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X38);
    // 0x151ACE9C: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x151ACEA0: swc1        $f0, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f0.u32l;
    // 0x151ACEA4: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x151ACEA8: subu        $t7, $t1, $t0
    ctx->r15 = SUB32(ctx->r9, ctx->r8);
    // 0x151ACEAC: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x151ACEB0: addu        $t6, $t9, $v0
    ctx->r14 = ADD32(ctx->r25, ctx->r2);
    // 0x151ACEB4: swc1        $f0, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f0.u32l;
    // 0x151ACEB8: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x151ACEBC: bne         $t2, $s2, L_151ACD98
    if (ctx->r10 != ctx->r18) {
        // 0x151ACEC0: addu        $a0, $a0, $t8
        ctx->r4 = ADD32(ctx->r4, ctx->r24);
            goto L_151ACD98;
    }
    // 0x151ACEC0: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
L_151ACEC4:
    // 0x151ACEC4: subu        $t9, $t1, $t0
    ctx->r25 = SUB32(ctx->r9, ctx->r8);
    // 0x151ACEC8: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x151ACECC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x151ACED0: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x151ACED4: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    // 0x151ACED8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151ACEDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151ACEE0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x151ACEE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151ACEE8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151ACEEC: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x151ACEF0: swc1        $f10, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f10.u32l;
    // 0x151ACEF4: jal         0x10003C40
    // 0x151ACEF8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    allocate_memory(rdram, ctx);
        goto after_3;
    // 0x151ACEF8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_3:
    // 0x151ACEFC: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x151ACF00: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x151ACF04: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151ACF08: sw          $v0, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r2;
    // 0x151ACF0C: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x151ACF10: addiu       $t9, $zero, 0x36
    ctx->r25 = ADD32(0, 0X36);
    // 0x151ACF14: addiu       $s0, $zero, 0x2000
    ctx->r16 = ADD32(0, 0X2000);
    // 0x151ACF18: bne         $t7, $at, L_151ACF30
    if (ctx->r15 != ctx->r1) {
        // 0x151ACF1C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_151ACF30;
    }
    // 0x151ACF1C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151ACF20: addiu       $t8, $zero, 0x37
    ctx->r24 = ADD32(0, 0X37);
    // 0x151ACF24: sh          $t8, 0x40($v1)
    MEM_H(0X40, ctx->r3) = ctx->r24;
    // 0x151ACF28: b           L_151ACF38
    // 0x151ACF2C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
        goto L_151ACF38;
    // 0x151ACF2C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_151ACF30:
    // 0x151ACF30: sh          $t9, 0x40($v1)
    MEM_H(0X40, ctx->r3) = ctx->r25;
    // 0x151ACF34: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_151ACF38:
    // 0x151ACF38: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x151ACF3C: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x151ACF40: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151ACF44: bne         $t6, $at, L_151ACF5C
    if (ctx->r14 != ctx->r1) {
        // 0x151ACF48: addiu       $t0, $zero, 0xFF
        ctx->r8 = ADD32(0, 0XFF);
            goto L_151ACF5C;
    }
    // 0x151ACF48: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151ACF4C: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    // 0x151ACF50: addiu       $t0, $zero, 0x4B
    ctx->r8 = ADD32(0, 0X4B);
    // 0x151ACF54: b           L_151ACF60
    // 0x151ACF58: addiu       $t1, $zero, 0x2C
    ctx->r9 = ADD32(0, 0X2C);
        goto L_151ACF60;
    // 0x151ACF58: addiu       $t1, $zero, 0x2C
    ctx->r9 = ADD32(0, 0X2C);
L_151ACF5C:
    // 0x151ACF5C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
L_151ACF60:
    // 0x151ACF60: lhu         $t7, 0x40($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X40);
    // 0x151ACF64: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151ACF68: addiu       $t9, $t9, 0xB60
    ctx->r25 = ADD32(ctx->r25, 0XB60);
    // 0x151ACF6C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151ACF70: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x151ACF74: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151ACF78: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x151ACF7C: lhu         $s4, 0x6($v0)
    ctx->r20 = MEM_HU(ctx->r2, 0X6);
    // 0x151ACF80: lhu         $ra, 0x8($v0)
    ctx->r31 = MEM_HU(ctx->r2, 0X8);
    // 0x151ACF84: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x151ACF88: sra         $t6, $s4, 2
    ctx->r14 = S32(SIGNED(ctx->r20) >> 2);
    // 0x151ACF8C: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x151ACF90: addiu       $ra, $ra, -0x1
    ctx->r31 = ADD32(ctx->r31, -0X1);
    // 0x151ACF94: sll         $t5, $s4, 2
    ctx->r13 = S32(ctx->r20 << 2);
L_151ACF98:
    // 0x151ACF98: subu        $t5, $t5, $s4
    ctx->r13 = SUB32(ctx->r13, ctx->r20);
    // 0x151ACF9C: sll         $t4, $s4, 1
    ctx->r12 = S32(ctx->r20 << 1);
    // 0x151ACFA0: addiu       $t4, $t4, 0x100
    ctx->r12 = ADD32(ctx->r12, 0X100);
    // 0x151ACFA4: addiu       $t5, $t5, 0x100
    ctx->r13 = ADD32(ctx->r13, 0X100);
    // 0x151ACFA8: addiu       $t3, $s4, 0x100
    ctx->r11 = ADD32(ctx->r20, 0X100);
    // 0x151ACFAC: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x151ACFB0: addu        $t6, $v0, $s3
    ctx->r14 = ADD32(ctx->r2, ctx->r19);
    // 0x151ACFB4: sll         $t7, $t3, 5
    ctx->r15 = S32(ctx->r11 << 5);
    // 0x151ACFB8: sll         $t9, $t5, 5
    ctx->r25 = S32(ctx->r13 << 5);
    // 0x151ACFBC: sll         $t8, $t4, 5
    ctx->r24 = S32(ctx->r12 << 5);
    // 0x151ACFC0: or          $t4, $t8, $zero
    ctx->r12 = ctx->r24 | 0;
    // 0x151ACFC4: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x151ACFC8: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
    // 0x151ACFCC: sll         $v0, $t6, 8
    ctx->r2 = S32(ctx->r14 << 8);
    // 0x151ACFD0: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x151ACFD4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
L_151ACFD8:
    // 0x151ACFD8: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151ACFDC: sllv        $a0, $a1, $s1
    ctx->r4 = S32(ctx->r5 << (ctx->r17 & 31));
    // 0x151ACFE0: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x151ACFE4: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151ACFE8: sh          $zero, 0x6($t9)
    MEM_H(0X6, ctx->r25) = 0;
    // 0x151ACFEC: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151ACFF0: addu        $a1, $a1, $ra
    ctx->r5 = ADD32(ctx->r5, ctx->r31);
    // 0x151ACFF4: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151ACFF8: sh          $s0, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r16;
    // 0x151ACFFC: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151AD000: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151AD004: sh          $a0, 0xA($t9)
    MEM_H(0XA, ctx->r25) = ctx->r4;
    // 0x151AD008: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151AD00C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151AD010: sb          $a3, 0xC($t7)
    MEM_B(0XC, ctx->r15) = ctx->r7;
    // 0x151AD014: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151AD018: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151AD01C: sb          $t0, 0xD($t9)
    MEM_B(0XD, ctx->r25) = ctx->r8;
    // 0x151AD020: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151AD024: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151AD028: sb          $t1, 0xE($t7)
    MEM_B(0XE, ctx->r15) = ctx->r9;
    // 0x151AD02C: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151AD030: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151AD034: sb          $a2, 0xF($t9)
    MEM_B(0XF, ctx->r25) = ctx->r6;
    // 0x151AD038: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151AD03C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151AD040: sh          $zero, 0x16($t7)
    MEM_H(0X16, ctx->r15) = 0;
    // 0x151AD044: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151AD048: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151AD04C: sh          $t3, 0x18($t9)
    MEM_H(0X18, ctx->r25) = ctx->r11;
    // 0x151AD050: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151AD054: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151AD058: sh          $a0, 0x1A($t7)
    MEM_H(0X1A, ctx->r15) = ctx->r4;
    // 0x151AD05C: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151AD060: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151AD064: sb          $a3, 0x1C($t9)
    MEM_B(0X1C, ctx->r25) = ctx->r7;
    // 0x151AD068: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151AD06C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151AD070: sb          $t0, 0x1D($t7)
    MEM_B(0X1D, ctx->r15) = ctx->r8;
    // 0x151AD074: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151AD078: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151AD07C: sb          $t1, 0x1E($t9)
    MEM_B(0X1E, ctx->r25) = ctx->r9;
    // 0x151AD080: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151AD084: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151AD088: sb          $a2, 0x1F($t7)
    MEM_B(0X1F, ctx->r15) = ctx->r6;
    // 0x151AD08C: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151AD090: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151AD094: sh          $zero, 0x26($t9)
    MEM_H(0X26, ctx->r25) = 0;
    // 0x151AD098: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151AD09C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151AD0A0: sh          $t4, 0x28($t7)
    MEM_H(0X28, ctx->r15) = ctx->r12;
    // 0x151AD0A4: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151AD0A8: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151AD0AC: sh          $a0, 0x2A($t9)
    MEM_H(0X2A, ctx->r25) = ctx->r4;
    // 0x151AD0B0: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151AD0B4: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151AD0B8: sb          $a3, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r7;
    // 0x151AD0BC: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151AD0C0: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151AD0C4: sb          $t0, 0x2D($t9)
    MEM_B(0X2D, ctx->r25) = ctx->r8;
    // 0x151AD0C8: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151AD0CC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151AD0D0: sb          $t1, 0x2E($t7)
    MEM_B(0X2E, ctx->r15) = ctx->r9;
    // 0x151AD0D4: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151AD0D8: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151AD0DC: sb          $a2, 0x2F($t9)
    MEM_B(0X2F, ctx->r25) = ctx->r6;
    // 0x151AD0E0: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151AD0E4: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151AD0E8: sh          $zero, 0x36($t7)
    MEM_H(0X36, ctx->r15) = 0;
    // 0x151AD0EC: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151AD0F0: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151AD0F4: sh          $t5, 0x38($t9)
    MEM_H(0X38, ctx->r25) = ctx->r13;
    // 0x151AD0F8: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151AD0FC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151AD100: sh          $a0, 0x3A($t7)
    MEM_H(0X3A, ctx->r15) = ctx->r4;
    // 0x151AD104: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151AD108: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151AD10C: sb          $a3, 0x3C($t9)
    MEM_B(0X3C, ctx->r25) = ctx->r7;
    // 0x151AD110: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151AD114: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151AD118: sb          $t0, 0x3D($t7)
    MEM_B(0X3D, ctx->r15) = ctx->r8;
    // 0x151AD11C: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x151AD120: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151AD124: sb          $t1, 0x3E($t9)
    MEM_B(0X3E, ctx->r25) = ctx->r9;
    // 0x151AD128: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x151AD12C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x151AD130: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x151AD134: bne         $t2, $s2, L_151ACFD8
    if (ctx->r10 != ctx->r18) {
        // 0x151AD138: sb          $a2, 0x3F($t7)
        MEM_B(0X3F, ctx->r15) = ctx->r6;
            goto L_151ACFD8;
    }
    // 0x151AD138: sb          $a2, 0x3F($t7)
    MEM_B(0X3F, ctx->r15) = ctx->r6;
    // 0x151AD13C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x151AD140: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151AD144: bnel        $s3, $at, L_151ACF98
    if (ctx->r19 != ctx->r1) {
        // 0x151AD148: sll         $t5, $s4, 2
        ctx->r13 = S32(ctx->r20 << 2);
            goto L_151ACF98;
    }
    goto skip_0;
    // 0x151AD148: sll         $t5, $s4, 2
    ctx->r13 = S32(ctx->r20 << 2);
    skip_0:
    // 0x151AD14C: swc1        $f16, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->f16.u32l;
    // 0x151AD150: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151AD154:
    // 0x151AD154: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151AD158: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151AD15C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x151AD160: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x151AD164: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x151AD168: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x151AD16C: jr          $ra
    // 0x151AD170: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x151AD170: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_1509DF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509DF20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1509DF24: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x1509DF28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1509DF2C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1509DF30: bne         $t6, $at, L_1509DFAC
    if (ctx->r14 != ctx->r1) {
        // 0x1509DF34: nop
    
            goto L_1509DFAC;
    }
    // 0x1509DF34: nop

    // 0x1509DF38: lw          $t7, 0x3840($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3840);
    // 0x1509DF3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1509DF40: bne         $t7, $at, L_1509DFAC
    if (ctx->r15 != ctx->r1) {
        // 0x1509DF44: nop
    
            goto L_1509DFAC;
    }
    // 0x1509DF44: nop

    // 0x1509DF48: lw          $t8, 0xC($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XC);
    // 0x1509DF4C: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x1509DF50: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1509DF54: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1509DF58: lw          $t9, 0x8($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X8);
    // 0x1509DF5C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509DF60: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1509DF64: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1509DF68: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x1509DF6C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1509DF70: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1509DF74: swc1        $f8, 0x2FC0($at)
    MEM_W(0X2FC0, ctx->r1) = ctx->f8.u32l;
    // 0x1509DF78: lw          $t1, 0xC($a1)
    ctx->r9 = MEM_W(ctx->r5, 0XC);
    // 0x1509DF7C: lw          $t2, 0x8($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X8);
    // 0x1509DF80: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509DF84: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x1509DF88: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x1509DF8C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x1509DF90: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1509DF94: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1509DF98: swc1        $f18, 0x2FD8($at)
    MEM_W(0X2FD8, ctx->r1) = ctx->f18.u32l;
    // 0x1509DF9C: lw          $t5, 0x8($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X8);
    // 0x1509DFA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509DFA4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x1509DFA8: sb          $t4, 0x2FEC($at)
    MEM_B(0X2FEC, ctx->r1) = ctx->r12;
L_1509DFAC:
    // 0x1509DFAC: jr          $ra
    // 0x1509DFB0: nop

    return;
    return;
    // 0x1509DFB0: nop

;}
RECOMP_FUNC void func_1515728C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515728C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15157290: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15157294: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15157298: jal         0x151571C4
    // 0x1515729C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151571C4(rdram, ctx);
        goto after_0;
    // 0x1515729C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151572A0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x151572A4: jal         0x1518CA04
    // 0x151572A8: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    func_1518CA04(rdram, ctx);
        goto after_1;
    // 0x151572A8: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    after_1:
    // 0x151572AC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x151572B0: jal         0x1503F7B8
    // 0x151572B4: lw          $a0, 0x68($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X68);
    func_1503F7B8(rdram, ctx);
        goto after_2;
    // 0x151572B4: lw          $a0, 0x68($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X68);
    after_2:
    // 0x151572B8: jal         0x15169824
    // 0x151572BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169824(rdram, ctx);
        goto after_3;
    // 0x151572BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x151572C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151572C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151572C8: jr          $ra
    // 0x151572CC: nop

    return;
    return;
    // 0x151572CC: nop

;}
RECOMP_FUNC void func_15059B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15059B54: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15059B58: lhu         $v1, 0x76($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X76);
    // 0x15059B5C: lhu         $t6, 0x78($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X78);
    // 0x15059B60: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15059B64: subu        $v0, $t6, $v1
    ctx->r2 = SUB32(ctx->r14, ctx->r3);
    // 0x15059B68: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x15059B6C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15059B70: sll         $a2, $t8, 16
    ctx->r6 = S32(ctx->r24 << 16);
    // 0x15059B74: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x15059B78: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x15059B7C: bgez        $t8, L_15059B90
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15059B80: or          $a2, $t9, $zero
        ctx->r6 = ctx->r25 | 0;
            goto L_15059B90;
    }
    // 0x15059B80: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x15059B84: xori        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 ^ 0XFFFF;
    // 0x15059B88: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x15059B8C: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
L_15059B90:
    // 0x15059B90: lhu         $a1, 0x1EA($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X1EA);
    // 0x15059B94: lhu         $t3, 0x6($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X6);
    // 0x15059B98: beql        $a1, $zero, L_15059C0C
    if (ctx->r5 == 0) {
        // 0x15059B9C: sll         $a1, $v0, 16
        ctx->r5 = S32(ctx->r2 << 16);
            goto L_15059C0C;
    }
    goto skip_0;
    // 0x15059B9C: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    skip_0:
    // 0x15059BA0: lh          $t5, -0x3D9C($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X3D9C);
    // 0x15059BA4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x15059BA8: lhu         $t1, 0x1EC($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X1EC);
    // 0x15059BAC: multu       $a1, $t5
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15059BB0: mflo        $a3
    ctx->r7 = lo;
    // 0x15059BB4: nop

    // 0x15059BB8: nop

    // 0x15059BBC: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x15059BC0: mflo        $t6
    ctx->r14 = lo;
    // 0x15059BC4: addu        $t0, $t1, $t6
    ctx->r8 = ADD32(ctx->r9, ctx->r14);
    // 0x15059BC8: sll         $t7, $t0, 16
    ctx->r15 = S32(ctx->r8 << 16);
    // 0x15059BCC: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15059BD0: subu        $t2, $t1, $t6
    ctx->r10 = SUB32(ctx->r9, ctx->r14);
    // 0x15059BD4: sll         $t9, $t2, 16
    ctx->r25 = S32(ctx->r10 << 16);
    // 0x15059BD8: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15059BDC: beq         $at, $zero, L_15059BF0
    if (ctx->r1 == 0) {
        // 0x15059BE0: sra         $t2, $t9, 16
        ctx->r10 = S32(SIGNED(ctx->r25) >> 16);
            goto L_15059BF0;
    }
    // 0x15059BE0: sra         $t2, $t9, 16
    ctx->r10 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15059BE4: sll         $v0, $t8, 16
    ctx->r2 = S32(ctx->r24 << 16);
    // 0x15059BE8: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15059BEC: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_15059BF0:
    // 0x15059BF0: slt         $at, $v0, $t2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x15059BF4: beql        $at, $zero, L_15059C0C
    if (ctx->r1 == 0) {
        // 0x15059BF8: sll         $a1, $v0, 16
        ctx->r5 = S32(ctx->r2 << 16);
            goto L_15059C0C;
    }
    goto skip_1;
    // 0x15059BF8: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    skip_1:
    // 0x15059BFC: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x15059C00: sra         $t5, $v0, 16
    ctx->r13 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15059C04: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x15059C08: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
L_15059C0C:
    // 0x15059C0C: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x15059C10: bgez        $v0, L_15059C24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15059C14: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_15059C24;
    }
    // 0x15059C14: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15059C18: xori        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 ^ 0XFFFF;
    // 0x15059C1C: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x15059C20: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
L_15059C24:
    // 0x15059C24: slt         $at, $v0, $t3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x15059C28: beql        $at, $zero, L_15059C38
    if (ctx->r1 == 0) {
        // 0x15059C2C: lw          $t4, 0xF4($a0)
        ctx->r12 = MEM_W(ctx->r4, 0XF4);
            goto L_15059C38;
    }
    goto skip_2;
    // 0x15059C2C: lw          $t4, 0xF4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XF4);
    skip_2:
    // 0x15059C30: sh          $v0, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r2;
    // 0x15059C34: lw          $t4, 0xF4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XF4);
L_15059C38:
    // 0x15059C38: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x15059C3C: bnel        $t5, $zero, L_15059C74
    if (ctx->r13 != 0) {
        // 0x15059C40: sra         $v0, $a2, 8
        ctx->r2 = S32(SIGNED(ctx->r6) >> 8);
            goto L_15059C74;
    }
    goto skip_3;
    // 0x15059C40: sra         $v0, $a2, 8
    ctx->r2 = S32(SIGNED(ctx->r6) >> 8);
    skip_3:
    // 0x15059C44: bgez        $a1, L_15059C60
    if (SIGNED(ctx->r5) >= 0) {
        // 0x15059C48: lhu         $v0, 0x6($sp)
        ctx->r2 = MEM_HU(ctx->r29, 0X6);
            goto L_15059C60;
    }
    // 0x15059C48: lhu         $v0, 0x6($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X6);
    // 0x15059C4C: subu        $t6, $v1, $v0
    ctx->r14 = SUB32(ctx->r3, ctx->r2);
    // 0x15059C50: negu        $t7, $v0
    ctx->r15 = SUB32(0, ctx->r2);
    // 0x15059C54: sh          $t6, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r14;
    // 0x15059C58: b           L_15059C70
    // 0x15059C5C: sh          $t7, 0x1EC($a0)
    MEM_H(0X1EC, ctx->r4) = ctx->r15;
        goto L_15059C70;
    // 0x15059C5C: sh          $t7, 0x1EC($a0)
    MEM_H(0X1EC, ctx->r4) = ctx->r15;
L_15059C60:
    // 0x15059C60: addu        $t8, $v1, $v0
    ctx->r24 = ADD32(ctx->r3, ctx->r2);
    // 0x15059C64: sh          $t8, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r24;
    // 0x15059C68: lhu         $t9, 0x6($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X6);
    // 0x15059C6C: sh          $t9, 0x1EC($a0)
    MEM_H(0X1EC, ctx->r4) = ctx->r25;
L_15059C70:
    // 0x15059C70: sra         $v0, $a2, 8
    ctx->r2 = S32(SIGNED(ctx->r6) >> 8);
L_15059C74:
    // 0x15059C74: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x15059C78: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x15059C7C: jr          $ra
    // 0x15059C80: nop

    return;
    return;
    // 0x15059C80: nop

;}
RECOMP_FUNC void func_1518CA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518CA80: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1518CA84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1518CA88: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x1518CA8C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x1518CA90: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1518CA94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1518CA98: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1518CA9C: lbu         $v1, 0x2E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2E);
    // 0x1518CAA0: lbu         $t7, 0x28($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X28);
    // 0x1518CAA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1518CAA8: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518CAAC: mflo        $t8
    ctx->r24 = lo;
    // 0x1518CAB0: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x1518CAB4: sb          $t9, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r25;
    // 0x1518CAB8: lbu         $t0, 0x29($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X29);
    // 0x1518CABC: multu       $t0, $v1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518CAC0: mflo        $t1
    ctx->r9 = lo;
    // 0x1518CAC4: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x1518CAC8: sb          $t2, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r10;
    // 0x1518CACC: lbu         $t3, 0x2A($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2A);
    // 0x1518CAD0: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518CAD4: mflo        $t4
    ctx->r12 = lo;
    // 0x1518CAD8: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x1518CADC: sb          $t5, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r13;
    // 0x1518CAE0: lbu         $t6, 0x2B($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2B);
    // 0x1518CAE4: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518CAE8: mflo        $t7
    ctx->r15 = lo;
    // 0x1518CAEC: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x1518CAF0: sb          $t8, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r24;
    // 0x1518CAF4: lbu         $t9, 0x2C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2C);
    // 0x1518CAF8: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x1518CAFC: lw          $t8, -0x35B4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X35B4);
    // 0x1518CB00: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518CB04: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x1518CB08: mflo        $t0
    ctx->r8 = lo;
    // 0x1518CB0C: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x1518CB10: sb          $t1, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r9;
    // 0x1518CB14: lbu         $t2, 0x2D($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2D);
    // 0x1518CB18: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518CB1C: mflo        $t3
    ctx->r11 = lo;
    // 0x1518CB20: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x1518CB24: sb          $t4, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r12;
    // 0x1518CB28: lh          $t5, 0x26($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X26);
    // 0x1518CB2C: sh          $t5, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r13;
    // 0x1518CB30: lbu         $t6, 0x2F($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2F);
    // 0x1518CB34: sb          $t6, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r14;
    // 0x1518CB38: lb          $t7, 0x30($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X30);
    // 0x1518CB3C: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    // 0x1518CB40: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
    // 0x1518CB44: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x1518CB48: bne         $a1, $at, L_1518CBDC
    if (ctx->r5 != ctx->r1) {
        // 0x1518CB4C: sb          $t7, 0x5A($sp)
        MEM_B(0X5A, ctx->r29) = ctx->r15;
            goto L_1518CBDC;
    }
    // 0x1518CB4C: sb          $t7, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r15;
    // 0x1518CB50: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1518CB54: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x1518CB58: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1518CB5C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1518CB60: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x1518CB64: nop

    // 0x1518CB68: sh          $t1, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r9;
    // 0x1518CB6C: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1518CB70: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1518CB74: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x1518CB78: nop

    // 0x1518CB7C: sh          $t3, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r11;
    // 0x1518CB80: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1518CB84: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1518CB88: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x1518CB8C: nop

    // 0x1518CB90: sh          $t5, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r13;
    // 0x1518CB94: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1518CB98: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1518CB9C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1518CBA0: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x1518CBA4: nop

    // 0x1518CBA8: sb          $t8, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r24;
    // 0x1518CBAC: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1518CBB0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1518CBB4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1518CBB8: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x1518CBBC: nop

    // 0x1518CBC0: sb          $t1, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r9;
    // 0x1518CBC4: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1518CBC8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1518CBCC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1518CBD0: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x1518CBD4: b           L_1518CC0C
    // 0x1518CBD8: sb          $t4, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r12;
        goto L_1518CC0C;
    // 0x1518CBD8: sb          $t4, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r12;
L_1518CBDC:
    // 0x1518CBDC: lh          $t5, 0xC($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XC);
    // 0x1518CBE0: sh          $t5, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r13;
    // 0x1518CBE4: lh          $t6, 0xE($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XE);
    // 0x1518CBE8: sh          $t6, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r14;
    // 0x1518CBEC: lh          $t7, 0x10($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X10);
    // 0x1518CBF0: sh          $t7, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r15;
    // 0x1518CBF4: lbu         $t8, 0x12($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X12);
    // 0x1518CBF8: sb          $t8, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r24;
    // 0x1518CBFC: lbu         $t9, 0x14($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X14);
    // 0x1518CC00: sb          $t9, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r25;
    // 0x1518CC04: lbu         $t0, 0x13($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X13);
    // 0x1518CC08: sb          $t0, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r8;
L_1518CC0C:
    // 0x1518CC0C: lh          $t1, 0x1E($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X1E);
    // 0x1518CC10: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x1518CC14: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1518CC18: sh          $t1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r9;
    // 0x1518CC1C: lh          $t2, 0x20($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X20);
    // 0x1518CC20: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x1518CC24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1518CC28: sh          $t2, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r10;
    // 0x1518CC2C: lh          $t3, 0x22($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X22);
    // 0x1518CC30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1518CC34: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1518CC38: sh          $t3, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r11;
    // 0x1518CC3C: lh          $t4, 0x24($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X24);
    // 0x1518CC40: sb          $t5, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r13;
    // 0x1518CC44: sh          $t6, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r14;
    // 0x1518CC48: sh          $t4, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r12;
    // 0x1518CC4C: lh          $t7, 0x16($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X16);
    // 0x1518CC50: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1518CC54: sh          $t7, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r15;
    // 0x1518CC58: lh          $t8, 0x18($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X18);
    // 0x1518CC5C: sh          $t8, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r24;
    // 0x1518CC60: lh          $t9, 0x1A($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X1A);
    // 0x1518CC64: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x1518CC68: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x1518CC6C: lh          $t2, 0x1C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X1C);
    // 0x1518CC70: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x1518CC74: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x1518CC78: lbu         $t4, 0x31($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X31);
    // 0x1518CC7C: sh          $zero, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = 0;
    // 0x1518CC80: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x1518CC84: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1518CC88: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1518CC8C: jal         0x15167D84
    // 0x1518CC90: sb          $t4, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r12;
    func_15167D84(rdram, ctx);
        goto after_0;
    // 0x1518CC90: sb          $t4, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r12;
    after_0:
    // 0x1518CC94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1518CC98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1518CC9C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x1518CCA0: jr          $ra
    // 0x1518CCA4: nop

    return;
    return;
    // 0x1518CCA4: nop

;}
RECOMP_FUNC void func_151450B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151450B4: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151450B8: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x151450BC: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151450C0: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x151450C4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151450C8: nop

    // 0x151450CC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151450D0: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x151450D4: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x151450D8: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151450DC: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151450E0: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151450E4: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x151450E8: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x151450EC: nop

    // 0x151450F0: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x151450F4: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x151450F8: swc1        $f6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f6.u32l;
    // 0x151450FC: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x15145100: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15145104: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15145108: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1514510C: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x15145110: nop

    // 0x15145114: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x15145118: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x1514511C: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x15145120: jr          $ra
    // 0x15145124: nop

    return;
    return;
    // 0x15145124: nop

;}
RECOMP_FUNC void func_150DF334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DF334: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x150DF338: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150DF33C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150DF340: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150DF344: sb          $zero, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = 0;
    // 0x150DF348: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150DF34C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150DF350: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150DF354: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x150DF358: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150DF35C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x150DF360: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150DF364: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150DF368: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x150DF36C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150DF370: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    // 0x150DF374: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x150DF378: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150DF37C: lwc1        $f16, 0x30($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X30);
    // 0x150DF380: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150DF384: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x150DF388: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150DF38C: jal         0x1504697C
    // 0x150DF390: nop

    func_1504697C(rdram, ctx);
        goto after_0;
    // 0x150DF390: nop

    after_0:
    // 0x150DF394: beq         $v0, $zero, L_150DF3C0
    if (ctx->r2 == 0) {
        // 0x150DF398: addiu       $a0, $s0, 0x28
        ctx->r4 = ADD32(ctx->r16, 0X28);
            goto L_150DF3C0;
    }
    // 0x150DF398: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    // 0x150DF39C: addiu       $v0, $s0, 0x28
    ctx->r2 = ADD32(ctx->r16, 0X28);
    // 0x150DF3A0: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150DF3A4: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x150DF3A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150DF3AC: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x150DF3B0: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x150DF3B4: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150DF3B8: sb          $t6, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r14;
    // 0x150DF3BC: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
L_150DF3C0:
    // 0x150DF3C0: lbu         $t7, 0x6F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6F);
    // 0x150DF3C4: beq         $t7, $zero, L_150DF3D4
    if (ctx->r15 == 0) {
        // 0x150DF3C8: nop
    
            goto L_150DF3D4;
    }
    // 0x150DF3C8: nop

    // 0x150DF3CC: b           L_150DF3D4
    // 0x150DF3D0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
        goto L_150DF3D4;
    // 0x150DF3D0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
L_150DF3D4:
    // 0x150DF3D4: jal         0x150ADA20
    // 0x150DF3D8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150DF3D8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_1:
    // 0x150DF3DC: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x150DF3E0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150DF3E4: mfhi        $a1
    ctx->r5 = hi;
    // 0x150DF3E8: addiu       $a1, $a1, 0x78
    ctx->r5 = ADD32(ctx->r5, 0X78);
    // 0x150DF3EC: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x150DF3F0: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150DF3F4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x150DF3F8: lbu         $a2, 0xC($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XC);
    // 0x150DF3FC: jal         0x150E83AC
    // 0x150DF400: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    func_150E83AC(rdram, ctx);
        goto after_2;
    // 0x150DF400: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    after_2:
    // 0x150DF404: lbu         $t0, 0x6F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X6F);
    // 0x150DF408: addiu       $v0, $s0, 0x28
    ctx->r2 = ADD32(ctx->r16, 0X28);
    // 0x150DF40C: beq         $t0, $zero, L_150DF41C
    if (ctx->r8 == 0) {
        // 0x150DF410: nop
    
            goto L_150DF41C;
    }
    // 0x150DF410: nop

    // 0x150DF414: b           L_150DF41C
    // 0x150DF418: addiu       $v0, $sp, 0x60
    ctx->r2 = ADD32(ctx->r29, 0X60);
        goto L_150DF41C;
    // 0x150DF418: addiu       $v0, $sp, 0x60
    ctx->r2 = ADD32(ctx->r29, 0X60);
L_150DF41C:
    // 0x150DF41C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x150DF420: addiu       $t1, $sp, 0x48
    ctx->r9 = ADD32(ctx->r29, 0X48);
    // 0x150DF424: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150DF428: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x150DF42C: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x150DF430: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x150DF434: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x150DF438: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150DF43C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150DF440: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150DF444: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150DF448: jal         0x150ADA20
    // 0x150DF44C: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150DF44C: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x150DF450: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x150DF454: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150DF458: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150DF45C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150DF460: mfhi        $t4
    ctx->r12 = hi;
    // 0x150DF464: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150DF468: addiu       $t5, $t4, 0x3
    ctx->r13 = ADD32(ctx->r12, 0X3);
    // 0x150DF46C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150DF470: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150DF474: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x150DF478: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150DF47C: lbu         $t7, 0xC($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XC);
    // 0x150DF480: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150DF484: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x150DF488: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x150DF48C: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    // 0x150DF490: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x150DF494: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    // 0x150DF498: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    // 0x150DF49C: jal         0x151A9834
    // 0x150DF4A0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    func_151A9834(rdram, ctx);
        goto after_4;
    // 0x150DF4A0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_4:
    // 0x150DF4A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150DF4A8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x150DF4AC: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x150DF4B0: jr          $ra
    // 0x150DF4B4: nop

    return;
    return;
    // 0x150DF4B4: nop

;}
RECOMP_FUNC void func_150AEB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AEB9C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150AEBA0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x150AEBA4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x150AEBA8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150AEBAC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x150AEBB0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x150AEBB4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x150AEBB8: beq         $s2, $zero, L_150AECB0
    if (ctx->r18 == 0) {
        // 0x150AEBBC: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_150AECB0;
    }
    // 0x150AEBBC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x150AEBC0: lui         $a1, 0x1500
    ctx->r5 = S32(0X1500 << 16);
    // 0x150AEBC4: lui         $a2, 0x1500
    ctx->r6 = S32(0X1500 << 16);
    // 0x150AEBC8: addiu       $a0, $a1, 0x1B08
    ctx->r4 = ADD32(ctx->r5, 0X1B08);
    // 0x150AEBCC: addiu       $v1, $a2, 0x1A08
    ctx->r3 = ADD32(ctx->r6, 0X1A08);
    // 0x150AEBD0: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x150AEBD4: beq         $at, $zero, L_150AEBF8
    if (ctx->r1 == 0) {
        // 0x150AEBD8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150AEBF8;
    }
    // 0x150AEBD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150AEBDC:
    // 0x150AEBDC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x150AEBE0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x150AEBE4: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x150AEBE8: xor         $v0, $v0, $t6
    ctx->r2 = ctx->r2 ^ ctx->r14;
    // 0x150AEBEC: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x150AEBF0: bne         $at, $zero, L_150AEBDC
    if (ctx->r1 != 0) {
        // 0x150AEBF4: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_150AEBDC;
    }
    // 0x150AEBF4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_150AEBF8:
    // 0x150AEBF8: lui         $at, 0xB4E4
    ctx->r1 = S32(0XB4E4 << 16);
    // 0x150AEBFC: ori         $at, $at, 0x2D60
    ctx->r1 = ctx->r1 | 0X2D60;
    // 0x150AEC00: beq         $v0, $at, L_150AEC18
    if (ctx->r2 == ctx->r1) {
        // 0x150AEC04: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_150AEC18;
    }
    // 0x150AEC04: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x150AEC08: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150AEC0C: addiu       $v0, $v0, -0x31B0
    ctx->r2 = ADD32(ctx->r2, -0X31B0);
    // 0x150AEC10: sw          $zero, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = 0;
    // 0x150AEC14: sw          $zero, 0x22C($v0)
    MEM_W(0X22C, ctx->r2) = 0;
L_150AEC18:
    // 0x150AEC18: lw          $t8, -0x7920($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7920);
    // 0x150AEC1C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150AEC20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150AEC24: blez        $t8, L_150AECB0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x150AEC28: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_150AECB0;
    }
L_150AEC28:
    // 0x150AEC28: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150AEC2C: lw          $t9, -0x791C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X791C);
    // 0x150AEC30: addiu       $t1, $zero, 0x27
    ctx->r9 = ADD32(0, 0X27);
    // 0x150AEC34: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x150AEC38: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x150AEC3C: lh          $a0, 0x2($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X2);
    // 0x150AEC40: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150AEC44: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x150AEC48: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150AEC4C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150AEC50: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150AEC54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150AEC58: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x150AEC5C: jal         0x151491F4
    // 0x150AEC60: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151491F4(rdram, ctx);
        goto after_0;
    // 0x150AEC60: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x150AEC64: beq         $v0, $zero, L_150AECB0
    if (ctx->r2 == 0) {
        // 0x150AEC68: sll         $t8, $s3, 3
        ctx->r24 = S32(ctx->r19 << 3);
            goto L_150AECB0;
    }
    // 0x150AEC68: sll         $t8, $s3, 3
    ctx->r24 = S32(ctx->r19 << 3);
    // 0x150AEC6C: sw          $s2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r18;
    // 0x150AEC70: lbu         $t4, 0x3B($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X3B);
    // 0x150AEC74: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x150AEC78: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150AEC7C: sb          $t4, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r12;
    // 0x150AEC80: lw          $t5, -0x791C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X791C);
    // 0x150AEC84: addiu       $t9, $t9, -0x7920
    ctx->r25 = ADD32(ctx->r25, -0X7920);
    // 0x150AEC88: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x150AEC8C: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x150AEC90: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x150AEC94: sb          $t7, 0x2D($v0)
    MEM_B(0X2D, ctx->r2) = ctx->r15;
    // 0x150AEC98: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x150AEC9C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x150AECA0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x150AECA4: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x150AECA8: bne         $at, $zero, L_150AEC28
    if (ctx->r1 != 0) {
        // 0x150AECAC: nop
    
            goto L_150AEC28;
    }
    // 0x150AECAC: nop

L_150AECB0:
    // 0x150AECB0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150AECB4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x150AECB8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x150AECBC: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x150AECC0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x150AECC4: jr          $ra
    // 0x150AECC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x150AECC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_150C7C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C7C90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150C7C94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C7C98: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150C7C9C: lw          $v1, 0x7C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X7C);
    // 0x150C7CA0: bnel        $v1, $zero, L_150C7CE4
    if (ctx->r3 != 0) {
        // 0x150C7CA4: lw          $t0, 0x1C($a2)
        ctx->r8 = MEM_W(ctx->r6, 0X1C);
            goto L_150C7CE4;
    }
    goto skip_0;
    // 0x150C7CA4: lw          $t0, 0x1C($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X1C);
    skip_0:
    // 0x150C7CA8: lw          $a1, 0x1C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X1C);
    // 0x150C7CAC: addiu       $v1, $zero, -0xE
    ctx->r3 = ADD32(0, -0XE);
    // 0x150C7CB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150C7CB4: lb          $t6, 0x0($a1)
    ctx->r14 = MEM_B(ctx->r5, 0X0);
    // 0x150C7CB8: beql        $v1, $t6, L_150C7CDC
    if (ctx->r3 == ctx->r14) {
        // 0x150C7CBC: sw          $v0, 0x7C($a2)
        MEM_W(0X7C, ctx->r6) = ctx->r2;
            goto L_150C7CDC;
    }
    goto skip_1;
    // 0x150C7CBC: sw          $v0, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r2;
    skip_1:
    // 0x150C7CC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_150C7CC4:
    // 0x150C7CC4: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x150C7CC8: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x150C7CCC: lb          $t9, 0x0($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X0);
    // 0x150C7CD0: bnel        $v1, $t9, L_150C7CC4
    if (ctx->r3 != ctx->r25) {
        // 0x150C7CD4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_150C7CC4;
    }
    goto skip_2;
    // 0x150C7CD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_2:
    // 0x150C7CD8: sw          $v0, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r2;
L_150C7CDC:
    // 0x150C7CDC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150C7CE0: lw          $t0, 0x1C($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X1C);
L_150C7CE4:
    // 0x150C7CE4: lw          $t2, 0x3C($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X3C);
    // 0x150C7CE8: sll         $t1, $v1, 3
    ctx->r9 = S32(ctx->r3 << 3);
    // 0x150C7CEC: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    // 0x150C7CF0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x150C7CF4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150C7CF8: jal         0x151149AC
    // 0x150C7CFC: andi        $a0, $t2, 0xFF
    ctx->r4 = ctx->r10 & 0XFF;
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x150C7CFC: andi        $a0, $t2, 0xFF
    ctx->r4 = ctx->r10 & 0XFF;
    after_0:
    // 0x150C7D00: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x150C7D04: lh          $t4, 0x12($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X12);
    // 0x150C7D08: addiu       $t5, $zero, -0x29D
    ctx->r13 = ADD32(0, -0X29D);
    // 0x150C7D0C: lw          $t6, 0x3C($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X3C);
    // 0x150C7D10: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x150C7D14: addiu       $t8, $zero, 0x344
    ctx->r24 = ADD32(0, 0X344);
    // 0x150C7D18: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x150C7D1C: beq         $t7, $zero, L_150C7D28
    if (ctx->r15 == 0) {
        // 0x150C7D20: subu        $v1, $t5, $t4
        ctx->r3 = SUB32(ctx->r13, ctx->r12);
            goto L_150C7D28;
    }
    // 0x150C7D20: subu        $v1, $t5, $t4
    ctx->r3 = SUB32(ctx->r13, ctx->r12);
    // 0x150C7D24: subu        $v1, $t8, $v1
    ctx->r3 = SUB32(ctx->r24, ctx->r3);
L_150C7D28:
    // 0x150C7D28: bgezl       $v1, L_150C7D40
    if (SIGNED(ctx->r3) >= 0) {
        // 0x150C7D2C: slti        $at, $v1, 0x400
        ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
            goto L_150C7D40;
    }
    goto skip_3;
    // 0x150C7D2C: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    skip_3:
    // 0x150C7D30: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
L_150C7D34:
    // 0x150C7D34: bltzl       $v1, L_150C7D34
    if (SIGNED(ctx->r3) < 0) {
        // 0x150C7D38: addiu       $v1, $v1, 0x400
        ctx->r3 = ADD32(ctx->r3, 0X400);
            goto L_150C7D34;
    }
    goto skip_4;
    // 0x150C7D38: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    skip_4:
    // 0x150C7D3C: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
L_150C7D40:
    // 0x150C7D40: bnel        $at, $zero, L_150C7D5C
    if (ctx->r1 != 0) {
        // 0x150C7D44: lw          $t9, 0x0($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X0);
            goto L_150C7D5C;
    }
    goto skip_5;
    // 0x150C7D44: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    skip_5:
    // 0x150C7D48: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
L_150C7D4C:
    // 0x150C7D4C: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x150C7D50: beql        $at, $zero, L_150C7D4C
    if (ctx->r1 == 0) {
        // 0x150C7D54: addiu       $v1, $v1, -0x400
        ctx->r3 = ADD32(ctx->r3, -0X400);
            goto L_150C7D4C;
    }
    goto skip_6;
    // 0x150C7D54: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
    skip_6:
    // 0x150C7D58: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
L_150C7D5C:
    // 0x150C7D5C: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x150C7D60: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x150C7D64: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x150C7D68: or          $t2, $t0, $v1
    ctx->r10 = ctx->r8 | ctx->r3;
    // 0x150C7D6C: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x150C7D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C7D74: jr          $ra
    // 0x150C7D78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x150C7D78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1001F28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001F28C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x1001F290: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1001F294: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x1001F298: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x1001F29C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x1001F2A0: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x1001F2A4: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x1001F2A8: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x1001F2AC: addiu       $t7, $zero, 0x2E0
    ctx->r15 = ADD32(0, 0X2E0);
    // 0x1001F2B0: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x1001F2B4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1001F2B8: addiu       $t8, $zero, 0xB8
    ctx->r24 = ADD32(0, 0XB8);
    // 0x1001F2BC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x1001F2C0: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x1001F2C4: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x1001F2C8: beq         $t0, $zero, L_1001F530
    if (ctx->r8 == 0) {
        // 0x1001F2CC: nop
    
            goto L_1001F530;
    }
    // 0x1001F2CC: nop

    // 0x1001F2D0: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x1001F2D4: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x1001F2D8: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x1001F2DC: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x1001F2E0: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x1001F2E4: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x1001F2E8: jal         0x1001FA78
    // 0x1001F2EC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_1001FA78(rdram, ctx);
        goto after_0;
    // 0x1001F2EC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_0:
    // 0x1001F2F0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x1001F2F4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x1001F2F8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1001F2FC: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x1001F300: nop

    // 0x1001F304: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1001F308: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1001F30C: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x1001F310: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x1001F314: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1001F318: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1001F31C: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1001F320: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1001F324: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x1001F328: nop

    // 0x1001F32C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1001F330: nop

    // 0x1001F334: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1001F338: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x1001F33C: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x1001F340: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1001F344: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1001F348: div.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1001F34C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x1001F350: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1001F354: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1001F358: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1001F35C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1001F360: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x1001F364: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F368: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1001F36C: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x1001F370: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x1001F374: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x1001F378: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1001F37C: lwc1        $f8, 0x24($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X24);
    // 0x1001F380: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x1001F384: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1001F388: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x1001F38C: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1001F390: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1001F394: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x1001F398: nop

    // 0x1001F39C: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x1001F3A0: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x1001F3A4: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1001F3A8: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x1001F3AC: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x1001F3B0: lw          $t5, 0x24($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X24);
    // 0x1001F3B4: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1001F3B8: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x1001F3BC: swc1        $f10, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f10.u32l;
    // 0x1001F3C0: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x1001F3C4: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x1001F3C8: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x1001F3CC: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x1001F3D0: lw          $t3, 0x18($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X18);
    // 0x1001F3D4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1001F3D8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x1001F3DC: lw          $t0, 0x28($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X28);
    // 0x1001F3E0: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x1001F3E4: negu        $t5, $t4
    ctx->r13 = SUB32(0, ctx->r12);
    // 0x1001F3E8: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x1001F3EC: addu        $t6, $t0, $t7
    ctx->r14 = ADD32(ctx->r8, ctx->r15);
    // 0x1001F3F0: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x1001F3F4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x1001F3F8: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x1001F3FC: sra         $t1, $t9, 1
    ctx->r9 = S32(SIGNED(ctx->r25) >> 1);
    // 0x1001F400: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x1001F404: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x1001F408: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x1001F40C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x1001F410: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x1001F414: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x1001F418: addu        $t0, $t5, $t3
    ctx->r8 = ADD32(ctx->r13, ctx->r11);
    // 0x1001F41C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x1001F420: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x1001F424: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x1001F428: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x1001F42C: subu        $a2, $t2, $t4
    ctx->r6 = SUB32(ctx->r10, ctx->r12);
    // 0x1001F430: jal         0x1001F5A4
    // 0x1001F434: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_1001F5A4(rdram, ctx);
        goto after_1;
    // 0x1001F434: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_1:
    // 0x1001F438: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x1001F43C: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x1001F440: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1001F444: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1001F448: mul.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x1001F44C: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1001F450: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x1001F454: nop

    // 0x1001F458: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x1001F45C: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x1001F460: sra         $t1, $t9, 8
    ctx->r9 = S32(SIGNED(ctx->r25) >> 8);
    // 0x1001F464: sh          $t1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r9;
    // 0x1001F468: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x1001F46C: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x1001F470: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
    // 0x1001F474: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x1001F478: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x1001F47C: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x1001F480: lw          $t3, 0x24($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X24);
    // 0x1001F484: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x1001F488: addu        $t6, $t3, $t7
    ctx->r14 = ADD32(ctx->r11, ctx->r15);
    // 0x1001F48C: jal         0x100233C0
    // 0x1001F490: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x1001F490: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    after_2:
    // 0x1001F494: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x1001F498: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x1001F49C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1001F4A0: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x1001F4A4: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x1001F4A8: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x1001F4AC: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x1001F4B0: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x1001F4B4: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x1001F4B8: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x1001F4BC: lw          $t4, 0x24($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X24);
    // 0x1001F4C0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x1001F4C4: andi        $t6, $t7, 0xFFFF
    ctx->r14 = ctx->r15 & 0XFFFF;
    // 0x1001F4C8: lw          $t5, 0x28($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X28);
    // 0x1001F4CC: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x1001F4D0: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x1001F4D4: andi        $t0, $t5, 0x3
    ctx->r8 = ctx->r13 & 0X3;
    // 0x1001F4D8: sll         $t3, $t0, 30
    ctx->r11 = S32(ctx->r8 << 30);
    // 0x1001F4DC: or          $t9, $t3, $t8
    ctx->r25 = ctx->r11 | ctx->r24;
    // 0x1001F4E0: lh          $t3, 0x2A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2A);
    // 0x1001F4E4: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x1001F4E8: andi        $t0, $t5, 0xFFF
    ctx->r8 = ctx->r13 & 0XFFF;
    // 0x1001F4EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1001F4F0: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x1001F4F4: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x1001F4F8: andi        $t8, $t3, 0x3
    ctx->r24 = ctx->r11 & 0X3;
    // 0x1001F4FC: or          $t2, $t6, $t8
    ctx->r10 = ctx->r14 | ctx->r24;
    // 0x1001F500: sw          $t2, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r10;
    // 0x1001F504: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x1001F508: lw          $t5, 0x24($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X24);
    // 0x1001F50C: sw          $zero, 0x28($t5)
    MEM_W(0X28, ctx->r13) = 0;
    // 0x1001F510: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x1001F514: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x1001F518: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F51C: lw          $t6, 0x18($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X18);
    // 0x1001F520: subu        $t7, $t0, $t9
    ctx->r15 = SUB32(ctx->r8, ctx->r25);
    // 0x1001F524: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1001F528: b           L_1001F584
    // 0x1001F52C: sw          $t8, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->r24;
        goto L_1001F584;
    // 0x1001F52C: sw          $t8, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->r24;
L_1001F530:
    // 0x1001F530: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x1001F534: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x1001F538: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x1001F53C: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x1001F540: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x1001F544: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x1001F548: lw          $t0, 0x28($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X28);
    // 0x1001F54C: negu        $t7, $t6
    ctx->r15 = SUB32(0, ctx->r14);
    // 0x1001F550: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x1001F554: addu        $t3, $t0, $t8
    ctx->r11 = ADD32(ctx->r8, ctx->r24);
    // 0x1001F558: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x1001F55C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x1001F560: addiu       $t1, $zero, 0xB8
    ctx->r9 = ADD32(0, 0XB8);
    // 0x1001F564: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x1001F568: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x1001F56C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x1001F570: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x1001F574: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x1001F578: jal         0x1001F5A4
    // 0x1001F57C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_1001F5A4(rdram, ctx);
        goto after_3;
    // 0x1001F57C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_3:
    // 0x1001F580: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
L_1001F584:
    // 0x1001F584: b           L_1001F594
    // 0x1001F588: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
        goto L_1001F594;
    // 0x1001F588: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x1001F58C: b           L_1001F594
    // 0x1001F590: nop

        goto L_1001F594;
    // 0x1001F590: nop

L_1001F594:
    // 0x1001F594: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1001F598: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x1001F59C: jr          $ra
    // 0x1001F5A0: nop

    return;
    return;
    // 0x1001F5A0: nop

;}
RECOMP_FUNC void func_1510E82C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510E82C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1510E830: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x1510E834: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x1510E838: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1510E83C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1510E840: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510E844: lwc1        $f16, 0x2D50($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2D50);
    // 0x1510E848: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510E84C: lwc1        $f18, 0x2D54($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2D54);
    // 0x1510E850: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x1510E854: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x1510E858: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x1510E85C: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1510E860: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1510E864: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1510E868: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1510E86C: lhu         $t9, 0x72($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X72);
    // 0x1510E870: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x1510E874: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1510E878: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1510E87C: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x1510E880: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x1510E884: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1510E888: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1510E88C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1510E890: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x1510E894: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x1510E898: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x1510E89C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x1510E8A0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x1510E8A4: jal         0x1510E950
    // 0x1510E8A8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_1510E950(rdram, ctx);
        goto after_0;
    // 0x1510E8A8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_0:
    // 0x1510E8AC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1510E8B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1510E8B4: jr          $ra
    // 0x1510E8B8: nop

    return;
    return;
    // 0x1510E8B8: nop

;}
RECOMP_FUNC void func_16001390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16001390: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x16001394: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x16001398: sll         $s0, $a2, 16
    ctx->r16 = S32(ctx->r6 << 16);
    // 0x1600139C: sra         $t8, $s0, 16
    ctx->r24 = S32(SIGNED(ctx->r16) >> 16);
    // 0x160013A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x160013A4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x160013A8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x160013AC: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x160013B0: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x160013B4: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x160013B8: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x160013BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x160013C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x160013C4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x160013C8: lh          $t1, 0x22($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X22);
    // 0x160013CC: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x160013D0: bne         $at, $zero, L_160014DC
    if (ctx->r1 != 0) {
        // 0x160013D4: slt         $at, $a3, $a1
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_160014DC;
    }
    // 0x160013D4: slt         $at, $a3, $a1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x160013D8: bne         $at, $zero, L_160014DC
    if (ctx->r1 != 0) {
        // 0x160013DC: lh          $t2, 0x22($sp)
        ctx->r10 = MEM_H(ctx->r29, 0X22);
            goto L_160014DC;
    }
    // 0x160013DC: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x160013E0: bltzl       $t2, L_160014E0
    if (SIGNED(ctx->r10) < 0) {
        // 0x160013E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_160014E0;
    }
    goto skip_0;
    // 0x160013E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x160013E8: bltz        $a1, L_160014DC
    if (SIGNED(ctx->r5) < 0) {
        // 0x160013EC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_160014DC;
    }
    // 0x160013EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x160013F0: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x160013F4: addiu       $t6, $a3, 0x1
    ctx->r14 = ADD32(ctx->r7, 0X1);
    // 0x160013F8: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    // 0x160013FC: sh          $t6, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r14;
    // 0x16001400: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x16001404: jal         0x1600160C
    // 0x16001408: sh          $a1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r5;
    func_1600160C(rdram, ctx);
        goto after_0;
    // 0x16001408: sh          $a1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r5;
    after_0:
    // 0x1600140C: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x16001410: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x16001414: lw          $a1, 0x38A8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X38A8);
    // 0x16001418: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x1600141C: lh          $a3, 0x2E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2E);
    // 0x16001420: multu       $a2, $a1
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x16001424: subu        $s0, $s0, $a0
    ctx->r16 = SUB32(ctx->r16, ctx->r4);
    // 0x16001428: subu        $a3, $a3, $a2
    ctx->r7 = SUB32(ctx->r7, ctx->r6);
    // 0x1600142C: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x16001430: sll         $t0, $s0, 16
    ctx->r8 = S32(ctx->r16 << 16);
    // 0x16001434: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x16001438: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    // 0x1600143C: mflo        $t7
    ctx->r15 = lo;
    // 0x16001440: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x16001444: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x16001448: blez        $a3, L_160014DC
    if (SIGNED(ctx->r7) <= 0) {
        // 0x1600144C: addu        $v1, $v0, $t9
        ctx->r3 = ADD32(ctx->r2, ctx->r25);
            goto L_160014DC;
    }
    // 0x1600144C: addu        $v1, $v0, $t9
    ctx->r3 = ADD32(ctx->r2, ctx->r25);
    // 0x16001450: lui         $a0, 0x1600
    ctx->r4 = S32(0X1600 << 16);
    // 0x16001454: addiu       $a0, $a0, 0x388C
    ctx->r4 = ADD32(ctx->r4, 0X388C);
L_16001458:
    // 0x16001458: blez        $s0, L_160014C0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x1600145C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_160014C0;
    }
    // 0x1600145C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x16001460: andi        $a2, $s0, 0x3
    ctx->r6 = ctx->r16 & 0X3;
    // 0x16001464: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x16001468: beq         $a2, $zero, L_1600148C
    if (ctx->r6 == 0) {
        // 0x1600146C: addu        $a1, $a2, $s0
        ctx->r5 = ADD32(ctx->r6, ctx->r16);
            goto L_1600148C;
    }
    // 0x1600146C: addu        $a1, $a2, $s0
    ctx->r5 = ADD32(ctx->r6, ctx->r16);
L_16001470:
    // 0x16001470: lhu         $t4, 0x0($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X0);
    // 0x16001474: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x16001478: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x1600147C: bne         $a1, $v0, L_16001470
    if (ctx->r5 != ctx->r2) {
        // 0x16001480: sh          $t4, -0x2($v1)
        MEM_H(-0X2, ctx->r3) = ctx->r12;
            goto L_16001470;
    }
    // 0x16001480: sh          $t4, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r12;
    // 0x16001484: beq         $v0, $zero, L_160014B8
    if (ctx->r2 == 0) {
        // 0x16001488: nop
    
            goto L_160014B8;
    }
    // 0x16001488: nop

L_1600148C:
    // 0x1600148C: lhu         $t5, 0x0($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X0);
    // 0x16001490: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x16001494: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x16001498: sh          $t5, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r13;
    // 0x1600149C: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x160014A0: sh          $t6, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r14;
    // 0x160014A4: lhu         $t7, 0x0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X0);
    // 0x160014A8: sh          $t7, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r15;
    // 0x160014AC: lhu         $t8, 0x0($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X0);
    // 0x160014B0: bne         $v0, $zero, L_1600148C
    if (ctx->r2 != 0) {
        // 0x160014B4: sh          $t8, -0x2($v1)
        MEM_H(-0X2, ctx->r3) = ctx->r24;
            goto L_1600148C;
    }
    // 0x160014B4: sh          $t8, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r24;
L_160014B8:
    // 0x160014B8: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x160014BC: lw          $a1, 0x38A8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X38A8);
L_160014C0:
    // 0x160014C0: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x160014C4: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x160014C8: subu        $t1, $a1, $s0
    ctx->r9 = SUB32(ctx->r5, ctx->r16);
    // 0x160014CC: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x160014D0: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x160014D4: bgtz        $a3, L_16001458
    if (SIGNED(ctx->r7) > 0) {
        // 0x160014D8: addu        $v1, $v1, $t2
        ctx->r3 = ADD32(ctx->r3, ctx->r10);
            goto L_16001458;
    }
    // 0x160014D8: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
L_160014DC:
    // 0x160014DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_160014E0:
    // 0x160014E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x160014E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x160014E8: jr          $ra
    // 0x160014EC: nop

    return;
    return;
    // 0x160014EC: nop

;}
RECOMP_FUNC void func_15033E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15033E28: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15033E2C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15033E30: lw          $v0, 0x3EE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3EE0);
    // 0x15033E34: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15033E38: bne         $v0, $zero, L_15033E48
    if (ctx->r2 != 0) {
        // 0x15033E3C: nop
    
            goto L_15033E48;
    }
    // 0x15033E3C: nop

    // 0x15033E40: jr          $ra
    // 0x15033E44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15033E44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15033E48:
    // 0x15033E48: beq         $v0, $zero, L_15033E78
    if (ctx->r2 == 0) {
        // 0x15033E4C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_15033E78;
    }
    // 0x15033E4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_15033E50:
    // 0x15033E50: lbu         $t6, 0x3B($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3B);
    // 0x15033E54: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x15033E58: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x15033E5C: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x15033E60: bne         $t6, $t7, L_15033E70
    if (ctx->r14 != ctx->r15) {
        // 0x15033E64: addu        $t9, $a1, $t8
        ctx->r25 = ADD32(ctx->r5, ctx->r24);
            goto L_15033E70;
    }
    // 0x15033E64: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x15033E68: sw          $a0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r4;
    // 0x15033E6C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_15033E70:
    // 0x15033E70: bne         $v0, $zero, L_15033E50
    if (ctx->r2 != 0) {
        // 0x15033E74: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_15033E50;
    }
    // 0x15033E74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_15033E78:
    // 0x15033E78: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15033E7C: jr          $ra
    // 0x15033E80: nop

    return;
    return;
    // 0x15033E80: nop

;}
RECOMP_FUNC void func_150E7C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E7C9C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x150E7CA0: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x150E7CA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150E7CA8: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x150E7CAC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150E7CB0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150E7CB4: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x150E7CB8: sw          $s5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r21;
    // 0x150E7CBC: sw          $s4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r20;
    // 0x150E7CC0: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x150E7CC4: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x150E7CC8: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x150E7CCC: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x150E7CD0: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x150E7CD4: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x150E7CD8: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x150E7CDC: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x150E7CE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150E7CE4: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150E7CE8: lwc1        $f4, 0x28($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X28);
    // 0x150E7CEC: lwc1        $f10, 0x2C($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X2C);
    // 0x150E7CF0: addiu       $s0, $s3, 0x28
    ctx->r16 = ADD32(ctx->r19, 0X28);
    // 0x150E7CF4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150E7CF8: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
    // 0x150E7CFC: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150E7D00: swc1        $f16, 0x2C($s3)
    MEM_W(0X2C, ctx->r19) = ctx->f16.u32l;
    // 0x150E7D04: lwc1        $f18, 0x2C($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X2C);
    // 0x150E7D08: c.lt.s      $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f22.fl < ctx->f18.fl;
    // 0x150E7D0C: nop

    // 0x150E7D10: bc1fl       L_150E7F98
    if (!c1cs) {
        // 0x150E7D14: lh          $t2, 0xA($s0)
        ctx->r10 = MEM_H(ctx->r16, 0XA);
            goto L_150E7F98;
    }
    goto skip_0;
    // 0x150E7D14: lh          $t2, 0xA($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XA);
    skip_0:
    // 0x150E7D18: lh          $t6, 0x8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8);
    // 0x150E7D1C: lh          $t7, 0xA($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XA);
    // 0x150E7D20: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150E7D24: beql        $t6, $t7, L_150E7F98
    if (ctx->r14 == ctx->r15) {
        // 0x150E7D28: lh          $t2, 0xA($s0)
        ctx->r10 = MEM_H(ctx->r16, 0XA);
            goto L_150E7F98;
    }
    goto skip_1;
    // 0x150E7D28: lh          $t2, 0xA($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XA);
    skip_1:
    // 0x150E7D2C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150E7D30: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150E7D34: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150E7D38: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150E7D3C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150E7D40: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x150E7D44: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150E7D48: addiu       $s5, $sp, 0x98
    ctx->r21 = ADD32(ctx->r29, 0X98);
    // 0x150E7D4C: lh          $t9, 0xA($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA);
L_150E7D50:
    // 0x150E7D50: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x150E7D54: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x150E7D58: lwc1        $f4, 0x10($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X10);
    // 0x150E7D5C: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x150E7D60: lh          $t3, 0xA($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XA);
    // 0x150E7D64: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x150E7D68: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x150E7D6C: lwc1        $f6, 0x14($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X14);
    // 0x150E7D70: jal         0x150ADA68
    // 0x150E7D74: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150E7D74: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x150E7D78: jal         0x150ADA20
    // 0x150E7D7C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150E7D7C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x150E7D80: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x150E7D84: beq         $t6, $zero, L_150E7D94
    if (ctx->r14 == 0) {
        // 0x150E7D88: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_150E7D94;
    }
    // 0x150E7D88: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x150E7D8C: b           L_150E7D94
    // 0x150E7D90: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
        goto L_150E7D94;
    // 0x150E7D90: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_150E7D94:
    // 0x150E7D94: jal         0x150ADA20
    // 0x150E7D98: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150E7D98: nop

    after_2:
    // 0x150E7D9C: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x150E7DA0: beq         $t7, $zero, L_150E7DB0
    if (ctx->r15 == 0) {
        // 0x150E7DA4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_150E7DB0;
    }
    // 0x150E7DA4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150E7DA8: b           L_150E7DB0
    // 0x150E7DAC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_150E7DB0;
    // 0x150E7DAC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_150E7DB0:
    // 0x150E7DB0: jal         0x150ADA68
    // 0x150E7DB4: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150E7DB4: nop

    after_3:
    // 0x150E7DB8: mul.s       $f10, $f20, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x150E7DBC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150E7DC0: or          $a3, $s1, $s2
    ctx->r7 = ctx->r17 | ctx->r18;
    // 0x150E7DC4: mul.s       $f16, $f0, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150E7DC8: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x150E7DCC: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x150E7DD0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x150E7DD4: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    // 0x150E7DD8: add.s       $f8, $f10, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f26.fl;
    // 0x150E7DDC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150E7DE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150E7DE4: add.s       $f18, $f16, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f30.fl;
    // 0x150E7DE8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x150E7DEC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150E7DF0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150E7DF4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x150E7DF8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150E7DFC: nop

    // 0x150E7E00: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150E7E04: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150E7E08: nop

    // 0x150E7E0C: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x150E7E10: beql        $t0, $zero, L_150E7E60
    if (ctx->r8 == 0) {
        // 0x150E7E14: mfc1        $t0, $f4
        ctx->r8 = (int32_t)ctx->f4.u32l;
            goto L_150E7E60;
    }
    goto skip_2;
    // 0x150E7E14: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    skip_2:
    // 0x150E7E18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E7E1C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150E7E20: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150E7E24: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150E7E28: nop

    // 0x150E7E2C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x150E7E30: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150E7E34: nop

    // 0x150E7E38: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x150E7E3C: bne         $t0, $zero, L_150E7E54
    if (ctx->r8 != 0) {
        // 0x150E7E40: nop
    
            goto L_150E7E54;
    }
    // 0x150E7E40: nop

    // 0x150E7E44: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x150E7E48: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150E7E4C: b           L_150E7E6C
    // 0x150E7E50: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_150E7E6C;
    // 0x150E7E50: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_150E7E54:
    // 0x150E7E54: b           L_150E7E6C
    // 0x150E7E58: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_150E7E6C;
    // 0x150E7E58: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150E7E5C: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
L_150E7E60:
    // 0x150E7E60: nop

    // 0x150E7E64: bltz        $t0, L_150E7E54
    if (SIGNED(ctx->r8) < 0) {
        // 0x150E7E68: nop
    
            goto L_150E7E54;
    }
    // 0x150E7E68: nop

L_150E7E6C:
    // 0x150E7E6C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150E7E70: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x150E7E74: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150E7E78: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x150E7E7C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150E7E80: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150E7E84: lbu         $t4, 0xC($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0XC);
    // 0x150E7E88: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x150E7E8C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x150E7E90: lbu         $t5, 0x1($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0X1);
    // 0x150E7E94: jal         0x150E75A0
    // 0x150E7E98: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    func_150E75A0(rdram, ctx);
        goto after_4;
    // 0x150E7E98: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    after_4:
    // 0x150E7E9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E7EA0: lwc1        $f10, 0x1350($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1350);
    // 0x150E7EA4: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x150E7EA8: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x150E7EAC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150E7EB0: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150E7EB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150E7EB8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150E7EBC: addiu       $a0, $zero, 0x360
    ctx->r4 = ADD32(0, 0X360);
    // 0x150E7EC0: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x150E7EC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150E7EC8: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150E7ECC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x150E7ED0: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x150E7ED4: nop

    // 0x150E7ED8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150E7EDC: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x150E7EE0: nop

    // 0x150E7EE4: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x150E7EE8: beql        $a2, $zero, L_150E7F38
    if (ctx->r6 == 0) {
        // 0x150E7EEC: mfc1        $a2, $f4
        ctx->r6 = (int32_t)ctx->f4.u32l;
            goto L_150E7F38;
    }
    goto skip_3;
    // 0x150E7EEC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    skip_3:
    // 0x150E7EF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E7EF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150E7EF8: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150E7EFC: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x150E7F00: nop

    // 0x150E7F04: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x150E7F08: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x150E7F0C: nop

    // 0x150E7F10: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x150E7F14: bne         $a2, $zero, L_150E7F2C
    if (ctx->r6 != 0) {
        // 0x150E7F18: nop
    
            goto L_150E7F2C;
    }
    // 0x150E7F18: nop

    // 0x150E7F1C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x150E7F20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150E7F24: b           L_150E7F44
    // 0x150E7F28: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_150E7F44;
    // 0x150E7F28: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_150E7F2C:
    // 0x150E7F2C: b           L_150E7F44
    // 0x150E7F30: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_150E7F44;
    // 0x150E7F30: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x150E7F34: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
L_150E7F38:
    // 0x150E7F38: nop

    // 0x150E7F3C: bltz        $a2, L_150E7F2C
    if (SIGNED(ctx->r6) < 0) {
        // 0x150E7F40: nop
    
            goto L_150E7F2C;
    }
    // 0x150E7F40: nop

L_150E7F44:
    // 0x150E7F44: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x150E7F48: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x150E7F4C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x150E7F50: jal         0x10010F30
    // 0x150E7F54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_5;
    // 0x150E7F54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x150E7F58: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150E7F5C: lh          $t8, 0xA($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XA);
    // 0x150E7F60: sub.s       $f10, $f6, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f22.fl;
    // 0x150E7F64: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x150E7F68: sh          $t9, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r25;
    // 0x150E7F6C: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x150E7F70: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150E7F74: c.lt.s      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.fl < ctx->f8.fl;
    // 0x150E7F78: nop

    // 0x150E7F7C: bc1fl       L_150E7F98
    if (!c1cs) {
        // 0x150E7F80: lh          $t2, 0xA($s0)
        ctx->r10 = MEM_H(ctx->r16, 0XA);
            goto L_150E7F98;
    }
    goto skip_4;
    // 0x150E7F80: lh          $t2, 0xA($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XA);
    skip_4:
    // 0x150E7F84: lh          $t0, 0x8($s4)
    ctx->r8 = MEM_H(ctx->r20, 0X8);
    // 0x150E7F88: lh          $t1, 0xA($s4)
    ctx->r9 = MEM_H(ctx->r20, 0XA);
    // 0x150E7F8C: bnel        $t0, $t1, L_150E7D50
    if (ctx->r8 != ctx->r9) {
        // 0x150E7F90: lh          $t9, 0xA($s0)
        ctx->r25 = MEM_H(ctx->r16, 0XA);
            goto L_150E7D50;
    }
    goto skip_5;
    // 0x150E7F90: lh          $t9, 0xA($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA);
    skip_5:
    // 0x150E7F94: lh          $t2, 0xA($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XA);
L_150E7F98:
    // 0x150E7F98: lh          $t3, 0x8($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X8);
    // 0x150E7F9C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150E7FA0: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x150E7FA4: bnel        $at, $zero, L_150E7FB4
    if (ctx->r1 != 0) {
        // 0x150E7FA8: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_150E7FB4;
    }
    goto skip_6;
    // 0x150E7FA8: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_6:
    // 0x150E7FAC: sh          $t4, 0xE($s3)
    MEM_H(0XE, ctx->r19) = ctx->r12;
    // 0x150E7FB0: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
L_150E7FB4:
    // 0x150E7FB4: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x150E7FB8: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x150E7FBC: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x150E7FC0: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x150E7FC4: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x150E7FC8: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x150E7FCC: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x150E7FD0: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x150E7FD4: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x150E7FD8: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x150E7FDC: lw          $s4, 0x74($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X74);
    // 0x150E7FE0: lw          $s5, 0x78($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X78);
    // 0x150E7FE4: jr          $ra
    // 0x150E7FE8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    return;
    // 0x150E7FE8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_151F2BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F2BE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151F2BEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F2BF0: jal         0x10024880
    // 0x151F2BF4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x151F2BF4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x151F2BF8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151F2BFC: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151F2C00: lw          $t6, 0xE04($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XE04);
    // 0x151F2C04: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151F2C08: bne         $t6, $at, L_151F2C20
    if (ctx->r14 != ctx->r1) {
        // 0x151F2C0C: nop
    
            goto L_151F2C20;
    }
    // 0x151F2C0C: nop

    // 0x151F2C10: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x151F2C14: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2C18: b           L_151F2C2C
    // 0x151F2C1C: sw          $t7, 0xE04($at)
    MEM_W(0XE04, ctx->r1) = ctx->r15;
        goto L_151F2C2C;
    // 0x151F2C1C: sw          $t7, 0xE04($at)
    MEM_W(0XE04, ctx->r1) = ctx->r15;
L_151F2C20:
    // 0x151F2C20: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x151F2C24: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2C28: sw          $t8, 0xE04($at)
    MEM_W(0XE04, ctx->r1) = ctx->r24;
L_151F2C2C:
    // 0x151F2C2C: jal         0x10024880
    // 0x151F2C30: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x151F2C30: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x151F2C34: b           L_151F2C3C
    // 0x151F2C38: nop

        goto L_151F2C3C;
    // 0x151F2C38: nop

L_151F2C3C:
    // 0x151F2C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F2C40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151F2C44: jr          $ra
    // 0x151F2C48: nop

    return;
    return;
    // 0x151F2C48: nop

;}
RECOMP_FUNC void func_1515FB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515FB70: lbu         $t6, 0x3B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3B);
    // 0x1515FB74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1515FB78: bne         $t6, $at, L_1515FB8C
    if (ctx->r14 != ctx->r1) {
        // 0x1515FB7C: nop
    
            goto L_1515FB8C;
    }
    // 0x1515FB7C: nop

    // 0x1515FB80: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x1515FB84: bltz        $v0, L_1515FB8C
    if (SIGNED(ctx->r2) < 0) {
        // 0x1515FB88: nop
    
            goto L_1515FB8C;
    }
    // 0x1515FB88: nop

L_1515FB8C:
    // 0x1515FB8C: jr          $ra
    // 0x1515FB90: nop

    return;
    return;
    // 0x1515FB90: nop

;}
RECOMP_FUNC void func_151987CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151987CC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x151987D0: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x151987D4: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x151987D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151987DC: lwc1        $f22, -0x7524($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X7524);
    // 0x151987E0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151987E4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151987E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151987EC: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x151987F0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x151987F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151987F8: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x151987FC: lw          $v1, 0x94($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X94);
    // 0x15198800: addiu       $t0, $t0, 0x121C
    ctx->r8 = ADD32(ctx->r8, 0X121C);
    // 0x15198804: addiu       $a2, $a2, -0x3D30
    ctx->r6 = ADD32(ctx->r6, -0X3D30);
    // 0x15198808: addiu       $t2, $zero, 0x24
    ctx->r10 = ADD32(0, 0X24);
    // 0x1519880C: addiu       $t1, $sp, 0x40
    ctx->r9 = ADD32(ctx->r29, 0X40);
    // 0x15198810: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
L_15198814:
    // 0x15198814: beql        $t6, $zero, L_15198960
    if (ctx->r14 == 0) {
        // 0x15198818: addiu       $a2, $a2, 0x32C
        ctx->r6 = ADD32(ctx->r6, 0X32C);
            goto L_15198960;
    }
    goto skip_0;
    // 0x15198818: addiu       $a2, $a2, 0x32C
    ctx->r6 = ADD32(ctx->r6, 0X32C);
    skip_0:
    // 0x1519881C: lbu         $t7, 0x65($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X65);
    // 0x15198820: bnel        $t7, $zero, L_15198960
    if (ctx->r15 != 0) {
        // 0x15198824: addiu       $a2, $a2, 0x32C
        ctx->r6 = ADD32(ctx->r6, 0X32C);
            goto L_15198960;
    }
    goto skip_1;
    // 0x15198824: addiu       $a2, $a2, 0x32C
    ctx->r6 = ADD32(ctx->r6, 0X32C);
    skip_1:
    // 0x15198828: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1519882C: lbu         $t8, 0x3B($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X3B);
    // 0x15198830: lbu         $t3, 0x3B($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X3B);
    // 0x15198834: beql        $t8, $t3, L_15198960
    if (ctx->r24 == ctx->r11) {
        // 0x15198838: addiu       $a2, $a2, 0x32C
        ctx->r6 = ADD32(ctx->r6, 0X32C);
            goto L_15198960;
    }
    goto skip_2;
    // 0x15198838: addiu       $a2, $a2, 0x32C
    ctx->r6 = ADD32(ctx->r6, 0X32C);
    skip_2:
    // 0x1519883C: lb          $a1, 0x2E($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X2E);
    // 0x15198840: lb          $t4, 0x2D($a0)
    ctx->r12 = MEM_B(ctx->r4, 0X2D);
    // 0x15198844: beq         $a1, $t4, L_1519895C
    if (ctx->r5 == ctx->r12) {
        // 0x15198848: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_1519895C;
    }
    // 0x15198848: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_1519884C:
    // 0x1519884C: bgez        $a1, L_1519885C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x15198850: nop
    
            goto L_1519885C;
    }
    // 0x15198850: nop

    // 0x15198854: lbu         $a1, 0x25($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X25);
    // 0x15198858: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_1519885C:
    // 0x1519885C: multu       $a1, $t2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15198860: lh          $t8, 0xE4($a2)
    ctx->r24 = MEM_H(ctx->r6, 0XE4);
    // 0x15198864: lh          $t3, 0xE6($a2)
    ctx->r11 = MEM_H(ctx->r6, 0XE6);
    // 0x15198868: lwc1        $f10, 0x14($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X14);
    // 0x1519886C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15198870: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x15198874: lh          $t4, 0xE8($a2)
    ctx->r12 = MEM_H(ctx->r6, 0XE8);
    // 0x15198878: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1519887C: mflo        $t5
    ctx->r13 = lo;
    // 0x15198880: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x15198884: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x15198888: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1519888C: lwc1        $f6, 0x1C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x15198890: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x15198894: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x15198898: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x1519889C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x151988A0: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x151988A4: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151988A8: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151988AC: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151988B0: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x151988B4: lwc1        $f8, 0x18($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X18);
    // 0x151988B8: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151988BC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151988C0: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151988C4: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151988C8: div.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x151988CC: sub.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151988D0: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x151988D4: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x151988D8: nop

    // 0x151988DC: mul.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x151988E0: nop

    // 0x151988E4: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151988E8: nop

    // 0x151988EC: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x151988F0: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151988F4: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x151988F8: nop

    // 0x151988FC: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15198900: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15198904: add.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x15198908: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x1519890C: nop

    // 0x15198910: bc1f        L_15198950
    if (!c1cs) {
        // 0x15198914: nop
    
            goto L_15198950;
    }
    // 0x15198914: nop

    // 0x15198918: lb          $a3, 0x2D($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X2D);
    // 0x1519891C: beq         $a1, $a3, L_15198950
    if (ctx->r5 == ctx->r7) {
        // 0x15198920: addiu       $t5, $a3, 0x1
        ctx->r13 = ADD32(ctx->r7, 0X1);
            goto L_15198950;
    }
L_15198920:
    // 0x15198920: addiu       $t5, $a3, 0x1
    ctx->r13 = ADD32(ctx->r7, 0X1);
    // 0x15198924: sb          $t5, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = ctx->r13;
    // 0x15198928: lb          $a3, 0x2D($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X2D);
    // 0x1519892C: lbu         $t7, 0x25($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X25);
    // 0x15198930: bnel        $t7, $a3, L_15198944
    if (ctx->r15 != ctx->r7) {
        // 0x15198934: lb          $t6, 0x2C($a0)
        ctx->r14 = MEM_B(ctx->r4, 0X2C);
            goto L_15198944;
    }
    goto skip_3;
    // 0x15198934: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
    skip_3:
    // 0x15198938: sb          $zero, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = 0;
    // 0x1519893C: lb          $a3, 0x2D($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X2D);
    // 0x15198940: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
L_15198944:
    // 0x15198944: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x15198948: bne         $a1, $a3, L_15198920
    if (ctx->r5 != ctx->r7) {
        // 0x1519894C: sb          $t9, 0x2C($a0)
        MEM_B(0X2C, ctx->r4) = ctx->r25;
            goto L_15198920;
    }
    // 0x1519894C: sb          $t9, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r25;
L_15198950:
    // 0x15198950: lb          $t8, 0x2D($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X2D);
    // 0x15198954: bnel        $a1, $t8, L_1519884C
    if (ctx->r5 != ctx->r24) {
        // 0x15198958: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_1519884C;
    }
    goto skip_4;
    // 0x15198958: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    skip_4:
L_1519895C:
    // 0x1519895C: addiu       $a2, $a2, 0x32C
    ctx->r6 = ADD32(ctx->r6, 0X32C);
L_15198960:
    // 0x15198960: bnel        $a2, $t0, L_15198814
    if (ctx->r6 != ctx->r8) {
        // 0x15198964: lw          $t6, 0x0($a2)
        ctx->r14 = MEM_W(ctx->r6, 0X0);
            goto L_15198814;
    }
    goto skip_5;
    // 0x15198964: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    skip_5:
    // 0x15198968: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1519896C: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x15198970: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x15198974: jr          $ra
    // 0x15198978: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x15198978: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_150498A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150498A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150498A8: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x150498AC: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x150498B0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x150498B4: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x150498B8: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x150498BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150498C0: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150498C4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x150498C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150498CC: mul.s       $f14, $f4, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x150498D0: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150498D4: lui         $at, 0xBFC0
    ctx->r1 = S32(0XBFC0 << 16);
    // 0x150498D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150498DC: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x150498E0: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150498E4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150498E8: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x150498EC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x150498F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150498F4: lui         $at, 0xC020
    ctx->r1 = S32(0XC020 << 16);
    // 0x150498F8: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x150498FC: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15049900: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x15049904: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15049908: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x1504990C: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15049910: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x15049914: add.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x15049918: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x1504991C: add.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x15049920: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    // 0x15049924: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x15049928: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1504992C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15049930: mul.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x15049934: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15049938: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1504993C: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15049940: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15049944: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15049948: add.s       $f10, $f4, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x1504994C: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15049950: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x15049954: mov.s       $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = ctx->f10.fl;
    // 0x15049958: add.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f18.fl;
    // 0x1504995C: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x15049960: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15049964: mul.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x15049968: nop

    // 0x1504996C: mul.s       $f10, $f12, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x15049970: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x15049974: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x15049978: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    // 0x1504997C: mul.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x15049980: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x15049984: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x15049988: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x1504998C: add.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15049990: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x15049994: jr          $ra
    // 0x15049998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x15049998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1506F14C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506F14C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506F150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506F154: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506F158: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506F15C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506F160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1506F164: jal         0x150BABE0
    // 0x1506F168: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_150BABE0(rdram, ctx);
        goto after_0;
    // 0x1506F168: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
    // 0x1506F16C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506F170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506F174: jr          $ra
    // 0x1506F178: nop

    return;
    return;
    // 0x1506F178: nop

;}
RECOMP_FUNC void func_15075D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15075D10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15075D14: jal         0x15075548
    // 0x15075D18: nop

    func_15075548(rdram, ctx);
        goto after_0;
    // 0x15075D18: nop

    after_0:
    // 0x15075D1C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15075D20: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15075D24: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x15075D28: sb          $t6, 0x223($t7)
    MEM_B(0X223, ctx->r15) = ctx->r14;
    // 0x15075D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15075D30: jr          $ra
    // 0x15075D34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15075D34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_15075C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075C24: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15075C28: lbu         $v0, 0x1893($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1893);
    // 0x15075C2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15075C30: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15075C34: beq         $v0, $at, L_15075C70
    if (ctx->r2 == ctx->r1) {
        // 0x15075C38: lui         $t8, 0x800D
        ctx->r24 = S32(0X800D << 16);
            goto L_15075C70;
    }
    // 0x15075C38: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15075C3C: lbu         $t6, 0x1892($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1892);
    // 0x15075C40: lbu         $t8, 0x1890($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1890);
    // 0x15075C44: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x15075C48: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x15075C4C: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x15075C50: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x15075C54: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x15075C58: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x15075C5C: lw          $t2, 0x154C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X154C);
    // 0x15075C60: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15075C64: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15075C68: swc1        $f6, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f6.u32l;
    // 0x15075C6C: lbu         $v0, 0x1893($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1893);
L_15075C70:
    // 0x15075C70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15075C74: beq         $v0, $at, L_15075C98
    if (ctx->r2 == ctx->r1) {
        // 0x15075C78: lui         $t3, 0x800D
        ctx->r11 = S32(0X800D << 16);
            goto L_15075C98;
    }
    // 0x15075C78: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15075C7C: lb          $t3, 0x1891($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X1891);
    // 0x15075C80: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15075C84: lw          $t4, 0x154C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X154C);
    // 0x15075C88: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x15075C8C: nop

    // 0x15075C90: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15075C94: swc1        $f10, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f10.u32l;
L_15075C98:
    // 0x15075C98: jr          $ra
    // 0x15075C9C: nop

    return;
    return;
    // 0x15075C9C: nop

;}
RECOMP_FUNC void func_151DD3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DD3A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151DD3A4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x151DD3A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x151DD3AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x151DD3B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151DD3B4: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x151DD3B8: andi        $s1, $a1, 0xFF
    ctx->r17 = ctx->r5 & 0XFF;
    // 0x151DD3BC: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x151DD3C0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x151DD3C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151DD3C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x151DD3CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x151DD3D0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x151DD3D4: jal         0x151DCFD8
    // 0x151DD3D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_151DCFD8(rdram, ctx);
        goto after_0;
    // 0x151DD3D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x151DD3DC: beq         $v0, $zero, L_151DD3F4
    if (ctx->r2 == 0) {
        // 0x151DD3E0: nop
    
            goto L_151DD3F4;
    }
    // 0x151DD3E0: nop

L_151DD3E4:
    // 0x151DD3E4: jal         0x151DCFD8
    // 0x151DD3E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_151DCFD8(rdram, ctx);
        goto after_1;
    // 0x151DD3E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x151DD3EC: bne         $v0, $zero, L_151DD3E4
    if (ctx->r2 != 0) {
        // 0x151DD3F0: nop
    
            goto L_151DD3E4;
    }
    // 0x151DD3F0: nop

L_151DD3F4:
    // 0x151DD3F4: blez        $s0, L_151DD430
    if (SIGNED(ctx->r16) <= 0) {
        // 0x151DD3F8: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_151DD430;
    }
L_151DD3F8:
    // 0x151DD3F8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x151DD3FC: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x151DD400: jal         0x151DD140
    // 0x151DD404: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_151DD140(rdram, ctx);
        goto after_2;
    // 0x151DD404: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x151DD408: beq         $v0, $zero, L_151DD418
    if (ctx->r2 == 0) {
        // 0x151DD40C: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_151DD418;
    }
    // 0x151DD40C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x151DD410: b           L_151DD438
    // 0x151DD414: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_151DD438;
    // 0x151DD414: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151DD418:
    // 0x151DD418: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151DD41C: addiu       $s0, $s0, -0x8
    ctx->r16 = ADD32(ctx->r16, -0X8);
    // 0x151DD420: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x151DD424: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x151DD428: bgtz        $s0, L_151DD3F8
    if (SIGNED(ctx->r16) > 0) {
        // 0x151DD42C: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_151DD3F8;
    }
    // 0x151DD42C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_151DD430:
    // 0x151DD430: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x151DD434: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151DD438:
    // 0x151DD438: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151DD43C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x151DD440: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x151DD444: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x151DD448: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x151DD44C: jr          $ra
    // 0x151DD450: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x151DD450: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1508F060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508F060: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508F064: sb          $zero, 0x246D($at)
    MEM_B(0X246D, ctx->r1) = 0;
    // 0x1508F068: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508F06C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x1508F070: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1508F074: sb          $zero, 0x247D($at)
    MEM_B(0X247D, ctx->r1) = 0;
    // 0x1508F078: addiu       $t7, $t7, 0x2460
    ctx->r15 = ADD32(ctx->r15, 0X2460);
    // 0x1508F07C: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x1508F080: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x1508F084: sb          $zero, 0x1D($v1)
    MEM_B(0X1D, ctx->r3) = 0;
    // 0x1508F088: sb          $zero, 0x2D($v1)
    MEM_B(0X2D, ctx->r3) = 0;
    // 0x1508F08C: sb          $zero, 0x3D($v1)
    MEM_B(0X3D, ctx->r3) = 0;
    // 0x1508F090: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x1508F094: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508F098: sw          $zero, 0x24C0($at)
    MEM_W(0X24C0, ctx->r1) = 0;
    // 0x1508F09C: jr          $ra
    // 0x1508F0A0: nop

    return;
    return;
    // 0x1508F0A0: nop

;}
RECOMP_FUNC void func_150339C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150339C8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150339CC: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x150339D0: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x150339D4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x150339D8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150339DC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150339E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150339E4: jal         0x150334B8
    // 0x150339E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_150334B8(rdram, ctx);
        goto after_0;
    // 0x150339E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x150339EC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150339F0: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x150339F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150339F8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150339FC: beql        $t6, $at, L_15033AC4
    if (ctx->r14 == ctx->r1) {
        // 0x15033A00: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15033AC4;
    }
    goto skip_0;
    // 0x15033A00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x15033A04: lbu         $t7, -0x15F4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X15F4);
    // 0x15033A08: beql        $t7, $zero, L_15033A38
    if (ctx->r15 == 0) {
        // 0x15033A0C: lw          $t9, 0x3C($s1)
        ctx->r25 = MEM_W(ctx->r17, 0X3C);
            goto L_15033A38;
    }
    goto skip_1;
    // 0x15033A0C: lw          $t9, 0x3C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X3C);
    skip_1:
    // 0x15033A10: lw          $t8, 0x3C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X3C);
    // 0x15033A14: lui         $a0, 0x1503
    ctx->r4 = S32(0X1503 << 16);
    // 0x15033A18: addiu       $a0, $a0, 0x3BDC
    ctx->r4 = ADD32(ctx->r4, 0X3BDC);
    // 0x15033A1C: beq         $t8, $zero, L_15033A2C
    if (ctx->r24 == 0) {
        // 0x15033A20: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_15033A2C;
    }
    // 0x15033A20: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15033A24: jal         0x1000FD38
    // 0x15033A28: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1000FD38(rdram, ctx);
        goto after_1;
    // 0x15033A28: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
L_15033A2C:
    // 0x15033A2C: b           L_15033AC0
    // 0x15033A30: sw          $zero, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = 0;
        goto L_15033AC0;
    // 0x15033A30: sw          $zero, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = 0;
    // 0x15033A34: lw          $t9, 0x3C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X3C);
L_15033A38:
    // 0x15033A38: addiu       $a0, $zero, 0x448
    ctx->r4 = ADD32(0, 0X448);
    // 0x15033A3C: addiu       $t0, $zero, 0x3E8
    ctx->r8 = ADD32(0, 0X3E8);
    // 0x15033A40: bne         $t9, $zero, L_15033AC0
    if (ctx->r25 != 0) {
        // 0x15033A44: lui         $t2, 0x1503
        ctx->r10 = S32(0X1503 << 16);
            goto L_15033AC0;
    }
    // 0x15033A44: lui         $t2, 0x1503
    ctx->r10 = S32(0X1503 << 16);
    // 0x15033A48: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15033A4C: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15033A50: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15033A54: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15033A58: addiu       $t9, $zero, 0x7D00
    ctx->r25 = ADD32(0, 0X7D00);
    // 0x15033A5C: addiu       $t2, $t2, 0x3BDC
    ctx->r10 = ADD32(ctx->r10, 0X3BDC);
    // 0x15033A60: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15033A64: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15033A68: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x15033A6C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15033A70: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15033A74: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x15033A78: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x15033A7C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x15033A80: addiu       $t1, $zero, 0x1F4
    ctx->r9 = ADD32(0, 0X1F4);
    // 0x15033A84: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x15033A88: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x15033A8C: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15033A90: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    // 0x15033A94: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15033A98: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15033A9C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15033AA0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15033AA4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x15033AA8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x15033AAC: jal         0x1000FA64
    // 0x15033AB0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_1000FA64(rdram, ctx);
        goto after_2;
    // 0x15033AB0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x15033AB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15033AB8: or          $t3, $v0, $at
    ctx->r11 = ctx->r2 | ctx->r1;
    // 0x15033ABC: sw          $t3, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r11;
L_15033AC0:
    // 0x15033AC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15033AC4:
    // 0x15033AC4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15033AC8: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x15033ACC: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x15033AD0: jr          $ra
    // 0x15033AD4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x15033AD4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_151DF574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DF574: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x151DF578: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151DF57C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x151DF580: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x151DF584: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x151DF588: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x151DF58C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x151DF590: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x151DF594: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x151DF598: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x151DF59C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151DF5A0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151DF5A4: lbu         $t6, 0xA94($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XA94);
    // 0x151DF5A8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151DF5AC: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x151DF5B0: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x151DF5B4: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x151DF5B8: addiu       $s3, $s3, -0x100
    ctx->r19 = ADD32(ctx->r19, -0X100);
    // 0x151DF5BC: addiu       $s4, $s4, -0x47FC
    ctx->r20 = ADD32(ctx->r20, -0X47FC);
    // 0x151DF5C0: lb          $v0, 0xA96($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XA96);
    // 0x151DF5C4: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x151DF5C8: addiu       $s7, $zero, 0x8
    ctx->r23 = ADD32(0, 0X8);
    // 0x151DF5CC: addiu       $s6, $sp, 0xB0
    ctx->r22 = ADD32(ctx->r29, 0XB0);
    // 0x151DF5D0: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x151DF5D4: lb          $s0, 0x0($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X0);
L_151DF5D8:
    // 0x151DF5D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151DF5DC: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x151DF5E0: bne         $v0, $at, L_151DF610
    if (ctx->r2 != ctx->r1) {
        // 0x151DF5E4: sb          $s0, 0x83($sp)
        MEM_B(0X83, ctx->r29) = ctx->r16;
            goto L_151DF610;
    }
    // 0x151DF5E4: sb          $s0, 0x83($sp)
    MEM_B(0X83, ctx->r29) = ctx->r16;
    // 0x151DF5E8: addiu       $t7, $s0, -0x1
    ctx->r15 = ADD32(ctx->r16, -0X1);
    // 0x151DF5EC: sb          $t7, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r15;
    // 0x151DF5F0: lb          $t8, 0x0($s3)
    ctx->r24 = MEM_B(ctx->r19, 0X0);
    // 0x151DF5F4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x151DF5F8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF5FC: bgez        $t8, L_151DF608
    if (SIGNED(ctx->r24) >= 0) {
        // 0x151DF600: nop
    
            goto L_151DF608;
    }
    // 0x151DF600: nop

    // 0x151DF604: sb          $s7, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r23;
L_151DF608:
    // 0x151DF608: b           L_151DF640
    // 0x151DF60C: sb          $t9, -0xD4($at)
    MEM_B(-0XD4, ctx->r1) = ctx->r25;
        goto L_151DF640;
    // 0x151DF60C: sb          $t9, -0xD4($at)
    MEM_B(-0XD4, ctx->r1) = ctx->r25;
L_151DF610:
    // 0x151DF610: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151DF614: bne         $v0, $at, L_151DF640
    if (ctx->r2 != ctx->r1) {
        // 0x151DF618: addiu       $t3, $s0, 0x1
        ctx->r11 = ADD32(ctx->r16, 0X1);
            goto L_151DF640;
    }
    // 0x151DF618: addiu       $t3, $s0, 0x1
    ctx->r11 = ADD32(ctx->r16, 0X1);
    // 0x151DF61C: sb          $t3, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r11;
    // 0x151DF620: lb          $t4, 0x0($s3)
    ctx->r12 = MEM_B(ctx->r19, 0X0);
    // 0x151DF624: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151DF628: slti        $at, $t4, 0x9
    ctx->r1 = SIGNED(ctx->r12) < 0X9 ? 1 : 0;
    // 0x151DF62C: bne         $at, $zero, L_151DF638
    if (ctx->r1 != 0) {
        // 0x151DF630: nop
    
            goto L_151DF638;
    }
    // 0x151DF630: nop

    // 0x151DF634: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
L_151DF638:
    // 0x151DF638: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF63C: sb          $t5, -0xD4($at)
    MEM_B(-0XD4, ctx->r1) = ctx->r13;
L_151DF640:
    // 0x151DF640: lb          $s0, 0x0($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X0);
L_151DF644:
    // 0x151DF644: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x151DF648: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DF64C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151DF650: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x151DF654: blez        $s0, L_151DF67C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x151DF658: sw          $zero, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = 0;
            goto L_151DF67C;
    }
    // 0x151DF658: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x151DF65C: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
L_151DF660:
    // 0x151DF660: lb          $t6, 0x0($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X0);
    // 0x151DF664: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x151DF668: slt         $at, $a1, $s0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x151DF66C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151DF670: bne         $at, $zero, L_151DF660
    if (ctx->r1 != 0) {
        // 0x151DF674: addu        $s5, $s5, $t6
        ctx->r21 = ADD32(ctx->r21, ctx->r14);
            goto L_151DF660;
    }
    // 0x151DF674: addu        $s5, $s5, $t6
    ctx->r21 = ADD32(ctx->r21, ctx->r14);
    // 0x151DF678: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
L_151DF67C:
    // 0x151DF67C: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x151DF680: lw          $v0, -0x6300($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6300);
    // 0x151DF684: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151DF688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151DF68C: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x151DF690: beq         $t7, $zero, L_151DF69C
    if (ctx->r15 == 0) {
        // 0x151DF694: andi        $t8, $v0, 0x2
        ctx->r24 = ctx->r2 & 0X2;
            goto L_151DF69C;
    }
    // 0x151DF694: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x151DF698: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_151DF69C:
    // 0x151DF69C: bne         $s7, $s0, L_151DF6B0
    if (ctx->r23 != ctx->r16) {
        // 0x151DF6A0: andi        $t3, $v0, 0x4
        ctx->r11 = ctx->r2 & 0X4;
            goto L_151DF6B0;
    }
    // 0x151DF6A0: andi        $t3, $v0, 0x4
    ctx->r11 = ctx->r2 & 0X4;
    // 0x151DF6A4: beq         $t8, $zero, L_151DF6B0
    if (ctx->r24 == 0) {
        // 0x151DF6A8: ori         $t9, $s1, 0x1
        ctx->r25 = ctx->r17 | 0X1;
            goto L_151DF6B0;
    }
    // 0x151DF6A8: ori         $t9, $s1, 0x1
    ctx->r25 = ctx->r17 | 0X1;
    // 0x151DF6AC: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
L_151DF6B0:
    // 0x151DF6B0: bne         $s0, $at, L_151DF6C4
    if (ctx->r16 != ctx->r1) {
        // 0x151DF6B4: andi        $t5, $v0, 0x1000
        ctx->r13 = ctx->r2 & 0X1000;
            goto L_151DF6C4;
    }
    // 0x151DF6B4: andi        $t5, $v0, 0x1000
    ctx->r13 = ctx->r2 & 0X1000;
    // 0x151DF6B8: beq         $t3, $zero, L_151DF6C4
    if (ctx->r11 == 0) {
        // 0x151DF6BC: ori         $t4, $s1, 0x1
        ctx->r12 = ctx->r17 | 0X1;
            goto L_151DF6C4;
    }
    // 0x151DF6BC: ori         $t4, $s1, 0x1
    ctx->r12 = ctx->r17 | 0X1;
    // 0x151DF6C0: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
L_151DF6C4:
    // 0x151DF6C4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151DF6C8: bne         $s0, $at, L_151DF6DC
    if (ctx->r16 != ctx->r1) {
        // 0x151DF6CC: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_151DF6DC;
    }
    // 0x151DF6CC: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x151DF6D0: beq         $t5, $zero, L_151DF6DC
    if (ctx->r13 == 0) {
        // 0x151DF6D4: ori         $t6, $s1, 0x1
        ctx->r14 = ctx->r17 | 0X1;
            goto L_151DF6DC;
    }
    // 0x151DF6D4: ori         $t6, $s1, 0x1
    ctx->r14 = ctx->r17 | 0X1;
    // 0x151DF6D8: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
L_151DF6DC:
    // 0x151DF6DC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151DF6E0: bne         $s0, $at, L_151DF6F4
    if (ctx->r16 != ctx->r1) {
        // 0x151DF6E4: sll         $t9, $v0, 7
        ctx->r25 = S32(ctx->r2 << 7);
            goto L_151DF6F4;
    }
    // 0x151DF6E4: sll         $t9, $v0, 7
    ctx->r25 = S32(ctx->r2 << 7);
    // 0x151DF6E8: beq         $t7, $zero, L_151DF6F4
    if (ctx->r15 == 0) {
        // 0x151DF6EC: ori         $t8, $s1, 0x1
        ctx->r24 = ctx->r17 | 0X1;
            goto L_151DF6F4;
    }
    // 0x151DF6EC: ori         $t8, $s1, 0x1
    ctx->r24 = ctx->r17 | 0X1;
    // 0x151DF6F0: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_151DF6F4:
    // 0x151DF6F4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151DF6F8: bne         $s0, $at, L_151DF70C
    if (ctx->r16 != ctx->r1) {
        // 0x151DF6FC: sll         $t4, $v0, 6
        ctx->r12 = S32(ctx->r2 << 6);
            goto L_151DF70C;
    }
    // 0x151DF6FC: sll         $t4, $v0, 6
    ctx->r12 = S32(ctx->r2 << 6);
    // 0x151DF700: bgez        $t9, L_151DF70C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x151DF704: ori         $t3, $s1, 0x1
        ctx->r11 = ctx->r17 | 0X1;
            goto L_151DF70C;
    }
    // 0x151DF704: ori         $t3, $s1, 0x1
    ctx->r11 = ctx->r17 | 0X1;
    // 0x151DF708: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
L_151DF70C:
    // 0x151DF70C: bne         $fp, $s0, L_151DF720
    if (ctx->r30 != ctx->r16) {
        // 0x151DF710: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151DF720;
    }
    // 0x151DF710: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151DF714: bgez        $t4, L_151DF720
    if (SIGNED(ctx->r12) >= 0) {
        // 0x151DF718: ori         $t5, $s1, 0x1
        ctx->r13 = ctx->r17 | 0X1;
            goto L_151DF720;
    }
    // 0x151DF718: ori         $t5, $s1, 0x1
    ctx->r13 = ctx->r17 | 0X1;
    // 0x151DF71C: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
L_151DF720:
    // 0x151DF720: bne         $s0, $at, L_151DF734
    if (ctx->r16 != ctx->r1) {
        // 0x151DF724: sll         $t6, $v0, 5
        ctx->r14 = S32(ctx->r2 << 5);
            goto L_151DF734;
    }
    // 0x151DF724: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x151DF728: bgez        $t6, L_151DF734
    if (SIGNED(ctx->r14) >= 0) {
        // 0x151DF72C: ori         $t7, $s1, 0x1
        ctx->r15 = ctx->r17 | 0X1;
            goto L_151DF734;
    }
    // 0x151DF72C: ori         $t7, $s1, 0x1
    ctx->r15 = ctx->r17 | 0X1;
    // 0x151DF730: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_151DF734:
    // 0x151DF734: jal         0x1509CF28
    // 0x151DF738: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    func_1509CF28(rdram, ctx);
        goto after_0;
    // 0x151DF738: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    after_0:
    // 0x151DF73C: lb          $s0, 0x0($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X0);
    // 0x151DF740: ori         $t8, $s1, 0x1
    ctx->r24 = ctx->r17 | 0X1;
    // 0x151DF744: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x151DF748: bne         $s0, $zero, L_151DF754
    if (ctx->r16 != 0) {
        // 0x151DF74C: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_151DF754;
    }
    // 0x151DF74C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151DF750: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_151DF754:
    // 0x151DF754: beq         $v0, $zero, L_151DF818
    if (ctx->r2 == 0) {
        // 0x151DF758: sllv        $t3, $t9, $a1
        ctx->r11 = S32(ctx->r25 << (ctx->r5 & 31));
            goto L_151DF818;
    }
    // 0x151DF758: sllv        $t3, $t9, $a1
    ctx->r11 = S32(ctx->r25 << (ctx->r5 & 31));
    // 0x151DF75C: addu        $t9, $s4, $s0
    ctx->r25 = ADD32(ctx->r20, ctx->r16);
    // 0x151DF760: lb          $t3, 0x0($t9)
    ctx->r11 = MEM_B(ctx->r25, 0X0);
    // 0x151DF764: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DF768: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x151DF76C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x151DF770: blez        $t4, L_151DF7DC
    if (SIGNED(ctx->r12) <= 0) {
        // 0x151DF774: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_151DF7DC;
    }
    // 0x151DF774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_151DF778:
    // 0x151DF778: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x151DF77C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151DF780: jal         0x1509D08C
    // 0x151DF784: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    func_1509D08C(rdram, ctx);
        goto after_1;
    // 0x151DF784: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    after_1:
    // 0x151DF788: beq         $v0, $zero, L_151DF79C
    if (ctx->r2 == 0) {
        // 0x151DF78C: lw          $a1, 0xB4($sp)
        ctx->r5 = MEM_W(ctx->r29, 0XB4);
            goto L_151DF79C;
    }
    // 0x151DF78C: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x151DF790: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151DF794: sllv        $t6, $t5, $a1
    ctx->r14 = S32(ctx->r13 << (ctx->r5 & 31));
    // 0x151DF798: or          $s1, $s1, $t6
    ctx->r17 = ctx->r17 | ctx->r14;
L_151DF79C:
    // 0x151DF79C: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x151DF7A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151DF7A4: sllv        $t8, $t7, $a1
    ctx->r24 = S32(ctx->r15 << (ctx->r5 & 31));
    // 0x151DF7A8: and         $t9, $t8, $s1
    ctx->r25 = ctx->r24 & ctx->r17;
    // 0x151DF7AC: beql        $t9, $zero, L_151DF7BC
    if (ctx->r25 == 0) {
        // 0x151DF7B0: lb          $s0, 0x0($s3)
        ctx->r16 = MEM_B(ctx->r19, 0X0);
            goto L_151DF7BC;
    }
    goto skip_0;
    // 0x151DF7B0: lb          $s0, 0x0($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X0);
    skip_0:
    // 0x151DF7B4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x151DF7B8: lb          $s0, 0x0($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X0);
L_151DF7BC:
    // 0x151DF7BC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x151DF7C0: addu        $t3, $s4, $s0
    ctx->r11 = ADD32(ctx->r20, ctx->r16);
    // 0x151DF7C4: lb          $t4, 0x0($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X0);
    // 0x151DF7C8: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x151DF7CC: slt         $at, $a1, $t5
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x151DF7D0: bnel        $at, $zero, L_151DF778
    if (ctx->r1 != 0) {
        // 0x151DF7D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_151DF778;
    }
    goto skip_1;
    // 0x151DF7D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x151DF7D8: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
L_151DF7DC:
    // 0x151DF7DC: jal         0x1509D054
    // 0x151DF7E0: nop

    func_1509D054(rdram, ctx);
        goto after_2;
    // 0x151DF7E0: nop

    after_2:
    // 0x151DF7E4: lb          $s0, 0x0($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X0);
    // 0x151DF7E8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151DF7EC: bne         $s7, $s0, L_151DF820
    if (ctx->r23 != ctx->r16) {
        // 0x151DF7F0: nop
    
            goto L_151DF820;
    }
    // 0x151DF7F0: nop

    // 0x151DF7F4: lbu         $t6, -0x1C22($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1C22);
    // 0x151DF7F8: andi        $t7, $s1, 0x8
    ctx->r15 = ctx->r17 & 0X8;
    // 0x151DF7FC: beq         $t6, $zero, L_151DF820
    if (ctx->r14 == 0) {
        // 0x151DF800: nop
    
            goto L_151DF820;
    }
    // 0x151DF800: nop

    // 0x151DF804: bne         $t7, $zero, L_151DF820
    if (ctx->r15 != 0) {
        // 0x151DF808: ori         $t8, $s1, 0x8
        ctx->r24 = ctx->r17 | 0X8;
            goto L_151DF820;
    }
    // 0x151DF808: ori         $t8, $s1, 0x8
    ctx->r24 = ctx->r17 | 0X8;
    // 0x151DF80C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x151DF810: b           L_151DF820
    // 0x151DF814: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_151DF820;
    // 0x151DF814: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_151DF818:
    // 0x151DF818: or          $s1, $s1, $t3
    ctx->r17 = ctx->r17 | ctx->r11;
    // 0x151DF81C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_151DF820:
    // 0x151DF820: bne         $s2, $zero, L_151DF858
    if (ctx->r18 != 0) {
        // 0x151DF824: lui         $t4, 0x8009
        ctx->r12 = S32(0X8009 << 16);
            goto L_151DF858;
    }
    // 0x151DF824: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x151DF828: lb          $t4, -0xD4($t4)
    ctx->r12 = MEM_B(ctx->r12, -0XD4);
    // 0x151DF82C: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x151DF830: sb          $t5, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r13;
    // 0x151DF834: lb          $s0, 0x0($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X0);
    // 0x151DF838: slti        $at, $s0, 0x9
    ctx->r1 = SIGNED(ctx->r16) < 0X9 ? 1 : 0;
    // 0x151DF83C: bne         $at, $zero, L_151DF84C
    if (ctx->r1 != 0) {
        // 0x151DF840: nop
    
            goto L_151DF84C;
    }
    // 0x151DF840: nop

    // 0x151DF844: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
    // 0x151DF848: lb          $s0, 0x0($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X0);
L_151DF84C:
    // 0x151DF84C: bgez        $s0, L_151DF858
    if (SIGNED(ctx->r16) >= 0) {
        // 0x151DF850: nop
    
            goto L_151DF858;
    }
    // 0x151DF850: nop

    // 0x151DF854: sb          $s7, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r23;
L_151DF858:
    // 0x151DF858: beql        $s2, $zero, L_151DF644
    if (ctx->r18 == 0) {
        // 0x151DF85C: lb          $s0, 0x0($s3)
        ctx->r16 = MEM_B(ctx->r19, 0X0);
            goto L_151DF644;
    }
    goto skip_2;
    // 0x151DF85C: lb          $s0, 0x0($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X0);
    skip_2:
    // 0x151DF860: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x151DF864: addiu       $a2, $a2, 0xA96
    ctx->r6 = ADD32(ctx->r6, 0XA96);
    // 0x151DF868: lb          $v0, 0x0($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X0);
    // 0x151DF86C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151DF870: lb          $t6, 0x83($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X83);
    // 0x151DF874: beq         $v0, $at, L_151DF888
    if (ctx->r2 == ctx->r1) {
        // 0x151DF878: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_151DF888;
    }
    // 0x151DF878: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151DF87C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151DF880: bnel        $v0, $at, L_151DF8BC
    if (ctx->r2 != ctx->r1) {
        // 0x151DF884: lw          $t5, 0xB8($sp)
        ctx->r13 = MEM_W(ctx->r29, 0XB8);
            goto L_151DF8BC;
    }
    goto skip_3;
    // 0x151DF884: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    skip_3:
L_151DF888:
    // 0x151DF888: lb          $t7, 0x0($s3)
    ctx->r15 = MEM_B(ctx->r19, 0X0);
    // 0x151DF88C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151DF890: bnel        $t6, $t7, L_151DF8A4
    if (ctx->r14 != ctx->r15) {
        // 0x151DF894: lb          $t3, 0x83($sp)
        ctx->r11 = MEM_B(ctx->r29, 0X83);
            goto L_151DF8A4;
    }
    goto skip_4;
    // 0x151DF894: lb          $t3, 0x83($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X83);
    skip_4:
    // 0x151DF898: b           L_151DF8B0
    // 0x151DF89C: sb          $t8, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r24;
        goto L_151DF8B0;
    // 0x151DF89C: sb          $t8, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r24;
    // 0x151DF8A0: lb          $t3, 0x83($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X83);
L_151DF8A4:
    // 0x151DF8A4: addiu       $t9, $v0, 0x2
    ctx->r25 = ADD32(ctx->r2, 0X2);
    // 0x151DF8A8: sb          $t9, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r25;
    // 0x151DF8AC: sb          $t3, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r11;
L_151DF8B0:
    // 0x151DF8B0: sw          $t4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r12;
    // 0x151DF8B4: lb          $v0, 0x0($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X0);
    // 0x151DF8B8: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
L_151DF8BC:
    // 0x151DF8BC: bnel        $t5, $zero, L_151DF5D8
    if (ctx->r13 != 0) {
        // 0x151DF8C0: lb          $s0, 0x0($s3)
        ctx->r16 = MEM_B(ctx->r19, 0X0);
            goto L_151DF5D8;
    }
    goto skip_5;
    // 0x151DF8C0: lb          $s0, 0x0($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X0);
    skip_5:
    // 0x151DF8C4: blez        $v0, L_151DF954
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151DF8C8: lui         $a1, 0x800E
        ctx->r5 = S32(0X800E << 16);
            goto L_151DF954;
    }
    // 0x151DF8C8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x151DF8CC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151DF8D0: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x151DF8D4: addiu       $a1, $a1, 0xA95
    ctx->r5 = ADD32(ctx->r5, 0XA95);
    // 0x151DF8D8: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x151DF8DC: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x151DF8E0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x151DF8E4: subu        $s6, $t6, $t8
    ctx->r22 = SUB32(ctx->r14, ctx->r24);
    // 0x151DF8E8: bgtzl       $s6, L_151DF980
    if (SIGNED(ctx->r22) > 0) {
        // 0x151DF8EC: lw          $t5, 0x74($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X74);
            goto L_151DF980;
    }
    goto skip_6;
    // 0x151DF8EC: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    skip_6:
    // 0x151DF8F0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x151DF8F4: lb          $s0, 0x0($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X0);
    // 0x151DF8F8: bne         $fp, $v0, L_151DF928
    if (ctx->r30 != ctx->r2) {
        // 0x151DF8FC: sb          $t9, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r25;
            goto L_151DF928;
    }
    // 0x151DF8FC: sb          $t9, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r25;
    // 0x151DF900: addiu       $t3, $s0, -0x1
    ctx->r11 = ADD32(ctx->r16, -0X1);
    // 0x151DF904: sb          $t3, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r11;
    // 0x151DF908: lb          $t4, 0x0($s3)
    ctx->r12 = MEM_B(ctx->r19, 0X0);
    // 0x151DF90C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151DF910: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF914: bgez        $t4, L_151DF920
    if (SIGNED(ctx->r12) >= 0) {
        // 0x151DF918: nop
    
            goto L_151DF920;
    }
    // 0x151DF918: nop

    // 0x151DF91C: sb          $s7, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r23;
L_151DF920:
    // 0x151DF920: b           L_151DF97C
    // 0x151DF924: sb          $t5, -0xD4($at)
    MEM_B(-0XD4, ctx->r1) = ctx->r13;
        goto L_151DF97C;
    // 0x151DF924: sb          $t5, -0xD4($at)
    MEM_B(-0XD4, ctx->r1) = ctx->r13;
L_151DF928:
    // 0x151DF928: addiu       $t7, $s0, 0x1
    ctx->r15 = ADD32(ctx->r16, 0X1);
    // 0x151DF92C: sb          $t7, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r15;
    // 0x151DF930: lb          $t6, 0x0($s3)
    ctx->r14 = MEM_B(ctx->r19, 0X0);
    // 0x151DF934: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151DF938: slti        $at, $t6, 0x9
    ctx->r1 = SIGNED(ctx->r14) < 0X9 ? 1 : 0;
    // 0x151DF93C: bne         $at, $zero, L_151DF948
    if (ctx->r1 != 0) {
        // 0x151DF940: nop
    
            goto L_151DF948;
    }
    // 0x151DF940: nop

    // 0x151DF944: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
L_151DF948:
    // 0x151DF948: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF94C: b           L_151DF97C
    // 0x151DF950: sb          $t8, -0xD4($at)
    MEM_B(-0XD4, ctx->r1) = ctx->r24;
        goto L_151DF97C;
    // 0x151DF950: sb          $t8, -0xD4($at)
    MEM_B(-0XD4, ctx->r1) = ctx->r24;
L_151DF954:
    // 0x151DF954: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x151DF958: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x151DF95C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151DF960: lbu         $t9, 0xA95($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0XA95);
    // 0x151DF964: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x151DF968: addu        $s6, $t9, $t4
    ctx->r22 = ADD32(ctx->r25, ctx->r12);
    // 0x151DF96C: slti        $at, $s6, 0x100
    ctx->r1 = SIGNED(ctx->r22) < 0X100 ? 1 : 0;
    // 0x151DF970: bnel        $at, $zero, L_151DF980
    if (ctx->r1 != 0) {
        // 0x151DF974: lw          $t5, 0x74($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X74);
            goto L_151DF980;
    }
    goto skip_7;
    // 0x151DF974: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    skip_7:
    // 0x151DF978: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
L_151DF97C:
    // 0x151DF97C: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
L_151DF980:
    // 0x151DF980: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x151DF984: addiu       $a1, $a1, 0xA95
    ctx->r5 = ADD32(ctx->r5, 0XA95);
    // 0x151DF988: multu       $s6, $t5
    result = U64(U32(ctx->r22)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151DF98C: sb          $s6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r22;
    // 0x151DF990: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151DF994: mflo        $s6
    ctx->r22 = lo;
    // 0x151DF998: sra         $t7, $s6, 8
    ctx->r15 = S32(SIGNED(ctx->r22) >> 8);
    // 0x151DF99C: slti        $at, $t7, 0xFE
    ctx->r1 = SIGNED(ctx->r15) < 0XFE ? 1 : 0;
    // 0x151DF9A0: bne         $at, $zero, L_151DF9AC
    if (ctx->r1 != 0) {
        // 0x151DF9A4: or          $s6, $t7, $zero
        ctx->r22 = ctx->r15 | 0;
            goto L_151DF9AC;
    }
    // 0x151DF9A4: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
    // 0x151DF9A8: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
L_151DF9AC:
    // 0x151DF9AC: lb          $a0, -0xDC($a0)
    ctx->r4 = MEM_B(ctx->r4, -0XDC);
    // 0x151DF9B0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF9B4: blez        $a0, L_151DF9CC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x151DF9B8: nop
    
            goto L_151DF9CC;
    }
    // 0x151DF9B8: nop

    // 0x151DF9BC: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x151DF9C0: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x151DF9C4: b           L_151DF9E0
    // 0x151DF9C8: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
        goto L_151DF9E0;
    // 0x151DF9C8: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
L_151DF9CC:
    // 0x151DF9CC: bgez        $a0, L_151DF9E0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x151DF9D0: nop
    
            goto L_151DF9E0;
    }
    // 0x151DF9D0: nop

    // 0x151DF9D4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x151DF9D8: sll         $t3, $a0, 24
    ctx->r11 = S32(ctx->r4 << 24);
    // 0x151DF9DC: sra         $a0, $t3, 24
    ctx->r4 = S32(SIGNED(ctx->r11) >> 24);
L_151DF9E0:
    // 0x151DF9E0: bne         $a0, $zero, L_151DFA74
    if (ctx->r4 != 0) {
        // 0x151DF9E4: sb          $a0, -0xDC($at)
        MEM_B(-0XDC, ctx->r1) = ctx->r4;
            goto L_151DFA74;
    }
    // 0x151DF9E4: sb          $a0, -0xDC($at)
    MEM_B(-0XDC, ctx->r1) = ctx->r4;
    // 0x151DF9E8: lbu         $t4, 0x0($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X0);
    // 0x151DF9EC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151DF9F0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151DF9F4: bne         $t4, $at, L_151DFA74
    if (ctx->r12 != ctx->r1) {
        // 0x151DF9F8: nop
    
            goto L_151DFA74;
    }
    // 0x151DF9F8: nop

    // 0x151DF9FC: lb          $v0, -0x16E5($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X16E5);
    // 0x151DFA00: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x151DFA04: addiu       $s4, $s4, -0x250
    ctx->r20 = ADD32(ctx->r20, -0X250);
    // 0x151DFA08: slti        $at, $v0, -0x31
    ctx->r1 = SIGNED(ctx->r2) < -0X31 ? 1 : 0;
    // 0x151DFA0C: beq         $at, $zero, L_151DFA3C
    if (ctx->r1 == 0) {
        // 0x151DFA10: addiu       $a0, $zero, -0xA
        ctx->r4 = ADD32(0, -0XA);
            goto L_151DFA3C;
    }
    // 0x151DFA10: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    // 0x151DFA14: lb          $v0, 0x0($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X0);
    // 0x151DFA18: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DFA1C: addiu       $t7, $zero, 0x4FF
    ctx->r15 = ADD32(0, 0X4FF);
    // 0x151DFA20: sb          $v0, -0xD8($at)
    MEM_B(-0XD8, ctx->r1) = ctx->r2;
    // 0x151DFA24: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x151DFA28: sb          $t5, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r13;
    // 0x151DFA2C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DFA30: sb          $a0, -0xDC($at)
    MEM_B(-0XDC, ctx->r1) = ctx->r4;
    // 0x151DFA34: b           L_151DFA74
    // 0x151DFA38: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
        goto L_151DFA74;
    // 0x151DFA38: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
L_151DFA3C:
    // 0x151DFA3C: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x151DFA40: bne         $at, $zero, L_151DFA74
    if (ctx->r1 != 0) {
        // 0x151DFA44: lui         $s4, 0x8009
        ctx->r20 = S32(0X8009 << 16);
            goto L_151DFA74;
    }
    // 0x151DFA44: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x151DFA48: addiu       $s4, $s4, -0x250
    ctx->r20 = ADD32(ctx->r20, -0X250);
    // 0x151DFA4C: lb          $v0, 0x0($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X0);
    // 0x151DFA50: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DFA54: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x151DFA58: sb          $v0, -0xD8($at)
    MEM_B(-0XD8, ctx->r1) = ctx->r2;
    // 0x151DFA5C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x151DFA60: sb          $t6, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r14;
    // 0x151DFA64: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DFA68: addiu       $t8, $zero, 0x4FF
    ctx->r24 = ADD32(0, 0X4FF);
    // 0x151DFA6C: sw          $t8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r24;
    // 0x151DFA70: sb          $a0, -0xDC($at)
    MEM_B(-0XDC, ctx->r1) = ctx->r4;
L_151DFA74:
    // 0x151DFA74: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x151DFA78: addiu       $s4, $s4, -0x250
    ctx->r20 = ADD32(ctx->r20, -0X250);
    // 0x151DFA7C: lb          $v0, 0x0($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X0);
    // 0x151DFA80: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151DFA84: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151DFA88: bgez        $v0, L_151DFAA4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151DFA8C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_151DFAA4;
    }
    // 0x151DFA8C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151DFA90: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
    // 0x151DFA94: lb          $v0, 0x0($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X0);
    // 0x151DFA98: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DFA9C: sb          $zero, -0xDC($at)
    MEM_B(-0XDC, ctx->r1) = 0;
    // 0x151DFAA0: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
L_151DFAA4:
    // 0x151DFAA4: slt         $at, $v0, $s2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x151DFAA8: bne         $at, $zero, L_151DFAC4
    if (ctx->r1 != 0) {
        // 0x151DFAAC: andi        $s7, $s6, 0xFF
        ctx->r23 = ctx->r22 & 0XFF;
            goto L_151DFAC4;
    }
    // 0x151DFAAC: andi        $s7, $s6, 0xFF
    ctx->r23 = ctx->r22 & 0XFF;
    // 0x151DFAB0: addiu       $t3, $s2, -0x1
    ctx->r11 = ADD32(ctx->r18, -0X1);
    // 0x151DFAB4: sb          $t3, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r11;
    // 0x151DFAB8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DFABC: sb          $zero, -0xDC($at)
    MEM_B(-0XDC, ctx->r1) = 0;
    // 0x151DFAC0: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
L_151DFAC4:
    // 0x151DFAC4: jal         0x1504332C
    // 0x151DFAC8: andi        $a3, $s7, 0xFF
    ctx->r7 = ctx->r23 & 0XFF;
    func_1504332C(rdram, ctx);
        goto after_3;
    // 0x151DFAC8: andi        $a3, $s7, 0xFF
    ctx->r7 = ctx->r23 & 0XFF;
    after_3:
    // 0x151DFACC: lb          $t9, 0x0($s3)
    ctx->r25 = MEM_B(ctx->r19, 0X0);
    // 0x151DFAD0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151DFAD4: addiu       $a3, $a3, -0x47F0
    ctx->r7 = ADD32(ctx->r7, -0X47F0);
    // 0x151DFAD8: addiu       $t4, $t9, 0x42
    ctx->r12 = ADD32(ctx->r25, 0X42);
    // 0x151DFADC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151DFAE0: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151DFAE4: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    // 0x151DFAE8: jal         0x15042D94
    // 0x151DFAEC: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    func_15042D94(rdram, ctx);
        goto after_4;
    // 0x151DFAEC: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    after_4:
    // 0x151DFAF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151DFAF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DFAF8: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x151DFAFC: blez        $s2, L_151DFB54
    if (SIGNED(ctx->r18) <= 0) {
        // 0x151DFB00: sw          $zero, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = 0;
            goto L_151DFB54;
    }
    // 0x151DFB00: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x151DFB04: addiu       $t5, $sp, 0x5C
    ctx->r13 = ADD32(ctx->r29, 0X5C);
    // 0x151DFB08: addu        $v1, $zero, $t5
    ctx->r3 = ADD32(0, ctx->r13);
L_151DFB0C:
    // 0x151DFB0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151DFB10: sllv        $t6, $t7, $v0
    ctx->r14 = S32(ctx->r15 << (ctx->r2 & 31));
    // 0x151DFB14: and         $t8, $t6, $s1
    ctx->r24 = ctx->r14 & ctx->r17;
    // 0x151DFB18: bne         $t8, $zero, L_151DFB38
    if (ctx->r24 != 0) {
        // 0x151DFB1C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_151DFB38;
    }
    // 0x151DFB1C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x151DFB20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_151DFB24:
    // 0x151DFB24: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151DFB28: sllv        $t9, $t3, $v0
    ctx->r25 = S32(ctx->r11 << (ctx->r2 & 31));
    // 0x151DFB2C: and         $t4, $t9, $s1
    ctx->r12 = ctx->r25 & ctx->r17;
    // 0x151DFB30: beql        $t4, $zero, L_151DFB24
    if (ctx->r12 == 0) {
        // 0x151DFB34: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_151DFB24;
    }
    goto skip_8;
    // 0x151DFB34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_8:
L_151DFB38:
    // 0x151DFB38: slt         $at, $a1, $s2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x151DFB3C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x151DFB40: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x151DFB44: bne         $at, $zero, L_151DFB0C
    if (ctx->r1 != 0) {
        // 0x151DFB48: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_151DFB0C;
    }
    // 0x151DFB48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151DFB4C: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x151DFB50: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
L_151DFB54:
    // 0x151DFB54: lb          $s0, 0x0($s3)
    ctx->r16 = MEM_B(ctx->r19, 0X0);
    // 0x151DFB58: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151DFB5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DFB60: addu        $t5, $s0, $s0
    ctx->r13 = ADD32(ctx->r16, ctx->r16);
    // 0x151DFB64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DFB68: andi        $a3, $s7, 0xFF
    ctx->r7 = ctx->r23 & 0XFF;
    // 0x151DFB6C: jal         0x1504332C
    // 0x151DFB70: addu        $fp, $t5, $s0
    ctx->r30 = ADD32(ctx->r13, ctx->r16);
    func_1504332C(rdram, ctx);
        goto after_5;
    // 0x151DFB70: addu        $fp, $t5, $s0
    ctx->r30 = ADD32(ctx->r13, ctx->r16);
    after_5:
    // 0x151DFB74: slti        $at, $s2, 0x6
    ctx->r1 = SIGNED(ctx->r18) < 0X6 ? 1 : 0;
    // 0x151DFB78: beq         $at, $zero, L_151DFB98
    if (ctx->r1 == 0) {
        // 0x151DFB7C: addiu       $s3, $zero, -0x1
        ctx->r19 = ADD32(0, -0X1);
            goto L_151DFB98;
    }
    // 0x151DFB7C: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x151DFB80: sll         $s1, $s2, 2
    ctx->r17 = S32(ctx->r18 << 2);
    // 0x151DFB84: subu        $s1, $s1, $s2
    ctx->r17 = SUB32(ctx->r17, ctx->r18);
    // 0x151DFB88: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x151DFB8C: addiu       $s0, $zero, 0x2F
    ctx->r16 = ADD32(0, 0X2F);
    // 0x151DFB90: b           L_151DFBD8
    // 0x151DFB94: subu        $s1, $s1, $s2
    ctx->r17 = SUB32(ctx->r17, ctx->r18);
        goto L_151DFBD8;
    // 0x151DFB94: subu        $s1, $s1, $s2
    ctx->r17 = SUB32(ctx->r17, ctx->r18);
L_151DFB98:
    // 0x151DFB98: lb          $t7, 0x0($s4)
    ctx->r15 = MEM_B(ctx->r20, 0X0);
    // 0x151DFB9C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151DFBA0: lb          $a0, -0xDC($a0)
    ctx->r4 = MEM_B(ctx->r4, -0XDC);
    // 0x151DFBA4: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x151DFBA8: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x151DFBAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151DFBB0: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x151DFBB4: negu        $t8, $t6
    ctx->r24 = SUB32(0, ctx->r14);
    // 0x151DFBB8: subu        $s0, $t8, $a0
    ctx->r16 = SUB32(ctx->r24, ctx->r4);
    // 0x151DFBBC: addiu       $s0, $s0, 0x45
    ctx->r16 = ADD32(ctx->r16, 0X45);
    // 0x151DFBC0: slti        $at, $s0, 0x30
    ctx->r1 = SIGNED(ctx->r16) < 0X30 ? 1 : 0;
    // 0x151DFBC4: bne         $at, $zero, L_151DFBD8
    if (ctx->r1 != 0) {
        // 0x151DFBC8: addiu       $s1, $zero, 0x37
        ctx->r17 = ADD32(0, 0X37);
            goto L_151DFBD8;
    }
    // 0x151DFBC8: addiu       $s1, $zero, 0x37
    ctx->r17 = ADD32(0, 0X37);
    // 0x151DFBCC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DFBD0: sb          $a0, -0xDC($at)
    MEM_B(-0XDC, ctx->r1) = ctx->r4;
    // 0x151DFBD4: addiu       $s0, $zero, 0x2F
    ctx->r16 = ADD32(0, 0X2F);
L_151DFBD8:
    // 0x151DFBD8: addiu       $v1, $s2, 0x3
    ctx->r3 = ADD32(ctx->r18, 0X3);
    // 0x151DFBDC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151DFBE0: addiu       $a1, $s2, -0x3
    ctx->r5 = ADD32(ctx->r18, -0X3);
    // 0x151DFBE4: slti        $at, $v1, -0x2
    ctx->r1 = SIGNED(ctx->r3) < -0X2 ? 1 : 0;
    // 0x151DFBE8: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x151DFBEC: lb          $a0, -0xDC($a0)
    ctx->r4 = MEM_B(ctx->r4, -0XDC);
    // 0x151DFBF0: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    // 0x151DFBF4: bne         $at, $zero, L_151DFE40
    if (ctx->r1 != 0) {
        // 0x151DFBF8: sw          $a1, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = ctx->r5;
            goto L_151DFE40;
    }
    // 0x151DFBF8: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x151DFBFC: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DFC00: addiu       $t3, $t3, -0xF8
    ctx->r11 = ADD32(ctx->r11, -0XF8);
    // 0x151DFC04: addu        $s4, $fp, $t3
    ctx->r20 = ADD32(ctx->r30, ctx->r11);
    // 0x151DFC08: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DFC0C: sb          $a0, -0xDC($at)
    MEM_B(-0XDC, ctx->r1) = ctx->r4;
    // 0x151DFC10: addiu       $fp, $zero, 0x19
    ctx->r30 = ADD32(0, 0X19);
    // 0x151DFC14: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x151DFC18: addiu       $s7, $sp, 0x5C
    ctx->r23 = ADD32(ctx->r29, 0X5C);
L_151DFC1C:
    // 0x151DFC1C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151DFC20: lb          $a0, -0xDC($a0)
    ctx->r4 = MEM_B(ctx->r4, -0XDC);
    // 0x151DFC24: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151DFC28: lb          $v0, -0x250($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X250);
    // 0x151DFC2C: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x151DFC30: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x151DFC34: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x151DFC38: bgez        $v1, L_151DFC44
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151DFC3C: or          $t2, $v1, $zero
        ctx->r10 = ctx->r3 | 0;
            goto L_151DFC44;
    }
    // 0x151DFC3C: or          $t2, $v1, $zero
    ctx->r10 = ctx->r3 | 0;
    // 0x151DFC40: negu        $t2, $v1
    ctx->r10 = SUB32(0, ctx->r3);
L_151DFC44:
    // 0x151DFC44: bne         $a1, $v0, L_151DFCAC
    if (ctx->r5 != ctx->r2) {
        // 0x151DFC48: lui         $t3, 0x8009
        ctx->r11 = S32(0X8009 << 16);
            goto L_151DFCAC;
    }
    // 0x151DFC48: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DFC4C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151DFC50: subu        $t2, $t9, $t2
    ctx->r10 = SUB32(ctx->r25, ctx->r10);
    // 0x151DFC54: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151DFC58: bne         $t2, $at, L_151DFCA0
    if (ctx->r10 != ctx->r1) {
        // 0x151DFC5C: addiu       $t8, $zero, 0x1F
        ctx->r24 = ADD32(0, 0X1F);
            goto L_151DFCA0;
    }
    // 0x151DFC5C: addiu       $t8, $zero, 0x1F
    ctx->r24 = ADD32(0, 0X1F);
    // 0x151DFC60: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x151DFC64: lbu         $a2, -0xD0($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0XD0);
    // 0x151DFC68: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x151DFC6C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151DFC70: sll         $v1, $a2, 1
    ctx->r3 = S32(ctx->r6 << 1);
    // 0x151DFC74: andi        $t4, $v1, 0x7F
    ctx->r12 = ctx->r3 & 0X7F;
    // 0x151DFC78: slti        $at, $t4, 0x40
    ctx->r1 = SIGNED(ctx->r12) < 0X40 ? 1 : 0;
    // 0x151DFC7C: bne         $at, $zero, L_151DFC88
    if (ctx->r1 != 0) {
        // 0x151DFC80: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_151DFC88;
    }
    // 0x151DFC80: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x151DFC84: subu        $a0, $t5, $t4
    ctx->r4 = SUB32(ctx->r13, ctx->r12);
L_151DFC88:
    // 0x151DFC88: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x151DFC8C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DFC90: addiu       $t2, $a0, 0xC0
    ctx->r10 = ADD32(ctx->r4, 0XC0);
    // 0x151DFC94: addu        $t6, $a2, $t7
    ctx->r14 = ADD32(ctx->r6, ctx->r15);
    // 0x151DFC98: b           L_151DFCC4
    // 0x151DFC9C: sb          $t6, -0xD0($at)
    MEM_B(-0XD0, ctx->r1) = ctx->r14;
        goto L_151DFCC4;
    // 0x151DFC9C: sb          $t6, -0xD0($at)
    MEM_B(-0XD0, ctx->r1) = ctx->r14;
L_151DFCA0:
    // 0x151DFCA0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DFCA4: b           L_151DFCC4
    // 0x151DFCA8: sb          $t8, -0xD0($at)
    MEM_B(-0XD0, ctx->r1) = ctx->r24;
        goto L_151DFCC4;
    // 0x151DFCA8: sb          $t8, -0xD0($at)
    MEM_B(-0XD0, ctx->r1) = ctx->r24;
L_151DFCAC:
    // 0x151DFCAC: lb          $t3, -0xD8($t3)
    ctx->r11 = MEM_B(ctx->r11, -0XD8);
    // 0x151DFCB0: bnel        $t3, $a1, L_151DFCC4
    if (ctx->r11 != ctx->r5) {
        // 0x151DFCB4: addiu       $t2, $zero, 0x80
        ctx->r10 = ADD32(0, 0X80);
            goto L_151DFCC4;
    }
    goto skip_9;
    // 0x151DFCB4: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    skip_9:
    // 0x151DFCB8: b           L_151DFCC4
    // 0x151DFCBC: addiu       $t2, $t2, 0x80
    ctx->r10 = ADD32(ctx->r10, 0X80);
        goto L_151DFCC4;
    // 0x151DFCBC: addiu       $t2, $t2, 0x80
    ctx->r10 = ADD32(ctx->r10, 0X80);
    // 0x151DFCC0: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
L_151DFCC4:
    // 0x151DFCC4: bne         $a1, $v0, L_151DFCE0
    if (ctx->r5 != ctx->r2) {
        // 0x151DFCC8: sw          $a1, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = ctx->r5;
            goto L_151DFCE0;
    }
    // 0x151DFCC8: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x151DFCCC: addu        $t9, $s7, $a1
    ctx->r25 = ADD32(ctx->r23, ctx->r5);
    // 0x151DFCD0: lb          $t4, 0x0($t9)
    ctx->r12 = MEM_B(ctx->r25, 0X0);
    // 0x151DFCD4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DFCD8: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x151DFCDC: sb          $t4, -0xFC($at)
    MEM_B(-0XFC, ctx->r1) = ctx->r12;
L_151DFCE0:
    // 0x151DFCE0: slti        $at, $s0, 0x50
    ctx->r1 = SIGNED(ctx->r16) < 0X50 ? 1 : 0;
    // 0x151DFCE4: beq         $at, $zero, L_151DFD00
    if (ctx->r1 == 0) {
        // 0x151DFCE8: addiu       $t5, $s1, 0x46
        ctx->r13 = ADD32(ctx->r17, 0X46);
            goto L_151DFD00;
    }
    // 0x151DFCE8: addiu       $t5, $s1, 0x46
    ctx->r13 = ADD32(ctx->r17, 0X46);
    // 0x151DFCEC: multu       $s0, $fp
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151DFCF0: mflo        $v0
    ctx->r2 = lo;
    // 0x151DFCF4: addiu       $v0, $v0, -0x6D6
    ctx->r2 = ADD32(ctx->r2, -0X6D6);
    // 0x151DFCF8: b           L_151DFD34
    // 0x151DFCFC: nop

        goto L_151DFD34;
    // 0x151DFCFC: nop

L_151DFD00:
    // 0x151DFD00: slt         $at, $t5, $s0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x151DFD04: beq         $at, $zero, L_151DFD30
    if (ctx->r1 == 0) {
        // 0x151DFD08: addiu       $t7, $s1, 0x50
        ctx->r15 = ADD32(ctx->r17, 0X50);
            goto L_151DFD30;
    }
    // 0x151DFD08: addiu       $t7, $s1, 0x50
    ctx->r15 = ADD32(ctx->r17, 0X50);
    // 0x151DFD0C: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x151DFD10: beq         $at, $zero, L_151DFD30
    if (ctx->r1 == 0) {
        // 0x151DFD14: subu        $t6, $s1, $s0
        ctx->r14 = SUB32(ctx->r17, ctx->r16);
            goto L_151DFD30;
    }
    // 0x151DFD14: subu        $t6, $s1, $s0
    ctx->r14 = SUB32(ctx->r17, ctx->r16);
    // 0x151DFD18: addiu       $t8, $t6, 0xA
    ctx->r24 = ADD32(ctx->r14, 0XA);
    // 0x151DFD1C: multu       $t8, $fp
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151DFD20: mflo        $v0
    ctx->r2 = lo;
    // 0x151DFD24: addiu       $v0, $v0, 0x6D6
    ctx->r2 = ADD32(ctx->r2, 0X6D6);
    // 0x151DFD28: b           L_151DFD34
    // 0x151DFD2C: nop

        goto L_151DFD34;
    // 0x151DFD2C: nop

L_151DFD30:
    // 0x151DFD30: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_151DFD34:
    // 0x151DFD34: bgezl       $v0, L_151DFD44
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151DFD38: slti        $at, $v0, 0xFA
        ctx->r1 = SIGNED(ctx->r2) < 0XFA ? 1 : 0;
            goto L_151DFD44;
    }
    goto skip_10;
    // 0x151DFD38: slti        $at, $v0, 0xFA
    ctx->r1 = SIGNED(ctx->r2) < 0XFA ? 1 : 0;
    skip_10:
    // 0x151DFD3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151DFD40: slti        $at, $v0, 0xFA
    ctx->r1 = SIGNED(ctx->r2) < 0XFA ? 1 : 0;
L_151DFD44:
    // 0x151DFD44: bnel        $at, $zero, L_151DFD54
    if (ctx->r1 != 0) {
        // 0x151DFD48: slt         $at, $s6, $v0
        ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_151DFD54;
    }
    goto skip_11;
    // 0x151DFD48: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    skip_11:
    // 0x151DFD4C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x151DFD50: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
L_151DFD54:
    // 0x151DFD54: beql        $at, $zero, L_151DFD64
    if (ctx->r1 == 0) {
        // 0x151DFD58: lbu         $t3, 0x0($s4)
        ctx->r11 = MEM_BU(ctx->r20, 0X0);
            goto L_151DFD64;
    }
    goto skip_12;
    // 0x151DFD58: lbu         $t3, 0x0($s4)
    ctx->r11 = MEM_BU(ctx->r20, 0X0);
    skip_12:
    // 0x151DFD5C: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x151DFD60: lbu         $t3, 0x0($s4)
    ctx->r11 = MEM_BU(ctx->r20, 0X0);
L_151DFD64:
    // 0x151DFD64: lbu         $t4, 0x1($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X1);
    // 0x151DFD68: lbu         $t7, 0x2($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X2);
    // 0x151DFD6C: multu       $t3, $t2
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151DFD70: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    // 0x151DFD74: mflo        $v1
    ctx->r3 = lo;
    // 0x151DFD78: sra         $t9, $v1, 8
    ctx->r25 = S32(SIGNED(ctx->r3) >> 8);
    // 0x151DFD7C: andi        $a0, $t9, 0xFF
    ctx->r4 = ctx->r25 & 0XFF;
    // 0x151DFD80: multu       $t4, $t2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151DFD84: mflo        $t0
    ctx->r8 = lo;
    // 0x151DFD88: sra         $t5, $t0, 8
    ctx->r13 = S32(SIGNED(ctx->r8) >> 8);
    // 0x151DFD8C: andi        $a1, $t5, 0xFF
    ctx->r5 = ctx->r13 & 0XFF;
    // 0x151DFD90: multu       $t7, $t2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151DFD94: mflo        $t1
    ctx->r9 = lo;
    // 0x151DFD98: sra         $t6, $t1, 8
    ctx->r14 = S32(SIGNED(ctx->r9) >> 8);
    // 0x151DFD9C: jal         0x1504332C
    // 0x151DFDA0: andi        $a2, $t6, 0xFF
    ctx->r6 = ctx->r14 & 0XFF;
    func_1504332C(rdram, ctx);
        goto after_6;
    // 0x151DFDA0: andi        $a2, $t6, 0xFF
    ctx->r6 = ctx->r14 & 0XFF;
    after_6:
    // 0x151DFDA4: slti        $at, $s0, 0x46
    ctx->r1 = SIGNED(ctx->r16) < 0X46 ? 1 : 0;
    // 0x151DFDA8: bne         $at, $zero, L_151DFDF8
    if (ctx->r1 != 0) {
        // 0x151DFDAC: addiu       $t8, $s1, 0x50
        ctx->r24 = ADD32(ctx->r17, 0X50);
            goto L_151DFDF8;
    }
    // 0x151DFDAC: addiu       $t8, $s1, 0x50
    ctx->r24 = ADD32(ctx->r17, 0X50);
    // 0x151DFDB0: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x151DFDB4: beql        $at, $zero, L_151DFDFC
    if (ctx->r1 == 0) {
        // 0x151DFDB8: lw          $a1, 0xB4($sp)
        ctx->r5 = MEM_W(ctx->r29, 0XB4);
            goto L_151DFDFC;
    }
    goto skip_13;
    // 0x151DFDB8: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    skip_13:
    // 0x151DFDBC: bne         $s3, $zero, L_151DFDF8
    if (ctx->r19 != 0) {
        // 0x151DFDC0: addiu       $a0, $zero, 0x94
        ctx->r4 = ADD32(0, 0X94);
            goto L_151DFDF8;
    }
    // 0x151DFDC0: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151DFDC4: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x151DFDC8: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x151DFDCC: lw          $t3, 0xB88($t3)
    ctx->r11 = MEM_W(ctx->r11, 0XB88);
    // 0x151DFDD0: addu        $t4, $s7, $t9
    ctx->r12 = ADD32(ctx->r23, ctx->r25);
    // 0x151DFDD4: lb          $t5, 0x0($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X0);
    // 0x151DFDD8: sll         $t8, $s5, 2
    ctx->r24 = S32(ctx->r21 << 2);
    // 0x151DFDDC: addiu       $a1, $s0, 0xF
    ctx->r5 = ADD32(ctx->r16, 0XF);
    // 0x151DFDE0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x151DFDE4: addu        $t6, $t3, $t7
    ctx->r14 = ADD32(ctx->r11, ctx->r15);
    // 0x151DFDE8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x151DFDEC: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x151DFDF0: jal         0x15042D94
    // 0x151DFDF4: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    func_15042D94(rdram, ctx);
        goto after_7;
    // 0x151DFDF4: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    after_7:
L_151DFDF8:
    // 0x151DFDF8: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
L_151DFDFC:
    // 0x151DFDFC: addiu       $s0, $s0, 0xB
    ctx->r16 = ADD32(ctx->r16, 0XB);
    // 0x151DFE00: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x151DFE04: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x151DFE08: slt         $at, $a1, $s2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x151DFE0C: bnel        $at, $zero, L_151DFE28
    if (ctx->r1 != 0) {
        // 0x151DFE10: lw          $t3, 0x54($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X54);
            goto L_151DFE28;
    }
    goto skip_14;
    // 0x151DFE10: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    skip_14:
    // 0x151DFE14: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x151DFE18: sll         $t4, $s3, 24
    ctx->r12 = S32(ctx->r19 << 24);
    // 0x151DFE1C: sra         $s3, $t4, 24
    ctx->r19 = S32(SIGNED(ctx->r12) >> 24);
    // 0x151DFE20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DFE24: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
L_151DFE28:
    // 0x151DFE28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151DFE2C: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    // 0x151DFE30: slt         $at, $v0, $t3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x151DFE34: bne         $at, $zero, L_151DFC1C
    if (ctx->r1 != 0) {
        // 0x151DFE38: nop
    
            goto L_151DFC1C;
    }
    // 0x151DFE38: nop

    // 0x151DFE3C: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
L_151DFE40:
    // 0x151DFE40: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151DFE44: lbu         $t7, 0xA95($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0XA95);
    // 0x151DFE48: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151DFE4C: bne         $t7, $at, L_151DFEE8
    if (ctx->r15 != ctx->r1) {
        // 0x151DFE50: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_151DFEE8;
    }
    // 0x151DFE50: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151DFE54: lw          $v1, -0x22C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X22C);
    // 0x151DFE58: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151DFE5C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DFE60: lhu         $v0, 0x20($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X20);
    // 0x151DFE64: addiu       $t9, $zero, 0x4FF
    ctx->r25 = ADD32(0, 0X4FF);
    // 0x151DFE68: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x151DFE6C: beq         $t6, $zero, L_151DFE84
    if (ctx->r14 == 0) {
        // 0x151DFE70: andi        $t4, $v0, 0x8
        ctx->r12 = ctx->r2 & 0X8;
            goto L_151DFE84;
    }
    // 0x151DFE70: andi        $t4, $v0, 0x8
    ctx->r12 = ctx->r2 & 0X8;
    // 0x151DFE74: sb          $t8, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r24;
    // 0x151DFE78: sw          $t9, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r25;
    // 0x151DFE7C: b           L_151DFEA0
    // 0x151DFE80: lhu         $v0, 0x20($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X20);
        goto L_151DFEA0;
    // 0x151DFE80: lhu         $v0, 0x20($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X20);
L_151DFE84:
    // 0x151DFE84: beq         $t4, $zero, L_151DFEA0
    if (ctx->r12 == 0) {
        // 0x151DFE88: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_151DFEA0;
    }
    // 0x151DFE88: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x151DFE8C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DFE90: addiu       $t3, $zero, 0x4FF
    ctx->r11 = ADD32(0, 0X4FF);
    // 0x151DFE94: sb          $t5, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r13;
    // 0x151DFE98: sw          $t3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r11;
    // 0x151DFE9C: lhu         $v0, 0x20($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X20);
L_151DFEA0:
    // 0x151DFEA0: andi        $t7, $v0, 0x10
    ctx->r15 = ctx->r2 & 0X10;
    // 0x151DFEA4: beq         $t7, $zero, L_151DFEE8
    if (ctx->r15 == 0) {
        // 0x151DFEA8: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_151DFEE8;
    }
    // 0x151DFEA8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151DFEAC: lbu         $t6, -0xFC($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0XFC);
    // 0x151DFEB0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151DFEB4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x151DFEB8: beq         $t6, $at, L_151DFEE8
    if (ctx->r14 == ctx->r1) {
        // 0x151DFEBC: lui         $t9, 0x151E
        ctx->r25 = S32(0X151E << 16);
            goto L_151DFEE8;
    }
    // 0x151DFEBC: lui         $t9, 0x151E
    ctx->r25 = S32(0X151E << 16);
    // 0x151DFEC0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DFEC4: sb          $t8, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r24;
    // 0x151DFEC8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DFECC: addiu       $t9, $t9, 0x30C4
    ctx->r25 = ADD32(ctx->r25, 0X30C4);
    // 0x151DFED0: sw          $t9, 0xA88($at)
    MEM_W(0XA88, ctx->r1) = ctx->r25;
    // 0x151DFED4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DFED8: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x151DFEDC: addiu       $t5, $zero, 0x500
    ctx->r13 = ADD32(0, 0X500);
    // 0x151DFEE0: sb          $t4, -0x28C($at)
    MEM_B(-0X28C, ctx->r1) = ctx->r12;
    // 0x151DFEE4: sw          $t5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r13;
L_151DFEE8:
    // 0x151DFEE8: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x151DFEEC: beq         $t3, $zero, L_151DFF08
    if (ctx->r11 == 0) {
        // 0x151DFEF0: or          $a0, $t3, $zero
        ctx->r4 = ctx->r11 | 0;
            goto L_151DFF08;
    }
    // 0x151DFEF0: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x151DFEF4: addiu       $a1, $zero, 0x4650
    ctx->r5 = ADD32(0, 0X4650);
    // 0x151DFEF8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151DFEFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151DFF00: jal         0x10010F30
    // 0x151DFF04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_8;
    // 0x151DFF04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
L_151DFF08:
    // 0x151DFF08: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151DFF0C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151DFF10: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x151DFF14: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x151DFF18: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x151DFF1C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x151DFF20: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x151DFF24: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x151DFF28: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x151DFF2C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x151DFF30: jr          $ra
    // 0x151DFF34: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    return;
    // 0x151DFF34: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_151D9918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D9918: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D991C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D9920: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151D9924: addiu       $t7, $t7, -0x4C74
    ctx->r15 = ADD32(ctx->r15, -0X4C74);
    // 0x151D9928: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151D992C: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x151D9930: addiu       $t6, $sp, 0x20
    ctx->r14 = ADD32(ctx->r29, 0X20);
    // 0x151D9934: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151D9938: jal         0x150ADA20
    // 0x151D993C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151D993C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    after_0:
    // 0x151D9940: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x151D9944: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151D9948: addu        $v0, $sp, $t2
    ctx->r2 = ADD32(ctx->r29, ctx->r10);
    // 0x151D994C: lbu         $v0, 0x23($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X23);
    // 0x151D9950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D9954: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D9958: jr          $ra
    // 0x151D995C: nop

    return;
    return;
    // 0x151D995C: nop

;}
RECOMP_FUNC void func_160016F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x160016F4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x160016F8: jr          $ra
    // 0x160016FC: nop

    return;
    return;
    // 0x160016FC: nop

;}
RECOMP_FUNC void func_15100180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15100180: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15100184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15100188: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1510018C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x15100190: lbu         $t6, 0x3B($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3B);
    // 0x15100194: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15100198: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    // 0x1510019C: jal         0x151494E0
    // 0x151001A0: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    func_151494E0(rdram, ctx);
        goto after_0;
    // 0x151001A0: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x151001A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151001A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151001AC: jr          $ra
    // 0x151001B0: nop

    return;
    return;
    // 0x151001B0: nop

;}
RECOMP_FUNC void func_150A613C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A613C: lh          $t0, 0x0($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X0);
    // 0x150A6140: lh          $t1, 0x2($t4)
    ctx->r9 = MEM_H(ctx->r12, 0X2);
    // 0x150A6144: mtc1        $t0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r8;
    // 0x150A6148: lh          $t0, 0x4($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X4);
    // 0x150A614C: mtc1        $t1, $f2
    ctx->f2.u32l = ctx->r9;
    // 0x150A6150: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x150A6154: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x150A6158: mul.s       $f14, $f1, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f22.fl);
    // 0x150A615C: mtc1        $t0, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r8;
    // 0x150A6160: mul.s       $f11, $f1, $f20
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f11.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x150A6164: add.s       $f14, $f14, $f31
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 31);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f31.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f31.fl;
    // 0x150A6168: mul.s       $f13, $f2, $f25
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f13.fl = MUL_S(ctx->f2.fl, ctx->f25.fl);
    // 0x150A616C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x150A6170: mul.s       $f0, $f2, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f23.fl);
    // 0x150A6174: add.s       $f14, $f14, $f13
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f13.fl;
    // 0x150A6178: mul.s       $f13, $f3, $f28
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f13.fl = MUL_S(ctx->f3.fl, ctx->f28.fl);
    // 0x150A617C: add.s       $f11, $f11, $f29
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 29);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f29.fl); 
    ctx->f11.fl = ctx->f11.fl + ctx->f29.fl;
    // 0x150A6180: add.s       $f15, $f14, $f13
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f15.fl = ctx->f14.fl + ctx->f13.fl;
    // 0x150A6184: mul.s       $f10, $f3, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f3.fl, ctx->f26.fl);
    // 0x150A6188: c.ole.s     $f15, $f19
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 19);
    c1cs = ctx->f15.fl <= ctx->f19.fl;
    // 0x150A618C: bc1tl       L_150A61A4
    if (c1cs) {
        // 0x150A6190: addiu       $t3, $zero, 0x10
        ctx->r11 = ADD32(0, 0X10);
            goto L_150A61A4;
    }
    goto skip_0;
    // 0x150A6190: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    skip_0:
    // 0x150A6194: c.ole.s     $f18, $f15
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 15);
    c1cs = ctx->f18.fl <= ctx->f15.fl;
    // 0x150A6198: bc1tl       L_150A61A4
    if (c1cs) {
        // 0x150A619C: addiu       $t3, $zero, 0x20
        ctx->r11 = ADD32(0, 0X20);
            goto L_150A61A4;
    }
    goto skip_1;
    // 0x150A619C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    skip_1:
    // 0x150A61A0: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
L_150A61A4:
    // 0x150A61A4: add.s       $f0, $f11, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f11.fl + ctx->f0.fl;
    // 0x150A61A8: mul.s       $f14, $f1, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f14.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x150A61AC: add.s       $f13, $f0, $f10
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f13.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x150A61B0: mul.s       $f11, $f2, $f24
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f11.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x150A61B4: mfc1        $at, $f13
    ctx->r1 = (int32_t)ctx->f_odd[(13 - 1) * 2];
    // 0x150A61B8: add.s       $f14, $f14, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f30.fl;
    // 0x150A61BC: mul.s       $f13, $f13, $f16
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f13.fl = MUL_S(ctx->f13.fl, ctx->f16.fl);
    // 0x150A61C0: add.s       $f14, $f14, $f11
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f11.fl;
    // 0x150A61C4: mul.s       $f10, $f3, $f27
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f10.fl = MUL_S(ctx->f3.fl, ctx->f27.fl);
    // 0x150A61C8: abs.s       $f0, $f13
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f13.fl); 
    ctx->f0.fl = fabsf(ctx->f13.fl);
    // 0x150A61CC: add.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x150A61D0: neg.s       $f3, $f15
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f15.fl); 
    ctx->f3.fl = -ctx->f15.fl;
    // 0x150A61D4: mul.s       $f14, $f14, $f17
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 17);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f17.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f17.fl);
    // 0x150A61D8: c.ole.s     $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x150A61DC: abs.s       $f11, $f14
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f11.fl = fabsf(ctx->f14.fl);
    // 0x150A61E0: bc1t        L_150A61F4
    if (c1cs) {
        // 0x150A61E4: c.ole.s     $f11, $f3
        CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f11.fl <= ctx->f3.fl;
            goto L_150A61F4;
    }
    // 0x150A61E4: c.ole.s     $f11, $f3
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f11.fl <= ctx->f3.fl;
    // 0x150A61E8: bltzl       $at, L_150A61F4
    if (SIGNED(ctx->r1) < 0) {
        // 0x150A61EC: ori         $t3, $t3, 0x2
        ctx->r11 = ctx->r11 | 0X2;
            goto L_150A61F4;
    }
    goto skip_2;
    // 0x150A61EC: ori         $t3, $t3, 0x2
    ctx->r11 = ctx->r11 | 0X2;
    skip_2:
    // 0x150A61F0: ori         $t3, $t3, 0x8
    ctx->r11 = ctx->r11 | 0X8;
L_150A61F4:
    // 0x150A61F4: bc1t        L_150A6208
    if (c1cs) {
        // 0x150A61F8: mfc1        $at, $f14
        ctx->r1 = (int32_t)ctx->f14.u32l;
            goto L_150A6208;
    }
    // 0x150A61F8: mfc1        $at, $f14
    ctx->r1 = (int32_t)ctx->f14.u32l;
    // 0x150A61FC: bltzl       $at, L_150A6208
    if (SIGNED(ctx->r1) < 0) {
        // 0x150A6200: ori         $t3, $t3, 0x4
        ctx->r11 = ctx->r11 | 0X4;
            goto L_150A6208;
    }
    goto skip_3;
    // 0x150A6200: ori         $t3, $t3, 0x4
    ctx->r11 = ctx->r11 | 0X4;
    skip_3:
    // 0x150A6204: ori         $t3, $t3, 0x1
    ctx->r11 = ctx->r11 | 0X1;
L_150A6208:
    // 0x150A6208: jr          $ra
    // 0x150A620C: and         $s2, $s2, $t3
    ctx->r18 = ctx->r18 & ctx->r11;
    return;
    return;
    // 0x150A620C: and         $s2, $s2, $t3
    ctx->r18 = ctx->r18 & ctx->r11;
;}
RECOMP_FUNC void func_1509DBBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509DBBC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1509DBC0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1509DBC4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1509DBC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509DBCC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1509DBD0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1509DBD4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x1509DBD8: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1509DBDC: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x1509DBE0: beq         $a2, $v0, L_1509DCB0
    if (ctx->r6 == ctx->r2) {
        // 0x1509DBE4: sw          $zero, 0x34($sp)
        MEM_W(0X34, ctx->r29) = 0;
            goto L_1509DCB0;
    }
    // 0x1509DBE4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1509DBE8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1509DBEC: beq         $a2, $at, L_1509DCB0
    if (ctx->r6 == ctx->r1) {
        // 0x1509DBF0: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_1509DCB0;
    }
    // 0x1509DBF0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1509DBF4: beq         $a2, $at, L_1509DCB0
    if (ctx->r6 == ctx->r1) {
        // 0x1509DBF8: addiu       $at, $zero, 0x19
        ctx->r1 = ADD32(0, 0X19);
            goto L_1509DCB0;
    }
    // 0x1509DBF8: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x1509DBFC: bne         $a2, $at, L_1509DCFC
    if (ctx->r6 != ctx->r1) {
        // 0x1509DC00: lw          $t6, 0x44($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X44);
            goto L_1509DCFC;
    }
    // 0x1509DC00: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x1509DC04: bne         $t6, $v0, L_1509DCFC
    if (ctx->r14 != ctx->r2) {
        // 0x1509DC08: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_1509DCFC;
    }
    // 0x1509DC08: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1509DC0C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x1509DC10: addiu       $a3, $a3, 0x6060
    ctx->r7 = ADD32(ctx->r7, 0X6060);
    // 0x1509DC14: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_1509DC18:
    // 0x1509DC18: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x1509DC1C: subu        $t7, $t7, $t0
    ctx->r15 = SUB32(ctx->r15, ctx->r8);
    // 0x1509DC20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1509DC24: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x1509DC28: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1509DC2C: addiu       $t8, $t8, -0x31B0
    ctx->r24 = ADD32(ctx->r24, -0X31B0);
    // 0x1509DC30: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x1509DC34: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x1509DC38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1509DC3C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
L_1509DC40:
    // 0x1509DC40: addu        $t1, $a3, $t9
    ctx->r9 = ADD32(ctx->r7, ctx->r25);
    // 0x1509DC44: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x1509DC48: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1509DC4C: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x1509DC50: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x1509DC54: addu        $t4, $a2, $t3
    ctx->r12 = ADD32(ctx->r6, ctx->r11);
    // 0x1509DC58: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x1509DC5C: sra         $a1, $t6, 24
    ctx->r5 = S32(SIGNED(ctx->r14) >> 24);
    // 0x1509DC60: slti        $at, $a1, 0x3
    ctx->r1 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x1509DC64: beq         $v0, $zero, L_1509DC8C
    if (ctx->r2 == 0) {
        // 0x1509DC68: nop
    
            goto L_1509DC8C;
    }
    // 0x1509DC68: nop

    // 0x1509DC6C: lbu         $t5, 0x48($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X48);
L_1509DC70:
    // 0x1509DC70: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x1509DC74: bne         $a0, $t5, L_1509DC84
    if (ctx->r4 != ctx->r13) {
        // 0x1509DC78: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1509DC84;
    }
    // 0x1509DC78: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1509DC7C: b           L_1509DCFC
    // 0x1509DC80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1509DCFC;
    // 0x1509DC80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509DC84:
    // 0x1509DC84: bnel        $v1, $zero, L_1509DC70
    if (ctx->r3 != 0) {
        // 0x1509DC88: lbu         $t5, 0x48($v0)
        ctx->r13 = MEM_BU(ctx->r2, 0X48);
            goto L_1509DC70;
    }
    goto skip_0;
    // 0x1509DC88: lbu         $t5, 0x48($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X48);
    skip_0:
L_1509DC8C:
    // 0x1509DC8C: bnel        $at, $zero, L_1509DC40
    if (ctx->r1 != 0) {
        // 0x1509DC90: sll         $t9, $a1, 2
        ctx->r25 = S32(ctx->r5 << 2);
            goto L_1509DC40;
    }
    goto skip_1;
    // 0x1509DC90: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    skip_1:
    // 0x1509DC94: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1509DC98: andi        $t8, $t0, 0xFF
    ctx->r24 = ctx->r8 & 0XFF;
    // 0x1509DC9C: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x1509DCA0: bne         $at, $zero, L_1509DC18
    if (ctx->r1 != 0) {
        // 0x1509DCA4: or          $t0, $t8, $zero
        ctx->r8 = ctx->r24 | 0;
            goto L_1509DC18;
    }
    // 0x1509DCA4: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x1509DCA8: b           L_1509DCFC
    // 0x1509DCAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1509DCFC;
    // 0x1509DCAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1509DCB0:
    // 0x1509DCB0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x1509DCB4: beq         $t9, $zero, L_1509DCC0
    if (ctx->r25 == 0) {
        // 0x1509DCB8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1509DCC0;
    }
    // 0x1509DCB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1509DCBC: bne         $t9, $at, L_1509DCFC
    if (ctx->r25 != ctx->r1) {
        // 0x1509DCC0: sra         $a0, $a2, 6
        ctx->r4 = S32(SIGNED(ctx->r6) >> 6);
            goto L_1509DCFC;
    }
L_1509DCC0:
    // 0x1509DCC0: sra         $a0, $a2, 6
    ctx->r4 = S32(SIGNED(ctx->r6) >> 6);
    // 0x1509DCC4: beq         $a0, $zero, L_1509DCFC
    if (ctx->r4 == 0) {
        // 0x1509DCC8: addiu       $a1, $sp, 0x3C
        ctx->r5 = ADD32(ctx->r29, 0X3C);
            goto L_1509DCFC;
    }
    // 0x1509DCC8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x1509DCCC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x1509DCD0: jal         0x150E36BC
    // 0x1509DCD4: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_150E36BC(rdram, ctx);
        goto after_0;
    // 0x1509DCD4: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x1509DCD8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x1509DCDC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x1509DCE0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x1509DCE4: bne         $t1, $zero, L_1509DCF8
    if (ctx->r9 != 0) {
        // 0x1509DCE8: andi        $t5, $t4, 0xFFFF
        ctx->r13 = ctx->r12 & 0XFFFF;
            goto L_1509DCF8;
    }
    // 0x1509DCE8: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x1509DCEC: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x1509DCF0: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x1509DCF4: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
L_1509DCF8:
    // 0x1509DCF8: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
L_1509DCFC:
    // 0x1509DCFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1509DD00: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1509DD04: jr          $ra
    // 0x1509DD08: nop

    return;
    return;
    // 0x1509DD08: nop

;}
RECOMP_FUNC void func_151D93F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D93F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D93F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D93FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D9400: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151D9404: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151D9408: jal         0x151D9450
    // 0x151D940C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_151D9450(rdram, ctx);
        goto after_0;
    // 0x151D940C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x151D9410: beq         $v0, $zero, L_151D943C
    if (ctx->r2 == 0) {
        // 0x151D9414: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_151D943C;
    }
    // 0x151D9414: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151D9418: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151D941C: jal         0x151D9534
    // 0x151D9420: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_151D9534(rdram, ctx);
        goto after_1;
    // 0x151D9420: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x151D9424: beq         $v0, $zero, L_151D9434
    if (ctx->r2 == 0) {
        // 0x151D9428: nop
    
            goto L_151D9434;
    }
    // 0x151D9428: nop

    // 0x151D942C: b           L_151D943C
    // 0x151D9430: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_151D943C;
    // 0x151D9430: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151D9434:
    // 0x151D9434: b           L_151D943C
    // 0x151D9438: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151D943C;
    // 0x151D9438: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151D943C:
    // 0x151D943C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151D9440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D9444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D9448: jr          $ra
    // 0x151D944C: nop

    return;
    return;
    // 0x151D944C: nop

;}
RECOMP_FUNC void func_1518F7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518F7C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1518F7C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518F7CC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1518F7D0: jal         0x150ADA68
    // 0x1518F7D4: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x1518F7D4: nop

    after_0:
    // 0x1518F7D8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1518F7DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1518F7E0: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1518F7E4: addiu       $v0, $a0, 0x30
    ctx->r2 = ADD32(ctx->r4, 0X30);
    // 0x1518F7E8: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1518F7EC: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1518F7F0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1518F7F4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1518F7F8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1518F7FC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1518F800: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x1518F804: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x1518F808: jal         0x1518F8E0
    // 0x1518F80C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_1518F8E0(rdram, ctx);
        goto after_1;
    // 0x1518F80C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x1518F810: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x1518F814: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1518F818: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1518F81C: lb          $v1, 0x58($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X58);
    // 0x1518F820: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518F824: beq         $v1, $at, L_1518F848
    if (ctx->r3 == ctx->r1) {
        // 0x1518F828: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_1518F848;
    }
    // 0x1518F828: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x1518F82C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x1518F830: lw          $t9, -0x2984($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2984);
    // 0x1518F834: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1518F838: jalr        $t9
    // 0x1518F83C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x1518F83C: nop

    after_2:
    // 0x1518F840: b           L_1518F84C
    // 0x1518F844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1518F84C;
    // 0x1518F844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1518F848:
    // 0x1518F848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1518F84C:
    // 0x1518F84C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1518F850: jr          $ra
    // 0x1518F854: nop

    return;
    return;
    // 0x1518F854: nop

;}
RECOMP_FUNC void func_1502BEE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502BEE4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x1502BEE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1502BEEC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1502BEF0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1502BEF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1502BEF8: jal         0x1503F964
    // 0x1502BEFC: nop

    func_1503F964(rdram, ctx);
        goto after_0;
    // 0x1502BEFC: nop

    after_0:
    // 0x1502BF00: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1502BF04: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1502BF08: addiu       $v1, $v1, 0x3E74
    ctx->r3 = ADD32(ctx->r3, 0X3E74);
    // 0x1502BF0C: sb          $zero, 0x3E90($at)
    MEM_B(0X3E90, ctx->r1) = 0;
    // 0x1502BF10: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x1502BF14: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1502BF18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1502BF1C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x1502BF20: addiu       $a0, $a0, 0x121C
    ctx->r4 = ADD32(ctx->r4, 0X121C);
    // 0x1502BF24: addiu       $s1, $s1, -0x3D30
    ctx->r17 = ADD32(ctx->r17, -0X3D30);
    // 0x1502BF28: lbu         $v0, 0x274($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X274);
L_1502BF2C:
    // 0x1502BF2C: addiu       $s1, $s1, 0x32C
    ctx->r17 = ADD32(ctx->r17, 0X32C);
    // 0x1502BF30: sltu        $at, $s1, $a0
    ctx->r1 = ctx->r17 < ctx->r4 ? 1 : 0;
    // 0x1502BF34: beq         $v0, $zero, L_1502BF50
    if (ctx->r2 == 0) {
        // 0x1502BF38: addiu       $t7, $v0, 0x1F
        ctx->r15 = ADD32(ctx->r2, 0X1F);
            goto L_1502BF50;
    }
    // 0x1502BF38: addiu       $t7, $v0, 0x1F
    ctx->r15 = ADD32(ctx->r2, 0X1F);
    // 0x1502BF3C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1502BF40: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1502BF44: sllv        $t9, $t8, $t7
    ctx->r25 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x1502BF48: or          $t2, $t6, $t9
    ctx->r10 = ctx->r14 | ctx->r25;
    // 0x1502BF4C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_1502BF50:
    // 0x1502BF50: bnel        $at, $zero, L_1502BF2C
    if (ctx->r1 != 0) {
        // 0x1502BF54: lbu         $v0, 0x274($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0X274);
            goto L_1502BF2C;
    }
    goto skip_0;
    // 0x1502BF54: lbu         $v0, 0x274($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X274);
    skip_0:
    // 0x1502BF58: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1502BF5C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x1502BF60: jal         0x100226F0
    // 0x1502BF64: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x1502BF64: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_1:
    // 0x1502BF68: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x1502BF6C: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x1502BF70: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x1502BF74: addiu       $s2, $s2, -0x3D30
    ctx->r18 = ADD32(ctx->r18, -0X3D30);
    // 0x1502BF78: addiu       $s1, $s1, -0x3D30
    ctx->r17 = ADD32(ctx->r17, -0X3D30);
    // 0x1502BF7C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1502BF80: addiu       $a2, $zero, 0x32C
    ctx->r6 = ADD32(0, 0X32C);
L_1502BF84:
    // 0x1502BF84: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x1502BF88: beql        $v0, $zero, L_1502C010
    if (ctx->r2 == 0) {
        // 0x1502BF8C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1502C010;
    }
    goto skip_1;
    // 0x1502BF8C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x1502BF90: lbu         $t3, 0x65($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X65);
    // 0x1502BF94: addiu       $t4, $sp, 0x3C
    ctx->r12 = ADD32(ctx->r29, 0X3C);
    // 0x1502BF98: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502BF9C: beq         $t3, $zero, L_1502BFFC
    if (ctx->r11 == 0) {
        // 0x1502BFA0: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_1502BFFC;
    }
    // 0x1502BFA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1502BFA4: lbu         $t5, 0x65($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X65);
    // 0x1502BFA8: addu        $v1, $s0, $t4
    ctx->r3 = ADD32(ctx->r16, ctx->r12);
    // 0x1502BFAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502BFB0: beq         $t5, $zero, L_1502BFE4
    if (ctx->r13 == 0) {
        // 0x1502BFB4: sb          $zero, 0x0($v1)
        MEM_B(0X0, ctx->r3) = 0;
            goto L_1502BFE4;
    }
    // 0x1502BFB4: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x1502BFB8: lbu         $v0, 0x65($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X65);
L_1502BFBC:
    // 0x1502BFBC: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1502BFC0: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x1502BFC4: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x1502BFC8: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x1502BFCC: mflo        $t8
    ctx->r24 = lo;
    // 0x1502BFD0: addu        $a0, $s2, $t8
    ctx->r4 = ADD32(ctx->r18, ctx->r24);
    // 0x1502BFD4: lbu         $v0, -0x2C7($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X2C7);
    // 0x1502BFD8: addiu       $a0, $a0, -0x32C
    ctx->r4 = ADD32(ctx->r4, -0X32C);
    // 0x1502BFDC: bne         $v0, $zero, L_1502BFBC
    if (ctx->r2 != 0) {
        // 0x1502BFE0: nop
    
            goto L_1502BFBC;
    }
    // 0x1502BFE0: nop

L_1502BFE4:
    // 0x1502BFE4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x1502BFE8: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1502BFEC: beql        $at, $zero, L_1502C010
    if (ctx->r1 == 0) {
        // 0x1502BFF0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1502C010;
    }
    goto skip_2;
    // 0x1502BFF0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x1502BFF4: b           L_1502C00C
    // 0x1502BFF8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
        goto L_1502C00C;
    // 0x1502BFF8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_1502BFFC:
    // 0x1502BFFC: jal         0x1502BD84
    // 0x1502C000: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_1502BD84(rdram, ctx);
        goto after_2;
    // 0x1502C000: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_2:
    // 0x1502C004: addiu       $a2, $zero, 0x32C
    ctx->r6 = ADD32(0, 0X32C);
    // 0x1502C008: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
L_1502C00C:
    // 0x1502C00C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1502C010:
    // 0x1502C010: slti        $at, $s0, 0x19
    ctx->r1 = SIGNED(ctx->r16) < 0X19 ? 1 : 0;
    // 0x1502C014: bne         $at, $zero, L_1502BF84
    if (ctx->r1 != 0) {
        // 0x1502C018: addiu       $s1, $s1, 0x32C
        ctx->r17 = ADD32(ctx->r17, 0X32C);
            goto L_1502BF84;
    }
    // 0x1502C018: addiu       $s1, $s1, 0x32C
    ctx->r17 = ADD32(ctx->r17, 0X32C);
    // 0x1502C01C: beq         $a3, $zero, L_1502C12C
    if (ctx->r7 == 0) {
        // 0x1502C020: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1502C12C;
    }
    // 0x1502C020: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1502C024: blez        $a3, L_1502C0D4
    if (SIGNED(ctx->r7) <= 0) {
        // 0x1502C028: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_1502C0D4;
    }
    // 0x1502C028: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x1502C02C: addiu       $t0, $a3, 0x1
    ctx->r8 = ADD32(ctx->r7, 0X1);
    // 0x1502C030: lbu         $t1, 0x3C($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3C);
    // 0x1502C034: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x1502C038: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
L_1502C03C:
    // 0x1502C03C: bne         $s0, $t1, L_1502C050
    if (ctx->r16 != ctx->r9) {
        // 0x1502C040: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1502C050;
    }
    // 0x1502C040: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1502C044: addu        $t9, $a1, $v1
    ctx->r25 = ADD32(ctx->r5, ctx->r3);
    // 0x1502C048: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
    // 0x1502C04C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_1502C050:
    // 0x1502C050: addiu       $a0, $sp, 0x3D
    ctx->r4 = ADD32(ctx->r29, 0X3D);
L_1502C054:
    // 0x1502C054: lbu         $t2, 0x0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X0);
    // 0x1502C058: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x1502C05C: addiu       $t6, $v0, 0x2
    ctx->r14 = ADD32(ctx->r2, 0X2);
    // 0x1502C060: bne         $s0, $t2, L_1502C070
    if (ctx->r16 != ctx->r10) {
        // 0x1502C064: addu        $t3, $a1, $v1
        ctx->r11 = ADD32(ctx->r5, ctx->r3);
            goto L_1502C070;
    }
    // 0x1502C064: addu        $t3, $a1, $v1
    ctx->r11 = ADD32(ctx->r5, ctx->r3);
    // 0x1502C068: sb          $v0, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r2;
    // 0x1502C06C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_1502C070:
    // 0x1502C070: lbu         $t4, 0x1($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X1);
    // 0x1502C074: addu        $t8, $a1, $v1
    ctx->r24 = ADD32(ctx->r5, ctx->r3);
    // 0x1502C078: addiu       $t3, $v0, 0x3
    ctx->r11 = ADD32(ctx->r2, 0X3);
    // 0x1502C07C: bnel        $s0, $t4, L_1502C090
    if (ctx->r16 != ctx->r12) {
        // 0x1502C080: lbu         $t7, 0x2($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X2);
            goto L_1502C090;
    }
    goto skip_3;
    // 0x1502C080: lbu         $t7, 0x2($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X2);
    skip_3:
    // 0x1502C084: sb          $t5, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r13;
    // 0x1502C088: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1502C08C: lbu         $t7, 0x2($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X2);
L_1502C090:
    // 0x1502C090: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1502C094: addu        $t9, $a1, $v1
    ctx->r25 = ADD32(ctx->r5, ctx->r3);
    // 0x1502C098: bnel        $s0, $t7, L_1502C0AC
    if (ctx->r16 != ctx->r15) {
        // 0x1502C09C: lbu         $t2, 0x3($a0)
        ctx->r10 = MEM_BU(ctx->r4, 0X3);
            goto L_1502C0AC;
    }
    goto skip_4;
    // 0x1502C09C: lbu         $t2, 0x3($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X3);
    skip_4:
    // 0x1502C0A0: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x1502C0A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1502C0A8: lbu         $t2, 0x3($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X3);
L_1502C0AC:
    // 0x1502C0AC: addu        $t4, $a1, $v1
    ctx->r12 = ADD32(ctx->r5, ctx->r3);
    // 0x1502C0B0: bne         $s0, $t2, L_1502C0C0
    if (ctx->r16 != ctx->r10) {
        // 0x1502C0B4: nop
    
            goto L_1502C0C0;
    }
    // 0x1502C0B4: nop

    // 0x1502C0B8: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x1502C0BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_1502C0C0:
    // 0x1502C0C0: bne         $v0, $a2, L_1502C054
    if (ctx->r2 != ctx->r6) {
        // 0x1502C0C4: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_1502C054;
    }
    // 0x1502C0C4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1502C0C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1502C0CC: bne         $t0, $s0, L_1502C03C
    if (ctx->r8 != ctx->r16) {
        // 0x1502C0D0: nop
    
            goto L_1502C03C;
    }
    // 0x1502C0D0: nop

L_1502C0D4:
    // 0x1502C0D4: blez        $v1, L_1502C12C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x1502C0D8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_1502C12C;
    }
    // 0x1502C0D8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1502C0DC: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x1502C0E0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
L_1502C0E4:
    // 0x1502C0E4: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x1502C0E8: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x1502C0EC: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x1502C0F0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1502C0F4: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x1502C0F8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1502C0FC: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x1502C100: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1502C104: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x1502C108: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1502C10C: addu        $a0, $s2, $t5
    ctx->r4 = ADD32(ctx->r18, ctx->r13);
    // 0x1502C110: jal         0x1502BD84
    // 0x1502C114: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_1502BD84(rdram, ctx);
        goto after_3;
    // 0x1502C114: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x1502C118: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x1502C11C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1502C120: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1502C124: bnel        $s0, $v1, L_1502C0E4
    if (ctx->r16 != ctx->r3) {
        // 0x1502C128: lbu         $v0, 0x0($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0X0);
            goto L_1502C0E4;
    }
    goto skip_5;
    // 0x1502C128: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    skip_5:
L_1502C12C:
    // 0x1502C12C: jal         0x1502F3C8
    // 0x1502C130: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_1502F3C8(rdram, ctx);
        goto after_4;
    // 0x1502C130: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_4:
    // 0x1502C134: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x1502C138: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x1502C13C: addiu       $s0, $s0, 0x121C
    ctx->r16 = ADD32(ctx->r16, 0X121C);
    // 0x1502C140: addiu       $s1, $s1, -0x3D30
    ctx->r17 = ADD32(ctx->r17, -0X3D30);
    // 0x1502C144: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
L_1502C148:
    // 0x1502C148: beql        $t8, $zero, L_1502C15C
    if (ctx->r24 == 0) {
        // 0x1502C14C: addiu       $s1, $s1, 0x32C
        ctx->r17 = ADD32(ctx->r17, 0X32C);
            goto L_1502C15C;
    }
    goto skip_6;
    // 0x1502C14C: addiu       $s1, $s1, 0x32C
    ctx->r17 = ADD32(ctx->r17, 0X32C);
    skip_6:
    // 0x1502C150: jal         0x1502F948
    // 0x1502C154: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_1502F948(rdram, ctx);
        goto after_5;
    // 0x1502C154: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x1502C158: addiu       $s1, $s1, 0x32C
    ctx->r17 = ADD32(ctx->r17, 0X32C);
L_1502C15C:
    // 0x1502C15C: bnel        $s1, $s0, L_1502C148
    if (ctx->r17 != ctx->r16) {
        // 0x1502C160: lw          $t8, 0x0($s1)
        ctx->r24 = MEM_W(ctx->r17, 0X0);
            goto L_1502C148;
    }
    goto skip_7;
    // 0x1502C160: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    skip_7:
    // 0x1502C164: jal         0x15030468
    // 0x1502C168: nop

    func_15030468(rdram, ctx);
        goto after_6;
    // 0x1502C168: nop

    after_6:
    // 0x1502C16C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1502C170: lbu         $t7, -0x1540($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1540);
    // 0x1502C174: bne         $t7, $zero, L_1502C184
    if (ctx->r15 != 0) {
        // 0x1502C178: nop
    
            goto L_1502C184;
    }
    // 0x1502C178: nop

    // 0x1502C17C: jal         0x1507C22C
    // 0x1502C180: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1507C22C(rdram, ctx);
        goto after_7;
    // 0x1502C180: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
L_1502C184:
    // 0x1502C184: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1502C188: sb          $zero, 0x3E70($at)
    MEM_B(0X3E70, ctx->r1) = 0;
    // 0x1502C18C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1502C190: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1502C194: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1502C198: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1502C19C: jr          $ra
    // 0x1502C1A0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    return;
    // 0x1502C1A0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_151511FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151511FC: addiu       $sp, $sp, -0x148
    ctx->r29 = ADD32(ctx->r29, -0X148);
    // 0x15151200: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15151204: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x15151208: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x1515120C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x15151210: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x15151214: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x15151218: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1515121C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15151220: addiu       $s1, $sp, 0x138
    ctx->r17 = ADD32(ctx->r29, 0X138);
    // 0x15151224: addiu       $s2, $sp, 0x124
    ctx->r18 = ADD32(ctx->r29, 0X124);
    // 0x15151228: addiu       $s3, $sp, 0x110
    ctx->r19 = ADD32(ctx->r29, 0X110);
    // 0x1515122C: andi        $fp, $a1, 0xFF
    ctx->r30 = ctx->r5 & 0XFF;
    // 0x15151230: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x15151234: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x15151238: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x1515123C: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x15151240: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x15151244: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x15151248: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x1515124C: sw          $a1, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r5;
    // 0x15151250: sw          $a2, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r6;
    // 0x15151254: lh          $t6, 0x68($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X68);
    // 0x15151258: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1515125C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15151260: sh          $t6, 0x104($sp)
    MEM_H(0X104, ctx->r29) = ctx->r14;
    // 0x15151264: lh          $t7, 0x6A($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X6A);
    // 0x15151268: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1515126C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15151270: sh          $t7, 0x106($sp)
    MEM_H(0X106, ctx->r29) = ctx->r15;
    // 0x15151274: lbu         $t8, 0x34($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X34);
    // 0x15151278: addiu       $t5, $sp, 0xCC
    ctx->r13 = ADD32(ctx->r29, 0XCC);
    // 0x1515127C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x15151280: sb          $t8, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r24;
    // 0x15151284: lbu         $t9, 0x35($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X35);
    // 0x15151288: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x1515128C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x15151290: sb          $t9, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r25;
    // 0x15151294: lhu         $t0, 0x36($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X36);
    // 0x15151298: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x1515129C: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x151512A0: sb          $t1, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r9;
    // 0x151512A4: sb          $t2, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r10;
    // 0x151512A8: sb          $t3, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r11;
    // 0x151512AC: sb          $t4, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = ctx->r12;
    // 0x151512B0: sh          $t0, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r8;
    // 0x151512B4: lw          $at, 0x4($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X4);
    // 0x151512B8: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x151512BC: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x151512C0: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x151512C4: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x151512C8: lw          $at, 0xC($s0)
    ctx->r1 = MEM_W(ctx->r16, 0XC);
    // 0x151512CC: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x151512D0: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x151512D4: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x151512D8: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x151512DC: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x151512E0: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x151512E4: sb          $t1, 0xF5($sp)
    MEM_B(0XF5, ctx->r29) = ctx->r9;
    // 0x151512E8: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x151512EC: sw          $t0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r8;
    // 0x151512F0: lbu         $t2, 0x5C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X5C);
    // 0x151512F4: sb          $t2, 0xF6($sp)
    MEM_B(0XF6, ctx->r29) = ctx->r10;
    // 0x151512F8: lbu         $t3, 0x5D($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X5D);
    // 0x151512FC: sb          $t3, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r11;
    // 0x15151300: lwc1        $f4, 0x6C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x15151304: jal         0x15144E80
    // 0x15151308: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    func_15144E80(rdram, ctx);
        goto after_0;
    // 0x15151308: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1515130C: beq         $v0, $zero, L_15151638
    if (ctx->r2 == 0) {
        // 0x15151310: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_15151638;
    }
    // 0x15151310: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15151314: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15151318: addiu       $a2, $sp, 0x134
    ctx->r6 = ADD32(ctx->r29, 0X134);
    // 0x1515131C: jal         0x15145128
    // 0x15151320: addiu       $a3, $sp, 0x130
    ctx->r7 = ADD32(ctx->r29, 0X130);
    func_15145128(rdram, ctx);
        goto after_1;
    // 0x15151320: addiu       $a3, $sp, 0x130
    ctx->r7 = ADD32(ctx->r29, 0X130);
    after_1:
    // 0x15151324: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15151328: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x1515132C: addiu       $a2, $sp, 0x120
    ctx->r6 = ADD32(ctx->r29, 0X120);
    // 0x15151330: jal         0x15145128
    // 0x15151334: addiu       $a3, $sp, 0x11C
    ctx->r7 = ADD32(ctx->r29, 0X11C);
    func_15145128(rdram, ctx);
        goto after_2;
    // 0x15151334: addiu       $a3, $sp, 0x11C
    ctx->r7 = ADD32(ctx->r29, 0X11C);
    after_2:
    // 0x15151338: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1515133C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15151340: addiu       $a2, $sp, 0x10C
    ctx->r6 = ADD32(ctx->r29, 0X10C);
    // 0x15151344: jal         0x15145128
    // 0x15151348: addiu       $a3, $sp, 0x108
    ctx->r7 = ADD32(ctx->r29, 0X108);
    func_15145128(rdram, ctx);
        goto after_3;
    // 0x15151348: addiu       $a3, $sp, 0x108
    ctx->r7 = ADD32(ctx->r29, 0X108);
    after_3:
    // 0x1515134C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15151350: jal         0x15144A74
    // 0x15151354: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    func_15144A74(rdram, ctx);
        goto after_4;
    // 0x15151354: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_4:
    // 0x15151358: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x1515135C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x15151360: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x15151364: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15151368: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1515136C: bc1fl       L_15151398
    if (!c1cs) {
        // 0x15151370: lwc1        $f6, 0x110($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
            goto L_15151398;
    }
    goto skip_0;
    // 0x15151370: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    skip_0:
    // 0x15151374: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x15151378: lwc1        $f18, 0x118($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X118);
    // 0x1515137C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x15151380: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x15151384: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x15151388: swc1        $f8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f8.u32l;
    // 0x1515138C: swc1        $f16, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f16.u32l;
    // 0x15151390: swc1        $f4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f4.u32l;
    // 0x15151394: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
L_15151398:
    // 0x15151398: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x1515139C: lwc1        $f18, 0x118($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X118);
    // 0x151513A0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151513A4: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    // 0x151513A8: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151513AC: nop

    // 0x151513B0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151513B4: swc1        $f8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f8.u32l;
    // 0x151513B8: swc1        $f16, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f16.u32l;
    // 0x151513BC: jal         0x150ADA20
    // 0x151513C0: swc1        $f4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151513C0: swc1        $f4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x151513C4: lh          $t4, 0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2);
    // 0x151513C8: lh          $t5, 0x0($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X0);
    // 0x151513CC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x151513D0: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x151513D4: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x151513D8: mfhi        $t6
    ctx->r14 = hi;
    // 0x151513DC: addu        $s2, $t6, $t5
    ctx->r18 = ADD32(ctx->r14, ctx->r13);
    // 0x151513E0: bne         $t7, $zero, L_151513EC
    if (ctx->r15 != 0) {
        // 0x151513E4: nop
    
            goto L_151513EC;
    }
    // 0x151513E4: nop

    // 0x151513E8: break       7
    do_break(353702888);
L_151513EC:
    // 0x151513EC: addiu       $s7, $sp, 0x90
    ctx->r23 = ADD32(ctx->r29, 0X90);
    // 0x151513F0: beq         $s2, $zero, L_15151638
    if (ctx->r18 == 0) {
        // 0x151513F4: lui         $s6, 0x800A
        ctx->r22 = S32(0X800A << 16);
            goto L_15151638;
    }
    // 0x151513F4: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x151513F8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x151513FC: addiu       $s6, $s6, 0x4AA0
    ctx->r22 = ADD32(ctx->r22, 0X4AA0);
    // 0x15151400: addiu       $s5, $sp, 0xB0
    ctx->r21 = ADD32(ctx->r29, 0XB0);
    // 0x15151404: addiu       $s4, $sp, 0x88
    ctx->r20 = ADD32(ctx->r29, 0X88);
    // 0x15151408: addiu       $s3, $sp, 0x84
    ctx->r19 = ADD32(ctx->r29, 0X84);
L_1515140C:
    // 0x1515140C: jal         0x150ADA20
    // 0x15151410: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x15151410: nop

    after_6:
    // 0x15151414: jal         0x150ADA68
    // 0x15151418: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x15151418: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_7:
    // 0x1515141C: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15151420: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x15151424: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x15151428: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1515142C: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15151430: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x15151434: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x15151438: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x1515143C: jal         0x15143874
    // 0x15151440: nop

    func_15143874(rdram, ctx);
        goto after_8;
    // 0x15151440: nop

    after_8:
    // 0x15151444: jal         0x150ADA68
    // 0x15151448: nop

    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x15151448: nop

    after_9:
    // 0x1515144C: lwc1        $f10, 0x58($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X58);
    // 0x15151450: lwc1        $f18, 0x54($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X54);
    // 0x15151454: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15151458: jal         0x150ADA68
    // 0x1515145C: add.s       $f20, $f16, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f18.fl;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x1515145C: add.s       $f20, $f16, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f18.fl;
    after_10:
    // 0x15151460: lh          $t0, 0x3A($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X3A);
    // 0x15151464: lh          $t1, 0x38($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X38);
    // 0x15151468: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x1515146C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x15151470: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15151474: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15151478: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1515147C: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x15151480: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15151484: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x15151488: jal         0x150ADA68
    // 0x1515148C: sh          $t3, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r11;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x1515148C: sh          $t3, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r11;
    after_11:
    // 0x15151490: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x15151494: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15151498: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1515149C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151514A0: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x151514A4: jal         0x150ADA68
    // 0x151514A8: swc1        $f16, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x151514A8: swc1        $f16, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x151514AC: mul.s       $f18, $f0, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x151514B0: jal         0x150ADA68
    // 0x151514B4: swc1        $f18, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x151514B4: swc1        $f18, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f18.u32l;
    after_13:
    // 0x151514B8: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x151514BC: jal         0x150ADA68
    // 0x151514C0: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x151514C0: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x151514C4: mul.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x151514C8: jal         0x150ADA20
    // 0x151514CC: swc1        $f6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x151514CC: swc1        $f6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x151514D0: lbu         $t4, 0x49($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X49);
    // 0x151514D4: lwc1        $f10, 0x138($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
    // 0x151514D8: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x151514DC: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x151514E0: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x151514E4: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x151514E8: lwc1        $f18, 0x124($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X124);
    // 0x151514EC: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151514F0: lbu         $t5, 0x48($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X48);
    // 0x151514F4: mfhi        $t6
    ctx->r14 = hi;
    // 0x151514F8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151514FC: lwc1        $f18, 0x110($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X110);
    // 0x15151500: bne         $t7, $zero, L_1515150C
    if (ctx->r15 != 0) {
        // 0x15151504: nop
    
            goto L_1515150C;
    }
    // 0x15151504: nop

    // 0x15151508: break       7
    do_break(353703176);
L_1515150C:
    // 0x1515150C: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x15151510: addu        $t8, $t6, $t5
    ctx->r24 = ADD32(ctx->r14, ctx->r13);
    // 0x15151514: sb          $t8, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r24;
    // 0x15151518: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x1515151C: lwc1        $f10, 0x13C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x15151520: mul.s       $f6, $f16, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x15151524: lwc1        $f16, 0x128($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X128);
    // 0x15151528: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x1515152C: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x15151530: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x15151534: lwc1        $f16, 0x114($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X114);
    // 0x15151538: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x1515153C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15151540: lwc1        $f10, 0x140($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X140);
    // 0x15151544: mul.s       $f6, $f18, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x15151548: lwc1        $f18, 0x12C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1515154C: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x15151550: lwc1        $f8, 0x118($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X118);
    // 0x15151554: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x15151558: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1515155C: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x15151560: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15151564: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x15151568: jal         0x150ADA68
    // 0x1515156C: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_16;
    // 0x1515156C: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    after_16:
    // 0x15151570: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
    // 0x15151574: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x15151578: mul.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1515157C: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15151580: jal         0x150ADA68
    // 0x15151584: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_17;
    // 0x15151584: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x15151588: lwc1        $f20, 0x70($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X70);
    // 0x1515158C: add.s       $f18, $f20, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f20.fl + ctx->f20.fl;
    // 0x15151590: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x15151594: sub.s       $f16, $f4, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x15151598: jal         0x150ADA68
    // 0x1515159C: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_18;
    // 0x1515159C: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    after_18:
    // 0x151515A0: lwc1        $f20, 0x70($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, 0X70);
    // 0x151515A4: add.s       $f6, $f20, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f20.fl + ctx->f20.fl;
    // 0x151515A8: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151515AC: sub.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x151515B0: jal         0x150ADA20
    // 0x151515B4: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_19;
    // 0x151515B4: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    after_19:
    // 0x151515B8: jal         0x150ADA20
    // 0x151515BC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_20;
    // 0x151515BC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_20:
    // 0x151515C0: andi        $t1, $s1, 0x1
    ctx->r9 = ctx->r17 & 0X1;
    // 0x151515C4: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x151515C8: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x151515CC: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x151515D0: addiu       $t9, $zero, 0x17
    ctx->r25 = ADD32(0, 0X17);
    // 0x151515D4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151515D8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x151515DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151515E0: lw          $t4, 0x60($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X60);
    // 0x151515E4: lw          $t5, 0x150($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X150);
    // 0x151515E8: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x151515EC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x151515F0: lw          $t7, 0x64($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X64);
    // 0x151515F4: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x151515F8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x151515FC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x15151600: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x15151604: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x15151608: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1515160C: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x15151610: jal         0x1513D2F0
    // 0x15151614: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_1513D2F0(rdram, ctx);
        goto after_21;
    // 0x15151614: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_21:
    // 0x15151618: beq         $v0, $zero, L_1515162C
    if (ctx->r2 == 0) {
        // 0x1515161C: addiu       $a0, $v0, 0x110
        ctx->r4 = ADD32(ctx->r2, 0X110);
            goto L_1515162C;
    }
    // 0x1515161C: addiu       $a0, $v0, 0x110
    ctx->r4 = ADD32(ctx->r2, 0X110);
    // 0x15151620: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x15151624: jal         0x10022EC0
    // 0x15151628: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_22;
    // 0x15151628: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_22:
L_1515162C:
    // 0x1515162C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x15151630: bne         $s2, $zero, L_1515140C
    if (ctx->r18 != 0) {
        // 0x15151634: nop
    
            goto L_1515140C;
    }
    // 0x15151634: nop

L_15151638:
    // 0x15151638: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x1515163C: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x15151640: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x15151644: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x15151648: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x1515164C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x15151650: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x15151654: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x15151658: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x1515165C: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x15151660: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x15151664: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x15151668: jr          $ra
    // 0x1515166C: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
    return;
    return;
    // 0x1515166C: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
;}
RECOMP_FUNC void func_1507D754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507D754: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1507D758: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1507D75C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1507D760: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1507D764: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x1507D768: slti        $at, $v0, 0xAE
    ctx->r1 = SIGNED(ctx->r2) < 0XAE ? 1 : 0;
    // 0x1507D76C: bne         $at, $zero, L_1507D78C
    if (ctx->r1 != 0) {
        // 0x1507D770: addiu       $at, $zero, 0xAE
        ctx->r1 = ADD32(0, 0XAE);
            goto L_1507D78C;
    }
    // 0x1507D770: addiu       $at, $zero, 0xAE
    ctx->r1 = ADD32(0, 0XAE);
    // 0x1507D774: beq         $v0, $at, L_1507D8B4
    if (ctx->r2 == ctx->r1) {
        // 0x1507D778: addiu       $at, $zero, 0xAF
        ctx->r1 = ADD32(0, 0XAF);
            goto L_1507D8B4;
    }
    // 0x1507D778: addiu       $at, $zero, 0xAF
    ctx->r1 = ADD32(0, 0XAF);
    // 0x1507D77C: beql        $v0, $at, L_1507D8B8
    if (ctx->r2 == ctx->r1) {
        // 0x1507D780: sb          $zero, 0x328($s0)
        MEM_B(0X328, ctx->r16) = 0;
            goto L_1507D8B8;
    }
    goto skip_0;
    // 0x1507D780: sb          $zero, 0x328($s0)
    MEM_B(0X328, ctx->r16) = 0;
    skip_0:
    // 0x1507D784: b           L_1507DB20
    // 0x1507D788: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507D788: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507D78C:
    // 0x1507D78C: slti        $at, $v0, 0x92
    ctx->r1 = SIGNED(ctx->r2) < 0X92 ? 1 : 0;
    // 0x1507D790: bne         $at, $zero, L_1507D7A8
    if (ctx->r1 != 0) {
        // 0x1507D794: addiu       $at, $zero, 0xAD
        ctx->r1 = ADD32(0, 0XAD);
            goto L_1507D7A8;
    }
    // 0x1507D794: addiu       $at, $zero, 0xAD
    ctx->r1 = ADD32(0, 0XAD);
    // 0x1507D798: beql        $v0, $at, L_1507D8B8
    if (ctx->r2 == ctx->r1) {
        // 0x1507D79C: sb          $zero, 0x328($s0)
        MEM_B(0X328, ctx->r16) = 0;
            goto L_1507D8B8;
    }
    goto skip_1;
    // 0x1507D79C: sb          $zero, 0x328($s0)
    MEM_B(0X328, ctx->r16) = 0;
    skip_1:
    // 0x1507D7A0: b           L_1507DB20
    // 0x1507D7A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507D7A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507D7A8:
    // 0x1507D7A8: slti        $at, $v0, 0x54
    ctx->r1 = SIGNED(ctx->r2) < 0X54 ? 1 : 0;
    // 0x1507D7AC: bne         $at, $zero, L_1507D7D8
    if (ctx->r1 != 0) {
        // 0x1507D7B0: addiu       $t7, $v0, -0x5
        ctx->r15 = ADD32(ctx->r2, -0X5);
            goto L_1507D7D8;
    }
    // 0x1507D7B0: addiu       $t7, $v0, -0x5
    ctx->r15 = ADD32(ctx->r2, -0X5);
    // 0x1507D7B4: addiu       $t6, $v0, -0x77
    ctx->r14 = ADD32(ctx->r2, -0X77);
    // 0x1507D7B8: sltiu       $at, $t6, 0x1B
    ctx->r1 = ctx->r14 < 0X1B ? 1 : 0;
    // 0x1507D7BC: beq         $at, $zero, L_1507DB1C
    if (ctx->r1 == 0) {
        // 0x1507D7C0: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_1507DB1C;
    }
    // 0x1507D7C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1507D7C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1507D7C8: addu        $at, $at, $t6
    gpr jr_addend_1507D7D0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1507D7CC: lw          $t6, -0x4924($at)
    ctx->r14 = ADD32(ctx->r1, -0X4924);
    // 0x1507D7D0: jr          $t6
    // 0x1507D7D4: nop

    switch (jr_addend_1507D7D0 >> 2) {
        case 0: goto L_1507D930; break;
        case 1: goto L_1507DB1C; break;
        case 2: goto L_1507D89C; break;
        case 3: goto L_1507DB1C; break;
        case 4: goto L_1507DB1C; break;
        case 5: goto L_1507DB1C; break;
        case 6: goto L_1507DB1C; break;
        case 7: goto L_1507DB1C; break;
        case 8: goto L_1507D7F8; break;
        case 9: goto L_1507DB1C; break;
        case 10: goto L_1507DB1C; break;
        case 11: goto L_1507DB1C; break;
        case 12: goto L_1507DADC; break;
        case 13: goto L_1507DB1C; break;
        case 14: goto L_1507DB1C; break;
        case 15: goto L_1507DB1C; break;
        case 16: goto L_1507DB1C; break;
        case 17: goto L_1507DB1C; break;
        case 18: goto L_1507DB1C; break;
        case 19: goto L_1507DB1C; break;
        case 20: goto L_1507DB1C; break;
        case 21: goto L_1507DB1C; break;
        case 22: goto L_1507DB1C; break;
        case 23: goto L_1507DB1C; break;
        case 24: goto L_1507DB1C; break;
        case 25: goto L_1507D8F8; break;
        case 26: goto L_1507D810; break;
        default: switch_error(__func__, 0x1507D7D0, 0x8009B6DC);
    }
    // 0x1507D7D4: nop

L_1507D7D8:
    // 0x1507D7D8: sltiu       $at, $t7, 0x4F
    ctx->r1 = ctx->r15 < 0X4F ? 1 : 0;
    // 0x1507D7DC: beq         $at, $zero, L_1507DB1C
    if (ctx->r1 == 0) {
        // 0x1507D7E0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_1507DB1C;
    }
    // 0x1507D7E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1507D7E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1507D7E8: addu        $at, $at, $t7
    gpr jr_addend_1507D7F0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x1507D7EC: lw          $t7, -0x48B8($at)
    ctx->r15 = ADD32(ctx->r1, -0X48B8);
    // 0x1507D7F0: jr          $t7
    // 0x1507D7F4: nop

    switch (jr_addend_1507D7F0 >> 2) {
        case 0: goto L_1507D8B4; break;
        case 1: goto L_1507DB1C; break;
        case 2: goto L_1507DB1C; break;
        case 3: goto L_1507DB1C; break;
        case 4: goto L_1507DB1C; break;
        case 5: goto L_1507DB1C; break;
        case 6: goto L_1507DB1C; break;
        case 7: goto L_1507DB1C; break;
        case 8: goto L_1507DA88; break;
        case 9: goto L_1507DB1C; break;
        case 10: goto L_1507DB1C; break;
        case 11: goto L_1507D810; break;
        case 12: goto L_1507DB1C; break;
        case 13: goto L_1507DB1C; break;
        case 14: goto L_1507DB1C; break;
        case 15: goto L_1507DB1C; break;
        case 16: goto L_1507DB1C; break;
        case 17: goto L_1507DB1C; break;
        case 18: goto L_1507DB1C; break;
        case 19: goto L_1507DB1C; break;
        case 20: goto L_1507DB1C; break;
        case 21: goto L_1507DB1C; break;
        case 22: goto L_1507DB1C; break;
        case 23: goto L_1507DB1C; break;
        case 24: goto L_1507DB1C; break;
        case 25: goto L_1507DB1C; break;
        case 26: goto L_1507DB1C; break;
        case 27: goto L_1507DAA0; break;
        case 28: goto L_1507DB1C; break;
        case 29: goto L_1507DB1C; break;
        case 30: goto L_1507DB1C; break;
        case 31: goto L_1507DB1C; break;
        case 32: goto L_1507D860; break;
        case 33: goto L_1507DB1C; break;
        case 34: goto L_1507DB1C; break;
        case 35: goto L_1507D930; break;
        case 36: goto L_1507DB1C; break;
        case 37: goto L_1507DB1C; break;
        case 38: goto L_1507DB1C; break;
        case 39: goto L_1507DB1C; break;
        case 40: goto L_1507DB1C; break;
        case 41: goto L_1507DB1C; break;
        case 42: goto L_1507DB1C; break;
        case 43: goto L_1507DB1C; break;
        case 44: goto L_1507DB1C; break;
        case 45: goto L_1507DB1C; break;
        case 46: goto L_1507DB1C; break;
        case 47: goto L_1507DAF4; break;
        case 48: goto L_1507DB1C; break;
        case 49: goto L_1507DB1C; break;
        case 50: goto L_1507DB1C; break;
        case 51: goto L_1507D810; break;
        case 52: goto L_1507DB1C; break;
        case 53: goto L_1507D820; break;
        case 54: goto L_1507DB1C; break;
        case 55: goto L_1507DB1C; break;
        case 56: goto L_1507D820; break;
        case 57: goto L_1507DB1C; break;
        case 58: goto L_1507DB1C; break;
        case 59: goto L_1507DB1C; break;
        case 60: goto L_1507DB1C; break;
        case 61: goto L_1507DB1C; break;
        case 62: goto L_1507DB1C; break;
        case 63: goto L_1507DB0C; break;
        case 64: goto L_1507DB1C; break;
        case 65: goto L_1507DB1C; break;
        case 66: goto L_1507D848; break;
        case 67: goto L_1507DB1C; break;
        case 68: goto L_1507DB1C; break;
        case 69: goto L_1507D830; break;
        case 70: goto L_1507DB1C; break;
        case 71: goto L_1507DB1C; break;
        case 72: goto L_1507DB1C; break;
        case 73: goto L_1507DB1C; break;
        case 74: goto L_1507DADC; break;
        case 75: goto L_1507DB1C; break;
        case 76: goto L_1507DB1C; break;
        case 77: goto L_1507DB1C; break;
        case 78: goto L_1507D8D4; break;
        default: switch_error(__func__, 0x1507D7F0, 0x8009B748);
    }
    // 0x1507D7F4: nop

L_1507D7F8:
    // 0x1507D7F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507D7FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1507D800: jal         0x150B0348
    // 0x1507D804: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150B0348(rdram, ctx);
        goto after_0;
    // 0x1507D804: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x1507D808: b           L_1507DB20
    // 0x1507D80C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507D80C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507D810:
    // 0x1507D810: jal         0x150BFFE0
    // 0x1507D814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150BFFE0(rdram, ctx);
        goto after_1;
    // 0x1507D814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x1507D818: b           L_1507DB20
    // 0x1507D81C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507D81C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507D820:
    // 0x1507D820: jal         0x150D85AC
    // 0x1507D824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150D85AC(rdram, ctx);
        goto after_2;
    // 0x1507D824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x1507D828: b           L_1507DB20
    // 0x1507D82C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507D82C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507D830:
    // 0x1507D830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507D834: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1507D838: jal         0x150F1D10
    // 0x1507D83C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150F1D10(rdram, ctx);
        goto after_3;
    // 0x1507D83C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x1507D840: b           L_1507DB20
    // 0x1507D844: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507D844: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507D848:
    // 0x1507D848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507D84C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1507D850: jal         0x151C9740
    // 0x1507D854: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151C9740(rdram, ctx);
        goto after_4;
    // 0x1507D854: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x1507D858: b           L_1507DB20
    // 0x1507D85C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507D85C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507D860:
    // 0x1507D860: lw          $t8, 0x2EC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2EC);
    // 0x1507D864: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1507D868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507D86C: bne         $t8, $zero, L_1507D88C
    if (ctx->r24 != 0) {
        // 0x1507D870: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_1507D88C;
    }
    // 0x1507D870: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1507D874: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x1507D878: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1507D87C: beq         $v0, $at, L_1507D88C
    if (ctx->r2 == ctx->r1) {
        // 0x1507D880: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_1507D88C;
    }
    // 0x1507D880: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x1507D884: bne         $v0, $at, L_1507D894
    if (ctx->r2 != ctx->r1) {
        // 0x1507D888: nop
    
            goto L_1507D894;
    }
    // 0x1507D888: nop

L_1507D88C:
    // 0x1507D88C: jal         0x151CFA4C
    // 0x1507D890: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151CFA4C(rdram, ctx);
        goto after_5;
    // 0x1507D890: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_1507D894:
    // 0x1507D894: b           L_1507DB20
    // 0x1507D898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507D898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507D89C:
    // 0x1507D89C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507D8A0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1507D8A4: jal         0x150BE494
    // 0x1507D8A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150BE494(rdram, ctx);
        goto after_6;
    // 0x1507D8A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x1507D8AC: b           L_1507DB20
    // 0x1507D8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507D8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507D8B4:
    // 0x1507D8B4: sb          $zero, 0x328($s0)
    MEM_B(0X328, ctx->r16) = 0;
L_1507D8B8:
    // 0x1507D8B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507D8BC: jal         0x1507DB44
    // 0x1507D8C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1507DB44(rdram, ctx);
        goto after_7;
    // 0x1507D8C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x1507D8C4: jal         0x150AEB9C
    // 0x1507D8C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150AEB9C(rdram, ctx);
        goto after_8;
    // 0x1507D8C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x1507D8CC: b           L_1507DB20
    // 0x1507D8D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1507DB20;
    // 0x1507D8D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1507D8D4:
    // 0x1507D8D4: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1507D8D8: lbu         $t9, -0x19EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X19EA);
    // 0x1507D8DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507D8E0: beql        $t9, $zero, L_1507DB20
    if (ctx->r25 == 0) {
        // 0x1507D8E4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1507DB20;
    }
    goto skip_2;
    // 0x1507D8E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x1507D8E8: jal         0x1507CD64
    // 0x1507D8EC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_1507CD64(rdram, ctx);
        goto after_9;
    // 0x1507D8EC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_9:
    // 0x1507D8F0: b           L_1507DB20
    // 0x1507D8F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_1507DB20;
    // 0x1507D8F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_1507D8F8:
    // 0x1507D8F8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1507D8FC: lbu         $t0, -0x19EA($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X19EA);
    // 0x1507D900: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1507D904: beql        $t0, $zero, L_1507DB20
    if (ctx->r8 == 0) {
        // 0x1507D908: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1507DB20;
    }
    goto skip_3;
    // 0x1507D908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x1507D90C: lw          $t1, -0x1610($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1610);
    // 0x1507D910: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x1507D914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507D918: bnel        $t1, $at, L_1507DB20
    if (ctx->r9 != ctx->r1) {
        // 0x1507D91C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1507DB20;
    }
    goto skip_4;
    // 0x1507D91C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x1507D920: jal         0x1507CD64
    // 0x1507D924: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_1507CD64(rdram, ctx);
        goto after_10;
    // 0x1507D924: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_10:
    // 0x1507D928: b           L_1507DB20
    // 0x1507D92C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_1507DB20;
    // 0x1507D92C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_1507D930:
    // 0x1507D930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507D934: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1507D938: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1507D93C: jal         0x151BA518
    // 0x1507D940: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_151BA518(rdram, ctx);
        goto after_11;
    // 0x1507D940: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_11:
    // 0x1507D944: jal         0x15145A50
    // 0x1507D948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15145A50(rdram, ctx);
        goto after_12;
    // 0x1507D948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x1507D94C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1507D950: lbu         $t2, -0x19EA($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X19EA);
    // 0x1507D954: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x1507D958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507D95C: beq         $t2, $zero, L_1507D988
    if (ctx->r10 == 0) {
        // 0x1507D960: lui         $t4, 0x800C
        ctx->r12 = S32(0X800C << 16);
            goto L_1507D988;
    }
    // 0x1507D960: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1507D964: jal         0x1507CD64
    // 0x1507D968: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_1507CD64(rdram, ctx);
        goto after_13;
    // 0x1507D968: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_13:
    // 0x1507D96C: lbu         $a0, 0x127($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X127);
    // 0x1507D970: addiu       $a0, $a0, 0xB
    ctx->r4 = ADD32(ctx->r4, 0XB);
    // 0x1507D974: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x1507D978: jal         0x151149AC
    // 0x1507D97C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_151149AC(rdram, ctx);
        goto after_14;
    // 0x1507D97C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_14:
    // 0x1507D980: b           L_1507DA00
    // 0x1507D984: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_1507DA00;
    // 0x1507D984: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_1507D988:
    // 0x1507D988: lw          $t4, -0x1610($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1610);
    // 0x1507D98C: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x1507D990: bnel        $t4, $at, L_1507D9A8
    if (ctx->r12 != ctx->r1) {
        // 0x1507D994: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1507D9A8;
    }
    goto skip_5;
    // 0x1507D994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_5:
    // 0x1507D998: jal         0x151149AC
    // 0x1507D99C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_151149AC(rdram, ctx);
        goto after_15;
    // 0x1507D99C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
    // 0x1507D9A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1507D9A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_1507D9A8:
    // 0x1507D9A8: jal         0x1507515C
    // 0x1507D9AC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_1507515C(rdram, ctx);
        goto after_16;
    // 0x1507D9AC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_16:
    // 0x1507D9B0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x1507D9B4: beq         $v0, $zero, L_1507DA00
    if (ctx->r2 == 0) {
        // 0x1507D9B8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1507DA00;
    }
    // 0x1507D9B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1507D9BC: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1507D9C0: lbu         $t5, 0x35EA($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X35EA);
    // 0x1507D9C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1507D9C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1507D9CC: beq         $t5, $at, L_1507DA00
    if (ctx->r13 == ctx->r1) {
        // 0x1507D9D0: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_1507DA00;
    }
    // 0x1507D9D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1507D9D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1507D9D8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1507D9DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1507D9E0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1507D9E4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1507D9E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1507D9EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1507D9F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1507D9F4: jal         0x15136C3C
    // 0x1507D9F8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_15136C3C(rdram, ctx);
        goto after_17;
    // 0x1507D9F8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_17:
    // 0x1507D9FC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
L_1507DA00:
    // 0x1507DA00: beq         $v1, $zero, L_1507DA74
    if (ctx->r3 == 0) {
        // 0x1507DA04: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_1507DA74;
    }
    // 0x1507DA04: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1507DA08: sb          $zero, 0x6E($v1)
    MEM_B(0X6E, ctx->r3) = 0;
    // 0x1507DA0C: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1507DA10: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1507DA14: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1507DA18: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x1507DA1C: nop

    // 0x1507DA20: sh          $t0, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r8;
    // 0x1507DA24: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1507DA28: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1507DA2C: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x1507DA30: nop

    // 0x1507DA34: sh          $t2, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r10;
    // 0x1507DA38: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1507DA3C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1507DA40: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x1507DA44: nop

    // 0x1507DA48: sh          $t4, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r12;
    // 0x1507DA4C: lwc1        $f4, 0xB8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x1507DA50: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x1507DA54: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1507DA58: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x1507DA5C: lwc1        $f8, 0xC4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x1507DA60: sb          $t5, 0x8A($v1)
    MEM_B(0X8A, ctx->r3) = ctx->r13;
    // 0x1507DA64: sw          $zero, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = 0;
    // 0x1507DA68: sw          $zero, 0x80($v1)
    MEM_W(0X80, ctx->r3) = 0;
    // 0x1507DA6C: sw          $zero, 0x84($v1)
    MEM_W(0X84, ctx->r3) = 0;
    // 0x1507DA70: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
L_1507DA74:
    // 0x1507DA74: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x1507DA78: beql        $t6, $zero, L_1507DB20
    if (ctx->r14 == 0) {
        // 0x1507DA7C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1507DB20;
    }
    goto skip_6;
    // 0x1507DA7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x1507DA80: b           L_1507DB20
    // 0x1507DA84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_1507DB20;
    // 0x1507DA84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_1507DA88:
    // 0x1507DA88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507DA8C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1507DA90: jal         0x150B7B40
    // 0x1507DA94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150B7B40(rdram, ctx);
        goto after_18;
    // 0x1507DA94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x1507DA98: b           L_1507DB20
    // 0x1507DA9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507DA9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507DAA0:
    // 0x1507DAA0: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x1507DAA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1507DAA8: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1507DAAC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x1507DAB0: nop

    // 0x1507DAB4: bc1f        L_1507DACC
    if (!c1cs) {
        // 0x1507DAB8: nop
    
            goto L_1507DACC;
    }
    // 0x1507DAB8: nop

    // 0x1507DABC: jal         0x150BC488
    // 0x1507DAC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150BC488(rdram, ctx);
        goto after_19;
    // 0x1507DAC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x1507DAC4: b           L_1507DB20
    // 0x1507DAC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507DAC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507DACC:
    // 0x1507DACC: jal         0x150BBB5C
    // 0x1507DAD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150BBB5C(rdram, ctx);
        goto after_20;
    // 0x1507DAD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x1507DAD4: b           L_1507DB20
    // 0x1507DAD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507DAD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507DADC:
    // 0x1507DADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507DAE0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1507DAE4: jal         0x151A6C90
    // 0x1507DAE8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151A6C90(rdram, ctx);
        goto after_21;
    // 0x1507DAE8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_21:
    // 0x1507DAEC: b           L_1507DB20
    // 0x1507DAF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507DAF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507DAF4:
    // 0x1507DAF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507DAF8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1507DAFC: jal         0x150E0870
    // 0x1507DB00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150E0870(rdram, ctx);
        goto after_22;
    // 0x1507DB00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_22:
    // 0x1507DB04: b           L_1507DB20
    // 0x1507DB08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1507DB20;
    // 0x1507DB08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507DB0C:
    // 0x1507DB0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507DB10: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1507DB14: jal         0x151D22B0
    // 0x1507DB18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151D22B0(rdram, ctx);
        goto after_23;
    // 0x1507DB18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_23:
L_1507DB1C:
    // 0x1507DB1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1507DB20:
    // 0x1507DB20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1507DB24: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1507DB28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1507DB2C: jr          $ra
    // 0x1507DB30: nop

    return;
    return;
    // 0x1507DB30: nop

    // 0x1507DB34: jr          $ra
    // 0x1507DB38: nop

    return;
    return;
    // 0x1507DB38: nop

    // 0x1507DB3C: jr          $ra
    // 0x1507DB40: nop

    return;
    return;
    // 0x1507DB40: nop

;}
RECOMP_FUNC void func_1001BE1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001BE1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1001BE20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001BE24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1001BE28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1001BE2C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1001BE30: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001BE34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1001BE38: bne         $t6, $at, L_1001BE5C
    if (ctx->r14 != ctx->r1) {
        // 0x1001BE3C: nop
    
            goto L_1001BE5C;
    }
    // 0x1001BE3C: nop

    // 0x1001BE40: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x1001BE44: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x1001BE48: lw          $t9, 0x30($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X30);
    // 0x1001BE4C: jalr        $t9
    // 0x1001BE50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1001BE50: nop

    after_0:
    // 0x1001BE54: b           L_1001BE7C
    // 0x1001BE58: nop

        goto L_1001BE7C;
    // 0x1001BE58: nop

L_1001BE5C:
    // 0x1001BE5C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x1001BE60: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1001BE64: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x1001BE68: lw          $t9, 0x30($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X30);
    // 0x1001BE6C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x1001BE70: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x1001BE74: jalr        $t9
    // 0x1001BE78: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x1001BE78: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    after_1:
L_1001BE7C:
    // 0x1001BE7C: b           L_1001BE84
    // 0x1001BE80: nop

        goto L_1001BE84;
    // 0x1001BE80: nop

L_1001BE84:
    // 0x1001BE84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001BE88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1001BE8C: jr          $ra
    // 0x1001BE90: nop

    return;
    return;
    // 0x1001BE90: nop

;}
RECOMP_FUNC void func_15163A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15163A60: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15163A64: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x15163A68: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15163A6C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15163A70: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15163A74: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x15163A78: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x15163A7C: jal         0x151149AC
    // 0x15163A80: nop

    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x15163A80: nop

    after_0:
    // 0x15163A84: bne         $v0, $zero, L_15163A94
    if (ctx->r2 != 0) {
        // 0x15163A88: sw          $v0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r2;
            goto L_15163A94;
    }
    // 0x15163A88: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x15163A8C: b           L_15163B88
    // 0x15163A90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15163B88;
    // 0x15163A90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15163A94:
    // 0x15163A94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15163A98: lwc1        $f4, 0x697C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X697C);
    // 0x15163A9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15163AA0: lwc1        $f6, 0x69B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X69B4);
    // 0x15163AA4: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x15163AA8: jal         0x150ADA68
    // 0x15163AAC: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x15163AAC: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x15163AB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15163AB4: lwc1        $f8, 0x6B08($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6B08);
    // 0x15163AB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15163ABC: lwc1        $f16, 0x69EC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X69EC);
    // 0x15163AC0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15163AC4: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x15163AC8: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x15163ACC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15163AD0: lwc1        $f18, 0x697C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X697C);
    // 0x15163AD4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x15163AD8: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x15163ADC: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x15163AE0: lh          $t8, 0x10($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X10);
    // 0x15163AE4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15163AE8: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x15163AEC: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x15163AF0: lh          $t9, 0x12($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X12);
    // 0x15163AF4: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x15163AF8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15163AFC: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x15163B00: lh          $t0, 0x14($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X14);
    // 0x15163B04: lbu         $t7, 0x6F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6F);
    // 0x15163B08: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x15163B0C: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x15163B10: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x15163B14: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x15163B18: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15163B1C: sb          $t1, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r9;
    // 0x15163B20: sb          $t2, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r10;
    // 0x15163B24: sh          $t3, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r11;
    // 0x15163B28: sb          $t4, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r12;
    // 0x15163B2C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15163B30: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x15163B34: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15163B38: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15163B3C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15163B40: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x15163B44: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x15163B48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15163B4C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x15163B50: jal         0x151602C0
    // 0x15163B54: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_151602C0(rdram, ctx);
        goto after_2;
    // 0x15163B54: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_2:
    // 0x15163B58: beq         $v0, $zero, L_15163B84
    if (ctx->r2 == 0) {
        // 0x15163B5C: sw          $v0, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r2;
            goto L_15163B84;
    }
    // 0x15163B5C: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x15163B60: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x15163B64: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x15163B68: jal         0x10022EC0
    // 0x15163B6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x15163B6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x15163B70: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x15163B74: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x15163B78: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x15163B7C: jal         0x10022EC0
    // 0x15163B80: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x15163B80: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_4:
L_15163B84:
    // 0x15163B84: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
L_15163B88:
    // 0x15163B88: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15163B8C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x15163B90: jr          $ra
    // 0x15163B94: nop

    return;
    return;
    // 0x15163B94: nop

;}
RECOMP_FUNC void func_1000632C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000632C: sw          $ra, 0xA6C($sp)
    MEM_W(0XA6C, ctx->r29) = ctx->r31;
    // 0x10006330: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x10006334: addiu       $gp, $zero, 0x0
    ctx->r28 = ADD32(0, 0X0);
    // 0x10006338: addiu       $fp, $zero, 0x0
    ctx->r30 = ADD32(0, 0X0);
L_1000633C:
    // 0x1000633C: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x10006340: jal         0x10006380
    // 0x10006344: addiu       $a0, $sp, 0xA70
    ctx->r4 = ADD32(ctx->r29, 0XA70);
    func_10006380(rdram, ctx);
        goto after_0;
    // 0x10006344: addiu       $a0, $sp, 0xA70
    ctx->r4 = ADD32(ctx->r29, 0XA70);
    after_0:
    // 0x10006348: bne         $v0, $zero, L_10006374
    if (ctx->r2 != 0) {
        // 0x1000634C: lw          $t3, 0xA70($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XA70);
            goto L_10006374;
    }
    // 0x1000634C: lw          $t3, 0xA70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA70);
    // 0x10006350: beq         $t3, $zero, L_1000633C
    if (ctx->r11 == 0) {
        // 0x10006354: slti        $at, $fp, 0x8
        ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
            goto L_1000633C;
    }
    // 0x10006354: slti        $at, $fp, 0x8
    ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
    // 0x10006358: bne         $at, $zero, L_10006370
    if (ctx->r1 != 0) {
        // 0x1000635C: nop
    
            goto L_10006370;
    }
    // 0x1000635C: nop

L_10006360:
    // 0x10006360: addiu       $fp, $fp, -0x8
    ctx->r30 = ADD32(ctx->r30, -0X8);
    // 0x10006364: slti        $at, $fp, 0x8
    ctx->r1 = SIGNED(ctx->r30) < 0X8 ? 1 : 0;
    // 0x10006368: beq         $at, $zero, L_10006360
    if (ctx->r1 == 0) {
        // 0x1000636C: addiu       $s7, $s7, -0x1
        ctx->r23 = ADD32(ctx->r23, -0X1);
            goto L_10006360;
    }
    // 0x1000636C: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
L_10006370:
    // 0x10006370: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
L_10006374:
    // 0x10006374: lw          $ra, 0xA6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA6C);
    // 0x10006378: jr          $ra
    // 0x1000637C: nop

    return;
    return;
    // 0x1000637C: nop

;}
RECOMP_FUNC void func_150D7068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D7068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D706C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150D7070: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150D7074: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150D7078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D707C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150D7080: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x150D7084: bne         $a2, $at, L_150D70D4
    if (ctx->r6 != ctx->r1) {
        // 0x150D7088: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_150D70D4;
    }
    // 0x150D7088: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150D708C: addiu       $v0, $a3, 0xA8
    ctx->r2 = ADD32(ctx->r7, 0XA8);
    // 0x150D7090: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x150D7094: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150D7098: bnel        $v1, $a0, L_150D70B8
    if (ctx->r3 != ctx->r4) {
        // 0x150D709C: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_150D70B8;
    }
    goto skip_0;
    // 0x150D709C: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x150D70A0: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x150D70A4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x150D70A8: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x150D70AC: b           L_150D7104
    // 0x150D70B0: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
        goto L_150D7104;
    // 0x150D70B0: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x150D70B4: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_150D70B8:
    // 0x150D70B8: bnel        $t9, $a0, L_150D7108
    if (ctx->r25 != ctx->r4) {
        // 0x150D70BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150D7108;
    }
    goto skip_1;
    // 0x150D70BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150D70C0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x150D70C4: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x150D70C8: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
    // 0x150D70CC: b           L_150D7108
    // 0x150D70D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150D7108;
    // 0x150D70D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150D70D4:
    // 0x150D70D4: bne         $v0, $zero, L_150D7104
    if (ctx->r2 != 0) {
        // 0x150D70D8: addiu       $v0, $a3, 0xA8
        ctx->r2 = ADD32(ctx->r7, 0XA8);
            goto L_150D7104;
    }
    // 0x150D70D8: addiu       $v0, $a3, 0xA8
    ctx->r2 = ADD32(ctx->r7, 0XA8);
    // 0x150D70DC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150D70E0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x150D70E4: beq         $v1, $t1, L_150D70FC
    if (ctx->r3 == ctx->r9) {
        // 0x150D70E8: nop
    
            goto L_150D70FC;
    }
    // 0x150D70E8: nop

    // 0x150D70EC: lbu         $t2, 0x4($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X4);
    // 0x150D70F0: lbu         $t3, 0x4($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X4);
    // 0x150D70F4: bnel        $t2, $t3, L_150D7108
    if (ctx->r10 != ctx->r11) {
        // 0x150D70F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150D7108;
    }
    goto skip_2;
    // 0x150D70F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_150D70FC:
    // 0x150D70FC: jal         0x1516972C
    // 0x150D7100: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150D7100: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
L_150D7104:
    // 0x150D7104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150D7108:
    // 0x150D7108: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D710C: jr          $ra
    // 0x150D7110: nop

    return;
    return;
    // 0x150D7110: nop

;}
RECOMP_FUNC void func_150BBB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BBB5C: addiu       $sp, $sp, -0x270
    ctx->r29 = ADD32(ctx->r29, -0X270);
    // 0x150BBB60: sw          $s3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r19;
    // 0x150BBB64: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150BBB68: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x150BBB6C: sw          $s2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r18;
    // 0x150BBB70: sw          $s1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r17;
    // 0x150BBB74: sw          $s0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r16;
    // 0x150BBB78: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x150BBB7C: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x150BBB80: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x150BBB84: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x150BBB88: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x150BBB8C: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x150BBB90: lbu         $t6, 0x4($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X4);
    // 0x150BBB94: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x150BBB98: beq         $t6, $at, L_150BBBA8
    if (ctx->r14 == ctx->r1) {
        // 0x150BBB9C: nop
    
            goto L_150BBBA8;
    }
    // 0x150BBB9C: nop

    // 0x150BBBA0: b           L_150BC454
    // 0x150BBBA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150BC454;
    // 0x150BBBA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150BBBA8:
    // 0x150BBBA8: beql        $s3, $zero, L_150BC458
    if (ctx->r19 == 0) {
        // 0x150BBBAC: lw          $ra, 0x8C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X8C);
            goto L_150BC458;
    }
    goto skip_0;
    // 0x150BBBAC: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    skip_0:
    // 0x150BBBB0: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x150BBBB4: beql        $t7, $zero, L_150BC458
    if (ctx->r15 == 0) {
        // 0x150BBBB8: lw          $ra, 0x8C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X8C);
            goto L_150BC458;
    }
    goto skip_1;
    // 0x150BBBB8: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    skip_1:
    // 0x150BBBBC: lh          $t8, 0xE4($s3)
    ctx->r24 = MEM_H(ctx->r19, 0XE4);
    // 0x150BBBC0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150BBBC4: nop

    // 0x150BBBC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150BBBCC: swc1        $f6, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f6.u32l;
    // 0x150BBBD0: lh          $t9, 0xE6($s3)
    ctx->r25 = MEM_H(ctx->r19, 0XE6);
    // 0x150BBBD4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x150BBBD8: nop

    // 0x150BBBDC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150BBBE0: jal         0x150ADA20
    // 0x150BBBE4: swc1        $f10, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150BBBE4: swc1        $f10, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x150BBBE8: andi        $s1, $v0, 0x3
    ctx->r17 = ctx->r2 & 0X3;
    // 0x150BBBEC: jal         0x150ADA20
    // 0x150BBBF0: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150BBBF0: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    after_1:
    // 0x150BBBF4: lhu         $a0, 0x76($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X76);
    // 0x150BBBF8: andi        $s2, $v0, 0x3
    ctx->r18 = ctx->r2 & 0X3;
    // 0x150BBBFC: addiu       $s2, $s2, 0xA
    ctx->r18 = ADD32(ctx->r18, 0XA);
    // 0x150BBC00: sra         $t0, $a0, 8
    ctx->r8 = S32(SIGNED(ctx->r4) >> 8);
    // 0x150BBC04: jal         0x151423D8
    // 0x150BBC08: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x150BBC08: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    after_2:
    // 0x150BBC0C: lhu         $a0, 0x76($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X76);
    // 0x150BBC10: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150BBC14: sra         $t2, $a0, 8
    ctx->r10 = S32(SIGNED(ctx->r4) >> 8);
    // 0x150BBC18: addiu       $a0, $t2, 0x40
    ctx->r4 = ADD32(ctx->r10, 0X40);
    // 0x150BBC1C: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x150BBC20: jal         0x151423D8
    // 0x150BBC24: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x150BBC24: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_3:
    // 0x150BBC28: lwc1        $f2, 0x3C($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X3C);
    // 0x150BBC2C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150BBC30: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150BBC34: mul.s       $f16, $f2, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x150BBC38: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x150BBC3C: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x150BBC40: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x150BBC44: nop

    // 0x150BBC48: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150BBC4C: swc1        $f18, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f18.u32l;
    // 0x150BBC50: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x150BBC54: swc1        $f6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f6.u32l;
    // 0x150BBC58: lw          $t4, 0x1D4($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X1D4);
    // 0x150BBC5C: beq         $t4, $zero, L_150BBC84
    if (ctx->r12 == 0) {
        // 0x150BBC60: nop
    
            goto L_150BBC84;
    }
    // 0x150BBC60: nop

    // 0x150BBC64: lw          $t5, 0x184($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X184);
    // 0x150BBC68: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150BBC6C: srl         $t7, $t5, 5
    ctx->r15 = S32(U32(ctx->r13) >> 5);
    // 0x150BBC70: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x150BBC74: subu        $v0, $t9, $t8
    ctx->r2 = SUB32(ctx->r25, ctx->r24);
    // 0x150BBC78: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x150BBC7C: b           L_150BBC84
    // 0x150BBC80: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_150BBC84;
    // 0x150BBC80: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_150BBC84:
    // 0x150BBC84: sh          $t1, 0x1D2($sp)
    MEM_H(0X1D2, ctx->r29) = ctx->r9;
    // 0x150BBC88: sh          $zero, 0x1D0($sp)
    MEM_H(0X1D0, ctx->r29) = 0;
    // 0x150BBC8C: lwc1        $f8, 0x14($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X14);
    // 0x150BBC90: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x150BBC94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BBC98: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150BBC9C: addiu       $s0, $sp, 0x148
    ctx->r16 = ADD32(ctx->r29, 0X148);
    // 0x150BBCA0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150BBCA4: addiu       $t6, $zero, 0x34
    ctx->r14 = ADD32(0, 0X34);
    // 0x150BBCA8: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x150BBCAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150BBCB0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150BBCB4: sh          $t3, 0x1D4($sp)
    MEM_H(0X1D4, ctx->r29) = ctx->r11;
    // 0x150BBCB8: lwc1        $f16, 0x180($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X180);
    // 0x150BBCBC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150BBCC0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150BBCC4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150BBCC8: lwc1        $f16, 0x144($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X144);
    // 0x150BBCCC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150BBCD0: lwc1        $f4, 0x140($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X140);
    // 0x150BBCD4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150BBCD8: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x150BBCDC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150BBCE0: sh          $t5, 0x1D6($sp)
    MEM_H(0X1D6, ctx->r29) = ctx->r13;
    // 0x150BBCE4: lwc1        $f8, 0x1C($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x150BBCE8: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x150BBCEC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x150BBCF0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150BBCF4: sh          $t8, 0x1DA($sp)
    MEM_H(0X1DA, ctx->r29) = ctx->r24;
    // 0x150BBCF8: sh          $t1, 0x1DC($sp)
    MEM_H(0X1DC, ctx->r29) = ctx->r9;
    // 0x150BBCFC: addiu       $t5, $zero, 0x2E
    ctx->r13 = ADD32(0, 0X2E);
    // 0x150BBD00: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x150BBD04: nop

    // 0x150BBD08: sh          $t7, 0x1D8($sp)
    MEM_H(0X1D8, ctx->r29) = ctx->r15;
    // 0x150BBD0C: lwc1        $f8, 0x180($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X180);
    // 0x150BBD10: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150BBD14: sb          $t4, 0x1EA($sp)
    MEM_B(0X1EA, ctx->r29) = ctx->r12;
    // 0x150BBD18: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150BBD1C: sb          $t5, 0x1E8($sp)
    MEM_B(0X1E8, ctx->r29) = ctx->r13;
    // 0x150BBD20: sh          $t6, 0x1E0($sp)
    MEM_H(0X1E0, ctx->r29) = ctx->r14;
    // 0x150BBD24: sw          $v0, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->r2;
    // 0x150BBD28: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x150BBD2C: sb          $zero, 0x1E9($sp)
    MEM_B(0X1E9, ctx->r29) = 0;
    // 0x150BBD30: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150BBD34: jal         0x1516865C
    // 0x150BBD38: sh          $t3, 0x1DE($sp)
    MEM_H(0X1DE, ctx->r29) = ctx->r11;
    func_1516865C(rdram, ctx);
        goto after_4;
    // 0x150BBD38: sh          $t3, 0x1DE($sp)
    MEM_H(0X1DE, ctx->r29) = ctx->r11;
    after_4:
    // 0x150BBD3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150BBD40: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150BBD44: jal         0x15168800
    // 0x150BBD48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15168800(rdram, ctx);
        goto after_5;
    // 0x150BBD48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x150BBD4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BBD50: lwc1        $f16, -0x158($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X158);
    // 0x150BBD54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150BBD58: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BBD5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BBD60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BBD64: lui         $at, 0xBFC0
    ctx->r1 = S32(0XBFC0 << 16);
    // 0x150BBD68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150BBD6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BBD70: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150BBD74: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x150BBD78: addiu       $t0, $zero, 0x29E9
    ctx->r8 = ADD32(0, 0X29E9);
    // 0x150BBD7C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150BBD80: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150BBD84: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150BBD88: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x150BBD8C: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x150BBD90: sh          $t9, 0x24A($sp)
    MEM_H(0X24A, ctx->r29) = ctx->r25;
    // 0x150BBD94: sh          $t8, 0x248($sp)
    MEM_H(0X248, ctx->r29) = ctx->r24;
    // 0x150BBD98: sw          $t0, 0x244($sp)
    MEM_W(0X244, ctx->r29) = ctx->r8;
    // 0x150BBD9C: sb          $zero, 0x24C($sp)
    MEM_B(0X24C, ctx->r29) = 0;
    // 0x150BBDA0: sw          $zero, 0x250($sp)
    MEM_W(0X250, ctx->r29) = 0;
    // 0x150BBDA4: sb          $t1, 0x254($sp)
    MEM_B(0X254, ctx->r29) = ctx->r9;
    // 0x150BBDA8: sb          $t2, 0x255($sp)
    MEM_B(0X255, ctx->r29) = ctx->r10;
    // 0x150BBDAC: sb          $zero, 0x256($sp)
    MEM_B(0X256, ctx->r29) = 0;
    // 0x150BBDB0: sb          $t3, 0x257($sp)
    MEM_B(0X257, ctx->r29) = ctx->r11;
    // 0x150BBDB4: sb          $zero, 0x258($sp)
    MEM_B(0X258, ctx->r29) = 0;
    // 0x150BBDB8: sb          $zero, 0x259($sp)
    MEM_B(0X259, ctx->r29) = 0;
    // 0x150BBDBC: sb          $zero, 0x25A($sp)
    MEM_B(0X25A, ctx->r29) = 0;
    // 0x150BBDC0: sb          $zero, 0x25B($sp)
    MEM_B(0X25B, ctx->r29) = 0;
    // 0x150BBDC4: sb          $zero, 0x25C($sp)
    MEM_B(0X25C, ctx->r29) = 0;
    // 0x150BBDC8: sb          $zero, 0x25E($sp)
    MEM_B(0X25E, ctx->r29) = 0;
    // 0x150BBDCC: sw          $zero, 0x260($sp)
    MEM_W(0X260, ctx->r29) = 0;
    // 0x150BBDD0: sb          $zero, 0x264($sp)
    MEM_B(0X264, ctx->r29) = 0;
    // 0x150BBDD4: sh          $t4, 0x266($sp)
    MEM_H(0X266, ctx->r29) = ctx->r12;
    // 0x150BBDD8: sh          $t5, 0x268($sp)
    MEM_H(0X268, ctx->r29) = ctx->r13;
    // 0x150BBDDC: swc1        $f16, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->f16.u32l;
    // 0x150BBDE0: swc1        $f18, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->f18.u32l;
    // 0x150BBDE4: swc1        $f4, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->f4.u32l;
    // 0x150BBDE8: swc1        $f6, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->f6.u32l;
    // 0x150BBDEC: swc1        $f8, 0x23C($sp)
    MEM_W(0X23C, ctx->r29) = ctx->f8.u32l;
    // 0x150BBDF0: blez        $s1, L_150BC008
    if (SIGNED(ctx->r17) <= 0) {
        // 0x150BBDF4: swc1        $f10, 0x240($sp)
        MEM_W(0X240, ctx->r29) = ctx->f10.u32l;
            goto L_150BC008;
    }
    // 0x150BBDF4: swc1        $f10, 0x240($sp)
    MEM_W(0X240, ctx->r29) = ctx->f10.u32l;
    // 0x150BBDF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BBDFC: lwc1        $f28, -0x154($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X154);
L_150BBE00:
    // 0x150BBE00: jal         0x150ADA20
    // 0x150BBE04: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150BBE04: nop

    after_6:
    // 0x150BBE08: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x150BBE0C: jal         0x151423D8
    // 0x150BBE10: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_7;
    // 0x150BBE10: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_7:
    // 0x150BBE14: addiu       $a0, $s0, -0x40
    ctx->r4 = ADD32(ctx->r16, -0X40);
    // 0x150BBE18: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x150BBE1C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150BBE20: jal         0x151423D8
    // 0x150BBE24: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_8;
    // 0x150BBE24: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_8:
    // 0x150BBE28: jal         0x150ADA68
    // 0x150BBE2C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x150BBE2C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_9:
    // 0x150BBE30: lwc1        $f16, 0x144($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X144);
    // 0x150BBE34: neg.s       $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = -ctx->f22.fl;
    // 0x150BBE38: mul.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150BBE3C: nop

    // 0x150BBE40: mul.s       $f30, $f20, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x150BBE44: nop

    // 0x150BBE48: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150BBE4C: jal         0x150ADA20
    // 0x150BBE50: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150BBE50: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x150BBE54: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x150BBE58: jal         0x151423D8
    // 0x150BBE5C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_11;
    // 0x150BBE5C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_11:
    // 0x150BBE60: addiu       $a0, $s0, -0x40
    ctx->r4 = ADD32(ctx->r16, -0X40);
    // 0x150BBE64: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x150BBE68: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150BBE6C: jal         0x151423D8
    // 0x150BBE70: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_12;
    // 0x150BBE70: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_12:
    // 0x150BBE74: jal         0x150ADA68
    // 0x150BBE78: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x150BBE78: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_13:
    // 0x150BBE7C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150BBE80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BBE84: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150BBE88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BBE8C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150BBE90: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150BBE94: mul.s       $f24, $f22, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x150BBE98: nop

    // 0x150BBE9C: mul.s       $f26, $f20, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x150BBEA0: jal         0x150ADA68
    // 0x150BBEA4: nop

    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x150BBEA4: nop

    after_14:
    // 0x150BBEA8: mul.s       $f16, $f0, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150BBEAC: jal         0x150ADA68
    // 0x150BBEB0: add.s       $f20, $f16, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f28.fl;
    func_150ADA68(rdram, ctx);
        goto after_15;
    // 0x150BBEB0: add.s       $f20, $f16, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f28.fl;
    after_15:
    // 0x150BBEB4: mul.s       $f18, $f0, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150BBEB8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150BBEBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BBEC0: swc1        $f20, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->f20.u32l;
    // 0x150BBEC4: add.s       $f2, $f18, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f28.fl;
    // 0x150BBEC8: add.s       $f4, $f20, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f20.fl + ctx->f2.fl;
    // 0x150BBECC: swc1        $f2, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->f2.u32l;
    // 0x150BBED0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150BBED4: jal         0x150ADA68
    // 0x150BBED8: swc1        $f8, 0x1F4($sp)
    MEM_W(0X1F4, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_16;
    // 0x150BBED8: swc1        $f8, 0x1F4($sp)
    MEM_W(0X1F4, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x150BBEDC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150BBEE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BBEE4: nop

    // 0x150BBEE8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150BBEEC: jal         0x150ADA68
    // 0x150BBEF0: swc1        $f16, 0x204($sp)
    MEM_W(0X204, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_17;
    // 0x150BBEF0: swc1        $f16, 0x204($sp)
    MEM_W(0X204, ctx->r29) = ctx->f16.u32l;
    after_17:
    // 0x150BBEF4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150BBEF8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BBEFC: nop

    // 0x150BBF00: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150BBF04: jal         0x150ADA68
    // 0x150BBF08: swc1        $f4, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_18;
    // 0x150BBF08: swc1        $f4, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->f4.u32l;
    after_18:
    // 0x150BBF0C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150BBF10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BBF14: nop

    // 0x150BBF18: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150BBF1C: swc1        $f8, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->f8.u32l;
    // 0x150BBF20: lwc1        $f10, 0x14($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X14);
    // 0x150BBF24: add.s       $f16, $f10, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x150BBF28: jal         0x150ADA68
    // 0x150BBF2C: swc1        $f16, 0x21C($sp)
    MEM_W(0X21C, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_19;
    // 0x150BBF2C: swc1        $f16, 0x21C($sp)
    MEM_W(0X21C, ctx->r29) = ctx->f16.u32l;
    after_19:
    // 0x150BBF30: lwc1        $f18, 0x140($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X140);
    // 0x150BBF34: lwc1        $f6, 0x18($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X18);
    // 0x150BBF38: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150BBF3C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150BBF40: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BBF44: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150BBF48: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x150BBF4C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150BBF50: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x150BBF54: swc1        $f16, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->f16.u32l;
    // 0x150BBF58: lwc1        $f18, 0x1C($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x150BBF5C: add.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f24.fl;
    // 0x150BBF60: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150BBF64: swc1        $f10, 0x228($sp)
    MEM_W(0X228, ctx->r29) = ctx->f10.u32l;
    // 0x150BBF68: jal         0x150ADA68
    // 0x150BBF6C: swc1        $f6, 0x224($sp)
    MEM_W(0X224, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_20;
    // 0x150BBF6C: swc1        $f6, 0x224($sp)
    MEM_W(0X224, ctx->r29) = ctx->f6.u32l;
    after_20:
    // 0x150BBF70: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x150BBF74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150BBF78: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x150BBF7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BBF80: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150BBF84: lwc1        $f8, 0x124($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150BBF88: add.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x150BBF8C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150BBF90: swc1        $f10, 0x230($sp)
    MEM_W(0X230, ctx->r29) = ctx->f10.u32l;
    // 0x150BBF94: jal         0x150ADA68
    // 0x150BBF98: swc1        $f6, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_21;
    // 0x150BBF98: swc1        $f6, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->f6.u32l;
    after_21:
    // 0x150BBF9C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150BBFA0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150BBFA4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150BBFA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BBFAC: nop

    // 0x150BBFB0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150BBFB4: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x150BBFB8: jal         0x150ADA68
    // 0x150BBFBC: swc1        $f6, 0x234($sp)
    MEM_W(0X234, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_22;
    // 0x150BBFBC: swc1        $f6, 0x234($sp)
    MEM_W(0X234, ctx->r29) = ctx->f6.u32l;
    after_22:
    // 0x150BBFC0: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150BBFC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BBFC8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150BBFCC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BBFD0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150BBFD4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150BBFD8: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150BBFDC: addiu       $a0, $sp, 0x1F4
    ctx->r4 = ADD32(ctx->r29, 0X1F4);
    // 0x150BBFE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150BBFE4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150BBFE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150BBFEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150BBFF0: sub.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x150BBFF4: jal         0x15132A4C
    // 0x150BBFF8: swc1        $f16, 0x238($sp)
    MEM_W(0X238, ctx->r29) = ctx->f16.u32l;
    func_15132A4C(rdram, ctx);
        goto after_23;
    // 0x150BBFF8: swc1        $f16, 0x238($sp)
    MEM_W(0X238, ctx->r29) = ctx->f16.u32l;
    after_23:
    // 0x150BBFFC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x150BC000: bgtz        $s1, L_150BBE00
    if (SIGNED(ctx->r17) > 0) {
        // 0x150BC004: nop
    
            goto L_150BBE00;
    }
    // 0x150BC004: nop

L_150BC008:
    // 0x150BC008: blez        $s2, L_150BC1C4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x150BC00C: lui         $at, 0x4170
        ctx->r1 = S32(0X4170 << 16);
            goto L_150BC1C4;
    }
    // 0x150BC00C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150BC010: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150BC014: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x150BC018: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150BC01C: nop

L_150BC020:
    // 0x150BC020: jal         0x150ADA68
    // 0x150BC024: nop

    func_150ADA68(rdram, ctx);
        goto after_24;
    // 0x150BC024: nop

    after_24:
    // 0x150BC028: lwc1        $f4, 0x144($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X144);
    // 0x150BC02C: mul.s       $f24, $f0, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150BC030: jal         0x150ADA68
    // 0x150BC034: nop

    func_150ADA68(rdram, ctx);
        goto after_25;
    // 0x150BC034: nop

    after_25:
    // 0x150BC038: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x150BC03C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150BC040: nop

    // 0x150BC044: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150BC048: jal         0x150ADA20
    // 0x150BC04C: add.s       $f26, $f6, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = ctx->f6.fl + ctx->f2.fl;
    func_150ADA20(rdram, ctx);
        goto after_26;
    // 0x150BC04C: add.s       $f26, $f6, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = ctx->f6.fl + ctx->f2.fl;
    after_26:
    // 0x150BC050: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x150BC054: sll         $s0, $t0, 16
    ctx->r16 = S32(ctx->r8 << 16);
    // 0x150BC058: sra         $t8, $s0, 16
    ctx->r24 = S32(SIGNED(ctx->r16) >> 16);
    // 0x150BC05C: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x150BC060: jal         0x151423D8
    // 0x150BC064: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_27;
    // 0x150BC064: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    after_27:
    // 0x150BC068: addiu       $a0, $s0, -0x40
    ctx->r4 = ADD32(ctx->r16, -0X40);
    // 0x150BC06C: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x150BC070: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150BC074: jal         0x151423D8
    // 0x150BC078: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_151423D8(rdram, ctx);
        goto after_28;
    // 0x150BC078: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_28:
    // 0x150BC07C: mul.s       $f8, $f20, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x150BC080: lwc1        $f10, 0x14($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X14);
    // 0x150BC084: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x150BC088: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150BC08C: jal         0x150ADA68
    // 0x150BC090: swc1        $f18, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_29;
    // 0x150BC090: swc1        $f18, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f18.u32l;
    after_29:
    // 0x150BC094: lwc1        $f16, 0x140($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X140);
    // 0x150BC098: lwc1        $f6, 0x18($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X18);
    // 0x150BC09C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150BC0A0: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150BC0A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BC0A8: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150BC0AC: mul.s       $f4, $f22, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x150BC0B0: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150BC0B4: mul.s       $f10, $f22, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x150BC0B8: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x150BC0BC: swc1        $f18, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f18.u32l;
    // 0x150BC0C0: lwc1        $f16, 0x1C($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x150BC0C4: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150BC0C8: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x150BC0CC: swc1        $f18, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f18.u32l;
    // 0x150BC0D0: jal         0x150ADA68
    // 0x150BC0D4: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_30;
    // 0x150BC0D4: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
    after_30:
    // 0x150BC0D8: mul.s       $f16, $f0, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150BC0DC: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150BC0E0: mul.s       $f6, $f20, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x150BC0E4: add.s       $f4, $f16, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f30.fl;
    // 0x150BC0E8: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150BC0EC: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    // 0x150BC0F0: jal         0x150ADA20
    // 0x150BC0F4: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_31;
    // 0x150BC0F4: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    after_31:
    // 0x150BC0F8: jal         0x150ADA20
    // 0x150BC0FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_32;
    // 0x150BC0FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_32:
    // 0x150BC100: jal         0x150ADA68
    // 0x150BC104: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_33;
    // 0x150BC104: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_33:
    // 0x150BC108: jal         0x150ADA20
    // 0x150BC10C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_34;
    // 0x150BC10C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_34:
    // 0x150BC110: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150BC114: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150BC118: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BC11C: lwc1        $f18, -0x150($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X150);
    // 0x150BC120: lwc1        $f4, 0x144($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X144);
    // 0x150BC124: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x150BC128: mul.s       $f16, $f20, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x150BC12C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BC130: andi        $a3, $s0, 0x7
    ctx->r7 = ctx->r16 & 0X7;
    // 0x150BC134: addiu       $a3, $a3, 0x19
    ctx->r7 = ADD32(ctx->r7, 0X19);
    // 0x150BC138: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x150BC13C: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    // 0x150BC140: andi        $t5, $s1, 0x7F
    ctx->r13 = ctx->r17 & 0X7F;
    // 0x150BC144: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x150BC148: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x150BC14C: addiu       $t9, $t7, 0x2
    ctx->r25 = ADD32(ctx->r15, 0X2);
    // 0x150BC150: addiu       $t6, $t5, 0x80
    ctx->r14 = ADD32(ctx->r13, 0X80);
    // 0x150BC154: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150BC158: lui         $a2, 0x3FCC
    ctx->r6 = S32(0X3FCC << 16);
    // 0x150BC15C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150BC160: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150BC164: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150BC168: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x150BC16C: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x150BC170: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x150BC174: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x150BC178: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x150BC17C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x150BC180: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x150BC184: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x150BC188: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x150BC18C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150BC190: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x150BC194: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x150BC198: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x150BC19C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150BC1A0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150BC1A4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x150BC1A8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x150BC1AC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150BC1B0: jal         0x151DA6F8
    // 0x150BC1B4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_151DA6F8(rdram, ctx);
        goto after_35;
    // 0x150BC1B4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_35:
    // 0x150BC1B8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x150BC1BC: bgtz        $s2, L_150BC020
    if (SIGNED(ctx->r18) > 0) {
        // 0x150BC1C0: nop
    
            goto L_150BC020;
    }
    // 0x150BC1C0: nop

L_150BC1C4:
    // 0x150BC1C4: jal         0x150ADA20
    // 0x150BC1C8: sh          $zero, 0x24A($sp)
    MEM_H(0X24A, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_36;
    // 0x150BC1C8: sh          $zero, 0x24A($sp)
    MEM_H(0X24A, ctx->r29) = 0;
    after_36:
    // 0x150BC1CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BC1D0: lwc1        $f18, -0x14C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X14C);
    // 0x150BC1D4: andi        $t4, $v0, 0xF
    ctx->r12 = ctx->r2 & 0XF;
    // 0x150BC1D8: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x150BC1DC: sh          $t5, 0x248($sp)
    MEM_H(0X248, ctx->r29) = ctx->r13;
    // 0x150BC1E0: swc1        $f18, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->f18.u32l;
    // 0x150BC1E4: lwc1        $f16, 0xB8($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0XB8);
    // 0x150BC1E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150BC1EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BC1F0: swc1        $f16, 0x204($sp)
    MEM_W(0X204, ctx->r29) = ctx->f16.u32l;
    // 0x150BC1F4: lwc1        $f4, 0x40($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X40);
    // 0x150BC1F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BC1FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BC200: swc1        $f4, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->f4.u32l;
    // 0x150BC204: lwc1        $f6, 0xC4($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0XC4);
    // 0x150BC208: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BC20C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150BC210: lwc1        $f4, -0x148($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X148);
    // 0x150BC214: addiu       $t6, $zero, 0x39E8
    ctx->r14 = ADD32(0, 0X39E8);
    // 0x150BC218: sw          $t6, 0x244($sp)
    MEM_W(0X244, ctx->r29) = ctx->r14;
    // 0x150BC21C: swc1        $f10, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->f10.u32l;
    // 0x150BC220: swc1        $f8, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->f8.u32l;
    // 0x150BC224: swc1        $f18, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->f18.u32l;
    // 0x150BC228: swc1        $f6, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->f6.u32l;
    // 0x150BC22C: swc1        $f16, 0x23C($sp)
    MEM_W(0X23C, ctx->r29) = ctx->f16.u32l;
    // 0x150BC230: swc1        $f4, 0x240($sp)
    MEM_W(0X240, ctx->r29) = ctx->f4.u32l;
    // 0x150BC234: lwc1        $f6, 0x14($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X14);
    // 0x150BC238: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150BC23C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150BC240: swc1        $f6, 0x21C($sp)
    MEM_W(0X21C, ctx->r29) = ctx->f6.u32l;
    // 0x150BC244: lwc1        $f10, 0x18($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X18);
    // 0x150BC248: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150BC24C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150BC250: swc1        $f10, 0x220($sp)
    MEM_W(0X220, ctx->r29) = ctx->f10.u32l;
    // 0x150BC254: lwc1        $f8, 0x1C($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x150BC258: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150BC25C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150BC260: swc1        $f8, 0x224($sp)
    MEM_W(0X224, ctx->r29) = ctx->f8.u32l;
    // 0x150BC264: lwc1        $f18, 0x14C($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X14C);
    // 0x150BC268: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150BC26C: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x150BC270: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x150BC274: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x150BC278: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150BC27C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x150BC280: swc1        $f4, 0x1F4($sp)
    MEM_W(0X1F4, ctx->r29) = ctx->f4.u32l;
    // 0x150BC284: lwc1        $f0, 0x14C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X14C);
    // 0x150BC288: sb          $zero, 0x24C($sp)
    MEM_B(0X24C, ctx->r29) = 0;
    // 0x150BC28C: sw          $zero, 0x250($sp)
    MEM_W(0X250, ctx->r29) = 0;
    // 0x150BC290: add.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x150BC294: sb          $t7, 0x254($sp)
    MEM_B(0X254, ctx->r29) = ctx->r15;
    // 0x150BC298: sb          $t9, 0x255($sp)
    MEM_B(0X255, ctx->r29) = ctx->r25;
    // 0x150BC29C: sb          $zero, 0x256($sp)
    MEM_B(0X256, ctx->r29) = 0;
    // 0x150BC2A0: swc1        $f6, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->f6.u32l;
    // 0x150BC2A4: lwc1        $f10, 0x1FC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1FC);
    // 0x150BC2A8: sb          $zero, 0x257($sp)
    MEM_B(0X257, ctx->r29) = 0;
    // 0x150BC2AC: sb          $zero, 0x258($sp)
    MEM_B(0X258, ctx->r29) = 0;
    // 0x150BC2B0: sb          $zero, 0x259($sp)
    MEM_B(0X259, ctx->r29) = 0;
    // 0x150BC2B4: sb          $zero, 0x25A($sp)
    MEM_B(0X25A, ctx->r29) = 0;
    // 0x150BC2B8: sb          $zero, 0x25B($sp)
    MEM_B(0X25B, ctx->r29) = 0;
    // 0x150BC2BC: sb          $zero, 0x25C($sp)
    MEM_B(0X25C, ctx->r29) = 0;
    // 0x150BC2C0: sb          $zero, 0x25E($sp)
    MEM_B(0X25E, ctx->r29) = 0;
    // 0x150BC2C4: sw          $zero, 0x260($sp)
    MEM_W(0X260, ctx->r29) = 0;
    // 0x150BC2C8: sb          $zero, 0x264($sp)
    MEM_B(0X264, ctx->r29) = 0;
    // 0x150BC2CC: sh          $t8, 0x266($sp)
    MEM_H(0X266, ctx->r29) = ctx->r24;
    // 0x150BC2D0: sh          $t0, 0x268($sp)
    MEM_H(0X268, ctx->r29) = ctx->r8;
    // 0x150BC2D4: swc1        $f10, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->f10.u32l;
L_150BC2D8:
    // 0x150BC2D8: jal         0x150ADA68
    // 0x150BC2DC: nop

    func_150ADA68(rdram, ctx);
        goto after_37;
    // 0x150BC2DC: nop

    after_37:
    // 0x150BC2E0: mul.s       $f8, $f0, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150BC2E4: lwc1        $f18, 0x150($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X150);
    // 0x150BC2E8: mul.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x150BC2EC: jal         0x150ADA20
    // 0x150BC2F0: add.s       $f20, $f16, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f30.fl;
    func_150ADA20(rdram, ctx);
        goto after_38;
    // 0x150BC2F0: add.s       $f20, $f16, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f30.fl;
    after_38:
    // 0x150BC2F4: andi        $s0, $v0, 0x7F
    ctx->r16 = ctx->r2 & 0X7F;
    // 0x150BC2F8: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x150BC2FC: jal         0x150ADA20
    // 0x150BC300: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    func_150ADA20(rdram, ctx);
        goto after_39;
    // 0x150BC300: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    after_39:
    // 0x150BC304: andi        $t3, $v0, 0x1F
    ctx->r11 = ctx->r2 & 0X1F;
    // 0x150BC308: addiu       $t4, $zero, -0x20
    ctx->r12 = ADD32(0, -0X20);
    // 0x150BC30C: subu        $s1, $t4, $t3
    ctx->r17 = SUB32(ctx->r12, ctx->r11);
    // 0x150BC310: sll         $t5, $s1, 16
    ctx->r13 = S32(ctx->r17 << 16);
    // 0x150BC314: sra         $s1, $t5, 16
    ctx->r17 = S32(SIGNED(ctx->r13) >> 16);
    // 0x150BC318: jal         0x151423D8
    // 0x150BC31C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_40;
    // 0x150BC31C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_40:
    // 0x150BC320: addiu       $a0, $s0, -0x40
    ctx->r4 = ADD32(ctx->r16, -0X40);
    // 0x150BC324: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x150BC328: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x150BC32C: jal         0x151423D8
    // 0x150BC330: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_41;
    // 0x150BC330: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_41:
    // 0x150BC334: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x150BC338: jal         0x151423D8
    // 0x150BC33C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_42;
    // 0x150BC33C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_42:
    // 0x150BC340: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x150BC344: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x150BC348: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x150BC34C: jal         0x151423D8
    // 0x150BC350: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_151423D8(rdram, ctx);
        goto after_43;
    // 0x150BC350: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_43:
    // 0x150BC354: mul.s       $f2, $f20, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x150BC358: neg.s       $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = -ctx->f20.fl;
    // 0x150BC35C: lwc1        $f6, 0x128($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X128);
    // 0x150BC360: mul.s       $f4, $f2, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x150BC364: nop

    // 0x150BC368: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150BC36C: nop

    // 0x150BC370: mul.s       $f16, $f2, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x150BC374: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150BC378: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150BC37C: swc1        $f18, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->f18.u32l;
    // 0x150BC380: swc1        $f10, 0x228($sp)
    MEM_W(0X228, ctx->r29) = ctx->f10.u32l;
    // 0x150BC384: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x150BC388: jal         0x150ADA68
    // 0x150BC38C: swc1        $f6, 0x230($sp)
    MEM_W(0X230, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_44;
    // 0x150BC38C: swc1        $f6, 0x230($sp)
    MEM_W(0X230, ctx->r29) = ctx->f6.u32l;
    after_44:
    // 0x150BC390: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x150BC394: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BC398: nop

    // 0x150BC39C: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150BC3A0: sub.s       $f18, $f28, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f28.fl - ctx->f8.fl;
    // 0x150BC3A4: jal         0x150ADA68
    // 0x150BC3A8: swc1        $f18, 0x234($sp)
    MEM_W(0X234, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_45;
    // 0x150BC3A8: swc1        $f18, 0x234($sp)
    MEM_W(0X234, ctx->r29) = ctx->f18.u32l;
    after_45:
    // 0x150BC3AC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x150BC3B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150BC3B4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150BC3B8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150BC3BC: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150BC3C0: addiu       $a0, $sp, 0x1F4
    ctx->r4 = ADD32(ctx->r29, 0X1F4);
    // 0x150BC3C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150BC3C8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150BC3CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150BC3D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150BC3D4: sub.s       $f6, $f28, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f28.fl - ctx->f4.fl;
    // 0x150BC3D8: jal         0x15132A4C
    // 0x150BC3DC: swc1        $f6, 0x238($sp)
    MEM_W(0X238, ctx->r29) = ctx->f6.u32l;
    func_15132A4C(rdram, ctx);
        goto after_46;
    // 0x150BC3DC: swc1        $f6, 0x238($sp)
    MEM_W(0X238, ctx->r29) = ctx->f6.u32l;
    after_46:
    // 0x150BC3E0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x150BC3E4: sll         $t0, $s2, 24
    ctx->r8 = S32(ctx->r18 << 24);
    // 0x150BC3E8: sra         $s2, $t0, 24
    ctx->r18 = S32(SIGNED(ctx->r8) >> 24);
    // 0x150BC3EC: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x150BC3F0: bne         $at, $zero, L_150BC2D8
    if (ctx->r1 != 0) {
        // 0x150BC3F4: nop
    
            goto L_150BC2D8;
    }
    // 0x150BC3F4: nop

    // 0x150BC3F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150BC3FC: lwc1        $f10, 0x14($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X14);
    // 0x150BC400: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x150BC404: addiu       $t8, $zero, 0x7D0
    ctx->r24 = ADD32(0, 0X7D0);
    // 0x150BC408: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150BC40C: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    // 0x150BC410: addiu       $a1, $zero, 0x6590
    ctx->r5 = ADD32(0, 0X6590);
    // 0x150BC414: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150BC418: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x150BC41C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150BC420: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150BC424: lwc1        $f18, 0x18($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X18);
    // 0x150BC428: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150BC42C: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x150BC430: nop

    // 0x150BC434: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150BC438: lwc1        $f4, 0x1C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x150BC43C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x150BC440: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x150BC444: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150BC448: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x150BC44C: jal         0x10010F88
    // 0x150BC450: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_10010F88(rdram, ctx);
        goto after_47;
    // 0x150BC450: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_47:
L_150BC454:
    // 0x150BC454: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
L_150BC458:
    // 0x150BC458: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x150BC45C: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x150BC460: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x150BC464: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x150BC468: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x150BC46C: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x150BC470: lw          $s0, 0x7C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X7C);
    // 0x150BC474: lw          $s1, 0x80($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X80);
    // 0x150BC478: lw          $s2, 0x84($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X84);
    // 0x150BC47C: lw          $s3, 0x88($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X88);
    // 0x150BC480: jr          $ra
    // 0x150BC484: addiu       $sp, $sp, 0x270
    ctx->r29 = ADD32(ctx->r29, 0X270);
    return;
    return;
    // 0x150BC484: addiu       $sp, $sp, 0x270
    ctx->r29 = ADD32(ctx->r29, 0X270);
;}
RECOMP_FUNC void func_1514A498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514A498: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
    // 0x1514A49C: lwc1        $f2, 0x144($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X144);
    // 0x1514A4A0: lwc1        $f12, 0x2C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x1514A4A4: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x1514A4A8: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1514A4AC: lh          $t6, 0x156($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X156);
    // 0x1514A4B0: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1514A4B4: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1514A4B8: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x1514A4BC: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x1514A4C0: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x1514A4C4: beq         $at, $zero, L_1514A4E0
    if (ctx->r1 == 0) {
        // 0x1514A4C8: swc1        $f10, 0x2C($a0)
        MEM_W(0X2C, ctx->r4) = ctx->f10.u32l;
            goto L_1514A4E0;
    }
    // 0x1514A4C8: swc1        $f10, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f10.u32l;
    // 0x1514A4CC: lh          $t7, 0x158($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X158);
    // 0x1514A4D0: multu       $v0, $t7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1514A4D4: mflo        $t8
    ctx->r24 = lo;
    // 0x1514A4D8: sb          $t8, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r24;
    // 0x1514A4DC: nop

L_1514A4E0:
    // 0x1514A4E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1514A4E4: jr          $ra
    // 0x1514A4E8: nop

    return;
    return;
    // 0x1514A4E8: nop

;}
RECOMP_FUNC void func_151ED1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151ED1E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151ED1E4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151ED1E8: addiu       $t2, $t2, 0xB96
    ctx->r10 = ADD32(ctx->r10, 0XB96);
    // 0x151ED1EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151ED1F0: lbu         $t6, 0x0($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X0);
    // 0x151ED1F4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151ED1F8: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x151ED1FC: bne         $t6, $zero, L_151ED20C
    if (ctx->r14 != 0) {
        // 0x151ED200: lui         $t8, 0xEF08
        ctx->r24 = S32(0XEF08 << 16);
            goto L_151ED20C;
    }
    // 0x151ED200: lui         $t8, 0xEF08
    ctx->r24 = S32(0XEF08 << 16);
    // 0x151ED204: b           L_151ED28C
    // 0x151ED208: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_151ED28C;
    // 0x151ED208: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_151ED20C:
    // 0x151ED20C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151ED210: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x151ED214: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151ED218: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151ED21C: lui         $t9, 0x50
    ctx->r25 = S32(0X50 << 16);
    // 0x151ED220: ori         $t9, $t9, 0x4340
    ctx->r25 = ctx->r25 | 0X4340;
    // 0x151ED224: ori         $t8, $t8, 0x2C3F
    ctx->r24 = ctx->r24 | 0X2C3F;
    // 0x151ED228: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x151ED22C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x151ED230: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151ED234: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x151ED238: lui         $t3, 0xFCFF
    ctx->r11 = S32(0XFCFF << 16);
    // 0x151ED23C: lui         $t4, 0xFFFE
    ctx->r12 = S32(0XFFFE << 16);
    // 0x151ED240: ori         $t4, $t4, 0xFB7D
    ctx->r12 = ctx->r12 | 0XFB7D;
    // 0x151ED244: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x151ED248: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x151ED24C: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x151ED250: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151ED254: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x151ED258: lui         $t5, 0xFB00
    ctx->r13 = S32(0XFB00 << 16);
    // 0x151ED25C: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x151ED260: lbu         $t7, 0x0($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X0);
    // 0x151ED264: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151ED268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151ED26C: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x151ED270: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151ED274: lw          $t8, -0x19DC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X19DC);
    // 0x151ED278: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x151ED27C: lw          $a3, -0x19E0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X19E0);
    // 0x151ED280: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151ED284: jal         0x1501A6CC
    // 0x151ED288: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1501A6CC(rdram, ctx);
        goto after_0;
    // 0x151ED288: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
L_151ED28C:
    // 0x151ED28C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151ED290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151ED294: jr          $ra
    // 0x151ED298: nop

    return;
    return;
    // 0x151ED298: nop

;}
RECOMP_FUNC void func_1517ABB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517ABB0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1517ABB4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1517ABB8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1517ABBC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1517ABC0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1517ABC4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1517ABC8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1517ABCC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1517ABD0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1517ABD4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1517ABD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1517ABDC: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x1517ABE0: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x1517ABE4: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x1517ABE8: addiu       $s7, $s7, 0x4310
    ctx->r23 = ADD32(ctx->r23, 0X4310);
    // 0x1517ABEC: addiu       $fp, $fp, 0x7230
    ctx->r30 = ADD32(ctx->r30, 0X7230);
    // 0x1517ABF0: addiu       $s4, $s4, -0x2BA0
    ctx->r20 = ADD32(ctx->r20, -0X2BA0);
    // 0x1517ABF4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_1517ABF8:
    // 0x1517ABF8: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x1517ABFC: sll         $t7, $s6, 3
    ctx->r15 = S32(ctx->r22 << 3);
    // 0x1517AC00: addu        $s3, $fp, $t7
    ctx->r19 = ADD32(ctx->r30, ctx->r15);
    // 0x1517AC04: beql        $t6, $zero, L_1517ACC4
    if (ctx->r14 == 0) {
        // 0x1517AC08: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_1517ACC4;
    }
    goto skip_0;
    // 0x1517AC08: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_0:
    // 0x1517AC0C: lbu         $t8, 0x0($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X0);
    // 0x1517AC10: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x1517AC14: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x1517AC18: addu        $t0, $s7, $t9
    ctx->r8 = ADD32(ctx->r23, ctx->r25);
    // 0x1517AC1C: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x1517AC20: blezl       $v0, L_1517ACC4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1517AC24: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_1517ACC4;
    }
    goto skip_1;
    // 0x1517AC24: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_1:
    // 0x1517AC28: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
L_1517AC2C:
    // 0x1517AC2C: blez        $a1, L_1517ACB0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1517AC30: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_1517ACB0;
    }
    // 0x1517AC30: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1517AC34: sll         $s2, $s5, 2
    ctx->r18 = S32(ctx->r21 << 2);
    // 0x1517AC38: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1517AC3C:
    // 0x1517AC3C: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x1517AC40: addu        $t2, $t1, $s2
    ctx->r10 = ADD32(ctx->r9, ctx->r18);
    // 0x1517AC44: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x1517AC48: addu        $v0, $t3, $s0
    ctx->r2 = ADD32(ctx->r11, ctx->r16);
    // 0x1517AC4C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x1517AC50: beql        $a0, $zero, L_1517AC94
    if (ctx->r4 == 0) {
        // 0x1517AC54: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1517AC94;
    }
    goto skip_2;
    // 0x1517AC54: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x1517AC58: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x1517AC5C: beq         $v1, $zero, L_1517AC70
    if (ctx->r3 == 0) {
        // 0x1517AC60: addiu       $t4, $v1, -0x1
        ctx->r12 = ADD32(ctx->r3, -0X1);
            goto L_1517AC70;
    }
    // 0x1517AC60: addiu       $t4, $v1, -0x1
    ctx->r12 = ADD32(ctx->r3, -0X1);
    // 0x1517AC64: sb          $t4, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r12;
    // 0x1517AC68: b           L_1517AC90
    // 0x1517AC6C: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
        goto L_1517AC90;
    // 0x1517AC6C: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
L_1517AC70:
    // 0x1517AC70: jal         0x10004074
    // 0x1517AC74: nop

    func_10004074(rdram, ctx);
        goto after_0;
    // 0x1517AC74: nop

    after_0:
    // 0x1517AC78: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
    // 0x1517AC7C: addu        $t6, $t5, $s2
    ctx->r14 = ADD32(ctx->r13, ctx->r18);
    // 0x1517AC80: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1517AC84: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x1517AC88: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x1517AC8C: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
L_1517AC90:
    // 0x1517AC90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1517AC94:
    // 0x1517AC94: slt         $at, $s1, $a1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1517AC98: bne         $at, $zero, L_1517AC3C
    if (ctx->r1 != 0) {
        // 0x1517AC9C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_1517AC3C;
    }
    // 0x1517AC9C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1517ACA0: lbu         $t9, 0x0($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X0);
    // 0x1517ACA4: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x1517ACA8: addu        $t1, $s7, $t0
    ctx->r9 = ADD32(ctx->r23, ctx->r8);
    // 0x1517ACAC: lhu         $v0, 0x0($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X0);
L_1517ACB0:
    // 0x1517ACB0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x1517ACB4: slt         $at, $s5, $v0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1517ACB8: bne         $at, $zero, L_1517AC2C
    if (ctx->r1 != 0) {
        // 0x1517ACBC: nop
    
            goto L_1517AC2C;
    }
    // 0x1517ACBC: nop

    // 0x1517ACC0: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_1517ACC4:
    // 0x1517ACC4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1517ACC8: bne         $s6, $at, L_1517ABF8
    if (ctx->r22 != ctx->r1) {
        // 0x1517ACCC: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_1517ABF8;
    }
    // 0x1517ACCC: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x1517ACD0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1517ACD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1517ACD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1517ACDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1517ACE0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1517ACE4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1517ACE8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1517ACEC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1517ACF0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x1517ACF4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x1517ACF8: jr          $ra
    // 0x1517ACFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x1517ACFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_150764C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150764C8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150764CC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150764D0: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x150764D4: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x150764D8: sb          $t6, 0x238($t7)
    MEM_B(0X238, ctx->r15) = ctx->r14;
    // 0x150764DC: jr          $ra
    // 0x150764E0: nop

    return;
    return;
    // 0x150764E0: nop

;}
RECOMP_FUNC void func_150127B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150127B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150127B4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150127B8: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x150127BC: addiu       $s4, $s4, -0x1AE0
    ctx->r20 = ADD32(ctx->r20, -0X1AE0);
    // 0x150127C0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150127C4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x150127C8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x150127CC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x150127D0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x150127D4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150127D8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150127DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150127E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150127E4: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x150127E8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x150127EC: lw          $t6, 0xDF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XDF0);
    // 0x150127F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150127F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150127F8: lbu         $v1, 0x21($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X21);
    // 0x150127FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15012800: beq         $v1, $zero, L_15012C54
    if (ctx->r3 == 0) {
        // 0x15012804: andi        $t7, $v1, 0x1
        ctx->r15 = ctx->r3 & 0X1;
            goto L_15012C54;
    }
    // 0x15012804: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x15012808: beq         $t7, $zero, L_1501283C
    if (ctx->r15 == 0) {
        // 0x1501280C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1501283C;
    }
    // 0x1501280C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15012810: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x15012814: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x15012818: lw          $t8, 0xE44($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XE44);
    // 0x1501281C: lw          $v0, 0xE40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XE40);
    // 0x15012820: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x15012824: lw          $t9, 0xE48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XE48);
    // 0x15012828: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x1501282C: lw          $t0, 0xE4C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0XE4C);
    // 0x15012830: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x15012834: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x15012838: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
L_1501283C:
    // 0x1501283C: andi        $t1, $v1, 0x2
    ctx->r9 = ctx->r3 & 0X2;
    // 0x15012840: beq         $t1, $zero, L_15012878
    if (ctx->r9 == 0) {
        // 0x15012844: lui         $a0, 0x800E
        ctx->r4 = S32(0X800E << 16);
            goto L_15012878;
    }
    // 0x15012844: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15012848: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
    // 0x1501284C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x15012850: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15012854: blezl       $a0, L_1501287C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x15012858: sll         $a0, $v0, 2
        ctx->r4 = S32(ctx->r2 << 2);
            goto L_1501287C;
    }
    goto skip_0;
    // 0x15012858: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    skip_0:
    // 0x1501285C: lw          $v1, -0x410C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X410C);
L_15012860:
    // 0x15012860: lhu         $t2, 0x16($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X16);
    // 0x15012864: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x15012868: slt         $at, $s6, $a0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1501286C: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x15012870: bne         $at, $zero, L_15012860
    if (ctx->r1 != 0) {
        // 0x15012874: addu        $v0, $v0, $t2
        ctx->r2 = ADD32(ctx->r2, ctx->r10);
            goto L_15012860;
    }
    // 0x15012874: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
L_15012878:
    // 0x15012878: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
L_1501287C:
    // 0x1501287C: jal         0x10003C40
    // 0x15012880: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15012880: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    after_0:
    // 0x15012884: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x15012888: addiu       $s7, $s7, -0x1AF0
    ctx->r23 = ADD32(ctx->r23, -0X1AF0);
    // 0x1501288C: bne         $v0, $zero, L_1501289C
    if (ctx->r2 != 0) {
        // 0x15012890: sw          $v0, 0x0($s7)
        MEM_W(0X0, ctx->r23) = ctx->r2;
            goto L_1501289C;
    }
    // 0x15012890: sw          $v0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r2;
    // 0x15012894: b           L_15012C54
    // 0x15012898: sw          $zero, 0x4($s7)
    MEM_W(0X4, ctx->r23) = 0;
        goto L_15012C54;
    // 0x15012898: sw          $zero, 0x4($s7)
    MEM_W(0X4, ctx->r23) = 0;
L_1501289C:
    // 0x1501289C: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x150128A0: addiu       $fp, $fp, -0x1AD8
    ctx->r30 = ADD32(ctx->r30, -0X1AD8);
    // 0x150128A4: sh          $zero, 0x0($fp)
    MEM_H(0X0, ctx->r30) = 0;
    // 0x150128A8: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x150128AC: lw          $t4, 0xDF0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XDF0);
    // 0x150128B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150128B4: sb          $zero, -0x1A9C($at)
    MEM_B(-0X1A9C, ctx->r1) = 0;
    // 0x150128B8: lbu         $v1, 0x21($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X21);
    // 0x150128BC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x150128C0: addiu       $s1, $s1, 0xE10
    ctx->r17 = ADD32(ctx->r17, 0XE10);
    // 0x150128C4: andi        $t5, $v1, 0x1
    ctx->r13 = ctx->r3 & 0X1;
    // 0x150128C8: beq         $t5, $zero, L_15012944
    if (ctx->r13 == 0) {
        // 0x150128CC: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_15012944;
    }
    // 0x150128CC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x150128D0: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x150128D4: lui         $s6, 0x800C
    ctx->r22 = S32(0X800C << 16);
    // 0x150128D8: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x150128DC: addiu       $s5, $s5, 0xE40
    ctx->r21 = ADD32(ctx->r21, 0XE40);
    // 0x150128E0: addiu       $s6, $s6, -0x1AE0
    ctx->r22 = ADD32(ctx->r22, -0X1AE0);
    // 0x150128E4: addiu       $s0, $s0, -0x1AF0
    ctx->r16 = ADD32(ctx->r16, -0X1AF0);
    // 0x150128E8: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
L_150128EC:
    // 0x150128EC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x150128F0: beql        $a0, $zero, L_15012928
    if (ctx->r4 == 0) {
        // 0x150128F4: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_15012928;
    }
    goto skip_1;
    // 0x150128F4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_1:
    // 0x150128F8: lhu         $t7, 0x0($fp)
    ctx->r15 = MEM_HU(ctx->r30, 0X0);
    // 0x150128FC: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x15012900: addu        $t0, $s5, $s3
    ctx->r8 = ADD32(ctx->r21, ctx->r19);
    // 0x15012904: multu       $t7, $s2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15012908: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x1501290C: mflo        $t8
    ctx->r24 = lo;
    // 0x15012910: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x15012914: jal         0x15012C84
    // 0x15012918: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    func_15012C84(rdram, ctx);
        goto after_1;
    // 0x15012918: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    after_1:
    // 0x1501291C: b           L_1501292C
    // 0x15012920: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
        goto L_1501292C;
    // 0x15012920: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15012924: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_15012928:
    // 0x15012928: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_1501292C:
    // 0x1501292C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x15012930: bne         $s0, $s6, L_150128EC
    if (ctx->r16 != ctx->r22) {
        // 0x15012934: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_150128EC;
    }
    // 0x15012934: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x15012938: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x1501293C: lw          $t1, 0xDF0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XDF0);
    // 0x15012940: lbu         $v1, 0x21($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X21);
L_15012944:
    // 0x15012944: andi        $t2, $v1, 0x2
    ctx->r10 = ctx->r3 & 0X2;
    // 0x15012948: beq         $t2, $zero, L_15012A08
    if (ctx->r10 == 0) {
        // 0x1501294C: lui         $a0, 0x800E
        ctx->r4 = S32(0X800E << 16);
            goto L_15012A08;
    }
    // 0x1501294C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15012950: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
    // 0x15012954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15012958: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501295C: sll         $t3, $a0, 1
    ctx->r11 = S32(ctx->r4 << 1);
    // 0x15012960: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x15012964: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15012968: jal         0x10003C40
    // 0x1501296C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x1501296C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    after_2:
    // 0x15012970: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x15012974: addiu       $s2, $s2, -0x1ADC
    ctx->r18 = ADD32(ctx->r18, -0X1ADC);
    // 0x15012978: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x1501297C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x15012980: lw          $t4, -0x4110($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4110);
    // 0x15012984: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15012988: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1501298C: blez        $t4, L_15012A08
    if (SIGNED(ctx->r12) <= 0) {
        // 0x15012990: ori         $s3, $zero, 0xFFFF
        ctx->r19 = 0 | 0XFFFF;
            goto L_15012A08;
    }
    // 0x15012990: ori         $s3, $zero, 0xFFFF
    ctx->r19 = 0 | 0XFFFF;
    // 0x15012994: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15012998: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
L_1501299C:
    // 0x1501299C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x150129A0: addu        $t7, $t5, $s0
    ctx->r15 = ADD32(ctx->r13, ctx->r16);
    // 0x150129A4: lhu         $t6, 0x16($t7)
    ctx->r14 = MEM_HU(ctx->r15, 0X16);
    // 0x150129A8: beql        $t6, $zero, L_150129E4
    if (ctx->r14 == 0) {
        // 0x150129AC: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_150129E4;
    }
    goto skip_2;
    // 0x150129AC: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_2:
    // 0x150129B0: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x150129B4: lhu         $t8, 0x0($fp)
    ctx->r24 = MEM_HU(ctx->r30, 0X0);
    // 0x150129B8: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x150129BC: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
    // 0x150129C0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x150129C4: addu        $v1, $t1, $s0
    ctx->r3 = ADD32(ctx->r9, ctx->r16);
    // 0x150129C8: lw          $a0, 0x28($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X28);
    // 0x150129CC: jal         0x15012C84
    // 0x150129D0: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    func_15012C84(rdram, ctx);
        goto after_3;
    // 0x150129D0: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    after_3:
    // 0x150129D4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150129D8: b           L_150129EC
    // 0x150129DC: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
        goto L_150129EC;
    // 0x150129DC: addiu       $v0, $v0, -0x410C
    ctx->r2 = ADD32(ctx->r2, -0X410C);
    // 0x150129E0: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
L_150129E4:
    // 0x150129E4: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x150129E8: sh          $s3, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r19;
L_150129EC:
    // 0x150129EC: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x150129F0: lw          $t4, -0x4110($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4110);
    // 0x150129F4: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x150129F8: addiu       $s0, $s0, 0xA0
    ctx->r16 = ADD32(ctx->r16, 0XA0);
    // 0x150129FC: slt         $at, $s6, $t4
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x15012A00: bne         $at, $zero, L_1501299C
    if (ctx->r1 != 0) {
        // 0x15012A04: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_1501299C;
    }
    // 0x15012A04: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_15012A08:
    // 0x15012A08: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x15012A0C: lw          $t5, 0xDF0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XDF0);
    // 0x15012A10: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x15012A14: addiu       $s0, $s0, 0xE38
    ctx->r16 = ADD32(ctx->r16, 0XE38);
    // 0x15012A18: lbu         $t7, 0x21($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X21);
    // 0x15012A1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15012A20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15012A24: andi        $t6, $t7, 0x4
    ctx->r14 = ctx->r15 & 0X4;
    // 0x15012A28: beq         $t6, $zero, L_15012C48
    if (ctx->r14 == 0) {
        // 0x15012A2C: nop
    
            goto L_15012C48;
    }
    // 0x15012A2C: nop

    // 0x15012A30: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x15012A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15012A38: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x15012A3C: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x15012A40: jal         0x10003C40
    // 0x15012A44: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    allocate_memory(rdram, ctx);
        goto after_4;
    // 0x15012A44: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_4:
    // 0x15012A48: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x15012A4C: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x15012A50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15012A54: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x15012A58: jal         0x100226F0
    // 0x15012A5C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    bzero_recomp(rdram, ctx);
        goto after_5;
    // 0x15012A5C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_5:
    // 0x15012A60: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x15012A64: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x15012A68: addiu       $s7, $s7, 0xE34
    ctx->r23 = ADD32(ctx->r23, 0XE34);
    // 0x15012A6C: blez        $a0, L_15012C48
    if (SIGNED(ctx->r4) <= 0) {
        // 0x15012A70: lui         $v1, 0x800B
        ctx->r3 = S32(0X800B << 16);
            goto L_15012C48;
    }
    // 0x15012A70: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x15012A74: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x15012A78: addiu       $fp, $fp, 0xE10
    ctx->r30 = ADD32(ctx->r30, 0XE10);
    // 0x15012A7C: lw          $v1, 0xE34($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XE34);
L_15012A80:
    // 0x15012A80: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x15012A84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15012A88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15012A8C: beq         $v0, $zero, L_15012C38
    if (ctx->r2 == 0) {
        // 0x15012A90: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_15012C38;
    }
    // 0x15012A90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15012A94: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x15012A98: sll         $s3, $s6, 2
    ctx->r19 = S32(ctx->r22 << 2);
    // 0x15012A9C: jal         0x10003C40
    // 0x15012AA0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_6;
    // 0x15012AA0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    after_6:
    // 0x15012AA4: lw          $t0, 0x0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X0);
    // 0x15012AA8: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x15012AAC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x15012AB0: addu        $t1, $t0, $s3
    ctx->r9 = ADD32(ctx->r8, ctx->r19);
    // 0x15012AB4: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x15012AB8: lw          $t4, 0x0($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X0);
    // 0x15012ABC: lw          $t2, 0xE30($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XE30);
    // 0x15012AC0: addu        $v1, $t4, $s6
    ctx->r3 = ADD32(ctx->r12, ctx->r22);
    // 0x15012AC4: lbu         $t5, 0x0($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X0);
    // 0x15012AC8: addu        $t3, $t2, $s3
    ctx->r11 = ADD32(ctx->r10, ctx->r19);
    // 0x15012ACC: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x15012AD0: blez        $t5, L_15012C30
    if (SIGNED(ctx->r13) <= 0) {
        // 0x15012AD4: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_15012C30;
    }
    // 0x15012AD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15012AD8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_15012ADC:
    // 0x15012ADC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15012AE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15012AE4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x15012AE8: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x15012AEC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x15012AF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15012AF4: jal         0x10003C40
    // 0x15012AF8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_7;
    // 0x15012AF8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_7:
    // 0x15012AFC: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x15012B00: slti        $at, $s6, 0x4
    ctx->r1 = SIGNED(ctx->r22) < 0X4 ? 1 : 0;
    // 0x15012B04: addu        $t1, $fp, $s3
    ctx->r9 = ADD32(ctx->r30, ctx->r19);
    // 0x15012B08: addu        $t9, $t6, $s3
    ctx->r25 = ADD32(ctx->r14, ctx->r19);
    // 0x15012B0C: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x15012B10: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x15012B14: sll         $t3, $s6, 2
    ctx->r11 = S32(ctx->r22 << 2);
    // 0x15012B18: addu        $t0, $t8, $s2
    ctx->r8 = ADD32(ctx->r24, ctx->r18);
    // 0x15012B1C: beq         $at, $zero, L_15012B2C
    if (ctx->r1 == 0) {
        // 0x15012B20: sw          $v0, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r2;
            goto L_15012B2C;
    }
    // 0x15012B20: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x15012B24: b           L_15012B40
    // 0x15012B28: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
        goto L_15012B40;
    // 0x15012B28: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
L_15012B2C:
    // 0x15012B2C: lw          $t2, -0x410C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X410C);
    // 0x15012B30: addu        $t3, $t3, $s6
    ctx->r11 = ADD32(ctx->r11, ctx->r22);
    // 0x15012B34: sll         $t3, $t3, 5
    ctx->r11 = S32(ctx->r11 << 5);
    // 0x15012B38: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15012B3C: lw          $a0, -0x258($t4)
    ctx->r4 = MEM_W(ctx->r12, -0X258);
L_15012B40:
    // 0x15012B40: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x15012B44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15012B48: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15012B4C: blezl       $t5, L_15012C10
    if (SIGNED(ctx->r13) <= 0) {
        // 0x15012B50: lw          $t5, 0x0($s7)
        ctx->r13 = MEM_W(ctx->r23, 0X0);
            goto L_15012C10;
    }
    goto skip_3;
    // 0x15012B50: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    skip_3:
    // 0x15012B54: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
L_15012B58:
    // 0x15012B58: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x15012B5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15012B60: addu        $t6, $t7, $v1
    ctx->r14 = ADD32(ctx->r15, ctx->r3);
    // 0x15012B64: addu        $t3, $t2, $s3
    ctx->r11 = ADD32(ctx->r10, ctx->r19);
    // 0x15012B68: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x15012B6C: lhu         $t9, 0x0($t6)
    ctx->r25 = MEM_HU(ctx->r14, 0X0);
    // 0x15012B70: addu        $t5, $t4, $s2
    ctx->r13 = ADD32(ctx->r12, ctx->r18);
    // 0x15012B74: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x15012B78: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x15012B7C: addu        $t0, $a0, $t8
    ctx->r8 = ADD32(ctx->r4, ctx->r24);
    // 0x15012B80: lbu         $t1, 0xC($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XC);
    // 0x15012B84: addu        $t6, $t7, $v0
    ctx->r14 = ADD32(ctx->r15, ctx->r2);
    // 0x15012B88: sb          $t1, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r9;
    // 0x15012B8C: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
    // 0x15012B90: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x15012B94: addu        $t7, $t5, $s3
    ctx->r15 = ADD32(ctx->r13, ctx->r19);
    // 0x15012B98: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x15012B9C: lhu         $t0, 0x0($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X0);
    // 0x15012BA0: lw          $t1, 0x0($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X0);
    // 0x15012BA4: sll         $t2, $t0, 4
    ctx->r10 = S32(ctx->r8 << 4);
    // 0x15012BA8: addu        $t6, $t1, $s2
    ctx->r14 = ADD32(ctx->r9, ctx->r18);
    // 0x15012BAC: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x15012BB0: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x15012BB4: lbu         $t4, 0xD($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XD);
    // 0x15012BB8: addu        $t8, $t9, $v0
    ctx->r24 = ADD32(ctx->r25, ctx->r2);
    // 0x15012BBC: sb          $t4, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r12;
    // 0x15012BC0: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x15012BC4: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x15012BC8: addu        $t9, $t6, $s3
    ctx->r25 = ADD32(ctx->r14, ctx->r19);
    // 0x15012BCC: addu        $t2, $t0, $v1
    ctx->r10 = ADD32(ctx->r8, ctx->r3);
    // 0x15012BD0: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x15012BD4: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x15012BD8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x15012BDC: sll         $t5, $t3, 4
    ctx->r13 = S32(ctx->r11 << 4);
    // 0x15012BE0: addu        $t8, $t4, $s2
    ctx->r24 = ADD32(ctx->r12, ctx->r18);
    // 0x15012BE4: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x15012BE8: addu        $t7, $a0, $t5
    ctx->r15 = ADD32(ctx->r4, ctx->r13);
    // 0x15012BEC: lbu         $t1, 0xE($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0XE);
    // 0x15012BF0: addu        $t2, $t0, $v0
    ctx->r10 = ADD32(ctx->r8, ctx->r2);
    // 0x15012BF4: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x15012BF8: sb          $t1, 0x2($t2)
    MEM_B(0X2, ctx->r10) = ctx->r9;
    // 0x15012BFC: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x15012C00: slt         $at, $s1, $t3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x15012C04: bnel        $at, $zero, L_15012B58
    if (ctx->r1 != 0) {
        // 0x15012C08: lw          $t7, 0x4($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X4);
            goto L_15012B58;
    }
    goto skip_4;
    // 0x15012C08: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    skip_4:
    // 0x15012C0C: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
L_15012C10:
    // 0x15012C10: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x15012C14: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x15012C18: addu        $v1, $t5, $s6
    ctx->r3 = ADD32(ctx->r13, ctx->r22);
    // 0x15012C1C: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x15012C20: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x15012C24: slt         $at, $s5, $t7
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x15012C28: bnel        $at, $zero, L_15012ADC
    if (ctx->r1 != 0) {
        // 0x15012C2C: lw          $a0, 0x8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X8);
            goto L_15012ADC;
    }
    goto skip_5;
    // 0x15012C2C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    skip_5:
L_15012C30:
    // 0x15012C30: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x15012C34: lbu         $a0, 0xE38($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0XE38);
L_15012C38:
    // 0x15012C38: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x15012C3C: slt         $at, $s6, $a0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15012C40: bne         $at, $zero, L_15012A80
    if (ctx->r1 != 0) {
        // 0x15012C44: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15012A80;
    }
    // 0x15012C44: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_15012C48:
    // 0x15012C48: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x15012C4C: jal         0x15012ED8
    // 0x15012C50: lw          $a0, 0xE00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE00);
    func_15012ED8(rdram, ctx);
        goto after_8;
    // 0x15012C50: lw          $a0, 0xE00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE00);
    after_8:
L_15012C54:
    // 0x15012C54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15012C58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15012C5C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15012C60: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15012C64: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15012C68: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15012C6C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15012C70: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15012C74: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15012C78: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15012C7C: jr          $ra
    // 0x15012C80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x15012C80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_1001AA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001AA08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1001AA0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001AA10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1001AA14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1001AA18: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1001AA1C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1001AA20: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x1001AA24: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x1001AA28: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x1001AA2C: lw          $t8, 0x60($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X60);
    // 0x1001AA30: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x1001AA34: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x1001AA38: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1001AA3C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x1001AA40: sb          $t6, 0xD($t1)
    MEM_B(0XD, ctx->r9) = ctx->r14;
    // 0x1001AA44: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x1001AA48: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x1001AA4C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001AA50: lw          $t4, 0x60($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X60);
    // 0x1001AA54: sll         $t7, $t5, 4
    ctx->r15 = S32(ctx->r13 << 4);
    // 0x1001AA58: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x1001AA5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1001AA60: addu        $t9, $t4, $t7
    ctx->r25 = ADD32(ctx->r12, ctx->r15);
    // 0x1001AA64: sb          $t2, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r10;
    // 0x1001AA68: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x1001AA6C: bne         $t8, $zero, L_1001AA98
    if (ctx->r24 != 0) {
        // 0x1001AA70: nop
    
            goto L_1001AA98;
    }
    // 0x1001AA70: nop

    // 0x1001AA74: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x1001AA78: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001AA7C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1001AA80: lhu         $t6, 0x30($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X30);
    // 0x1001AA84: sllv        $t5, $t3, $t1
    ctx->r13 = S32(ctx->r11 << (ctx->r9 & 31));
    // 0x1001AA88: xori        $t4, $t5, 0xFFFF
    ctx->r12 = ctx->r13 ^ 0XFFFF;
    // 0x1001AA8C: and         $t7, $t6, $t4
    ctx->r15 = ctx->r14 & ctx->r12;
    // 0x1001AA90: b           L_1001AAB4
    // 0x1001AA94: sh          $t7, 0x30($t0)
    MEM_H(0X30, ctx->r8) = ctx->r15;
        goto L_1001AAB4;
    // 0x1001AA94: sh          $t7, 0x30($t0)
    MEM_H(0X30, ctx->r8) = ctx->r15;
L_1001AA98:
    // 0x1001AA98: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x1001AA9C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1001AAA0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1001AAA4: lhu         $t9, 0x30($t2)
    ctx->r25 = MEM_HU(ctx->r10, 0X30);
    // 0x1001AAA8: sllv        $t1, $t3, $t8
    ctx->r9 = S32(ctx->r11 << (ctx->r24 & 31));
    // 0x1001AAAC: or          $t5, $t9, $t1
    ctx->r13 = ctx->r25 | ctx->r9;
    // 0x1001AAB0: sh          $t5, 0x30($t2)
    MEM_H(0X30, ctx->r10) = ctx->r13;
L_1001AAB4:
    // 0x1001AAB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1001AAB8: jal         0x1001A45C
    // 0x1001AABC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_1001A45C(rdram, ctx);
        goto after_0;
    // 0x1001AABC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x1001AAC0: b           L_1001AAC8
    // 0x1001AAC4: nop

        goto L_1001AAC8;
    // 0x1001AAC4: nop

L_1001AAC8:
    // 0x1001AAC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001AACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1001AAD0: jr          $ra
    // 0x1001AAD4: nop

    return;
    return;
    // 0x1001AAD4: nop

;}
RECOMP_FUNC void func_151839F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151839F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151839F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151839F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151839FC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x15183A00: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x15183A04: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15183A08: addiu       $t7, $t7, -0x2180
    ctx->r15 = ADD32(ctx->r15, -0X2180);
    // 0x15183A0C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15183A10: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x15183A14: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x15183A18: bne         $v0, $zero, L_15183A30
    if (ctx->r2 != 0) {
        // 0x15183A1C: nop
    
            goto L_15183A30;
    }
    // 0x15183A1C: nop

    // 0x15183A20: jal         0x15183ACC
    // 0x15183A24: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_15183ACC(rdram, ctx);
        goto after_0;
    // 0x15183A24: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x15183A28: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x15183A2C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_15183A30:
    // 0x15183A30: beq         $v0, $zero, L_15183ABC
    if (ctx->r2 == 0) {
        // 0x15183A34: lw          $t8, 0x2C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X2C);
            goto L_15183ABC;
    }
    // 0x15183A34: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x15183A38: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15183A3C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15183A40: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15183A44: addiu       $t0, $t0, -0x2180
    ctx->r8 = ADD32(ctx->r8, -0X2180);
    // 0x15183A48: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15183A4C: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x15183A50: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x15183A54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15183A58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15183A5C: bne         $t1, $zero, L_15183ABC
    if (ctx->r9 != 0) {
        // 0x15183A60: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_15183ABC;
    }
    // 0x15183A60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15183A64: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x15183A68: addiu       $t3, $t8, 0xAD
    ctx->r11 = ADD32(ctx->r24, 0XAD);
    // 0x15183A6C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15183A70: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15183A74: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15183A78: jal         0x1502B6BC
    // 0x15183A7C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_1502B6BC(rdram, ctx);
        goto after_1;
    // 0x15183A7C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_1:
    // 0x15183A80: beq         $v0, $zero, L_15183ABC
    if (ctx->r2 == 0) {
        // 0x15183A84: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_15183ABC;
    }
    // 0x15183A84: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x15183A88: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x15183A8C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x15183A90: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x15183A94: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15183A98: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x15183A9C: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    // 0x15183AA0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15183AA4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x15183AA8: sw          $t5, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r13;
    // 0x15183AAC: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x15183AB0: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x15183AB4: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
    // 0x15183AB8: sb          $t7, -0x2098($at)
    MEM_B(-0X2098, ctx->r1) = ctx->r15;
L_15183ABC:
    // 0x15183ABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15183AC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15183AC4: jr          $ra
    // 0x15183AC8: nop

    return;
    return;
    // 0x15183AC8: nop

;}
RECOMP_FUNC void func_150D149C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D149C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150D14A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150D14A4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x150D14A8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150D14AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D14B0: lui         $at, 0x42F6
    ctx->r1 = S32(0X42F6 << 16);
    // 0x150D14B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D14B8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x150D14BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D14C0: lwc1        $f8, 0x8C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X8C0);
    // 0x150D14C4: addiu       $v0, $t6, 0x28
    ctx->r2 = ADD32(ctx->r14, 0X28);
    // 0x150D14C8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x150D14CC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x150D14D0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x150D14D4: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x150D14D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150D14DC: addiu       $a0, $t6, 0x30
    ctx->r4 = ADD32(ctx->r14, 0X30);
    // 0x150D14E0: addiu       $a2, $t6, 0x2C
    ctx->r6 = ADD32(ctx->r14, 0X2C);
    // 0x150D14E4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x150D14E8: jal         0x151467A4
    // 0x150D14EC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_151467A4(rdram, ctx);
        goto after_0;
    // 0x150D14EC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x150D14F0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x150D14F4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150D14F8: addiu       $v1, $v1, -0x32E0
    ctx->r3 = ADD32(ctx->r3, -0X32E0);
    // 0x150D14FC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150D1500: lbu         $a1, 0x1($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X1);
    // 0x150D1504: lbu         $a2, 0x2($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X2);
    // 0x150D1508: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150D150C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150D1510: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x150D1514: jal         0x1515D4D4
    // 0x150D1518: nop

    func_1515D4D4(rdram, ctx);
        goto after_1;
    // 0x150D1518: nop

    after_1:
    // 0x150D151C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150D1520: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150D1524: jr          $ra
    // 0x150D1528: nop

    return;
    return;
    // 0x150D1528: nop

;}
RECOMP_FUNC void func_1507DFE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507DFE4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1507DFE8: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x1507DFEC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1507DFF0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1507DFF4: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x1507DFF8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1507DFFC: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x1507E000: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1507E004: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1507E008: beq         $t6, $at, L_1507E104
    if (ctx->r14 == ctx->r1) {
        // 0x1507E00C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_1507E104;
    }
    // 0x1507E00C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1507E010: addiu       $t7, $sp, 0x50
    ctx->r15 = ADD32(ctx->r29, 0X50);
    // 0x1507E014: addiu       $t8, $sp, 0x4F
    ctx->r24 = ADD32(ctx->r29, 0X4F);
    // 0x1507E018: addiu       $t9, $sp, 0x4E
    ctx->r25 = ADD32(ctx->r29, 0X4E);
    // 0x1507E01C: addiu       $t0, $sp, 0x44
    ctx->r8 = ADD32(ctx->r29, 0X44);
    // 0x1507E020: addiu       $t1, $sp, 0x48
    ctx->r9 = ADD32(ctx->r29, 0X48);
    // 0x1507E024: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1507E028: addiu       $t3, $sp, 0x38
    ctx->r11 = ADD32(ctx->r29, 0X38);
    // 0x1507E02C: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x1507E030: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x1507E034: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x1507E038: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1507E03C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1507E040: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1507E044: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1507E048: jal         0x15084D70
    // 0x1507E04C: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    func_15084D70(rdram, ctx);
        goto after_0;
    // 0x1507E04C: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    after_0:
    // 0x1507E050: lbu         $t4, 0x4E($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X4E);
    // 0x1507E054: lui         $at, 0x3FB4
    ctx->r1 = S32(0X3FB4 << 16);
    // 0x1507E058: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1507E05C: addiu       $t5, $t4, -0x40
    ctx->r13 = ADD32(ctx->r12, -0X40);
    // 0x1507E060: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1507E064: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x1507E068: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x1507E06C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1507E070: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1507E074: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1507E078: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1507E07C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1507E080: bne         $v0, $zero, L_1507E090
    if (ctx->r2 != 0) {
        // 0x1507E084: add.s       $f0, $f10, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
            goto L_1507E090;
    }
    // 0x1507E084: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1507E088: b           L_1507E09C
    // 0x1507E08C: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
        goto L_1507E09C;
    // 0x1507E08C: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
L_1507E090:
    // 0x1507E090: bne         $v0, $at, L_1507E104
    if (ctx->r2 != ctx->r1) {
        // 0x1507E094: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_1507E104;
    }
    // 0x1507E094: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x1507E098: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
L_1507E09C:
    // 0x1507E09C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1507E0A0: lh          $a0, 0x5C($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X5C);
    // 0x1507E0A4: lh          $a1, 0x5E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X5E);
    // 0x1507E0A8: jal         0x15022190
    // 0x1507E0AC: lh          $a2, 0x60($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X60);
    func_15022190(rdram, ctx);
        goto after_1;
    // 0x1507E0AC: lh          $a2, 0x60($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X60);
    after_1:
    // 0x1507E0B0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1507E0B4: addiu       $v0, $v0, -0x1610
    ctx->r2 = ADD32(ctx->r2, -0X1610);
    // 0x1507E0B8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x1507E0BC: addiu       $t9, $zero, 0x25
    ctx->r25 = ADD32(0, 0X25);
    // 0x1507E0C0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1507E0C4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1507E0C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1507E0CC: sb          $t0, 0x3671($at)
    MEM_B(0X3671, ctx->r1) = ctx->r8;
    // 0x1507E0D0: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x1507E0D4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x1507E0D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1507E0DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1507E0E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1507E0E4: jal         0x1501D348
    // 0x1507E0E8: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    func_1501D348(rdram, ctx);
        goto after_2;
    // 0x1507E0E8: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    after_2:
    // 0x1507E0EC: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x1507E0F0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1507E0F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1507E0F8: sb          $t1, 0x3670($at)
    MEM_B(0X3670, ctx->r1) = ctx->r9;
    // 0x1507E0FC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1507E100: sw          $t2, -0x1610($at)
    MEM_W(-0X1610, ctx->r1) = ctx->r10;
L_1507E104:
    // 0x1507E104: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1507E108: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x1507E10C: jr          $ra
    // 0x1507E110: nop

    return;
    return;
    // 0x1507E110: nop

;}
RECOMP_FUNC void n_alEnvmixerParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10020978: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1002097C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10020980: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10020984: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x10020988: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1002098C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x10020990: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x10020994: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x10020998: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x1002099C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x100209A0: beq         $s0, $at, L_100209C8
    if (ctx->r16 == ctx->r1) {
        // 0x100209A4: nop
    
            goto L_100209C8;
    }
    // 0x100209A4: nop

    // 0x100209A8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x100209AC: beq         $s0, $at, L_10020A0C
    if (ctx->r16 == ctx->r1) {
        // 0x100209B0: nop
    
            goto L_10020A0C;
    }
    // 0x100209B0: nop

    // 0x100209B4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x100209B8: beq         $s0, $at, L_10020A6C
    if (ctx->r16 == ctx->r1) {
        // 0x100209BC: nop
    
            goto L_10020A6C;
    }
    // 0x100209BC: nop

    // 0x100209C0: b           L_10020A80
    // 0x100209C4: nop

        goto L_10020A80;
    // 0x100209C4: nop

L_100209C8:
    // 0x100209C8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x100209CC: lw          $t8, 0x88($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X88);
    // 0x100209D0: beq         $t8, $zero, L_100209EC
    if (ctx->r24 == 0) {
        // 0x100209D4: nop
    
            goto L_100209EC;
    }
    // 0x100209D4: nop

    // 0x100209D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x100209DC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x100209E0: lw          $t1, 0x88($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X88);
    // 0x100209E4: b           L_100209F8
    // 0x100209E8: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
        goto L_100209F8;
    // 0x100209E8: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
L_100209EC:
    // 0x100209EC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x100209F0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x100209F4: sw          $t2, 0x84($t3)
    MEM_W(0X84, ctx->r11) = ctx->r10;
L_100209F8:
    // 0x100209F8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x100209FC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x10020A00: sw          $t4, 0x88($t5)
    MEM_W(0X88, ctx->r13) = ctx->r12;
    // 0x10020A04: b           L_10020A98
    // 0x10020A08: nop

        goto L_10020A98;
    // 0x10020A08: nop

L_10020A0C:
    // 0x10020A0C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x10020A10: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x10020A14: sw          $t6, 0x80($t7)
    MEM_W(0X80, ctx->r15) = ctx->r14;
    // 0x10020A18: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x10020A1C: sw          $zero, 0x8C($t8)
    MEM_W(0X8C, ctx->r24) = 0;
    // 0x10020A20: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x10020A24: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x10020A28: sh          $t0, 0x62($t9)
    MEM_H(0X62, ctx->r25) = ctx->r8;
    // 0x10020A2C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x10020A30: sw          $zero, 0x7C($t1)
    MEM_W(0X7C, ctx->r9) = 0;
    // 0x10020A34: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x10020A38: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x10020A3C: swc1        $f4, 0x54($t2)
    MEM_W(0X54, ctx->r10) = ctx->f4.u32l;
    // 0x10020A40: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x10020A44: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x10020A48: sw          $t3, 0x58($t4)
    MEM_W(0X58, ctx->r12) = ctx->r11;
    // 0x10020A4C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x10020A50: sw          $zero, 0x50($t5)
    MEM_W(0X50, ctx->r13) = 0;
    // 0x10020A54: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x10020A58: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x10020A5C: jal         0x10022338
    // 0x10020A60: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    n_alLoadParam(rdram, ctx);
        goto after_0;
    // 0x10020A60: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_0:
    // 0x10020A64: b           L_10020A98
    // 0x10020A68: nop

        goto L_10020A98;
    // 0x10020A68: nop

L_10020A6C:
    // 0x10020A6C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x10020A70: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x10020A74: sw          $t6, 0x8C($t7)
    MEM_W(0X8C, ctx->r15) = ctx->r14;
    // 0x10020A78: b           L_10020A98
    // 0x10020A7C: nop

        goto L_10020A98;
    // 0x10020A7C: nop

L_10020A80:
    // 0x10020A80: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x10020A84: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x10020A88: jal         0x10022338
    // 0x10020A8C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    n_alLoadParam(rdram, ctx);
        goto after_1;
    // 0x10020A8C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x10020A90: b           L_10020A98
    // 0x10020A94: nop

        goto L_10020A98;
    // 0x10020A94: nop

L_10020A98:
    // 0x10020A98: b           L_10020AA8
    // 0x10020A9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_10020AA8;
    // 0x10020A9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x10020AA0: b           L_10020AA8
    // 0x10020AA4: nop

        goto L_10020AA8;
    // 0x10020AA4: nop

L_10020AA8:
    // 0x10020AA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x10020AAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x10020AB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10020AB4: jr          $ra
    // 0x10020AB8: nop

    return;
    return;
    // 0x10020AB8: nop

;}
RECOMP_FUNC void func_1512D604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512D604: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x1512D608: addiu       $a2, $a2, -0x3D50
    ctx->r6 = ADD32(ctx->r6, -0X3D50);
    // 0x1512D60C: addiu       $a3, $zero, 0xB0
    ctx->r7 = ADD32(0, 0XB0);
    // 0x1512D610: lbu         $t7, 0x23D($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X23D);
    // 0x1512D614: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x1512D618: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x1512D61C: multu       $t7, $a3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1512D620: mflo        $t8
    ctx->r24 = lo;
    // 0x1512D624: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x1512D628: lw          $a1, 0xA8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XA8);
    // 0x1512D62C: addiu       $t0, $a1, 0x1
    ctx->r8 = ADD32(ctx->r5, 0X1);
    // 0x1512D630: sw          $t0, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r8;
    // 0x1512D634: lbu         $t2, 0x23D($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X23D);
    // 0x1512D638: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x1512D63C: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x1512D640: multu       $t2, $a3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1512D644: addu        $v1, $v0, $t9
    ctx->r3 = ADD32(ctx->r2, ctx->r25);
    // 0x1512D648: mflo        $t3
    ctx->r11 = lo;
    // 0x1512D64C: addu        $v0, $t1, $t3
    ctx->r2 = ADD32(ctx->r9, ctx->r11);
    // 0x1512D650: lw          $t4, 0xA8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XA8);
    // 0x1512D654: bnel        $t4, $at, L_1512D664
    if (ctx->r12 != ctx->r1) {
        // 0x1512D658: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1512D664;
    }
    goto skip_0;
    // 0x1512D658: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x1512D65C: sw          $zero, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = 0;
    // 0x1512D660: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1512D664:
    // 0x1512D664: jr          $ra
    // 0x1512D668: nop

    return;
    return;
    // 0x1512D668: nop

;}
RECOMP_FUNC void func_1000FC18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000FC18: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1000FC1C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1000FC20: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1000FC24: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1000FC28: sll         $s3, $a1, 16
    ctx->r19 = S32(ctx->r5 << 16);
    // 0x1000FC2C: sll         $s4, $a2, 16
    ctx->r20 = S32(ctx->r6 << 16);
    // 0x1000FC30: sll         $s5, $a3, 16
    ctx->r21 = S32(ctx->r7 << 16);
    // 0x1000FC34: sra         $t9, $s5, 16
    ctx->r25 = S32(SIGNED(ctx->r21) >> 16);
    // 0x1000FC38: sra         $t8, $s4, 16
    ctx->r24 = S32(SIGNED(ctx->r20) >> 16);
    // 0x1000FC3C: sra         $t7, $s3, 16
    ctx->r15 = S32(SIGNED(ctx->r19) >> 16);
    // 0x1000FC40: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1000FC44: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x1000FC48: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1000FC4C: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x1000FC50: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x1000FC54: or          $s5, $t9, $zero
    ctx->r21 = ctx->r25 | 0;
    // 0x1000FC58: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1000FC5C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1000FC60: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1000FC64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1000FC68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1000FC6C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x1000FC70: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1000FC74: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x1000FC78: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000FC7C: lw          $v0, 0x2760($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2760);
    // 0x1000FC80: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1000FC84: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1000FC88: blez        $v0, L_1000FD10
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1000FC8C: lui         $s0, 0x8004
        ctx->r16 = S32(0X8004 << 16);
            goto L_1000FD10;
    }
    // 0x1000FC8C: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x1000FC90: addiu       $s0, $s0, 0x1FE0
    ctx->r16 = ADD32(ctx->r16, 0X1FE0);
    // 0x1000FC94: lhu         $s6, 0x4A($sp)
    ctx->r22 = MEM_HU(ctx->r29, 0X4A);
L_1000FC98:
    // 0x1000FC98: lhu         $t0, 0x0($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X0);
    // 0x1000FC9C: bnel        $s2, $t0, L_1000FD04
    if (ctx->r18 != ctx->r8) {
        // 0x1000FCA0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1000FD04;
    }
    goto skip_0;
    // 0x1000FCA0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x1000FCA4: lh          $t1, 0x2($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2);
    // 0x1000FCA8: bnel        $s3, $t1, L_1000FD04
    if (ctx->r19 != ctx->r9) {
        // 0x1000FCAC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1000FD04;
    }
    goto skip_1;
    // 0x1000FCAC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x1000FCB0: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x1000FCB4: bnel        $s4, $t2, L_1000FD04
    if (ctx->r20 != ctx->r10) {
        // 0x1000FCB8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1000FD04;
    }
    goto skip_2;
    // 0x1000FCB8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x1000FCBC: lh          $t3, 0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X6);
    // 0x1000FCC0: bnel        $s5, $t3, L_1000FD04
    if (ctx->r21 != ctx->r11) {
        // 0x1000FCC4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1000FD04;
    }
    goto skip_3;
    // 0x1000FCC4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x1000FCC8: lhu         $t4, 0x8($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X8);
    // 0x1000FCCC: andi        $t5, $t4, 0x7FFF
    ctx->r13 = ctx->r12 & 0X7FFF;
    // 0x1000FCD0: bnel        $s6, $t5, L_1000FD04
    if (ctx->r22 != ctx->r13) {
        // 0x1000FCD4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1000FD04;
    }
    goto skip_4;
    // 0x1000FCD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x1000FCD8: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x1000FCDC: beql        $a0, $zero, L_1000FCF8
    if (ctx->r4 == 0) {
        // 0x1000FCE0: lw          $t6, 0x10($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X10);
            goto L_1000FCF8;
    }
    goto skip_5;
    // 0x1000FCE0: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    skip_5:
    // 0x1000FCE4: jal         0x100111C8
    // 0x1000FCE8: nop

    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x1000FCE8: nop

    after_0:
    // 0x1000FCEC: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000FCF0: lw          $v0, 0x2760($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2760);
    // 0x1000FCF4: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
L_1000FCF8:
    // 0x1000FCF8: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x1000FCFC: sw          $t7, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r15;
    // 0x1000FD00: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1000FD04:
    // 0x1000FD04: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1000FD08: bne         $at, $zero, L_1000FC98
    if (ctx->r1 != 0) {
        // 0x1000FD0C: addiu       $s0, $s0, 0x30
        ctx->r16 = ADD32(ctx->r16, 0X30);
            goto L_1000FC98;
    }
    // 0x1000FD0C: addiu       $s0, $s0, 0x30
    ctx->r16 = ADD32(ctx->r16, 0X30);
L_1000FD10:
    // 0x1000FD10: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1000FD14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1000FD18: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1000FD1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1000FD20: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1000FD24: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1000FD28: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1000FD2C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1000FD30: jr          $ra
    // 0x1000FD34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x1000FD34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void __osCheckId2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F0E20: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151F0E24: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x151F0E28: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x151F0E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F0E30: lbu         $t7, 0x65($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X65);
    // 0x151F0E34: beq         $t7, $zero, L_151F0E60
    if (ctx->r15 == 0) {
        // 0x151F0E38: nop
    
            goto L_151F0E60;
    }
    // 0x151F0E38: nop

    // 0x151F0E3C: sb          $zero, 0x65($t6)
    MEM_B(0X65, ctx->r14) = 0;
    // 0x151F0E40: jal         0x100285FC
    // 0x151F0E44: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    __osPfsSelectBank_recomp(rdram, ctx);
        goto after_0;
    // 0x151F0E44: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_0:
    // 0x151F0E48: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x151F0E4C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x151F0E50: beq         $t8, $zero, L_151F0E60
    if (ctx->r24 == 0) {
        // 0x151F0E54: nop
    
            goto L_151F0E60;
    }
    // 0x151F0E54: nop

    // 0x151F0E58: b           L_151F0F0C
    // 0x151F0E5C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_151F0F0C;
    // 0x151F0E5C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_151F0E60:
    // 0x151F0E60: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x151F0E64: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151F0E68: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    // 0x151F0E6C: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x151F0E70: jal         0x10025C20
    // 0x151F0E74: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    __osContRamRead_recomp(rdram, ctx);
        goto after_1;
    // 0x151F0E74: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    after_1:
    // 0x151F0E78: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x151F0E7C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x151F0E80: beq         $t0, $zero, L_151F0EC8
    if (ctx->r8 == 0) {
        // 0x151F0E84: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151F0EC8;
    }
    // 0x151F0E84: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151F0E88: beq         $t0, $at, L_151F0E98
    if (ctx->r8 == ctx->r1) {
        // 0x151F0E8C: nop
    
            goto L_151F0E98;
    }
    // 0x151F0E8C: nop

    // 0x151F0E90: b           L_151F0F0C
    // 0x151F0E94: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_151F0F0C;
    // 0x151F0E94: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_151F0E98:
    // 0x151F0E98: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x151F0E9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151F0EA0: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    // 0x151F0EA4: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x151F0EA8: jal         0x10025C20
    // 0x151F0EAC: lw          $a1, 0x8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X8);
    __osContRamRead_recomp(rdram, ctx);
        goto after_2;
    // 0x151F0EAC: lw          $a1, 0x8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X8);
    after_2:
    // 0x151F0EB0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x151F0EB4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x151F0EB8: beq         $t2, $zero, L_151F0EC8
    if (ctx->r10 == 0) {
        // 0x151F0EBC: nop
    
            goto L_151F0EC8;
    }
    // 0x151F0EBC: nop

    // 0x151F0EC0: b           L_151F0F0C
    // 0x151F0EC4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_151F0F0C;
    // 0x151F0EC4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_151F0EC8:
    // 0x151F0EC8: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_151F0ECC:
    // 0x151F0ECC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x151F0ED0: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x151F0ED4: addu        $t4, $sp, $t3
    ctx->r12 = ADD32(ctx->r29, ctx->r11);
    // 0x151F0ED8: addu        $t7, $t5, $t3
    ctx->r15 = ADD32(ctx->r13, ctx->r11);
    // 0x151F0EDC: lbu         $t6, 0xC($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0XC);
    // 0x151F0EE0: lbu         $t4, 0x1C($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X1C);
    // 0x151F0EE4: beq         $t4, $t6, L_151F0EF4
    if (ctx->r12 == ctx->r14) {
        // 0x151F0EE8: nop
    
            goto L_151F0EF4;
    }
    // 0x151F0EE8: nop

    // 0x151F0EEC: b           L_151F0F0C
    // 0x151F0EF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_151F0F0C;
    // 0x151F0EF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151F0EF4:
    // 0x151F0EF4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x151F0EF8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x151F0EFC: slti        $at, $t9, 0x20
    ctx->r1 = SIGNED(ctx->r25) < 0X20 ? 1 : 0;
    // 0x151F0F00: bne         $at, $zero, L_151F0ECC
    if (ctx->r1 != 0) {
        // 0x151F0F04: sw          $t9, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r25;
            goto L_151F0ECC;
    }
    // 0x151F0F04: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x151F0F08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151F0F0C:
    // 0x151F0F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F0F10: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x151F0F14: jr          $ra
    // 0x151F0F18: nop

    return;
    return;
    // 0x151F0F18: nop

;}
RECOMP_FUNC void func_15077F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077F34: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15077F38: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x15077F3C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15077F40: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15077F44: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x15077F48: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15077F4C: sb          $t6, 0x24F($t7)
    MEM_B(0X24F, ctx->r15) = ctx->r14;
    // 0x15077F50: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x15077F54: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x15077F58: sb          $t8, 0x250($t9)
    MEM_B(0X250, ctx->r25) = ctx->r24;
    // 0x15077F5C: jr          $ra
    // 0x15077F60: nop

    return;
    return;
    // 0x15077F60: nop

;}
RECOMP_FUNC void func_1509C120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509C120: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1509C124: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1509C128: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1509C12C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1509C130: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1509C134: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1509C138: jal         0x150ADA20
    // 0x1509C13C: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1509C13C: nop

    after_0:
    // 0x1509C140: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1509C144: lw          $t6, 0x2E4C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2E4C);
    // 0x1509C148: andi        $s3, $v0, 0x3
    ctx->r19 = ctx->r2 & 0X3;
    // 0x1509C14C: beq         $t6, $zero, L_1509C168
    if (ctx->r14 == 0) {
        // 0x1509C150: sw          $t6, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r14;
            goto L_1509C168;
    }
    // 0x1509C150: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x1509C154: jal         0x150ADA20
    // 0x1509C158: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1509C158: nop

    after_1:
    // 0x1509C15C: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x1509C160: beql        $t7, $zero, L_1509C210
    if (ctx->r15 == 0) {
        // 0x1509C164: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1509C210;
    }
    goto skip_0;
    // 0x1509C164: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_1509C168:
    // 0x1509C168: bltz        $s3, L_1509C1A4
    if (SIGNED(ctx->r19) < 0) {
        // 0x1509C16C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_1509C1A4;
    }
    // 0x1509C16C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1509C170: sll         $t9, $s3, 2
    ctx->r25 = S32(ctx->r19 << 2);
    // 0x1509C174: addiu       $t0, $t9, 0x4
    ctx->r8 = ADD32(ctx->r25, 0X4);
    // 0x1509C178: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x1509C17C: addu        $s1, $t0, $s0
    ctx->r17 = ADD32(ctx->r8, ctx->r16);
L_1509C180:
    // 0x1509C180: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x1509C184: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1509C188: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1509C18C: jal         0x10003C40
    // 0x1509C190: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x1509C190: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x1509C194: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1509C198: bne         $s1, $s0, L_1509C180
    if (ctx->r17 != ctx->r16) {
        // 0x1509C19C: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_1509C180;
    }
    // 0x1509C19C: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x1509C1A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1509C1A4:
    // 0x1509C1A4: bltz        $s3, L_1509C1D0
    if (SIGNED(ctx->r19) < 0) {
        // 0x1509C1A8: addiu       $s1, $s3, 0x1
        ctx->r17 = ADD32(ctx->r19, 0X1);
            goto L_1509C1D0;
    }
    // 0x1509C1A8: addiu       $s1, $s3, 0x1
    ctx->r17 = ADD32(ctx->r19, 0X1);
    // 0x1509C1AC: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
L_1509C1B0:
    // 0x1509C1B0: beq         $s0, $s3, L_1509C1C4
    if (ctx->r16 == ctx->r19) {
        // 0x1509C1B4: sll         $t1, $s0, 2
        ctx->r9 = S32(ctx->r16 << 2);
            goto L_1509C1C4;
    }
    // 0x1509C1B4: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x1509C1B8: addu        $t2, $s2, $t1
    ctx->r10 = ADD32(ctx->r18, ctx->r9);
    // 0x1509C1BC: jal         0x10004074
    // 0x1509C1C0: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    func_10004074(rdram, ctx);
        goto after_3;
    // 0x1509C1C0: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    after_3:
L_1509C1C4:
    // 0x1509C1C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1509C1C8: bne         $s1, $s0, L_1509C1B0
    if (ctx->r17 != ctx->r16) {
        // 0x1509C1CC: nop
    
            goto L_1509C1B0;
    }
    // 0x1509C1CC: nop

L_1509C1D0:
    // 0x1509C1D0: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
    // 0x1509C1D4: sll         $t3, $s3, 2
    ctx->r11 = S32(ctx->r19 << 2);
    // 0x1509C1D8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1509C1DC: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x1509C1E0: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1509C1E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1509C1E8: beq         $t6, $zero, L_1509C20C
    if (ctx->r14 == 0) {
        // 0x1509C1EC: sw          $t5, 0x2E4C($at)
        MEM_W(0X2E4C, ctx->r1) = ctx->r13;
            goto L_1509C20C;
    }
    // 0x1509C1EC: sw          $t5, 0x2E4C($at)
    MEM_W(0X2E4C, ctx->r1) = ctx->r13;
    // 0x1509C1F0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1509C1F4: lw          $a1, 0x2E4C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2E4C);
    // 0x1509C1F8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1509C1FC: jal         0x10023A10
    // 0x1509C200: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    bcopy_recomp(rdram, ctx);
        goto after_4;
    // 0x1509C200: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    after_4:
    // 0x1509C204: jal         0x10004074
    // 0x1509C208: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_10004074(rdram, ctx);
        goto after_5;
    // 0x1509C208: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_5:
L_1509C20C:
    // 0x1509C20C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1509C210:
    // 0x1509C210: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1509C214: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1509C218: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1509C21C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1509C220: jr          $ra
    // 0x1509C224: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1509C224: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_1506DBD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506DBD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506DBD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506DBDC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506DBE0: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506DBE4: jal         0x15072208
    // 0x1506DBE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15072208(rdram, ctx);
        goto after_0;
    // 0x1506DBE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x1506DBEC: beq         $v0, $zero, L_1506DC00
    if (ctx->r2 == 0) {
        // 0x1506DBF0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1506DC00;
    }
    // 0x1506DBF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1506DBF4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506DBF8: jal         0x15054A5C
    // 0x1506DBFC: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    func_15054A5C(rdram, ctx);
        goto after_1;
    // 0x1506DBFC: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    after_1:
L_1506DC00:
    // 0x1506DC00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506DC04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506DC08: jr          $ra
    // 0x1506DC0C: nop

    return;
    return;
    // 0x1506DC0C: nop

;}
RECOMP_FUNC void func_1501B0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501B0A0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1501B0A4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501B0A8: lwc1        $f0, 0x68F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X68F4);
    // 0x1501B0AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1501B0B0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1501B0B4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x1501B0B8: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x1501B0BC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501B0C0: lw          $t7, -0x19D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X19D8);
    // 0x1501B0C4: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x1501B0C8: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x1501B0CC: sll         $t6, $t6, 7
    ctx->r14 = S32(ctx->r14 << 7);
    // 0x1501B0D0: addu        $v0, $t7, $t6
    ctx->r2 = ADD32(ctx->r15, ctx->r14);
    // 0x1501B0D4: lwc1        $f4, 0x6C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X6C);
    // 0x1501B0D8: lwc1        $f6, 0x70($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X70);
    // 0x1501B0DC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x1501B0E0: mul.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1501B0E4: nop

    // 0x1501B0E8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1501B0EC: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x1501B0F0: jal         0x15047D60
    // 0x1501B0F4: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x1501B0F4: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x1501B0F8: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1501B0FC: jal         0x15047C00
    // 0x1501B100: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x1501B100: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x1501B104: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1501B108: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1501B10C: div.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1501B110: jal         0x15047D60
    // 0x1501B114: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x1501B114: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x1501B118: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x1501B11C: jal         0x15047C00
    // 0x1501B120: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x1501B120: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    after_3:
    // 0x1501B124: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1501B128: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x1501B12C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1501B130: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1501B134: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x1501B138: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1501B13C: lw          $t9, -0x19C8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X19C8);
    // 0x1501B140: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1501B144: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x1501B148: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1501B14C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1501B150: lw          $t0, -0x19B0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X19B0);
    // 0x1501B154: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1501B158: lw          $t1, -0x19D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X19D8);
    // 0x1501B15C: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x1501B160: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1501B164: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x1501B168: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1501B16C: add.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f16.fl;
    // 0x1501B170: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1501B174: div.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1501B178: add.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x1501B17C: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1501B180: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x1501B184: jal         0x150484A0
    // 0x1501B188: lwc1        $f12, 0xC($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0XC);
    func_150484A0(rdram, ctx);
        goto after_4;
    // 0x1501B188: lwc1        $f12, 0xC($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0XC);
    after_4:
    // 0x1501B18C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501B190: lwc1        $f10, 0x68F8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X68F8);
    // 0x1501B194: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x1501B198: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1501B19C: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1501B1A0: lw          $v0, -0x19D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19D8);
    // 0x1501B1A4: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x1501B1A8: subu        $t4, $t4, $v1
    ctx->r12 = SUB32(ctx->r12, ctx->r3);
    // 0x1501B1AC: sll         $t4, $t4, 7
    ctx->r12 = S32(ctx->r12 << 7);
    // 0x1501B1B0: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x1501B1B4: lwc1        $f4, 0x6C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X6C);
    // 0x1501B1B8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1501B1BC: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1501B1C0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x1501B1C4: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x1501B1C8: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x1501B1CC: lwc1        $f12, 0x10($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X10);
    // 0x1501B1D0: jal         0x150484A0
    // 0x1501B1D4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    func_150484A0(rdram, ctx);
        goto after_5;
    // 0x1501B1D4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    after_5:
    // 0x1501B1D8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501B1DC: lwc1        $f8, 0x68FC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X68FC);
    // 0x1501B1E0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1501B1E4: lw          $t8, -0x19D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X19D8);
    // 0x1501B1E8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1501B1EC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x1501B1F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1501B1F4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x1501B1F8: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x1501B1FC: lwc1        $f18, 0x70($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X70);
    // 0x1501B200: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x1501B204: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x1501B208: sub.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x1501B20C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1501B210: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x1501B214: jal         0x1510B128
    // 0x1501B218: nop

    func_1510B128(rdram, ctx);
        goto after_6;
    // 0x1501B218: nop

    after_6:
    // 0x1501B21C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1501B220: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1501B224: jr          $ra
    // 0x1501B228: nop

    return;
    return;
    // 0x1501B228: nop

;}
RECOMP_FUNC void func_1506FFE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FFE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FFE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FFE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FFEC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FFF0: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FFF4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1506FFF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1506FFFC: jal         0x150CBF80
    // 0x15070000: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_150CBF80(rdram, ctx);
        goto after_0;
    // 0x15070000: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x15070004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15070008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507000C: jr          $ra
    // 0x15070010: nop

    return;
    return;
    // 0x15070010: nop

;}
RECOMP_FUNC void func_15193390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15193390: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x15193394: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15193398: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x1519339C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x151933A0: jal         0x100226F0
    // 0x151933A4: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x151933A4: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    after_0:
    // 0x151933A8: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x151933AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151933B0: lwc1        $f4, -0x7E50($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7E50);
    // 0x151933B4: lh          $v1, 0x2E($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2E);
    // 0x151933B8: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x151933BC: addiu       $t3, $zero, 0x45
    ctx->r11 = ADD32(0, 0X45);
    // 0x151933C0: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x151933C4: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x151933C8: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x151933CC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151933D0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x151933D4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151933D8: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x151933DC: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x151933E0: nop

    // 0x151933E4: bc1tl       L_151933F8
    if (c1cs) {
        // 0x151933E8: lh          $t6, 0x2($v0)
        ctx->r14 = MEM_H(ctx->r2, 0X2);
            goto L_151933F8;
    }
    goto skip_0;
    // 0x151933E8: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    skip_0:
    // 0x151933EC: b           L_15193424
    // 0x151933F0: sh          $v1, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r3;
        goto L_15193424;
    // 0x151933F0: sh          $v1, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r3;
    // 0x151933F4: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
L_151933F8:
    // 0x151933F8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x151933FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15193400: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15193404: nop

    // 0x15193408: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1519340C: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x15193410: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15193414: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x15193418: nop

    // 0x1519341C: sh          $t8, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r24;
    // 0x15193420: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
L_15193424:
    // 0x15193424: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x15193428: addiu       $t6, $zero, 0x4880
    ctx->r14 = ADD32(0, 0X4880);
    // 0x1519342C: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x15193430: sh          $t9, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r25;
    // 0x15193434: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x15193438: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1519343C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x15193440: sh          $t0, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r8;
    // 0x15193444: lh          $t1, 0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4);
    // 0x15193448: sh          $zero, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = 0;
    // 0x1519344C: sh          $zero, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = 0;
    // 0x15193450: sb          $t2, 0xCA($sp)
    MEM_B(0XCA, ctx->r29) = ctx->r10;
    // 0x15193454: sb          $t3, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = ctx->r11;
    // 0x15193458: sh          $t4, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r12;
    // 0x1519345C: sh          $t1, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r9;
    // 0x15193460: lbu         $t5, 0x8($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X8);
    // 0x15193464: sh          $t6, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r14;
    // 0x15193468: sb          $t7, 0xCC($sp)
    MEM_B(0XCC, ctx->r29) = ctx->r15;
    // 0x1519346C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15193470: jal         0x1516865C
    // 0x15193474: sb          $t5, 0xCB($sp)
    MEM_B(0XCB, ctx->r29) = ctx->r13;
    func_1516865C(rdram, ctx);
        goto after_1;
    // 0x15193474: sb          $t5, 0xCB($sp)
    MEM_B(0XCB, ctx->r29) = ctx->r13;
    after_1:
    // 0x15193478: lw          $v0, 0xD8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD8);
    // 0x1519347C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x15193480: lbu         $a1, 0xC($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XC);
    // 0x15193484: jal         0x15168800
    // 0x15193488: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    func_15168800(rdram, ctx);
        goto after_2;
    // 0x15193488: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    after_2:
    // 0x1519348C: jal         0x150ADA20
    // 0x15193490: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15193490: nop

    after_3:
    // 0x15193494: lw          $t1, 0xD8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD8);
    // 0x15193498: andi        $t9, $v0, 0x7F
    ctx->r25 = ctx->r2 & 0X7F;
    // 0x1519349C: addiu       $t0, $t9, 0x64
    ctx->r8 = ADD32(ctx->r25, 0X64);
    // 0x151934A0: sh          $t0, 0xE($t1)
    MEM_H(0XE, ctx->r9) = ctx->r8;
    // 0x151934A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151934A8: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x151934AC: jr          $ra
    // 0x151934B0: nop

    return;
    return;
    // 0x151934B0: nop

;}
RECOMP_FUNC void func_15131AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15131AFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15131B00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15131B04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15131B08: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15131B0C: lw          $a1, 0xA8($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XA8);
    // 0x15131B10: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x15131B14: jal         0x15131958
    // 0x15131B18: addiu       $a0, $a3, 0x58
    ctx->r4 = ADD32(ctx->r7, 0X58);
    func_15131958(rdram, ctx);
        goto after_0;
    // 0x15131B18: addiu       $a0, $a3, 0x58
    ctx->r4 = ADD32(ctx->r7, 0X58);
    after_0:
    // 0x15131B1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15131B20: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x15131B24: jal         0x151319C4
    // 0x15131B28: addiu       $a2, $a0, 0xB0
    ctx->r6 = ADD32(ctx->r4, 0XB0);
    func_151319C4(rdram, ctx);
        goto after_1;
    // 0x15131B28: addiu       $a2, $a0, 0xB0
    ctx->r6 = ADD32(ctx->r4, 0XB0);
    after_1:
    // 0x15131B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15131B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15131B34: jr          $ra
    // 0x15131B38: nop

    return;
    return;
    // 0x15131B38: nop

;}
RECOMP_FUNC void func_1503D368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503D368: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1503D36C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1503D370: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1503D374: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x1503D378: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1503D37C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1503D380: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1503D384: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1503D388: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1503D38C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1503D390: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1503D394: beql        $s2, $zero, L_1503D414
    if (ctx->r18 == 0) {
        // 0x1503D398: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1503D414;
    }
    goto skip_0;
    // 0x1503D398: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x1503D39C: lb          $t6, 0x0($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X0);
    // 0x1503D3A0: addiu       $s3, $zero, -0x21
    ctx->r19 = ADD32(0, -0X21);
    // 0x1503D3A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1503D3A8: beq         $s3, $t6, L_1503D410
    if (ctx->r19 == ctx->r14) {
        // 0x1503D3AC: or          $v0, $s2, $zero
        ctx->r2 = ctx->r18 | 0;
            goto L_1503D410;
    }
    // 0x1503D3AC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x1503D3B0: lb          $v1, 0x0($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X0);
    // 0x1503D3B4: addiu       $s6, $zero, 0xE
    ctx->r22 = ADD32(0, 0XE);
    // 0x1503D3B8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x1503D3BC: addiu       $s4, $zero, -0x24
    ctx->r20 = ADD32(0, -0X24);
L_1503D3C0:
    // 0x1503D3C0: beql        $v1, $s4, L_1503D3E4
    if (ctx->r3 == ctx->r20) {
        // 0x1503D3C4: lbu         $t7, 0x3($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0X3);
            goto L_1503D3E4;
    }
    goto skip_1;
    // 0x1503D3C4: lbu         $t7, 0x3($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3);
    skip_1:
    // 0x1503D3C8: bne         $v1, $s5, L_1503D3F8
    if (ctx->r3 != ctx->r21) {
        // 0x1503D3CC: addiu       $a0, $v0, 0x4
        ctx->r4 = ADD32(ctx->r2, 0X4);
            goto L_1503D3F8;
    }
    // 0x1503D3CC: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x1503D3D0: jal         0x1503D438
    // 0x1503D3D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_1503D438(rdram, ctx);
        goto after_0;
    // 0x1503D3D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x1503D3D8: b           L_1503D3FC
    // 0x1503D3DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_1503D3FC;
    // 0x1503D3DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1503D3E0: lbu         $t7, 0x3($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3);
L_1503D3E4:
    // 0x1503D3E4: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x1503D3E8: bnel        $s6, $t7, L_1503D3FC
    if (ctx->r22 != ctx->r15) {
        // 0x1503D3EC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1503D3FC;
    }
    goto skip_2;
    // 0x1503D3EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x1503D3F0: jal         0x1503D438
    // 0x1503D3F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_1503D438(rdram, ctx);
        goto after_1;
    // 0x1503D3F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
L_1503D3F8:
    // 0x1503D3F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1503D3FC:
    // 0x1503D3FC: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x1503D400: addu        $v0, $t8, $s2
    ctx->r2 = ADD32(ctx->r24, ctx->r18);
    // 0x1503D404: lb          $v1, 0x0($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X0);
    // 0x1503D408: bne         $s3, $v1, L_1503D3C0
    // Safety net: this loop scans forward looking for a 0xDF (-0x21) terminator
    // byte in whatever buffer $a0 points to. On real hardware/reference
    // emulation that byte is always present, but if the pointer this was
    // called with ends up referencing data our port produced incorrectly
    // (e.g. a text/asset buffer missing its terminator), this becomes an
    // unbounded scan through RDRAM that hangs the thread forever with no
    // crash and no error -- observed to freeze the entire graphics task
    // pipeline after the intro sequence. Cap the scan distance instead of
    // looping indefinitely; a real string is never anywhere close to this long.
    if ((ctx->r19 != ctx->r3) && (ctx->r16 < 65536)) {
        // 0x1503D40C: nop

            goto L_1503D3C0;
    }
    if (ctx->r19 != ctx->r3) {
        static bool warnedAboutRunawayScan = false;
        if (!warnedAboutRunawayScan) {
            fprintf(stderr, "[Conker Warning] func_1503D368: 0xDF terminator not found within 65536 entries, aborting scan to avoid hanging.\n");
            fflush(stderr);
            warnedAboutRunawayScan = true;
        }
    }
    // 0x1503D40C: nop

L_1503D410:
    // 0x1503D410: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1503D414:
    // 0x1503D414: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1503D418: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1503D41C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1503D420: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1503D424: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1503D428: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1503D42C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1503D430: jr          $ra
    // 0x1503D434: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x1503D434: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_1508114C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508114C: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x15081150: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x15081154: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15081158: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x1508115C: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x15081160: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x15081164: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x15081168: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x1508116C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x15081170: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x15081174: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x15081178: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x1508117C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x15081180: sw          $a1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r5;
    // 0x15081184: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x15081188: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    // 0x1508118C: lw          $t6, 0x1D4($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X1D4);
    // 0x15081190: bne         $t6, $zero, L_150811A0
    if (ctx->r14 != 0) {
        // 0x15081194: nop
    
            goto L_150811A0;
    }
    // 0x15081194: nop

    // 0x15081198: b           L_15081540
    // 0x1508119C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_15081540;
    // 0x1508119C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_150811A0:
    // 0x150811A0: jal         0x1508108C
    // 0x150811A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_1508108C(rdram, ctx);
        goto after_0;
    // 0x150811A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x150811A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150811AC: bne         $v0, $at, L_150811BC
    if (ctx->r2 != ctx->r1) {
        // 0x150811B0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_150811BC;
    }
    // 0x150811B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150811B4: b           L_15081540
    // 0x150811B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_15081540;
    // 0x150811B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_150811BC:
    // 0x150811BC: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x150811C0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x150811C4: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x150811C8: lbu         $v0, -0x42CE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X42CE);
    // 0x150811CC: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x150811D0: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x150811D4: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x150811D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x150811DC: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x150811E0: lw          $t9, 0x6C60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6C60);
    // 0x150811E4: lbu         $t1, -0x3434($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X3434);
    // 0x150811E8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x150811EC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150811F0: lw          $s7, 0xF8($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XF8);
    // 0x150811F4: sw          $t9, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r25;
    // 0x150811F8: sw          $t1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r9;
    // 0x150811FC: swc1        $f20, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->f20.u32l;
    // 0x15081200: lwc1        $f4, 0x14($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X14);
    // 0x15081204: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15081208: addiu       $t0, $t0, 0x1C90
    ctx->r8 = ADD32(ctx->r8, 0X1C90);
    // 0x1508120C: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x15081210: lbu         $t2, 0x4($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X4);
    // 0x15081214: lwc1        $f10, 0x150($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X150);
    // 0x15081218: lwc1        $f18, 0x18($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X18);
    // 0x1508121C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15081220: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x15081224: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x15081228: addiu       $s3, $sp, 0xB4
    ctx->r19 = ADD32(ctx->r29, 0XB4);
    // 0x1508122C: addiu       $s5, $sp, 0x9C
    ctx->r21 = ADD32(ctx->r29, 0X9C);
    // 0x15081230: lh          $t6, 0x10($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X10);
    // 0x15081234: addiu       $s6, $sp, 0x90
    ctx->r22 = ADD32(ctx->r29, 0X90);
    // 0x15081238: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1508123C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15081240: nop

    // 0x15081244: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15081248: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1508124C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15081250: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x15081254: lwc1        $f6, 0x1C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x15081258: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x1508125C: lbu         $t7, 0x4($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X4);
    // 0x15081260: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15081264: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x15081268: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x1508126C: lhu         $t2, 0xE($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0XE);
    // 0x15081270: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x15081274: bgez        $t2, L_15081288
    if (SIGNED(ctx->r10) >= 0) {
        // 0x15081278: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_15081288;
    }
    // 0x15081278: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1508127C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15081280: nop

    // 0x15081284: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_15081288:
    // 0x15081288: lwc1        $f18, 0x150($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X150);
    // 0x1508128C: addiu       $t3, $sp, 0xC8
    ctx->r11 = ADD32(ctx->r29, 0XC8);
    // 0x15081290: addiu       $t4, $sp, 0xC4
    ctx->r12 = ADD32(ctx->r29, 0XC4);
    // 0x15081294: mul.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15081298: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x1508129C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x150812A0: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x150812A4: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x150812A8: lw          $a0, 0xE4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE4);
    // 0x150812AC: lw          $a1, 0xE8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE8);
    // 0x150812B0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150812B4: jal         0x151452C4
    // 0x150812B8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_151452C4(rdram, ctx);
        goto after_1;
    // 0x150812B8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_1:
    // 0x150812BC: bne         $v0, $zero, L_150812CC
    if (ctx->r2 != 0) {
        // 0x150812C0: lw          $t5, 0xD4($sp)
        ctx->r13 = MEM_W(ctx->r29, 0XD4);
            goto L_150812CC;
    }
    // 0x150812C0: lw          $t5, 0xD4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD4);
    // 0x150812C4: b           L_15081540
    // 0x150812C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15081540;
    // 0x150812C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150812CC:
    // 0x150812CC: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x150812D0: blez        $t5, L_15081460
    if (SIGNED(ctx->r13) <= 0) {
        // 0x150812D4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_15081460;
    }
    // 0x150812D4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150812D8: lw          $s0, 0xD8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD8);
    // 0x150812DC: addiu       $fp, $sp, 0x84
    ctx->r30 = ADD32(ctx->r29, 0X84);
    // 0x150812E0: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
L_150812E4:
    // 0x150812E4: lw          $t9, 0x9C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X9C);
    // 0x150812E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150812EC: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x150812F0: and         $t1, $t8, $t9
    ctx->r9 = ctx->r24 & ctx->r25;
    // 0x150812F4: bnel        $t1, $zero, L_15081450
    if (ctx->r9 != 0) {
        // 0x150812F8: lw          $t3, 0xD4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XD4);
            goto L_15081450;
    }
    goto skip_0;
    // 0x150812F8: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    skip_0:
    // 0x150812FC: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x15081300: lw          $v0, 0x1D4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1D4);
    // 0x15081304: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x15081308: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x1508130C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15081310: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15081314: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x15081318: lh          $t3, 0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X6);
    // 0x1508131C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x15081320: nop

    // 0x15081324: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15081328: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x1508132C: lh          $t4, 0x8($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X8);
    // 0x15081330: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x15081334: nop

    // 0x15081338: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508133C: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x15081340: lbu         $t5, 0x0($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X0);
    // 0x15081344: sll         $t7, $t5, 6
    ctx->r15 = S32(ctx->r13 << 6);
    // 0x15081348: jal         0x15143134
    // 0x1508134C: addu        $a2, $v0, $t7
    ctx->r6 = ADD32(ctx->r2, ctx->r15);
    func_15143134(rdram, ctx);
        goto after_2;
    // 0x1508134C: addu        $a2, $v0, $t7
    ctx->r6 = ADD32(ctx->r2, ctx->r15);
    after_2:
    // 0x15081350: lhu         $t6, 0x2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2);
    // 0x15081354: lw          $a0, 0xE4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE4);
    // 0x15081358: lw          $a1, 0xE8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE8);
    // 0x1508135C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15081360: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x15081364: bgez        $t6, L_1508137C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x15081368: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1508137C;
    }
    // 0x15081368: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508136C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15081370: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15081374: nop

    // 0x15081378: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1508137C:
    // 0x1508137C: lwc1        $f16, 0x14C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X14C);
    // 0x15081380: addiu       $t8, $sp, 0xC8
    ctx->r24 = ADD32(ctx->r29, 0XC8);
    // 0x15081384: addiu       $t9, $sp, 0xC4
    ctx->r25 = ADD32(ctx->r29, 0XC4);
    // 0x15081388: mul.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x1508138C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15081390: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15081394: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x15081398: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x1508139C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150813A0: jal         0x151452C4
    // 0x150813A4: nop

    func_151452C4(rdram, ctx);
        goto after_3;
    // 0x150813A4: nop

    after_3:
    // 0x150813A8: beql        $v0, $zero, L_15081450
    if (ctx->r2 == 0) {
        // 0x150813AC: lw          $t3, 0xD4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XD4);
            goto L_15081450;
    }
    goto skip_1;
    // 0x150813AC: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    skip_1:
    // 0x150813B0: lwc1        $f0, 0x0($s7)
    ctx->f0.u32l = MEM_W(ctx->r23, 0X0);
    // 0x150813B4: lwc1        $f18, 0xC8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150813B8: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150813BC: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x150813C0: nop

    // 0x150813C4: bc1tl       L_150813F0
    if (c1cs) {
        // 0x150813C8: swc1        $f4, 0x0($s7)
        MEM_W(0X0, ctx->r23) = ctx->f4.u32l;
            goto L_150813F0;
    }
    goto skip_2;
    // 0x150813C8: swc1        $f4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->f4.u32l;
    skip_2:
    // 0x150813CC: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x150813D0: nop

    // 0x150813D4: bc1fl       L_15081450
    if (!c1cs) {
        // 0x150813D8: lw          $t3, 0xD4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XD4);
            goto L_15081450;
    }
    goto skip_3;
    // 0x150813D8: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    skip_3:
    // 0x150813DC: lbu         $t1, 0x1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1);
    // 0x150813E0: slt         $at, $t1, $s4
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x150813E4: bnel        $at, $zero, L_15081450
    if (ctx->r1 != 0) {
        // 0x150813E8: lw          $t3, 0xD4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XD4);
            goto L_15081450;
    }
    goto skip_4;
    // 0x150813E8: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
    skip_4:
    // 0x150813EC: swc1        $f4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->f4.u32l;
L_150813F0:
    // 0x150813F0: lw          $at, 0x0($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X0);
    // 0x150813F4: addiu       $t2, $sp, 0x78
    ctx->r10 = ADD32(ctx->r29, 0X78);
    // 0x150813F8: addiu       $t5, $sp, 0x6C
    ctx->r13 = ADD32(ctx->r29, 0X6C);
    // 0x150813FC: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x15081400: lw          $t4, 0x4($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X4);
    // 0x15081404: addiu       $t8, $sp, 0xA8
    ctx->r24 = ADD32(ctx->r29, 0XA8);
    // 0x15081408: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
    // 0x1508140C: lw          $at, 0x8($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X8);
    // 0x15081410: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x15081414: lw          $at, 0x0($s6)
    ctx->r1 = MEM_W(ctx->r22, 0X0);
    // 0x15081418: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x1508141C: lw          $t6, 0x4($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X4);
    // 0x15081420: sw          $t6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r14;
    // 0x15081424: lw          $at, 0x8($s6)
    ctx->r1 = MEM_W(ctx->r22, 0X8);
    // 0x15081428: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x1508142C: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x15081430: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x15081434: lw          $t1, 0x4($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X4);
    // 0x15081438: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x1508143C: lw          $at, 0x8($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X8);
    // 0x15081440: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x15081444: sw          $s1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r17;
    // 0x15081448: lbu         $s4, 0x1($s0)
    ctx->r20 = MEM_BU(ctx->r16, 0X1);
    // 0x1508144C: lw          $t3, 0xD4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD4);
L_15081450:
    // 0x15081450: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15081454: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x15081458: bnel        $s1, $t3, L_150812E4
    if (ctx->r17 != ctx->r11) {
        // 0x1508145C: lbu         $t6, 0x0($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X0);
            goto L_150812E4;
    }
    goto skip_5;
    // 0x1508145C: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    skip_5:
L_15081460:
    // 0x15081460: lwc1        $f8, 0x0($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X0);
    // 0x15081464: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x15081468: c.eq.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl == ctx->f8.fl;
    // 0x1508146C: nop

    // 0x15081470: bc1fl       L_15081484
    if (!c1cs) {
        // 0x15081474: lw          $v1, 0x108($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X108);
            goto L_15081484;
    }
    goto skip_6;
    // 0x15081474: lw          $v1, 0x108($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X108);
    skip_6:
    // 0x15081478: b           L_15081540
    // 0x1508147C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15081540;
    // 0x1508147C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15081480: lw          $v1, 0x108($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X108);
L_15081484:
    // 0x15081484: swc1        $f6, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->f6.u32l;
    // 0x15081488: lw          $t4, 0xFC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XFC);
    // 0x1508148C: lw          $t2, 0xCC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XCC);
    // 0x15081490: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x15081494: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    // 0x15081498: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x1508149C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x150814A0: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x150814A4: addu        $v0, $t7, $t5
    ctx->r2 = ADD32(ctx->r15, ctx->r13);
    // 0x150814A8: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x150814AC: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x150814B0: addiu       $t5, $sp, 0x78
    ctx->r13 = ADD32(ctx->r29, 0X78);
    // 0x150814B4: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x150814B8: lw          $t1, 0x100($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X100);
    // 0x150814BC: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x150814C0: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x150814C4: lh          $t3, 0x4($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X4);
    // 0x150814C8: addiu       $t1, $sp, 0x6C
    ctx->r9 = ADD32(ctx->r29, 0X6C);
    // 0x150814CC: sh          $t3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r11;
    // 0x150814D0: lh          $t4, 0x6($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X6);
    // 0x150814D4: sh          $t4, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r12;
    // 0x150814D8: lh          $t2, 0x8($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X8);
    // 0x150814DC: sh          $t2, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r10;
    // 0x150814E0: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x150814E4: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x150814E8: addiu       $t2, $sp, 0xA8
    ctx->r10 = ADD32(ctx->r29, 0XA8);
    // 0x150814EC: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150814F0: lw          $t9, 0x4($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X4);
    // 0x150814F4: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x150814F8: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x150814FC: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x15081500: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x15081504: lw          $t8, 0xF0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF0);
    // 0x15081508: lw          $v0, 0xF4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XF4);
    // 0x1508150C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x15081510: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x15081514: sw          $t4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r12;
    // 0x15081518: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x1508151C: beq         $v0, $zero, L_1508153C
    if (ctx->r2 == 0) {
        // 0x15081520: sw          $at, 0x8($t8)
        MEM_W(0X8, ctx->r24) = ctx->r1;
            goto L_1508153C;
    }
    // 0x15081520: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x15081524: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x15081528: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x1508152C: lw          $t7, 0x4($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X4);
    // 0x15081530: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x15081534: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x15081538: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
L_1508153C:
    // 0x1508153C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15081540:
    // 0x15081540: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x15081544: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x15081548: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x1508154C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x15081550: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x15081554: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x15081558: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x1508155C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x15081560: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x15081564: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x15081568: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x1508156C: jr          $ra
    // 0x15081570: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    return;
    // 0x15081570: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_150B8F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B8F44: addiu       $sp, $sp, -0x1A0
    ctx->r29 = ADD32(ctx->r29, -0X1A0);
    // 0x150B8F48: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x150B8F4C: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x150B8F50: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x150B8F54: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x150B8F58: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150B8F5C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x150B8F60: sw          $a2, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r6;
    // 0x150B8F64: lwc1        $f12, 0x48($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X48);
    // 0x150B8F68: lwc1        $f4, 0x140($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X140);
    // 0x150B8F6C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150B8F70: abs.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = fabsf(ctx->f12.fl);
    // 0x150B8F74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B8F78: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x150B8F7C: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x150B8F80: nop

    // 0x150B8F84: bc1fl       L_150B9480
    if (!c1cs) {
        // 0x150B8F88: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_150B9480;
    }
    goto skip_0;
    // 0x150B8F88: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
    // 0x150B8F8C: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150B8F90: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150B8F94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150B8F98: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150B8F9C: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150B8FA0: swc1        $f14, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f14.u32l;
    // 0x150B8FA4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150B8FA8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x150B8FAC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150B8FB0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150B8FB4: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x150B8FB8: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150B8FBC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150B8FC0: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x150B8FC4: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x150B8FC8: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x150B8FCC: jal         0x150A3058
    // 0x150B8FD0: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    func_150A3058(rdram, ctx);
        goto after_0;
    // 0x150B8FD0: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    after_0:
    // 0x150B8FD4: lwc1        $f12, 0x1A8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x150B8FD8: bne         $v0, $zero, L_150B9400
    if (ctx->r2 != 0) {
        // 0x150B8FDC: lwc1        $f14, 0x1AC($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X1AC);
            goto L_150B9400;
    }
    // 0x150B8FDC: lwc1        $f14, 0x1AC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x150B8FE0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150B8FE4: lwc1        $f0, 0x1B0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x150B8FE8: lwc1        $f4, 0x38($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X38);
    // 0x150B8FEC: lwc1        $f6, 0x3C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x150B8FF0: lwc1        $f8, 0x40($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X40);
    // 0x150B8FF4: sub.s       $f16, $f4, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x150B8FF8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x150B8FFC: addiu       $t5, $sp, 0x170
    ctx->r13 = ADD32(ctx->r29, 0X170);
    // 0x150B9000: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x150B9004: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x150B9008: addiu       $t6, $sp, 0x184
    ctx->r14 = ADD32(ctx->r29, 0X184);
    // 0x150B900C: sub.s       $f18, $f6, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x150B9010: swc1        $f10, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f10.u32l;
    // 0x150B9014: lwc1        $f4, 0x198($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X198);
    // 0x150B9018: addiu       $t7, $sp, 0x188
    ctx->r15 = ADD32(ctx->r29, 0X188);
    // 0x150B901C: addiu       $t8, $sp, 0x18C
    ctx->r24 = ADD32(ctx->r29, 0X18C);
    // 0x150B9020: addiu       $t9, $sp, 0x16C
    ctx->r25 = ADD32(ctx->r29, 0X16C);
    // 0x150B9024: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x150B9028: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x150B902C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x150B9030: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x150B9034: swc1        $f18, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f18.u32l;
    // 0x150B9038: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x150B903C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x150B9040: swc1        $f16, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f16.u32l;
    // 0x150B9044: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x150B9048: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150B904C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150B9050: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150B9054: jal         0x150AC9C0
    // 0x150B9058: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_150AC9C0(rdram, ctx);
        goto after_1;
    // 0x150B9058: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x150B905C: beq         $v0, $zero, L_150B9400
    if (ctx->r2 == 0) {
        // 0x150B9060: nop
    
            goto L_150B9400;
    }
    // 0x150B9060: nop

    // 0x150B9064: jal         0x15145C90
    // 0x150B9068: lw          $a0, 0x16C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X16C);
    func_15145C90(rdram, ctx);
        goto after_2;
    // 0x150B9068: lw          $a0, 0x16C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X16C);
    after_2:
    // 0x150B906C: beq         $v0, $zero, L_150B9240
    if (ctx->r2 == 0) {
        // 0x150B9070: addiu       $t0, $zero, 0x19
        ctx->r8 = ADD32(0, 0X19);
            goto L_150B9240;
    }
    // 0x150B9070: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
    // 0x150B9074: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x150B9078: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x150B907C: addiu       $t3, $zero, 0x3B02
    ctx->r11 = ADD32(0, 0X3B02);
    // 0x150B9080: sh          $t0, 0x168($sp)
    MEM_H(0X168, ctx->r29) = ctx->r8;
    // 0x150B9084: sh          $t1, 0x16A($sp)
    MEM_H(0X16A, ctx->r29) = ctx->r9;
    // 0x150B9088: sb          $t2, 0x114($sp)
    MEM_B(0X114, ctx->r29) = ctx->r10;
    // 0x150B908C: sb          $zero, 0x115($sp)
    MEM_B(0X115, ctx->r29) = 0;
    // 0x150B9090: jal         0x150ADA20
    // 0x150B9094: sh          $t3, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r11;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150B9094: sh          $t3, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r11;
    after_3:
    // 0x150B9098: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x150B909C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150B90A0: mfhi        $t4
    ctx->r12 = hi;
    // 0x150B90A4: addiu       $t5, $t4, 0x28
    ctx->r13 = ADD32(ctx->r12, 0X28);
    // 0x150B90A8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150B90AC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150B90B0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150B90B4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150B90B8: sh          $t5, 0x118($sp)
    MEM_H(0X118, ctx->r29) = ctx->r13;
    // 0x150B90BC: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x150B90C0: sw          $zero, 0x120($sp)
    MEM_W(0X120, ctx->r29) = 0;
    // 0x150B90C4: sb          $t6, 0x124($sp)
    MEM_B(0X124, ctx->r29) = ctx->r14;
    // 0x150B90C8: sb          $t7, 0x125($sp)
    MEM_B(0X125, ctx->r29) = ctx->r15;
    // 0x150B90CC: sb          $t8, 0x126($sp)
    MEM_B(0X126, ctx->r29) = ctx->r24;
    // 0x150B90D0: jal         0x150ADA68
    // 0x150B90D4: sb          $t9, 0x127($sp)
    MEM_B(0X127, ctx->r29) = ctx->r25;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150B90D4: sb          $t9, 0x127($sp)
    MEM_B(0X127, ctx->r29) = ctx->r25;
    after_4:
    // 0x150B90D8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150B90DC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150B90E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B90E4: lwc1        $f10, -0x244($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X244);
    // 0x150B90E8: mul.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x150B90EC: addiu       $t1, $sp, 0x184
    ctx->r9 = ADD32(ctx->r29, 0X184);
    // 0x150B90F0: addiu       $t0, $sp, 0x130
    ctx->r8 = ADD32(ctx->r29, 0X130);
    // 0x150B90F4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150B90F8: lui         $t5, 0xC5C
    ctx->r13 = S32(0XC5C << 16);
    // 0x150B90FC: ori         $t5, $t5, 0x1
    ctx->r13 = ctx->r13 | 0X1;
    // 0x150B9100: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150B9104: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x150B9108: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150B910C: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x150B9110: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150B9114: swc1        $f4, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f4.u32l;
    // 0x150B9118: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    // 0x150B911C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x150B9120: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x150B9124: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x150B9128: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x150B912C: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x150B9130: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x150B9134: sw          $t5, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r13;
    // 0x150B9138: sb          $t6, 0x158($sp)
    MEM_B(0X158, ctx->r29) = ctx->r14;
    // 0x150B913C: sb          $t7, 0x159($sp)
    MEM_B(0X159, ctx->r29) = ctx->r15;
    // 0x150B9140: sb          $zero, 0x15A($sp)
    MEM_B(0X15A, ctx->r29) = 0;
    // 0x150B9144: sb          $t8, 0x15B($sp)
    MEM_B(0X15B, ctx->r29) = ctx->r24;
    // 0x150B9148: swc1        $f2, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f2.u32l;
    // 0x150B914C: swc1        $f2, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f2.u32l;
    // 0x150B9150: swc1        $f2, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f2.u32l;
    // 0x150B9154: swc1        $f2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f2.u32l;
    // 0x150B9158: swc1        $f2, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f2.u32l;
    // 0x150B915C: jal         0x150ADA68
    // 0x150B9160: swc1        $f2, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150B9160: swc1        $f2, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x150B9164: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150B9168: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B916C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150B9170: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B9174: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150B9178: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B917C: lwc1        $f6, -0x240($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X240);
    // 0x150B9180: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150B9184: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150B9188: swc1        $f8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f8.u32l;
    // 0x150B918C: lw          $t9, 0x128($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X128);
    // 0x150B9190: jal         0x150ADA20
    // 0x150B9194: sw          $t9, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r25;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150B9194: sw          $t9, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r25;
    after_6:
    // 0x150B9198: jal         0x150ADA20
    // 0x150B919C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150B919C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_7:
    // 0x150B91A0: jal         0x150ADA20
    // 0x150B91A4: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150B91A4: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    after_8:
    // 0x150B91A8: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x150B91AC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150B91B0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B91B4: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x150B91B8: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x150B91BC: andi        $t2, $t3, 0x1
    ctx->r10 = ctx->r11 & 0X1;
    // 0x150B91C0: addu        $t4, $t2, $t1
    ctx->r12 = ADD32(ctx->r10, ctx->r9);
    // 0x150B91C4: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x150B91C8: addiu       $t6, $sp, 0x170
    ctx->r14 = ADD32(ctx->r29, 0X170);
    // 0x150B91CC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x150B91D0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150B91D4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150B91D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B91DC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150B91E0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x150B91E4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150B91E8: lw          $t7, 0x14C($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X14C);
    // 0x150B91EC: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x150B91F0: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150B91F4: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x150B91F8: lw          $t8, 0x168($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X168);
    // 0x150B91FC: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x150B9200: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150B9204: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x150B9208: lbu         $t3, 0xC($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0XC);
    // 0x150B920C: addiu       $a1, $a1, 0x4AA0
    ctx->r5 = ADD32(ctx->r5, 0X4AA0);
    // 0x150B9210: addiu       $a0, $sp, 0x114
    ctx->r4 = ADD32(ctx->r29, 0X114);
    // 0x150B9214: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x150B9218: lbu         $t0, 0x1($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X1);
    // 0x150B921C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x150B9220: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150B9224: jal         0x1513D594
    // 0x150B9228: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    func_1513D594(rdram, ctx);
        goto after_9;
    // 0x150B9228: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    after_9:
    // 0x150B922C: beq         $v0, $zero, L_150B9240
    if (ctx->r2 == 0) {
        // 0x150B9230: addiu       $a0, $v0, 0x128
        ctx->r4 = ADD32(ctx->r2, 0X128);
            goto L_150B9240;
    }
    // 0x150B9230: addiu       $a0, $v0, 0x128
    ctx->r4 = ADD32(ctx->r2, 0X128);
    // 0x150B9234: addiu       $a1, $sp, 0x10C
    ctx->r5 = ADD32(ctx->r29, 0X10C);
    // 0x150B9238: jal         0x10022EC0
    // 0x150B923C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x150B923C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
L_150B9240:
    // 0x150B9240: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150B9244: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B9248: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x150B924C: lwc1        $f10, 0x190($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X190);
    // 0x150B9250: lwc1        $f6, 0x194($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X194);
    // 0x150B9254: addiu       $t1, $sp, 0x170
    ctx->r9 = ADD32(ctx->r29, 0X170);
    // 0x150B9258: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x150B925C: lwc1        $f10, 0x198($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X198);
    // 0x150B9260: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x150B9264: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x150B9268: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x150B926C: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x150B9270: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x150B9274: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x150B9278: addiu       $t2, $sp, 0x80
    ctx->r10 = ADD32(ctx->r29, 0X80);
    // 0x150B927C: addiu       $t7, $sp, 0x184
    ctx->r15 = ADD32(ctx->r29, 0X184);
    // 0x150B9280: swl         $at, 0x0($t2)
    do_swl(rdram, 0X0, ctx->r10, ctx->r1);
    // 0x150B9284: swr         $at, 0x3($t2)
    do_swr(rdram, 0X3, ctx->r10, ctx->r1);
    // 0x150B9288: lw          $t6, 0x4($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X4);
    // 0x150B928C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x150B9290: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x150B9294: swl         $t6, 0x4($t2)
    do_swl(rdram, 0X4, ctx->r10, ctx->r14);
    // 0x150B9298: swr         $t6, 0x7($t2)
    do_swr(rdram, 0X7, ctx->r10, ctx->r14);
    // 0x150B929C: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x150B92A0: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x150B92A4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150B92A8: swl         $at, 0x8($t2)
    do_swl(rdram, 0X8, ctx->r10, ctx->r1);
    // 0x150B92AC: swr         $at, 0xB($t2)
    do_swr(rdram, 0XB, ctx->r10, ctx->r1);
    // 0x150B92B0: lw          $t6, 0xC($t1)
    ctx->r14 = MEM_W(ctx->r9, 0XC);
    // 0x150B92B4: addiu       $t8, $zero, 0x21
    ctx->r24 = ADD32(0, 0X21);
    // 0x150B92B8: swl         $t6, 0xC($t2)
    do_swl(rdram, 0XC, ctx->r10, ctx->r14);
    // 0x150B92BC: swr         $t6, 0xF($t2)
    do_swr(rdram, 0XF, ctx->r10, ctx->r14);
    // 0x150B92C0: lhu         $at, 0x10($t1)
    ctx->r1 = MEM_HU(ctx->r9, 0X10);
    // 0x150B92C4: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x150B92C8: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x150B92CC: sh          $at, 0x10($t2)
    MEM_H(0X10, ctx->r10) = ctx->r1;
    // 0x150B92D0: lui         $at, 0x43FB
    ctx->r1 = S32(0X43FB << 16);
    // 0x150B92D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B92D8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150B92DC: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x150B92E0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150B92E4: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x150B92E8: lw          $t3, 0x4($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X4);
    // 0x150B92EC: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x150B92F0: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x150B92F4: addiu       $t7, $zero, 0x48
    ctx->r15 = ADD32(0, 0X48);
    // 0x150B92F8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150B92FC: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x150B9300: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B9304: lwc1        $f8, -0x23C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X23C);
    // 0x150B9308: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B930C: lwc1        $f10, -0x238($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X238);
    // 0x150B9310: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B9314: lwc1        $f4, -0x234($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X234);
    // 0x150B9318: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B931C: lwc1        $f6, -0x230($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X230);
    // 0x150B9320: sh          $t0, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r8;
    // 0x150B9324: sh          $t5, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r13;
    // 0x150B9328: addiu       $t0, $zero, 0x9B
    ctx->r8 = ADD32(0, 0X9B);
    // 0x150B932C: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x150B9330: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x150B9334: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x150B9338: sh          $t4, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r12;
    // 0x150B933C: sh          $t2, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r10;
    // 0x150B9340: sh          $t1, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r9;
    // 0x150B9344: sh          $t6, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r14;
    // 0x150B9348: sb          $t9, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r25;
    // 0x150B934C: sb          $t8, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r24;
    // 0x150B9350: sb          $t7, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r15;
    // 0x150B9354: sw          $t3, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r11;
    // 0x150B9358: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x150B935C: sw          $zero, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = 0;
    // 0x150B9360: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    // 0x150B9364: sw          $zero, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = 0;
    // 0x150B9368: sw          $zero, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = 0;
    // 0x150B936C: sb          $zero, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = 0;
    // 0x150B9370: sb          $t0, 0xD9($sp)
    MEM_B(0XD9, ctx->r29) = ctx->r8;
    // 0x150B9374: sb          $t5, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = ctx->r13;
    // 0x150B9378: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x150B937C: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    // 0x150B9380: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x150B9384: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
    // 0x150B9388: lw          $t4, 0x14C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X14C);
    // 0x150B938C: lui         $t1, 0x22
    ctx->r9 = S32(0X22 << 16);
    // 0x150B9390: lui         $t6, 0x1D
    ctx->r14 = S32(0X1D << 16);
    // 0x150B9394: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
    // 0x150B9398: lw          $t2, 0x168($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X168);
    // 0x150B939C: ori         $t1, $t1, 0x5
    ctx->r9 = ctx->r9 | 0X5;
    // 0x150B93A0: ori         $t6, $t6, 0x600
    ctx->r14 = ctx->r14 | 0X600;
    // 0x150B93A4: addiu       $t8, $zero, 0x3B
    ctx->r24 = ADD32(0, 0X3B);
    // 0x150B93A8: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x150B93AC: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x150B93B0: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x150B93B4: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x150B93B8: addiu       $t4, $zero, 0x19
    ctx->r12 = ADD32(0, 0X19);
    // 0x150B93BC: sw          $zero, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = 0;
    // 0x150B93C0: sw          $t1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r9;
    // 0x150B93C4: sw          $t6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r14;
    // 0x150B93C8: sw          $t9, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r25;
    // 0x150B93CC: sw          $t8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r24;
    // 0x150B93D0: sw          $t7, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r15;
    // 0x150B93D4: sw          $t3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r11;
    // 0x150B93D8: sb          $zero, 0x100($sp)
    MEM_B(0X100, ctx->r29) = 0;
    // 0x150B93DC: sb          $t0, 0x101($sp)
    MEM_B(0X101, ctx->r29) = ctx->r8;
    // 0x150B93E0: sh          $t5, 0x104($sp)
    MEM_H(0X104, ctx->r29) = ctx->r13;
    // 0x150B93E4: sh          $t4, 0x106($sp)
    MEM_H(0X106, ctx->r29) = ctx->r12;
    // 0x150B93E8: sw          $t2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r10;
    // 0x150B93EC: lw          $t2, 0x128($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X128);
    // 0x150B93F0: sw          $t2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r10;
    // 0x150B93F4: lbu         $a2, 0x1($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X1);
    // 0x150B93F8: jal         0x15151670
    // 0x150B93FC: lbu         $a1, 0xC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XC);
    func_15151670(rdram, ctx);
        goto after_11;
    // 0x150B93FC: lbu         $a1, 0xC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XC);
    after_11:
L_150B9400:
    // 0x150B9400: jal         0x150ADA20
    // 0x150B9404: nop

    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x150B9404: nop

    after_12:
    // 0x150B9408: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B940C: lwc1        $f8, 0x38($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X38);
    // 0x150B9410: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x150B9414: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x150B9418: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150B941C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x150B9420: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x150B9424: addiu       $t4, $zero, 0x3E8
    ctx->r12 = ADD32(0, 0X3E8);
    // 0x150B9428: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x150B942C: addiu       $t2, $zero, 0xFA0
    ctx->r10 = ADD32(0, 0XFA0);
    // 0x150B9430: lw          $a0, -0x78CC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X78CC);
    // 0x150B9434: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150B9438: lwc1        $f4, 0x3C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x150B943C: addiu       $a1, $zero, 0x7D00
    ctx->r5 = ADD32(0, 0X7D00);
    // 0x150B9440: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B9444: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150B9448: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150B944C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x150B9450: nop

    // 0x150B9454: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x150B9458: lwc1        $f8, 0x40($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X40);
    // 0x150B945C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x150B9460: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x150B9464: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150B9468: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x150B946C: jal         0x10010F88
    // 0x150B9470: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    func_10010F88(rdram, ctx);
        goto after_13;
    // 0x150B9470: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    after_13:
    // 0x150B9474: b           L_150B954C
    // 0x150B9478: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150B954C;
    // 0x150B9478: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150B947C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_150B9480:
    // 0x150B9480: nop

    // 0x150B9484: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x150B9488: swc1        $f2, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f2.u32l;
    // 0x150B948C: swc1        $f2, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f2.u32l;
    // 0x150B9490: bc1fl       L_150B94A8
    if (!c1cs) {
        // 0x150B9494: lwc1        $f8, 0x14($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
            goto L_150B94A8;
    }
    goto skip_1;
    // 0x150B9494: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    skip_1:
    // 0x150B9498: lwc1        $f4, 0x14($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X14);
    // 0x150B949C: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x150B94A0: swc1        $f6, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->f6.u32l;
    // 0x150B94A4: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
L_150B94A8:
    // 0x150B94A8: lwc1        $f0, 0x14($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14);
    // 0x150B94AC: lwc1        $f6, 0x50($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X50);
    // 0x150B94B0: swc1        $f8, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f8.u32l;
    // 0x150B94B4: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150B94B8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150B94BC: lwc1        $f6, 0x58($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X58);
    // 0x150B94C0: swc1        $f10, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f10.u32l;
    // 0x150B94C4: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150B94C8: lwc1        $f10, 0x54($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X54);
    // 0x150B94CC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x150B94D0: swc1        $f4, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f4.u32l;
    // 0x150B94D4: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150B94D8: swc1        $f8, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f8.u32l;
    // 0x150B94DC: addiu       $t0, $zero, 0x3E8
    ctx->r8 = ADD32(0, 0X3E8);
    // 0x150B94E0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150B94E4: addiu       $t5, $zero, 0xFA0
    ctx->r13 = ADD32(0, 0XFA0);
    // 0x150B94E8: ori         $a1, $zero, 0xFA00
    ctx->r5 = 0 | 0XFA00;
    // 0x150B94EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B94F0: swc1        $f4, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->f4.u32l;
    // 0x150B94F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150B94F8: swc1        $f8, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->f8.u32l;
    // 0x150B94FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B9500: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150B9504: lw          $a0, -0x78C4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X78C4);
    // 0x150B9508: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150B950C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x150B9510: nop

    // 0x150B9514: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150B9518: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150B951C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150B9520: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x150B9524: nop

    // 0x150B9528: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150B952C: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150B9530: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x150B9534: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x150B9538: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150B953C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x150B9540: jal         0x10010F88
    // 0x150B9544: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    func_10010F88(rdram, ctx);
        goto after_14;
    // 0x150B9544: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_14:
    // 0x150B9548: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150B954C:
    // 0x150B954C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x150B9550: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x150B9554: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x150B9558: jr          $ra
    // 0x150B955C: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
    return;
    return;
    // 0x150B955C: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
;}
RECOMP_FUNC void func_15081C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15081C20: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x15081C24: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x15081C28: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15081C2C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x15081C30: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15081C34: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x15081C38: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x15081C3C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x15081C40: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15081C44: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x15081C48: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15081C4C: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x15081C50: lh          $t6, 0xD6($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XD6);
    // 0x15081C54: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15081C58: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x15081C5C: nop

    // 0x15081C60: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15081C64: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15081C68: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x15081C6C: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15081C70: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x15081C74: lwc1        $f4, 0xE0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x15081C78: lwc1        $f0, 0xDC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x15081C7C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x15081C80: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x15081C84: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x15081C88: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15081C8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15081C90: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x15081C94: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x15081C98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15081C9C: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15081CA0: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x15081CA4: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x15081CA8: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x15081CAC: lwc1        $f18, 0x0($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X0);
    // 0x15081CB0: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x15081CB4: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x15081CB8: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15081CBC: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x15081CC0: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x15081CC4: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x15081CC8: jal         0x15145128
    // 0x15081CCC: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    func_15145128(rdram, ctx);
        goto after_0;
    // 0x15081CCC: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x15081CD0: bne         $v0, $zero, L_15081CE0
    if (ctx->r2 != 0) {
        // 0x15081CD4: lwc1        $f0, 0x4C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_15081CE0;
    }
    // 0x15081CD4: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15081CD8: b           L_15081DF4
    // 0x15081CDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15081DF4;
    // 0x15081CDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15081CE0:
    // 0x15081CE0: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x15081CE4: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x15081CE8: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15081CEC: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15081CF0: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x15081CF4: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x15081CF8: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x15081CFC: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x15081D00: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x15081D04: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x15081D08: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x15081D0C: lh          $t8, 0xD2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XD2);
    // 0x15081D10: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x15081D14: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x15081D18: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x15081D1C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x15081D20: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x15081D24: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15081D28: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15081D2C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x15081D30: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x15081D34: jal         0x151452C4
    // 0x15081D38: nop

    func_151452C4(rdram, ctx);
        goto after_1;
    // 0x15081D38: nop

    after_1:
    // 0x15081D3C: bne         $v0, $zero, L_15081D4C
    if (ctx->r2 != 0) {
        // 0x15081D40: lw          $v1, 0x90($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X90);
            goto L_15081D4C;
    }
    // 0x15081D40: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x15081D44: b           L_15081DF4
    // 0x15081D48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15081DF4;
    // 0x15081D48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15081D4C:
    // 0x15081D4C: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15081D50: lwc1        $f6, 0x4($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X4);
    // 0x15081D54: addiu       $s0, $sp, 0x3C
    ctx->r16 = ADD32(ctx->r29, 0X3C);
    // 0x15081D58: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15081D5C: swc1        $f10, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f10.u32l;
    // 0x15081D60: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15081D64: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15081D68: swc1        $f18, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f18.u32l;
    // 0x15081D6C: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
    // 0x15081D70: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x15081D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15081D78: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15081D7C: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x15081D80: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x15081D84: lwc1        $f10, 0x4($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X4);
    // 0x15081D88: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15081D8C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x15081D90: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x15081D94: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x15081D98: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15081D9C: jal         0x15143E64
    // 0x15081DA0: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    func_15143E64(rdram, ctx);
        goto after_2;
    // 0x15081DA0: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x15081DA4: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x15081DA8: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x15081DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15081DB0: swc1        $f0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f0.u32l;
    // 0x15081DB4: lwc1        $f16, 0x0($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X0);
    // 0x15081DB8: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15081DBC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15081DC0: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x15081DC4: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x15081DC8: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15081DCC: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15081DD0: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x15081DD4: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x15081DD8: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15081DDC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15081DE0: jal         0x15143E64
    // 0x15081DE4: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    func_15143E64(rdram, ctx);
        goto after_3;
    // 0x15081DE4: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x15081DE8: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x15081DEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15081DF0: swc1        $f0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f0.u32l;
L_15081DF4:
    // 0x15081DF4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15081DF8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15081DFC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x15081E00: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x15081E04: jr          $ra
    // 0x15081E08: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x15081E08: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_1506F004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506F004: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506F008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506F00C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506F010: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506F014: jal         0x150BCBBC
    // 0x1506F018: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_150BCBBC(rdram, ctx);
        goto after_0;
    // 0x1506F018: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x1506F01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506F020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506F024: jr          $ra
    // 0x1506F028: nop

    return;
    return;
    // 0x1506F028: nop

;}
RECOMP_FUNC void func_1510E388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510E388: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1510E38C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x1510E390: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x1510E394: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1510E398: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1510E39C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x1510E3A0: sdc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X10, ctx->r29);
    // 0x1510E3A4: sdc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X8, ctx->r29);
    // 0x1510E3A8: sdc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X0, ctx->r29);
    // 0x1510E3AC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1510E3B0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x1510E3B4: bne         $s1, $zero, L_1510E3DC
    if (ctx->r17 != 0) {
        // 0x1510E3B8: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_1510E3DC;
    }
    // 0x1510E3B8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1510E3BC: bne         $s0, $zero, L_1510E3DC
    if (ctx->r16 != 0) {
        // 0x1510E3C0: lw          $t6, 0x34($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X34);
            goto L_1510E3DC;
    }
    // 0x1510E3C0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1510E3C4: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x1510E3C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1510E3CC: swc1        $f24, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f24.u32l;
    // 0x1510E3D0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x1510E3D4: b           L_1510E614
    // 0x1510E3D8: swc1        $f24, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f24.u32l;
        goto L_1510E614;
    // 0x1510E3D8: swc1        $f24, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f24.u32l;
L_1510E3DC:
    // 0x1510E3DC: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x1510E3E0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1510E3E4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x1510E3E8: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
L_1510E3EC:
    // 0x1510E3EC: bne         $at, $zero, L_1510E3FC
    if (ctx->r1 != 0) {
        // 0x1510E3F0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_1510E3FC;
    }
    // 0x1510E3F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1510E3F4: b           L_1510E400
    // 0x1510E3F8: addiu       $a0, $t0, -0x3
    ctx->r4 = ADD32(ctx->r8, -0X3);
        goto L_1510E400;
    // 0x1510E3F8: addiu       $a0, $t0, -0x3
    ctx->r4 = ADD32(ctx->r8, -0X3);
L_1510E3FC:
    // 0x1510E3FC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
L_1510E400:
    // 0x1510E400: beq         $a0, $a3, L_1510E410
    if (ctx->r4 == ctx->r7) {
        // 0x1510E404: slti        $at, $t0, 0x3
        ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
            goto L_1510E410;
    }
    // 0x1510E404: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x1510E408: b           L_1510E414
    // 0x1510E40C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
        goto L_1510E414;
    // 0x1510E40C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_1510E410:
    // 0x1510E410: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1510E414:
    // 0x1510E414: beq         $v0, $a3, L_1510E424
    if (ctx->r2 == ctx->r7) {
        // 0x1510E418: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_1510E424;
    }
    // 0x1510E418: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1510E41C: b           L_1510E428
    // 0x1510E420: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
        goto L_1510E428;
    // 0x1510E420: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
L_1510E424:
    // 0x1510E424: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1510E428:
    // 0x1510E428: beq         $s0, $zero, L_1510E4C4
    if (ctx->r16 == 0) {
        // 0x1510E42C: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_1510E4C4;
    }
    // 0x1510E42C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x1510E430: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1510E434: mflo        $t8
    ctx->r24 = lo;
    // 0x1510E438: addu        $t1, $s0, $t8
    ctx->r9 = ADD32(ctx->r16, ctx->r24);
    // 0x1510E43C: lh          $t6, 0x0($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X0);
    // 0x1510E440: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1510E444: lh          $t8, 0x2($t1)
    ctx->r24 = MEM_H(ctx->r9, 0X2);
    // 0x1510E448: mflo        $t9
    ctx->r25 = lo;
    // 0x1510E44C: addu        $t2, $s0, $t9
    ctx->r10 = ADD32(ctx->r16, ctx->r25);
    // 0x1510E450: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x1510E454: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1510E458: lh          $t4, 0x2($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X2);
    // 0x1510E45C: subu        $t7, $t6, $t3
    ctx->r15 = SUB32(ctx->r14, ctx->r11);
    // 0x1510E460: lh          $t6, 0x4($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X4);
    // 0x1510E464: subu        $t9, $t8, $t4
    ctx->r25 = SUB32(ctx->r24, ctx->r12);
    // 0x1510E468: lh          $t5, 0x4($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X4);
    // 0x1510E46C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1510E470: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1510E474: subu        $t7, $t6, $t5
    ctx->r15 = SUB32(ctx->r14, ctx->r13);
    // 0x1510E478: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1510E47C: mflo        $t8
    ctx->r24 = lo;
    // 0x1510E480: addu        $s2, $s0, $t8
    ctx->r18 = ADD32(ctx->r16, ctx->r24);
    // 0x1510E484: lh          $t9, 0x0($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X0);
    // 0x1510E488: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x1510E48C: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1510E490: subu        $t6, $t9, $t3
    ctx->r14 = SUB32(ctx->r25, ctx->r11);
    // 0x1510E494: lh          $t9, 0x4($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X4);
    // 0x1510E498: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x1510E49C: subu        $t8, $t7, $t4
    ctx->r24 = SUB32(ctx->r15, ctx->r12);
    // 0x1510E4A0: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1510E4A4: subu        $t6, $t9, $t5
    ctx->r14 = SUB32(ctx->r25, ctx->r13);
    // 0x1510E4A8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1510E4AC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1510E4B0: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1510E4B4: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1510E4B8: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1510E4BC: b           L_1510E550
    // 0x1510E4C0: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
        goto L_1510E550;
    // 0x1510E4C0: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
L_1510E4C4:
    // 0x1510E4C4: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x1510E4C8: addu        $t6, $s1, $t9
    ctx->r14 = ADD32(ctx->r17, ctx->r25);
    // 0x1510E4CC: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x1510E4D0: lw          $t1, 0x0($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X0);
    // 0x1510E4D4: lw          $t2, 0x0($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X0);
    // 0x1510E4D8: lh          $t9, 0x2($t1)
    ctx->r25 = MEM_H(ctx->r9, 0X2);
    // 0x1510E4DC: lh          $t4, 0x2($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X2);
    // 0x1510E4E0: lh          $t7, 0x0($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X0);
    // 0x1510E4E4: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x1510E4E8: subu        $t6, $t9, $t4
    ctx->r14 = SUB32(ctx->r25, ctx->r12);
    // 0x1510E4EC: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x1510E4F0: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x1510E4F4: subu        $t8, $t7, $t3
    ctx->r24 = SUB32(ctx->r15, ctx->r11);
    // 0x1510E4F8: lh          $t7, 0x4($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X4);
    // 0x1510E4FC: lh          $t5, 0x4($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X4);
    // 0x1510E500: addu        $t6, $s1, $t9
    ctx->r14 = ADD32(ctx->r17, ctx->r25);
    // 0x1510E504: lw          $s2, 0x0($t6)
    ctx->r18 = MEM_W(ctx->r14, 0X0);
    // 0x1510E508: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1510E50C: subu        $t8, $t7, $t5
    ctx->r24 = SUB32(ctx->r15, ctx->r13);
    // 0x1510E510: lh          $t7, 0x0($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X0);
    // 0x1510E514: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1510E518: lh          $t9, 0x2($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X2);
    // 0x1510E51C: subu        $t8, $t7, $t3
    ctx->r24 = SUB32(ctx->r15, ctx->r11);
    // 0x1510E520: lh          $t7, 0x4($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X4);
    // 0x1510E524: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x1510E528: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1510E52C: subu        $t6, $t9, $t4
    ctx->r14 = SUB32(ctx->r25, ctx->r12);
    // 0x1510E530: subu        $t8, $t7, $t5
    ctx->r24 = SUB32(ctx->r15, ctx->r13);
    // 0x1510E534: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1510E538: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1510E53C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1510E540: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1510E544: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1510E548: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1510E54C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
L_1510E550:
    // 0x1510E550: bne         $at, $zero, L_1510E57C
    if (ctx->r1 != 0) {
        // 0x1510E554: nop
    
            goto L_1510E57C;
    }
    // 0x1510E554: nop

    // 0x1510E558: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x1510E55C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x1510E560: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x1510E564: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x1510E568: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x1510E56C: mov.s       $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    ctx->f16.fl = ctx->f20.fl;
    // 0x1510E570: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x1510E574: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    // 0x1510E578: mov.s       $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    ctx->f18.fl = ctx->f20.fl;
L_1510E57C:
    // 0x1510E57C: mul.s       $f22, $f0, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1510E580: nop

    // 0x1510E584: mul.s       $f20, $f14, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x1510E588: c.eq.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl == ctx->f20.fl;
    // 0x1510E58C: nop

    // 0x1510E590: bc1f        L_1510E59C
    if (!c1cs) {
        // 0x1510E594: nop
    
            goto L_1510E59C;
    }
    // 0x1510E594: nop

    // 0x1510E598: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_1510E59C:
    // 0x1510E59C: c.eq.s      $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f14.fl == ctx->f24.fl;
    // 0x1510E5A0: nop

    // 0x1510E5A4: bc1f        L_1510E5B0
    if (!c1cs) {
        // 0x1510E5A8: nop
    
            goto L_1510E5B0;
    }
    // 0x1510E5A8: nop

    // 0x1510E5AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_1510E5B0:
    // 0x1510E5B0: bne         $t0, $a2, L_1510E5BC
    if (ctx->r8 != ctx->r6) {
        // 0x1510E5B4: nop
    
            goto L_1510E5BC;
    }
    // 0x1510E5B4: nop

    // 0x1510E5B8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
L_1510E5BC:
    // 0x1510E5BC: beql        $a1, $zero, L_1510E3EC
    if (ctx->r5 == 0) {
        // 0x1510E5C0: slti        $at, $t0, 0x3
        ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
            goto L_1510E3EC;
    }
    goto skip_0;
    // 0x1510E5C0: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    skip_0:
    // 0x1510E5C4: bne         $a1, $a3, L_1510E5E0
    if (ctx->r5 != ctx->r7) {
        // 0x1510E5C8: lw          $t9, 0x30($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X30);
            goto L_1510E5E0;
    }
    // 0x1510E5C8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x1510E5CC: swc1        $f24, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f24.u32l;
    // 0x1510E5D0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1510E5D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1510E5D8: b           L_1510E614
    // 0x1510E5DC: swc1        $f24, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f24.u32l;
        goto L_1510E614;
    // 0x1510E5DC: swc1        $f24, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f24.u32l;
L_1510E5E0:
    // 0x1510E5E0: mul.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1510E5E4: sub.s       $f10, $f20, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f20.fl - ctx->f22.fl;
    // 0x1510E5E8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1510E5EC: mul.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1510E5F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1510E5F4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1510E5F8: div.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1510E5FC: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x1510E600: swc1        $f12, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f12.u32l;
    // 0x1510E604: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1510E608: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x1510E60C: div.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f14.fl);
    // 0x1510E610: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
L_1510E614:
    // 0x1510E614: ldc1        $f20, 0x0($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X0);
    // 0x1510E618: ldc1        $f22, 0x8($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X8);
    // 0x1510E61C: ldc1        $f24, 0x10($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X10);
    // 0x1510E620: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x1510E624: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x1510E628: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x1510E62C: jr          $ra
    // 0x1510E630: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1510E630: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_150409B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150409B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150409B4: jr          $ra
    // 0x150409B8: nop

    return;
    return;
    // 0x150409B8: nop

;}
RECOMP_FUNC void func_150B6754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B6754: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150B6758: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150B675C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x150B6760: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x150B6764: jal         0x150ADA20
    // 0x150B6768: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150B6768: nop

    after_0:
    // 0x150B676C: jal         0x150ADA20
    // 0x150B6770: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150B6770: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_1:
    // 0x150B6774: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x150B6778: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x150B677C: lbu         $t0, 0x33($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X33);
    // 0x150B6780: divu        $zero, $a3, $at
    lo = S32(U32(ctx->r7) / U32(ctx->r1)); hi = S32(U32(ctx->r7) % U32(ctx->r1));
    // 0x150B6784: mfhi        $t6
    ctx->r14 = hi;
    // 0x150B6788: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x150B678C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x150B6790: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150B6794: mfhi        $t8
    ctx->r24 = hi;
    // 0x150B6798: addiu       $a3, $t6, 0xC8
    ctx->r7 = ADD32(ctx->r14, 0XC8);
    // 0x150B679C: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x150B67A0: addiu       $t9, $t8, 0xF
    ctx->r25 = ADD32(ctx->r24, 0XF);
    // 0x150B67A4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150B67A8: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x150B67AC: addiu       $a0, $zero, 0xCC
    ctx->r4 = ADD32(0, 0XCC);
    // 0x150B67B0: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    // 0x150B67B4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150B67B8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150B67BC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150B67C0: jal         0x15182670
    // 0x150B67C4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_15182670(rdram, ctx);
        goto after_2;
    // 0x150B67C4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_2:
    // 0x150B67C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150B67CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150B67D0: jr          $ra
    // 0x150B67D4: nop

    return;
    return;
    // 0x150B67D4: nop

;}
RECOMP_FUNC void func_15009E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009E84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15009E88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15009E8C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15009E90: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15009E94: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15009E98: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x15009E9C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x15009EA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x15009EA4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x15009EA8: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x15009EAC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15009EB0: jal         0x15163604
    // 0x15009EB4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15163604(rdram, ctx);
        goto after_0;
    // 0x15009EB4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x15009EB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15009EBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15009EC0: jr          $ra
    // 0x15009EC4: nop

    return;
    return;
    // 0x15009EC4: nop

;}
RECOMP_FUNC void func_150D146C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D146C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D1470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D1474: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150D1478: jal         0x151149AC
    // 0x150D147C: addiu       $a0, $zero, 0xF9
    ctx->r4 = ADD32(0, 0XF9);
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x150D147C: addiu       $a0, $zero, 0xF9
    ctx->r4 = ADD32(0, 0XF9);
    after_0:
    // 0x150D1480: beq         $v0, $zero, L_150D148C
    if (ctx->r2 == 0) {
        // 0x150D1484: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_150D148C;
    }
    // 0x150D1484: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150D1488: sb          $t6, 0x6E($v0)
    MEM_B(0X6E, ctx->r2) = ctx->r14;
L_150D148C:
    // 0x150D148C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D1490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D1494: jr          $ra
    // 0x150D1498: nop

    return;
    return;
    // 0x150D1498: nop

;}
RECOMP_FUNC void func_151E24F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E24F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151E24F4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151E24F8: bne         $a1, $zero, L_151E2510
    if (ctx->r5 != 0) {
        // 0x151E24FC: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_151E2510;
    }
    // 0x151E24FC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151E2500: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151E2504: addiu       $a0, $a0, 0xBCE
    ctx->r4 = ADD32(ctx->r4, 0XBCE);
    // 0x151E2508: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x151E250C: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
L_151E2510:
    // 0x151E2510: lw          $t6, -0x22C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X22C);
    // 0x151E2514: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x151E2518: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x151E251C: lb          $t7, 0x42($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X42);
    // 0x151E2520: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151E2524: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x151E2528: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E252C: addiu       $a0, $a0, 0xBCE
    ctx->r4 = ADD32(ctx->r4, 0XBCE);
    // 0x151E2530: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151E2534: mflo        $t8
    ctx->r24 = lo;
    // 0x151E2538: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151E253C: lb          $t9, -0x496C($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X496C);
    // 0x151E2540: bnel        $t9, $at, L_151E282C
    if (ctx->r25 != ctx->r1) {
        // 0x151E2544: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_151E282C;
    }
    goto skip_0;
    // 0x151E2544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x151E2548: lb          $t6, 0xBEE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0XBEE);
    // 0x151E254C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E2550: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151E2554: beq         $t6, $zero, L_151E2828
    if (ctx->r14 == 0) {
        // 0x151E2558: addiu       $t0, $sp, 0x2C
        ctx->r8 = ADD32(ctx->r29, 0X2C);
            goto L_151E2828;
    }
    // 0x151E2558: addiu       $t0, $sp, 0x2C
    ctx->r8 = ADD32(ctx->r29, 0X2C);
    // 0x151E255C: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
L_151E2560:
    // 0x151E2560: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x151E2564: sltu        $at, $t0, $a3
    ctx->r1 = ctx->r8 < ctx->r7 ? 1 : 0;
    // 0x151E2568: bne         $at, $zero, L_151E2560
    if (ctx->r1 != 0) {
        // 0x151E256C: sb          $zero, -0x1($t0)
        MEM_B(-0X1, ctx->r8) = 0;
            goto L_151E2560;
    }
    // 0x151E256C: sb          $zero, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = 0;
    // 0x151E2570: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x151E2574: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151E2578: addiu       $t3, $t3, -0x1B8
    ctx->r11 = ADD32(ctx->r11, -0X1B8);
    // 0x151E257C: addiu       $t0, $t0, -0x1BC
    ctx->r8 = ADD32(ctx->r8, -0X1BC);
    // 0x151E2580: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151E2584: addiu       $t1, $sp, 0x2C
    ctx->r9 = ADD32(ctx->r29, 0X2C);
    // 0x151E2588: lb          $a3, 0x0($t0)
    ctx->r7 = MEM_B(ctx->r8, 0X0);
L_151E258C:
    // 0x151E258C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x151E2590: sltu        $at, $t0, $t3
    ctx->r1 = ctx->r8 < ctx->r11 ? 1 : 0;
    // 0x151E2594: bltz        $a3, L_151E25B8
    if (SIGNED(ctx->r7) < 0) {
        // 0x151E2598: addu        $t7, $t1, $a3
        ctx->r15 = ADD32(ctx->r9, ctx->r7);
            goto L_151E25B8;
    }
    // 0x151E2598: addu        $t7, $t1, $a3
    ctx->r15 = ADD32(ctx->r9, ctx->r7);
    // 0x151E259C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151E25A0: sllv        $t9, $t8, $a3
    ctx->r25 = S32(ctx->r24 << (ctx->r7 & 31));
    // 0x151E25A4: or          $a2, $a2, $t9
    ctx->r6 = ctx->r6 | ctx->r25;
    // 0x151E25A8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151E25AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x151E25B0: sb          $t2, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r10;
    // 0x151E25B4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
L_151E25B8:
    // 0x151E25B8: bnel        $at, $zero, L_151E258C
    if (ctx->r1 != 0) {
        // 0x151E25BC: lb          $a3, 0x0($t0)
        ctx->r7 = MEM_B(ctx->r8, 0X0);
            goto L_151E258C;
    }
    goto skip_1;
    // 0x151E25BC: lb          $a3, 0x0($t0)
    ctx->r7 = MEM_B(ctx->r8, 0X0);
    skip_1:
    // 0x151E25C0: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151E25C4: lbu         $t0, -0x18C0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X18C0);
    // 0x151E25C8: nor         $t7, $a2, $zero
    ctx->r15 = ~(ctx->r6 | 0);
    // 0x151E25CC: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x151E25D0: and         $a2, $t0, $t7
    ctx->r6 = ctx->r8 & ctx->r15;
    // 0x151E25D4: beq         $at, $zero, L_151E2828
    if (ctx->r1 == 0) {
        // 0x151E25D8: andi        $t8, $a2, 0xFF
        ctx->r24 = ctx->r6 & 0XFF;
            goto L_151E2828;
    }
    // 0x151E25D8: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x151E25DC: beq         $t8, $zero, L_151E2828
    if (ctx->r24 == 0) {
        // 0x151E25E0: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_151E2828;
    }
    // 0x151E25E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E25E4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
L_151E25E8:
    // 0x151E25E8: bne         $v1, $t2, L_151E2608
    if (ctx->r3 != ctx->r10) {
        // 0x151E25EC: sb          $t2, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r10;
            goto L_151E2608;
    }
    // 0x151E25EC: sb          $t2, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r10;
    // 0x151E25F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151E25F4: sllv        $t6, $t9, $a3
    ctx->r14 = S32(ctx->r25 << (ctx->r7 & 31));
    // 0x151E25F8: and         $t7, $t0, $t6
    ctx->r15 = ctx->r8 & ctx->r14;
    // 0x151E25FC: bnel        $t7, $zero, L_151E260C
    if (ctx->r15 != 0) {
        // 0x151E2600: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_151E260C;
    }
    goto skip_2;
    // 0x151E2600: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_2:
    // 0x151E2604: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
L_151E2608:
    // 0x151E2608: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_151E260C:
    // 0x151E260C: slti        $at, $a3, 0x4
    ctx->r1 = SIGNED(ctx->r7) < 0X4 ? 1 : 0;
    // 0x151E2610: bne         $at, $zero, L_151E25E8
    if (ctx->r1 != 0) {
        // 0x151E2614: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_151E25E8;
    }
    // 0x151E2614: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x151E2618: bne         $a1, $zero, L_151E27C4
    if (ctx->r5 != 0) {
        // 0x151E261C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_151E27C4;
    }
    // 0x151E261C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E2620: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x151E2624: slti        $at, $a1, 0x11
    ctx->r1 = SIGNED(ctx->r5) < 0X11 ? 1 : 0;
    // 0x151E2628: beq         $at, $zero, L_151E2724
    if (ctx->r1 == 0) {
        // 0x151E262C: addiu       $a2, $zero, 0x10
        ctx->r6 = ADD32(0, 0X10);
            goto L_151E2724;
    }
    // 0x151E262C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x151E2630: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x151E2634: subu        $t5, $t8, $a1
    ctx->r13 = SUB32(ctx->r24, ctx->r5);
    // 0x151E2638: andi        $t9, $t5, 0x3
    ctx->r25 = ctx->r13 & 0X3;
    // 0x151E263C: negu        $t5, $t9
    ctx->r13 = SUB32(0, ctx->r25);
    // 0x151E2640: beq         $t5, $zero, L_151E26A4
    if (ctx->r13 == 0) {
        // 0x151E2644: addiu       $t4, $t5, 0x10
        ctx->r12 = ADD32(ctx->r13, 0X10);
            goto L_151E26A4;
    }
    // 0x151E2644: addiu       $t4, $t5, 0x10
    ctx->r12 = ADD32(ctx->r13, 0X10);
    // 0x151E2648: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151E264C: addiu       $t6, $t6, -0x1BC
    ctx->r14 = ADD32(ctx->r14, -0X1BC);
    // 0x151E2650: subu        $t1, $a2, $v1
    ctx->r9 = SUB32(ctx->r6, ctx->r3);
    // 0x151E2654: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E2658: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151E265C: addiu       $t8, $t8, 0xC00
    ctx->r24 = ADD32(ctx->r24, 0XC00);
    // 0x151E2660: addiu       $t7, $t7, 0xC00
    ctx->r15 = ADD32(ctx->r15, 0XC00);
    // 0x151E2664: addu        $t2, $a2, $t7
    ctx->r10 = ADD32(ctx->r6, ctx->r15);
    // 0x151E2668: addu        $t3, $t1, $t8
    ctx->r11 = ADD32(ctx->r9, ctx->r24);
    // 0x151E266C: addu        $t0, $t1, $t6
    ctx->r8 = ADD32(ctx->r9, ctx->r14);
    // 0x151E2670: addu        $a3, $a2, $t6
    ctx->r7 = ADD32(ctx->r6, ctx->r14);
L_151E2674:
    // 0x151E2674: lb          $t9, 0x0($t0)
    ctx->r25 = MEM_B(ctx->r8, 0X0);
    // 0x151E2678: lb          $t6, 0x0($t3)
    ctx->r14 = MEM_B(ctx->r11, 0X0);
    // 0x151E267C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x151E2680: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x151E2684: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x151E2688: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x151E268C: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
    // 0x151E2690: sb          $t9, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r25;
    // 0x151E2694: bne         $t4, $a2, L_151E2674
    if (ctx->r12 != ctx->r6) {
        // 0x151E2698: sb          $t6, 0x1($t2)
        MEM_B(0X1, ctx->r10) = ctx->r14;
            goto L_151E2674;
    }
    // 0x151E2698: sb          $t6, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r14;
    // 0x151E269C: addiu       $t7, $a2, 0x1
    ctx->r15 = ADD32(ctx->r6, 0X1);
    // 0x151E26A0: beq         $t7, $a1, L_151E2724
    if (ctx->r15 == ctx->r5) {
        // 0x151E26A4: lui         $t9, 0x800E
        ctx->r25 = S32(0X800E << 16);
            goto L_151E2724;
    }
L_151E26A4:
    // 0x151E26A4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151E26A8: addiu       $t9, $t9, 0xC00
    ctx->r25 = ADD32(ctx->r25, 0XC00);
    // 0x151E26AC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151E26B0: addiu       $t8, $t8, -0x1BC
    ctx->r24 = ADD32(ctx->r24, -0X1BC);
    // 0x151E26B4: subu        $t1, $a2, $v1
    ctx->r9 = SUB32(ctx->r6, ctx->r3);
    // 0x151E26B8: addiu       $t4, $a1, -0x1
    ctx->r12 = ADD32(ctx->r5, -0X1);
    // 0x151E26BC: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x151E26C0: addu        $t0, $t1, $t8
    ctx->r8 = ADD32(ctx->r9, ctx->r24);
    // 0x151E26C4: addu        $t3, $t1, $t9
    ctx->r11 = ADD32(ctx->r9, ctx->r25);
    // 0x151E26C8: addu        $a3, $a2, $t8
    ctx->r7 = ADD32(ctx->r6, ctx->r24);
    // 0x151E26CC: addu        $t2, $a2, $t9
    ctx->r10 = ADD32(ctx->r6, ctx->r25);
L_151E26D0:
    // 0x151E26D0: lb          $t6, 0x0($t0)
    ctx->r14 = MEM_B(ctx->r8, 0X0);
    // 0x151E26D4: lb          $t7, 0x0($t3)
    ctx->r15 = MEM_B(ctx->r11, 0X0);
    // 0x151E26D8: addiu       $t2, $t2, -0x4
    ctx->r10 = ADD32(ctx->r10, -0X4);
    // 0x151E26DC: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
    // 0x151E26E0: sb          $t7, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r15;
    // 0x151E26E4: lb          $t9, -0x1($t3)
    ctx->r25 = MEM_B(ctx->r11, -0X1);
    // 0x151E26E8: lb          $t8, -0x1($t0)
    ctx->r24 = MEM_B(ctx->r8, -0X1);
    // 0x151E26EC: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
    // 0x151E26F0: sb          $t9, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r25;
    // 0x151E26F4: sb          $t8, 0x3($a3)
    MEM_B(0X3, ctx->r7) = ctx->r24;
    // 0x151E26F8: lb          $t6, -0x2($t0)
    ctx->r14 = MEM_B(ctx->r8, -0X2);
    // 0x151E26FC: lb          $t7, -0x2($t3)
    ctx->r15 = MEM_B(ctx->r11, -0X2);
    // 0x151E2700: addiu       $t0, $t0, -0x4
    ctx->r8 = ADD32(ctx->r8, -0X4);
    // 0x151E2704: sb          $t6, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r14;
    // 0x151E2708: sb          $t7, 0x2($t2)
    MEM_B(0X2, ctx->r10) = ctx->r15;
    // 0x151E270C: lb          $t9, -0x3($t3)
    ctx->r25 = MEM_B(ctx->r11, -0X3);
    // 0x151E2710: lb          $t8, 0x1($t0)
    ctx->r24 = MEM_B(ctx->r8, 0X1);
    // 0x151E2714: addiu       $t3, $t3, -0x4
    ctx->r11 = ADD32(ctx->r11, -0X4);
    // 0x151E2718: sb          $t9, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r25;
    // 0x151E271C: bne         $t2, $t5, L_151E26D0
    if (ctx->r10 != ctx->r13) {
        // 0x151E2720: sb          $t8, 0x1($a3)
        MEM_B(0X1, ctx->r7) = ctx->r24;
            goto L_151E26D0;
    }
    // 0x151E2720: sb          $t8, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r24;
L_151E2724:
    // 0x151E2724: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x151E2728: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x151E272C: beq         $at, $zero, L_151E2820
    if (ctx->r1 == 0) {
        // 0x151E2730: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_151E2820;
    }
    // 0x151E2730: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E2734: addiu       $t6, $sp, 0x2C
    ctx->r14 = ADD32(ctx->r29, 0X2C);
    // 0x151E2738: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x151E273C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x151E2740: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151E2744: addiu       $t3, $t3, -0x1BC
    ctx->r11 = ADD32(ctx->r11, -0X1BC);
    // 0x151E2748: addiu       $t4, $t4, 0xC00
    ctx->r12 = ADD32(ctx->r12, 0XC00);
    // 0x151E274C: addiu       $t5, $t5, 0x7270
    ctx->r13 = ADD32(ctx->r13, 0X7270);
    // 0x151E2750: addu        $t0, $zero, $t6
    ctx->r8 = ADD32(0, ctx->r14);
    // 0x151E2754: addiu       $t2, $sp, 0x28
    ctx->r10 = ADD32(ctx->r29, 0X28);
    // 0x151E2758: lb          $t7, 0x0($t0)
    ctx->r15 = MEM_B(ctx->r8, 0X0);
L_151E275C:
    // 0x151E275C: addu        $t8, $t2, $a3
    ctx->r24 = ADD32(ctx->r10, ctx->r7);
    // 0x151E2760: bnel        $t7, $zero, L_151E27A4
    if (ctx->r15 != 0) {
        // 0x151E2764: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_151E27A4;
    }
    goto skip_3;
    // 0x151E2764: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_3:
    // 0x151E2768: lb          $t9, 0x0($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X0);
    // 0x151E276C: subu        $t1, $a2, $v1
    ctx->r9 = SUB32(ctx->r6, ctx->r3);
    // 0x151E2770: addu        $t6, $t3, $a2
    ctx->r14 = ADD32(ctx->r11, ctx->r6);
    // 0x151E2774: beq         $t9, $zero, L_151E27A0
    if (ctx->r25 == 0) {
        // 0x151E2778: addu        $t7, $t4, $t1
        ctx->r15 = ADD32(ctx->r12, ctx->r9);
            goto L_151E27A0;
    }
    // 0x151E2778: addu        $t7, $t4, $t1
    ctx->r15 = ADD32(ctx->r12, ctx->r9);
    // 0x151E277C: sb          $a3, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r7;
    // 0x151E2780: lb          $t8, 0x0($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X0);
    // 0x151E2784: addu        $t9, $t4, $a2
    ctx->r25 = ADD32(ctx->r12, ctx->r6);
    // 0x151E2788: addu        $t6, $a0, $t1
    ctx->r14 = ADD32(ctx->r4, ctx->r9);
    // 0x151E278C: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x151E2790: sb          $a2, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r6;
    // 0x151E2794: addu        $t7, $t5, $a2
    ctx->r15 = ADD32(ctx->r13, ctx->r6);
    // 0x151E2798: sb          $v0, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r2;
    // 0x151E279C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_151E27A0:
    // 0x151E27A0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_151E27A4:
    // 0x151E27A4: slti        $at, $a3, 0x4
    ctx->r1 = SIGNED(ctx->r7) < 0X4 ? 1 : 0;
    // 0x151E27A8: beq         $at, $zero, L_151E2820
    if (ctx->r1 == 0) {
        // 0x151E27AC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_151E2820;
    }
    // 0x151E27AC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x151E27B0: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x151E27B4: bnel        $at, $zero, L_151E275C
    if (ctx->r1 != 0) {
        // 0x151E27B8: lb          $t7, 0x0($t0)
        ctx->r15 = MEM_B(ctx->r8, 0X0);
            goto L_151E275C;
    }
    goto skip_4;
    // 0x151E27B8: lb          $t7, 0x0($t0)
    ctx->r15 = MEM_B(ctx->r8, 0X0);
    skip_4:
    // 0x151E27BC: b           L_151E282C
    // 0x151E27C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_151E282C;
    // 0x151E27C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151E27C4:
    // 0x151E27C4: blez        $v1, L_151E2820
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151E27C8: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_151E2820;
    }
    // 0x151E27C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E27CC: addiu       $t8, $sp, 0x2C
    ctx->r24 = ADD32(ctx->r29, 0X2C);
    // 0x151E27D0: addu        $t0, $zero, $t8
    ctx->r8 = ADD32(0, ctx->r24);
    // 0x151E27D4: addiu       $t2, $sp, 0x28
    ctx->r10 = ADD32(ctx->r29, 0X28);
    // 0x151E27D8: lb          $t9, 0x0($t0)
    ctx->r25 = MEM_B(ctx->r8, 0X0);
L_151E27DC:
    // 0x151E27DC: addu        $t6, $t2, $a3
    ctx->r14 = ADD32(ctx->r10, ctx->r7);
    // 0x151E27E0: bnel        $t9, $zero, L_151E2808
    if (ctx->r25 != 0) {
        // 0x151E27E4: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_151E2808;
    }
    goto skip_5;
    // 0x151E27E4: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_5:
    // 0x151E27E8: lb          $t7, 0x0($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X0);
    // 0x151E27EC: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x151E27F0: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x151E27F4: beql        $t7, $zero, L_151E2808
    if (ctx->r15 == 0) {
        // 0x151E27F8: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_151E2808;
    }
    goto skip_6;
    // 0x151E27F8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_6:
    // 0x151E27FC: sw          $a3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r7;
    // 0x151E2800: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x151E2804: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_151E2808:
    // 0x151E2808: slti        $at, $a3, 0x4
    ctx->r1 = SIGNED(ctx->r7) < 0X4 ? 1 : 0;
    // 0x151E280C: beq         $at, $zero, L_151E2820
    if (ctx->r1 == 0) {
        // 0x151E2810: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_151E2820;
    }
    // 0x151E2810: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x151E2814: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151E2818: bnel        $at, $zero, L_151E27DC
    if (ctx->r1 != 0) {
        // 0x151E281C: lb          $t9, 0x0($t0)
        ctx->r25 = MEM_B(ctx->r8, 0X0);
            goto L_151E27DC;
    }
    goto skip_7;
    // 0x151E281C: lb          $t9, 0x0($t0)
    ctx->r25 = MEM_B(ctx->r8, 0X0);
    skip_7:
L_151E2820:
    // 0x151E2820: b           L_151E282C
    // 0x151E2824: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_151E282C;
    // 0x151E2824: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151E2828:
    // 0x151E2828: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151E282C:
    // 0x151E282C: jr          $ra
    // 0x151E2830: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x151E2830: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_1503EB78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503EB78: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1503EB7C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1503EB80: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x1503EB84: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1503EB88: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x1503EB8C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x1503EB90: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x1503EB94: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x1503EB98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1503EB9C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1503EBA0: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x1503EBA4: beq         $a3, $zero, L_1503EBB8
    if (ctx->r7 == 0) {
        // 0x1503EBA8: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_1503EBB8;
    }
    // 0x1503EBA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503EBAC: addiu       $s3, $zero, 0x80
    ctx->r19 = ADD32(0, 0X80);
    // 0x1503EBB0: b           L_1503EBC0
    // 0x1503EBB4: addiu       $s4, $zero, 0x7F
    ctx->r20 = ADD32(0, 0X7F);
        goto L_1503EBC0;
    // 0x1503EBB4: addiu       $s4, $zero, 0x7F
    ctx->r20 = ADD32(0, 0X7F);
L_1503EBB8:
    // 0x1503EBB8: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    // 0x1503EBBC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_1503EBC0:
    // 0x1503EBC0: lwc1        $f2, -0x76E0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X76E0);
    // 0x1503EBC4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1503EBC8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1503EBCC: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1503EBD0: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x1503EBD4: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
    // 0x1503EBD8: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1503EBDC: addiu       $s2, $sp, 0x5C
    ctx->r18 = ADD32(ctx->r29, 0X5C);
    // 0x1503EBE0: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x1503EBE4: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x1503EBE8: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
L_1503EBEC:
    // 0x1503EBEC: jal         0x150ADA20
    // 0x1503EBF0: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1503EBF0: nop

    after_0:
    // 0x1503EBF4: and         $t6, $v0, $s3
    ctx->r14 = ctx->r2 & ctx->r19;
    // 0x1503EBF8: addu        $t7, $t6, $s4
    ctx->r15 = ADD32(ctx->r14, ctx->r20);
    // 0x1503EBFC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1503EC00: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1503EC04: lwc1        $f18, 0x48($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X48);
    // 0x1503EC08: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1503EC0C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x1503EC10: sltu        $at, $s1, $s2
    ctx->r1 = ctx->r17 < ctx->r18 ? 1 : 0;
    // 0x1503EC14: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1503EC18: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1503EC1C: add.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x1503EC20: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x1503EC24: bne         $at, $zero, L_1503EBEC
    if (ctx->r1 != 0) {
        // 0x1503EC28: swc1        $f4, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
            goto L_1503EBEC;
    }
    // 0x1503EC28: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x1503EC2C: lui         $at, 0x3D00
    ctx->r1 = S32(0X3D00 << 16);
    // 0x1503EC30: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x1503EC34: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1503EC38: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x1503EC3C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_1503EC40:
    // 0x1503EC40: jal         0x150ADA20
    // 0x1503EC44: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1503EC44: nop

    after_1:
    // 0x1503EC48: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x1503EC4C: addiu       $t9, $t8, -0x80
    ctx->r25 = ADD32(ctx->r24, -0X80);
    // 0x1503EC50: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1503EC54: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1503EC58: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1503EC5C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1503EC60: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x1503EC64: bne         $s2, $s1, L_1503EC40
    if (ctx->r18 != ctx->r17) {
        // 0x1503EC68: swc1        $f10, 0x50($s0)
        MEM_W(0X50, ctx->r16) = ctx->f10.u32l;
            goto L_1503EC40;
    }
    // 0x1503EC68: swc1        $f10, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f10.u32l;
    // 0x1503EC6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1503EC70: lwc1        $f18, -0x76DC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X76DC);
    // 0x1503EC74: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x1503EC78: swc1        $f18, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->f18.u32l;
    // 0x1503EC7C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1503EC80: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1503EC84: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1503EC88: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x1503EC8C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x1503EC90: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x1503EC94: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x1503EC98: jr          $ra
    // 0x1503EC9C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x1503EC9C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_151F27E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F27E0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x151F27E4: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x151F27E8: sb          $zero, 0xF($sp)
    MEM_B(0XF, ctx->r29) = 0;
    // 0x151F27EC: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_151F27F0:
    // 0x151F27F0: lbu         $t6, 0xF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XF);
    // 0x151F27F4: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x151F27F8: beq         $t7, $zero, L_151F280C
    if (ctx->r15 == 0) {
        // 0x151F27FC: nop
    
            goto L_151F280C;
    }
    // 0x151F27FC: nop

    // 0x151F2800: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x151F2804: b           L_151F2810
    // 0x151F2808: sb          $t8, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r24;
        goto L_151F2810;
    // 0x151F2808: sb          $t8, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r24;
L_151F280C:
    // 0x151F280C: sb          $zero, 0xE($sp)
    MEM_B(0XE, ctx->r29) = 0;
L_151F2810:
    // 0x151F2810: lbu         $t9, 0xF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XF);
    // 0x151F2814: andi        $t1, $a0, 0x400
    ctx->r9 = ctx->r4 & 0X400;
    // 0x151F2818: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x151F281C: beq         $t1, $zero, L_151F282C
    if (ctx->r9 == 0) {
        // 0x151F2820: sb          $t0, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r8;
            goto L_151F282C;
    }
    // 0x151F2820: sb          $t0, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r8;
    // 0x151F2824: b           L_151F2830
    // 0x151F2828: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_151F2830;
    // 0x151F2828: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_151F282C:
    // 0x151F282C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_151F2830:
    // 0x151F2830: lbu         $t2, 0xF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XF);
    // 0x151F2834: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x151F2838: lbu         $t7, 0xE($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XE);
    // 0x151F283C: andi        $t3, $a1, 0xFF
    ctx->r11 = ctx->r5 & 0XFF;
    // 0x151F2840: sll         $t5, $a0, 1
    ctx->r13 = S32(ctx->r4 << 1);
    // 0x151F2844: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x151F2848: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x151F284C: andi        $t8, $t4, 0xFF
    ctx->r24 = ctx->r12 & 0XFF;
    // 0x151F2850: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x151F2854: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x151F2858: sb          $t4, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r12;
    // 0x151F285C: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x151F2860: xor         $t9, $t8, $t7
    ctx->r25 = ctx->r24 ^ ctx->r15;
    // 0x151F2864: sw          $t1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r9;
    // 0x151F2868: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151F286C: bne         $at, $zero, L_151F27F0
    if (ctx->r1 != 0) {
        // 0x151F2870: sb          $t9, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r25;
            goto L_151F27F0;
    }
    // 0x151F2870: sb          $t9, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r25;
    // 0x151F2874: lbu         $v0, 0xF($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XF);
    // 0x151F2878: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x151F287C: andi        $t2, $v0, 0x1F
    ctx->r10 = ctx->r2 & 0X1F;
    // 0x151F2880: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x151F2884: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x151F2888: jr          $ra
    // 0x151F288C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    return;
    // 0x151F288C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
;}
RECOMP_FUNC void func_15096D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15096D78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15096D7C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x15096D80: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x15096D84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15096D88: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x15096D8C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15096D90: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x15096D94: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x15096D98: lw          $t9, 0x2FA0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2FA0);
    // 0x15096D9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15096DA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15096DA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15096DA8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15096DAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15096DB0: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15096DB4: lw          $t8, -0x4010($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4010);
    // 0x15096DB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15096DBC: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x15096DC0: slt         $at, $t9, $t6
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15096DC4: beq         $at, $zero, L_15096DD4
    if (ctx->r1 == 0) {
        // 0x15096DC8: addu        $s1, $t7, $t8
        ctx->r17 = ADD32(ctx->r15, ctx->r24);
            goto L_15096DD4;
    }
    // 0x15096DC8: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x15096DCC: b           L_15097588
    // 0x15096DD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15097588;
    // 0x15096DD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15096DD4:
    // 0x15096DD4: addiu       $t0, $a1, -0x2
    ctx->r8 = ADD32(ctx->r5, -0X2);
    // 0x15096DD8: sltiu       $at, $t0, 0x1A
    ctx->r1 = ctx->r8 < 0X1A ? 1 : 0;
    // 0x15096DDC: beq         $at, $zero, L_1509757C
    if (ctx->r1 == 0) {
        // 0x15096DE0: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_1509757C;
    }
    // 0x15096DE0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15096DE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15096DE8: addu        $at, $at, $t0
    gpr jr_addend_15096DF0 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x15096DEC: lw          $t0, -0x2130($at)
    ctx->r8 = ADD32(ctx->r1, -0X2130);
    // 0x15096DF0: jr          $t0
    // 0x15096DF4: nop

    switch (jr_addend_15096DF0 >> 2) {
        case 0: goto L_15097218; break;
        case 1: goto L_15097268; break;
        case 2: goto L_15096F38; break;
        case 3: goto L_15096F5C; break;
        case 4: goto L_15096F70; break;
        case 5: goto L_15097004; break;
        case 6: goto L_15096FB0; break;
        case 7: goto L_1509701C; break;
        case 8: goto L_1509702C; break;
        case 9: goto L_1509711C; break;
        case 10: goto L_15096DF8; break;
        case 11: goto L_15097584; break;
        case 12: goto L_15097150; break;
        case 13: goto L_150972A8; break;
        case 14: goto L_150972E8; break;
        case 15: goto L_15097328; break;
        case 16: goto L_150973A8; break;
        case 17: goto L_150973CC; break;
        case 18: goto L_150973F0; break;
        case 19: goto L_15097458; break;
        case 20: goto L_15097498; break;
        case 21: goto L_150974A4; break;
        case 22: goto L_150974C8; break;
        case 23: goto L_1509752C; break;
        case 24: goto L_15097558; break;
        case 25: goto L_15097568; break;
        default: switch_error(__func__, 0x15096DF0, 0x8009DED0);
    }
    // 0x15096DF4: nop

L_15096DF8:
    // 0x15096DF8: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x15096DFC: addiu       $v1, $zero, 0x24
    ctx->r3 = ADD32(0, 0X24);
    // 0x15096E00: lwc1        $f4, 0x37C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X37C);
    // 0x15096E04: multu       $t1, $v1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096E08: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15096E0C: addiu       $v0, $v0, 0x2DC0
    ctx->r2 = ADD32(ctx->r2, 0X2DC0);
    // 0x15096E10: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15096E14: mflo        $t2
    ctx->r10 = lo;
    // 0x15096E18: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x15096E1C: swc1        $f4, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f4.u32l;
    // 0x15096E20: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x15096E24: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x15096E28: multu       $t5, $v1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096E2C: mflo        $t7
    ctx->r15 = lo;
    // 0x15096E30: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x15096E34: sb          $t4, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r12;
    // 0x15096E38: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x15096E3C: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x15096E40: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15096E44: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096E48: mflo        $t0
    ctx->r8 = lo;
    // 0x15096E4C: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x15096E50: sb          $t9, 0x2($t1)
    MEM_B(0X2, ctx->r9) = ctx->r25;
    // 0x15096E54: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x15096E58: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
    // 0x15096E5C: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096E60: mflo        $t5
    ctx->r13 = lo;
    // 0x15096E64: addu        $t7, $v0, $t5
    ctx->r15 = ADD32(ctx->r2, ctx->r13);
    // 0x15096E68: sh          $t2, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r10;
    // 0x15096E6C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x15096E70: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096E74: mflo        $t6
    ctx->r14 = lo;
    // 0x15096E78: addu        $t0, $v0, $t6
    ctx->r8 = ADD32(ctx->r2, ctx->r14);
    // 0x15096E7C: sb          $t4, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r12;
    // 0x15096E80: lw          $a0, 0x3840($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3840);
    // 0x15096E84: slti        $at, $a0, 0x6
    ctx->r1 = SIGNED(ctx->r4) < 0X6 ? 1 : 0;
    // 0x15096E88: bnel        $at, $zero, L_15096EB0
    if (ctx->r1 != 0) {
        // 0x15096E8C: lw          $t2, 0x8($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X8);
            goto L_15096EB0;
    }
    goto skip_0;
    // 0x15096E8C: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    skip_0:
    // 0x15096E90: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x15096E94: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x15096E98: multu       $t1, $v1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096E9C: mflo        $t3
    ctx->r11 = lo;
    // 0x15096EA0: addu        $t5, $v0, $t3
    ctx->r13 = ADD32(ctx->r2, ctx->r11);
    // 0x15096EA4: b           L_15096EC0
    // 0x15096EA8: sw          $t9, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r25;
        goto L_15096EC0;
    // 0x15096EA8: sw          $t9, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r25;
    // 0x15096EAC: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
L_15096EB0:
    // 0x15096EB0: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096EB4: mflo        $t7
    ctx->r15 = lo;
    // 0x15096EB8: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x15096EBC: sw          $zero, 0xC($t8)
    MEM_W(0XC, ctx->r24) = 0;
L_15096EC0:
    // 0x15096EC0: slti        $at, $a0, 0x7
    ctx->r1 = SIGNED(ctx->r4) < 0X7 ? 1 : 0;
    // 0x15096EC4: bnel        $at, $zero, L_15096F00
    if (ctx->r1 != 0) {
        // 0x15096EC8: lw          $t3, 0x8($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X8);
            goto L_15096F00;
    }
    goto skip_1;
    // 0x15096EC8: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    skip_1:
    // 0x15096ECC: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x15096ED0: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x15096ED4: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x15096ED8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15096EDC: multu       $t4, $v1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096EE0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15096EE4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15096EE8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15096EEC: mflo        $t0
    ctx->r8 = lo;
    // 0x15096EF0: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x15096EF4: b           L_15096F18
    // 0x15096EF8: swc1        $f10, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f10.u32l;
        goto L_15096F18;
    // 0x15096EF8: swc1        $f10, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f10.u32l;
    // 0x15096EFC: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
L_15096F00:
    // 0x15096F00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15096F04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15096F08: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096F0C: mflo        $t9
    ctx->r25 = lo;
    // 0x15096F10: addu        $t5, $v0, $t9
    ctx->r13 = ADD32(ctx->r2, ctx->r25);
    // 0x15096F14: swc1        $f16, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f16.u32l;
L_15096F18:
    // 0x15096F18: jal         0x150969A0
    // 0x15096F1C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_150969A0(rdram, ctx);
        goto after_0;
    // 0x15096F1C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_0:
    // 0x15096F20: bnel        $v0, $zero, L_15097588
    if (ctx->r2 != 0) {
        // 0x15096F24: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15097588;
    }
    goto skip_2;
    // 0x15096F24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x15096F28: jal         0x15096A68
    // 0x15096F2C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_15096A68(rdram, ctx);
        goto after_1;
    // 0x15096F2C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_1:
    // 0x15096F30: b           L_15097588
    // 0x15096F34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15097588;
    // 0x15096F34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15096F38:
    // 0x15096F38: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x15096F3C: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x15096F40: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x15096F44: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x15096F48: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15096F4C: jal         0x15123934
    // 0x15096F50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15123934(rdram, ctx);
        goto after_2;
    // 0x15096F50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x15096F54: b           L_15097588
    // 0x15096F58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15097588;
    // 0x15096F58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15096F5C:
    // 0x15096F5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15096F60: jal         0x151239CC
    // 0x15096F64: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_151239CC(rdram, ctx);
        goto after_3;
    // 0x15096F64: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_3:
    // 0x15096F68: b           L_15097588
    // 0x15096F6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15097588;
    // 0x15096F6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15096F70:
    // 0x15096F70: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x15096F74: beql        $t7, $zero, L_15096F98
    if (ctx->r15 == 0) {
        // 0x15096F78: lw          $t1, 0xC($s0)
        ctx->r9 = MEM_W(ctx->r16, 0XC);
            goto L_15096F98;
    }
    goto skip_3;
    // 0x15096F78: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    skip_3:
    // 0x15096F7C: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x15096F80: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x15096F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15096F88: or          $t4, $t8, $t6
    ctx->r12 = ctx->r24 | ctx->r14;
    // 0x15096F8C: b           L_15097588
    // 0x15096F90: sw          $t4, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r12;
        goto L_15097588;
    // 0x15096F90: sw          $t4, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r12;
    // 0x15096F94: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
L_15096F98:
    // 0x15096F98: lw          $t0, 0x84($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X84);
    // 0x15096F9C: nor         $t3, $t1, $zero
    ctx->r11 = ~(ctx->r9 | 0);
    // 0x15096FA0: and         $t9, $t0, $t3
    ctx->r25 = ctx->r8 & ctx->r11;
    // 0x15096FA4: sw          $t9, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r25;
    // 0x15096FA8: b           L_15097588
    // 0x15096FAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15097588;
    // 0x15096FAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15096FB0:
    // 0x15096FB0: lw          $t5, 0x3D4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X3D4);
    // 0x15096FB4: lbu         $t2, 0x120($t5)
    ctx->r10 = MEM_BU(ctx->r13, 0X120);
    // 0x15096FB8: bne         $t2, $zero, L_15096FFC
    if (ctx->r10 != 0) {
        // 0x15096FBC: nop
    
            goto L_15096FFC;
    }
    // 0x15096FBC: nop

    // 0x15096FC0: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x15096FC4: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x15096FC8: nop

    // 0x15096FCC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15096FD0: swc1        $f4, 0x374($s1)
    MEM_W(0X374, ctx->r17) = ctx->f4.u32l;
    // 0x15096FD4: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x15096FD8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x15096FDC: nop

    // 0x15096FE0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15096FE4: swc1        $f8, 0x34C($s1)
    MEM_W(0X34C, ctx->r17) = ctx->f8.u32l;
    // 0x15096FE8: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x15096FEC: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15096FF0: nop

    // 0x15096FF4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15096FF8: swc1        $f16, 0x348($s1)
    MEM_W(0X348, ctx->r17) = ctx->f16.u32l;
L_15096FFC:
    // 0x15096FFC: b           L_15097588
    // 0x15097000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15097588;
    // 0x15097000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15097004:
    // 0x15097004: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x15097008: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1509700C: sh          $t4, 0x1E0($s1)
    MEM_H(0X1E0, ctx->r17) = ctx->r12;
    // 0x15097010: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x15097014: b           L_15097588
    // 0x15097018: sh          $t1, 0x1B4($s1)
    MEM_H(0X1B4, ctx->r17) = ctx->r9;
        goto L_15097588;
    // 0x15097018: sh          $t1, 0x1B4($s1)
    MEM_H(0X1B4, ctx->r17) = ctx->r9;
L_1509701C:
    // 0x1509701C: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x15097020: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15097024: b           L_15097588
    // 0x15097028: sw          $t0, 0x134($s1)
    MEM_W(0X134, ctx->r17) = ctx->r8;
        goto L_15097588;
    // 0x15097028: sw          $t0, 0x134($s1)
    MEM_W(0X134, ctx->r17) = ctx->r8;
L_1509702C:
    // 0x1509702C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x15097030: addiu       $a3, $a3, 0x3600
    ctx->r7 = ADD32(ctx->r7, 0X3600);
    // 0x15097034: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15097038: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x1509703C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x15097040: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15097044: sw          $v1, 0x2DB4($at)
    MEM_W(0X2DB4, ctx->r1) = ctx->r3;
    // 0x15097048: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1509704C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15097050: andi        $t9, $t3, 0xFFF
    ctx->r25 = ctx->r11 & 0XFFF;
    // 0x15097054: lw          $v0, -0x3FE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3FE0);
    // 0x15097058: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x1509705C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x15097060: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15097064: subu        $t5, $t5, $t9
    ctx->r13 = SUB32(ctx->r13, ctx->r25);
    // 0x15097068: sb          $t2, -0x400C($at)
    MEM_B(-0X400C, ctx->r1) = ctx->r10;
    // 0x1509706C: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x15097070: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x15097074: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x15097078: addu        $v0, $t5, $v0
    ctx->r2 = ADD32(ctx->r13, ctx->r2);
    // 0x1509707C: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x15097080: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15097084: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15097088: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x1509708C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x15097090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15097094: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15097098: swc1        $f4, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f4.u32l;
    // 0x1509709C: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    // 0x150970A0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x150970A4: nop

    // 0x150970A8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150970AC: swc1        $f8, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f8.u32l;
    // 0x150970B0: lh          $t4, 0x4($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X4);
    // 0x150970B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150970B8: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x150970BC: nop

    // 0x150970C0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150970C4: swc1        $f16, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f16.u32l;
    // 0x150970C8: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150970CC: swc1        $f18, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f18.u32l;
    // 0x150970D0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x150970D4: swc1        $f4, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f4.u32l;
    // 0x150970D8: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x150970DC: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    // 0x150970E0: swc1        $f6, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f6.u32l;
    // 0x150970E4: jal         0x1512D560
    // 0x150970E8: sb          $zero, 0x365C($at)
    MEM_B(0X365C, ctx->r1) = 0;
    func_1512D560(rdram, ctx);
        goto after_4;
    // 0x150970E8: sb          $zero, 0x365C($at)
    MEM_B(0X365C, ctx->r1) = 0;
    after_4:
    // 0x150970EC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x150970F0: addiu       $a2, $a3, 0x3600
    ctx->r6 = ADD32(ctx->r7, 0X3600);
    // 0x150970F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150970F8: jal         0x1512D560
    // 0x150970FC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_1512D560(rdram, ctx);
        goto after_5;
    // 0x150970FC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_5:
    // 0x15097100: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15097104: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x15097108: lw          $t1, 0x25C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X25C);
    // 0x1509710C: ori         $t0, $t1, 0x200
    ctx->r8 = ctx->r9 | 0X200;
    // 0x15097110: sw          $t0, 0x25C($v0)
    MEM_W(0X25C, ctx->r2) = ctx->r8;
    // 0x15097114: b           L_15097588
    // 0x15097118: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15097588;
    // 0x15097118: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509711C:
    // 0x1509711C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15097120: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x15097124: jal         0x1512D560
    // 0x15097128: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1512D560(rdram, ctx);
        goto after_6;
    // 0x15097128: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x1509712C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15097130: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15097134: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x15097138: sw          $zero, 0x2DB4($at)
    MEM_W(0X2DB4, ctx->r1) = 0;
    // 0x1509713C: lw          $t3, 0x25C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X25C);
    // 0x15097140: addiu       $at, $zero, -0x201
    ctx->r1 = ADD32(0, -0X201);
    // 0x15097144: and         $t9, $t3, $at
    ctx->r25 = ctx->r11 & ctx->r1;
    // 0x15097148: b           L_15097584
    // 0x1509714C: sw          $t9, 0x25C($v0)
    MEM_W(0X25C, ctx->r2) = ctx->r25;
        goto L_15097584;
    // 0x1509714C: sw          $t9, 0x25C($v0)
    MEM_W(0X25C, ctx->r2) = ctx->r25;
L_15097150:
    // 0x15097150: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x15097154: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15097158: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x1509715C: nop

    // 0x15097160: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15097164: swc1        $f16, 0x2A4($s1)
    MEM_W(0X2A4, ctx->r17) = ctx->f16.u32l;
    // 0x15097168: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x1509716C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x15097170: nop

    // 0x15097174: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15097178: swc1        $f4, 0x2A8($s1)
    MEM_W(0X2A8, ctx->r17) = ctx->f4.u32l;
    // 0x1509717C: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x15097180: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x15097184: nop

    // 0x15097188: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1509718C: swc1        $f8, 0x2AC($s1)
    MEM_W(0X2AC, ctx->r17) = ctx->f8.u32l;
    // 0x15097190: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x15097194: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x15097198: nop

    // 0x1509719C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150971A0: swc1        $f16, 0x2BC($s1)
    MEM_W(0X2BC, ctx->r17) = ctx->f16.u32l;
    // 0x150971A4: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x150971A8: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x150971AC: nop

    // 0x150971B0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150971B4: swc1        $f4, 0x2C0($s1)
    MEM_W(0X2C0, ctx->r17) = ctx->f4.u32l;
    // 0x150971B8: lw          $t4, 0x10($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X10);
    // 0x150971BC: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x150971C0: nop

    // 0x150971C4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150971C8: swc1        $f8, 0x2C4($s1)
    MEM_W(0X2C4, ctx->r17) = ctx->f8.u32l;
    // 0x150971CC: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x150971D0: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x150971D4: nop

    // 0x150971D8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150971DC: swc1        $f16, 0x2F8($s1)
    MEM_W(0X2F8, ctx->r17) = ctx->f16.u32l;
    // 0x150971E0: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x150971E4: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x150971E8: nop

    // 0x150971EC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150971F0: swc1        $f4, 0x2FC($s1)
    MEM_W(0X2FC, ctx->r17) = ctx->f4.u32l;
    // 0x150971F4: lw          $t3, 0x1C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C);
    // 0x150971F8: lwc1        $f10, 0x2FC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X2FC);
    // 0x150971FC: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x15097200: swc1        $f10, 0x358($s1)
    MEM_W(0X358, ctx->r17) = ctx->f10.u32l;
    // 0x15097204: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15097208: jal         0x1512A390
    // 0x1509720C: swc1        $f8, 0x300($s1)
    MEM_W(0X300, ctx->r17) = ctx->f8.u32l;
    func_1512A390(rdram, ctx);
        goto after_7;
    // 0x1509720C: swc1        $f8, 0x300($s1)
    MEM_W(0X300, ctx->r17) = ctx->f8.u32l;
    after_7:
    // 0x15097210: b           L_15097588
    // 0x15097214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15097588;
    // 0x15097214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15097218:
    // 0x15097218: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x1509721C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15097220: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x15097224: nop

    // 0x15097228: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1509722C: swc1        $f18, 0x2F8($s1)
    MEM_W(0X2F8, ctx->r17) = ctx->f18.u32l;
    // 0x15097230: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x15097234: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x15097238: nop

    // 0x1509723C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15097240: swc1        $f6, 0x2FC($s1)
    MEM_W(0X2FC, ctx->r17) = ctx->f6.u32l;
    // 0x15097244: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
    // 0x15097248: lwc1        $f16, 0x2FC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X2FC);
    // 0x1509724C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x15097250: swc1        $f16, 0x358($s1)
    MEM_W(0X358, ctx->r17) = ctx->f16.u32l;
    // 0x15097254: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15097258: jal         0x1512A390
    // 0x1509725C: swc1        $f10, 0x300($s1)
    MEM_W(0X300, ctx->r17) = ctx->f10.u32l;
    func_1512A390(rdram, ctx);
        goto after_8;
    // 0x1509725C: swc1        $f10, 0x300($s1)
    MEM_W(0X300, ctx->r17) = ctx->f10.u32l;
    after_8:
    // 0x15097260: b           L_15097588
    // 0x15097264: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15097588;
    // 0x15097264: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15097268:
    // 0x15097268: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x1509726C: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x15097270: nop

    // 0x15097274: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15097278: swc1        $f4, 0x2A4($s1)
    MEM_W(0X2A4, ctx->r17) = ctx->f4.u32l;
    // 0x1509727C: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x15097280: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x15097284: nop

    // 0x15097288: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1509728C: swc1        $f8, 0x2A8($s1)
    MEM_W(0X2A8, ctx->r17) = ctx->f8.u32l;
    // 0x15097290: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x15097294: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15097298: nop

    // 0x1509729C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150972A0: b           L_15097584
    // 0x150972A4: swc1        $f16, 0x2AC($s1)
    MEM_W(0X2AC, ctx->r17) = ctx->f16.u32l;
        goto L_15097584;
    // 0x150972A4: swc1        $f16, 0x2AC($s1)
    MEM_W(0X2AC, ctx->r17) = ctx->f16.u32l;
L_150972A8:
    // 0x150972A8: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x150972AC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150972B0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150972B4: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x150972B8: nop

    // 0x150972BC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150972C0: swc1        $f4, 0x198($s1)
    MEM_W(0X198, ctx->r17) = ctx->f4.u32l;
    // 0x150972C4: lw          $t1, 0x3840($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3840);
    // 0x150972C8: bnel        $t1, $at, L_15097588
    if (ctx->r9 != ctx->r1) {
        // 0x150972CC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15097588;
    }
    goto skip_4;
    // 0x150972CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x150972D0: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x150972D4: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x150972D8: nop

    // 0x150972DC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150972E0: b           L_15097584
    // 0x150972E4: swc1        $f8, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->f8.u32l;
        goto L_15097584;
    // 0x150972E4: swc1        $f8, 0x194($s1)
    MEM_W(0X194, ctx->r17) = ctx->f8.u32l;
L_150972E8:
    // 0x150972E8: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x150972EC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150972F0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150972F4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x150972F8: nop

    // 0x150972FC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15097300: swc1        $f16, 0x190($s1)
    MEM_W(0X190, ctx->r17) = ctx->f16.u32l;
    // 0x15097304: lw          $t9, 0x3840($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3840);
    // 0x15097308: bnel        $t9, $at, L_15097588
    if (ctx->r25 != ctx->r1) {
        // 0x1509730C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15097588;
    }
    goto skip_5;
    // 0x1509730C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_5:
    // 0x15097310: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x15097314: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x15097318: nop

    // 0x1509731C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15097320: b           L_15097584
    // 0x15097324: swc1        $f4, 0x18C($s1)
    MEM_W(0X18C, ctx->r17) = ctx->f4.u32l;
        goto L_15097584;
    // 0x15097324: swc1        $f4, 0x18C($s1)
    MEM_W(0X18C, ctx->r17) = ctx->f4.u32l;
L_15097328:
    // 0x15097328: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1509732C: lw          $t2, 0x3840($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3840);
    // 0x15097330: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x15097334: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x15097338: bne         $v0, $t2, L_15097364
    if (ctx->r2 != ctx->r10) {
        // 0x1509733C: sll         $t6, $t8, 2
        ctx->r14 = S32(ctx->r24 << 2);
            goto L_15097364;
    }
    // 0x1509733C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x15097340: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x15097344: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15097348: beql        $t7, $zero, L_15097368
    if (ctx->r15 == 0) {
        // 0x1509734C: subu        $t6, $t6, $t8
        ctx->r14 = SUB32(ctx->r14, ctx->r24);
            goto L_15097368;
    }
    goto skip_6;
    // 0x1509734C: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    skip_6:
    // 0x15097350: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x15097354: jal         0x1512D748
    // 0x15097358: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    func_1512D748(rdram, ctx);
        goto after_9;
    // 0x15097358: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    after_9:
    // 0x1509735C: b           L_15097588
    // 0x15097360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15097588;
    // 0x15097360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15097364:
    // 0x15097364: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
L_15097368:
    // 0x15097368: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1509736C: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x15097370: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x15097374: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x15097378: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x1509737C: lw          $t4, -0x3CF0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3CF0);
    // 0x15097380: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15097384: bne         $v0, $t4, L_150973A0
    if (ctx->r2 != ctx->r12) {
        // 0x15097388: nop
    
            goto L_150973A0;
    }
    // 0x15097388: nop

    // 0x1509738C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x15097390: jal         0x1512D748
    // 0x15097394: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    func_1512D748(rdram, ctx);
        goto after_10;
    // 0x15097394: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    after_10:
    // 0x15097398: b           L_15097588
    // 0x1509739C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15097588;
    // 0x1509739C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150973A0:
    // 0x150973A0: b           L_15097588
    // 0x150973A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15097588;
    // 0x150973A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150973A8:
    // 0x150973A8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x150973AC: andi        $t1, $a0, 0xFFF
    ctx->r9 = ctx->r4 & 0XFFF;
    // 0x150973B0: jal         0x15084000
    // 0x150973B4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_15084000(rdram, ctx);
        goto after_11;
    // 0x150973B4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_11:
    // 0x150973B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150973BC: jal         0x151254F4
    // 0x150973C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_151254F4(rdram, ctx);
        goto after_12;
    // 0x150973C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_12:
    // 0x150973C4: b           L_15097588
    // 0x150973C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15097588;
    // 0x150973C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150973CC:
    // 0x150973CC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x150973D0: andi        $t0, $a0, 0xFFF
    ctx->r8 = ctx->r4 & 0XFFF;
    // 0x150973D4: jal         0x15084000
    // 0x150973D8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_15084000(rdram, ctx);
        goto after_13;
    // 0x150973D8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_13:
    // 0x150973DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150973E0: jal         0x15124770
    // 0x150973E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_15124770(rdram, ctx);
        goto after_14;
    // 0x150973E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_14:
    // 0x150973E8: b           L_15097588
    // 0x150973EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15097588;
    // 0x150973EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150973F0:
    // 0x150973F0: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x150973F4: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x150973F8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150973FC: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x15097400: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15097404: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x15097408: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1509740C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15097410: swc1        $f10, 0x1A4($s1)
    MEM_W(0X1A4, ctx->r17) = ctx->f10.u32l;
    // 0x15097414: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x15097418: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x1509741C: nop

    // 0x15097420: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15097424: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15097428: swc1        $f4, 0x1A8($s1)
    MEM_W(0X1A8, ctx->r17) = ctx->f4.u32l;
    // 0x1509742C: lw          $t5, 0x3840($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3840);
    // 0x15097430: bnel        $v0, $t5, L_15097588
    if (ctx->r2 != ctx->r13) {
        // 0x15097434: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15097588;
    }
    goto skip_7;
    // 0x15097434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_7:
    // 0x15097438: lw          $t2, 0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X10);
    // 0x1509743C: beql        $t2, $zero, L_15097588
    if (ctx->r10 == 0) {
        // 0x15097440: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15097588;
    }
    goto skip_8;
    // 0x15097440: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_8:
    // 0x15097444: lwc1        $f6, 0x1A4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1A4);
    // 0x15097448: lwc1        $f8, 0x1A8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1A8);
    // 0x1509744C: swc1        $f6, 0x19C($s1)
    MEM_W(0X19C, ctx->r17) = ctx->f6.u32l;
    // 0x15097450: b           L_15097584
    // 0x15097454: swc1        $f8, 0x1A0($s1)
    MEM_W(0X1A0, ctx->r17) = ctx->f8.u32l;
        goto L_15097584;
    // 0x15097454: swc1        $f8, 0x1A0($s1)
    MEM_W(0X1A0, ctx->r17) = ctx->f8.u32l;
L_15097458:
    // 0x15097458: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x1509745C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15097460: lw          $v0, -0x3FE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3FE0);
    // 0x15097464: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x15097468: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x1509746C: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x15097470: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x15097474: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x15097478: addu        $v0, $t6, $v0
    ctx->r2 = ADD32(ctx->r14, ctx->r2);
    // 0x1509747C: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x15097480: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x15097484: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    // 0x15097488: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x1509748C: sh          $t0, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r8;
    // 0x15097490: b           L_15097588
    // 0x15097494: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15097588;
    // 0x15097494: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15097498:
    // 0x15097498: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1509749C: b           L_15097584
    // 0x150974A0: sb          $t3, 0x23C($s1)
    MEM_B(0X23C, ctx->r17) = ctx->r11;
        goto L_15097584;
    // 0x150974A0: sb          $t3, 0x23C($s1)
    MEM_B(0X23C, ctx->r17) = ctx->r11;
L_150974A4:
    // 0x150974A4: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x150974A8: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x150974AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150974B0: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x150974B4: nop

    // 0x150974B8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150974BC: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x150974C0: b           L_15097584
    // 0x150974C4: swc1        $f18, 0x7C0($s1)
    MEM_W(0X7C0, ctx->r17) = ctx->f18.u32l;
        goto L_15097584;
    // 0x150974C4: swc1        $f18, 0x7C0($s1)
    MEM_W(0X7C0, ctx->r17) = ctx->f18.u32l;
L_150974C8:
    // 0x150974C8: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150974CC: lw          $t5, 0x3840($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3840);
    // 0x150974D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x150974D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150974D8: bne         $v0, $t5, L_15097524
    if (ctx->r2 != ctx->r13) {
        // 0x150974DC: nop
    
            goto L_15097524;
    }
    // 0x150974DC: nop

    // 0x150974E0: sb          $t2, 0x78C($s1)
    MEM_B(0X78C, ctx->r17) = ctx->r10;
    // 0x150974E4: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x150974E8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x150974EC: nop

    // 0x150974F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150974F4: swc1        $f6, 0x794($s1)
    MEM_W(0X794, ctx->r17) = ctx->f6.u32l;
    // 0x150974F8: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x150974FC: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x15097500: nop

    // 0x15097504: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15097508: swc1        $f10, 0x790($s1)
    MEM_W(0X790, ctx->r17) = ctx->f10.u32l;
    // 0x1509750C: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x15097510: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x15097514: nop

    // 0x15097518: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1509751C: b           L_15097584
    // 0x15097520: swc1        $f18, 0x798($s1)
    MEM_W(0X798, ctx->r17) = ctx->f18.u32l;
        goto L_15097584;
    // 0x15097520: swc1        $f18, 0x798($s1)
    MEM_W(0X798, ctx->r17) = ctx->f18.u32l;
L_15097524:
    // 0x15097524: b           L_15097584
    // 0x15097528: sb          $zero, 0x78C($s1)
    MEM_B(0X78C, ctx->r17) = 0;
        goto L_15097584;
    // 0x15097528: sb          $zero, 0x78C($s1)
    MEM_B(0X78C, ctx->r17) = 0;
L_1509752C:
    // 0x1509752C: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x15097530: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x15097534: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15097538: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1509753C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15097540: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15097544: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15097548: swc1        $f8, 0x3A4($s1)
    MEM_W(0X3A4, ctx->r17) = ctx->f8.u32l;
    // 0x1509754C: lwc1        $f10, 0x3A4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X3A4);
    // 0x15097550: b           L_15097584
    // 0x15097554: swc1        $f10, 0x2DB0($at)
    MEM_W(0X2DB0, ctx->r1) = ctx->f10.u32l;
        goto L_15097584;
    // 0x15097554: swc1        $f10, 0x2DB0($at)
    MEM_W(0X2DB0, ctx->r1) = ctx->f10.u32l;
L_15097558:
    // 0x15097558: jal         0x1512868C
    // 0x1509755C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_1512868C(rdram, ctx);
        goto after_15;
    // 0x1509755C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x15097560: b           L_15097588
    // 0x15097564: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15097588;
    // 0x15097564: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15097568:
    // 0x15097568: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x1509756C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15097570: addiu       $t0, $t1, -0x1
    ctx->r8 = ADD32(ctx->r9, -0X1);
    // 0x15097574: b           L_15097584
    // 0x15097578: sw          $t0, -0x6AE0($at)
    MEM_W(-0X6AE0, ctx->r1) = ctx->r8;
        goto L_15097584;
    // 0x15097578: sw          $t0, -0x6AE0($at)
    MEM_W(-0X6AE0, ctx->r1) = ctx->r8;
L_1509757C:
    // 0x1509757C: b           L_15097588
    // 0x15097580: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15097588;
    // 0x15097580: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15097584:
    // 0x15097584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15097588:
    // 0x15097588: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1509758C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x15097590: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x15097594: jr          $ra
    // 0x15097598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x15097598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_15079228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15079228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507922C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15079230: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15079234: lw          $v1, 0x154C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X154C);
    // 0x15079238: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507923C: lw          $t6, 0x3098($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3098);
    // 0x15079240: lbu         $t7, 0x251($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X251);
    // 0x15079244: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x15079248: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1507924C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15079250: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15079254: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15079258: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1507925C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15079260: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x15079264: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x15079268: lh          $t0, 0x4($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X4);
    // 0x1507926C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15079270: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15079274: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x15079278: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1507927C: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15079280: sub.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x15079284: jal         0x1505A630
    // 0x15079288: sub.s       $f14, $f2, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f10.fl;
    func_1505A630(rdram, ctx);
        goto after_0;
    // 0x15079288: sub.s       $f14, $f2, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f10.fl;
    after_0:
    // 0x1507928C: bne         $v0, $zero, L_15079298
    if (ctx->r2 != 0) {
        // 0x15079290: andi        $a2, $v0, 0xFFFF
        ctx->r6 = ctx->r2 & 0XFFFF;
            goto L_15079298;
    }
    // 0x15079290: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    // 0x15079294: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_15079298:
    // 0x15079298: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507929C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150792A0: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    // 0x150792A4: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150792A8: jal         0x1505D024
    // 0x150792AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_1505D024(rdram, ctx);
        goto after_1;
    // 0x150792AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_1:
    // 0x150792B0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150792B4: lw          $v1, 0x154C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X154C);
    // 0x150792B8: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x150792BC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150792C0: lw          $t1, 0x218($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X218);
    // 0x150792C4: addiu       $t2, $t1, -0x5
    ctx->r10 = ADD32(ctx->r9, -0X5);
    // 0x150792C8: sw          $t2, 0x218($v1)
    MEM_W(0X218, ctx->r3) = ctx->r10;
    // 0x150792CC: lw          $t4, 0x154C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X154C);
    // 0x150792D0: sh          $t3, 0x21C($t4)
    MEM_H(0X21C, ctx->r12) = ctx->r11;
    // 0x150792D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150792D8: jr          $ra
    // 0x150792DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x150792DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151615F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151615F8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151615FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15161600: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x15161604: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x15161608: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1516160C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x15161610: lbu         $v0, 0x53($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X53);
    // 0x15161614: bgez        $v0, L_15161624
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15161618: slti        $at, $v0, 0x9
        ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
            goto L_15161624;
    }
    // 0x15161618: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x1516161C: b           L_151616C0
    // 0x15161620: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151616C0;
    // 0x15161620: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15161624:
    // 0x15161624: bne         $at, $zero, L_15161634
    if (ctx->r1 != 0) {
        // 0x15161628: lbu         $t6, 0x53($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0X53);
            goto L_15161634;
    }
    // 0x15161628: lbu         $t6, 0x53($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X53);
    // 0x1516162C: b           L_151616C0
    // 0x15161630: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151616C0;
    // 0x15161630: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15161634:
    // 0x15161634: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15161638: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516163C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15161640: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15161644: lwc1        $f0, 0x66C0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X66C0);
    // 0x15161648: lbu         $t8, 0x4F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4F);
    // 0x1516164C: lbu         $t1, 0x57($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X57);
    // 0x15161650: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x15161654: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x15161658: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x1516165C: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    // 0x15161660: sb          $zero, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = 0;
    // 0x15161664: sb          $t9, 0x3D($sp)
    MEM_B(0X3D, ctx->r29) = ctx->r25;
    // 0x15161668: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
    // 0x1516166C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x15161670: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x15161674: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x15161678: lbu         $a3, 0x5B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5B);
    // 0x1516167C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x15161680: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x15161684: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x15161688: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x1516168C: sb          $t8, 0x3A($sp)
    MEM_B(0X3A, ctx->r29) = ctx->r24;
    // 0x15161690: sb          $t1, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r9;
    // 0x15161694: jal         0x1516037C
    // 0x15161698: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_1516037C(rdram, ctx);
        goto after_0;
    // 0x15161698: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_0:
    // 0x1516169C: beq         $v0, $zero, L_151616BC
    if (ctx->r2 == 0) {
        // 0x151616A0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151616BC;
    }
    // 0x151616A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151616A4: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x151616A8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x151616AC: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x151616B0: jal         0x10022EC0
    // 0x151616B4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151616B4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_1:
    // 0x151616B8: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
L_151616BC:
    // 0x151616BC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151616C0:
    // 0x151616C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151616C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x151616C8: jr          $ra
    // 0x151616CC: nop

    return;
    return;
    // 0x151616CC: nop

;}
RECOMP_FUNC void func_1506ED90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506ED90: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506ED94: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506ED98: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506ED9C: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506EDA0: sh          $t6, 0x21C($t7)
    MEM_H(0X21C, ctx->r15) = ctx->r14;
    // 0x1506EDA4: jr          $ra
    // 0x1506EDA8: nop

    return;
    return;
    // 0x1506EDA8: nop

;}
RECOMP_FUNC void func_15060D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15060D54: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15060D58: lw          $t6, -0x3D30($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D30);
    // 0x15060D5C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15060D60: addiu       $v1, $v1, -0x3A04
    ctx->r3 = ADD32(ctx->r3, -0X3A04);
    // 0x15060D64: beq         $t6, $zero, L_15060DC4
    if (ctx->r14 == 0) {
        // 0x15060D68: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_15060DC4;
    }
    // 0x15060D68: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15060D6C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15060D70: addiu       $a1, $a1, -0x3D30
    ctx->r5 = ADD32(ctx->r5, -0X3D30);
    // 0x15060D74: subu        $t7, $a0, $a1
    ctx->r15 = SUB32(ctx->r4, ctx->r5);
    // 0x15060D78: addiu       $a2, $zero, 0x32C
    ctx->r6 = ADD32(0, 0X32C);
    // 0x15060D7C: div         $zero, $t7, $a2
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r6)));
    // 0x15060D80: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15060D84: lbu         $t0, -0x3CCB($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X3CCB);
    // 0x15060D88: mflo        $t8
    ctx->r24 = lo;
    // 0x15060D8C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x15060D90: bne         $a2, $zero, L_15060D9C
    if (ctx->r6 != 0) {
        // 0x15060D94: nop
    
            goto L_15060D9C;
    }
    // 0x15060D94: nop

    // 0x15060D98: break       7
    do_break(352718232);
L_15060D9C:
    // 0x15060D9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15060DA0: bne         $a2, $at, L_15060DB4
    if (ctx->r6 != ctx->r1) {
        // 0x15060DA4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15060DB4;
    }
    // 0x15060DA4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15060DA8: bne         $t7, $at, L_15060DB4
    if (ctx->r15 != ctx->r1) {
        // 0x15060DAC: nop
    
            goto L_15060DB4;
    }
    // 0x15060DAC: nop

    // 0x15060DB0: break       6
    do_break(352718256);
L_15060DB4:
    // 0x15060DB4: bne         $t9, $t0, L_15060DC4
    if (ctx->r25 != ctx->r8) {
        // 0x15060DB8: nop
    
            goto L_15060DC4;
    }
    // 0x15060DB8: nop

    // 0x15060DBC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15060DC0: sb          $zero, -0x3CCB($at)
    MEM_B(-0X3CCB, ctx->r1) = 0;
L_15060DC4:
    // 0x15060DC4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15060DC8: addiu       $a1, $a1, -0x3D30
    ctx->r5 = ADD32(ctx->r5, -0X3D30);
    // 0x15060DCC: addiu       $a2, $zero, 0x32C
    ctx->r6 = ADD32(0, 0X32C);
    // 0x15060DD0: addiu       $v0, $v0, 0x121C
    ctx->r2 = ADD32(ctx->r2, 0X121C);
    // 0x15060DD4: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
L_15060DD8:
    // 0x15060DD8: beql        $t1, $zero, L_15060E28
    if (ctx->r9 == 0) {
        // 0x15060DDC: lw          $t6, 0x32C($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X32C);
            goto L_15060E28;
    }
    goto skip_0;
    // 0x15060DDC: lw          $t6, 0x32C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X32C);
    skip_0:
    // 0x15060DE0: subu        $t2, $a0, $a1
    ctx->r10 = SUB32(ctx->r4, ctx->r5);
    // 0x15060DE4: div         $zero, $t2, $a2
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r6)));
    // 0x15060DE8: lbu         $t5, 0x65($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X65);
    // 0x15060DEC: mflo        $t3
    ctx->r11 = lo;
    // 0x15060DF0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x15060DF4: bne         $a2, $zero, L_15060E00
    if (ctx->r6 != 0) {
        // 0x15060DF8: nop
    
            goto L_15060E00;
    }
    // 0x15060DF8: nop

    // 0x15060DFC: break       7
    do_break(352718332);
L_15060E00:
    // 0x15060E00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15060E04: bne         $a2, $at, L_15060E18
    if (ctx->r6 != ctx->r1) {
        // 0x15060E08: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15060E18;
    }
    // 0x15060E08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15060E0C: bne         $t2, $at, L_15060E18
    if (ctx->r10 != ctx->r1) {
        // 0x15060E10: nop
    
            goto L_15060E18;
    }
    // 0x15060E10: nop

    // 0x15060E14: break       6
    do_break(352718356);
L_15060E18:
    // 0x15060E18: bnel        $t4, $t5, L_15060E28
    if (ctx->r12 != ctx->r13) {
        // 0x15060E1C: lw          $t6, 0x32C($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X32C);
            goto L_15060E28;
    }
    goto skip_1;
    // 0x15060E1C: lw          $t6, 0x32C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X32C);
    skip_1:
    // 0x15060E20: sb          $zero, 0x65($v1)
    MEM_B(0X65, ctx->r3) = 0;
    // 0x15060E24: lw          $t6, 0x32C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X32C);
L_15060E28:
    // 0x15060E28: beql        $t6, $zero, L_15060E78
    if (ctx->r14 == 0) {
        // 0x15060E2C: lw          $t1, 0x658($v1)
        ctx->r9 = MEM_W(ctx->r3, 0X658);
            goto L_15060E78;
    }
    goto skip_2;
    // 0x15060E2C: lw          $t1, 0x658($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X658);
    skip_2:
    // 0x15060E30: subu        $t7, $a0, $a1
    ctx->r15 = SUB32(ctx->r4, ctx->r5);
    // 0x15060E34: div         $zero, $t7, $a2
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r6)));
    // 0x15060E38: lbu         $t0, 0x391($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X391);
    // 0x15060E3C: mflo        $t8
    ctx->r24 = lo;
    // 0x15060E40: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x15060E44: bne         $a2, $zero, L_15060E50
    if (ctx->r6 != 0) {
        // 0x15060E48: nop
    
            goto L_15060E50;
    }
    // 0x15060E48: nop

    // 0x15060E4C: break       7
    do_break(352718412);
L_15060E50:
    // 0x15060E50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15060E54: bne         $a2, $at, L_15060E68
    if (ctx->r6 != ctx->r1) {
        // 0x15060E58: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15060E68;
    }
    // 0x15060E58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15060E5C: bne         $t7, $at, L_15060E68
    if (ctx->r15 != ctx->r1) {
        // 0x15060E60: nop
    
            goto L_15060E68;
    }
    // 0x15060E60: nop

    // 0x15060E64: break       6
    do_break(352718436);
L_15060E68:
    // 0x15060E68: bnel        $t9, $t0, L_15060E78
    if (ctx->r25 != ctx->r8) {
        // 0x15060E6C: lw          $t1, 0x658($v1)
        ctx->r9 = MEM_W(ctx->r3, 0X658);
            goto L_15060E78;
    }
    goto skip_3;
    // 0x15060E6C: lw          $t1, 0x658($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X658);
    skip_3:
    // 0x15060E70: sb          $zero, 0x391($v1)
    MEM_B(0X391, ctx->r3) = 0;
    // 0x15060E74: lw          $t1, 0x658($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X658);
L_15060E78:
    // 0x15060E78: beql        $t1, $zero, L_15060EC8
    if (ctx->r9 == 0) {
        // 0x15060E7C: lw          $t6, 0x984($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X984);
            goto L_15060EC8;
    }
    goto skip_4;
    // 0x15060E7C: lw          $t6, 0x984($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X984);
    skip_4:
    // 0x15060E80: subu        $t2, $a0, $a1
    ctx->r10 = SUB32(ctx->r4, ctx->r5);
    // 0x15060E84: div         $zero, $t2, $a2
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r6)));
    // 0x15060E88: lbu         $t5, 0x6BD($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X6BD);
    // 0x15060E8C: mflo        $t3
    ctx->r11 = lo;
    // 0x15060E90: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x15060E94: bne         $a2, $zero, L_15060EA0
    if (ctx->r6 != 0) {
        // 0x15060E98: nop
    
            goto L_15060EA0;
    }
    // 0x15060E98: nop

    // 0x15060E9C: break       7
    do_break(352718492);
L_15060EA0:
    // 0x15060EA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15060EA4: bne         $a2, $at, L_15060EB8
    if (ctx->r6 != ctx->r1) {
        // 0x15060EA8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15060EB8;
    }
    // 0x15060EA8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15060EAC: bne         $t2, $at, L_15060EB8
    if (ctx->r10 != ctx->r1) {
        // 0x15060EB0: nop
    
            goto L_15060EB8;
    }
    // 0x15060EB0: nop

    // 0x15060EB4: break       6
    do_break(352718516);
L_15060EB8:
    // 0x15060EB8: bnel        $t4, $t5, L_15060EC8
    if (ctx->r12 != ctx->r13) {
        // 0x15060EBC: lw          $t6, 0x984($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X984);
            goto L_15060EC8;
    }
    goto skip_5;
    // 0x15060EBC: lw          $t6, 0x984($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X984);
    skip_5:
    // 0x15060EC0: sb          $zero, 0x6BD($v1)
    MEM_B(0X6BD, ctx->r3) = 0;
    // 0x15060EC4: lw          $t6, 0x984($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X984);
L_15060EC8:
    // 0x15060EC8: beql        $t6, $zero, L_15060F18
    if (ctx->r14 == 0) {
        // 0x15060ECC: addiu       $v1, $v1, 0xCB0
        ctx->r3 = ADD32(ctx->r3, 0XCB0);
            goto L_15060F18;
    }
    goto skip_6;
    // 0x15060ECC: addiu       $v1, $v1, 0xCB0
    ctx->r3 = ADD32(ctx->r3, 0XCB0);
    skip_6:
    // 0x15060ED0: subu        $t7, $a0, $a1
    ctx->r15 = SUB32(ctx->r4, ctx->r5);
    // 0x15060ED4: div         $zero, $t7, $a2
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r6)));
    // 0x15060ED8: lbu         $t0, 0x9E9($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X9E9);
    // 0x15060EDC: mflo        $t8
    ctx->r24 = lo;
    // 0x15060EE0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x15060EE4: bne         $a2, $zero, L_15060EF0
    if (ctx->r6 != 0) {
        // 0x15060EE8: nop
    
            goto L_15060EF0;
    }
    // 0x15060EE8: nop

    // 0x15060EEC: break       7
    do_break(352718572);
L_15060EF0:
    // 0x15060EF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15060EF4: bne         $a2, $at, L_15060F08
    if (ctx->r6 != ctx->r1) {
        // 0x15060EF8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15060F08;
    }
    // 0x15060EF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15060EFC: bne         $t7, $at, L_15060F08
    if (ctx->r15 != ctx->r1) {
        // 0x15060F00: nop
    
            goto L_15060F08;
    }
    // 0x15060F00: nop

    // 0x15060F04: break       6
    do_break(352718596);
L_15060F08:
    // 0x15060F08: bnel        $t9, $t0, L_15060F18
    if (ctx->r25 != ctx->r8) {
        // 0x15060F0C: addiu       $v1, $v1, 0xCB0
        ctx->r3 = ADD32(ctx->r3, 0XCB0);
            goto L_15060F18;
    }
    goto skip_7;
    // 0x15060F0C: addiu       $v1, $v1, 0xCB0
    ctx->r3 = ADD32(ctx->r3, 0XCB0);
    skip_7:
    // 0x15060F10: sb          $zero, 0x9E9($v1)
    MEM_B(0X9E9, ctx->r3) = 0;
    // 0x15060F14: addiu       $v1, $v1, 0xCB0
    ctx->r3 = ADD32(ctx->r3, 0XCB0);
L_15060F18:
    // 0x15060F18: bnel        $v1, $v0, L_15060DD8
    if (ctx->r3 != ctx->r2) {
        // 0x15060F1C: lw          $t1, 0x0($v1)
        ctx->r9 = MEM_W(ctx->r3, 0X0);
            goto L_15060DD8;
    }
    goto skip_8;
    // 0x15060F1C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    skip_8:
    // 0x15060F20: jr          $ra
    // 0x15060F24: nop

    return;
    return;
    // 0x15060F24: nop

;}
RECOMP_FUNC void func_151670C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151670C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151670C4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151670C8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x151670CC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x151670D0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x151670D4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x151670D8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x151670DC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x151670E0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x151670E4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x151670E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151670EC: lui         $s7, 0x800E
    ctx->r23 = S32(0X800E << 16);
    // 0x151670F0: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x151670F4: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x151670F8: addiu       $s3, $s3, -0x2E70
    ctx->r19 = ADD32(ctx->r19, -0X2E70);
    // 0x151670FC: addiu       $s4, $s4, -0x2E68
    ctx->r20 = ADD32(ctx->r20, -0X2E68);
    // 0x15167100: addiu       $s7, $s7, -0x31B0
    ctx->r23 = ADD32(ctx->r23, -0X31B0);
    // 0x15167104: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x15167108: addiu       $fp, $zero, 0x65
    ctx->r30 = ADD32(0, 0X65);
L_1516710C:
    // 0x1516710C: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x15167110: addiu       $s2, $s2, -0x4B58
    ctx->r18 = ADD32(ctx->r18, -0X4B58);
    // 0x15167114: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_15167118:
    // 0x15167118: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x1516711C: sll         $t7, $s6, 2
    ctx->r15 = S32(ctx->r22 << 2);
    // 0x15167120: subu        $t7, $t7, $s6
    ctx->r15 = SUB32(ctx->r15, ctx->r22);
    // 0x15167124: beq         $t6, $zero, L_1516719C
    if (ctx->r14 == 0) {
        // 0x15167128: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_1516719C;
    }
    // 0x15167128: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1516712C: addu        $t7, $t7, $s6
    ctx->r15 = ADD32(ctx->r15, ctx->r22);
    // 0x15167130: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x15167134: addu        $t8, $s7, $t7
    ctx->r24 = ADD32(ctx->r23, ctx->r15);
    // 0x15167138: sll         $t9, $s5, 2
    ctx->r25 = S32(ctx->r21 << 2);
    // 0x1516713C: lb          $t1, 0x0($s3)
    ctx->r9 = MEM_B(ctx->r19, 0X0);
    // 0x15167140: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x15167144: lw          $s0, 0x0($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X0);
    // 0x15167148: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x1516714C: sb          $t2, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r10;
    // 0x15167150: beql        $s0, $zero, L_15167194
    if (ctx->r16 == 0) {
        // 0x15167154: lb          $t8, 0x0($s3)
        ctx->r24 = MEM_B(ctx->r19, 0X0);
            goto L_15167194;
    }
    goto skip_0;
    // 0x15167154: lb          $t8, 0x0($s3)
    ctx->r24 = MEM_B(ctx->r19, 0X0);
    skip_0:
    // 0x15167158: lb          $t3, 0x0($s3)
    ctx->r11 = MEM_B(ctx->r19, 0X0);
    // 0x1516715C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x15167160: addu        $s1, $s4, $t4
    ctx->r17 = ADD32(ctx->r20, ctx->r12);
    // 0x15167164: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
L_15167168:
    // 0x15167168: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x1516716C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15167170: jalr        $t9
    // 0x15167174: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15167174: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    after_0:
    // 0x15167178: lb          $t6, 0x0($s3)
    ctx->r14 = MEM_B(ctx->r19, 0X0);
    // 0x1516717C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15167180: addu        $s1, $s4, $t7
    ctx->r17 = ADD32(ctx->r20, ctx->r15);
    // 0x15167184: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x15167188: bnel        $s0, $zero, L_15167168
    if (ctx->r16 != 0) {
        // 0x1516718C: lw          $t9, 0x0($s2)
        ctx->r25 = MEM_W(ctx->r18, 0X0);
            goto L_15167168;
    }
    goto skip_1;
    // 0x1516718C: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x15167190: lb          $t8, 0x0($s3)
    ctx->r24 = MEM_B(ctx->r19, 0X0);
L_15167194:
    // 0x15167194: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x15167198: sb          $t0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r8;
L_1516719C:
    // 0x1516719C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x151671A0: bne         $s5, $fp, L_15167118
    if (ctx->r21 != ctx->r30) {
        // 0x151671A4: addiu       $s2, $s2, 0x34
        ctx->r18 = ADD32(ctx->r18, 0X34);
            goto L_15167118;
    }
    // 0x151671A4: addiu       $s2, $s2, 0x34
    ctx->r18 = ADD32(ctx->r18, 0X34);
    // 0x151671A8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x151671AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151671B0: bne         $s6, $at, L_1516710C
    if (ctx->r22 != ctx->r1) {
        // 0x151671B4: nop
    
            goto L_1516710C;
    }
    // 0x151671B4: nop

    // 0x151671B8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151671BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151671C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x151671C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x151671C8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x151671CC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x151671D0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x151671D4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x151671D8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x151671DC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x151671E0: jr          $ra
    // 0x151671E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x151671E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_10010AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10010AA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10010AAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x10010AB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x10010AB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10010AB8: lw          $t6, 0x318($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X318);
    // 0x10010ABC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x10010AC0: beql        $t6, $zero, L_10010B1C
    if (ctx->r14 == 0) {
        // 0x10010AC4: lhu         $a0, 0x8C($s0)
        ctx->r4 = MEM_HU(ctx->r16, 0X8C);
            goto L_10010B1C;
    }
    goto skip_0;
    // 0x10010AC4: lhu         $a0, 0x8C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8C);
    skip_0:
    // 0x10010AC8: lhu         $a0, 0x8C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8C);
    // 0x10010ACC: beql        $a0, $zero, L_10010AF0
    if (ctx->r4 == 0) {
        // 0x10010AD0: lhu         $a0, 0x8E($s0)
        ctx->r4 = MEM_HU(ctx->r16, 0X8E);
            goto L_10010AF0;
    }
    goto skip_1;
    // 0x10010AD0: lhu         $a0, 0x8E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8E);
    skip_1:
    // 0x10010AD4: jal         0x1000F44C
    // 0x10010AD8: nop

    func_1000F44C(rdram, ctx);
        goto after_0;
    // 0x10010AD8: nop

    after_0:
    // 0x10010ADC: beql        $v0, $zero, L_10010AF0
    if (ctx->r2 == 0) {
        // 0x10010AE0: lhu         $a0, 0x8E($s0)
        ctx->r4 = MEM_HU(ctx->r16, 0X8E);
            goto L_10010AF0;
    }
    goto skip_2;
    // 0x10010AE0: lhu         $a0, 0x8E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8E);
    skip_2:
    // 0x10010AE4: jal         0x100111C8
    // 0x10010AE8: lhu         $a0, 0x8C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8C);
    func_100111C8(rdram, ctx);
        goto after_1;
    // 0x10010AE8: lhu         $a0, 0x8C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8C);
    after_1:
    // 0x10010AEC: lhu         $a0, 0x8E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8E);
L_10010AF0:
    // 0x10010AF0: beql        $a0, $zero, L_10010BD0
    if (ctx->r4 == 0) {
        // 0x10010AF4: sh          $zero, 0x8C($s0)
        MEM_H(0X8C, ctx->r16) = 0;
            goto L_10010BD0;
    }
    goto skip_3;
    // 0x10010AF4: sh          $zero, 0x8C($s0)
    MEM_H(0X8C, ctx->r16) = 0;
    skip_3:
    // 0x10010AF8: jal         0x1000F44C
    // 0x10010AFC: nop

    func_1000F44C(rdram, ctx);
        goto after_2;
    // 0x10010AFC: nop

    after_2:
    // 0x10010B00: beql        $v0, $zero, L_10010BD0
    if (ctx->r2 == 0) {
        // 0x10010B04: sh          $zero, 0x8C($s0)
        MEM_H(0X8C, ctx->r16) = 0;
            goto L_10010BD0;
    }
    goto skip_4;
    // 0x10010B04: sh          $zero, 0x8C($s0)
    MEM_H(0X8C, ctx->r16) = 0;
    skip_4:
    // 0x10010B08: jal         0x100111C8
    // 0x10010B0C: lhu         $a0, 0x8E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8E);
    func_100111C8(rdram, ctx);
        goto after_3;
    // 0x10010B0C: lhu         $a0, 0x8E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8E);
    after_3:
    // 0x10010B10: b           L_10010BD0
    // 0x10010B14: sh          $zero, 0x8C($s0)
    MEM_H(0X8C, ctx->r16) = 0;
        goto L_10010BD0;
    // 0x10010B14: sh          $zero, 0x8C($s0)
    MEM_H(0X8C, ctx->r16) = 0;
    // 0x10010B18: lhu         $a0, 0x8C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8C);
L_10010B1C:
    // 0x10010B1C: jal         0x1000FEF0
    // 0x10010B20: lbu         $a2, 0x3B($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X3B);
    func_1000FEF0(rdram, ctx);
        goto after_4;
    // 0x10010B20: lbu         $a2, 0x3B($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X3B);
    after_4:
    // 0x10010B24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x10010B28: beq         $v0, $at, L_10010B70
    if (ctx->r2 == ctx->r1) {
        // 0x10010B2C: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_10010B70;
    }
    // 0x10010B2C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x10010B30: jal         0x1000F44C
    // 0x10010B34: lhu         $a0, 0x8C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8C);
    func_1000F44C(rdram, ctx);
        goto after_5;
    // 0x10010B34: lhu         $a0, 0x8C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8C);
    after_5:
    // 0x10010B38: beql        $v0, $zero, L_10010B4C
    if (ctx->r2 == 0) {
        // 0x10010B3C: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_10010B4C;
    }
    goto skip_5;
    // 0x10010B3C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x10010B40: jal         0x100111C8
    // 0x10010B44: lhu         $a0, 0x8C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8C);
    func_100111C8(rdram, ctx);
        goto after_6;
    // 0x10010B44: lhu         $a0, 0x8C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8C);
    after_6:
    // 0x10010B48: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_10010B4C:
    // 0x10010B4C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x10010B50: addiu       $t9, $t9, 0x1FE0
    ctx->r25 = ADD32(ctx->r25, 0X1FE0);
    // 0x10010B54: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x10010B58: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x10010B5C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x10010B60: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x10010B64: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x10010B68: ori         $t1, $t0, 0x80
    ctx->r9 = ctx->r8 | 0X80;
    // 0x10010B6C: sw          $t1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r9;
L_10010B70:
    // 0x10010B70: lhu         $a0, 0x8E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8E);
    // 0x10010B74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x10010B78: jal         0x1000FEF0
    // 0x10010B7C: lbu         $a2, 0x3B($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X3B);
    func_1000FEF0(rdram, ctx);
        goto after_7;
    // 0x10010B7C: lbu         $a2, 0x3B($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X3B);
    after_7:
    // 0x10010B80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x10010B84: beq         $v0, $at, L_10010BCC
    if (ctx->r2 == ctx->r1) {
        // 0x10010B88: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_10010BCC;
    }
    // 0x10010B88: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x10010B8C: jal         0x1000F44C
    // 0x10010B90: lhu         $a0, 0x8E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8E);
    func_1000F44C(rdram, ctx);
        goto after_8;
    // 0x10010B90: lhu         $a0, 0x8E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8E);
    after_8:
    // 0x10010B94: beql        $v0, $zero, L_10010BA8
    if (ctx->r2 == 0) {
        // 0x10010B98: lw          $t2, 0x24($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X24);
            goto L_10010BA8;
    }
    goto skip_6;
    // 0x10010B98: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x10010B9C: jal         0x100111C8
    // 0x10010BA0: lhu         $a0, 0x8E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8E);
    func_100111C8(rdram, ctx);
        goto after_9;
    // 0x10010BA0: lhu         $a0, 0x8E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8E);
    after_9:
    // 0x10010BA4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
L_10010BA8:
    // 0x10010BA8: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x10010BAC: addiu       $t4, $t4, 0x1FE0
    ctx->r12 = ADD32(ctx->r12, 0X1FE0);
    // 0x10010BB0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x10010BB4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x10010BB8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x10010BBC: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x10010BC0: lw          $t5, 0x10($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X10);
    // 0x10010BC4: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x10010BC8: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
L_10010BCC:
    // 0x10010BCC: sh          $zero, 0x8C($s0)
    MEM_H(0X8C, ctx->r16) = 0;
L_10010BD0:
    // 0x10010BD0: sh          $zero, 0x8E($s0)
    MEM_H(0X8E, ctx->r16) = 0;
    // 0x10010BD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x10010BD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x10010BDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10010BE0: jr          $ra
    // 0x10010BE4: nop

    return;
    return;
    // 0x10010BE4: nop

;}
RECOMP_FUNC void func_150CB800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CB800: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x150CB804: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150CB808: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150CB80C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x150CB810: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x150CB814: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150CB818: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150CB81C: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x150CB820: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x150CB824: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CB828: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150CB82C: lwc1        $f6, 0x604($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X604);
    // 0x150CB830: addiu       $t6, $zero, 0x29E8
    ctx->r14 = ADD32(0, 0X29E8);
    // 0x150CB834: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x150CB838: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x150CB83C: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x150CB840: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x150CB844: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x150CB848: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x150CB84C: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    // 0x150CB850: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x150CB854: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x150CB858: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x150CB85C: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x150CB860: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x150CB864: sh          $t7, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r15;
    // 0x150CB868: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x150CB86C: jal         0x150ADA20
    // 0x150CB870: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150CB870: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x150CB874: jal         0x150ADA68
    // 0x150CB878: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150CB878: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x150CB87C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150CB880: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150CB884: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x150CB888: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x150CB88C: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150CB890: lh          $a0, 0xCA($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XCA);
    // 0x150CB894: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x150CB898: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x150CB89C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CB8A0: lwc1        $f16, 0x608($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X608);
    // 0x150CB8A4: mfhi        $t8
    ctx->r24 = hi;
    // 0x150CB8A8: addiu       $a1, $t8, -0x37
    ctx->r5 = ADD32(ctx->r24, -0X37);
    // 0x150CB8AC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150CB8B0: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x150CB8B4: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x150CB8B8: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    // 0x150CB8BC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150CB8C0: jal         0x15143794
    // 0x150CB8C4: nop

    func_15143794(rdram, ctx);
        goto after_2;
    // 0x150CB8C4: nop

    after_2:
    // 0x150CB8C8: jal         0x150ADA68
    // 0x150CB8CC: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150CB8CC: nop

    after_3:
    // 0x150CB8D0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150CB8D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CB8D8: lui         $at, 0xC315
    ctx->r1 = S32(0XC315 << 16);
    // 0x150CB8DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CB8E0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CB8E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CB8E8: lwc1        $f16, 0x60C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X60C);
    // 0x150CB8EC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CB8F0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150CB8F4: jal         0x150ADA68
    // 0x150CB8F8: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150CB8F8: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x150CB8FC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150CB900: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CB904: lui         $at, 0xC315
    ctx->r1 = S32(0XC315 << 16);
    // 0x150CB908: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CB90C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CB910: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CB914: lwc1        $f16, 0x610($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X610);
    // 0x150CB918: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CB91C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150CB920: jal         0x150ADA20
    // 0x150CB924: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150CB924: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x150CB928: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x150CB92C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CB930: mfhi        $t1
    ctx->r9 = hi;
    // 0x150CB934: addiu       $t2, $t1, 0x20
    ctx->r10 = ADD32(ctx->r9, 0X20);
    // 0x150CB938: jal         0x150ADA68
    // 0x150CB93C: sh          $t2, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r10;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150CB93C: sh          $t2, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r10;
    after_6:
    // 0x150CB940: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CB944: lwc1        $f4, 0x614($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X614);
    // 0x150CB948: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CB94C: lwc1        $f8, 0x618($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X618);
    // 0x150CB950: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CB954: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CB958: lwc1        $f16, 0x61C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X61C);
    // 0x150CB95C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CB960: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150CB964: jal         0x150ADA68
    // 0x150CB968: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150CB968: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x150CB96C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150CB970: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CB974: lui         $at, 0x42CA
    ctx->r1 = S32(0X42CA << 16);
    // 0x150CB978: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CB97C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CB980: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CB984: lwc1        $f16, 0x620($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X620);
    // 0x150CB988: sb          $zero, 0x80($sp)
    MEM_B(0X80, ctx->r29) = 0;
    // 0x150CB98C: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x150CB990: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CB994: mul.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150CB998: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x150CB99C: jal         0x150ADA20
    // 0x150CB9A0: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150CB9A0: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x150CB9A4: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x150CB9A8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CB9AC: lbu         $t9, 0xE3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XE3);
    // 0x150CB9B0: mfhi        $t3
    ctx->r11 = hi;
    // 0x150CB9B4: addiu       $t4, $t3, 0x9B
    ctx->r12 = ADD32(ctx->r11, 0X9B);
    // 0x150CB9B8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x150CB9BC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150CB9C0: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x150CB9C4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x150CB9C8: sb          $t4, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r12;
    // 0x150CB9CC: sb          $t5, 0x89($sp)
    MEM_B(0X89, ctx->r29) = ctx->r13;
    // 0x150CB9D0: sb          $zero, 0x8A($sp)
    MEM_B(0X8A, ctx->r29) = 0;
    // 0x150CB9D4: sb          $zero, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = 0;
    // 0x150CB9D8: sb          $zero, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = 0;
    // 0x150CB9DC: sb          $zero, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = 0;
    // 0x150CB9E0: sb          $zero, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = 0;
    // 0x150CB9E4: sb          $zero, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = 0;
    // 0x150CB9E8: sb          $zero, 0x90($sp)
    MEM_B(0X90, ctx->r29) = 0;
    // 0x150CB9EC: sb          $t6, 0x92($sp)
    MEM_B(0X92, ctx->r29) = ctx->r14;
    // 0x150CB9F0: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x150CB9F4: sb          $zero, 0x98($sp)
    MEM_B(0X98, ctx->r29) = 0;
    // 0x150CB9F8: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x150CB9FC: sh          $t8, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r24;
    // 0x150CBA00: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x150CBA04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150CBA08: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150CBA0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150CBA10: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150CBA14: jal         0x15132A4C
    // 0x150CBA18: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15132A4C(rdram, ctx);
        goto after_9;
    // 0x150CBA18: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_9:
    // 0x150CBA1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150CBA20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150CBA24: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x150CBA28: jr          $ra
    // 0x150CBA2C: nop

    return;
    return;
    // 0x150CBA2C: nop

;}
RECOMP_FUNC void func_150D26F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D26F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150D26F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D26F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150D26FC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x150D2700: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150D2704: lbu         $t7, 0x78($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X78);
    // 0x150D2708: addiu       $v1, $t6, 0x28
    ctx->r3 = ADD32(ctx->r14, 0X28);
    // 0x150D270C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x150D2710: beql        $t8, $zero, L_150D2780
    if (ctx->r24 == 0) {
        // 0x150D2714: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150D2780;
    }
    goto skip_0;
    // 0x150D2714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150D2718: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x150D271C: lw          $t0, -0x161C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X161C);
    // 0x150D2720: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x150D2724: bgez        $t1, L_150D277C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x150D2728: sw          $t1, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r9;
            goto L_150D277C;
    }
    // 0x150D2728: sw          $t1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r9;
    // 0x150D272C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x150D2730: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x150D2734: addiu       $a1, $v1, 0x10
    ctx->r5 = ADD32(ctx->r3, 0X10);
    // 0x150D2738: lbu         $a2, 0xC($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0XC);
    // 0x150D273C: lbu         $a3, 0x1($t3)
    ctx->r7 = MEM_BU(ctx->r11, 0X1);
    // 0x150D2740: jal         0x150D278C
    // 0x150D2744: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_150D278C(rdram, ctx);
        goto after_0;
    // 0x150D2744: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x150D2748: jal         0x150ADA20
    // 0x150D274C: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150D274C: nop

    after_1:
    // 0x150D2750: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x150D2754: lw          $t4, 0x8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X8);
    // 0x150D2758: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x150D275C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x150D2760: divu        $zero, $v0, $t5
    lo = S32(U32(ctx->r2) / U32(ctx->r13)); hi = S32(U32(ctx->r2) % U32(ctx->r13));
    // 0x150D2764: mfhi        $t7
    ctx->r15 = hi;
    // 0x150D2768: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x150D276C: bne         $t5, $zero, L_150D2778
    if (ctx->r13 != 0) {
        // 0x150D2770: nop
    
            goto L_150D2778;
    }
    // 0x150D2770: nop

    // 0x150D2774: break       7
    do_break(353183604);
L_150D2778:
    // 0x150D2778: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
L_150D277C:
    // 0x150D277C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150D2780:
    // 0x150D2780: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150D2784: jr          $ra
    // 0x150D2788: nop

    return;
    return;
    // 0x150D2788: nop

;}
RECOMP_FUNC void func_16001AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16001AD0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x16001AD4: beq         $a2, $zero, L_16001AF4
    if (ctx->r6 == 0) {
        // 0x16001AD8: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_16001AF4;
    }
    // 0x16001AD8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_16001ADC:
    // 0x16001ADC: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x16001AE0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x16001AE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x16001AE8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x16001AEC: bne         $a2, $zero, L_16001ADC
    if (ctx->r6 != 0) {
        // 0x16001AF0: sb          $t6, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r14;
            goto L_16001ADC;
    }
    // 0x16001AF0: sb          $t6, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r14;
L_16001AF4:
    // 0x16001AF4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x16001AF8: jr          $ra
    // 0x16001AFC: nop

    return;
    return;
    // 0x16001AFC: nop

;}
RECOMP_FUNC void func_150CF140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CF140: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x150CF144: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x150CF148: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x150CF14C: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x150CF150: sw          $fp, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r30;
    // 0x150CF154: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x150CF158: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x150CF15C: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x150CF160: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x150CF164: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x150CF168: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x150CF16C: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x150CF170: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x150CF174: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x150CF178: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x150CF17C: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x150CF180: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x150CF184: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x150CF188: lw          $s0, 0x28($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X28);
    // 0x150CF18C: addiu       $s2, $s5, 0x28
    ctx->r18 = ADD32(ctx->r21, 0X28);
    // 0x150CF190: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150CF194: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x150CF198: beq         $t6, $zero, L_150CF1B0
    if (ctx->r14 == 0) {
        // 0x150CF19C: nop
    
            goto L_150CF1B0;
    }
    // 0x150CF19C: nop

    // 0x150CF1A0: lbu         $t7, 0x4($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X4);
    // 0x150CF1A4: lbu         $t8, 0x3B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3B);
    // 0x150CF1A8: beql        $t7, $t8, L_150CF1BC
    if (ctx->r15 == ctx->r24) {
        // 0x150CF1AC: lw          $t0, 0x1D4($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X1D4);
            goto L_150CF1BC;
    }
    goto skip_0;
    // 0x150CF1AC: lw          $t0, 0x1D4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1D4);
    skip_0:
L_150CF1B0:
    // 0x150CF1B0: b           L_150CF43C
    // 0x150CF1B4: sh          $t9, 0xE($s5)
    MEM_H(0XE, ctx->r21) = ctx->r25;
        goto L_150CF43C;
    // 0x150CF1B4: sh          $t9, 0xE($s5)
    MEM_H(0XE, ctx->r21) = ctx->r25;
    // 0x150CF1B8: lw          $t0, 0x1D4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1D4);
L_150CF1BC:
    // 0x150CF1BC: beql        $t0, $zero, L_150CF440
    if (ctx->r8 == 0) {
        // 0x150CF1C0: lw          $ra, 0x9C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X9C);
            goto L_150CF440;
    }
    goto skip_1;
    // 0x150CF1C0: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    skip_1:
    // 0x150CF1C4: jal         0x150ADA68
    // 0x150CF1C8: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150CF1C8: nop

    after_0:
    // 0x150CF1CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CF1D0: lwc1        $f4, 0x840($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X840);
    // 0x150CF1D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CF1D8: lwc1        $f6, 0x844($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X844);
    // 0x150CF1DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150CF1E0: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150CF1E4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150CF1E8: lwc1        $f6, 0x8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X8);
    // 0x150CF1EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150CF1F0: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x150CF1F4: addiu       $a2, $sp, 0xD8
    ctx->r6 = ADD32(ctx->r29, 0XD8);
    // 0x150CF1F8: addiu       $a3, $sp, 0xD4
    ctx->r7 = ADD32(ctx->r29, 0XD4);
    // 0x150CF1FC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150CF200: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150CF204: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x150CF208: jal         0x1515C244
    // 0x150CF20C: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    func_1515C244(rdram, ctx);
        goto after_1;
    // 0x150CF20C: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    after_1:
    // 0x150CF210: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x150CF214: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x150CF218: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150CF21C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150CF220: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150CF224: addiu       $a0, $sp, 0xDC
    ctx->r4 = ADD32(ctx->r29, 0XDC);
    // 0x150CF228: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150CF22C: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x150CF230: jal         0x1504715C
    // 0x150CF234: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    func_1504715C(rdram, ctx);
        goto after_2;
    // 0x150CF234: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x150CF238: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150CF23C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150CF240: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x150CF244: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CF248: addiu       $fp, $zero, 0x15
    ctx->r30 = ADD32(0, 0X15);
    // 0x150CF24C: c.lt.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl < ctx->f4.fl;
    // 0x150CF250: addiu       $s7, $zero, 0x36
    ctx->r23 = ADD32(0, 0X36);
    // 0x150CF254: addiu       $s6, $zero, 0x4C
    ctx->r22 = ADD32(0, 0X4C);
    // 0x150CF258: addiu       $s4, $sp, 0xBC
    ctx->r20 = ADD32(ctx->r29, 0XBC);
    // 0x150CF25C: bc1f        L_150CF43C
    if (!c1cs) {
        // 0x150CF260: addiu       $s3, $sp, 0xC8
        ctx->r19 = ADD32(ctx->r29, 0XC8);
            goto L_150CF43C;
    }
    // 0x150CF260: addiu       $s3, $sp, 0xC8
    ctx->r19 = ADD32(ctx->r29, 0XC8);
    // 0x150CF264: lwc1        $f30, 0x848($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X848);
    // 0x150CF268: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CF26C: lwc1        $f28, 0x84C($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X84C);
    // 0x150CF270: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CF274: lwc1        $f26, 0x850($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X850);
    // 0x150CF278: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CF27C: lwc1        $f24, 0x854($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X854);
L_150CF280:
    // 0x150CF280: jal         0x150ADA20
    // 0x150CF284: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150CF284: nop

    after_3:
    // 0x150CF288: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150CF28C: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x150CF290: jal         0x150ADA20
    // 0x150CF294: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150CF294: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    after_4:
    // 0x150CF298: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x150CF29C: sll         $s1, $s0, 16
    ctx->r17 = S32(ctx->r16 << 16);
    // 0x150CF2A0: sra         $t2, $s1, 16
    ctx->r10 = S32(SIGNED(ctx->r17) >> 16);
    // 0x150CF2A4: mfhi        $a1
    ctx->r5 = hi;
    // 0x150CF2A8: addiu       $a1, $a1, -0x40
    ctx->r5 = ADD32(ctx->r5, -0X40);
    // 0x150CF2AC: sll         $a0, $t2, 16
    ctx->r4 = S32(ctx->r10 << 16);
    // 0x150CF2B0: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x150CF2B4: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x150CF2B8: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x150CF2BC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x150CF2C0: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x150CF2C4: bne         $s6, $zero, L_150CF2D0
    if (ctx->r22 != 0) {
        // 0x150CF2C8: nop
    
            goto L_150CF2D0;
    }
    // 0x150CF2C8: nop

    // 0x150CF2CC: break       7
    do_break(353170124);
L_150CF2D0:
    // 0x150CF2D0: lw          $a2, 0x100($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X100);
    // 0x150CF2D4: jal         0x15143794
    // 0x150CF2D8: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    func_15143794(rdram, ctx);
        goto after_5;
    // 0x150CF2D8: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_5:
    // 0x150CF2DC: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150CF2E0: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    // 0x150CF2E4: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x150CF2E8: lwc1        $f18, 0x108($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X108);
    // 0x150CF2EC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150CF2F0: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x150CF2F4: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x150CF2F8: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x150CF2FC: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x150CF300: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150CF304: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    // 0x150CF308: jal         0x150ADA20
    // 0x150CF30C: swc1        $f16, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150CF30C: swc1        $f16, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x150CF310: jal         0x150ADA68
    // 0x150CF314: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150CF314: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_7:
    // 0x150CF318: divu        $zero, $s0, $s7
    lo = S32(U32(ctx->r16) / U32(ctx->r23)); hi = S32(U32(ctx->r16) % U32(ctx->r23));
    // 0x150CF31C: mul.s       $f6, $f0, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150CF320: mfhi        $a1
    ctx->r5 = hi;
    // 0x150CF324: addiu       $a1, $a1, -0x38
    ctx->r5 = ADD32(ctx->r5, -0X38);
    // 0x150CF328: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x150CF32C: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x150CF330: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x150CF334: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150CF338: add.s       $f18, $f6, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f26.fl;
    // 0x150CF33C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x150CF340: bne         $s7, $zero, L_150CF34C
    if (ctx->r23 != 0) {
        // 0x150CF344: nop
    
            goto L_150CF34C;
    }
    // 0x150CF344: nop

    // 0x150CF348: break       7
    do_break(353170248);
L_150CF34C:
    // 0x150CF34C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150CF350: jal         0x15143794
    // 0x150CF354: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_15143794(rdram, ctx);
        goto after_8;
    // 0x150CF354: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_8:
    // 0x150CF358: jal         0x150ADA68
    // 0x150CF35C: nop

    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x150CF35C: nop

    after_9:
    // 0x150CF360: jal         0x150ADA20
    // 0x150CF364: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150CF364: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_10:
    // 0x150CF368: jal         0x150ADA20
    // 0x150CF36C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x150CF36C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_11:
    // 0x150CF370: jal         0x150ADA68
    // 0x150CF374: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x150CF374: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_12:
    // 0x150CF378: divu        $zero, $s1, $fp
    lo = S32(U32(ctx->r17) / U32(ctx->r30)); hi = S32(U32(ctx->r17) % U32(ctx->r30));
    // 0x150CF37C: addiu       $at, $zero, 0x9C
    ctx->r1 = ADD32(0, 0X9C);
    // 0x150CF380: mfhi        $t9
    ctx->r25 = hi;
    // 0x150CF384: mul.s       $f4, $f20, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x150CF388: addiu       $t0, $t9, 0x1E
    ctx->r8 = ADD32(ctx->r25, 0X1E);
    // 0x150CF38C: divu        $zero, $s0, $at
    lo = S32(U32(ctx->r16) / U32(ctx->r1)); hi = S32(U32(ctx->r16) % U32(ctx->r1));
    // 0x150CF390: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150CF394: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150CF398: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x150CF39C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150CF3A0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150CF3A4: mfhi        $t1
    ctx->r9 = hi;
    // 0x150CF3A8: addiu       $t2, $t1, 0x64
    ctx->r10 = ADD32(ctx->r9, 0X64);
    // 0x150CF3AC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150CF3B0: addiu       $t4, $sp, 0xDC
    ctx->r12 = ADD32(ctx->r29, 0XDC);
    // 0x150CF3B4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150CF3B8: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x150CF3BC: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x150CF3C0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x150CF3C4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x150CF3C8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150CF3CC: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x150CF3D0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150CF3D4: swc1        $f22, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f22.u32l;
    // 0x150CF3D8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x150CF3DC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150CF3E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150CF3E4: lbu         $t6, 0xC($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0XC);
    // 0x150CF3E8: add.s       $f8, $f4, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f30.fl;
    // 0x150CF3EC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150CF3F0: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x150CF3F4: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
    // 0x150CF3F8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x150CF3FC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x150CF400: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x150CF404: bne         $fp, $zero, L_150CF410
    if (ctx->r30 != 0) {
        // 0x150CF408: nop
    
            goto L_150CF410;
    }
    // 0x150CF408: nop

    // 0x150CF40C: break       7
    do_break(353170444);
L_150CF410:
    // 0x150CF410: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x150CF414: jal         0x151D9014
    // 0x150CF418: nop

    func_151D9014(rdram, ctx);
        goto after_13;
    // 0x150CF418: nop

    after_13:
    // 0x150CF41C: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x150CF420: sub.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f22.fl;
    // 0x150CF424: swc1        $f8, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f8.u32l;
    // 0x150CF428: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    // 0x150CF42C: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x150CF430: nop

    // 0x150CF434: bc1t        L_150CF280
    if (c1cs) {
        // 0x150CF438: nop
    
            goto L_150CF280;
    }
    // 0x150CF438: nop

L_150CF43C:
    // 0x150CF43C: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
L_150CF440:
    // 0x150CF440: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x150CF444: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x150CF448: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x150CF44C: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x150CF450: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x150CF454: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x150CF458: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x150CF45C: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x150CF460: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x150CF464: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x150CF468: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x150CF46C: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x150CF470: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x150CF474: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x150CF478: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x150CF47C: jr          $ra
    // 0x150CF480: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    return;
    // 0x150CF480: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_1504BA38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504BA38: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1504BA3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1504BA40: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x1504BA44: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x1504BA48: nop

    // 0x1504BA4C: bc1fl       L_1504BA60
    if (!c1cs) {
        // 0x1504BA50: lw          $t6, 0x184($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X184);
            goto L_1504BA60;
    }
    goto skip_0;
    // 0x1504BA50: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    skip_0:
    // 0x1504BA54: jr          $ra
    // 0x1504BA58: sh          $zero, 0xCE($a0)
    MEM_H(0XCE, ctx->r4) = 0;
    return;
    return;
    // 0x1504BA58: sh          $zero, 0xCE($a0)
    MEM_H(0XCE, ctx->r4) = 0;
    // 0x1504BA5C: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
L_1504BA60:
    // 0x1504BA60: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x1504BA64: addiu       $t9, $t9, -0x6EC0
    ctx->r25 = ADD32(ctx->r25, -0X6EC0);
    // 0x1504BA68: andi        $t7, $t6, 0x1F
    ctx->r15 = ctx->r14 & 0X1F;
    // 0x1504BA6C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1504BA70: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1504BA74: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x1504BA78: lb          $a1, 0x2($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X2);
    // 0x1504BA7C: beql        $a1, $zero, L_1504BA98
    if (ctx->r5 == 0) {
        // 0x1504BA80: lb          $v0, 0x1($v1)
        ctx->r2 = MEM_B(ctx->r3, 0X1);
            goto L_1504BA98;
    }
    goto skip_1;
    // 0x1504BA80: lb          $v0, 0x1($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X1);
    skip_1:
    // 0x1504BA84: lbu         $t0, 0xAA($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XAA);
    // 0x1504BA88: bnel        $t0, $zero, L_1504BA98
    if (ctx->r8 != 0) {
        // 0x1504BA8C: lb          $v0, 0x1($v1)
        ctx->r2 = MEM_B(ctx->r3, 0X1);
            goto L_1504BA98;
    }
    goto skip_2;
    // 0x1504BA8C: lb          $v0, 0x1($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X1);
    skip_2:
    // 0x1504BA90: sb          $a1, 0xAA($a0)
    MEM_B(0XAA, ctx->r4) = ctx->r5;
    // 0x1504BA94: lb          $v0, 0x1($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X1);
L_1504BA98:
    // 0x1504BA98: bnel        $v0, $zero, L_1504BAB0
    if (ctx->r2 != 0) {
        // 0x1504BA9C: mtc1        $v0, $f8
        ctx->f8.u32l = ctx->r2;
            goto L_1504BAB0;
    }
    goto skip_3;
    // 0x1504BA9C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    skip_3:
    // 0x1504BAA0: lb          $t1, 0x0($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X0);
    // 0x1504BAA4: jr          $ra
    // 0x1504BAA8: sh          $t1, 0xCE($a0)
    MEM_H(0XCE, ctx->r4) = ctx->r9;
    return;
    return;
    // 0x1504BAA8: sh          $t1, 0xCE($a0)
    MEM_H(0XCE, ctx->r4) = ctx->r9;
    // 0x1504BAAC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
L_1504BAB0:
    // 0x1504BAB0: lb          $t2, 0x0($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X0);
    // 0x1504BAB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504BAB8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1504BABC: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x1504BAC0: lwc1        $f16, -0x6E2C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6E2C);
    // 0x1504BAC4: lwc1        $f8, 0x3C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1504BAC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1504BACC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1504BAD0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1504BAD4: mul.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x1504BAD8: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1504BADC: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x1504BAE0: nop

    // 0x1504BAE4: sh          $t4, 0xCE($a0)
    MEM_H(0XCE, ctx->r4) = ctx->r12;
    // 0x1504BAE8: jr          $ra
    // 0x1504BAEC: nop

    return;
    return;
    // 0x1504BAEC: nop

;}
RECOMP_FUNC void func_151AB180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AB180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151AB184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AB188: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x151AB18C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151AB190: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151AB194: sw          $zero, 0x70($v0)
    MEM_W(0X70, ctx->r2) = 0;
    // 0x151AB198: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x151AB19C: sw          $zero, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = 0;
    // 0x151AB1A0: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x151AB1A4: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x151AB1A8: jal         0x1513F6C0
    // 0x151AB1AC: sw          $t7, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r15;
    func_1513F6C0(rdram, ctx);
        goto after_0;
    // 0x151AB1AC: sw          $t7, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r15;
    after_0:
    // 0x151AB1B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151AB1B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AB1B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151AB1BC: jr          $ra
    // 0x151AB1C0: nop

    return;
    return;
    // 0x151AB1C0: nop

;}
RECOMP_FUNC void func_150F0938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F0938: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150F093C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150F0940: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x150F0944: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150F0948: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x150F094C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x150F0950: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F0954: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F0958: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150F095C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150F0960: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150F0964: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x150F0968: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x150F096C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x150F0970: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x150F0974: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x150F0978: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150F097C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150F0980: addiu       $a2, $a2, 0x1674
    ctx->r6 = ADD32(ctx->r6, 0X1674);
    // 0x150F0984: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x150F0988: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x150F098C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x150F0990: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150F0994: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150F0998: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150F099C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150F09A0: jal         0x15160A58
    // 0x150F09A4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_15160A58(rdram, ctx);
        goto after_0;
    // 0x150F09A4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x150F09A8: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150F09AC: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x150F09B0: addiu       $t4, $zero, 0xD
    ctx->r12 = ADD32(0, 0XD);
    // 0x150F09B4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150F09B8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150F09BC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150F09C0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F09C4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150F09C8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150F09CC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150F09D0: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x150F09D4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x150F09D8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x150F09DC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x150F09E0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x150F09E4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x150F09E8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150F09EC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150F09F0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150F09F4: addiu       $a2, $a2, 0x1680
    ctx->r6 = ADD32(ctx->r6, 0X1680);
    // 0x150F09F8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x150F09FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x150F0A00: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x150F0A04: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150F0A08: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150F0A0C: jal         0x15160A58
    // 0x150F0A10: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_15160A58(rdram, ctx);
        goto after_1;
    // 0x150F0A10: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_1:
    // 0x150F0A14: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x150F0A18: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150F0A1C: jr          $ra
    // 0x150F0A20: nop

    return;
    return;
    // 0x150F0A20: nop

;}
RECOMP_FUNC void func_15005DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005DB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15005DB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15005DB8: lw          $a3, 0x134($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X134);
    // 0x15005DBC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x15005DC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15005DC4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15005DC8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x15005DCC: jal         0x15123934
    // 0x15005DD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_0;
    // 0x15005DD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x15005DD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15005DD8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x15005DDC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15005DE0: lw          $t7, 0x84($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X84);
    // 0x15005DE4: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x15005DE8: sh          $zero, 0x73C($a0)
    MEM_H(0X73C, ctx->r4) = 0;
    // 0x15005DEC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x15005DF0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x15005DF4: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x15005DF8: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x15005DFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15005E00: sw          $t8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r24;
    // 0x15005E04: sw          $t0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r8;
    // 0x15005E08: swc1        $f0, 0x348($a0)
    MEM_W(0X348, ctx->r4) = ctx->f0.u32l;
    // 0x15005E0C: swc1        $f0, 0x34C($a0)
    MEM_W(0X34C, ctx->r4) = ctx->f0.u32l;
    // 0x15005E10: swc1        $f4, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f4.u32l;
    // 0x15005E14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15005E18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15005E1C: jr          $ra
    // 0x15005E20: nop

    return;
    return;
    // 0x15005E20: nop

;}
RECOMP_FUNC void func_15094F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15094F70: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15094F74: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15094F78: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15094F7C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15094F80: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15094F84: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x15094F88: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x15094F8C: jal         0x15095060
    // 0x15094F90: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_15095060(rdram, ctx);
        goto after_0;
    // 0x15094F90: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x15094F94: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x15094F98: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x15094F9C: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x15094FA0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15094FA4: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x15094FA8: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x15094FAC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x15094FB0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x15094FB4: addiu       $a1, $a1, 0x2C90
    ctx->r5 = ADD32(ctx->r5, 0X2C90);
    // 0x15094FB8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x15094FBC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x15094FC0: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x15094FC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15094FC8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15094FCC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15094FD0: jal         0x150950D4
    // 0x15094FD4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_150950D4(rdram, ctx);
        goto after_1;
    // 0x15094FD4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_1:
    // 0x15094FD8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15094FDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15094FE0: jr          $ra
    // 0x15094FE4: nop

    return;
    return;
    // 0x15094FE4: nop

;}
RECOMP_FUNC void guNormalize(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151EFFF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151EFFF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151EFFF8: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151EFFFC: lwc1        $f14, 0x0($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151F0000: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x151F0004: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151F0008: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151F000C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151F0010: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x151F0014: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151F0018: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x151F001C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151F0020: jal         0x10026530
    // 0x151F0024: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x151F0024: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_0:
    // 0x151F0028: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151F002C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151F0030: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151F0034: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x151F0038: div.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151F003C: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151F0040: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x151F0044: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x151F0048: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x151F004C: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151F0050: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151F0054: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x151F0058: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x151F005C: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151F0060: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
    // 0x151F0064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F0068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151F006C: jr          $ra
    // 0x151F0070: nop

    return;
    return;
    // 0x151F0070: nop

;}
RECOMP_FUNC void func_15076D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15076D3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15076D40: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15076D44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15076D48: lwc1        $f0, -0x5EBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5EBC);
    // 0x15076D4C: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x15076D50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15076D54: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15076D58: lbu         $t7, 0x1891($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1891);
    // 0x15076D5C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15076D60: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15076D64: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x15076D68: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x15076D6C: lbu         $t2, 0x1893($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X1893);
    // 0x15076D70: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15076D74: or          $v1, $t6, $t8
    ctx->r3 = ctx->r14 | ctx->r24;
    // 0x15076D78: lbu         $t1, 0x1892($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1892);
    // 0x15076D7C: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x15076D80: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15076D84: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x15076D88: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x15076D8C: or          $a3, $t1, $t3
    ctx->r7 = ctx->r9 | ctx->r11;
    // 0x15076D90: sll         $t4, $a3, 16
    ctx->r12 = S32(ctx->r7 << 16);
    // 0x15076D94: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15076D98: sra         $a3, $t4, 16
    ctx->r7 = S32(SIGNED(ctx->r12) >> 16);
    // 0x15076D9C: mtc1        $a3, $f10
    ctx->f10.u32l = ctx->r7;
    // 0x15076DA0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x15076DA4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15076DA8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15076DAC: swc1        $f8, 0x14C($t7)
    MEM_W(0X14C, ctx->r15) = ctx->f8.u32l;
    // 0x15076DB0: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15076DB4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x15076DB8: swc1        $f18, 0x150($t6)
    MEM_W(0X150, ctx->r14) = ctx->f18.u32l;
    // 0x15076DBC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x15076DC0: lwc1        $f4, 0x14C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14C);
    // 0x15076DC4: swc1        $f4, 0x154($a0)
    MEM_W(0X154, ctx->r4) = ctx->f4.u32l;
    // 0x15076DC8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x15076DCC: lwc1        $f6, 0x150($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X150);
    // 0x15076DD0: swc1        $f6, 0x158($a0)
    MEM_W(0X158, ctx->r4) = ctx->f6.u32l;
    // 0x15076DD4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x15076DD8: lw          $a1, 0x14C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14C);
    // 0x15076DDC: jal         0x15062BDC
    // 0x15076DE0: lw          $a2, 0x150($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X150);
    func_15062BDC(rdram, ctx);
        goto after_0;
    // 0x15076DE0: lw          $a2, 0x150($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X150);
    after_0:
    // 0x15076DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15076DE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15076DEC: jr          $ra
    // 0x15076DF0: nop

    return;
    return;
    // 0x15076DF0: nop

;}
RECOMP_FUNC void func_150A7360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A7360: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150A7364: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x150A7368: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x150A736C: sw          $s2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r18;
    // 0x150A7370: sw          $s3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r19;
    // 0x150A7374: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x150A7378: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x150A737C: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x150A7380: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    // 0x150A7384: lbu         $s0, 0x0($a3)
    ctx->r16 = MEM_BU(ctx->r7, 0X0);
    // 0x150A7388: lbu         $s1, 0x1($a3)
    ctx->r17 = MEM_BU(ctx->r7, 0X1);
    // 0x150A738C: lbu         $s2, 0x2($a3)
    ctx->r18 = MEM_BU(ctx->r7, 0X2);
    // 0x150A7390: lbu         $s3, 0x3($a3)
    ctx->r19 = MEM_BU(ctx->r7, 0X3);
    // 0x150A7394: lbu         $s4, 0x4($a3)
    ctx->r20 = MEM_BU(ctx->r7, 0X4);
    // 0x150A7398: lbu         $s5, 0x5($a3)
    ctx->r21 = MEM_BU(ctx->r7, 0X5);
    // 0x150A739C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x150A73A0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x150A73A4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x150A73A8: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x150A73AC: addiu       $s6, $s6, -0x5DE0
    ctx->r22 = ADD32(ctx->r22, -0X5DE0);
    // 0x150A73B0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x150A73B4: lhu         $t5, 0x10($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0X10);
    // 0x150A73B8: sra         $t3, $t5, 4
    ctx->r11 = S32(SIGNED(ctx->r13) >> 4);
    // 0x150A73BC: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x150A73C0: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x150A73C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150A73C8: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x150A73CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150A73D0: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x150A73D4: addiu       $s7, $zero, 0x80
    ctx->r23 = ADD32(0, 0X80);
L_150A73D8:
    // 0x150A73D8: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x150A73DC: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x150A73E0: sub         $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x150A73E4: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x150A73E8: bc1f        L_150A74BC
    if (!c1cs) {
        // 0x150A73EC: andi        $t4, $t4, 0xFF
        ctx->r12 = ctx->r12 & 0XFF;
            goto L_150A74BC;
    }
    // 0x150A73EC: andi        $t4, $t4, 0xFF
    ctx->r12 = ctx->r12 & 0XFF;
    // 0x150A73F0: slti        $at, $t4, 0x41
    ctx->r1 = SIGNED(ctx->r12) < 0X41 ? 1 : 0;
    // 0x150A73F4: bne         $at, $zero, L_150A744C
    if (ctx->r1 != 0) {
        // 0x150A73F8: slti        $at, $t4, 0x81
        ctx->r1 = SIGNED(ctx->r12) < 0X81 ? 1 : 0;
            goto L_150A744C;
    }
    // 0x150A73F8: slti        $at, $t4, 0x81
    ctx->r1 = SIGNED(ctx->r12) < 0X81 ? 1 : 0;
    // 0x150A73FC: bne         $at, $zero, L_150A7434
    if (ctx->r1 != 0) {
        // 0x150A7400: slti        $at, $t4, 0xC1
        ctx->r1 = SIGNED(ctx->r12) < 0XC1 ? 1 : 0;
            goto L_150A7434;
    }
    // 0x150A7400: slti        $at, $t4, 0xC1
    ctx->r1 = SIGNED(ctx->r12) < 0XC1 ? 1 : 0;
    // 0x150A7404: bne         $at, $zero, L_150A741C
    if (ctx->r1 != 0) {
        // 0x150A7408: sub         $t6, $t9, $t4
        ctx->r14 = SUB32(ctx->r25, ctx->r12);
            goto L_150A741C;
    }
    // 0x150A7408: sub         $t6, $t9, $t4
    ctx->r14 = SUB32(ctx->r25, ctx->r12);
    // 0x150A740C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150A7410: add         $t6, $t6, $s6
    ctx->r14 = ADD32(ctx->r14, ctx->r22);
    // 0x150A7414: j           L_150A745C
    // 0x150A7418: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
        goto L_150A745C;
    // 0x150A7418: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
L_150A741C:
    // 0x150A741C: addi        $t6, $t4, -0x80
    ctx->r14 = ADD32(ctx->r12, -0X80);
    // 0x150A7420: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150A7424: add         $t6, $t6, $s6
    ctx->r14 = ADD32(ctx->r14, ctx->r22);
    // 0x150A7428: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A742C: j           L_150A745C
    // 0x150A7430: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
        goto L_150A745C;
    // 0x150A7430: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
L_150A7434:
    // 0x150A7434: sub         $t6, $s7, $t4
    ctx->r14 = SUB32(ctx->r23, ctx->r12);
    // 0x150A7438: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150A743C: add         $t6, $t6, $s6
    ctx->r14 = ADD32(ctx->r14, ctx->r22);
    // 0x150A7440: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A7444: j           L_150A745C
    // 0x150A7448: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
        goto L_150A745C;
    // 0x150A7448: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
L_150A744C:
    // 0x150A744C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x150A7450: add         $t6, $t6, $s6
    ctx->r14 = ADD32(ctx->r14, ctx->r22);
    // 0x150A7454: lw          $t6, 0x0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X0);
    // 0x150A7458: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
L_150A745C:
    // 0x150A745C: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x150A7460: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150A7464: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x150A7468: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x150A746C: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150A7470: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x150A7474: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x150A7478: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x150A747C: mult        $t7, $s1
    result = S64(S32(ctx->r15)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A7480: mflo        $t8
    ctx->r24 = lo;
    // 0x150A7484: sra         $t8, $t8, 10
    ctx->r24 = S32(SIGNED(ctx->r24) >> 10);
    // 0x150A7488: add         $t8, $t8, $s0
    ctx->r24 = ADD32(ctx->r24, ctx->r16);
    // 0x150A748C: sb          $t8, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r24;
    // 0x150A7490: mult        $t7, $s3
    result = S64(S32(ctx->r15)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A7494: mflo        $t8
    ctx->r24 = lo;
    // 0x150A7498: sra         $t8, $t8, 10
    ctx->r24 = S32(SIGNED(ctx->r24) >> 10);
    // 0x150A749C: add         $t8, $t8, $s2
    ctx->r24 = ADD32(ctx->r24, ctx->r18);
    // 0x150A74A0: sb          $t8, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r24;
    // 0x150A74A4: mult        $t7, $s5
    result = S64(S32(ctx->r15)) * S64(S32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A74A8: mflo        $t8
    ctx->r24 = lo;
    // 0x150A74AC: sra         $t8, $t8, 10
    ctx->r24 = S32(SIGNED(ctx->r24) >> 10);
    // 0x150A74B0: add         $t8, $t8, $s4
    ctx->r24 = ADD32(ctx->r24, ctx->r20);
    // 0x150A74B4: j           L_150A74CC
    // 0x150A74B8: sb          $t8, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r24;
        goto L_150A74CC;
    // 0x150A74B8: sb          $t8, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r24;
L_150A74BC:
    // 0x150A74BC: sb          $s0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r16;
    // 0x150A74C0: and         $t6, $t6, $zero
    ctx->r14 = ctx->r14 & 0;
    // 0x150A74C4: sb          $s2, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r18;
    // 0x150A74C8: sb          $s4, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r20;
L_150A74CC:
    // 0x150A74CC: lh          $t8, 0x2($t1)
    ctx->r24 = MEM_H(ctx->r9, 0X2);
    // 0x150A74D0: add         $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x150A74D4: sh          $t8, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r24;
    // 0x150A74D8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x150A74DC: bne         $a1, $a0, L_150A73D8
    if (ctx->r5 != ctx->r4) {
        // 0x150A74E0: addiu       $t1, $t1, 0x10
        ctx->r9 = ADD32(ctx->r9, 0X10);
            goto L_150A73D8;
    }
    // 0x150A74E0: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x150A74E4: lb          $t0, 0x12($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X12);
    // 0x150A74E8: add         $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x150A74EC: andi        $t0, $t0, 0xFFF
    ctx->r8 = ctx->r8 & 0XFFF;
    // 0x150A74F0: sh          $t0, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r8;
    // 0x150A74F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150A74F8: lw          $s0, -0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, -0X20);
    // 0x150A74FC: lw          $s1, -0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, -0X1C);
    // 0x150A7500: lw          $s2, -0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, -0X18);
    // 0x150A7504: lw          $s3, -0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, -0X14);
    // 0x150A7508: lw          $s4, -0x10($sp)
    ctx->r20 = MEM_W(ctx->r29, -0X10);
    // 0x150A750C: lw          $s5, -0xC($sp)
    ctx->r21 = MEM_W(ctx->r29, -0XC);
    // 0x150A7510: lw          $s6, -0x8($sp)
    ctx->r22 = MEM_W(ctx->r29, -0X8);
    // 0x150A7514: jr          $ra
    // 0x150A7518: lw          $s7, -0x4($sp)
    ctx->r23 = MEM_W(ctx->r29, -0X4);
    return;
    return;
    // 0x150A7518: lw          $s7, -0x4($sp)
    ctx->r23 = MEM_W(ctx->r29, -0X4);
;}
RECOMP_FUNC void func_150CC6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CC6B8: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x150CC6BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150CC6C0: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x150CC6C4: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x150CC6C8: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x150CC6CC: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x150CC6D0: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x150CC6D4: addiu       $t6, $zero, 0x29
    ctx->r14 = ADD32(0, 0X29);
    // 0x150CC6D8: addiu       $t7, $zero, 0xE03
    ctx->r15 = ADD32(0, 0XE03);
    // 0x150CC6DC: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x150CC6E0: sb          $t6, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r14;
    // 0x150CC6E4: sh          $t7, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r15;
    // 0x150CC6E8: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x150CC6EC: jal         0x150ADA20
    // 0x150CC6F0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150CC6F0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    after_0:
    // 0x150CC6F4: andi        $t9, $v0, 0xF
    ctx->r25 = ctx->r2 & 0XF;
    // 0x150CC6F8: addiu       $t0, $t9, 0x14
    ctx->r8 = ADD32(ctx->r25, 0X14);
    // 0x150CC6FC: addiu       $t1, $zero, 0xB0
    ctx->r9 = ADD32(0, 0XB0);
    // 0x150CC700: addiu       $t2, $zero, 0xA0
    ctx->r10 = ADD32(0, 0XA0);
    // 0x150CC704: addiu       $t3, $zero, 0x2A
    ctx->r11 = ADD32(0, 0X2A);
    // 0x150CC708: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x150CC70C: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x150CC710: addiu       $t6, $zero, 0x6A
    ctx->r14 = ADD32(0, 0X6A);
    // 0x150CC714: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150CC718: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
    // 0x150CC71C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x150CC720: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x150CC724: sb          $t1, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r9;
    // 0x150CC728: sb          $t2, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r10;
    // 0x150CC72C: sb          $t3, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r11;
    // 0x150CC730: sb          $t4, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r12;
    // 0x150CC734: sb          $t5, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r13;
    // 0x150CC738: sb          $t6, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r14;
    // 0x150CC73C: jal         0x150ADA20
    // 0x150CC740: sb          $t7, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150CC740: sb          $t7, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r15;
    after_1:
    // 0x150CC744: addiu       $at, $zero, 0x9C
    ctx->r1 = ADD32(0, 0X9C);
    // 0x150CC748: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CC74C: mfhi        $t8
    ctx->r24 = hi;
    // 0x150CC750: addiu       $t9, $t8, 0x64
    ctx->r25 = ADD32(ctx->r24, 0X64);
    // 0x150CC754: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150CC758: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x150CC75C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150CC760: sb          $t9, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r25;
    // 0x150CC764: sb          $t0, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r8;
    // 0x150CC768: sb          $t1, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r9;
    // 0x150CC76C: jal         0x150ADA68
    // 0x150CC770: sb          $t2, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r10;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150CC770: sb          $t2, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r10;
    after_2:
    // 0x150CC774: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CC778: lwc1        $f4, 0x6CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6CC);
    // 0x150CC77C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150CC780: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CC784: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CC788: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x150CC78C: lwc1        $f16, 0xB4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150CC790: lwc1        $f18, 0xB8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150CC794: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x150CC798: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x150CC79C: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x150CC7A0: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CC7A4: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x150CC7A8: jal         0x150ADA20
    // 0x150CC7AC: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150CC7AC: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x150CC7B0: jal         0x150ADA68
    // 0x150CC7B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150CC7B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_4:
    // 0x150CC7B8: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x150CC7BC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x150CC7C0: lh          $a0, 0xCA($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XCA);
    // 0x150CC7C4: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    // 0x150CC7C8: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x150CC7CC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150CC7D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CC7D4: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x150CC7D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CC7DC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CC7E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CC7E4: lwc1        $f16, 0x6D0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6D0);
    // 0x150CC7E8: mfhi        $t3
    ctx->r11 = hi;
    // 0x150CC7EC: addiu       $a1, $t3, -0x19
    ctx->r5 = ADD32(ctx->r11, -0X19);
    // 0x150CC7F0: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x150CC7F4: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x150CC7F8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CC7FC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150CC800: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150CC804: jal         0x15143794
    // 0x150CC808: nop

    func_15143794(rdram, ctx);
        goto after_5;
    // 0x150CC808: nop

    after_5:
    // 0x150CC80C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150CC810: addiu       $t6, $zero, 0xE05
    ctx->r14 = ADD32(0, 0XE05);
    // 0x150CC814: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x150CC818: jal         0x150ADA20
    // 0x150CC81C: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150CC81C: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x150CC820: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x150CC824: beq         $t7, $zero, L_150CC834
    if (ctx->r15 == 0) {
        // 0x150CC828: lw          $t8, 0x8C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X8C);
            goto L_150CC834;
    }
    // 0x150CC828: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x150CC82C: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x150CC830: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
L_150CC834:
    // 0x150CC834: jal         0x150ADA20
    // 0x150CC838: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150CC838: nop

    after_7:
    // 0x150CC83C: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x150CC840: beq         $t0, $zero, L_150CC854
    if (ctx->r8 == 0) {
        // 0x150CC844: addiu       $t3, $zero, 0x8
        ctx->r11 = ADD32(0, 0X8);
            goto L_150CC854;
    }
    // 0x150CC844: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x150CC848: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x150CC84C: ori         $t2, $t1, 0x80
    ctx->r10 = ctx->r9 | 0X80;
    // 0x150CC850: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
L_150CC854:
    // 0x150CC854: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CC858: lwc1        $f6, 0x6D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6D4);
    // 0x150CC85C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CC860: lwc1        $f8, 0x6D8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6D8);
    // 0x150CC864: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150CC868: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x150CC86C: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x150CC870: addiu       $t7, $zero, 0x1B
    ctx->r15 = ADD32(0, 0X1B);
    // 0x150CC874: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150CC878: sb          $t3, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r11;
    // 0x150CC87C: sb          $t4, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r12;
    // 0x150CC880: sh          $t5, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r13;
    // 0x150CC884: sh          $t6, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r14;
    // 0x150CC888: sh          $t7, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r15;
    // 0x150CC88C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150CC890: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x150CC894: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150CC898: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x150CC89C: lbu         $a3, 0xE3($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XE3);
    // 0x150CC8A0: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x150CC8A4: jal         0x15130374
    // 0x150CC8A8: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    func_15130374(rdram, ctx);
        goto after_8;
    // 0x150CC8A8: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x150CC8AC: beq         $v0, $zero, L_150CC8C0
    if (ctx->r2 == 0) {
        // 0x150CC8B0: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_150CC8C0;
    }
    // 0x150CC8B0: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x150CC8B4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x150CC8B8: jal         0x10022EC0
    // 0x150CC8BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x150CC8BC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_9:
L_150CC8C0:
    // 0x150CC8C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150CC8C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150CC8C8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x150CC8CC: jr          $ra
    // 0x150CC8D0: nop

    return;
    return;
    // 0x150CC8D0: nop

;}
RECOMP_FUNC void func_151102CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151102CC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x151102D0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x151102D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151102D8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x151102DC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x151102E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151102E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151102E8: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x151102EC: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x151102F0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x151102F4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x151102F8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x151102FC: jal         0x150A8050
    // 0x15110300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x15110300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x15110304: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x15110308: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x1511030C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x15110310: jal         0x150A8050
    // 0x15110314: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    func_150A8050(rdram, ctx);
        goto after_1;
    // 0x15110314: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    after_1:
    // 0x15110318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1511031C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x15110320: jal         0x150A7A48
    // 0x15110324: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_150A7A48(rdram, ctx);
        goto after_2;
    // 0x15110324: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x15110328: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x1511032C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x15110330: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x15110334: jal         0x150A8050
    // 0x15110338: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    func_150A8050(rdram, ctx);
        goto after_3;
    // 0x15110338: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    after_3:
    // 0x1511033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15110340: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x15110344: jal         0x150A7A48
    // 0x15110348: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_150A7A48(rdram, ctx);
        goto after_4;
    // 0x15110348: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x1511034C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15110350: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15110354: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15110358: jr          $ra
    // 0x1511035C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x1511035C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_150F887C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F887C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F8880: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150F8884: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150F8888: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150F888C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F8890: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150F8894: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x150F8898: bne         $a2, $at, L_150F88F8
    if (ctx->r6 != ctx->r1) {
        // 0x150F889C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_150F88F8;
    }
    // 0x150F889C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150F88A0: addiu       $a0, $a3, 0x28
    ctx->r4 = ADD32(ctx->r7, 0X28);
    // 0x150F88A4: lbu         $t8, 0x4($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X4);
    // 0x150F88A8: lbu         $t7, 0x4($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X4);
    // 0x150F88AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150F88B0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x150F88B4: bnel        $t7, $t8, L_150F8920
    if (ctx->r15 != ctx->r24) {
        // 0x150F88B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150F8920;
    }
    goto skip_0;
    // 0x150F88B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_150F88BC:
    // 0x150F88BC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x150F88C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150F88C4: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x150F88C8: lw          $t1, 0xC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC);
    // 0x150F88CC: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x150F88D0: slti        $at, $t2, 0x7
    ctx->r1 = SIGNED(ctx->r10) < 0X7 ? 1 : 0;
    // 0x150F88D4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x150F88D8: bne         $at, $zero, L_150F88BC
    if (ctx->r1 != 0) {
        // 0x150F88DC: sb          $v1, 0x6E($t1)
        MEM_B(0X6E, ctx->r9) = ctx->r3;
            goto L_150F88BC;
    }
    // 0x150F88DC: sb          $v1, 0x6E($t1)
    MEM_B(0X6E, ctx->r9) = ctx->r3;
    // 0x150F88E0: lw          $t3, 0x28($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X28);
    // 0x150F88E4: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x150F88E8: sb          $zero, 0x6E($t3)
    MEM_B(0X6E, ctx->r11) = 0;
    // 0x150F88EC: sb          $t4, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r12;
    // 0x150F88F0: b           L_150F8920
    // 0x150F88F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150F8920;
    // 0x150F88F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150F88F8:
    // 0x150F88F8: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x150F88FC: bnel        $v0, $at, L_150F8920
    if (ctx->r2 != ctx->r1) {
        // 0x150F8900: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150F8920;
    }
    goto skip_1;
    // 0x150F8900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150F8904: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x150F8908: lw          $t6, 0x28($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X28);
    // 0x150F890C: bnel        $t5, $t6, L_150F8920
    if (ctx->r13 != ctx->r14) {
        // 0x150F8910: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150F8920;
    }
    goto skip_2;
    // 0x150F8910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x150F8914: jal         0x150F892C
    // 0x150F8918: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_150F892C(rdram, ctx);
        goto after_0;
    // 0x150F8918: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x150F891C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150F8920:
    // 0x150F8920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F8924: jr          $ra
    // 0x150F8928: nop

    return;
    return;
    // 0x150F8928: nop

;}

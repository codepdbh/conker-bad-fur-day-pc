#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_1504BE2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504BE2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1504BE30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1504BE34: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1504BE38: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x1504BE3C: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
    // 0x1504BE40: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1504BE44: lbu         $t7, 0xB($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XB);
    // 0x1504BE48: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1504BE4C: bgez        $t7, L_1504BE60
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1504BE50: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1504BE60;
    }
    // 0x1504BE50: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1504BE54: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1504BE58: nop

    // 0x1504BE5C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1504BE60:
    // 0x1504BE60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1504BE64: lwc1        $f10, -0x6E28($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6E28);
    // 0x1504BE68: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x1504BE6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1504BE70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1504BE74: mul.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1504BE78: swc1        $f16, -0x3D4C($at)
    MEM_W(-0X3D4C, ctx->r1) = ctx->f16.u32l;
    // 0x1504BE7C: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x1504BE80: lbu         $v1, 0x16($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X16);
    // 0x1504BE84: beql        $v1, $zero, L_1504BEC0
    if (ctx->r3 == 0) {
        // 0x1504BE88: lhu         $t9, 0xE($v0)
        ctx->r25 = MEM_HU(ctx->r2, 0XE);
            goto L_1504BEC0;
    }
    goto skip_0;
    // 0x1504BE88: lhu         $t9, 0xE($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XE);
    skip_0:
    // 0x1504BE8C: bnel        $v1, $zero, L_1504BEC0
    if (ctx->r3 != 0) {
        // 0x1504BE90: lhu         $t9, 0xE($v0)
        ctx->r25 = MEM_HU(ctx->r2, 0XE);
            goto L_1504BEC0;
    }
    goto skip_1;
    // 0x1504BE90: lhu         $t9, 0xE($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XE);
    skip_1:
    // 0x1504BE94: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1504BE98: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1504BE9C: jal         0x1507EB2C
    // 0x1504BEA0: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_1507EB2C(rdram, ctx);
        goto after_0;
    // 0x1504BEA0: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x1504BEA4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1504BEA8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x1504BEAC: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1504BEB0: lw          $t8, 0x31C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X31C);
    // 0x1504BEB4: sh          $zero, 0x8($t8)
    MEM_H(0X8, ctx->r24) = 0;
    // 0x1504BEB8: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x1504BEBC: lhu         $t9, 0xE($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XE);
L_1504BEC0:
    // 0x1504BEC0: addiu       $t0, $zero, 0xA6
    ctx->r8 = ADD32(0, 0XA6);
    // 0x1504BEC4: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x1504BEC8: bnel        $t9, $zero, L_1504BEDC
    if (ctx->r25 != 0) {
        // 0x1504BECC: sb          $t1, 0x3C($v0)
        MEM_B(0X3C, ctx->r2) = ctx->r9;
            goto L_1504BEDC;
    }
    goto skip_2;
    // 0x1504BECC: sb          $t1, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = ctx->r9;
    skip_2:
    // 0x1504BED0: sh          $t0, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r8;
    // 0x1504BED4: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x1504BED8: sb          $t1, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = ctx->r9;
L_1504BEDC:
    // 0x1504BEDC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1504BEE0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1504BEE4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1504BEE8: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x1504BEEC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x1504BEF0: nop

    // 0x1504BEF4: bc1fl       L_1504BF28
    if (!c1cs) {
        // 0x1504BEF8: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_1504BF28;
    }
    goto skip_3;
    // 0x1504BEF8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    skip_3:
    // 0x1504BEFC: lhu         $t3, 0x84($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X84);
    // 0x1504BF00: addiu       $at, $zero, 0xAA
    ctx->r1 = ADD32(0, 0XAA);
    // 0x1504BF04: bnel        $t3, $at, L_1504BF28
    if (ctx->r11 != ctx->r1) {
        // 0x1504BF08: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_1504BF28;
    }
    goto skip_4;
    // 0x1504BF08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    skip_4:
    // 0x1504BF0C: lw          $t5, 0x31C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X31C);
    // 0x1504BF10: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1504BF14: sb          $t4, 0x3C($t5)
    MEM_B(0X3C, ctx->r13) = ctx->r12;
    // 0x1504BF18: lw          $t7, 0x31C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X31C);
    // 0x1504BF1C: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x1504BF20: sh          $t6, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r14;
    // 0x1504BF24: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
L_1504BF28:
    // 0x1504BF28: jal         0x150AD78C
    // 0x1504BF2C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_150AD78C(rdram, ctx);
        goto after_1;
    // 0x1504BF2C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_1:
    // 0x1504BF30: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1504BF34: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x1504BF38: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1504BF3C: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x1504BF40: lbu         $t8, 0xB($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XB);
    // 0x1504BF44: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x1504BF48: sb          $t9, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r25;
    // 0x1504BF4C: lw          $t0, 0x31C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X31C);
    // 0x1504BF50: lbu         $t1, 0x16($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X16);
    // 0x1504BF54: beql        $t1, $zero, L_1504BF68
    if (ctx->r9 == 0) {
        // 0x1504BF58: lhu         $t3, 0x84($a0)
        ctx->r11 = MEM_HU(ctx->r4, 0X84);
            goto L_1504BF68;
    }
    goto skip_5;
    // 0x1504BF58: lhu         $t3, 0x84($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X84);
    skip_5:
    // 0x1504BF5C: b           L_1504BF84
    // 0x1504BF60: sb          $t2, 0xAA($a0)
    MEM_B(0XAA, ctx->r4) = ctx->r10;
        goto L_1504BF84;
    // 0x1504BF60: sb          $t2, 0xAA($a0)
    MEM_B(0XAA, ctx->r4) = ctx->r10;
    // 0x1504BF64: lhu         $t3, 0x84($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X84);
L_1504BF68:
    // 0x1504BF68: addiu       $at, $zero, 0xA7
    ctx->r1 = ADD32(0, 0XA7);
    // 0x1504BF6C: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x1504BF70: bne         $t3, $at, L_1504BF80
    if (ctx->r11 != ctx->r1) {
        // 0x1504BF74: addiu       $t5, $zero, 0x20
        ctx->r13 = ADD32(0, 0X20);
            goto L_1504BF80;
    }
    // 0x1504BF74: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x1504BF78: b           L_1504BF84
    // 0x1504BF7C: sb          $t4, 0xAA($a0)
    MEM_B(0XAA, ctx->r4) = ctx->r12;
        goto L_1504BF84;
    // 0x1504BF7C: sb          $t4, 0xAA($a0)
    MEM_B(0XAA, ctx->r4) = ctx->r12;
L_1504BF80:
    // 0x1504BF80: sb          $t5, 0xAA($a0)
    MEM_B(0XAA, ctx->r4) = ctx->r13;
L_1504BF84:
    // 0x1504BF84: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1504BF88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1504BF8C: lwc1        $f8, 0x54($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X54);
    // 0x1504BF90: lhu         $v0, 0x84($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X84);
    // 0x1504BF94: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x1504BF98: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1504BF9C: beq         $v0, $at, L_1504BFB0
    if (ctx->r2 == ctx->r1) {
        // 0x1504BFA0: swc1        $f10, 0x54($a0)
        MEM_W(0X54, ctx->r4) = ctx->f10.u32l;
            goto L_1504BFB0;
    }
    // 0x1504BFA0: swc1        $f10, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f10.u32l;
    // 0x1504BFA4: addiu       $at, $zero, 0xE0
    ctx->r1 = ADD32(0, 0XE0);
    // 0x1504BFA8: bne         $v0, $at, L_1504BFC8
    if (ctx->r2 != ctx->r1) {
        // 0x1504BFAC: nop
    
            goto L_1504BFC8;
    }
    // 0x1504BFAC: nop

L_1504BFB0:
    // 0x1504BFB0: lw          $t6, -0x3D7C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D7C);
    // 0x1504BFB4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x1504BFB8: lb          $t7, 0x3($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X3);
    // 0x1504BFBC: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x1504BFC0: b           L_1504C03C
    // 0x1504BFC4: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
        goto L_1504C03C;
    // 0x1504BFC4: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
L_1504BFC8:
    // 0x1504BFC8: jal         0x150ADA20
    // 0x1504BFCC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1504BFCC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_2:
    // 0x1504BFD0: andi        $t0, $v0, 0x3F
    ctx->r8 = ctx->r2 & 0X3F;
    // 0x1504BFD4: bne         $t0, $zero, L_1504C000
    if (ctx->r8 != 0) {
        // 0x1504BFD8: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_1504C000;
    }
    // 0x1504BFD8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1504BFDC: jal         0x150ADA20
    // 0x1504BFE0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1504BFE0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_3:
    // 0x1504BFE4: addiu       $at, $zero, 0x61A8
    ctx->r1 = ADD32(0, 0X61A8);
    // 0x1504BFE8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1504BFEC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1504BFF0: mfhi        $t1
    ctx->r9 = hi;
    // 0x1504BFF4: addiu       $t2, $t1, -0x30D4
    ctx->r10 = ADD32(ctx->r9, -0X30D4);
    // 0x1504BFF8: lw          $t3, 0x31C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X31C);
    // 0x1504BFFC: sh          $t2, 0x14($t3)
    MEM_H(0X14, ctx->r11) = ctx->r10;
L_1504C000:
    // 0x1504C000: lw          $t4, 0x31C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C004: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1504C008: addiu       $v0, $v0, -0x3D4E
    ctx->r2 = ADD32(ctx->r2, -0X3D4E);
    // 0x1504C00C: lhu         $t5, 0x14($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X14);
    // 0x1504C010: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x1504C014: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C018: lbu         $t7, 0x16($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X16);
    // 0x1504C01C: beq         $t7, $zero, L_1504C03C
    if (ctx->r15 == 0) {
        // 0x1504C020: nop
    
            goto L_1504C03C;
    }
    // 0x1504C020: nop

    // 0x1504C024: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x1504C028: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1504C02C: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x1504C030: mflo        $t9
    ctx->r25 = lo;
    // 0x1504C034: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x1504C038: nop

L_1504C03C:
    // 0x1504C03C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1504C040: lbu         $t0, 0x35EA($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X35EA);
    // 0x1504C044: bnel        $t0, $zero, L_1504C06C
    if (ctx->r8 != 0) {
        // 0x1504C048: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1504C06C;
    }
    goto skip_6;
    // 0x1504C048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x1504C04C: lw          $t1, 0x31C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C050: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x1504C054: lbu         $t2, 0x16($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X16);
    // 0x1504C058: bnel        $t2, $zero, L_1504C06C
    if (ctx->r10 != 0) {
        // 0x1504C05C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1504C06C;
    }
    goto skip_7;
    // 0x1504C05C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_7:
    // 0x1504C060: sh          $t3, 0x282($a0)
    MEM_H(0X282, ctx->r4) = ctx->r11;
    // 0x1504C064: sb          $zero, 0x276($a0)
    MEM_B(0X276, ctx->r4) = 0;
    // 0x1504C068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1504C06C:
    // 0x1504C06C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1504C070: jr          $ra
    // 0x1504C074: nop

    return;
    return;
    // 0x1504C074: nop

;}
RECOMP_FUNC void func_150DBD70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DBD70: addiu       $sp, $sp, -0x180
    ctx->r29 = ADD32(ctx->r29, -0X180);
    // 0x150DBD74: sw          $a0, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->r4;
    // 0x150DBD78: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x150DBD7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150DBD80: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x150DBD84: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150DBD88: sltiu       $at, $a0, 0x6
    ctx->r1 = ctx->r4 < 0X6 ? 1 : 0;
    // 0x150DBD8C: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x150DBD90: sb          $zero, 0x88($sp)
    MEM_B(0X88, ctx->r29) = 0;
    // 0x150DBD94: sh          $zero, 0x172($sp)
    MEM_H(0X172, ctx->r29) = 0;
    // 0x150DBD98: sb          $zero, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = 0;
    // 0x150DBD9C: beq         $at, $zero, L_150DC4CC
    if (ctx->r1 == 0) {
        // 0x150DBDA0: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_150DC4CC;
    }
    // 0x150DBDA0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x150DBDA4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x150DBDA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBDAC: addu        $at, $at, $t7
    gpr jr_addend_150DBDB4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x150DBDB0: lw          $t7, 0xC40($at)
    ctx->r15 = ADD32(ctx->r1, 0XC40);
    // 0x150DBDB4: jr          $t7
    // 0x150DBDB8: nop

    switch (jr_addend_150DBDB4 >> 2) {
        case 0: goto L_150DBDBC; break;
        case 1: goto L_150DC0FC; break;
        case 2: goto L_150DC0FC; break;
        case 3: goto L_150DC0FC; break;
        case 4: goto L_150DC0FC; break;
        case 5: goto L_150DBDBC; break;
        default: switch_error(__func__, 0x150DBDB4, 0x800A0C40);
    }
    // 0x150DBDB8: nop

L_150DBDBC:
    // 0x150DBDBC: beq         $v1, $zero, L_150DBDD8
    if (ctx->r3 == 0) {
        // 0x150DBDC0: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_150DBDD8;
    }
    // 0x150DBDC0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x150DBDC4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150DBDC8: beq         $v1, $at, L_150DBE0C
    if (ctx->r3 == ctx->r1) {
        // 0x150DBDCC: nop
    
            goto L_150DBE0C;
    }
    // 0x150DBDCC: nop

    // 0x150DBDD0: b           L_150DBE40
    // 0x150DBDD4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
        goto L_150DBE40;
    // 0x150DBDD4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
L_150DBDD8:
    // 0x150DBDD8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150DBDDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150DBDE0: lui         $at, 0x42E6
    ctx->r1 = S32(0X42E6 << 16);
    // 0x150DBDE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150DBDE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBDEC: lwc1        $f8, 0xC58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XC58);
    // 0x150DBDF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBDF4: lwc1        $f10, 0xC5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XC5C);
    // 0x150DBDF8: swc1        $f4, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f4.u32l;
    // 0x150DBDFC: swc1        $f6, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f6.u32l;
    // 0x150DBE00: swc1        $f8, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f8.u32l;
    // 0x150DBE04: b           L_150DBE3C
    // 0x150DBE08: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
        goto L_150DBE3C;
    // 0x150DBE08: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
L_150DBE0C:
    // 0x150DBE0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBE10: lwc1        $f18, 0xC60($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XC60);
    // 0x150DBE14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBE18: lwc1        $f4, 0xC64($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XC64);
    // 0x150DBE1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBE20: lwc1        $f6, 0xC68($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC68);
    // 0x150DBE24: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x150DBE28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150DBE2C: swc1        $f18, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f18.u32l;
    // 0x150DBE30: swc1        $f4, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f4.u32l;
    // 0x150DBE34: swc1        $f6, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f6.u32l;
    // 0x150DBE38: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
L_150DBE3C:
    // 0x150DBE3C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
L_150DBE40:
    // 0x150DBE40: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150DBE44: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150DBE48: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150DBE4C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150DBE50: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150DBE54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBE58: lwc1        $f4, 0xC6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XC6C);
    // 0x150DBE5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBE60: lwc1        $f10, 0x164($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X164);
    // 0x150DBE64: lwc1        $f6, 0xC70($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC70);
    // 0x150DBE68: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x150DBE6C: lwc1        $f18, 0x16C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x150DBE70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150DBE74: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150DBE78: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x150DBE7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150DBE80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBE84: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x150DBE88: lwc1        $f18, 0xC74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XC74);
    // 0x150DBE8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBE90: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x150DBE94: lwc1        $f4, 0xC78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XC78);
    // 0x150DBE98: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150DBE9C: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x150DBEA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150DBEA4: lui         $at, 0xC339
    ctx->r1 = S32(0XC339 << 16);
    // 0x150DBEA8: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x150DBEAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150DBEB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBEB4: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x150DBEB8: lwc1        $f10, 0xC7C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XC7C);
    // 0x150DBEBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBEC0: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x150DBEC4: lwc1        $f18, 0xC80($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XC80);
    // 0x150DBEC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBECC: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x150DBED0: lwc1        $f4, 0xC84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XC84);
    // 0x150DBED4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBED8: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x150DBEDC: lwc1        $f6, 0xC88($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC88);
    // 0x150DBEE0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150DBEE4: swc1        $f8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f8.u32l;
    // 0x150DBEE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150DBEEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBEF0: swc1        $f10, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f10.u32l;
    // 0x150DBEF4: lwc1        $f10, 0xC8C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XC8C);
    // 0x150DBEF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBEFC: swc1        $f18, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f18.u32l;
    // 0x150DBF00: lwc1        $f18, 0xC90($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XC90);
    // 0x150DBF04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBF08: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x150DBF0C: lwc1        $f4, 0xC94($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XC94);
    // 0x150DBF10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DBF14: swc1        $f6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f6.u32l;
    // 0x150DBF18: lwc1        $f6, 0xC98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC98);
    // 0x150DBF1C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x150DBF20: swc1        $f8, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f8.u32l;
    // 0x150DBF24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150DBF28: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x150DBF2C: addiu       $t9, $zero, 0x85
    ctx->r25 = ADD32(0, 0X85);
    // 0x150DBF30: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x150DBF34: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150DBF38: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150DBF3C: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x150DBF40: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x150DBF44: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x150DBF48: lui         $at, 0x431A
    ctx->r1 = S32(0X431A << 16);
    // 0x150DBF4C: swc1        $f10, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f10.u32l;
    // 0x150DBF50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150DBF54: sb          $t8, 0x179($sp)
    MEM_B(0X179, ctx->r29) = ctx->r24;
    // 0x150DBF58: sh          $t9, 0x170($sp)
    MEM_H(0X170, ctx->r29) = ctx->r25;
    // 0x150DBF5C: sh          $t0, 0x160($sp)
    MEM_H(0X160, ctx->r29) = ctx->r8;
    // 0x150DBF60: sb          $t1, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r9;
    // 0x150DBF64: sb          $t2, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r10;
    // 0x150DBF68: sh          $t3, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r11;
    // 0x150DBF6C: sb          $t4, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r12;
    // 0x150DBF70: sh          $t5, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r13;
    // 0x150DBF74: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x150DBF78: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x150DBF7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150DBF80: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x150DBF84: addiu       $t0, $zero, 0x51
    ctx->r8 = ADD32(0, 0X51);
    // 0x150DBF88: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x150DBF8C: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x150DBF90: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150DBF94: addiu       $t4, $zero, 0x3F
    ctx->r12 = ADD32(0, 0X3F);
    // 0x150DBF98: addiu       $t5, $zero, 0x38
    ctx->r13 = ADD32(0, 0X38);
    // 0x150DBF9C: lui         $at, 0x432D
    ctx->r1 = S32(0X432D << 16);
    // 0x150DBFA0: swc1        $f18, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f18.u32l;
    // 0x150DBFA4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150DBFA8: sh          $t6, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r14;
    // 0x150DBFAC: sh          $t7, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r15;
    // 0x150DBFB0: sh          $t8, 0x172($sp)
    MEM_H(0X172, ctx->r29) = ctx->r24;
    // 0x150DBFB4: sb          $t9, 0x89($sp)
    MEM_B(0X89, ctx->r29) = ctx->r25;
    // 0x150DBFB8: sb          $t0, 0x8A($sp)
    MEM_B(0X8A, ctx->r29) = ctx->r8;
    // 0x150DBFBC: sw          $t1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r9;
    // 0x150DBFC0: sw          $t2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r10;
    // 0x150DBFC4: sb          $t3, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r11;
    // 0x150DBFC8: sh          $t4, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r12;
    // 0x150DBFCC: sh          $t5, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r13;
    // 0x150DBFD0: addiu       $t6, $zero, -0x80
    ctx->r14 = ADD32(0, -0X80);
    // 0x150DBFD4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x150DBFD8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x150DBFDC: addiu       $t9, $zero, 0x181
    ctx->r25 = ADD32(0, 0X181);
    // 0x150DBFE0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150DBFE4: addiu       $t1, $zero, -0x3F
    ctx->r9 = ADD32(0, -0X3F);
    // 0x150DBFE8: addiu       $t2, $zero, 0x2B
    ctx->r10 = ADD32(0, 0X2B);
    // 0x150DBFEC: addiu       $t3, $zero, 0x56
    ctx->r11 = ADD32(0, 0X56);
    // 0x150DBFF0: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x150DBFF4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x150DBFF8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x150DBFFC: swc1        $f4, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f4.u32l;
    // 0x150DC000: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150DC004: sh          $t6, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r14;
    // 0x150DC008: sh          $t7, 0xCC($sp)
    MEM_H(0XCC, ctx->r29) = ctx->r15;
    // 0x150DC00C: sh          $t8, 0xCE($sp)
    MEM_H(0XCE, ctx->r29) = ctx->r24;
    // 0x150DC010: sh          $t9, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = ctx->r25;
    // 0x150DC014: sb          $t0, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = ctx->r8;
    // 0x150DC018: sh          $t1, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r9;
    // 0x150DC01C: sh          $t2, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r10;
    // 0x150DC020: sh          $t3, 0x10C($sp)
    MEM_H(0X10C, ctx->r29) = ctx->r11;
    // 0x150DC024: sh          $t4, 0x10E($sp)
    MEM_H(0X10E, ctx->r29) = ctx->r12;
    // 0x150DC028: sh          $t5, 0x110($sp)
    MEM_H(0X110, ctx->r29) = ctx->r13;
    // 0x150DC02C: addiu       $v0, $v0, 0x3C8
    ctx->r2 = ADD32(ctx->r2, 0X3C8);
    // 0x150DC030: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x150DC034: addiu       $t7, $zero, -0x3E
    ctx->r15 = ADD32(0, -0X3E);
    // 0x150DC038: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x150DC03C: addiu       $t9, $zero, 0x38
    ctx->r25 = ADD32(0, 0X38);
    // 0x150DC040: addiu       $t0, $zero, -0x39
    ctx->r8 = ADD32(0, -0X39);
    // 0x150DC044: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
    // 0x150DC048: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x150DC04C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x150DC050: addiu       $t4, $zero, 0x135
    ctx->r12 = ADD32(0, 0X135);
    // 0x150DC054: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150DC058: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x150DC05C: sb          $zero, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = 0;
    // 0x150DC060: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x150DC064: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x150DC068: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x150DC06C: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x150DC070: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x150DC074: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x150DC078: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x150DC07C: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x150DC080: sh          $zero, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = 0;
    // 0x150DC084: sw          $v0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r2;
    // 0x150DC088: sw          $zero, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = 0;
    // 0x150DC08C: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x150DC090: sb          $t6, 0x112($sp)
    MEM_B(0X112, ctx->r29) = ctx->r14;
    // 0x150DC094: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    // 0x150DC098: sh          $t7, 0x120($sp)
    MEM_H(0X120, ctx->r29) = ctx->r15;
    // 0x150DC09C: sh          $t8, 0x122($sp)
    MEM_H(0X122, ctx->r29) = ctx->r24;
    // 0x150DC0A0: sh          $t9, 0x12C($sp)
    MEM_H(0X12C, ctx->r29) = ctx->r25;
    // 0x150DC0A4: sh          $t0, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r8;
    // 0x150DC0A8: sh          $t1, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r9;
    // 0x150DC0AC: sh          $t2, 0x132($sp)
    MEM_H(0X132, ctx->r29) = ctx->r10;
    // 0x150DC0B0: sh          $t3, 0x134($sp)
    MEM_H(0X134, ctx->r29) = ctx->r11;
    // 0x150DC0B4: sh          $t4, 0x136($sp)
    MEM_H(0X136, ctx->r29) = ctx->r12;
    // 0x150DC0B8: sw          $v0, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r2;
    // 0x150DC0BC: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    // 0x150DC0C0: sb          $t5, 0x144($sp)
    MEM_B(0X144, ctx->r29) = ctx->r13;
    // 0x150DC0C4: swc1        $f0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f0.u32l;
    // 0x150DC0C8: swc1        $f0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f0.u32l;
    // 0x150DC0CC: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x150DC0D0: swc1        $f2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f2.u32l;
    // 0x150DC0D4: swc1        $f12, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f12.u32l;
    // 0x150DC0D8: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    // 0x150DC0DC: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    // 0x150DC0E0: swc1        $f16, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f16.u32l;
    // 0x150DC0E4: swc1        $f6, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f6.u32l;
    // 0x150DC0E8: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
    // 0x150DC0EC: swc1        $f10, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f10.u32l;
    // 0x150DC0F0: swc1        $f18, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f18.u32l;
    // 0x150DC0F4: b           L_150DC4D4
    // 0x150DC0F8: swc1        $f4, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f4.u32l;
        goto L_150DC4D4;
    // 0x150DC0F8: swc1        $f4, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f4.u32l;
L_150DC0FC:
    // 0x150DC0FC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x150DC100: jal         0x15083E90
    // 0x150DC104: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    func_15083E90(rdram, ctx);
        goto after_0;
    // 0x150DC104: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_0:
    // 0x150DC108: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150DC10C: bne         $v0, $zero, L_150DC11C
    if (ctx->r2 != 0) {
        // 0x150DC110: lw          $v1, 0x38($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X38);
            goto L_150DC11C;
    }
    // 0x150DC110: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x150DC114: b           L_150DC548
    // 0x150DC118: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150DC548;
    // 0x150DC118: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150DC11C:
    // 0x150DC11C: lhu         $t6, 0x84($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X84);
    // 0x150DC120: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x150DC124: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x150DC128: bne         $t6, $at, L_150DC140
    if (ctx->r14 != ctx->r1) {
        // 0x150DC12C: addiu       $v0, $v0, 0x414
        ctx->r2 = ADD32(ctx->r2, 0X414);
            goto L_150DC140;
    }
    // 0x150DC12C: addiu       $v0, $v0, 0x414
    ctx->r2 = ADD32(ctx->r2, 0X414);
    // 0x150DC130: lui         $at, 0x43F9
    ctx->r1 = S32(0X43F9 << 16);
    // 0x150DC134: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150DC138: b           L_150DC150
    // 0x150DC13C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
        goto L_150DC150;
    // 0x150DC13C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
L_150DC140:
    // 0x150DC140: lui         $at, 0xC214
    ctx->r1 = S32(0XC214 << 16);
    // 0x150DC144: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150DC148: nop

    // 0x150DC14C: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
L_150DC150:
    // 0x150DC150: lui         $at, 0x4438
    ctx->r1 = S32(0X4438 << 16);
    // 0x150DC154: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150DC158: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150DC15C: beq         $v1, $at, L_150DC188
    if (ctx->r3 == ctx->r1) {
        // 0x150DC160: swc1        $f10, 0x168($sp)
        MEM_W(0X168, ctx->r29) = ctx->f10.u32l;
            goto L_150DC188;
    }
    // 0x150DC160: swc1        $f10, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f10.u32l;
    // 0x150DC164: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150DC168: beq         $v1, $at, L_150DC1A4
    if (ctx->r3 == ctx->r1) {
        // 0x150DC16C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_150DC1A4;
    }
    // 0x150DC16C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150DC170: beq         $v1, $at, L_150DC1B8
    if (ctx->r3 == ctx->r1) {
        // 0x150DC174: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_150DC1B8;
    }
    // 0x150DC174: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150DC178: beq         $v1, $at, L_150DC1D4
    if (ctx->r3 == ctx->r1) {
        // 0x150DC17C: nop
    
            goto L_150DC1D4;
    }
    // 0x150DC17C: nop

    // 0x150DC180: b           L_150DC1E8
    // 0x150DC184: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
        goto L_150DC1E8;
    // 0x150DC184: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
L_150DC188:
    // 0x150DC188: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC18C: lwc1        $f2, 0xC9C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0XC9C);
    // 0x150DC190: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC194: lwc1        $f12, 0xCA0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XCA0);
    // 0x150DC198: swc1        $f2, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f2.u32l;
    // 0x150DC19C: b           L_150DC1E4
    // 0x150DC1A0: swc1        $f12, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f12.u32l;
        goto L_150DC1E4;
    // 0x150DC1A0: swc1        $f12, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f12.u32l;
L_150DC1A4:
    // 0x150DC1A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC1A8: lwc1        $f12, 0xCA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XCA4);
    // 0x150DC1AC: swc1        $f12, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f12.u32l;
    // 0x150DC1B0: b           L_150DC1E4
    // 0x150DC1B4: swc1        $f12, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f12.u32l;
        goto L_150DC1E4;
    // 0x150DC1B4: swc1        $f12, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f12.u32l;
L_150DC1B8:
    // 0x150DC1B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC1BC: lwc1        $f2, 0xCA8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0XCA8);
    // 0x150DC1C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC1C4: lwc1        $f12, 0xCAC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0XCAC);
    // 0x150DC1C8: swc1        $f2, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f2.u32l;
    // 0x150DC1CC: b           L_150DC1E4
    // 0x150DC1D0: swc1        $f12, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f12.u32l;
        goto L_150DC1E4;
    // 0x150DC1D0: swc1        $f12, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f12.u32l;
L_150DC1D4:
    // 0x150DC1D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC1D8: lwc1        $f2, 0xCB0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0XCB0);
    // 0x150DC1DC: swc1        $f2, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f2.u32l;
    // 0x150DC1E0: swc1        $f2, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f2.u32l;
L_150DC1E4:
    // 0x150DC1E4: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
L_150DC1E8:
    // 0x150DC1E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150DC1EC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150DC1F0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150DC1F4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150DC1F8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150DC1FC: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150DC200: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150DC204: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x150DC208: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150DC20C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC210: lwc1        $f18, 0x164($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X164);
    // 0x150DC214: lwc1        $f8, 0xCB4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XCB4);
    // 0x150DC218: lui         $at, 0x4304
    ctx->r1 = S32(0X4304 << 16);
    // 0x150DC21C: lwc1        $f4, 0x16C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x150DC220: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150DC224: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC228: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x150DC22C: lwc1        $f18, 0xCB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XCB8);
    // 0x150DC230: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC234: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x150DC238: lwc1        $f4, 0xCBC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XCBC);
    // 0x150DC23C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC240: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x150DC244: lwc1        $f6, 0xCC0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCC0);
    // 0x150DC248: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC24C: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x150DC250: lwc1        $f8, 0xCC4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XCC4);
    // 0x150DC254: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC258: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x150DC25C: lwc1        $f10, 0xCC8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XCC8);
    // 0x150DC260: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC264: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x150DC268: lwc1        $f18, 0xCCC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XCCC);
    // 0x150DC26C: lui         $at, 0xC24C
    ctx->r1 = S32(0XC24C << 16);
    // 0x150DC270: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x150DC274: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150DC278: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC27C: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
    // 0x150DC280: lwc1        $f6, 0xCD0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCD0);
    // 0x150DC284: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC288: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x150DC28C: lwc1        $f8, 0xCD4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XCD4);
    // 0x150DC290: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC294: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x150DC298: lwc1        $f10, 0xCD8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XCD8);
    // 0x150DC29C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150DC2A0: swc1        $f18, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f18.u32l;
    // 0x150DC2A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150DC2A8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x150DC2AC: swc1        $f4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f4.u32l;
    // 0x150DC2B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150DC2B4: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x150DC2B8: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x150DC2BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150DC2C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC2C4: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x150DC2C8: lwc1        $f8, 0xCDC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XCDC);
    // 0x150DC2CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC2D0: swc1        $f10, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f10.u32l;
    // 0x150DC2D4: lwc1        $f10, 0xCE0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XCE0);
    // 0x150DC2D8: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x150DC2DC: sb          $t7, 0x179($sp)
    MEM_B(0X179, ctx->r29) = ctx->r15;
    // 0x150DC2E0: lui         $at, 0x4303
    ctx->r1 = S32(0X4303 << 16);
    // 0x150DC2E4: swc1        $f18, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f18.u32l;
    // 0x150DC2E8: lhu         $t7, 0x172($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X172);
    // 0x150DC2EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150DC2F0: addiu       $t8, $zero, 0xA0
    ctx->r24 = ADD32(0, 0XA0);
    // 0x150DC2F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC2F8: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    // 0x150DC2FC: lwc1        $f4, 0xCE4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XCE4);
    // 0x150DC300: sh          $t8, 0x170($sp)
    MEM_H(0X170, ctx->r29) = ctx->r24;
    // 0x150DC304: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC308: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    // 0x150DC30C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x150DC310: lwc1        $f6, 0xCE8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XCE8);
    // 0x150DC314: addiu       $t9, $zero, 0x6E
    ctx->r25 = ADD32(0, 0X6E);
    // 0x150DC318: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150DC31C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150DC320: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x150DC324: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150DC328: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x150DC32C: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x150DC330: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x150DC334: sh          $t9, 0x160($sp)
    MEM_H(0X160, ctx->r29) = ctx->r25;
    // 0x150DC338: sb          $t0, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r8;
    // 0x150DC33C: sb          $t1, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r9;
    // 0x150DC340: sh          $t2, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r10;
    // 0x150DC344: sb          $t3, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r11;
    // 0x150DC348: sh          $t4, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r12;
    // 0x150DC34C: sh          $t5, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r13;
    // 0x150DC350: sh          $t6, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r14;
    // 0x150DC354: sh          $t8, 0x172($sp)
    MEM_H(0X172, ctx->r29) = ctx->r24;
    // 0x150DC358: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150DC35C: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    // 0x150DC360: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150DC364: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x150DC368: addiu       $t0, $zero, 0x51
    ctx->r8 = ADD32(0, 0X51);
    // 0x150DC36C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x150DC370: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x150DC374: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150DC378: addiu       $t4, $zero, 0x24
    ctx->r12 = ADD32(0, 0X24);
    // 0x150DC37C: addiu       $t5, $zero, 0x1A
    ctx->r13 = ADD32(0, 0X1A);
    // 0x150DC380: addiu       $t6, $zero, 0x258
    ctx->r14 = ADD32(0, 0X258);
    // 0x150DC384: addiu       $t7, $zero, -0x48
    ctx->r15 = ADD32(0, -0X48);
    // 0x150DC388: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x150DC38C: sb          $t9, 0x89($sp)
    MEM_B(0X89, ctx->r29) = ctx->r25;
    // 0x150DC390: sb          $t0, 0x8A($sp)
    MEM_B(0X8A, ctx->r29) = ctx->r8;
    // 0x150DC394: sw          $t1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r9;
    // 0x150DC398: sw          $t2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r10;
    // 0x150DC39C: sb          $t3, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r11;
    // 0x150DC3A0: sh          $t4, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r12;
    // 0x150DC3A4: sh          $t5, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r13;
    // 0x150DC3A8: sh          $t6, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r14;
    // 0x150DC3AC: sh          $t7, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r15;
    // 0x150DC3B0: sh          $t8, 0xCC($sp)
    MEM_H(0XCC, ctx->r29) = ctx->r24;
    // 0x150DC3B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DC3B8: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    // 0x150DC3BC: lwc1        $f10, 0xCEC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XCEC);
    // 0x150DC3C0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x150DC3C4: addiu       $t0, $zero, 0x514
    ctx->r8 = ADD32(0, 0X514);
    // 0x150DC3C8: addiu       $t1, $zero, 0xAB
    ctx->r9 = ADD32(0, 0XAB);
    // 0x150DC3CC: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x150DC3D0: addiu       $t3, $zero, -0x3A
    ctx->r11 = ADD32(0, -0X3A);
    // 0x150DC3D4: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x150DC3D8: addiu       $t5, $zero, 0x46
    ctx->r13 = ADD32(0, 0X46);
    // 0x150DC3DC: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x150DC3E0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x150DC3E4: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x150DC3E8: sh          $t9, 0xCE($sp)
    MEM_H(0XCE, ctx->r29) = ctx->r25;
    // 0x150DC3EC: sh          $t0, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = ctx->r8;
    // 0x150DC3F0: sw          $t1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r9;
    // 0x150DC3F4: sb          $t2, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = ctx->r10;
    // 0x150DC3F8: sh          $t3, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r11;
    // 0x150DC3FC: sh          $t4, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r12;
    // 0x150DC400: sh          $t5, 0x10C($sp)
    MEM_H(0X10C, ctx->r29) = ctx->r13;
    // 0x150DC404: sh          $t6, 0x10E($sp)
    MEM_H(0X10E, ctx->r29) = ctx->r14;
    // 0x150DC408: sh          $t7, 0x110($sp)
    MEM_H(0X110, ctx->r29) = ctx->r15;
    // 0x150DC40C: sb          $t8, 0x112($sp)
    MEM_B(0X112, ctx->r29) = ctx->r24;
    // 0x150DC410: addiu       $t9, $zero, -0x38
    ctx->r25 = ADD32(0, -0X38);
    // 0x150DC414: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x150DC418: addiu       $t1, $zero, 0x258
    ctx->r9 = ADD32(0, 0X258);
    // 0x150DC41C: addiu       $t2, $zero, -0xDF
    ctx->r10 = ADD32(0, -0XDF);
    // 0x150DC420: addiu       $t3, $zero, 0x40
    ctx->r11 = ADD32(0, 0X40);
    // 0x150DC424: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x150DC428: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x150DC42C: addiu       $t6, $zero, 0x514
    ctx->r14 = ADD32(0, 0X514);
    // 0x150DC430: addiu       $t7, $zero, 0xAB
    ctx->r15 = ADD32(0, 0XAB);
    // 0x150DC434: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x150DC438: sb          $zero, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = 0;
    // 0x150DC43C: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x150DC440: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x150DC444: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x150DC448: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x150DC44C: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x150DC450: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x150DC454: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x150DC458: sw          $v0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r2;
    // 0x150DC45C: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x150DC460: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    // 0x150DC464: sh          $t9, 0x120($sp)
    MEM_H(0X120, ctx->r29) = ctx->r25;
    // 0x150DC468: sh          $t0, 0x122($sp)
    MEM_H(0X122, ctx->r29) = ctx->r8;
    // 0x150DC46C: sh          $t1, 0x12C($sp)
    MEM_H(0X12C, ctx->r29) = ctx->r9;
    // 0x150DC470: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x150DC474: sh          $t3, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r11;
    // 0x150DC478: sh          $t4, 0x132($sp)
    MEM_H(0X132, ctx->r29) = ctx->r12;
    // 0x150DC47C: sh          $t5, 0x134($sp)
    MEM_H(0X134, ctx->r29) = ctx->r13;
    // 0x150DC480: sh          $t6, 0x136($sp)
    MEM_H(0X136, ctx->r29) = ctx->r14;
    // 0x150DC484: sw          $v0, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r2;
    // 0x150DC488: sw          $t7, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r15;
    // 0x150DC48C: sb          $t8, 0x144($sp)
    MEM_B(0X144, ctx->r29) = ctx->r24;
    // 0x150DC490: swc1        $f0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f0.u32l;
    // 0x150DC494: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x150DC498: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x150DC49C: swc1        $f12, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f12.u32l;
    // 0x150DC4A0: swc1        $f12, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f12.u32l;
    // 0x150DC4A4: swc1        $f14, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f14.u32l;
    // 0x150DC4A8: swc1        $f14, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f14.u32l;
    // 0x150DC4AC: swc1        $f16, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f16.u32l;
    // 0x150DC4B0: swc1        $f18, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f18.u32l;
    // 0x150DC4B4: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
    // 0x150DC4B8: swc1        $f6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f6.u32l;
    // 0x150DC4BC: swc1        $f8, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f8.u32l;
    // 0x150DC4C0: swc1        $f10, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f10.u32l;
    // 0x150DC4C4: b           L_150DC4D8
    // 0x150DC4C8: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
        goto L_150DC4D8;
    // 0x150DC4C8: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
L_150DC4CC:
    // 0x150DC4CC: b           L_150DC548
    // 0x150DC4D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150DC548;
    // 0x150DC4D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150DC4D4:
    // 0x150DC4D4: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
L_150DC4D8:
    // 0x150DC4D8: addiu       $t0, $zero, 0x1B8
    ctx->r8 = ADD32(0, 0X1B8);
    // 0x150DC4DC: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x150DC4E0: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x150DC4E4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150DC4E8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150DC4EC: sw          $t9, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r25;
    // 0x150DC4F0: sh          $t0, 0x15E($sp)
    MEM_H(0X15E, ctx->r29) = ctx->r8;
    // 0x150DC4F4: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x150DC4F8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x150DC4FC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150DC500: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150DC504: addiu       $a0, $sp, 0x164
    ctx->r4 = ADD32(ctx->r29, 0X164);
    // 0x150DC508: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    // 0x150DC50C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x150DC510: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x150DC514: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150DC518: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150DC51C: jal         0x15147A80
    // 0x150DC520: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_15147A80(rdram, ctx);
        goto after_1;
    // 0x150DC520: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_1:
    // 0x150DC524: beq         $v0, $zero, L_150DC544
    if (ctx->r2 == 0) {
        // 0x150DC528: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_150DC544;
    }
    // 0x150DC528: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150DC52C: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x150DC530: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x150DC534: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x150DC538: jal         0x10022EC0
    // 0x150DC53C: addiu       $a2, $zero, 0x11C
    ctx->r6 = ADD32(0, 0X11C);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x150DC53C: addiu       $a2, $zero, 0x11C
    ctx->r6 = ADD32(0, 0X11C);
    after_2:
    // 0x150DC540: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
L_150DC544:
    // 0x150DC544: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_150DC548:
    // 0x150DC548: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150DC54C: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
    // 0x150DC550: jr          $ra
    // 0x150DC554: nop

    return;
    return;
    // 0x150DC554: nop

;}
RECOMP_FUNC void func_1506B078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506B07C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506B080: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506B084: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506B088: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x1506B08C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506B090: lwc1        $f4, 0x118($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X118);
    // 0x1506B094: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1506B098: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506B09C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1506B0A0: lwc1        $f18, -0x63CC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X63CC);
    // 0x1506B0A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1506B0A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1506B0AC: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x1506B0B0: addiu       $a0, $zero, 0xD1
    ctx->r4 = ADD32(0, 0XD1);
    // 0x1506B0B4: mul.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1506B0B8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x1506B0BC: nop

    // 0x1506B0C0: bc1fl       L_1506B0DC
    if (!c1cs) {
        // 0x1506B0C4: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_1506B0DC;
    }
    goto skip_0;
    // 0x1506B0C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_0:
    // 0x1506B0C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1506B0CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1506B0D0: b           L_1506B0E8
    // 0x1506B0D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
        goto L_1506B0E8;
    // 0x1506B0D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x1506B0D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_1506B0DC:
    // 0x1506B0DC: nop

    // 0x1506B0E0: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x1506B0E4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_1506B0E8:
    // 0x1506B0E8: jal         0x1506B100
    // 0x1506B0EC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_1506B100(rdram, ctx);
        goto after_0;
    // 0x1506B0EC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
    // 0x1506B0F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506B0F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506B0F8: jr          $ra
    // 0x1506B0FC: nop

    return;
    return;
    // 0x1506B0FC: nop

;}
RECOMP_FUNC void func_15022398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15022398: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1502239C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150223A0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x150223A4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x150223A8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150223AC: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x150223B0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x150223B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150223B8: lw          $t7, 0x35C8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X35C8);
    // 0x150223BC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x150223C0: addiu       $t1, $t1, 0x35F0
    ctx->r9 = ADD32(ctx->r9, 0X35F0);
    // 0x150223C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x150223C8: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x150223CC: addu        $a2, $t6, $t1
    ctx->r6 = ADD32(ctx->r14, ctx->r9);
    // 0x150223D0: beql        $t0, $zero, L_1502251C
    if (ctx->r8 == 0) {
        // 0x150223D4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1502251C;
    }
    goto skip_0;
    // 0x150223D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x150223D8: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x150223DC: sll         $t3, $a0, 3
    ctx->r11 = S32(ctx->r4 << 3);
    // 0x150223E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150223E4: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
    // 0x150223E8: lhu         $t4, 0x0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X0);
    // 0x150223EC: bnel        $t4, $at, L_1502251C
    if (ctx->r12 != ctx->r1) {
        // 0x150223F0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1502251C;
    }
    goto skip_1;
    // 0x150223F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x150223F4: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x150223F8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x150223FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15022400: jal         0x15083E0C
    // 0x15022404: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_15083E0C(rdram, ctx);
        goto after_0;
    // 0x15022404: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x15022408: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1502240C: beq         $v0, $at, L_15022518
    if (ctx->r2 == ctx->r1) {
        // 0x15022410: lw          $a2, 0x2C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X2C);
            goto L_15022518;
    }
    // 0x15022410: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x15022414: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15022418: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x1502241C: jal         0x1505EEF4
    // 0x15022420: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_1505EEF4(rdram, ctx);
        goto after_1;
    // 0x15022420: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_1:
    // 0x15022424: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x15022428: beq         $v0, $zero, L_1502247C
    if (ctx->r2 == 0) {
        // 0x1502242C: lw          $a2, 0x2C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X2C);
            goto L_1502247C;
    }
    // 0x1502242C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x15022430: lbu         $t5, 0x5($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X5);
    // 0x15022434: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15022438: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1502243C: bne         $t5, $at, L_15022458
    if (ctx->r13 != ctx->r1) {
        // 0x15022440: addiu       $t6, $t6, 0x35F0
        ctx->r14 = ADD32(ctx->r14, 0X35F0);
            goto L_15022458;
    }
    // 0x15022440: addiu       $t6, $t6, 0x35F0
    ctx->r14 = ADD32(ctx->r14, 0X35F0);
    // 0x15022444: beq         $a2, $t6, L_15022454
    if (ctx->r6 == ctx->r14) {
        // 0x15022448: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_15022454;
    }
    // 0x15022448: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x1502244C: b           L_15022458
    // 0x15022450: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
        goto L_15022458;
    // 0x15022450: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
L_15022454:
    // 0x15022454: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
L_15022458:
    // 0x15022458: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x1502245C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15022460: bnel        $t8, $at, L_1502251C
    if (ctx->r24 != ctx->r1) {
        // 0x15022464: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1502251C;
    }
    goto skip_2;
    // 0x15022464: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x15022468: lw          $t9, 0xF4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XF4);
    // 0x1502246C: addiu       $at, $zero, -0x2B
    ctx->r1 = ADD32(0, -0X2B);
    // 0x15022470: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x15022474: b           L_15022518
    // 0x15022478: sw          $t0, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->r8;
        goto L_15022518;
    // 0x15022478: sw          $t0, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->r8;
L_1502247C:
    // 0x1502247C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15022480: lbu         $t1, 0x2100($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X2100);
    // 0x15022484: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x15022488: subu        $t2, $t2, $a1
    ctx->r10 = SUB32(ctx->r10, ctx->r5);
    // 0x1502248C: slt         $at, $a1, $t1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x15022490: beq         $at, $zero, L_15022518
    if (ctx->r1 == 0) {
        // 0x15022494: sll         $t2, $t2, 4
        ctx->r10 = S32(ctx->r10 << 4);
            goto L_15022518;
    }
    // 0x15022494: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x15022498: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1502249C: lw          $t3, 0x20FC($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X20FC);
    // 0x150224A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150224A4: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x150224A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150224AC: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x150224B0: jal         0x15082A44
    // 0x150224B4: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    func_15082A44(rdram, ctx);
        goto after_2;
    // 0x150224B4: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    after_2:
    // 0x150224B8: jal         0x1505EEF4
    // 0x150224BC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_1505EEF4(rdram, ctx);
        goto after_3;
    // 0x150224BC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_3:
    // 0x150224C0: beq         $v0, $zero, L_15022518
    if (ctx->r2 == 0) {
        // 0x150224C4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_15022518;
    }
    // 0x150224C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150224C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150224CC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150224D0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150224D4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x150224D8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150224DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150224E0: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x150224E4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x150224E8: jal         0x1505E650
    // 0x150224EC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_4;
    // 0x150224EC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x150224F0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x150224F4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150224F8: addiu       $t6, $t6, -0x3D30
    ctx->r14 = ADD32(ctx->r14, -0X3D30);
    // 0x150224FC: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x15022500: subu        $a0, $t5, $t6
    ctx->r4 = SUB32(ctx->r13, ctx->r14);
    // 0x15022504: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x15022508: mflo        $a0
    ctx->r4 = lo;
    // 0x1502250C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x15022510: jal         0x1502225C
    // 0x15022514: nop

    func_1502225C(rdram, ctx);
        goto after_5;
    // 0x15022514: nop

    after_5:
L_15022518:
    // 0x15022518: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1502251C:
    // 0x1502251C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15022520: jr          $ra
    // 0x15022524: nop

    return;
    return;
    // 0x15022524: nop

;}
RECOMP_FUNC void func_1519C258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519C258: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x1519C25C: lw          $v0, 0x98($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X98);
    // 0x1519C260: sw          $zero, 0x148($v0)
    MEM_W(0X148, ctx->r2) = 0;
    // 0x1519C264: jr          $ra
    // 0x1519C268: nop

    return;
    return;
    // 0x1519C268: nop

;}
RECOMP_FUNC void func_15014144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15014144: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15014148: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1501414C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15014150: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x15014154: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15014158: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501415C: andi        $t6, $v0, 0x8
    ctx->r14 = ctx->r2 & 0X8;
    // 0x15014160: beq         $t6, $zero, L_15014170
    if (ctx->r14 == 0) {
        // 0x15014164: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_15014170;
    }
    // 0x15014164: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x15014168: b           L_15014174
    // 0x1501416C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
        goto L_15014174;
    // 0x1501416C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
L_15014170:
    // 0x15014170: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
L_15014174:
    // 0x15014174: beq         $t7, $zero, L_15014184
    if (ctx->r15 == 0) {
        // 0x15014178: andi        $t8, $v0, 0x2
        ctx->r24 = ctx->r2 & 0X2;
            goto L_15014184;
    }
    // 0x15014178: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x1501417C: b           L_15014188
    // 0x15014180: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
        goto L_15014188;
    // 0x15014180: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
L_15014184:
    // 0x15014184: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_15014188:
    // 0x15014188: beq         $t8, $zero, L_15014198
    if (ctx->r24 == 0) {
        // 0x1501418C: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_15014198;
    }
    // 0x1501418C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x15014190: b           L_1501419C
    // 0x15014194: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_1501419C;
    // 0x15014194: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15014198:
    // 0x15014198: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_1501419C:
    // 0x1501419C: beq         $t9, $zero, L_150141AC
    if (ctx->r25 == 0) {
        // 0x150141A0: andi        $t3, $v0, 0x10
        ctx->r11 = ctx->r2 & 0X10;
            goto L_150141AC;
    }
    // 0x150141A0: andi        $t3, $v0, 0x10
    ctx->r11 = ctx->r2 & 0X10;
    // 0x150141A4: b           L_150141B0
    // 0x150141A8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_150141B0;
    // 0x150141A8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_150141AC:
    // 0x150141AC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_150141B0:
    // 0x150141B0: beq         $t3, $zero, L_150141C0
    if (ctx->r11 == 0) {
        // 0x150141B4: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_150141C0;
    }
    // 0x150141B4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150141B8: b           L_150141C4
    // 0x150141BC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_150141C4;
    // 0x150141BC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_150141C0:
    // 0x150141C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150141C4:
    // 0x150141C4: or          $t4, $v0, $t0
    ctx->r12 = ctx->r2 | ctx->r8;
    // 0x150141C8: lwc1        $f4, 0x667C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X667C);
    // 0x150141CC: or          $t5, $t4, $v1
    ctx->r13 = ctx->r12 | ctx->r3;
    // 0x150141D0: lbu         $a1, 0x1F($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X1F);
    // 0x150141D4: or          $t6, $t5, $t1
    ctx->r14 = ctx->r13 | ctx->r9;
    // 0x150141D8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150141DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150141E0: or          $a0, $t6, $t2
    ctx->r4 = ctx->r14 | ctx->r10;
    // 0x150141E4: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x150141E8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150141EC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150141F0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x150141F4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150141F8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x150141FC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15014200: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15014204: jal         0x151A9390
    // 0x15014208: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_151A9390(rdram, ctx);
        goto after_0;
    // 0x15014208: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x1501420C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15014210: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15014214: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15014218: jr          $ra
    // 0x1501421C: nop

    return;
    return;
    // 0x1501421C: nop

;}
RECOMP_FUNC void func_150A9984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A9984: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x150A9988: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x150A998C: nop

    // 0x150A9990: lui         $a2, 0xFFFF
    ctx->r6 = S32(0XFFFF << 16);
L_150A9994:
    // 0x150A9994: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150A9998: mul.s       $f14, $f2, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f1.fl);
    // 0x150A999C: lwc1        $f3, 0x4($a0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r4, 0X4);
    // 0x150A99A0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x150A99A4: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x150A99A8: cvt.w.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = CVT_W_S(ctx->f14.fl);
    // 0x150A99AC: lwc1        $f5, 0x10($a0)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r4, 0X10);
    // 0x150A99B0: mul.s       $f15, $f3, $f1
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f15.fl = MUL_S(ctx->f3.fl, ctx->f1.fl);
    // 0x150A99B4: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x150A99B8: mfc1        $t4, $f14
    ctx->r12 = (int32_t)ctx->f14.u32l;
    // 0x150A99BC: lwc1        $f7, 0x18($a0)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r4, 0X18);
    // 0x150A99C0: cvt.w.s     $f15, $f15
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    ctx->f_odd[(15 - 1) * 2] = CVT_W_S(ctx->f15.fl);
    // 0x150A99C4: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x150A99C8: srl         $t0, $t4, 16
    ctx->r8 = S32(U32(ctx->r12) >> 16);
    // 0x150A99CC: lwc1        $f9, 0x24($a0)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r4, 0X24);
    // 0x150A99D0: mfc1        $t7, $f15
    ctx->r15 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x150A99D4: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x150A99D8: mul.s       $f14, $f4, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f1.fl);
    // 0x150A99DC: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x150A99E0: srl         $t1, $t7, 16
    ctx->r9 = S32(U32(ctx->r15) >> 16);
    // 0x150A99E4: lwc1        $f11, 0x30($a0)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r4, 0X30);
    // 0x150A99E8: cvt.w.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = CVT_W_S(ctx->f14.fl);
    // 0x150A99EC: sh          $t1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r9;
    // 0x150A99F0: mfc1        $t0, $f14
    ctx->r8 = (int32_t)ctx->f14.u32l;
    // 0x150A99F4: lwc1        $f12, 0x34($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X34);
    // 0x150A99F8: mul.s       $f14, $f5, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f5.fl, ctx->f1.fl);
    // 0x150A99FC: lwc1        $f13, 0x38($a0)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r4, 0X38);
    // 0x150A9A00: sll         $t6, $t0, 16
    ctx->r14 = S32(ctx->r8 << 16);
    // 0x150A9A04: and         $t0, $a2, $t0
    ctx->r8 = ctx->r6 & ctx->r8;
    // 0x150A9A08: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x150A9A0C: cvt.w.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = CVT_W_S(ctx->f14.fl);
    // 0x150A9A10: sh          $t4, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r12;
    // 0x150A9A14: mul.s       $f15, $f6, $f1
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f15.fl = MUL_S(ctx->f6.fl, ctx->f1.fl);
    // 0x150A9A18: sh          $t7, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r15;
    // 0x150A9A1C: mfc1        $t0, $f14
    ctx->r8 = (int32_t)ctx->f14.u32l;
    // 0x150A9A20: sw          $t6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r14;
    // 0x150A9A24: cvt.w.s     $f15, $f15
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    ctx->f_odd[(15 - 1) * 2] = CVT_W_S(ctx->f15.fl);
    // 0x150A9A28: sh          $t0, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r8;
    // 0x150A9A2C: srl         $t0, $t0, 16
    ctx->r8 = S32(U32(ctx->r8) >> 16);
    // 0x150A9A30: mfc1        $t1, $f15
    ctx->r9 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x150A9A34: sh          $t0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r8;
    // 0x150A9A38: mul.s       $f14, $f7, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f7.fl, ctx->f1.fl);
    // 0x150A9A3C: sh          $t1, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r9;
    // 0x150A9A40: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x150A9A44: cvt.w.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = CVT_W_S(ctx->f14.fl);
    // 0x150A9A48: sh          $t1, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r9;
    // 0x150A9A4C: mfc1        $t0, $f14
    ctx->r8 = (int32_t)ctx->f14.u32l;
    // 0x150A9A50: mul.s       $f14, $f8, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f1.fl);
    // 0x150A9A54: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x150A9A58: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x150A9A5C: and         $t1, $a2, $t0
    ctx->r9 = ctx->r6 & ctx->r8;
    // 0x150A9A60: sw          $t1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r9;
    // 0x150A9A64: cvt.w.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = CVT_W_S(ctx->f14.fl);
    // 0x150A9A68: mfc1        $t0, $f14
    ctx->r8 = (int32_t)ctx->f14.u32l;
    // 0x150A9A6C: mul.s       $f15, $f9, $f1
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f15.fl = MUL_S(ctx->f9.fl, ctx->f1.fl);
    // 0x150A9A70: sh          $t0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r8;
    // 0x150A9A74: cvt.w.s     $f15, $f15
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    ctx->f_odd[(15 - 1) * 2] = CVT_W_S(ctx->f15.fl);
    // 0x150A9A78: srl         $t0, $t0, 16
    ctx->r8 = S32(U32(ctx->r8) >> 16);
    // 0x150A9A7C: mfc1        $t1, $f15
    ctx->r9 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x150A9A80: sh          $t0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r8;
    // 0x150A9A84: mul.s       $f14, $f10, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f1.fl);
    // 0x150A9A88: sh          $t1, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r9;
    // 0x150A9A8C: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x150A9A90: cvt.w.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = CVT_W_S(ctx->f14.fl);
    // 0x150A9A94: sh          $t1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r9;
    // 0x150A9A98: mfc1        $t0, $f14
    ctx->r8 = (int32_t)ctx->f14.u32l;
    // 0x150A9A9C: mul.s       $f14, $f11, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f11.fl, ctx->f1.fl);
    // 0x150A9AA0: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x150A9AA4: sw          $t1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r9;
    // 0x150A9AA8: and         $t1, $a2, $t0
    ctx->r9 = ctx->r6 & ctx->r8;
    // 0x150A9AAC: sw          $t1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r9;
    // 0x150A9AB0: cvt.w.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = CVT_W_S(ctx->f14.fl);
    // 0x150A9AB4: mul.s       $f15, $f12, $f1
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f15.fl = MUL_S(ctx->f12.fl, ctx->f1.fl);
    // 0x150A9AB8: mfc1        $t0, $f14
    ctx->r8 = (int32_t)ctx->f14.u32l;
    // 0x150A9ABC: cvt.w.s     $f15, $f15
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    ctx->f_odd[(15 - 1) * 2] = CVT_W_S(ctx->f15.fl);
    // 0x150A9AC0: sh          $t0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r8;
    // 0x150A9AC4: srl         $t0, $t0, 16
    ctx->r8 = S32(U32(ctx->r8) >> 16);
    // 0x150A9AC8: mfc1        $t1, $f15
    ctx->r9 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x150A9ACC: sh          $t0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r8;
    // 0x150A9AD0: mul.s       $f14, $f13, $f1
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f14.fl = MUL_S(ctx->f13.fl, ctx->f1.fl);
    // 0x150A9AD4: sh          $t1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r9;
    // 0x150A9AD8: srl         $t1, $t1, 16
    ctx->r9 = S32(U32(ctx->r9) >> 16);
    // 0x150A9ADC: cvt.w.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = CVT_W_S(ctx->f14.fl);
    // 0x150A9AE0: sh          $t1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r9;
    // 0x150A9AE4: mfc1        $t0, $f14
    ctx->r8 = (int32_t)ctx->f14.u32l;
    // 0x150A9AE8: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x150A9AEC: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x150A9AF0: sw          $t1, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r9;
    // 0x150A9AF4: and         $t1, $a2, $t0
    ctx->r9 = ctx->r6 & ctx->r8;
    // 0x150A9AF8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x150A9AFC: bne         $a1, $zero, L_150A9994
    if (ctx->r5 != 0) {
        // 0x150A9B00: sw          $t1, -0x24($a0)
        MEM_W(-0X24, ctx->r4) = ctx->r9;
            goto L_150A9994;
    }
    // 0x150A9B00: sw          $t1, -0x24($a0)
    MEM_W(-0X24, ctx->r4) = ctx->r9;
    // 0x150A9B04: jr          $ra
    // 0x150A9B08: nop

    return;
    return;
    // 0x150A9B08: nop

;}
RECOMP_FUNC void func_15004F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15004F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15004F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15004F38: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15004F3C: addiu       $a0, $a0, 0x19A0
    ctx->r4 = ADD32(ctx->r4, 0X19A0);
    // 0x15004F40: jal         0x100226F0
    // 0x15004F44: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x15004F44: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
    after_0:
    // 0x15004F48: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15004F4C: addiu       $a0, $a0, 0x1C90
    ctx->r4 = ADD32(ctx->r4, 0X1C90);
    // 0x15004F50: jal         0x100226F0
    // 0x15004F54: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x15004F54: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
    after_1:
    // 0x15004F58: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15004F5C: addiu       $a0, $a0, 0x1F80
    ctx->r4 = ADD32(ctx->r4, 0X1F80);
    // 0x15004F60: jal         0x100226F0
    // 0x15004F64: addiu       $a1, $zero, 0xBB
    ctx->r5 = ADD32(0, 0XBB);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x15004F64: addiu       $a1, $zero, 0xBB
    ctx->r5 = ADD32(0, 0XBB);
    after_2:
    // 0x15004F68: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15004F6C: addiu       $a0, $a0, 0x2040
    ctx->r4 = ADD32(ctx->r4, 0X2040);
    // 0x15004F70: jal         0x100226F0
    // 0x15004F74: addiu       $a1, $zero, 0xBB
    ctx->r5 = ADD32(0, 0XBB);
    bzero_recomp(rdram, ctx);
        goto after_3;
    // 0x15004F74: addiu       $a1, $zero, 0xBB
    ctx->r5 = ADD32(0, 0XBB);
    after_3:
    // 0x15004F78: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15004F7C: addiu       $a0, $a0, 0x1588
    ctx->r4 = ADD32(ctx->r4, 0X1588);
    // 0x15004F80: jal         0x100226F0
    // 0x15004F84: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
    bzero_recomp(rdram, ctx);
        goto after_4;
    // 0x15004F84: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
    after_4:
    // 0x15004F88: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15004F8C: addiu       $a0, $a0, 0x5A90
    ctx->r4 = ADD32(ctx->r4, 0X5A90);
    // 0x15004F90: jal         0x100226F0
    // 0x15004F94: addiu       $a1, $zero, 0x176
    ctx->r5 = ADD32(0, 0X176);
    bzero_recomp(rdram, ctx);
        goto after_5;
    // 0x15004F94: addiu       $a1, $zero, 0x176
    ctx->r5 = ADD32(0, 0X176);
    after_5:
    // 0x15004F98: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15004F9C: addiu       $a0, $a0, 0x5C08
    ctx->r4 = ADD32(ctx->r4, 0X5C08);
    // 0x15004FA0: jal         0x100226F0
    // 0x15004FA4: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
    bzero_recomp(rdram, ctx);
        goto after_6;
    // 0x15004FA4: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
    after_6:
    // 0x15004FA8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15004FAC: addiu       $a0, $a0, 0x6070
    ctx->r4 = ADD32(ctx->r4, 0X6070);
    // 0x15004FB0: jal         0x100226F0
    // 0x15004FB4: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
    bzero_recomp(rdram, ctx);
        goto after_7;
    // 0x15004FB4: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
    after_7:
    // 0x15004FB8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15004FBC: addiu       $a0, $a0, 0x6360
    ctx->r4 = ADD32(ctx->r4, 0X6360);
    // 0x15004FC0: jal         0x100226F0
    // 0x15004FC4: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
    bzero_recomp(rdram, ctx);
        goto after_8;
    // 0x15004FC4: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
    after_8:
    // 0x15004FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15004FCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15004FD0: jr          $ra
    // 0x15004FD4: nop

    return;
    return;
    // 0x15004FD4: nop

;}
RECOMP_FUNC void func_15159C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15159C08: addiu       $sp, $sp, -0x190
    ctx->r29 = ADD32(ctx->r29, -0X190);
    // 0x15159C0C: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x15159C10: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x15159C14: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x15159C18: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x15159C1C: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x15159C20: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x15159C24: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x15159C28: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x15159C2C: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x15159C30: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x15159C34: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x15159C38: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x15159C3C: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x15159C40: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x15159C44: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x15159C48: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x15159C4C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15159C50: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15159C54: lui         $a1, 0x453B
    ctx->r5 = S32(0X453B << 16);
    // 0x15159C58: addiu       $s0, $a3, 0x28
    ctx->r16 = ADD32(ctx->r7, 0X28);
    // 0x15159C5C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x15159C60: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x15159C64: jal         0x151454BC
    // 0x15159C68: lbu         $a0, -0x1615($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1615);
    func_151454BC(rdram, ctx);
        goto after_0;
    // 0x15159C68: lbu         $a0, -0x1615($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1615);
    after_0:
    // 0x15159C6C: beql        $v0, $zero, L_1515A0D8
    if (ctx->r2 == 0) {
        // 0x15159C70: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_1515A0D8;
    }
    goto skip_0;
    // 0x15159C70: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_0:
    // 0x15159C74: jal         0x150ADA68
    // 0x15159C78: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x15159C78: nop

    after_1:
    // 0x15159C7C: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15159C80: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15159C84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15159C88: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15159C8C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x15159C90: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15159C94: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15159C98: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15159C9C: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x15159CA0: addiu       $t6, $zero, 0x2F
    ctx->r14 = ADD32(0, 0X2F);
    // 0x15159CA4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15159CA8: addiu       $t7, $zero, 0xC01
    ctx->r15 = ADD32(0, 0XC01);
    // 0x15159CAC: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x15159CB0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15159CB4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15159CB8: addiu       $t0, $zero, 0x1205
    ctx->r8 = ADD32(0, 0X1205);
    // 0x15159CBC: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x15159CC0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x15159CC4: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x15159CC8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x15159CCC: addiu       $t5, $sp, 0x14C
    ctx->r13 = ADD32(ctx->r29, 0X14C);
    // 0x15159CD0: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x15159CD4: addiu       $fp, $zero, 0x33
    ctx->r30 = ADD32(0, 0X33);
    // 0x15159CD8: addiu       $s7, $zero, -0xC1
    ctx->r23 = ADD32(0, -0XC1);
    // 0x15159CDC: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x15159CE0: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15159CE4: c.lt.s      $f26, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f26.fl < ctx->f8.fl;
    // 0x15159CE8: nop

    // 0x15159CEC: bc1fl       L_1515A0D8
    if (!c1cs) {
        // 0x15159CF0: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_1515A0D8;
    }
    goto skip_1;
    // 0x15159CF0: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_1:
    // 0x15159CF4: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x15159CF8: nop

    // 0x15159CFC: sb          $t6, 0x139($sp)
    MEM_B(0X139, ctx->r29) = ctx->r14;
    // 0x15159D00: sh          $t7, 0x124($sp)
    MEM_H(0X124, ctx->r29) = ctx->r15;
    // 0x15159D04: sw          $t8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r24;
    // 0x15159D08: sw          $zero, 0x120($sp)
    MEM_W(0X120, ctx->r29) = 0;
    // 0x15159D0C: sb          $zero, 0x136($sp)
    MEM_B(0X136, ctx->r29) = 0;
    // 0x15159D10: sb          $zero, 0x135($sp)
    MEM_B(0X135, ctx->r29) = 0;
    // 0x15159D14: sb          $zero, 0x134($sp)
    MEM_B(0X134, ctx->r29) = 0;
    // 0x15159D18: sb          $zero, 0x133($sp)
    MEM_B(0X133, ctx->r29) = 0;
    // 0x15159D1C: sb          $zero, 0x132($sp)
    MEM_B(0X132, ctx->r29) = 0;
    // 0x15159D20: sb          $zero, 0x131($sp)
    MEM_B(0X131, ctx->r29) = 0;
    // 0x15159D24: sb          $zero, 0x130($sp)
    MEM_B(0X130, ctx->r29) = 0;
    // 0x15159D28: sw          $zero, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = 0;
    // 0x15159D2C: sw          $zero, 0x128($sp)
    MEM_W(0X128, ctx->r29) = 0;
    // 0x15159D30: sb          $t9, 0x138($sp)
    MEM_B(0X138, ctx->r29) = ctx->r25;
    // 0x15159D34: sh          $zero, 0x13E($sp)
    MEM_H(0X13E, ctx->r29) = 0;
    // 0x15159D38: swc1        $f28, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f28.u32l;
    // 0x15159D3C: sw          $t0, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r8;
    // 0x15159D40: sb          $t1, 0x17C($sp)
    MEM_B(0X17C, ctx->r29) = ctx->r9;
    // 0x15159D44: sb          $t2, 0x17D($sp)
    MEM_B(0X17D, ctx->r29) = ctx->r10;
    // 0x15159D48: sb          $t3, 0x17E($sp)
    MEM_B(0X17E, ctx->r29) = ctx->r11;
    // 0x15159D4C: sb          $t4, 0x17F($sp)
    MEM_B(0X17F, ctx->r29) = ctx->r12;
    // 0x15159D50: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x15159D54: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
    // 0x15159D58: addiu       $s5, $sp, 0x110
    ctx->r21 = ADD32(ctx->r29, 0X110);
    // 0x15159D5C: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x15159D60: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x15159D64: addiu       $s4, $sp, 0x10C
    ctx->r20 = ADD32(ctx->r29, 0X10C);
    // 0x15159D68: addiu       $s3, $sp, 0x108
    ctx->r19 = ADD32(ctx->r29, 0X108);
    // 0x15159D6C: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x15159D70: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x15159D74: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    // 0x15159D78: addiu       $s1, $sp, 0xA0
    ctx->r17 = ADD32(ctx->r29, 0XA0);
    // 0x15159D7C: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x15159D80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15159D84: swc1        $f28, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f28.u32l;
    // 0x15159D88: swc1        $f28, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f28.u32l;
    // 0x15159D8C: swc1        $f28, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f28.u32l;
    // 0x15159D90: sb          $zero, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = 0;
    // 0x15159D94: sb          $zero, 0xFD($sp)
    MEM_B(0XFD, ctx->r29) = 0;
    // 0x15159D98: swc1        $f28, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f28.u32l;
    // 0x15159D9C: lwc1        $f30, 0x63C4($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X63C4);
L_15159DA0:
    // 0x15159DA0: jal         0x150ADA68
    // 0x15159DA4: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x15159DA4: nop

    after_2:
    // 0x15159DA8: mul.s       $f20, $f0, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x15159DAC: jal         0x150ADA68
    // 0x15159DB0: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x15159DB0: nop

    after_3:
    // 0x15159DB4: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15159DB8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x15159DBC: mul.s       $f22, $f0, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15159DC0: jal         0x15047D60
    // 0x15159DC4: nop

    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x15159DC4: nop

    after_4:
    // 0x15159DC8: mul.s       $f24, $f0, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x15159DCC: jal         0x15047C00
    // 0x15159DD0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x15159DD0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_5:
    // 0x15159DD4: mul.s       $f20, $f0, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x15159DD8: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x15159DDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15159DE0: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x15159DE4: jal         0x150A8050
    // 0x15159DE8: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    func_150A8050(rdram, ctx);
        goto after_6;
    // 0x15159DE8: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    after_6:
    // 0x15159DEC: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x15159DF0: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x15159DF4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x15159DF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15159DFC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x15159E00: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x15159E04: jal         0x150A7960
    // 0x15159E08: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    func_150A7960(rdram, ctx);
        goto after_7;
    // 0x15159E08: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    after_7:
    // 0x15159E0C: jal         0x150ADA68
    // 0x15159E10: nop

    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x15159E10: nop

    after_8:
    // 0x15159E14: mul.s       $f16, $f0, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x15159E18: jal         0x150ADA68
    // 0x15159E1C: swc1        $f16, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x15159E1C: swc1        $f16, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x15159E20: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x15159E24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15159E28: lui         $at, 0xC320
    ctx->r1 = S32(0XC320 << 16);
    // 0x15159E2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15159E30: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15159E34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15159E38: lwc1        $f10, 0x63C8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X63C8);
    // 0x15159E3C: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15159E40: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15159E44: swc1        $f16, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f16.u32l;
    // 0x15159E48: jal         0x150ADA68
    // 0x15159E4C: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x15159E4C: nop

    after_10:
    // 0x15159E50: lui         $at, 0x4321
    ctx->r1 = S32(0X4321 << 16);
    // 0x15159E54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15159E58: lui         $at, 0x43DF
    ctx->r1 = S32(0X43DF << 16);
    // 0x15159E5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15159E60: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15159E64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15159E68: lwc1        $f10, 0x63CC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X63CC);
    // 0x15159E6C: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15159E70: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15159E74: mul.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15159E78: div.s       $f24, $f26, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = DIV_S(ctx->f26.fl, ctx->f20.fl);
    // 0x15159E7C: mul.s       $f22, $f16, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x15159E80: jal         0x150ADA68
    // 0x15159E84: nop

    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x15159E84: nop

    after_11:
    // 0x15159E88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15159E8C: lwc1        $f6, 0x63D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X63D0);
    // 0x15159E90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15159E94: lwc1        $f4, 0x63D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X63D4);
    // 0x15159E98: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15159E9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15159EA0: lwc1        $f10, 0x63D8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X63D8);
    // 0x15159EA4: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x15159EA8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x15159EAC: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15159EB0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15159EB4: nop

    // 0x15159EB8: mul.s       $f2, $f16, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x15159EBC: nop

    // 0x15159EC0: mul.s       $f18, $f6, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x15159EC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15159EC8: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x15159ECC: c.lt.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl < ctx->f22.fl;
    // 0x15159ED0: swc1        $f18, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f18.u32l;
    // 0x15159ED4: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15159ED8: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x15159EDC: swc1        $f8, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f8.u32l;
    // 0x15159EE0: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15159EE4: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x15159EE8: bc1f        L_15159EFC
    if (!c1cs) {
        // 0x15159EEC: swc1        $f16, 0x16C($sp)
        MEM_W(0X16C, ctx->r29) = ctx->f16.u32l;
            goto L_15159EFC;
    }
    // 0x15159EEC: swc1        $f16, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f16.u32l;
    // 0x15159EF0: addiu       $t9, $zero, 0x1F4
    ctx->r25 = ADD32(0, 0X1F4);
    // 0x15159EF4: b           L_15159F20
    // 0x15159EF8: sh          $t9, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r25;
        goto L_15159F20;
    // 0x15159EF8: sh          $t9, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r25;
L_15159EFC:
    // 0x15159EFC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15159F00: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15159F04: nop

    // 0x15159F08: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x15159F0C: add.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x15159F10: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15159F14: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x15159F18: nop

    // 0x15159F1C: sh          $t1, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r9;
L_15159F20:
    // 0x15159F20: trunc.w.s   $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x15159F24: lw          $t6, 0x174($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X174);
    // 0x15159F28: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x15159F2C: and         $t5, $t6, $s7
    ctx->r13 = ctx->r14 & ctx->r23;
    // 0x15159F30: sw          $t5, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r13;
    // 0x15159F34: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x15159F38: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x15159F3C: div         $zero, $s6, $t4
    lo = S32(S64(S32(ctx->r22)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r22)) % S64(S32(ctx->r12)));
    // 0x15159F40: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x15159F44: bne         $v0, $zero, L_15159F50
    if (ctx->r2 != 0) {
        // 0x15159F48: nop
    
            goto L_15159F50;
    }
    // 0x15159F48: nop

    // 0x15159F4C: break       7
    do_break(353738572);
L_15159F50:
    // 0x15159F50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15159F54: bne         $v0, $at, L_15159F68
    if (ctx->r2 != ctx->r1) {
        // 0x15159F58: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15159F68;
    }
    // 0x15159F58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15159F5C: bne         $s6, $at, L_15159F68
    if (ctx->r22 != ctx->r1) {
        // 0x15159F60: nop
    
            goto L_15159F68;
    }
    // 0x15159F60: nop

    // 0x15159F64: break       6
    do_break(353738596);
L_15159F68:
    // 0x15159F68: mflo        $t7
    ctx->r15 = lo;
    // 0x15159F6C: sh          $t7, 0x13C($sp)
    MEM_H(0X13C, ctx->r29) = ctx->r15;
    // 0x15159F70: jal         0x150ADA20
    // 0x15159F74: sh          $v0, 0x13A($sp)
    MEM_H(0X13A, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x15159F74: sh          $v0, 0x13A($sp)
    MEM_H(0X13A, ctx->r29) = ctx->r2;
    after_12:
    // 0x15159F78: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x15159F7C: beq         $t8, $zero, L_15159F8C
    if (ctx->r24 == 0) {
        // 0x15159F80: lw          $t9, 0x174($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X174);
            goto L_15159F8C;
    }
    // 0x15159F80: lw          $t9, 0x174($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X174);
    // 0x15159F84: ori         $t0, $t9, 0x40
    ctx->r8 = ctx->r25 | 0X40;
    // 0x15159F88: sw          $t0, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r8;
L_15159F8C:
    // 0x15159F8C: jal         0x150ADA20
    // 0x15159F90: nop

    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x15159F90: nop

    after_13:
    // 0x15159F94: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x15159F98: beq         $t1, $zero, L_15159FA8
    if (ctx->r9 == 0) {
        // 0x15159F9C: lw          $t2, 0x174($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X174);
            goto L_15159FA8;
    }
    // 0x15159F9C: lw          $t2, 0x174($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X174);
    // 0x15159FA0: ori         $t3, $t2, 0x80
    ctx->r11 = ctx->r10 | 0X80;
    // 0x15159FA4: sw          $t3, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r11;
L_15159FA8:
    // 0x15159FA8: jal         0x150ADA20
    // 0x15159FAC: nop

    func_150ADA20(rdram, ctx);
        goto after_14;
    // 0x15159FAC: nop

    after_14:
    // 0x15159FB0: divu        $zero, $v0, $fp
    lo = S32(U32(ctx->r2) / U32(ctx->r30)); hi = S32(U32(ctx->r2) % U32(ctx->r30));
    // 0x15159FB4: mfhi        $t4
    ctx->r12 = hi;
    // 0x15159FB8: addiu       $t7, $t4, 0x7C
    ctx->r15 = ADD32(ctx->r12, 0X7C);
    // 0x15159FBC: bne         $fp, $zero, L_15159FC8
    if (ctx->r30 != 0) {
        // 0x15159FC0: nop
    
            goto L_15159FC8;
    }
    // 0x15159FC0: nop

    // 0x15159FC4: break       7
    do_break(353738692);
L_15159FC8:
    // 0x15159FC8: sb          $t7, 0x137($sp)
    MEM_B(0X137, ctx->r29) = ctx->r15;
    // 0x15159FCC: jal         0x150ADA68
    // 0x15159FD0: nop

    func_150ADA68(rdram, ctx);
        goto after_15;
    // 0x15159FD0: nop

    after_15:
    // 0x15159FD4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15159FD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15159FDC: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x15159FE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15159FE4: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15159FE8: add.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15159FEC: swc1        $f2, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f2.u32l;
    // 0x15159FF0: swc1        $f2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f2.u32l;
    // 0x15159FF4: jal         0x150ADA20
    // 0x15159FF8: swc1        $f2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_16;
    // 0x15159FF8: swc1        $f2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f2.u32l;
    after_16:
    // 0x15159FFC: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x1515A000: mfhi        $t6
    ctx->r14 = hi;
    // 0x1515A004: addiu       $t5, $t6, 0x4
    ctx->r13 = ADD32(ctx->r14, 0X4);
    // 0x1515A008: bne         $s2, $zero, L_1515A014
    if (ctx->r18 != 0) {
        // 0x1515A00C: nop
    
            goto L_1515A014;
    }
    // 0x1515A00C: nop

    // 0x1515A010: break       7
    do_break(353738768);
L_1515A014:
    // 0x1515A014: sb          $t5, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = ctx->r13;
    // 0x1515A018: jal         0x150ADA20
    // 0x1515A01C: nop

    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x1515A01C: nop

    after_17:
    // 0x1515A020: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x1515A024: mfhi        $t8
    ctx->r24 = hi;
    // 0x1515A028: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x1515A02C: bne         $s2, $zero, L_1515A038
    if (ctx->r18 != 0) {
        // 0x1515A030: nop
    
            goto L_1515A038;
    }
    // 0x1515A030: nop

    // 0x1515A034: break       7
    do_break(353738804);
L_1515A038:
    // 0x1515A038: sb          $t9, 0xFF($sp)
    MEM_B(0XFF, ctx->r29) = ctx->r25;
    // 0x1515A03C: jal         0x150ADA68
    // 0x1515A040: nop

    func_150ADA68(rdram, ctx);
        goto after_18;
    // 0x1515A040: nop

    after_18:
    // 0x1515A044: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1515A048: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1515A04C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515A050: lwc1        $f16, 0x63DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X63DC);
    // 0x1515A054: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1515A058: lwc1        $f18, 0xF8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x1515A05C: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1515A060: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x1515A064: jal         0x150ADA68
    // 0x1515A068: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_19;
    // 0x1515A068: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    after_19:
    // 0x1515A06C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1515A070: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1515A074: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515A078: lwc1        $f16, 0x63E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X63E0);
    // 0x1515A07C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1515A080: lwc1        $f18, 0xF8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x1515A084: addiu       $a0, $sp, 0x11C
    ctx->r4 = ADD32(ctx->r29, 0X11C);
    // 0x1515A088: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1515A08C: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x1515A090: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1515A094: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x1515A098: jal         0x151303BC
    // 0x1515A09C: swc1        $f4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f4.u32l;
    func_151303BC(rdram, ctx);
        goto after_20;
    // 0x1515A09C: swc1        $f4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f4.u32l;
    after_20:
    // 0x1515A0A0: beq         $v0, $zero, L_1515A0B4
    if (ctx->r2 == 0) {
        // 0x1515A0A4: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_1515A0B4;
    }
    // 0x1515A0A4: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x1515A0A8: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    // 0x1515A0AC: jal         0x10022EC0
    // 0x1515A0B0: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    memcpy_recomp(rdram, ctx);
        goto after_21;
    // 0x1515A0B0: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_21:
L_1515A0B4:
    // 0x1515A0B4: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1515A0B8: sub.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f26.fl;
    // 0x1515A0BC: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x1515A0C0: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1515A0C4: c.lt.s      $f26, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f26.fl < ctx->f16.fl;
    // 0x1515A0C8: nop

    // 0x1515A0CC: bc1t        L_15159DA0
    if (c1cs) {
        // 0x1515A0D0: nop
    
            goto L_15159DA0;
    }
    // 0x1515A0D0: nop

    // 0x1515A0D4: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
L_1515A0D8:
    // 0x1515A0D8: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x1515A0DC: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x1515A0E0: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x1515A0E4: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x1515A0E8: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x1515A0EC: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x1515A0F0: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x1515A0F4: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x1515A0F8: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x1515A0FC: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x1515A100: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x1515A104: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x1515A108: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x1515A10C: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x1515A110: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x1515A114: jr          $ra
    // 0x1515A118: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
    return;
    return;
    // 0x1515A118: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
;}
RECOMP_FUNC void func_1514D564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514D564: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x1514D568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514D56C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1514D570: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x1514D574: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1514D578: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x1514D57C: lui         $at, 0x429A
    ctx->r1 = S32(0X429A << 16);
    // 0x1514D580: lbu         $t6, 0x3B($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X3B);
    // 0x1514D584: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1514D588: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514D58C: lwc1        $f10, 0x5DE4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5DE4);
    // 0x1514D590: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514D594: lwc1        $f16, 0x5DE8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5DE8);
    // 0x1514D598: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514D59C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1514D5A0: lwc1        $f18, 0x5DEC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5DEC);
    // 0x1514D5A4: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x1514D5A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1514D5AC: sb          $t7, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r15;
    // 0x1514D5B0: sb          $t8, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r24;
    // 0x1514D5B4: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x1514D5B8: sb          $t6, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r14;
    // 0x1514D5BC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x1514D5C0: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x1514D5C4: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x1514D5C8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x1514D5CC: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x1514D5D0: lwc1        $f4, 0x14($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X14);
    // 0x1514D5D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514D5D8: lwc1        $f10, 0x5DF0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5DF0);
    // 0x1514D5DC: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x1514D5E0: lwc1        $f6, 0x18($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X18);
    // 0x1514D5E4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1514D5E8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x1514D5EC: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x1514D5F0: lwc1        $f8, 0x1C($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x1514D5F4: sb          $t9, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r25;
    // 0x1514D5F8: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    // 0x1514D5FC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x1514D600: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x1514D604: jal         0x150C5370
    // 0x1514D608: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    func_150C5370(rdram, ctx);
        goto after_0;
    // 0x1514D608: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x1514D60C: beq         $v0, $zero, L_1514D63C
    if (ctx->r2 == 0) {
        // 0x1514D610: lw          $a3, 0x58($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X58);
            goto L_1514D63C;
    }
    // 0x1514D610: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x1514D614: addiu       $a0, $v0, 0xC8
    ctx->r4 = ADD32(ctx->r2, 0XC8);
    // 0x1514D618: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x1514D61C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x1514D620: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x1514D624: jal         0x10022EC0
    // 0x1514D628: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1514D628: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    after_1:
    // 0x1514D62C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x1514D630: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1514D634: jal         0x1514EC1C
    // 0x1514D638: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    func_1514EC1C(rdram, ctx);
        goto after_2;
    // 0x1514D638: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    after_2:
L_1514D63C:
    // 0x1514D63C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514D640: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x1514D644: jr          $ra
    // 0x1514D648: nop

    return;
    return;
    // 0x1514D648: nop

;}
RECOMP_FUNC void func_151BE674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BE674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151BE678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151BE67C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151BE680: jal         0x151BE644
    // 0x151BE684: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151BE644(rdram, ctx);
        goto after_0;
    // 0x151BE684: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151BE688: jal         0x1513CA6C
    // 0x151BE68C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1513CA6C(rdram, ctx);
        goto after_1;
    // 0x151BE68C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151BE690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151BE694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151BE698: jr          $ra
    // 0x151BE69C: nop

    return;
    return;
    // 0x151BE69C: nop

;}
RECOMP_FUNC void func_150B2494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B2494: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150B2498: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150B249C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x150B24A0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x150B24A4: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x150B24A8: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x150B24AC: lwc1        $f6, 0x180($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X180);
    // 0x150B24B0: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x150B24B4: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x150B24B8: jal         0x150ADA20
    // 0x150B24BC: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150B24BC: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x150B24C0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x150B24C4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150B24C8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150B24CC: mfhi        $t7
    ctx->r15 = hi;
    // 0x150B24D0: addiu       $t8, $t7, 0x1B
    ctx->r24 = ADD32(ctx->r15, 0X1B);
    // 0x150B24D4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150B24D8: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x150B24DC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150B24E0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x150B24E4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150B24E8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150B24EC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150B24F0: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150B24F4: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150B24F8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x150B24FC: lui         $a3, 0x4307
    ctx->r7 = S32(0X4307 << 16);
    // 0x150B2500: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B2504: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150B2508: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150B250C: jal         0x1514C678
    // 0x150B2510: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_1514C678(rdram, ctx);
        goto after_1;
    // 0x150B2510: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x150B2514: lui         $a1, 0x44BB
    ctx->r5 = S32(0X44BB << 16);
    // 0x150B2518: lui         $a2, 0x453B
    ctx->r6 = S32(0X453B << 16);
    // 0x150B251C: lui         $a3, 0x39AE
    ctx->r7 = S32(0X39AE << 16);
    // 0x150B2520: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x150B2524: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x150B2528: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150B252C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x150B2530: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150B2534: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150B2538: ori         $a3, $a3, 0xC33E
    ctx->r7 = ctx->r7 | 0XC33E;
    // 0x150B253C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x150B2540: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x150B2544: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x150B2548: jal         0x151D5404
    // 0x150B254C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151D5404(rdram, ctx);
        goto after_2;
    // 0x150B254C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_2:
    // 0x150B2550: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x150B2554: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150B2558: jal         0x151D3FF4
    // 0x150B255C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_151D3FF4(rdram, ctx);
        goto after_3;
    // 0x150B255C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x150B2560: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150B2564: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150B2568: jr          $ra
    // 0x150B256C: nop

    return;
    return;
    // 0x150B256C: nop

;}
RECOMP_FUNC void func_15002560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15002560: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15002564: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15002568: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x1500256C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15002570: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15002574: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
L_15002578:
    // 0x15002578: beql        $a0, $zero, L_150025E8
    if (ctx->r4 == 0) {
        // 0x1500257C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150025E8;
    }
    goto skip_0;
    // 0x1500257C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x15002580: lh          $t6, 0x4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X4);
    // 0x15002584: bnel        $t6, $zero, L_150025A4
    if (ctx->r14 != 0) {
        // 0x15002588: lh          $v0, 0xC($a0)
        ctx->r2 = MEM_H(ctx->r4, 0XC);
            goto L_150025A4;
    }
    goto skip_1;
    // 0x15002588: lh          $v0, 0xC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC);
    skip_1:
    // 0x1500258C: beq         $s2, $zero, L_1500259C
    if (ctx->r18 == 0) {
        // 0x15002590: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1500259C;
    }
    // 0x15002590: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15002594: b           L_1500259C
    // 0x15002598: subu        $v0, $s2, $a0
    ctx->r2 = SUB32(ctx->r18, ctx->r4);
        goto L_1500259C;
    // 0x15002598: subu        $v0, $s2, $a0
    ctx->r2 = SUB32(ctx->r18, ctx->r4);
L_1500259C:
    // 0x1500259C: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x150025A0: lh          $v0, 0xC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC);
L_150025A4:
    // 0x150025A4: beq         $v0, $zero, L_150025E4
    if (ctx->r2 == 0) {
        // 0x150025A8: addu        $s1, $a0, $v0
        ctx->r17 = ADD32(ctx->r4, ctx->r2);
            goto L_150025E4;
    }
    // 0x150025A8: addu        $s1, $a0, $v0
    ctx->r17 = ADD32(ctx->r4, ctx->r2);
    // 0x150025AC: lh          $t7, 0x4($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X4);
    // 0x150025B0: beq         $t7, $zero, L_150025DC
    if (ctx->r15 == 0) {
        // 0x150025B4: nop
    
            goto L_150025DC;
    }
    // 0x150025B4: nop

    // 0x150025B8: lh          $t8, 0x4($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X4);
L_150025BC:
    // 0x150025BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150025C0: addu        $s0, $s1, $t8
    ctx->r16 = ADD32(ctx->r17, ctx->r24);
    // 0x150025C4: jal         0x15002560
    // 0x150025C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_15002560(rdram, ctx);
        goto after_0;
    // 0x150025C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x150025CC: lh          $t9, 0x4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X4);
    // 0x150025D0: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x150025D4: bnel        $t9, $zero, L_150025BC
    if (ctx->r25 != 0) {
        // 0x150025D8: lh          $t8, 0x4($s1)
        ctx->r24 = MEM_H(ctx->r17, 0X4);
            goto L_150025BC;
    }
    goto skip_2;
    // 0x150025D8: lh          $t8, 0x4($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X4);
    skip_2:
L_150025DC:
    // 0x150025DC: b           L_15002578
    // 0x150025E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_15002578;
    // 0x150025E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_150025E4:
    // 0x150025E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150025E8:
    // 0x150025E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150025EC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150025F0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150025F4: jr          $ra
    // 0x150025F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x150025F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1510550C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510550C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15105510: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15105514: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15105518: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1510551C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15105520: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15105524: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x15105528: bnel        $a2, $at, L_1510553C
    if (ctx->r6 != ctx->r1) {
        // 0x1510552C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1510553C;
    }
    goto skip_0;
    // 0x1510552C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15105530: jal         0x1516972C
    // 0x15105534: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15105534: nop

    after_0:
    // 0x15105538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1510553C:
    // 0x1510553C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15105540: jr          $ra
    // 0x15105544: nop

    return;
    return;
    // 0x15105544: nop

;}
RECOMP_FUNC void _Litob(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100230F0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x100230F4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x100230F8: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x100230FC: addiu       $v1, $zero, 0x58
    ctx->r3 = ADD32(0, 0X58);
    // 0x10023100: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x10023104: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x10023108: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x1002310C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x10023110: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x10023114: bne         $v1, $v0, L_10023128
    if (ctx->r3 != ctx->r2) {
        // 0x10023118: sw          $a1, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r5;
            goto L_10023128;
    }
    // 0x10023118: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x1002311C: lui         $s3, 0x8003
    ctx->r19 = S32(0X8003 << 16);
    // 0x10023120: b           L_10023130
    // 0x10023124: addiu       $s3, $s3, -0x42BC
    ctx->r19 = ADD32(ctx->r19, -0X42BC);
        goto L_10023130;
    // 0x10023124: addiu       $s3, $s3, -0x42BC
    ctx->r19 = ADD32(ctx->r19, -0X42BC);
L_10023128:
    // 0x10023128: lui         $s3, 0x8003
    ctx->r19 = S32(0X8003 << 16);
    // 0x1002312C: addiu       $s3, $s3, -0x42D0
    ctx->r19 = ADD32(ctx->r19, -0X42D0);
L_10023130:
    // 0x10023130: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x10023134: bne         $v0, $at, L_10023144
    if (ctx->r2 != ctx->r1) {
        // 0x10023138: addiu       $s0, $zero, 0x18
        ctx->r16 = ADD32(0, 0X18);
            goto L_10023144;
    }
    // 0x10023138: addiu       $s0, $zero, 0x18
    ctx->r16 = ADD32(0, 0X18);
    // 0x1002313C: b           L_10023164
    // 0x10023140: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
        goto L_10023164;
    // 0x10023140: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
L_10023144:
    // 0x10023144: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x10023148: beq         $v0, $at, L_10023160
    if (ctx->r2 == ctx->r1) {
        // 0x1002314C: addiu       $t0, $zero, 0x10
        ctx->r8 = ADD32(0, 0X10);
            goto L_10023160;
    }
    // 0x1002314C: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x10023150: beq         $v1, $v0, L_10023160
    if (ctx->r3 == ctx->r2) {
        // 0x10023154: nop
    
            goto L_10023160;
    }
    // 0x10023154: nop

    // 0x10023158: b           L_10023160
    // 0x1002315C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
        goto L_10023160;
    // 0x1002315C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
L_10023160:
    // 0x10023160: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
L_10023164:
    // 0x10023164: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x10023168: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x1002316C: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x10023170: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x10023174: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x10023178: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x1002317C: beq         $v0, $at, L_10023190
    if (ctx->r2 == ctx->r1) {
        // 0x10023180: sw          $t9, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r25;
            goto L_10023190;
    }
    // 0x10023180: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x10023184: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x10023188: bnel        $v0, $at, L_100231CC
    if (ctx->r2 != ctx->r1) {
        // 0x1002318C: lw          $t2, 0x60($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X60);
            goto L_100231CC;
    }
    goto skip_0;
    // 0x1002318C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    skip_0:
L_10023190:
    // 0x10023190: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x10023194: bgtzl       $t4, L_100231CC
    if (SIGNED(ctx->r12) > 0) {
        // 0x10023198: lw          $t2, 0x60($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X60);
            goto L_100231CC;
    }
    goto skip_1;
    // 0x10023198: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    skip_1:
    // 0x1002319C: bltz        $t4, L_100231AC
    if (SIGNED(ctx->r12) < 0) {
        // 0x100231A0: lw          $t6, 0x60($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X60);
            goto L_100231AC;
    }
    // 0x100231A0: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x100231A4: b           L_100231CC
    // 0x100231A8: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
        goto L_100231CC;
    // 0x100231A8: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
L_100231AC:
    // 0x100231AC: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x100231B0: nor         $t8, $t6, $zero
    ctx->r24 = ~(ctx->r14 | 0);
    // 0x100231B4: sltiu       $at, $t7, 0x1
    ctx->r1 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x100231B8: addu        $t8, $t8, $at
    ctx->r24 = ADD32(ctx->r24, ctx->r1);
    // 0x100231BC: negu        $t9, $t7
    ctx->r25 = SUB32(0, ctx->r15);
    // 0x100231C0: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x100231C4: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x100231C8: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
L_100231CC:
    // 0x100231CC: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x100231D0: addiu       $t0, $zero, 0x17
    ctx->r8 = ADD32(0, 0X17);
    // 0x100231D4: bne         $t2, $zero, L_100231F0
    if (ctx->r10 != 0) {
        // 0x100231D8: lw          $a0, 0x60($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X60);
            goto L_100231F0;
    }
    // 0x100231D8: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x100231DC: bnel        $t3, $zero, L_100231F4
    if (ctx->r11 != 0) {
        // 0x100231E0: addiu       $s0, $zero, 0x17
        ctx->r16 = ADD32(0, 0X17);
            goto L_100231F4;
    }
    goto skip_2;
    // 0x100231E0: addiu       $s0, $zero, 0x17
    ctx->r16 = ADD32(0, 0X17);
    skip_2:
    // 0x100231E4: lw          $t4, 0x24($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X24);
    // 0x100231E8: beql        $t4, $zero, L_1002322C
    if (ctx->r12 == 0) {
        // 0x100231EC: addiu       $s2, $sp, 0x78
        ctx->r18 = ADD32(ctx->r29, 0X78);
            goto L_1002322C;
    }
    goto skip_3;
    // 0x100231EC: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
    skip_3:
L_100231F0:
    // 0x100231F0: addiu       $s0, $zero, 0x17
    ctx->r16 = ADD32(0, 0X17);
L_100231F4:
    // 0x100231F4: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x100231F8: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x100231FC: sra         $a2, $t1, 31
    ctx->r6 = S32(SIGNED(ctx->r9) >> 31);
    // 0x10023200: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x10023204: jal         0x1002682C
    // 0x10023208: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    __ull_rem_recomp(rdram, ctx);
        goto after_0;
    // 0x10023208: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    after_0:
    // 0x1002320C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x10023210: addu        $t6, $v1, $s3
    ctx->r14 = ADD32(ctx->r3, ctx->r19);
    // 0x10023214: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x10023218: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
    // 0x1002321C: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x10023220: addu        $t8, $s2, $t0
    ctx->r24 = ADD32(ctx->r18, ctx->r8);
    // 0x10023224: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x10023228: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
L_1002322C:
    // 0x1002322C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x10023230: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x10023234: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x10023238: sra         $a2, $t1, 31
    ctx->r6 = S32(SIGNED(ctx->r9) >> 31);
    // 0x1002323C: jal         0x10026868
    // 0x10023240: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    __ull_div_recomp(rdram, ctx);
        goto after_1;
    // 0x10023240: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    after_1:
    // 0x10023244: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x10023248: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    // 0x1002324C: bltz        $v0, L_100232FC
    if (SIGNED(ctx->r2) < 0) {
        // 0x10023250: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_100232FC;
    }
    // 0x10023250: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x10023254: bgtz        $v0, L_10023264
    if (SIGNED(ctx->r2) > 0) {
        // 0x10023258: nop
    
            goto L_10023264;
    }
    // 0x10023258: nop

    // 0x1002325C: beql        $v1, $zero, L_10023300
    if (ctx->r3 == 0) {
        // 0x10023260: addiu       $t4, $zero, 0x18
        ctx->r12 = ADD32(0, 0X18);
            goto L_10023300;
    }
    goto skip_4;
    // 0x10023260: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    skip_4:
L_10023264:
    // 0x10023264: blez        $s0, L_100232FC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x10023268: sra         $t4, $t1, 31
        ctx->r12 = S32(SIGNED(ctx->r9) >> 31);
            goto L_100232FC;
    }
    // 0x10023268: sra         $t4, $t1, 31
    ctx->r12 = S32(SIGNED(ctx->r9) >> 31);
    // 0x1002326C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x10023270: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x10023274: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x10023278: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x1002327C: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x10023280: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x10023284: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
L_10023288:
    // 0x10023288: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x1002328C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x10023290: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x10023294: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x10023298: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1002329C: jal         0x10022F60
    // 0x100232A0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    lldiv_recomp(rdram, ctx);
        goto after_2;
    // 0x100232A0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_2:
    // 0x100232A4: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x100232A8: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x100232AC: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    // 0x100232B0: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x100232B4: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x100232B8: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x100232BC: addu        $t7, $s2, $a0
    ctx->r15 = ADD32(ctx->r18, ctx->r4);
    // 0x100232C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x100232C4: addu        $t5, $t3, $s3
    ctx->r13 = ADD32(ctx->r11, ctx->r19);
    // 0x100232C8: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x100232CC: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x100232D0: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x100232D4: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x100232D8: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x100232DC: bltz        $t8, L_100232FC
    if (SIGNED(ctx->r24) < 0) {
        // 0x100232E0: sw          $t9, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r25;
            goto L_100232FC;
    }
    // 0x100232E0: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x100232E4: bgtz        $t8, L_100232F4
    if (SIGNED(ctx->r24) > 0) {
        // 0x100232E8: nop
    
            goto L_100232F4;
    }
    // 0x100232E8: nop

    // 0x100232EC: beql        $t9, $zero, L_10023300
    if (ctx->r25 == 0) {
        // 0x100232F0: addiu       $t4, $zero, 0x18
        ctx->r12 = ADD32(0, 0X18);
            goto L_10023300;
    }
    goto skip_5;
    // 0x100232F0: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    skip_5:
L_100232F4:
    // 0x100232F4: bgtzl       $s0, L_10023288
    if (SIGNED(ctx->r16) > 0) {
        // 0x100232F8: lw          $t6, 0x38($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X38);
            goto L_10023288;
    }
    goto skip_6;
    // 0x100232F8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    skip_6:
L_100232FC:
    // 0x100232FC: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
L_10023300:
    // 0x10023300: subu        $a2, $t4, $s0
    ctx->r6 = SUB32(ctx->r12, ctx->r16);
    // 0x10023304: sw          $a2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r6;
    // 0x10023308: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x1002330C: jal         0x10022EC0
    // 0x10023310: addu        $a1, $s2, $s0
    ctx->r5 = ADD32(ctx->r18, ctx->r16);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x10023310: addu        $a1, $s2, $s0
    ctx->r5 = ADD32(ctx->r18, ctx->r16);
    after_3:
    // 0x10023314: lw          $a1, 0x14($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X14);
    // 0x10023318: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x1002331C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x10023320: beq         $at, $zero, L_1002332C
    if (ctx->r1 == 0) {
        // 0x10023324: subu        $t5, $a0, $a1
        ctx->r13 = SUB32(ctx->r4, ctx->r5);
            goto L_1002332C;
    }
    // 0x10023324: subu        $t5, $a0, $a1
    ctx->r13 = SUB32(ctx->r4, ctx->r5);
    // 0x10023328: sw          $t5, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r13;
L_1002332C:
    // 0x1002332C: bgezl       $a0, L_10023370
    if (SIGNED(ctx->r4) >= 0) {
        // 0x10023330: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_10023370;
    }
    goto skip_7;
    // 0x10023330: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_7:
    // 0x10023334: lw          $t6, 0x30($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X30);
    // 0x10023338: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x1002333C: andi        $t7, $t6, 0x14
    ctx->r15 = ctx->r14 & 0X14;
    // 0x10023340: bnel        $t7, $at, L_10023370
    if (ctx->r15 != ctx->r1) {
        // 0x10023344: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_10023370;
    }
    goto skip_8;
    // 0x10023344: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_8:
    // 0x10023348: lw          $t8, 0x28($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X28);
    // 0x1002334C: lw          $t9, 0xC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC);
    // 0x10023350: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x10023354: subu        $t2, $t8, $t9
    ctx->r10 = SUB32(ctx->r24, ctx->r25);
    // 0x10023358: subu        $t3, $t2, $v0
    ctx->r11 = SUB32(ctx->r10, ctx->r2);
    // 0x1002335C: subu        $s0, $t3, $a1
    ctx->r16 = SUB32(ctx->r11, ctx->r5);
    // 0x10023360: blez        $s0, L_1002336C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x10023364: addu        $t4, $v0, $s0
        ctx->r12 = ADD32(ctx->r2, ctx->r16);
            goto L_1002336C;
    }
    // 0x10023364: addu        $t4, $v0, $s0
    ctx->r12 = ADD32(ctx->r2, ctx->r16);
    // 0x10023368: sw          $t4, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r12;
L_1002336C:
    // 0x1002336C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_10023370:
    // 0x10023370: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x10023374: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x10023378: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x1002337C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x10023380: jr          $ra
    // 0x10023384: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    return;
    // 0x10023384: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_1515C6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515C6F4: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x1515C6F8: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x1515C6FC: sll         $s2, $a2, 16
    ctx->r18 = S32(ctx->r6 << 16);
    // 0x1515C700: sra         $t6, $s2, 16
    ctx->r14 = S32(SIGNED(ctx->r18) >> 16);
    // 0x1515C704: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x1515C708: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x1515C70C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1515C710: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x1515C714: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x1515C718: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x1515C71C: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x1515C720: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x1515C724: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x1515C728: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x1515C72C: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x1515C730: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x1515C734: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x1515C738: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x1515C73C: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x1515C740: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x1515C744: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x1515C748: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x1515C74C: sw          $a2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r6;
    // 0x1515C750: lb          $t7, 0x2C($s3)
    ctx->r15 = MEM_B(ctx->r19, 0X2C);
    // 0x1515C754: sll         $a1, $s2, 16
    ctx->r5 = S32(ctx->r18 << 16);
    // 0x1515C758: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1515C75C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x1515C760: bne         $at, $zero, L_1515CF50
    if (ctx->r1 != 0) {
        // 0x1515C764: addiu       $a0, $s3, 0x84
        ctx->r4 = ADD32(ctx->r19, 0X84);
            goto L_1515CF50;
    }
    // 0x1515C764: addiu       $a0, $s3, 0x84
    ctx->r4 = ADD32(ctx->r19, 0X84);
    // 0x1515C768: lbu         $t9, 0x25($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X25);
    // 0x1515C76C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1515C770: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x1515C774: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x1515C778: addiu       $a2, $t6, 0xA0
    ctx->r6 = ADD32(ctx->r14, 0XA0);
    // 0x1515C77C: jal         0x151D5D60
    // 0x1515C780: addiu       $a3, $sp, 0x13C
    ctx->r7 = ADD32(ctx->r29, 0X13C);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x1515C780: addiu       $a3, $sp, 0x13C
    ctx->r7 = ADD32(ctx->r29, 0X13C);
    after_0:
    // 0x1515C784: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515C788: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x1515C78C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1515C790: beq         $t7, $zero, L_1515CF50
    if (ctx->r15 == 0) {
        // 0x1515C794: addu        $t9, $t9, $s2
        ctx->r25 = ADD32(ctx->r25, ctx->r18);
            goto L_1515CF50;
    }
    // 0x1515C794: addu        $t9, $t9, $s2
    ctx->r25 = ADD32(ctx->r25, ctx->r18);
    // 0x1515C798: lw          $s1, 0x98($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X98);
    // 0x1515C79C: sb          $t8, 0x137($sp)
    MEM_B(0X137, ctx->r29) = ctx->r24;
    // 0x1515C7A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1515C7A4: lbu         $t7, 0x1B($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X1B);
    // 0x1515C7A8: lw          $fp, 0x94($s3)
    ctx->r30 = MEM_W(ctx->r19, 0X94);
    // 0x1515C7AC: subu        $t9, $t9, $s2
    ctx->r25 = SUB32(ctx->r25, ctx->r18);
    // 0x1515C7B0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1515C7B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1515C7B8: lw          $t6, -0x4010($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4010);
    // 0x1515C7BC: lbu         $t8, 0x1C($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X1C);
    // 0x1515C7C0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1515C7C4: addu        $t9, $t9, $s2
    ctx->r25 = ADD32(ctx->r25, ctx->r18);
    // 0x1515C7C8: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x1515C7CC: addu        $t4, $t9, $t6
    ctx->r12 = ADD32(ctx->r25, ctx->r14);
    // 0x1515C7D0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1515C7D4: lbu         $t9, 0x1D($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X1D);
    // 0x1515C7D8: addiu       $t4, $t4, 0x2F8
    ctx->r12 = ADD32(ctx->r12, 0X2F8);
    // 0x1515C7DC: addiu       $a0, $sp, 0xE2
    ctx->r4 = ADD32(ctx->r29, 0XE2);
    // 0x1515C7E0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1515C7E4: lbu         $t6, 0x1E($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X1E);
    // 0x1515C7E8: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    // 0x1515C7EC: addiu       $a2, $sp, 0xDE
    ctx->r6 = ADD32(ctx->r29, 0XDE);
    // 0x1515C7F0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x1515C7F4: lbu         $t7, 0x17($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X17);
    // 0x1515C7F8: addiu       $a3, $sp, 0xDC
    ctx->r7 = ADD32(ctx->r29, 0XDC);
    // 0x1515C7FC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x1515C800: lbu         $t8, 0x18($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X18);
    // 0x1515C804: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x1515C808: lbu         $t9, 0x19($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X19);
    // 0x1515C80C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x1515C810: lbu         $t6, 0x1A($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X1A);
    // 0x1515C814: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x1515C818: lbu         $t7, 0x1F($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X1F);
    // 0x1515C81C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x1515C820: lbu         $t8, 0x15($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X15);
    // 0x1515C824: sw          $t4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r12;
    // 0x1515C828: jal         0x151441A4
    // 0x1515C82C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    func_151441A4(rdram, ctx);
        goto after_1;
    // 0x1515C82C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    after_1:
    // 0x1515C830: lbu         $t9, 0x1B($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X1B);
    // 0x1515C834: addiu       $a0, $sp, 0xDA
    ctx->r4 = ADD32(ctx->r29, 0XDA);
    // 0x1515C838: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    // 0x1515C83C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1515C840: lbu         $t6, 0x1C($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X1C);
    // 0x1515C844: addiu       $a2, $sp, 0xD6
    ctx->r6 = ADD32(ctx->r29, 0XD6);
    // 0x1515C848: addiu       $a3, $sp, 0xD4
    ctx->r7 = ADD32(ctx->r29, 0XD4);
    // 0x1515C84C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1515C850: lbu         $t7, 0x1D($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X1D);
    // 0x1515C854: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1515C858: lbu         $t8, 0x1E($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X1E);
    // 0x1515C85C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1515C860: lbu         $t9, 0x17($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X17);
    // 0x1515C864: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x1515C868: lbu         $t6, 0x18($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X18);
    // 0x1515C86C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1515C870: lbu         $t7, 0x19($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X19);
    // 0x1515C874: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x1515C878: lbu         $t8, 0x1A($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X1A);
    // 0x1515C87C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x1515C880: lbu         $t9, 0x1F($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X1F);
    // 0x1515C884: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x1515C888: lbu         $t6, 0x16($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X16);
    // 0x1515C88C: jal         0x151442FC
    // 0x1515C890: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    func_151442FC(rdram, ctx);
        goto after_2;
    // 0x1515C890: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    after_2:
    // 0x1515C894: addiu       $s2, $sp, 0x137
    ctx->r18 = ADD32(ctx->r29, 0X137);
    // 0x1515C898: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x1515C89C: addiu       $t7, $zero, 0x42
    ctx->r15 = ADD32(0, 0X42);
    // 0x1515C8A0: addiu       $t8, $zero, 0x3E
    ctx->r24 = ADD32(0, 0X3E);
    // 0x1515C8A4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x1515C8A8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1515C8AC: addiu       $a1, $a1, 0xE78
    ctx->r5 = ADD32(ctx->r5, 0XE78);
    // 0x1515C8B0: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x1515C8B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1515C8B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1515C8BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1515C8C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1515C8C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1515C8C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1515C8CC: jal         0x15142E24
    // 0x1515C8D0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_15142E24(rdram, ctx);
        goto after_3;
    // 0x1515C8D0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_3:
    // 0x1515C8D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1515C8D8: lbu         $a1, 0x21($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X21);
    // 0x1515C8DC: jal         0x1513F4E4
    // 0x1515C8E0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_4;
    // 0x1515C8E0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x1515C8E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1515C8E8: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    // 0x1515C8EC: jal         0x15142B7C
    // 0x1515C8F0: lw          $a2, 0x28($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X28);
    func_15142B7C(rdram, ctx);
        goto after_5;
    // 0x1515C8F0: lw          $a2, 0x28($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X28);
    after_5:
    // 0x1515C8F4: lh          $t9, 0xE0($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XE0);
    // 0x1515C8F8: lh          $t6, 0xDE($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XDE);
    // 0x1515C8FC: lh          $t7, 0xDC($sp)
    ctx->r15 = MEM_H(ctx->r29, 0XDC);
    // 0x1515C900: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1515C904: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1515C908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1515C90C: lh          $a3, 0xE2($sp)
    ctx->r7 = MEM_H(ctx->r29, 0XE2);
    // 0x1515C910: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1515C914: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1515C918: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1515C91C: jal         0x15142CF0
    // 0x1515C920: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_15142CF0(rdram, ctx);
        goto after_6;
    // 0x1515C920: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_6:
    // 0x1515C924: lh          $t8, 0xD4($sp)
    ctx->r24 = MEM_H(ctx->r29, 0XD4);
    // 0x1515C928: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1515C92C: lh          $a1, 0xDA($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XDA);
    // 0x1515C930: lh          $a2, 0xD8($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XD8);
    // 0x1515C934: lh          $a3, 0xD6($sp)
    ctx->r7 = MEM_H(ctx->r29, 0XD6);
    // 0x1515C938: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x1515C93C: jal         0x15142C10
    // 0x1515C940: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15142C10(rdram, ctx);
        goto after_7;
    // 0x1515C940: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_7:
    // 0x1515C944: lbu         $t9, 0x14($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X14);
    // 0x1515C948: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1515C94C: lw          $t4, 0x110($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X110);
    // 0x1515C950: andi        $t6, $t9, 0x1
    ctx->r14 = ctx->r25 & 0X1;
    // 0x1515C954: beq         $t6, $zero, L_1515C964
    if (ctx->r14 == 0) {
        // 0x1515C958: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1515C964;
    }
    // 0x1515C958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1515C95C: b           L_1515C968
    // 0x1515C960: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
        goto L_1515C968;
    // 0x1515C960: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
L_1515C964:
    // 0x1515C964: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1515C968:
    // 0x1515C968: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1515C96C: lw          $t8, 0x2C9C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2C9C);
    // 0x1515C970: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x1515C974: or          $t7, $v1, $at
    ctx->r15 = ctx->r3 | ctx->r1;
    // 0x1515C978: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x1515C97C: or          $t7, $t9, $zero
    ctx->r15 = ctx->r25 | 0;
    // 0x1515C980: lbu         $t9, 0x20($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X20);
    // 0x1515C984: ori         $a1, $t7, 0x2CA0
    ctx->r5 = ctx->r15 | 0X2CA0;
    // 0x1515C988: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x1515C98C: addiu       $t7, $t7, 0x4AC8
    ctx->r15 = ADD32(ctx->r15, 0X4AC8);
    // 0x1515C990: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x1515C994: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1515C998: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x1515C99C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1515C9A0: sw          $t4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r12;
    // 0x1515C9A4: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x1515C9A8: jal         0x15142FBC
    // 0x1515C9AC: or          $a2, $t8, $t9
    ctx->r6 = ctx->r24 | ctx->r25;
    func_15142FBC(rdram, ctx);
        goto after_8;
    // 0x1515C9AC: or          $a2, $t8, $t9
    ctx->r6 = ctx->r24 | ctx->r25;
    after_8:
    // 0x1515C9B0: lb          $t2, 0x2E($s3)
    ctx->r10 = MEM_B(ctx->r19, 0X2E);
    // 0x1515C9B4: lw          $t4, 0x110($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X110);
    // 0x1515C9B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1515C9BC: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x1515C9C0: bgezl       $t2, L_1515C9D4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x1515C9C4: addiu       $a3, $t2, -0x1
        ctx->r7 = ADD32(ctx->r10, -0X1);
            goto L_1515C9D4;
    }
    goto skip_0;
    // 0x1515C9C4: addiu       $a3, $t2, -0x1
    ctx->r7 = ADD32(ctx->r10, -0X1);
    skip_0:
    // 0x1515C9C8: lbu         $t2, 0x25($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X25);
    // 0x1515C9CC: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x1515C9D0: addiu       $a3, $t2, -0x1
    ctx->r7 = ADD32(ctx->r10, -0X1);
L_1515C9D4:
    // 0x1515C9D4: bgez        $a3, L_1515C9E4
    if (SIGNED(ctx->r7) >= 0) {
        // 0x1515C9D8: sll         $t6, $t2, 4
        ctx->r14 = S32(ctx->r10 << 4);
            goto L_1515C9E4;
    }
    // 0x1515C9D8: sll         $t6, $t2, 4
    ctx->r14 = S32(ctx->r10 << 4);
    // 0x1515C9DC: lbu         $a3, 0x25($s3)
    ctx->r7 = MEM_BU(ctx->r19, 0X25);
    // 0x1515C9E0: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
L_1515C9E4:
    // 0x1515C9E4: addu        $t7, $fp, $t6
    ctx->r15 = ADD32(ctx->r30, ctx->r14);
    // 0x1515C9E8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x1515C9EC: addiu       $s7, $sp, 0x11C
    ctx->r23 = ADD32(ctx->r29, 0X11C);
    // 0x1515C9F0: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x1515C9F4: sw          $at, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r1;
    // 0x1515C9F8: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x1515C9FC: addu        $t1, $fp, $t6
    ctx->r9 = ADD32(ctx->r30, ctx->r14);
    // 0x1515CA00: addiu       $t3, $sp, 0x128
    ctx->r11 = ADD32(ctx->r29, 0X128);
    // 0x1515CA04: sw          $t9, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r25;
    // 0x1515CA08: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x1515CA0C: addiu       $t9, $zero, 0x800
    ctx->r25 = ADD32(0, 0X800);
    // 0x1515CA10: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1515CA14: sw          $at, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r1;
    // 0x1515CA18: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x1515CA1C: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x1515CA20: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x1515CA24: lw          $t7, 0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X4);
    // 0x1515CA28: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x1515CA2C: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x1515CA30: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x1515CA34: lb          $v0, 0x2C($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2C);
    // 0x1515CA38: lwc1        $f4, 0x11C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1515CA3C: lwc1        $f6, 0x0($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X0);
    // 0x1515CA40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1515CA44: div         $zero, $t9, $v0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r2)));
    // 0x1515CA48: mflo        $s5
    ctx->r21 = lo;
    // 0x1515CA4C: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x1515CA50: lwc1        $f8, 0x120($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1515CA54: div         $zero, $t6, $v0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r2)));
    // 0x1515CA58: sub.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1515CA5C: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1515CA60: bne         $v0, $zero, L_1515CA6C
    if (ctx->r2 != 0) {
        // 0x1515CA64: nop
    
            goto L_1515CA6C;
    }
    // 0x1515CA64: nop

    // 0x1515CA68: break       7
    do_break(353749608);
L_1515CA6C:
    // 0x1515CA6C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1515CA70: bne         $v0, $at, L_1515CA84
    if (ctx->r2 != ctx->r1) {
        // 0x1515CA74: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1515CA84;
    }
    // 0x1515CA74: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1515CA78: bne         $t9, $at, L_1515CA84
    if (ctx->r25 != ctx->r1) {
        // 0x1515CA7C: nop
    
            goto L_1515CA84;
    }
    // 0x1515CA7C: nop

    // 0x1515CA80: break       6
    do_break(353749632);
L_1515CA84:
    // 0x1515CA84: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1515CA88: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x1515CA8C: bne         $v0, $zero, L_1515CA98
    if (ctx->r2 != 0) {
        // 0x1515CA90: nop
    
            goto L_1515CA98;
    }
    // 0x1515CA90: nop

    // 0x1515CA94: break       7
    do_break(353749652);
L_1515CA98:
    // 0x1515CA98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1515CA9C: bne         $v0, $at, L_1515CAB0
    if (ctx->r2 != ctx->r1) {
        // 0x1515CAA0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1515CAB0;
    }
    // 0x1515CAA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1515CAA4: bne         $t6, $at, L_1515CAB0
    if (ctx->r14 != ctx->r1) {
        // 0x1515CAA8: nop
    
            goto L_1515CAB0;
    }
    // 0x1515CAA8: nop

    // 0x1515CAAC: break       6
    do_break(353749676);
L_1515CAB0:
    // 0x1515CAB0: sub.s       $f24, $f6, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x1515CAB4: lwc1        $f10, 0x12C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1515CAB8: mflo        $s6
    ctx->r22 = lo;
    // 0x1515CABC: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1515CAC0: lwc1        $f8, 0x130($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X130);
    // 0x1515CAC4: sub.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1515CAC8: mul.s       $f10, $f2, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x1515CACC: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x1515CAD0: mul.s       $f6, $f22, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x1515CAD4: sub.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1515CAD8: sub.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1515CADC: mul.s       $f10, $f18, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x1515CAE0: nop

    // 0x1515CAE4: mul.s       $f6, $f24, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x1515CAE8: nop

    // 0x1515CAEC: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x1515CAF0: nop

    // 0x1515CAF4: mul.s       $f8, $f20, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x1515CAF8: sub.s       $f14, $f10, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1515CAFC: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1515CB00: nop

    // 0x1515CB04: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1515CB08: sub.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1515CB0C: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1515CB10: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1515CB14: lwc1        $f6, 0x11C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1515CB18: add.s       $f26, $f4, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1515CB1C: c.eq.s      $f30, $f26
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f30.fl == ctx->f26.fl;
    // 0x1515CB20: mov.s       $f28, $f26
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    ctx->f28.fl = ctx->f26.fl;
    // 0x1515CB24: bc1f        L_1515CB3C
    if (!c1cs) {
        // 0x1515CB28: nop
    
            goto L_1515CB3C;
    }
    // 0x1515CB28: nop

    // 0x1515CB2C: mov.s       $f18, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    ctx->f18.fl = ctx->f30.fl;
    // 0x1515CB30: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    // 0x1515CB34: b           L_1515CB60
    // 0x1515CB38: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
        goto L_1515CB60;
    // 0x1515CB38: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
L_1515CB3C:
    // 0x1515CB3C: sqrt.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = sqrtf(ctx->f28.fl);
    // 0x1515CB40: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1515CB44: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1515CB48: mul.s       $f18, $f12, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1515CB4C: nop

    // 0x1515CB50: mul.s       $f20, $f14, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1515CB54: nop

    // 0x1515CB58: mul.s       $f22, $f16, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1515CB5C: nop

L_1515CB60:
    // 0x1515CB60: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x1515CB64: lw          $t9, 0x13C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CB68: addiu       $s4, $zero, 0x3FF
    ctx->r20 = ADD32(0, 0X3FF);
    // 0x1515CB6C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1515CB70: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1515CB74: lui         $s2, 0x502
    ctx->r18 = S32(0X502 << 16);
    // 0x1515CB78: lui         $ra, 0x500
    ctx->r31 = S32(0X500 << 16);
    // 0x1515CB7C: lui         $t5, 0x100
    ctx->r13 = S32(0X100 << 16);
    // 0x1515CB80: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x1515CB84: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x1515CB88: or          $t0, $s6, $zero
    ctx->r8 = ctx->r22 | 0;
    // 0x1515CB8C: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
    // 0x1515CB90: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1515CB94: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CB98: ori         $t5, $t5, 0x4008
    ctx->r13 = ctx->r13 | 0X4008;
    // 0x1515CB9C: add.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x1515CBA0: ori         $ra, $ra, 0x204
    ctx->r31 = ctx->r31 | 0X204;
    // 0x1515CBA4: ori         $s2, $s2, 0x604
    ctx->r18 = ctx->r18 | 0X604;
    // 0x1515CBA8: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1515CBAC: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x1515CBB0: nop

    // 0x1515CBB4: sh          $t8, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r24;
    // 0x1515CBB8: lwc1        $f8, 0x124($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1515CBBC: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CBC0: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x1515CBC4: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1515CBC8: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x1515CBCC: nop

    // 0x1515CBD0: sh          $t6, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r14;
    // 0x1515CBD4: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CBD8: sh          $zero, 0x8($t7)
    MEM_H(0X8, ctx->r15) = 0;
    // 0x1515CBDC: lw          $t9, 0x13C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CBE0: sh          $s4, 0xA($t9)
    MEM_H(0XA, ctx->r25) = ctx->r20;
    // 0x1515CBE4: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CBE8: sb          $a1, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r5;
    // 0x1515CBEC: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CBF0: sb          $a1, 0xD($t8)
    MEM_B(0XD, ctx->r24) = ctx->r5;
    // 0x1515CBF4: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CBF8: sb          $a1, 0xE($t7)
    MEM_B(0XE, ctx->r15) = ctx->r5;
    // 0x1515CBFC: lw          $t9, 0x13C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CC00: sb          $zero, 0xF($t9)
    MEM_B(0XF, ctx->r25) = 0;
    // 0x1515CC04: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CC08: sh          $zero, 0x6($t6)
    MEM_H(0X6, ctx->r14) = 0;
    // 0x1515CC0C: lwc1        $f4, 0x11C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1515CC10: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CC14: sub.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x1515CC18: addiu       $t7, $t8, 0x10
    ctx->r15 = ADD32(ctx->r24, 0X10);
    // 0x1515CC1C: sw          $t7, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r15;
    // 0x1515CC20: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1515CC24: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x1515CC28: nop

    // 0x1515CC2C: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x1515CC30: lwc1        $f6, 0x120($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1515CC34: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CC38: sub.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x1515CC3C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1515CC40: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x1515CC44: nop

    // 0x1515CC48: sh          $t9, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r25;
    // 0x1515CC4C: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1515CC50: lw          $t9, 0x13C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CC54: sub.s       $f6, $f10, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f22.fl;
    // 0x1515CC58: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1515CC5C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x1515CC60: nop

    // 0x1515CC64: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x1515CC68: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CC6C: sh          $zero, 0x8($t6)
    MEM_H(0X8, ctx->r14) = 0;
    // 0x1515CC70: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CC74: sh          $zero, 0xA($t7)
    MEM_H(0XA, ctx->r15) = 0;
    // 0x1515CC78: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CC7C: sb          $a1, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r5;
    // 0x1515CC80: lw          $t9, 0x13C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CC84: sb          $a1, 0xD($t9)
    MEM_B(0XD, ctx->r25) = ctx->r5;
    // 0x1515CC88: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CC8C: sb          $a1, 0xE($t6)
    MEM_B(0XE, ctx->r14) = ctx->r5;
    // 0x1515CC90: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CC94: sb          $zero, 0xF($t7)
    MEM_B(0XF, ctx->r15) = 0;
    // 0x1515CC98: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CC9C: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x1515CCA0: lw          $t9, 0x13C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CCA4: addiu       $t6, $t9, 0x10
    ctx->r14 = ADD32(ctx->r25, 0X10);
    // 0x1515CCA8: sw          $t6, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r14;
    // 0x1515CCAC: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
L_1515CCB0:
    // 0x1515CCB0: lwc1        $f10, 0x0($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X0);
    // 0x1515CCB4: lwc1        $f6, 0x12C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1515CCB8: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x1515CCBC: sub.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1515CCC0: lwc1        $f10, 0x130($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X130);
    // 0x1515CCC4: or          $t2, $a3, $zero
    ctx->r10 = ctx->r7 | 0;
    // 0x1515CCC8: sub.s       $f22, $f6, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x1515CCCC: lwc1        $f4, 0x8($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X8);
    // 0x1515CCD0: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x1515CCD4: sub.s       $f24, $f10, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1515CCD8: lwc1        $f4, 0x120($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1515CCDC: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1515CCE0: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1515CCE4: sub.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1515CCE8: mul.s       $f6, $f2, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x1515CCEC: lwc1        $f10, 0x11C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1515CCF0: mul.s       $f4, $f22, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x1515CCF4: sub.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x1515CCF8: sub.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x1515CCFC: mul.s       $f6, $f18, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x1515CD00: nop

    // 0x1515CD04: mul.s       $f4, $f24, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f0.fl);
    // 0x1515CD08: nop

    // 0x1515CD0C: mul.s       $f10, $f0, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x1515CD10: nop

    // 0x1515CD14: mul.s       $f8, $f20, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x1515CD18: sub.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x1515CD1C: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1515CD20: nop

    // 0x1515CD24: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1515CD28: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x1515CD2C: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1515CD30: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1515CD34: lwc1        $f4, 0x128($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
    // 0x1515CD38: add.s       $f28, $f10, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f28.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1515CD3C: c.eq.s      $f30, $f28
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f30.fl == ctx->f28.fl;
    // 0x1515CD40: nop

    // 0x1515CD44: bc1f        L_1515CD5C
    if (!c1cs) {
        // 0x1515CD48: nop
    
            goto L_1515CD5C;
    }
    // 0x1515CD48: nop

    // 0x1515CD4C: mov.s       $f18, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    ctx->f18.fl = ctx->f30.fl;
    // 0x1515CD50: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    // 0x1515CD54: b           L_1515CD80
    // 0x1515CD58: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
        goto L_1515CD80;
    // 0x1515CD58: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
L_1515CD5C:
    // 0x1515CD5C: sqrt.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = sqrtf(ctx->f28.fl);
    // 0x1515CD60: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1515CD64: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1515CD68: mul.s       $f18, $f12, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1515CD6C: nop

    // 0x1515CD70: mul.s       $f20, $f14, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1515CD74: nop

    // 0x1515CD78: mul.s       $f22, $f16, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1515CD7C: nop

L_1515CD80:
    // 0x1515CD80: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x1515CD84: lbu         $t7, 0x1A($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X1A);
    // 0x1515CD88: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1515CD8C: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1515CD90: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CD94: addu        $t0, $t0, $s6
    ctx->r8 = ADD32(ctx->r8, ctx->r22);
    // 0x1515CD98: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x1515CD9C: nop

    // 0x1515CDA0: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x1515CDA4: lwc1        $f6, 0x12C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1515CDA8: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CDAC: add.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x1515CDB0: mflo        $v0
    ctx->r2 = lo;
    // 0x1515CDB4: sra         $t8, $v0, 8
    ctx->r24 = S32(SIGNED(ctx->r2) >> 8);
    // 0x1515CDB8: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x1515CDBC: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1515CDC0: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x1515CDC4: nop

    // 0x1515CDC8: sh          $t9, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r25;
    // 0x1515CDCC: lwc1        $f8, 0x130($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X130);
    // 0x1515CDD0: lw          $t9, 0x13C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CDD4: add.s       $f6, $f8, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x1515CDD8: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1515CDDC: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x1515CDE0: nop

    // 0x1515CDE4: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x1515CDE8: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CDEC: sh          $a2, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r6;
    // 0x1515CDF0: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CDF4: sh          $s4, 0xA($t7)
    MEM_H(0XA, ctx->r15) = ctx->r20;
    // 0x1515CDF8: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CDFC: sb          $a1, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r5;
    // 0x1515CE00: lw          $t9, 0x13C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CE04: sb          $a1, 0xD($t9)
    MEM_B(0XD, ctx->r25) = ctx->r5;
    // 0x1515CE08: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CE0C: sb          $a1, 0xE($t6)
    MEM_B(0XE, ctx->r14) = ctx->r5;
    // 0x1515CE10: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CE14: sb          $v0, 0xF($t7)
    MEM_B(0XF, ctx->r15) = ctx->r2;
    // 0x1515CE18: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CE1C: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x1515CE20: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x1515CE24: lw          $t9, 0x13C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CE28: sub.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x1515CE2C: addiu       $t6, $t9, 0x10
    ctx->r14 = ADD32(ctx->r25, 0X10);
    // 0x1515CE30: sw          $t6, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r14;
    // 0x1515CE34: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1515CE38: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x1515CE3C: nop

    // 0x1515CE40: sh          $t8, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r24;
    // 0x1515CE44: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1515CE48: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CE4C: sub.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x1515CE50: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1515CE54: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x1515CE58: nop

    // 0x1515CE5C: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x1515CE60: lwc1        $f6, 0x130($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X130);
    // 0x1515CE64: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CE68: sub.s       $f4, $f6, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f22.fl;
    // 0x1515CE6C: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1515CE70: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x1515CE74: nop

    // 0x1515CE78: sh          $t9, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r25;
    // 0x1515CE7C: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CE80: sh          $a2, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r6;
    // 0x1515CE84: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CE88: addu        $a2, $a2, $s5
    ctx->r6 = ADD32(ctx->r6, ctx->r21);
    // 0x1515CE8C: sh          $zero, 0xA($t6)
    MEM_H(0XA, ctx->r14) = 0;
    // 0x1515CE90: lw          $t9, 0x13C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CE94: sb          $a1, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r5;
    // 0x1515CE98: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CE9C: sb          $a1, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r5;
    // 0x1515CEA0: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CEA4: sb          $a1, 0xE($t8)
    MEM_B(0XE, ctx->r24) = ctx->r5;
    // 0x1515CEA8: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CEAC: sb          $v0, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r2;
    // 0x1515CEB0: lw          $t9, 0x13C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CEB4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1515CEB8: sh          $zero, 0x6($t9)
    MEM_H(0X6, ctx->r25) = 0;
    // 0x1515CEBC: lw          $t7, 0x13C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CEC0: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x1515CEC4: sw          $t8, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r24;
    // 0x1515CEC8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x1515CECC: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x1515CED0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1515CED4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1515CED8: addiu       $t9, $t6, -0x40
    ctx->r25 = ADD32(ctx->r14, -0X40);
    // 0x1515CEDC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x1515CEE0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1515CEE4: sw          $ra, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r31;
    // 0x1515CEE8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x1515CEEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1515CEF0: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x1515CEF4: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x1515CEF8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1515CEFC: bgez        $a3, L_1515CF14
    if (SIGNED(ctx->r7) >= 0) {
        // 0x1515CF00: addiu       $t1, $t1, -0x10
        ctx->r9 = ADD32(ctx->r9, -0X10);
            goto L_1515CF14;
    }
    // 0x1515CF00: addiu       $t1, $t1, -0x10
    ctx->r9 = ADD32(ctx->r9, -0X10);
    // 0x1515CF04: lbu         $a3, 0x25($s3)
    ctx->r7 = MEM_BU(ctx->r19, 0X25);
    // 0x1515CF08: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x1515CF0C: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
    // 0x1515CF10: addu        $t1, $fp, $t7
    ctx->r9 = ADD32(ctx->r30, ctx->r15);
L_1515CF14:
    // 0x1515CF14: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x1515CF18: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x1515CF1C: sw          $at, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r1;
    // 0x1515CF20: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x1515CF24: sw          $t6, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r14;
    // 0x1515CF28: sw          $at, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r1;
    // 0x1515CF2C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x1515CF30: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x1515CF34: lw          $t7, 0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X4);
    // 0x1515CF38: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x1515CF3C: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x1515CF40: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x1515CF44: lb          $t8, 0x2D($s3)
    ctx->r24 = MEM_B(ctx->r19, 0X2D);
    // 0x1515CF48: bnel        $t2, $t8, L_1515CCB0
    if (ctx->r10 != ctx->r24) {
        // 0x1515CF4C: lwc1        $f8, 0x128($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
            goto L_1515CCB0;
    }
    goto skip_1;
    // 0x1515CF4C: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    skip_1:
L_1515CF50:
    // 0x1515CF50: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1515CF54: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x1515CF58: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x1515CF5C: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x1515CF60: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x1515CF64: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x1515CF68: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x1515CF6C: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x1515CF70: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x1515CF74: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x1515CF78: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x1515CF7C: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x1515CF80: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x1515CF84: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x1515CF88: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x1515CF8C: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x1515CF90: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x1515CF94: jr          $ra
    // 0x1515CF98: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    return;
    // 0x1515CF98: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void func_1513137C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513137C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x15131380: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x15131384: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15131388: lbu         $t6, 0x70($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X70);
    // 0x1513138C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x15131390: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x15131394: beq         $at, $zero, L_151314BC
    if (ctx->r1 == 0) {
        // 0x15131398: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_151314BC;
    }
    // 0x15131398: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1513139C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151313A0: addu        $at, $at, $t7
    gpr jr_addend_151313A8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x151313A4: lw          $t7, 0x3800($at)
    ctx->r15 = ADD32(ctx->r1, 0X3800);
    // 0x151313A8: jr          $t7
    // 0x151313AC: nop

    switch (jr_addend_151313A8 >> 2) {
        case 0: goto L_151313B0; break;
        case 1: goto L_151313DC; break;
        case 2: goto L_15131410; break;
        case 3: goto L_15131444; break;
        case 4: goto L_1513145C; break;
        case 5: goto L_15131444; break;
        case 6: goto L_15131478; break;
        case 7: goto L_1513149C; break;
        default: switch_error(__func__, 0x151313A8, 0x800A3800);
    }
    // 0x151313AC: nop

L_151313B0:
    // 0x151313B0: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x151313B4: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x151313B8: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x151313BC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x151313C0: lbu         $t9, 0x2B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2B);
    // 0x151313C4: lbu         $t8, 0x27($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X27);
    // 0x151313C8: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151313CC: mflo        $t0
    ctx->r8 = lo;
    // 0x151313D0: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x151313D4: b           L_15131508
    // 0x151313D8: sh          $t1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r9;
        goto L_15131508;
    // 0x151313D8: sh          $t1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r9;
L_151313DC:
    // 0x151313DC: lbu         $t2, 0x24($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X24);
    // 0x151313E0: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x151313E4: lbu         $t3, 0x25($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X25);
    // 0x151313E8: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
    // 0x151313EC: lbu         $t4, 0x26($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X26);
    // 0x151313F0: sh          $t4, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r12;
    // 0x151313F4: lbu         $t6, 0x2B($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2B);
    // 0x151313F8: lbu         $t5, 0x27($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X27);
    // 0x151313FC: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15131400: mflo        $t7
    ctx->r15 = lo;
    // 0x15131404: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x15131408: b           L_15131508
    // 0x1513140C: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
        goto L_15131508;
    // 0x1513140C: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
L_15131410:
    // 0x15131410: lbu         $t9, 0x28($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X28);
    // 0x15131414: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
    // 0x15131418: lbu         $t0, 0x29($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X29);
    // 0x1513141C: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
    // 0x15131420: lbu         $t1, 0x2A($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2A);
    // 0x15131424: sh          $t1, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r9;
    // 0x15131428: lbu         $t3, 0x2B($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2B);
    // 0x1513142C: lbu         $t2, 0x27($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X27);
    // 0x15131430: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15131434: mflo        $t4
    ctx->r12 = lo;
    // 0x15131438: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x1513143C: b           L_15131508
    // 0x15131440: sh          $t5, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r13;
        goto L_15131508;
    // 0x15131440: sh          $t5, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r13;
L_15131444:
    // 0x15131444: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    // 0x15131448: lh          $v0, 0x0($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X0);
    // 0x1513144C: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x15131450: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x15131454: b           L_15131508
    // 0x15131458: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_15131508;
    // 0x15131458: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_1513145C:
    // 0x1513145C: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x15131460: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x15131464: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x15131468: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x1513146C: lbu         $t6, 0x2B($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2B);
    // 0x15131470: b           L_15131508
    // 0x15131474: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
        goto L_15131508;
    // 0x15131474: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
L_15131478:
    // 0x15131478: lbu         $t7, 0x24($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X24);
    // 0x1513147C: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x15131480: lbu         $t8, 0x25($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X25);
    // 0x15131484: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x15131488: lbu         $t9, 0x26($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X26);
    // 0x1513148C: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x15131490: lbu         $t0, 0x2B($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2B);
    // 0x15131494: b           L_15131508
    // 0x15131498: sh          $t0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r8;
        goto L_15131508;
    // 0x15131498: sh          $t0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r8;
L_1513149C:
    // 0x1513149C: lbu         $t1, 0x24($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X24);
    // 0x151314A0: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
    // 0x151314A4: lbu         $t2, 0x25($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X25);
    // 0x151314A8: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
    // 0x151314AC: lbu         $t3, 0x26($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X26);
    // 0x151314B0: sh          $t3, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r11;
    // 0x151314B4: b           L_15131508
    // 0x151314B8: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
        goto L_15131508;
    // 0x151314B8: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
L_151314BC:
    // 0x151314BC: lbu         $t4, 0x24($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X24);
    // 0x151314C0: lbu         $t5, 0x2C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X2C);
    // 0x151314C4: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151314C8: mflo        $t6
    ctx->r14 = lo;
    // 0x151314CC: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x151314D0: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x151314D4: lbu         $t9, 0x2C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2C);
    // 0x151314D8: lbu         $t8, 0x25($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X25);
    // 0x151314DC: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151314E0: mflo        $t0
    ctx->r8 = lo;
    // 0x151314E4: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x151314E8: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    // 0x151314EC: lbu         $t3, 0x2C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2C);
    // 0x151314F0: lbu         $t2, 0x26($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X26);
    // 0x151314F4: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151314F8: mflo        $t4
    ctx->r12 = lo;
    // 0x151314FC: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x15131500: sh          $t5, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r13;
    // 0x15131504: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
L_15131508:
    // 0x15131508: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x1513150C: jr          $ra
    // 0x15131510: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x15131510: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_150E4E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E4E04: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x150E4E08: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x150E4E0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E4E10: lwc1        $f22, 0x112C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X112C);
    // 0x150E4E14: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x150E4E18: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x150E4E1C: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x150E4E20: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x150E4E24: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x150E4E28: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x150E4E2C: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x150E4E30: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x150E4E34: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x150E4E38: swc1        $f12, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f12.u32l;
    // 0x150E4E3C: swc1        $f14, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f14.u32l;
    // 0x150E4E40: sw          $a2, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r6;
    // 0x150E4E44: sw          $a3, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r7;
    // 0x150E4E48: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x150E4E4C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x150E4E50: sw          $zero, 0x150($sp)
    MEM_W(0X150, ctx->r29) = 0;
    // 0x150E4E54: sw          $zero, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = 0;
    // 0x150E4E58: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150E4E5C: swc1        $f22, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f22.u32l;
    // 0x150E4E60: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x150E4E64: jal         0x100226F0
    // 0x150E4E68: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x150E4E68: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_0:
    // 0x150E4E6C: lw          $t6, 0x174($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X174);
    // 0x150E4E70: addiu       $v0, $sp, 0x124
    ctx->r2 = ADD32(ctx->r29, 0X124);
    // 0x150E4E74: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150E4E78: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x150E4E7C: beq         $t7, $zero, L_150E4E8C
    if (ctx->r15 == 0) {
        // 0x150E4E80: xori        $t8, $t6, 0x8000
        ctx->r24 = ctx->r14 ^ 0X8000;
            goto L_150E4E8C;
    }
    // 0x150E4E80: xori        $t8, $t6, 0x8000
    ctx->r24 = ctx->r14 ^ 0X8000;
    // 0x150E4E84: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x150E4E88: sw          $t8, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r24;
L_150E4E8C:
    // 0x150E4E8C: lw          $a1, 0x17C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X17C);
    // 0x150E4E90: addiu       $a0, $sp, 0x148
    ctx->r4 = ADD32(ctx->r29, 0X148);
    // 0x150E4E94: beq         $a1, $zero, L_150E50B8
    if (ctx->r5 == 0) {
        // 0x150E4E98: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_150E50B8;
    }
    // 0x150E4E98: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x150E4E9C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x150E4EA0: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x150E4EA4: beq         $v0, $a0, L_150E4EFC
    if (ctx->r2 == ctx->r4) {
        // 0x150E4EA8: lh          $t0, 0x0($t9)
        ctx->r8 = MEM_H(ctx->r25, 0X0);
            goto L_150E4EFC;
    }
    // 0x150E4EA8: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
L_150E4EAC:
    // 0x150E4EAC: mtc1        $t0, $f30
    ctx->f30.u32l = ctx->r8;
    // 0x150E4EB0: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x150E4EB4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x150E4EB8: cvt.s.w     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.fl = CVT_S_W(ctx->f30.u32l);
    // 0x150E4EBC: swc1        $f30, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->f30.u32l;
    // 0x150E4EC0: lw          $t1, -0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, -0X4);
    // 0x150E4EC4: lh          $t2, 0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2);
    // 0x150E4EC8: mtc1        $t2, $f30
    ctx->f30.u32l = ctx->r10;
    // 0x150E4ECC: nop

    // 0x150E4ED0: cvt.s.w     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.fl = CVT_S_W(ctx->f30.u32l);
    // 0x150E4ED4: swc1        $f30, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->f30.u32l;
    // 0x150E4ED8: lw          $t3, -0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, -0X4);
    // 0x150E4EDC: lh          $t4, 0x4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X4);
    // 0x150E4EE0: mtc1        $t4, $f30
    ctx->f30.u32l = ctx->r12;
    // 0x150E4EE4: nop

    // 0x150E4EE8: cvt.s.w     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.fl = CVT_S_W(ctx->f30.u32l);
    // 0x150E4EEC: swc1        $f30, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f30.u32l;
    // 0x150E4EF0: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x150E4EF4: bne         $v0, $a0, L_150E4EAC
    if (ctx->r2 != ctx->r4) {
        // 0x150E4EF8: lh          $t0, 0x0($t9)
        ctx->r8 = MEM_H(ctx->r25, 0X0);
            goto L_150E4EAC;
    }
    // 0x150E4EF8: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
L_150E4EFC:
    // 0x150E4EFC: mtc1        $t0, $f30
    ctx->f30.u32l = ctx->r8;
    // 0x150E4F00: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x150E4F04: cvt.s.w     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.fl = CVT_S_W(ctx->f30.u32l);
    // 0x150E4F08: swc1        $f30, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f30.u32l;
    // 0x150E4F0C: lw          $t1, -0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, -0X4);
    // 0x150E4F10: lh          $t2, 0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2);
    // 0x150E4F14: mtc1        $t2, $f30
    ctx->f30.u32l = ctx->r10;
    // 0x150E4F18: nop

    // 0x150E4F1C: cvt.s.w     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.fl = CVT_S_W(ctx->f30.u32l);
    // 0x150E4F20: swc1        $f30, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f30.u32l;
    // 0x150E4F24: lw          $t3, -0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, -0X4);
    // 0x150E4F28: lh          $t4, 0x4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X4);
    // 0x150E4F2C: mtc1        $t4, $f30
    ctx->f30.u32l = ctx->r12;
    // 0x150E4F30: nop

    // 0x150E4F34: cvt.s.w     $f30, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    ctx->f30.fl = CVT_S_W(ctx->f30.u32l);
    // 0x150E4F38: swc1        $f30, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f30.u32l;
    // 0x150E4F3C: addiu       $t5, $sp, 0x124
    ctx->r13 = ADD32(ctx->r29, 0X124);
    // 0x150E4F40: addiu       $t6, $t5, 0x24
    ctx->r14 = ADD32(ctx->r13, 0X24);
    // 0x150E4F44: or          $t8, $sp, $zero
    ctx->r24 = ctx->r29 | 0;
L_150E4F48:
    // 0x150E4F48: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x150E4F4C: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x150E4F50: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x150E4F54: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x150E4F58: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x150E4F5C: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x150E4F60: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x150E4F64: bne         $t5, $t6, L_150E4F48
    if (ctx->r13 != ctx->r14) {
        // 0x150E4F68: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_150E4F48;
    }
    // 0x150E4F68: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x150E4F6C: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x150E4F70: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x150E4F74: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x150E4F78: jal         0x15049350
    // 0x150E4F7C: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    func_15049350(rdram, ctx);
        goto after_1;
    // 0x150E4F7C: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    after_1:
    // 0x150E4F80: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150E4F84: lwc1        $f16, -0x3DF0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3DF0);
    // 0x150E4F88: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150E4F8C: lwc1        $f2, -0x3DEC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3DEC);
    // 0x150E4F90: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
    // 0x150E4F94: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150E4F98: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x150E4F9C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x150E4FA0: lwc1        $f18, -0x3DE8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3DE8);
    // 0x150E4FA4: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150E4FA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E4FAC: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
    // 0x150E4FB0: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x150E4FB4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150E4FB8: lwc1        $f8, 0x1130($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1130);
    // 0x150E4FBC: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150E4FC0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150E4FC4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x150E4FC8: nop

    // 0x150E4FCC: bc1tl       L_150E552C
    if (c1cs) {
        // 0x150E4FD0: lw          $ra, 0x6C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X6C);
            goto L_150E552C;
    }
    goto skip_0;
    // 0x150E4FD0: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    skip_0:
    // 0x150E4FD4: div.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x150E4FD8: lw          $t9, 0x180($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X180);
    // 0x150E4FDC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150E4FE0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150E4FE4: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150E4FE8: swc1        $f16, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f16.u32l;
    // 0x150E4FEC: div.s       $f18, $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150E4FF0: swc1        $f2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f2.u32l;
    // 0x150E4FF4: beq         $t9, $at, L_150E50B0
    if (ctx->r25 == ctx->r1) {
        // 0x150E4FF8: swc1        $f18, 0x118($sp)
        MEM_W(0X118, ctx->r29) = ctx->f18.u32l;
            goto L_150E50B0;
    }
    // 0x150E4FF8: swc1        $f18, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f18.u32l;
    // 0x150E4FFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E5000: lwc1        $f10, 0x1134($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1134);
    // 0x150E5004: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x150E5008: swc1        $f2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f2.u32l;
    // 0x150E500C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x150E5010: swc1        $f16, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f16.u32l;
    // 0x150E5014: swc1        $f18, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f18.u32l;
    // 0x150E5018: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150E501C: bc1f        L_150E50B0
    if (!c1cs) {
        // 0x150E5020: addiu       $a0, $sp, 0xD0
        ctx->r4 = ADD32(ctx->r29, 0XD0);
            goto L_150E50B0;
    }
    // 0x150E5020: addiu       $a0, $sp, 0xD0
    ctx->r4 = ADD32(ctx->r29, 0XD0);
    // 0x150E5024: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x150E5028: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E502C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x150E5030: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x150E5034: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x150E5038: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x150E503C: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x150E5040: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x150E5044: swc1        $f2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f2.u32l;
    // 0x150E5048: swc1        $f16, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f16.u32l;
    // 0x150E504C: swc1        $f18, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f18.u32l;
    // 0x150E5050: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x150E5054: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x150E5058: jal         0x150440A0
    // 0x150E505C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    func_150440A0(rdram, ctx);
        goto after_2;
    // 0x150E505C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x150E5060: lw          $t0, 0x180($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X180);
    // 0x150E5064: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x150E5068: addiu       $t2, $t2, -0x66A0
    ctx->r10 = ADD32(ctx->r10, -0X66A0);
    // 0x150E506C: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x150E5070: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x150E5074: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150E5078: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x150E507C: addiu       $t3, $v0, 0x10
    ctx->r11 = ADD32(ctx->r2, 0X10);
    // 0x150E5080: addiu       $t4, $v0, 0x14
    ctx->r12 = ADD32(ctx->r2, 0X14);
    // 0x150E5084: addiu       $t7, $v0, 0x18
    ctx->r15 = ADD32(ctx->r2, 0X18);
    // 0x150E5088: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x150E508C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x150E5090: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150E5094: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150E5098: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150E509C: addiu       $a0, $sp, 0xD0
    ctx->r4 = ADD32(ctx->r29, 0XD0);
    // 0x150E50A0: jal         0x150A7960
    // 0x150E50A4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_150A7960(rdram, ctx);
        goto after_3;
    // 0x150E50A4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_3:
    // 0x150E50A8: b           L_150E50C0
    // 0x150E50AC: lw          $t8, 0x180($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X180);
        goto L_150E50C0;
    // 0x150E50AC: lw          $t8, 0x180($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X180);
L_150E50B0:
    // 0x150E50B0: b           L_150E50BC
    // 0x150E50B4: sw          $t6, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r14;
        goto L_150E50BC;
    // 0x150E50B4: sw          $t6, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r14;
L_150E50B8:
    // 0x150E50B8: sw          $t5, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r13;
L_150E50BC:
    // 0x150E50BC: lw          $t8, 0x180($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X180);
L_150E50C0:
    // 0x150E50C0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150E50C4: lw          $t9, 0x150($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X150);
    // 0x150E50C8: beq         $t8, $at, L_150E50EC
    if (ctx->r24 == ctx->r1) {
        // 0x150E50CC: addiu       $t5, $zero, 0xB4
        ctx->r13 = ADD32(0, 0XB4);
            goto L_150E50EC;
    }
    // 0x150E50CC: addiu       $t5, $zero, 0xB4
    ctx->r13 = ADD32(0, 0XB4);
    // 0x150E50D0: beq         $t9, $zero, L_150E50EC
    if (ctx->r25 == 0) {
        // 0x150E50D4: sll         $t0, $t8, 3
        ctx->r8 = S32(ctx->r24 << 3);
            goto L_150E50EC;
    }
    // 0x150E50D4: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x150E50D8: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x150E50DC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150E50E0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150E50E4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x150E50E8: sb          $zero, -0x669D($at)
    MEM_B(-0X669D, ctx->r1) = 0;
L_150E50EC:
    // 0x150E50EC: bne         $s0, $zero, L_150E5528
    if (ctx->r16 != 0) {
        // 0x150E50F0: lui         $at, 0x3B80
        ctx->r1 = S32(0X3B80 << 16);
            goto L_150E5528;
    }
    // 0x150E50F0: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x150E50F4: lwc1        $f6, 0x168($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X168);
    // 0x150E50F8: lwc1        $f10, 0x16C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x150E50FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150E5100: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150E5104: lwc1        $f6, 0x170($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X170);
    // 0x150E5108: addiu       $t9, $zero, 0xB4
    ctx->r25 = ADD32(0, 0XB4);
    // 0x150E510C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150E5110: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x150E5114: addiu       $t8, $zero, 0xB4
    ctx->r24 = ADD32(0, 0XB4);
    // 0x150E5118: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150E511C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x150E5120: sh          $t2, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r10;
    // 0x150E5124: lw          $t2, 0x178($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X178);
    // 0x150E5128: sh          $t4, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r12;
    // 0x150E512C: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x150E5130: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x150E5134: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x150E5138: lhu         $t4, 0x1112($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X1112);
    // 0x150E513C: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x150E5140: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150E5144: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x150E5148: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x150E514C: sb          $t5, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r13;
    // 0x150E5150: sb          $t9, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r25;
    // 0x150E5154: sb          $t8, 0xC6($sp)
    MEM_B(0XC6, ctx->r29) = ctx->r24;
    // 0x150E5158: sb          $t0, 0xC7($sp)
    MEM_B(0XC7, ctx->r29) = ctx->r8;
    // 0x150E515C: sb          $t1, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = ctx->r9;
    // 0x150E5160: sh          $zero, 0xCC($sp)
    MEM_H(0XCC, ctx->r29) = 0;
    // 0x150E5164: sh          $zero, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = 0;
    // 0x150E5168: sh          $zero, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = 0;
    // 0x150E516C: sh          $t6, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r14;
    // 0x150E5170: bgez        $t4, L_150E5188
    if (SIGNED(ctx->r12) >= 0) {
        // 0x150E5174: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_150E5188;
    }
    // 0x150E5174: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150E5178: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150E517C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E5180: nop

    // 0x150E5184: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_150E5188:
    // 0x150E5188: lui         $at, 0x42BE
    ctx->r1 = S32(0X42BE << 16);
    // 0x150E518C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E5190: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x150E5194: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E5198: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150E519C: lw          $t7, 0x174($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X174);
    // 0x150E51A0: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x150E51A4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150E51A8: addiu       $t6, $t6, 0x187C
    ctx->r14 = ADD32(ctx->r14, 0X187C);
    // 0x150E51AC: lw          $t5, 0x174($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X174);
    // 0x150E51B0: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150E51B4: nop

    // 0x150E51B8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150E51BC: swc1        $f10, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f10.u32l;
    // 0x150E51C0: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150E51C4: bne         $t7, $at, L_150E51D4
    if (ctx->r15 != ctx->r1) {
        // 0x150E51C8: swc1        $f8, 0x160($sp)
        MEM_W(0X160, ctx->r29) = ctx->f8.u32l;
            goto L_150E51D4;
    }
    // 0x150E51C8: swc1        $f8, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f8.u32l;
    // 0x150E51CC: b           L_150E5250
    // 0x150E51D0: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
        goto L_150E5250;
    // 0x150E51D0: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
L_150E51D4:
    // 0x150E51D4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x150E51D8: bne         $t5, $at, L_150E51F0
    if (ctx->r13 != ctx->r1) {
        // 0x150E51DC: lw          $t8, 0x174($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X174);
            goto L_150E51F0;
    }
    // 0x150E51DC: lw          $t8, 0x174($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X174);
    // 0x150E51E0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150E51E4: addiu       $t9, $t9, 0x18A0
    ctx->r25 = ADD32(ctx->r25, 0X18A0);
    // 0x150E51E8: b           L_150E5250
    // 0x150E51EC: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
        goto L_150E5250;
    // 0x150E51EC: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
L_150E51F0:
    // 0x150E51F0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150E51F4: beq         $t8, $at, L_150E5208
    if (ctx->r24 == ctx->r1) {
        // 0x150E51F8: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_150E5208;
    }
    // 0x150E51F8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x150E51FC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150E5200: bne         $t8, $at, L_150E5214
    if (ctx->r24 != ctx->r1) {
        // 0x150E5204: lw          $t1, 0x174($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X174);
            goto L_150E5214;
    }
    // 0x150E5204: lw          $t1, 0x174($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X174);
L_150E5208:
    // 0x150E5208: addiu       $t0, $t0, 0x18A0
    ctx->r8 = ADD32(ctx->r8, 0X18A0);
    // 0x150E520C: b           L_150E5250
    // 0x150E5210: sw          $t0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r8;
        goto L_150E5250;
    // 0x150E5210: sw          $t0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r8;
L_150E5214:
    // 0x150E5214: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x150E5218: bne         $t1, $at, L_150E5248
    if (ctx->r9 != ctx->r1) {
        // 0x150E521C: lui         $t3, 0x8009
        ctx->r11 = S32(0X8009 << 16);
            goto L_150E5248;
    }
    // 0x150E521C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x150E5220: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x150E5224: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150E5228: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150E522C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E5230: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x150E5234: addiu       $t2, $t2, 0x520
    ctx->r10 = ADD32(ctx->r10, 0X520);
    // 0x150E5238: sw          $t2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r10;
    // 0x150E523C: swc1        $f10, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f10.u32l;
    // 0x150E5240: b           L_150E5250
    // 0x150E5244: swc1        $f4, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f4.u32l;
        goto L_150E5250;
    // 0x150E5244: swc1        $f4, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f4.u32l;
L_150E5248:
    // 0x150E5248: addiu       $t3, $t3, 0x18AC
    ctx->r11 = ADD32(ctx->r11, 0X18AC);
    // 0x150E524C: sw          $t3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r11;
L_150E5250:
    // 0x150E5250: lw          $t4, 0x178($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X178);
    // 0x150E5254: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150E5258: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150E525C: bne         $t4, $at, L_150E52B0
    if (ctx->r12 != ctx->r1) {
        // 0x150E5260: lw          $t8, 0x178($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X178);
            goto L_150E52B0;
    }
    // 0x150E5260: lw          $t8, 0x178($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X178);
    // 0x150E5264: addiu       $t6, $zero, -0x175
    ctx->r14 = ADD32(0, -0X175);
    // 0x150E5268: sw          $t7, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r15;
    // 0x150E526C: sh          $t6, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r14;
    // 0x150E5270: jal         0x151EF610
    // 0x150E5274: addiu       $s1, $zero, 0xC
    ctx->r17 = ADD32(0, 0XC);
    func_151EF610(rdram, ctx);
        goto after_4;
    // 0x150E5274: addiu       $s1, $zero, 0xC
    ctx->r17 = ADD32(0, 0XC);
    after_4:
    // 0x150E5278: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150E527C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150E5280: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150E5284: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x150E5288: mfhi        $t5
    ctx->r13 = hi;
    // 0x150E528C: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x150E5290: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x150E5294: nop

    // 0x150E5298: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150E529C: mul.s       $f10, $f30, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f30.fl, ctx->f8.fl);
    // 0x150E52A0: nop

    // 0x150E52A4: mul.s       $f4, $f22, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x150E52A8: b           L_150E52E4
    // 0x150E52AC: swc1        $f4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f4.u32l;
        goto L_150E52E4;
    // 0x150E52AC: swc1        $f4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f4.u32l;
L_150E52B0:
    // 0x150E52B0: bne         $t8, $zero, L_150E52D8
    if (ctx->r24 != 0) {
        // 0x150E52B4: addiu       $t1, $zero, -0xDA
        ctx->r9 = ADD32(0, -0XDA);
            goto L_150E52D8;
    }
    // 0x150E52B4: addiu       $t1, $zero, -0xDA
    ctx->r9 = ADD32(0, -0XDA);
    // 0x150E52B8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150E52BC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150E52C0: addiu       $t0, $zero, -0xDA
    ctx->r8 = ADD32(0, -0XDA);
    // 0x150E52C4: sh          $t0, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r8;
    // 0x150E52C8: mul.s       $f6, $f22, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f30.fl);
    // 0x150E52CC: addiu       $s1, $zero, 0xC
    ctx->r17 = ADD32(0, 0XC);
    // 0x150E52D0: b           L_150E52E4
    // 0x150E52D4: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
        goto L_150E52E4;
    // 0x150E52D4: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
L_150E52D8:
    // 0x150E52D8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150E52DC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150E52E0: sh          $t1, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r9;
L_150E52E4:
    // 0x150E52E4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x150E52E8: beq         $s1, $zero, L_150E54B8
    if (ctx->r17 == 0) {
        // 0x150E52EC: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_150E54B8;
    }
    // 0x150E52EC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x150E52F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E52F4: lwc1        $f28, 0x1138($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X1138);
L_150E52F8:
    // 0x150E52F8: jal         0x150ADA68
    // 0x150E52FC: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150E52FC: nop

    after_5:
    // 0x150E5300: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E5304: lwc1        $f8, 0x113C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X113C);
    // 0x150E5308: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
    // 0x150E530C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150E5310: jal         0x151EF610
    // 0x150E5314: add.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f4.fl;
    func_151EF610(rdram, ctx);
        goto after_6;
    // 0x150E5314: add.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f4.fl;
    after_6:
    // 0x150E5318: lw          $t3, 0x14C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14C);
    // 0x150E531C: bgez        $v0, L_150E5330
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150E5320: andi        $s0, $v0, 0xFF
        ctx->r16 = ctx->r2 & 0XFF;
            goto L_150E5330;
    }
    // 0x150E5320: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x150E5324: beq         $s0, $zero, L_150E5330
    if (ctx->r16 == 0) {
        // 0x150E5328: nop
    
            goto L_150E5330;
    }
    // 0x150E5328: nop

    // 0x150E532C: addiu       $s0, $s0, -0x100
    ctx->r16 = ADD32(ctx->r16, -0X100);
L_150E5330:
    // 0x150E5330: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x150E5334: beq         $t3, $zero, L_150E5340
    if (ctx->r11 == 0) {
        // 0x150E5338: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_150E5340;
    }
    // 0x150E5338: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x150E533C: add.s       $f20, $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f20.fl;
L_150E5340:
    // 0x150E5340: lw          $t4, 0x150($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X150);
    // 0x150E5344: beq         $t4, $zero, L_150E5374
    if (ctx->r12 == 0) {
        // 0x150E5348: nop
    
            goto L_150E5374;
    }
    // 0x150E5348: nop

    // 0x150E534C: jal         0x15048A40
    // 0x150E5350: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_15048A40(rdram, ctx);
        goto after_7;
    // 0x150E5350: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_7:
    // 0x150E5354: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150E5358: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150E535C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x150E5360: swc1        $f0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f0.u32l;
    // 0x150E5364: jal         0x150489B0
    // 0x150E5368: swc1        $f2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f2.u32l;
    func_150489B0(rdram, ctx);
        goto after_8;
    // 0x150E5368: swc1        $f2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x150E536C: b           L_150E53BC
    // 0x150E5370: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
        goto L_150E53BC;
    // 0x150E5370: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
L_150E5374:
    // 0x150E5374: jal         0x15048A40
    // 0x150E5378: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_15048A40(rdram, ctx);
        goto after_9;
    // 0x150E5378: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_9:
    // 0x150E537C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x150E5380: jal         0x150489B0
    // 0x150E5384: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_150489B0(rdram, ctx);
        goto after_10;
    // 0x150E5384: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_10:
    // 0x150E5388: mul.s       $f6, $f22, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f30.fl);
    // 0x150E538C: addiu       $t7, $sp, 0x120
    ctx->r15 = ADD32(ctx->r29, 0X120);
    // 0x150E5390: addiu       $t6, $sp, 0x11C
    ctx->r14 = ADD32(ctx->r29, 0X11C);
    // 0x150E5394: mul.s       $f8, $f0, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x150E5398: addiu       $t5, $sp, 0x118
    ctx->r13 = ADD32(ctx->r29, 0X118);
    // 0x150E539C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150E53A0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150E53A4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x150E53A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150E53AC: addiu       $a0, $sp, 0xD0
    ctx->r4 = ADD32(ctx->r29, 0XD0);
    // 0x150E53B0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x150E53B4: jal         0x150A7960
    // 0x150E53B8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_150A7960(rdram, ctx);
        goto after_11;
    // 0x150E53B8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_11:
L_150E53BC:
    // 0x150E53BC: lwc1        $f16, 0x120($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X120);
    // 0x150E53C0: lwc1        $f18, 0x118($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X118);
    // 0x150E53C4: lwc1        $f24, 0x11C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x150E53C8: mul.s       $f22, $f28, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = MUL_S(ctx->f28.fl, ctx->f16.fl);
    // 0x150E53CC: nop

    // 0x150E53D0: mul.s       $f26, $f28, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f26.fl = MUL_S(ctx->f28.fl, ctx->f18.fl);
    // 0x150E53D4: jal         0x151EF610
    // 0x150E53D8: nop

    func_151EF610(rdram, ctx);
        goto after_12;
    // 0x150E53D8: nop

    after_12:
    // 0x150E53DC: mul.s       $f10, $f20, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x150E53E0: bgez        $v0, L_150E53F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150E53E4: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_150E53F4;
    }
    // 0x150E53E4: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x150E53E8: beq         $t9, $zero, L_150E53F4
    if (ctx->r25 == 0) {
        // 0x150E53EC: nop
    
            goto L_150E53F4;
    }
    // 0x150E53EC: nop

    // 0x150E53F0: addiu       $t9, $t9, -0x2
    ctx->r25 = ADD32(ctx->r25, -0X2);
L_150E53F4:
    // 0x150E53F4: mul.s       $f6, $f20, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x150E53F8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150E53FC: addiu       $t8, $t9, 0x182
    ctx->r24 = ADD32(ctx->r25, 0X182);
    // 0x150E5400: mul.s       $f10, $f20, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x150E5404: sh          $t8, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r24;
    // 0x150E5408: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x150E540C: nop

    // 0x150E5410: sh          $t1, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r9;
    // 0x150E5414: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150E5418: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150E541C: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x150E5420: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x150E5424: sh          $t3, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r11;
    // 0x150E5428: jal         0x151EF610
    // 0x150E542C: sh          $t7, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r15;
    func_151EF610(rdram, ctx);
        goto after_13;
    // 0x150E542C: sh          $t7, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r15;
    after_13:
    // 0x150E5430: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x150E5434: jal         0x150ADA68
    // 0x150E5438: sb          $t6, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r14;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x150E5438: sb          $t6, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r14;
    after_14:
    // 0x150E543C: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x150E5440: lwc1        $f10, 0x164($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X164);
    // 0x150E5444: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150E5448: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150E544C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150E5450: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x150E5454: jal         0x150ADA68
    // 0x150E5458: sh          $t9, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r25;
    func_150ADA68(rdram, ctx);
        goto after_15;
    // 0x150E5458: sh          $t9, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r25;
    after_15:
    // 0x150E545C: lwc1        $f8, 0x160($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X160);
    // 0x150E5460: lwc1        $f4, 0x164($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X164);
    // 0x150E5464: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150E5468: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150E546C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150E5470: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x150E5474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150E5478: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150E547C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150E5480: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150E5484: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150E5488: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150E548C: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x150E5490: jal         0x15167D84
    // 0x150E5494: sh          $t0, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r8;
    func_15167D84(rdram, ctx);
        goto after_16;
    // 0x150E5494: sh          $t0, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r8;
    after_16:
    // 0x150E5498: bnel        $v0, $zero, L_150E54A8
    if (ctx->r2 != 0) {
        // 0x150E549C: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_150E54A8;
    }
    goto skip_1;
    // 0x150E549C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    skip_1:
    // 0x150E54A0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x150E54A4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_150E54A8:
    // 0x150E54A8: beq         $s1, $zero, L_150E54B8
    if (ctx->r17 == 0) {
        // 0x150E54AC: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_150E54B8;
    }
    // 0x150E54AC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x150E54B0: bne         $s2, $zero, L_150E52F8
    if (ctx->r18 != 0) {
        // 0x150E54B4: nop
    
            goto L_150E52F8;
    }
    // 0x150E54B4: nop

L_150E54B8:
    // 0x150E54B8: lw          $t2, 0x174($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X174);
    // 0x150E54BC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150E54C0: beq         $t2, $at, L_150E54D8
    if (ctx->r10 == ctx->r1) {
        // 0x150E54C4: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_150E54D8;
    }
    // 0x150E54C4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150E54C8: beq         $t2, $at, L_150E54D8
    if (ctx->r10 == ctx->r1) {
        // 0x150E54CC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_150E54D8;
    }
    // 0x150E54CC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150E54D0: bnel        $t2, $at, L_150E552C
    if (ctx->r10 != ctx->r1) {
        // 0x150E54D4: lw          $ra, 0x6C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X6C);
            goto L_150E552C;
    }
    goto skip_2;
    // 0x150E54D4: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    skip_2:
L_150E54D8:
    // 0x150E54D8: jal         0x151EF610
    // 0x150E54DC: nop

    func_151EF610(rdram, ctx);
        goto after_17;
    // 0x150E54DC: nop

    after_17:
    // 0x150E54E0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150E54E4: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x150E54E8: mfhi        $t3
    ctx->r11 = hi;
    // 0x150E54EC: lwc1        $f2, 0x11C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x150E54F0: bne         $t3, $zero, L_150E5528
    if (ctx->r11 != 0) {
        // 0x150E54F4: lwc1        $f16, 0x120($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X120);
            goto L_150E5528;
    }
    // 0x150E54F4: lwc1        $f16, 0x120($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X120);
    // 0x150E54F8: lwc1        $f18, 0x118($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X118);
    // 0x150E54FC: lw          $t4, 0x174($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X174);
    // 0x150E5500: lw          $t7, 0x178($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X178);
    // 0x150E5504: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x150E5508: lwc1        $f12, 0x168($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X168);
    // 0x150E550C: lwc1        $f14, 0x16C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x150E5510: lw          $a2, 0x170($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X170);
    // 0x150E5514: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x150E5518: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x150E551C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150E5520: jal         0x150E5558
    // 0x150E5524: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_150E5558(rdram, ctx);
        goto after_18;
    // 0x150E5524: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_18:
L_150E5528:
    // 0x150E5528: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_150E552C:
    // 0x150E552C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x150E5530: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x150E5534: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x150E5538: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x150E553C: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x150E5540: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x150E5544: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x150E5548: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x150E554C: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x150E5550: jr          $ra
    // 0x150E5554: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    return;
    // 0x150E5554: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void func_1507E7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507E7E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1507E7E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1507E7EC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1507E7F0: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1507E7F4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1507E7F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1507E7FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1507E800: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1507E804: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x1507E808: lbu         $v1, 0x6F($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6F);
    // 0x1507E80C: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x1507E810: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1507E814: bne         $v1, $t0, L_1507E838
    if (ctx->r3 != ctx->r8) {
        // 0x1507E818: nop
    
            goto L_1507E838;
    }
    // 0x1507E818: nop

    // 0x1507E81C: lbu         $t7, 0x71($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X71);
    // 0x1507E820: lhu         $t9, 0x3E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X3E);
    // 0x1507E824: bne         $t7, $a2, L_1507E838
    if (ctx->r15 != ctx->r6) {
        // 0x1507E828: nop
    
            goto L_1507E838;
    }
    // 0x1507E828: nop

    // 0x1507E82C: lhu         $t8, 0x72($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X72);
    // 0x1507E830: beql        $t8, $t9, L_1507E8F8
    if (ctx->r24 == ctx->r25) {
        // 0x1507E834: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1507E8F8;
    }
    goto skip_0;
    // 0x1507E834: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_1507E838:
    // 0x1507E838: beq         $a2, $at, L_1507E86C
    if (ctx->r6 == ctx->r1) {
        // 0x1507E83C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_1507E86C;
    }
    // 0x1507E83C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x1507E840: lbu         $t1, 0x70($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X70);
    // 0x1507E844: beql        $t1, $v1, L_1507E870
    if (ctx->r9 == ctx->r3) {
        // 0x1507E848: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1507E870;
    }
    goto skip_1;
    // 0x1507E848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x1507E84C: beql        $t0, $v1, L_1507E870
    if (ctx->r8 == ctx->r3) {
        // 0x1507E850: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1507E870;
    }
    goto skip_2;
    // 0x1507E850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x1507E854: lhu         $t2, 0x72($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X72);
    // 0x1507E858: beql        $t2, $zero, L_1507E870
    if (ctx->r10 == 0) {
        // 0x1507E85C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1507E870;
    }
    goto skip_3;
    // 0x1507E85C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x1507E860: lbu         $t3, 0x71($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X71);
    // 0x1507E864: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1507E868: beq         $at, $zero, L_1507E8F4
    if (ctx->r1 == 0) {
        // 0x1507E86C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1507E8F4;
    }
L_1507E86C:
    // 0x1507E86C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_1507E870:
    // 0x1507E870: sb          $a2, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r6;
    // 0x1507E874: jal         0x1507E968
    // 0x1507E878: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_1507E968(rdram, ctx);
        goto after_0;
    // 0x1507E878: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_0:
    // 0x1507E87C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1507E880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507E884: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1507E888: beql        $at, $zero, L_1507E8F8
    if (ctx->r1 == 0) {
        // 0x1507E88C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1507E8F8;
    }
    goto skip_4;
    // 0x1507E88C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x1507E890: jal         0x1507E908
    // 0x1507E894: lbu         $a1, 0x6F($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X6F);
    func_1507E908(rdram, ctx);
        goto after_1;
    // 0x1507E894: lbu         $a1, 0x6F($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X6F);
    after_1:
    // 0x1507E898: lbu         $t4, 0x4($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X4);
    // 0x1507E89C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507E8A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1507E8A4: beql        $t4, $zero, L_1507E8D4
    if (ctx->r12 == 0) {
        // 0x1507E8A8: lbu         $t7, 0x37($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X37);
            goto L_1507E8D4;
    }
    goto skip_5;
    // 0x1507E8A8: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    skip_5:
    // 0x1507E8AC: jal         0x1507E9F8
    // 0x1507E8B0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_1507E9F8(rdram, ctx);
        goto after_2;
    // 0x1507E8B0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_2:
    // 0x1507E8B4: beq         $v0, $zero, L_1507E8D0
    if (ctx->r2 == 0) {
        // 0x1507E8B8: lw          $v1, 0x2C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X2C);
            goto L_1507E8D0;
    }
    // 0x1507E8B8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x1507E8BC: lbu         $t5, 0x4($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X4);
    // 0x1507E8C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507E8C4: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x1507E8C8: jal         0x150302F0
    // 0x1507E8CC: lbu         $a1, -0x1($t6)
    ctx->r5 = MEM_BU(ctx->r14, -0X1);
    func_150302F0(rdram, ctx);
        goto after_3;
    // 0x1507E8CC: lbu         $a1, -0x1($t6)
    ctx->r5 = MEM_BU(ctx->r14, -0X1);
    after_3:
L_1507E8D0:
    // 0x1507E8D0: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
L_1507E8D4:
    // 0x1507E8D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1507E8D8: sb          $t7, 0x6F($s0)
    MEM_B(0X6F, ctx->r16) = ctx->r15;
    // 0x1507E8DC: lhu         $t8, 0x3E($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X3E);
    // 0x1507E8E0: sh          $t8, 0x72($s0)
    MEM_H(0X72, ctx->r16) = ctx->r24;
    // 0x1507E8E4: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    // 0x1507E8E8: sb          $t9, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r25;
    // 0x1507E8EC: jal         0x1507E5C8
    // 0x1507E8F0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    func_1507E5C8(rdram, ctx);
        goto after_4;
    // 0x1507E8F0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_4:
L_1507E8F4:
    // 0x1507E8F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1507E8F8:
    // 0x1507E8F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1507E8FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1507E900: jr          $ra
    // 0x1507E904: nop

    return;
    return;
    // 0x1507E904: nop

;}
RECOMP_FUNC void func_150E33CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E33CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150E33D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150E33D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150E33D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150E33DC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x150E33E0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x150E33E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x150E33E8: bne         $v0, $zero, L_150E33F8
    if (ctx->r2 != 0) {
        // 0x150E33EC: nop
    
            goto L_150E33F8;
    }
    // 0x150E33EC: nop

    // 0x150E33F0: b           L_150E3404
    // 0x150E33F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150E3404;
    // 0x150E33F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150E33F8:
    // 0x150E33F8: jal         0x1000E7A0
    // 0x150E33FC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_1000E7A0(rdram, ctx);
        goto after_0;
    // 0x150E33FC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_0:
    // 0x150E3400: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150E3404:
    // 0x150E3404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150E3408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150E340C: jr          $ra
    // 0x150E3410: nop

    return;
    return;
    // 0x150E3410: nop

;}
RECOMP_FUNC void func_151D469C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D469C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151D46A0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151D46A4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x151D46A8: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x151D46AC: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x151D46B0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x151D46B4: lbu         $t6, 0x3B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3B);
    // 0x151D46B8: lbu         $t7, 0x5F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X5F);
    // 0x151D46BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151D46C0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151D46C4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151D46C8: sh          $t8, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r24;
    // 0x151D46CC: sb          $zero, 0x48($sp)
    MEM_B(0X48, ctx->r29) = 0;
    // 0x151D46D0: sb          $t6, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r14;
    // 0x151D46D4: sb          $t7, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r15;
    // 0x151D46D8: bne         $t7, $at, L_151D46E8
    if (ctx->r15 != ctx->r1) {
        // 0x151D46DC: swc1        $f4, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
            goto L_151D46E8;
    }
    // 0x151D46DC: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x151D46E0: addiu       $t9, $zero, 0x82
    ctx->r25 = ADD32(0, 0X82);
    // 0x151D46E4: sh          $t9, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r25;
L_151D46E8:
    // 0x151D46E8: lw          $t0, 0x1D4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X1D4);
    // 0x151D46EC: beql        $t0, $zero, L_151D4738
    if (ctx->r8 == 0) {
        // 0x151D46F0: lbu         $t1, 0x67($sp)
        ctx->r9 = MEM_BU(ctx->r29, 0X67);
            goto L_151D4738;
    }
    goto skip_0;
    // 0x151D46F0: lbu         $t1, 0x67($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X67);
    skip_0:
    // 0x151D46F4: lbu         $t1, 0x74($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X74);
    // 0x151D46F8: lbu         $t3, 0x5F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X5F);
    // 0x151D46FC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151D4700: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x151D4704: beq         $t2, $at, L_151D4734
    if (ctx->r10 == ctx->r1) {
        // 0x151D4708: sll         $t4, $t3, 2
        ctx->r12 = S32(ctx->r11 << 2);
            goto L_151D4734;
    }
    // 0x151D4708: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x151D470C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151D4710: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x151D4714: lw          $t9, -0x390($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X390);
    // 0x151D4718: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x151D471C: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x151D4720: jalr        $t9
    // 0x151D4724: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151D4724: nop

    after_0:
    // 0x151D4728: lbu         $t5, 0x48($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X48);
    // 0x151D472C: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x151D4730: sb          $t6, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r14;
L_151D4734:
    // 0x151D4734: lbu         $t1, 0x67($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X67);
L_151D4738:
    // 0x151D4738: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x151D473C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151D4740: addiu       $t7, $zero, 0x35
    ctx->r15 = ADD32(0, 0X35);
    // 0x151D4744: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x151D4748: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151D474C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151D4750: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151D4754: lh          $a0, 0x62($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X62);
    // 0x151D4758: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151D475C: addiu       $a2, $zero, 0x41
    ctx->r6 = ADD32(0, 0X41);
    // 0x151D4760: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151D4764: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x151D4768: jal         0x15149130
    // 0x151D476C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_15149130(rdram, ctx);
        goto after_1;
    // 0x151D476C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_1:
    // 0x151D4770: beq         $v0, $zero, L_151D4784
    if (ctx->r2 == 0) {
        // 0x151D4774: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_151D4784;
    }
    // 0x151D4774: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151D4778: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x151D477C: jal         0x10022EC0
    // 0x151D4780: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151D4780: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
L_151D4784:
    // 0x151D4784: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151D4788: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151D478C: jr          $ra
    // 0x151D4790: nop

    return;
    return;
    // 0x151D4790: nop

;}
RECOMP_FUNC void func_150347E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150347E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150347EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150347F0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150347F4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150347F8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150347FC: lbu         $t6, -0x1540($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1540);
    // 0x15034800: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x15034804: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x15034808: bne         $t6, $zero, L_15034840
    if (ctx->r14 != 0) {
        // 0x1503480C: lui         $s1, 0x800D
        ctx->r17 = S32(0X800D << 16);
            goto L_15034840;
    }
    // 0x1503480C: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x15034810: addiu       $s1, $s1, 0x121C
    ctx->r17 = ADD32(ctx->r17, 0X121C);
    // 0x15034814: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
L_15034818:
    // 0x15034818: beql        $t7, $zero, L_15034838
    if (ctx->r15 == 0) {
        // 0x1503481C: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_15034838;
    }
    goto skip_0;
    // 0x1503481C: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    skip_0:
    // 0x15034820: lw          $t8, 0x9C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X9C);
    // 0x15034824: beql        $t8, $zero, L_15034838
    if (ctx->r24 == 0) {
        // 0x15034828: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_15034838;
    }
    goto skip_1;
    // 0x15034828: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    skip_1:
    // 0x1503482C: jal         0x15034728
    // 0x15034830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15034728(rdram, ctx);
        goto after_0;
    // 0x15034830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x15034834: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
L_15034838:
    // 0x15034838: bnel        $s0, $s1, L_15034818
    if (ctx->r16 != ctx->r17) {
        // 0x1503483C: lw          $t7, 0x0($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X0);
            goto L_15034818;
    }
    goto skip_2;
    // 0x1503483C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    skip_2:
L_15034840:
    // 0x15034840: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15034844: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15034848: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1503484C: jr          $ra
    // 0x15034850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x15034850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_150CE200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CE200: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x150CE204: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150CE208: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x150CE20C: addiu       $v1, $a0, 0x18
    ctx->r3 = ADD32(ctx->r4, 0X18);
    // 0x150CE210: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x150CE214: bnel        $t7, $zero, L_150CE228
    if (ctx->r15 != 0) {
        // 0x150CE218: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_150CE228;
    }
    goto skip_0;
    // 0x150CE218: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x150CE21C: b           L_150CE440
    // 0x150CE220: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150CE440;
    // 0x150CE220: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150CE224: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_150CE228:
    // 0x150CE228: lbu         $t8, 0x4($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X4);
    // 0x150CE22C: lbu         $t9, 0x3B($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X3B);
    // 0x150CE230: beql        $t8, $t9, L_150CE244
    if (ctx->r24 == ctx->r25) {
        // 0x150CE234: lw          $a3, 0x1D4($v0)
        ctx->r7 = MEM_W(ctx->r2, 0X1D4);
            goto L_150CE244;
    }
    goto skip_1;
    // 0x150CE234: lw          $a3, 0x1D4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1D4);
    skip_1:
    // 0x150CE238: b           L_150CE440
    // 0x150CE23C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150CE440;
    // 0x150CE23C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150CE240: lw          $a3, 0x1D4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1D4);
L_150CE244:
    // 0x150CE244: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x150CE248: addiu       $a0, $a0, 0x7F0
    ctx->r4 = ADD32(ctx->r4, 0X7F0);
    // 0x150CE24C: bne         $a3, $zero, L_150CE264
    if (ctx->r7 != 0) {
        // 0x150CE250: addiu       $a1, $sp, 0x40
        ctx->r5 = ADD32(ctx->r29, 0X40);
            goto L_150CE264;
    }
    // 0x150CE250: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x150CE254: lbu         $t0, 0x14($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X14);
    // 0x150CE258: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x150CE25C: b           L_150CE43C
    // 0x150CE260: sb          $t1, 0x14($v1)
    MEM_B(0X14, ctx->r3) = ctx->r9;
        goto L_150CE43C;
    // 0x150CE260: sb          $t1, 0x14($v1)
    MEM_B(0X14, ctx->r3) = ctx->r9;
L_150CE264:
    // 0x150CE264: addiu       $a2, $a3, 0xD00
    ctx->r6 = ADD32(ctx->r7, 0XD00);
    // 0x150CE268: jal         0x15143134
    // 0x150CE26C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x150CE26C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_0:
    // 0x150CE270: lui         $t3, 0x8008
    ctx->r11 = S32(0X8008 << 16);
    // 0x150CE274: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x150CE278: lw          $t3, 0x2FA4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2FA4);
    // 0x150CE27C: addiu       $t2, $sp, 0x34
    ctx->r10 = ADD32(ctx->r29, 0X34);
    // 0x150CE280: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150CE284: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x150CE288: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x150CE28C: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x150CE290: addiu       $a1, $v1, 0x28
    ctx->r5 = ADD32(ctx->r3, 0X28);
    // 0x150CE294: jal         0x15144CEC
    // 0x150CE298: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_15144CEC(rdram, ctx);
        goto after_1;
    // 0x150CE298: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_1:
    // 0x150CE29C: beq         $v0, $zero, L_150CE430
    if (ctx->r2 == 0) {
        // 0x150CE2A0: lw          $v1, 0x28($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X28);
            goto L_150CE430;
    }
    // 0x150CE2A0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x150CE2A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CE2A8: lwc1        $f16, 0x800($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X800);
    // 0x150CE2AC: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150CE2B0: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150CE2B4: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x150CE2B8: lwc1        $f12, 0x28($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X28);
    // 0x150CE2BC: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CE2C0: lwc1        $f14, 0x2C($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x150CE2C4: mul.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x150CE2C8: sub.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x150CE2CC: sub.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x150CE2D0: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150CE2D4: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150CE2D8: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x150CE2DC: add.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x150CE2E0: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x150CE2E4: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x150CE2E8: add.s       $f18, $f14, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x150CE2EC: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x150CE2F0: sw          $t6, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r14;
    // 0x150CE2F4: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150CE2F8: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150CE2FC: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x150CE300: nop

    // 0x150CE304: sw          $t8, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r24;
    // 0x150CE308: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150CE30C: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x150CE310: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x150CE314: bc1t        L_150CE374
    if (c1cs) {
        // 0x150CE318: sw          $t0, 0x24($v1)
        MEM_W(0X24, ctx->r3) = ctx->r8;
            goto L_150CE374;
    }
    // 0x150CE318: sw          $t0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r8;
    // 0x150CE31C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x150CE320: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150CE324: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150CE328: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x150CE32C: nop

    // 0x150CE330: bc1tl       L_150CE378
    if (c1cs) {
        // 0x150CE334: lbu         $t4, 0x14($v1)
        ctx->r12 = MEM_BU(ctx->r3, 0X14);
            goto L_150CE378;
    }
    goto skip_2;
    // 0x150CE334: lbu         $t4, 0x14($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X14);
    skip_2:
    // 0x150CE338: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x150CE33C: lui         $at, 0x4357
    ctx->r1 = S32(0X4357 << 16);
    // 0x150CE340: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150CE344: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150CE348: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x150CE34C: nop

    // 0x150CE350: bc1tl       L_150CE378
    if (c1cs) {
        // 0x150CE354: lbu         $t4, 0x14($v1)
        ctx->r12 = MEM_BU(ctx->r3, 0X14);
            goto L_150CE378;
    }
    goto skip_3;
    // 0x150CE354: lbu         $t4, 0x14($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X14);
    skip_3:
    // 0x150CE358: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x150CE35C: nop

    // 0x150CE360: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150CE364: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x150CE368: nop

    // 0x150CE36C: bc1fl       L_150CE388
    if (!c1cs) {
        // 0x150CE370: lw          $t6, 0x18($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X18);
            goto L_150CE388;
    }
    goto skip_4;
    // 0x150CE370: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
    skip_4:
L_150CE374:
    // 0x150CE374: lbu         $t4, 0x14($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X14);
L_150CE378:
    // 0x150CE378: andi        $t5, $t4, 0xFFFE
    ctx->r13 = ctx->r12 & 0XFFFE;
    // 0x150CE37C: b           L_150CE43C
    // 0x150CE380: sb          $t5, 0x14($v1)
    MEM_B(0X14, ctx->r3) = ctx->r13;
        goto L_150CE43C;
    // 0x150CE380: sb          $t5, 0x14($v1)
    MEM_B(0X14, ctx->r3) = ctx->r13;
    // 0x150CE384: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
L_150CE388:
    // 0x150CE388: addiu       $t9, $zero, 0x123
    ctx->r25 = ADD32(0, 0X123);
    // 0x150CE38C: addiu       $t1, $zero, 0xD7
    ctx->r9 = ADD32(0, 0XD7);
    // 0x150CE390: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x150CE394: nop

    // 0x150CE398: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150CE39C: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x150CE3A0: nop

    // 0x150CE3A4: bc1fl       L_150CE3C4
    if (!c1cs) {
        // 0x150CE3A8: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_150CE3C4;
    }
    goto skip_5;
    // 0x150CE3A8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_5:
    // 0x150CE3AC: lw          $t7, 0x1C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X1C);
    // 0x150CE3B0: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
    // 0x150CE3B4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x150CE3B8: nop

    // 0x150CE3BC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150CE3C0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_150CE3C4:
    // 0x150CE3C4: nop

    // 0x150CE3C8: bc1fl       L_150CE3D8
    if (!c1cs) {
        // 0x150CE3CC: lw          $t8, 0x20($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X20);
            goto L_150CE3D8;
    }
    goto skip_6;
    // 0x150CE3CC: lw          $t8, 0x20($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X20);
    skip_6:
    // 0x150CE3D0: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x150CE3D4: lw          $t8, 0x20($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X20);
L_150CE3D8:
    // 0x150CE3D8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x150CE3DC: nop

    // 0x150CE3E0: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150CE3E4: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x150CE3E8: nop

    // 0x150CE3EC: bc1fl       L_150CE3FC
    if (!c1cs) {
        // 0x150CE3F0: lw          $t0, 0x24($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X24);
            goto L_150CE3FC;
    }
    goto skip_7;
    // 0x150CE3F0: lw          $t0, 0x24($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X24);
    skip_7:
    // 0x150CE3F4: sw          $t9, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r25;
    // 0x150CE3F8: lw          $t0, 0x24($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X24);
L_150CE3FC:
    // 0x150CE3FC: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x150CE400: nop

    // 0x150CE404: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150CE408: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x150CE40C: nop

    // 0x150CE410: bc1fl       L_150CE420
    if (!c1cs) {
        // 0x150CE414: lbu         $t2, 0x14($v1)
        ctx->r10 = MEM_BU(ctx->r3, 0X14);
            goto L_150CE420;
    }
    goto skip_8;
    // 0x150CE414: lbu         $t2, 0x14($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X14);
    skip_8:
    // 0x150CE418: sw          $t1, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r9;
    // 0x150CE41C: lbu         $t2, 0x14($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X14);
L_150CE420:
    // 0x150CE420: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x150CE424: sb          $t3, 0x14($v1)
    MEM_B(0X14, ctx->r3) = ctx->r11;
    // 0x150CE428: b           L_150CE440
    // 0x150CE42C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150CE440;
    // 0x150CE42C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150CE430:
    // 0x150CE430: lbu         $t4, 0x14($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X14);
    // 0x150CE434: andi        $t5, $t4, 0xFFFE
    ctx->r13 = ctx->r12 & 0XFFFE;
    // 0x150CE438: sb          $t5, 0x14($v1)
    MEM_B(0X14, ctx->r3) = ctx->r13;
L_150CE43C:
    // 0x150CE43C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150CE440:
    // 0x150CE440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150CE444: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x150CE448: jr          $ra
    // 0x150CE44C: nop

    return;
    return;
    // 0x150CE44C: nop

;}
RECOMP_FUNC void func_150AE35C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AE35C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150AE360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150AE364: jr          $ra
    // 0x150AE368: nop

    return;
    return;
    // 0x150AE368: nop

;}
RECOMP_FUNC void func_1514F5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F5CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1514F5D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514F5D4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1514F5D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1514F5DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1514F5E0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1514F5E4: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x1514F5E8: lbu         $t6, 0x3B($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X3B);
    // 0x1514F5EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514F5F0: lwc1        $f6, 0x5E5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5E5C);
    // 0x1514F5F4: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x1514F5F8: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x1514F5FC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x1514F600: sh          $t7, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r15;
    // 0x1514F604: sh          $t8, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r24;
    // 0x1514F608: sb          $t9, 0x34($sp)
    MEM_B(0X34, ctx->r29) = ctx->r25;
    // 0x1514F60C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x1514F610: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1514F614: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1514F618: sb          $t6, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r14;
    // 0x1514F61C: jal         0x150C0AC0
    // 0x1514F620: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_150C0AC0(rdram, ctx);
        goto after_0;
    // 0x1514F620: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x1514F624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514F628: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1514F62C: jr          $ra
    // 0x1514F630: nop

    return;
    return;
    // 0x1514F630: nop

;}
RECOMP_FUNC void func_1000E46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000E46C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1000E470: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1000E474: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1000E478: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x1000E47C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x1000E480: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1000E484: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x1000E488: jal         0x1000B1FC
    // 0x1000E48C: nop

    func_1000B1FC(rdram, ctx);
        goto after_0;
    // 0x1000E48C: nop

    after_0:
    // 0x1000E490: sll         $t6, $s1, 8
    ctx->r14 = S32(ctx->r17 << 8);
    // 0x1000E494: subu        $t6, $t6, $s1
    ctx->r14 = SUB32(ctx->r14, ctx->r17);
    // 0x1000E498: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x1000E49C: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x1000E4A0: mflo        $s1
    ctx->r17 = lo;
    // 0x1000E4A4: slti        $at, $s1, 0x100
    ctx->r1 = SIGNED(ctx->r17) < 0X100 ? 1 : 0;
    // 0x1000E4A8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x1000E4AC: bne         $at, $zero, L_1000E4BC
    if (ctx->r1 != 0) {
        // 0x1000E4B0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1000E4BC;
    }
    // 0x1000E4B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1000E4B4: b           L_1000E4C8
    // 0x1000E4B8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_1000E4C8;
    // 0x1000E4B8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_1000E4BC:
    // 0x1000E4BC: bgez        $s1, L_1000E4C8
    if (SIGNED(ctx->r17) >= 0) {
        // 0x1000E4C0: nop
    
            goto L_1000E4C8;
    }
    // 0x1000E4C0: nop

    // 0x1000E4C4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_1000E4C8:
    // 0x1000E4C8: beql        $v0, $zero, L_1000E574
    if (ctx->r2 == 0) {
        // 0x1000E4CC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1000E574;
    }
    goto skip_0;
    // 0x1000E4CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x1000E4D0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x1000E4D4: bltz        $t8, L_1000E510
    if (SIGNED(ctx->r24) < 0) {
        // 0x1000E4D8: nop
    
            goto L_1000E510;
    }
    // 0x1000E4D8: nop

    // 0x1000E4DC: bgez        $a3, L_1000E4FC
    if (SIGNED(ctx->r7) >= 0) {
        // 0x1000E4E0: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_1000E4FC;
    }
    // 0x1000E4E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1000E4E4: lbu         $a0, 0x3($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X3);
    // 0x1000E4E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1000E4EC: jal         0x1000886C
    // 0x1000E4F0: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_1000886C(rdram, ctx);
        goto after_1;
    // 0x1000E4F0: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_1:
    // 0x1000E4F4: b           L_1000E574
    // 0x1000E4F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000E574;
    // 0x1000E4F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000E4FC:
    // 0x1000E4FC: lbu         $a0, 0x3($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X3);
    // 0x1000E500: jal         0x10008790
    // 0x1000E504: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_10008790(rdram, ctx);
        goto after_2;
    // 0x1000E504: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_2:
    // 0x1000E508: b           L_1000E574
    // 0x1000E50C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000E574;
    // 0x1000E50C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000E510:
    // 0x1000E510: bne         $s1, $zero, L_1000E528
    if (ctx->r17 != 0) {
        // 0x1000E514: nop
    
            goto L_1000E528;
    }
    // 0x1000E514: nop

    // 0x1000E518: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x1000E51C: or          $t0, $t9, $s0
    ctx->r8 = ctx->r25 | ctx->r16;
    // 0x1000E520: b           L_1000E540
    // 0x1000E524: sw          $t0, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r8;
        goto L_1000E540;
    // 0x1000E524: sw          $t0, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r8;
L_1000E528:
    // 0x1000E528: blez        $s1, L_1000E540
    if (SIGNED(ctx->r17) <= 0) {
        // 0x1000E52C: nop
    
            goto L_1000E540;
    }
    // 0x1000E52C: nop

    // 0x1000E530: lw          $t1, 0x38($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X38);
    // 0x1000E534: nor         $t2, $s0, $zero
    ctx->r10 = ~(ctx->r16 | 0);
    // 0x1000E538: and         $t3, $t1, $t2
    ctx->r11 = ctx->r9 & ctx->r10;
    // 0x1000E53C: sw          $t3, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r11;
L_1000E540:
    // 0x1000E540: beq         $s0, $zero, L_1000E568
    if (ctx->r16 == 0) {
        // 0x1000E544: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1000E568;
    }
    // 0x1000E544: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1000E548:
    // 0x1000E548: andi        $t4, $s0, 0x1
    ctx->r12 = ctx->r16 & 0X1;
    // 0x1000E54C: beq         $t4, $zero, L_1000E55C
    if (ctx->r12 == 0) {
        // 0x1000E550: sra         $t6, $s0, 1
        ctx->r14 = S32(SIGNED(ctx->r16) >> 1);
            goto L_1000E55C;
    }
    // 0x1000E550: sra         $t6, $s0, 1
    ctx->r14 = S32(SIGNED(ctx->r16) >> 1);
    // 0x1000E554: addu        $t5, $v0, $v1
    ctx->r13 = ADD32(ctx->r2, ctx->r3);
    // 0x1000E558: sb          $s1, 0x3C($t5)
    MEM_B(0X3C, ctx->r13) = ctx->r17;
L_1000E55C:
    // 0x1000E55C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1000E560: bne         $t6, $zero, L_1000E548
    if (ctx->r14 != 0) {
        // 0x1000E564: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_1000E548;
    }
    // 0x1000E564: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
L_1000E568:
    // 0x1000E568: b           L_1000E574
    // 0x1000E56C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000E574;
    // 0x1000E56C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1000E570: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1000E574:
    // 0x1000E574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1000E578: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1000E57C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1000E580: jr          $ra
    // 0x1000E584: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1000E584: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1505DF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505DF10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1505DF14: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1505DF18: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x1505DF1C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1505DF20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1505DF24: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1505DF28: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x1505DF2C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x1505DF30: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x1505DF34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1505DF38: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x1505DF3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1505DF40: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x1505DF44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1505DF48: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x1505DF4C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1505DF50: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x1505DF54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1505DF58: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x1505DF5C: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1505DF60: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1505DF64: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1505DF68: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1505DF6C: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1505DF70: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1505DF74: lwc1        $f16, 0x1C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x1505DF78: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x1505DF7C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1505DF80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1505DF84: swc1        $f2, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f2.u32l;
    // 0x1505DF88: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1505DF8C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x1505DF90: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x1505DF94: jal         0x1505A630
    // 0x1505DF98: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    func_1505A630(rdram, ctx);
        goto after_0;
    // 0x1505DF98: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x1505DF9C: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1505DFA0: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1505DFA4: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x1505DFA8: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1505DFAC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x1505DFB0: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1505DFB4: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x1505DFB8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x1505DFBC: mul.s       $f14, $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1505DFC0: add.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x1505DFC4: add.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x1505DFC8: add.s       $f0, $f6, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x1505DFCC: swc1        $f4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f4.u32l;
    // 0x1505DFD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1505DFD4: jr          $ra
    // 0x1505DFD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1505DFD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1501E540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501E540: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1501E544: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1501E548: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x1501E54C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x1501E550: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x1501E554: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x1501E558: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1501E55C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1501E560: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1501E564: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1501E568: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1501E56C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x1501E570: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501E574: addiu       $t7, $t7, 0x3668
    ctx->r15 = ADD32(ctx->r15, 0X3668);
    // 0x1501E578: sll         $t6, $s6, 2
    ctx->r14 = S32(ctx->r22 << 2);
    // 0x1501E57C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1501E580: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x1501E584: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x1501E588: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x1501E58C: beql        $v1, $zero, L_1501E714
    if (ctx->r3 == 0) {
        // 0x1501E590: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1501E714;
    }
    goto skip_0;
    // 0x1501E590: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x1501E594: lw          $s4, 0x0($v1)
    ctx->r20 = MEM_W(ctx->r3, 0X0);
    // 0x1501E598: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1501E59C: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x1501E5A0: blez        $v0, L_1501E610
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1501E5A4: lui         $t0, 0x800C
        ctx->r8 = S32(0X800C << 16);
            goto L_1501E610;
    }
    // 0x1501E5A4: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1501E5A8: addiu       $t0, $t0, 0x35C8
    ctx->r8 = ADD32(ctx->r8, 0X35C8);
    // 0x1501E5AC: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x1501E5B0: addiu       $s5, $s5, 0x3A50
    ctx->r21 = ADD32(ctx->r21, 0X3A50);
    // 0x1501E5B4: addu        $s7, $t6, $t0
    ctx->r23 = ADD32(ctx->r14, ctx->r8);
    // 0x1501E5B8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_1501E5BC:
    // 0x1501E5BC: lw          $t1, 0x0($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X0);
    // 0x1501E5C0: addu        $s0, $s5, $s6
    ctx->r16 = ADD32(ctx->r21, ctx->r22);
    // 0x1501E5C4: addu        $t2, $t1, $s3
    ctx->r10 = ADD32(ctx->r9, ctx->r19);
    // 0x1501E5C8: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x1501E5CC: beql        $t3, $zero, L_1501E600
    if (ctx->r11 == 0) {
        // 0x1501E5D0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_1501E600;
    }
    goto skip_1;
    // 0x1501E5D0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x1501E5D4: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x1501E5D8: sll         $s1, $s2, 6
    ctx->r17 = S32(ctx->r18 << 6);
    // 0x1501E5DC: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x1501E5E0: jal         0x10004074
    // 0x1501E5E4: lw          $a0, 0x4($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X4);
    func_10004074(rdram, ctx);
        goto after_0;
    // 0x1501E5E4: lw          $a0, 0x4($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X4);
    after_0:
    // 0x1501E5E8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x1501E5EC: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x1501E5F0: jal         0x10004074
    // 0x1501E5F4: lw          $a0, 0x38($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X38);
    func_10004074(rdram, ctx);
        goto after_1;
    // 0x1501E5F4: lw          $a0, 0x38($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X38);
    after_1:
    // 0x1501E5F8: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x1501E5FC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_1501E600:
    // 0x1501E600: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1501E604: bne         $at, $zero, L_1501E5BC
    if (ctx->r1 != 0) {
        // 0x1501E608: addiu       $s3, $s3, 0x2
        ctx->r19 = ADD32(ctx->r19, 0X2);
            goto L_1501E5BC;
    }
    // 0x1501E608: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x1501E60C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_1501E610:
    // 0x1501E610: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x1501E614: addiu       $s5, $s5, 0x3A50
    ctx->r21 = ADD32(ctx->r21, 0X3A50);
    // 0x1501E618: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1501E61C: addiu       $t8, $t8, 0x35C8
    ctx->r24 = ADD32(ctx->r24, 0X35C8);
    // 0x1501E620: addu        $s0, $s5, $s6
    ctx->r16 = ADD32(ctx->r21, ctx->r22);
    // 0x1501E624: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x1501E628: jal         0x10004074
    // 0x1501E62C: addu        $s7, $s6, $t8
    ctx->r23 = ADD32(ctx->r22, ctx->r24);
    func_10004074(rdram, ctx);
        goto after_2;
    // 0x1501E62C: addu        $s7, $s6, $t8
    ctx->r23 = ADD32(ctx->r22, ctx->r24);
    after_2:
    // 0x1501E630: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1501E634: addiu       $t9, $t9, 0x3958
    ctx->r25 = ADD32(ctx->r25, 0X3958);
    // 0x1501E638: addu        $s1, $s6, $t9
    ctx->r17 = ADD32(ctx->r22, ctx->r25);
    // 0x1501E63C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x1501E640: jal         0x10004074
    // 0x1501E644: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_10004074(rdram, ctx);
        goto after_3;
    // 0x1501E644: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_3:
    // 0x1501E648: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x1501E64C: lhu         $t0, 0x0($s4)
    ctx->r8 = MEM_HU(ctx->r20, 0X0);
    // 0x1501E650: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x1501E654: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1501E658: blez        $t0, L_1501E694
    if (SIGNED(ctx->r8) <= 0) {
        // 0x1501E65C: sll         $t2, $t1, 4
        ctx->r10 = S32(ctx->r9 << 4);
            goto L_1501E694;
    }
    // 0x1501E65C: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x1501E660: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x1501E664: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x1501E668: addiu       $t3, $t3, 0x3960
    ctx->r11 = ADD32(ctx->r11, 0X3960);
    // 0x1501E66C: addu        $s0, $t2, $t3
    ctx->r16 = ADD32(ctx->r10, ctx->r11);
L_1501E670:
    // 0x1501E670: jal         0x10004074
    // 0x1501E674: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_10004074(rdram, ctx);
        goto after_4;
    // 0x1501E674: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_4:
    // 0x1501E678: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x1501E67C: lhu         $t4, 0x0($s4)
    ctx->r12 = MEM_HU(ctx->r20, 0X0);
    // 0x1501E680: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1501E684: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1501E688: slt         $at, $s2, $t4
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x1501E68C: bne         $at, $zero, L_1501E670
    if (ctx->r1 != 0) {
        // 0x1501E690: nop
    
            goto L_1501E670;
    }
    // 0x1501E690: nop

L_1501E694:
    // 0x1501E694: jal         0x10004074
    // 0x1501E698: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    func_10004074(rdram, ctx);
        goto after_5;
    // 0x1501E698: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    after_5:
    // 0x1501E69C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1501E6A0: addiu       $t5, $t5, 0x35D0
    ctx->r13 = ADD32(ctx->r13, 0X35D0);
    // 0x1501E6A4: addu        $s0, $s6, $t5
    ctx->r16 = ADD32(ctx->r22, ctx->r13);
    // 0x1501E6A8: jal         0x10004074
    // 0x1501E6AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_10004074(rdram, ctx);
        goto after_6;
    // 0x1501E6AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_6:
    // 0x1501E6B0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501E6B4: addiu       $t6, $t6, 0x35D8
    ctx->r14 = ADD32(ctx->r14, 0X35D8);
    // 0x1501E6B8: addu        $s1, $s6, $t6
    ctx->r17 = ADD32(ctx->r22, ctx->r14);
    // 0x1501E6BC: jal         0x10004074
    // 0x1501E6C0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_10004074(rdram, ctx);
        goto after_7;
    // 0x1501E6C0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_7:
    // 0x1501E6C4: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501E6C8: addiu       $t7, $t7, 0x35E0
    ctx->r15 = ADD32(ctx->r15, 0X35E0);
    // 0x1501E6CC: addu        $s2, $s6, $t7
    ctx->r18 = ADD32(ctx->r22, ctx->r15);
    // 0x1501E6D0: jal         0x10004074
    // 0x1501E6D4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_10004074(rdram, ctx);
        goto after_8;
    // 0x1501E6D4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_8:
    // 0x1501E6D8: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x1501E6DC: addiu       $s3, $s3, 0x3D50
    ctx->r19 = ADD32(ctx->r19, 0X3D50);
    // 0x1501E6E0: sw          $zero, 0x0($s7)
    MEM_W(0X0, ctx->r23) = 0;
    // 0x1501E6E4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x1501E6E8: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x1501E6EC: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x1501E6F0: jal         0x10004074
    // 0x1501E6F4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    func_10004074(rdram, ctx);
        goto after_9;
    // 0x1501E6F4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_9:
    // 0x1501E6F8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x1501E6FC: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x1501E700: jal         0x10004074
    // 0x1501E704: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_10004074(rdram, ctx);
        goto after_10;
    // 0x1501E704: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_10:
    // 0x1501E708: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1501E70C: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x1501E710: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1501E714:
    // 0x1501E714: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1501E718: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1501E71C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1501E720: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1501E724: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x1501E728: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x1501E72C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x1501E730: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x1501E734: jr          $ra
    // 0x1501E738: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1501E738: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_1000E8C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000E8C4: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x1000E8C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1000E8CC: bne         $t6, $at, L_1000E8E8
    if (ctx->r14 != ctx->r1) {
        // 0x1000E8D0: lui         $v0, 0x8004
        ctx->r2 = S32(0X8004 << 16);
            goto L_1000E8E8;
    }
    // 0x1000E8D0: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000E8D4: addiu       $v0, $v0, 0x1F04
    ctx->r2 = ADD32(ctx->r2, 0X1F04);
    // 0x1000E8D8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1000E8DC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x1000E8E0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x1000E8E4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_1000E8E8:
    // 0x1000E8E8: jr          $ra
    // 0x1000E8EC: nop

    return;
    return;
    // 0x1000E8EC: nop

;}
RECOMP_FUNC void func_151B8908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B8908: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x151B890C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151B8910: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x151B8914: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151B8918: addiu       $t7, $t7, -0x5B48
    ctx->r15 = ADD32(ctx->r15, -0X5B48);
    // 0x151B891C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151B8920: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x151B8924: addiu       $t6, $sp, 0x2C
    ctx->r14 = ADD32(ctx->r29, 0X2C);
    // 0x151B8928: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151B892C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x151B8930: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x151B8934: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151B8938: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x151B893C: jal         0x150ADA20
    // 0x151B8940: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151B8940: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    after_0:
    // 0x151B8944: andi        $t1, $v0, 0x3
    ctx->r9 = ctx->r2 & 0X3;
    // 0x151B8948: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151B894C: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x151B8950: lw          $t3, 0x2C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2C);
    // 0x151B8954: lui         $t5, 0x20
    ctx->r13 = S32(0X20 << 16);
    // 0x151B8958: addiu       $t4, $zero, 0x1303
    ctx->r12 = ADD32(0, 0X1303);
    // 0x151B895C: ori         $t5, $t5, 0x5
    ctx->r13 = ctx->r13 | 0X5;
    // 0x151B8960: sh          $t4, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r12;
    // 0x151B8964: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x151B8968: sb          $t3, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r11;
    // 0x151B896C: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x151B8970: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151B8974: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151B8978: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151B897C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151B8980: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151B8984: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151B8988: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151B898C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151B8990: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151B8994: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x151B8998: sh          $t9, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r25;
    // 0x151B899C: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x151B89A0: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x151B89A4: sb          $t8, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r24;
    // 0x151B89A8: sb          $t6, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r14;
    // 0x151B89AC: sb          $t7, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r15;
    // 0x151B89B0: sb          $t0, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r8;
    // 0x151B89B4: sb          $t1, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r9;
    // 0x151B89B8: sb          $t2, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r10;
    // 0x151B89BC: sb          $t3, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r11;
    // 0x151B89C0: sb          $t4, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r12;
    // 0x151B89C4: jal         0x150ADA68
    // 0x151B89C8: sb          $t5, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r13;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151B89C8: sb          $t5, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r13;
    after_1:
    // 0x151B89CC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x151B89D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B89D4: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x151B89D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151B89DC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151B89E0: lw          $t8, 0xB0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB0);
    // 0x151B89E4: addiu       $t9, $sp, 0x6C
    ctx->r25 = ADD32(ctx->r29, 0X6C);
    // 0x151B89E8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x151B89EC: addiu       $v0, $v0, 0x5480
    ctx->r2 = ADD32(ctx->r2, 0X5480);
    // 0x151B89F0: addiu       $t1, $sp, 0x78
    ctx->r9 = ADD32(ctx->r29, 0X78);
    // 0x151B89F4: addiu       $t5, $sp, 0x84
    ctx->r13 = ADD32(ctx->r29, 0X84);
    // 0x151B89F8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151B89FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151B8A00: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151B8A04: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x151B8A08: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x151B8A0C: lw          $at, 0x38($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X38);
    // 0x151B8A10: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x151B8A14: lw          $t0, 0x3C($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X3C);
    // 0x151B8A18: sw          $t0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r8;
    // 0x151B8A1C: lw          $at, 0x40($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X40);
    // 0x151B8A20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151B8A24: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151B8A28: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151B8A2C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151B8A30: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x151B8A34: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x151B8A38: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x151B8A3C: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151B8A40: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x151B8A44: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151B8A48: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x151B8A4C: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x151B8A50: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x151B8A54: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151B8A58: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x151B8A5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151B8A60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151B8A64: sh          $t8, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r24;
    // 0x151B8A68: sh          $t0, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r8;
    // 0x151B8A6C: sh          $t3, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r11;
    // 0x151B8A70: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x151B8A74: jal         0x150ADA20
    // 0x151B8A78: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151B8A78: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x151B8A7C: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x151B8A80: beq         $t2, $zero, L_151B8A90
    if (ctx->r10 == 0) {
        // 0x151B8A84: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_151B8A90;
    }
    // 0x151B8A84: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151B8A88: b           L_151B8A90
    // 0x151B8A8C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_151B8A90;
    // 0x151B8A8C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_151B8A90:
    // 0x151B8A90: jal         0x150ADA20
    // 0x151B8A94: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151B8A94: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_3:
    // 0x151B8A98: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x151B8A9C: beq         $t1, $zero, L_151B8AAC
    if (ctx->r9 == 0) {
        // 0x151B8AA0: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_151B8AAC;
    }
    // 0x151B8AA0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x151B8AA4: b           L_151B8AB0
    // 0x151B8AA8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_151B8AB0;
    // 0x151B8AA8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_151B8AAC:
    // 0x151B8AAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151B8AB0:
    // 0x151B8AB0: or          $t6, $v0, $v1
    ctx->r14 = ctx->r2 | ctx->r3;
    // 0x151B8AB4: ori         $t7, $t6, 0xC000
    ctx->r15 = ctx->r14 | 0XC000;
    // 0x151B8AB8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x151B8ABC: or          $t5, $t7, $at
    ctx->r13 = ctx->r15 | ctx->r1;
    // 0x151B8AC0: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x151B8AC4: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x151B8AC8: or          $t9, $t5, $at
    ctx->r25 = ctx->r13 | ctx->r1;
    // 0x151B8ACC: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x151B8AD0: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x151B8AD4: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151B8AD8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151B8ADC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151B8AE0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151B8AE4: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
    // 0x151B8AE8: sb          $t8, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r24;
    // 0x151B8AEC: sb          $t0, 0x9D($sp)
    MEM_B(0X9D, ctx->r29) = ctx->r8;
    // 0x151B8AF0: sb          $t3, 0x9E($sp)
    MEM_B(0X9E, ctx->r29) = ctx->r11;
    // 0x151B8AF4: sb          $t2, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = ctx->r10;
    // 0x151B8AF8: sb          $t1, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r9;
    // 0x151B8AFC: sb          $zero, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = 0;
    // 0x151B8B00: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x151B8B04: sb          $t4, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r12;
    // 0x151B8B08: lbu         $t7, 0xC($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XC);
    // 0x151B8B0C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x151B8B10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151B8B14: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151B8B18: lbu         $t5, 0x1($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X1);
    // 0x151B8B1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151B8B20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151B8B24: jal         0x15130280
    // 0x151B8B28: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_15130280(rdram, ctx);
        goto after_4;
    // 0x151B8B28: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_4:
    // 0x151B8B2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151B8B30: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x151B8B34: jr          $ra
    // 0x151B8B38: nop

    return;
    return;
    // 0x151B8B38: nop

;}
RECOMP_FUNC void func_15143794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15143794: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15143798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514379C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151437A0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151437A4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151437A8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151437AC: jal         0x151423D8
    // 0x151437B0: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x151437B0: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    after_0:
    // 0x151437B4: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x151437B8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x151437BC: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151437C0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x151437C4: jal         0x151423D8
    // 0x151437C8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x151437C8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x151437CC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x151437D0: jal         0x151423D8
    // 0x151437D4: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x151437D4: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    after_2:
    // 0x151437D8: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x151437DC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x151437E0: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151437E4: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x151437E8: jal         0x151423D8
    // 0x151437EC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x151437EC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_3:
    // 0x151437F0: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151437F4: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x151437F8: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x151437FC: neg.s       $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = -ctx->f12.fl;
    // 0x15143800: mul.s       $f2, $f12, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x15143804: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x15143808: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x1514380C: nop

    // 0x15143810: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15143814: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x15143818: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x1514381C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15143820: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x15143824: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x15143828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514382C: jr          $ra
    // 0x15143830: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x15143830: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_15130230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15130230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15130234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15130238: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1513023C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x15130240: lw          $t6, 0xDF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XDF0);
    // 0x15130244: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15130248: lbu         $v0, 0xF($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XF);
    // 0x1513024C: beq         $v0, $zero, L_15130264
    if (ctx->r2 == 0) {
        // 0x15130250: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_15130264;
    }
    // 0x15130250: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15130254: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15130258: lw          $t9, -0x6990($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6990);
    // 0x1513025C: jalr        $t9
    // 0x15130260: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15130260: nop

    after_0:
L_15130264:
    // 0x15130264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15130268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513026C: jr          $ra
    // 0x15130270: nop

    return;
    return;
    // 0x15130270: nop

;}
RECOMP_FUNC void func_151BECB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BECB8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x151BECBC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151BECC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151BECC4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x151BECC8: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x151BECCC: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x151BECD0: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x151BECD4: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x151BECD8: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x151BECDC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x151BECE0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x151BECE4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x151BECE8: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x151BECEC: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x151BECF0: lui         $at, 0x422C
    ctx->r1 = S32(0X422C << 16);
    // 0x151BECF4: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x151BECF8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151BECFC: addiu       $s3, $s3, -0x3D30
    ctx->r19 = ADD32(ctx->r19, -0X3D30);
    // 0x151BED00: addiu       $fp, $sp, 0x98
    ctx->r30 = ADD32(ctx->r29, 0X98);
    // 0x151BED04: addiu       $s7, $sp, 0x9C
    ctx->r23 = ADD32(ctx->r29, 0X9C);
    // 0x151BED08: addiu       $s6, $sp, 0x8C
    ctx->r22 = ADD32(ctx->r29, 0X8C);
L_151BED0C:
    // 0x151BED0C: jal         0x151BEE94
    // 0x151BED10: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_151BEE94(rdram, ctx);
        goto after_0;
    // 0x151BED10: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x151BED14: beq         $v0, $zero, L_151BEE48
    if (ctx->r2 == 0) {
        // 0x151BED18: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_151BEE48;
    }
    // 0x151BED18: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151BED1C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x151BED20: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x151BED24: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x151BED28: jal         0x1515C1A0
    // 0x151BED2C: addiu       $s1, $s0, 0x120
    ctx->r17 = ADD32(ctx->r16, 0X120);
    func_1515C1A0(rdram, ctx);
        goto after_1;
    // 0x151BED2C: addiu       $s1, $s0, 0x120
    ctx->r17 = ADD32(ctx->r16, 0X120);
    after_1:
    // 0x151BED30: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x151BED34: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x151BED38: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x151BED3C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x151BED40: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151BED44: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x151BED48: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x151BED4C: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x151BED50: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151BED54: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x151BED58: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x151BED5C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151BED60: jal         0x15143E64
    // 0x151BED64: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    func_15143E64(rdram, ctx);
        goto after_2;
    // 0x151BED64: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x151BED68: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x151BED6C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151BED70: addiu       $s4, $s0, 0x54
    ctx->r20 = ADD32(ctx->r16, 0X54);
    // 0x151BED74: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x151BED78: addiu       $s2, $s1, 0x4
    ctx->r18 = ADD32(ctx->r17, 0X4);
    // 0x151BED7C: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x151BED80: nop

    // 0x151BED84: bc1f        L_151BEE48
    if (!c1cs) {
        // 0x151BED88: nop
    
            goto L_151BEE48;
    }
    // 0x151BED88: nop

    // 0x151BED8C: lbu         $a0, 0x127($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X127);
    // 0x151BED90: lbu         $a2, 0x10($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X10);
    // 0x151BED94: jal         0x15085710
    // 0x151BED98: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    func_15085710(rdram, ctx);
        goto after_3;
    // 0x151BED98: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    after_3:
    // 0x151BED9C: addiu       $a0, $zero, 0x511
    ctx->r4 = ADD32(0, 0X511);
    // 0x151BEDA0: addiu       $a1, $zero, 0x7D00
    ctx->r5 = ADD32(0, 0X7D00);
    // 0x151BEDA4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151BEDA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151BEDAC: jal         0x10010F30
    // 0x151BEDB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_4;
    // 0x151BEDB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x151BEDB4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x151BEDB8: jal         0x151BF340
    // 0x151BEDBC: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    func_151BF340(rdram, ctx);
        goto after_5;
    // 0x151BEDBC: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    after_5:
    // 0x151BEDC0: jal         0x151BF0C8
    // 0x151BEDC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_151BF0C8(rdram, ctx);
        goto after_6;
    // 0x151BEDC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x151BEDC8: lbu         $v0, 0x48($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X48);
    // 0x151BEDCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151BEDD0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151BEDD4: beq         $v0, $zero, L_151BEE0C
    if (ctx->r2 == 0) {
        // 0x151BEDD8: nop
    
            goto L_151BEE0C;
    }
    // 0x151BEDD8: nop

    // 0x151BEDDC: beq         $v0, $at, L_151BEDFC
    if (ctx->r2 == ctx->r1) {
        // 0x151BEDE0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151BEDFC;
    }
    // 0x151BEDE0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151BEDE4: beq         $v0, $at, L_151BEE04
    if (ctx->r2 == ctx->r1) {
        // 0x151BEDE8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_151BEE04;
    }
    // 0x151BEDE8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151BEDEC: beq         $v0, $at, L_151BEE0C
    if (ctx->r2 == ctx->r1) {
        // 0x151BEDF0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_151BEE0C;
    }
    // 0x151BEDF0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151BEDF4: b           L_151BEE10
    // 0x151BEDF8: lwc1        $f12, 0x0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X0);
        goto L_151BEE10;
    // 0x151BEDF8: lwc1        $f12, 0x0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X0);
L_151BEDFC:
    // 0x151BEDFC: b           L_151BEE0C
    // 0x151BEE00: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_151BEE0C;
    // 0x151BEE00: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151BEE04:
    // 0x151BEE04: b           L_151BEE0C
    // 0x151BEE08: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_151BEE0C;
    // 0x151BEE08: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_151BEE0C:
    // 0x151BEE0C: lwc1        $f12, 0x0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X0);
L_151BEE10:
    // 0x151BEE10: lw          $a2, 0xFC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XFC);
    // 0x151BEE14: lbu         $a3, 0x11B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X11B);
    // 0x151BEE18: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x151BEE1C: lbu         $t6, 0x10($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X10);
    // 0x151BEE20: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x151BEE24: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x151BEE28: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151BEE2C: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x151BEE30: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151BEE34: lbu         $t9, 0xC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XC);
    // 0x151BEE38: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x151BEE3C: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x151BEE40: jal         0x151BEEE0
    // 0x151BEE44: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_151BEEE0(rdram, ctx);
        goto after_7;
    // 0x151BEE44: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_7:
L_151BEE48:
    // 0x151BEE48: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x151BEE4C: addiu       $t1, $t1, 0x1548
    ctx->r9 = ADD32(ctx->r9, 0X1548);
    // 0x151BEE50: addiu       $s3, $s3, 0x32C
    ctx->r19 = ADD32(ctx->r19, 0X32C);
    // 0x151BEE54: bne         $s3, $t1, L_151BED0C
    if (ctx->r19 != ctx->r9) {
        // 0x151BEE58: nop
    
            goto L_151BED0C;
    }
    // 0x151BEE58: nop

    // 0x151BEE5C: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x151BEE60: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x151BEE64: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x151BEE68: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151BEE6C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x151BEE70: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x151BEE74: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x151BEE78: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x151BEE7C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x151BEE80: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x151BEE84: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x151BEE88: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x151BEE8C: jr          $ra
    // 0x151BEE90: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    return;
    // 0x151BEE90: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_1516D3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516D3C4: beq         $a0, $zero, L_1516D3F4
    if (ctx->r4 == 0) {
        // 0x1516D3C8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1516D3F4;
    }
    // 0x1516D3C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1516D3CC: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x1516D3D0: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x1516D3D4: bne         $t6, $at, L_1516D3F4
    if (ctx->r14 != ctx->r1) {
        // 0x1516D3D8: nop
    
            goto L_1516D3F4;
    }
    // 0x1516D3D8: nop

    // 0x1516D3DC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x1516D3E0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1516D3E4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1516D3E8: ori         $t8, $t7, 0x500
    ctx->r24 = ctx->r15 | 0X500;
    // 0x1516D3EC: jr          $ra
    // 0x1516D3F0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    return;
    return;
    // 0x1516D3F0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_1516D3F4:
    // 0x1516D3F4: jr          $ra
    // 0x1516D3F8: nop

    return;
    return;
    // 0x1516D3F8: nop

;}
RECOMP_FUNC void func_15116924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15116924: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15116928: jr          $ra
    // 0x1511692C: nop

    return;
    return;
    // 0x1511692C: nop

;}
RECOMP_FUNC void func_150EEF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EEF80: addiu       $sp, $sp, -0x170
    ctx->r29 = ADD32(ctx->r29, -0X170);
    // 0x150EEF84: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    // 0x150EEF88: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x150EEF8C: andi        $s3, $a2, 0xFF
    ctx->r19 = ctx->r6 & 0XFF;
    // 0x150EEF90: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x150EEF94: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x150EEF98: sw          $s5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r21;
    // 0x150EEF9C: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x150EEFA0: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x150EEFA4: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x150EEFA8: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x150EEFAC: sw          $a0, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r4;
    // 0x150EEFB0: sw          $a1, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r5;
    // 0x150EEFB4: sw          $a2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r6;
    // 0x150EEFB8: lw          $t6, 0x170($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X170);
    // 0x150EEFBC: lbu         $t7, 0x177($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X177);
    // 0x150EEFC0: bne         $t6, $zero, L_150EEFD0
    if (ctx->r14 != 0) {
        // 0x150EEFC4: slti        $at, $t7, 0x2
        ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
            goto L_150EEFD0;
    }
    // 0x150EEFC4: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x150EEFC8: b           L_150EF364
    // 0x150EEFCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150EF364;
    // 0x150EEFCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150EEFD0:
    // 0x150EEFD0: bne         $at, $zero, L_150EEFE0
    if (ctx->r1 != 0) {
        // 0x150EEFD4: nop
    
            goto L_150EEFE0;
    }
    // 0x150EEFD4: nop

    // 0x150EEFD8: b           L_150EF364
    // 0x150EEFDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150EF364;
    // 0x150EEFDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150EEFE0:
    // 0x150EEFE0: jal         0x150ADA68
    // 0x150EEFE4: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150EEFE4: nop

    after_0:
    // 0x150EEFE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EEFEC: lwc1        $f20, 0x1814($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X1814);
    // 0x150EEFF0: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150EEFF4: jal         0x150ADA68
    // 0x150EEFF8: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150EEFF8: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x150EEFFC: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150EF000: lw          $v0, 0x170($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X170);
    // 0x150EF004: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x150EF008: sw          $v0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r2;
    // 0x150EF00C: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x150EF010: lbu         $t8, 0x3B($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3B);
    // 0x150EF014: jal         0x15083E90
    // 0x150EF018: sb          $t8, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r24;
    func_15083E90(rdram, ctx);
        goto after_2;
    // 0x150EF018: sb          $t8, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r24;
    after_2:
    // 0x150EF01C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x150EF020: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150EF024: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150EF028: lbu         $t0, 0x177($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X177);
    // 0x150EF02C: addiu       $v1, $v1, 0x5480
    ctx->r3 = ADD32(ctx->r3, 0X5480);
    // 0x150EF030: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150EF034: addiu       $t9, $zero, 0x12
    ctx->r25 = ADD32(0, 0X12);
    // 0x150EF038: sw          $v0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r2;
    // 0x150EF03C: sb          $t9, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r25;
    // 0x150EF040: addiu       $t1, $sp, 0x100
    ctx->r9 = ADD32(ctx->r29, 0X100);
    // 0x150EF044: sb          $t0, 0xDD($sp)
    MEM_B(0XDD, ctx->r29) = ctx->r8;
    // 0x150EF048: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150EF04C: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x150EF050: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x150EF054: addiu       $t5, $zero, 0x94
    ctx->r13 = ADD32(0, 0X94);
    // 0x150EF058: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x150EF05C: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150EF060: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x150EF064: addiu       $t7, $zero, 0x2203
    ctx->r15 = ADD32(0, 0X2203);
    // 0x150EF068: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x150EF06C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150EF070: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150EF074: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150EF078: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x150EF07C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150EF080: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150EF084: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150EF088: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150EF08C: sb          $zero, 0xE8($sp)
    MEM_B(0XE8, ctx->r29) = 0;
    // 0x150EF090: sb          $t5, 0x114($sp)
    MEM_B(0X114, ctx->r29) = ctx->r13;
    // 0x150EF094: sb          $t6, 0x115($sp)
    MEM_B(0X115, ctx->r29) = ctx->r14;
    // 0x150EF098: sh          $t7, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r15;
    // 0x150EF09C: sh          $t8, 0x118($sp)
    MEM_H(0X118, ctx->r29) = ctx->r24;
    // 0x150EF0A0: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x150EF0A4: sw          $zero, 0x120($sp)
    MEM_W(0X120, ctx->r29) = 0;
    // 0x150EF0A8: sb          $t9, 0x124($sp)
    MEM_B(0X124, ctx->r29) = ctx->r25;
    // 0x150EF0AC: sb          $t0, 0x125($sp)
    MEM_B(0X125, ctx->r29) = ctx->r8;
    // 0x150EF0B0: sb          $t3, 0x126($sp)
    MEM_B(0X126, ctx->r29) = ctx->r11;
    // 0x150EF0B4: sb          $t2, 0x127($sp)
    MEM_B(0X127, ctx->r29) = ctx->r10;
    // 0x150EF0B8: addiu       $t1, $sp, 0x130
    ctx->r9 = ADD32(ctx->r29, 0X130);
    // 0x150EF0BC: swc1        $f0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f0.u32l;
    // 0x150EF0C0: swc1        $f0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f0.u32l;
    // 0x150EF0C4: swc1        $f20, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f20.u32l;
    // 0x150EF0C8: swc1        $f20, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f20.u32l;
    // 0x150EF0CC: swc1        $f20, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f20.u32l;
    // 0x150EF0D0: swc1        $f20, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f20.u32l;
    // 0x150EF0D4: swc1        $f8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f8.u32l;
    // 0x150EF0D8: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150EF0DC: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x150EF0E0: addiu       $t7, $sp, 0x13C
    ctx->r15 = ADD32(ctx->r29, 0X13C);
    // 0x150EF0E4: lui         $t3, 0x46C
    ctx->r11 = S32(0X46C << 16);
    // 0x150EF0E8: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x150EF0EC: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150EF0F0: ori         $t3, $t3, 0x8
    ctx->r11 = ctx->r11 | 0X8;
    // 0x150EF0F4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150EF0F8: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x150EF0FC: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150EF100: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x150EF104: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150EF108: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150EF10C: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x150EF110: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150EF114: addiu       $t8, $zero, 0x1C
    ctx->r24 = ADD32(0, 0X1C);
    // 0x150EF118: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x150EF11C: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150EF120: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150EF124: addiu       $a1, $a1, 0x4AA0
    ctx->r5 = ADD32(ctx->r5, 0X4AA0);
    // 0x150EF128: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x150EF12C: addiu       $t7, $zero, 0x44
    ctx->r15 = ADD32(0, 0X44);
    // 0x150EF130: sw          $t3, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r11;
    // 0x150EF134: sb          $t2, 0x158($sp)
    MEM_B(0X158, ctx->r29) = ctx->r10;
    // 0x150EF138: sb          $t5, 0x159($sp)
    MEM_B(0X159, ctx->r29) = ctx->r13;
    // 0x150EF13C: sb          $zero, 0x15A($sp)
    MEM_B(0X15A, ctx->r29) = 0;
    // 0x150EF140: sb          $t4, 0x15B($sp)
    MEM_B(0X15B, ctx->r29) = ctx->r12;
    // 0x150EF144: sw          $zero, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = 0;
    // 0x150EF148: sb          $t1, 0x160($sp)
    MEM_B(0X160, ctx->r29) = ctx->r9;
    // 0x150EF14C: sw          $zero, 0x164($sp)
    MEM_W(0X164, ctx->r29) = 0;
    // 0x150EF150: sh          $t6, 0x168($sp)
    MEM_H(0X168, ctx->r29) = ctx->r14;
    // 0x150EF154: sh          $t9, 0x16A($sp)
    MEM_H(0X16A, ctx->r29) = ctx->r25;
    // 0x150EF158: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x150EF15C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x150EF160: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x150EF164: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150EF168: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150EF16C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150EF170: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150EF174: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150EF178: addiu       $a0, $sp, 0x114
    ctx->r4 = ADD32(ctx->r29, 0X114);
    // 0x150EF17C: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x150EF180: jal         0x1513D2F0
    // 0x150EF184: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1513D2F0(rdram, ctx);
        goto after_3;
    // 0x150EF184: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x150EF188: beq         $v0, $zero, L_150EF360
    if (ctx->r2 == 0) {
        // 0x150EF18C: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_150EF360;
    }
    // 0x150EF18C: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x150EF190: addiu       $s0, $v0, 0x110
    ctx->r16 = ADD32(ctx->r2, 0X110);
    // 0x150EF194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EF198: addiu       $a1, $sp, 0xD0
    ctx->r5 = ADD32(ctx->r29, 0XD0);
    // 0x150EF19C: jal         0x10022EC0
    // 0x150EF1A0: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x150EF1A0: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    after_4:
    // 0x150EF1A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150EF1A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150EF1AC: lw          $v1, 0x170($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X170);
    // 0x150EF1B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EF1B4: lwc1        $f10, 0x1818($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1818);
    // 0x150EF1B8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150EF1BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150EF1C0: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x150EF1C4: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x150EF1C8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150EF1CC: addiu       $t5, $zero, 0xDC
    ctx->r13 = ADD32(0, 0XDC);
    // 0x150EF1D0: addiu       $t4, $zero, 0xA0
    ctx->r12 = ADD32(0, 0XA0);
    // 0x150EF1D4: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
    // 0x150EF1D8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x150EF1DC: sh          $t0, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r8;
    // 0x150EF1E0: sh          $t3, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r11;
    // 0x150EF1E4: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x150EF1E8: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x150EF1EC: sb          $zero, 0x88($sp)
    MEM_B(0X88, ctx->r29) = 0;
    // 0x150EF1F0: sb          $t2, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r10;
    // 0x150EF1F4: sb          $t5, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r13;
    // 0x150EF1F8: sb          $t4, 0x92($sp)
    MEM_B(0X92, ctx->r29) = ctx->r12;
    // 0x150EF1FC: sb          $t1, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r9;
    // 0x150EF200: sb          $zero, 0x98($sp)
    MEM_B(0X98, ctx->r29) = 0;
    // 0x150EF204: sb          $t6, 0x99($sp)
    MEM_B(0X99, ctx->r29) = ctx->r14;
    // 0x150EF208: swc1        $f20, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f20.u32l;
    // 0x150EF20C: swc1        $f20, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f20.u32l;
    // 0x150EF210: swc1        $f20, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f20.u32l;
    // 0x150EF214: swc1        $f20, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f20.u32l;
    // 0x150EF218: swc1        $f20, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f20.u32l;
    // 0x150EF21C: swc1        $f20, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f20.u32l;
    // 0x150EF220: swc1        $f20, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f20.u32l;
    // 0x150EF224: swc1        $f20, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f20.u32l;
    // 0x150EF228: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    // 0x150EF22C: swc1        $f20, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f20.u32l;
    // 0x150EF230: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x150EF234: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x150EF238: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x150EF23C: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    // 0x150EF240: lbu         $t9, 0x3B($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X3B);
    // 0x150EF244: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150EF248: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x150EF24C: sb          $t8, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = ctx->r24;
    // 0x150EF250: sb          $zero, 0x78($sp)
    MEM_B(0X78, ctx->r29) = 0;
    // 0x150EF254: addiu       $s2, $sp, 0x6C
    ctx->r18 = ADD32(ctx->r29, 0X6C);
    // 0x150EF258: addiu       $s1, $sp, 0x7C
    ctx->r17 = ADD32(ctx->r29, 0X7C);
    // 0x150EF25C: sb          $t9, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r25;
L_150EF260:
    // 0x150EF260: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150EF264: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x150EF268: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    // 0x150EF26C: jal         0x151A7950
    // 0x150EF270: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_151A7950(rdram, ctx);
        goto after_5;
    // 0x150EF270: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_5:
    // 0x150EF274: lbu         $t7, 0x78($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X78);
    // 0x150EF278: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150EF27C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x150EF280: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x150EF284: addu        $t3, $s0, $t0
    ctx->r11 = ADD32(ctx->r16, ctx->r8);
    // 0x150EF288: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x150EF28C: sw          $v0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->r2;
    // 0x150EF290: addu        $t5, $s0, $t2
    ctx->r13 = ADD32(ctx->r16, ctx->r10);
    // 0x150EF294: lw          $v1, 0x1C($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X1C);
    // 0x150EF298: beql        $v1, $zero, L_150EF2AC
    if (ctx->r3 == 0) {
        // 0x150EF29C: lbu         $v0, 0x78($sp)
        ctx->r2 = MEM_BU(ctx->r29, 0X78);
            goto L_150EF2AC;
    }
    goto skip_0;
    // 0x150EF29C: lbu         $v0, 0x78($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X78);
    skip_0:
    // 0x150EF2A0: jal         0x10022EC0
    // 0x150EF2A4: lw          $a0, 0x60($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X60);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x150EF2A4: lw          $a0, 0x60($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X60);
    after_6:
    // 0x150EF2A8: lbu         $v0, 0x78($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X78);
L_150EF2AC:
    // 0x150EF2AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150EF2B0: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x150EF2B4: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x150EF2B8: bne         $at, $zero, L_150EF260
    if (ctx->r1 != 0) {
        // 0x150EF2BC: sb          $t4, 0x78($sp)
        MEM_B(0X78, ctx->r29) = ctx->r12;
            goto L_150EF260;
    }
    // 0x150EF2BC: sb          $t4, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r12;
    // 0x150EF2C0: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x150EF2C4: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x150EF2C8: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x150EF2CC: swc1        $f20, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f20.u32l;
    // 0x150EF2D0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150EF2D4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x150EF2D8: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150EF2DC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150EF2E0: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    // 0x150EF2E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150EF2E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150EF2EC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x150EF2F0: jal         0x15149130
    // 0x150EF2F4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    func_15149130(rdram, ctx);
        goto after_7;
    // 0x150EF2F4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    after_7:
    // 0x150EF2F8: beq         $v0, $zero, L_150EF310
    if (ctx->r2 == 0) {
        // 0x150EF2FC: sw          $v0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r2;
            goto L_150EF310;
    }
    // 0x150EF2FC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x150EF300: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150EF304: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x150EF308: jal         0x10022EC0
    // 0x150EF30C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x150EF30C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
L_150EF310:
    // 0x150EF310: addiu       $t9, $zero, 0xA0
    ctx->r25 = ADD32(0, 0XA0);
    // 0x150EF314: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150EF318: lw          $a0, 0x170($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X170);
    // 0x150EF31C: lbu         $a1, 0x177($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X177);
    // 0x150EF320: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150EF324: addiu       $a3, $zero, 0xD9
    ctx->r7 = ADD32(0, 0XD9);
    // 0x150EF328: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x150EF32C: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x150EF330: jal         0x150EFEC8
    // 0x150EF334: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    func_150EFEC8(rdram, ctx);
        goto after_9;
    // 0x150EF334: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    after_9:
    // 0x150EF338: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x150EF33C: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x150EF340: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x150EF344: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x150EF348: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    // 0x150EF34C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150EF350: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    // 0x150EF354: jal         0x150F0198
    // 0x150EF358: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_150F0198(rdram, ctx);
        goto after_10;
    // 0x150EF358: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x150EF35C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_150EF360:
    // 0x150EF360: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_150EF364:
    // 0x150EF364: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x150EF368: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x150EF36C: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x150EF370: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x150EF374: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x150EF378: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x150EF37C: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x150EF380: lw          $s5, 0x50($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X50);
    // 0x150EF384: jr          $ra
    // 0x150EF388: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
    return;
    return;
    // 0x150EF388: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
;}
RECOMP_FUNC void guMtxIdentF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A7BC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150A7BC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150A7BC8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x150A7BCC: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x150A7BD0: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x150A7BD4: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x150A7BD8: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x150A7BDC: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x150A7BE0: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x150A7BE4: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x150A7BE8: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x150A7BEC: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x150A7BF0: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x150A7BF4: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x150A7BF8: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x150A7BFC: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x150A7C00: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x150A7C04: jr          $ra
    // 0x150A7C08: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    return;
    return;
    // 0x150A7C08: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x150A7C0C: nop

;}
RECOMP_FUNC void func_150E1AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E1AB0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150E1AB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150E1AB8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150E1ABC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x150E1AC0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x150E1AC4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x150E1AC8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x150E1ACC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150E1AD0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150E1AD4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150E1AD8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150E1ADC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x150E1AE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150E1AE4: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x150E1AE8: jal         0x15167A68
    // 0x150E1AEC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x150E1AEC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x150E1AF0: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150E1AF4: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150E1AF8: beq         $v0, $zero, L_150E1D00
    if (ctx->r2 == 0) {
        // 0x150E1AFC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_150E1D00;
    }
    // 0x150E1AFC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150E1B00: lh          $t8, 0x76($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X76);
    // 0x150E1B04: swc1        $f0, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f0.u32l;
    // 0x150E1B08: sh          $t8, 0x90($v0)
    MEM_H(0X90, ctx->r2) = ctx->r24;
    // 0x150E1B0C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150E1B10: swc1        $f18, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->f18.u32l;
    // 0x150E1B14: swc1        $f4, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->f4.u32l;
    // 0x150E1B18: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150E1B1C: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150E1B20: sub.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x150E1B24: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x150E1B28: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x150E1B2C: neg.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = -ctx->f16.fl;
    // 0x150E1B30: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
    // 0x150E1B34: jal         0x150484A0
    // 0x150E1B38: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    func_150484A0(rdram, ctx);
        goto after_1;
    // 0x150E1B38: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x150E1B3C: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150E1B40: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150E1B44: swc1        $f0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f0.u32l;
    // 0x150E1B48: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150E1B4C: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150E1B50: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150E1B54: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x150E1B58: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150E1B5C: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150E1B60: jal         0x150484A0
    // 0x150E1B64: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    func_150484A0(rdram, ctx);
        goto after_2;
    // 0x150E1B64: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    after_2:
    // 0x150E1B68: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150E1B6C: swc1        $f0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f0.u32l;
    // 0x150E1B70: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x150E1B74: swc1        $f2, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f2.u32l;
    // 0x150E1B78: swc1        $f2, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f2.u32l;
    // 0x150E1B7C: swc1        $f2, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f2.u32l;
    // 0x150E1B80: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150E1B84: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150E1B88: addiu       $t2, $t2, -0x35B4
    ctx->r10 = ADD32(ctx->r10, -0X35B4);
    // 0x150E1B8C: swc1        $f10, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f10.u32l;
    // 0x150E1B90: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150E1B94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150E1B98: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150E1B9C: swc1        $f4, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f4.u32l;
    // 0x150E1BA0: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150E1BA4: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x150E1BA8: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
    // 0x150E1BAC: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150E1BB0: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
    // 0x150E1BB4: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x150E1BB8: swc1        $f10, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f10.u32l;
    // 0x150E1BBC: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150E1BC0: swc1        $f4, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f4.u32l;
    // 0x150E1BC4: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x150E1BC8: sb          $zero, 0xE3($s0)
    MEM_B(0XE3, ctx->r16) = 0;
    // 0x150E1BCC: swc1        $f6, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f6.u32l;
    // 0x150E1BD0: lbu         $t9, 0x9B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X9B);
    // 0x150E1BD4: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x150E1BD8: sb          $zero, 0xFD($s0)
    MEM_B(0XFD, ctx->r16) = 0;
    // 0x150E1BDC: sb          $t9, 0xFC($s0)
    MEM_B(0XFC, ctx->r16) = ctx->r25;
    // 0x150E1BE0: lbu         $t4, 0x9F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X9F);
    // 0x150E1BE4: sw          $v0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r2;
    // 0x150E1BE8: sb          $t4, 0xFE($s0)
    MEM_B(0XFE, ctx->r16) = ctx->r12;
    // 0x150E1BEC: lhu         $t5, 0x7A($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X7A);
    // 0x150E1BF0: sh          $t5, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r13;
    // 0x150E1BF4: lb          $t6, 0x7F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X7F);
    // 0x150E1BF8: sb          $t6, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r14;
    // 0x150E1BFC: lb          $t7, 0xD0($s0)
    ctx->r15 = MEM_B(ctx->r16, 0XD0);
    // 0x150E1C00: beql        $t7, $zero, L_150E1C84
    if (ctx->r15 == 0) {
        // 0x150E1C04: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_150E1C84;
    }
    goto skip_0;
    // 0x150E1C04: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    skip_0:
    // 0x150E1C08: bne         $v0, $zero, L_150E1C20
    if (ctx->r2 != 0) {
        // 0x150E1C0C: lh          $t8, 0x82($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X82);
            goto L_150E1C20;
    }
    // 0x150E1C0C: lh          $t8, 0x82($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X82);
    // 0x150E1C10: jal         0x1516979C
    // 0x150E1C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516979C(rdram, ctx);
        goto after_3;
    // 0x150E1C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x150E1C18: b           L_150E1D04
    // 0x150E1C1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_150E1D04;
    // 0x150E1C1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150E1C20:
    // 0x150E1C20: lh          $v0, 0x86($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X86);
    // 0x150E1C24: sh          $t8, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r24;
    // 0x150E1C28: negu        $t9, $v0
    ctx->r25 = SUB32(0, ctx->r2);
    // 0x150E1C2C: sh          $t9, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r25;
    // 0x150E1C30: sh          $v0, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r2;
    // 0x150E1C34: lbu         $t4, 0x8F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X8F);
    // 0x150E1C38: sb          $t4, 0xDA($s0)
    MEM_B(0XDA, ctx->r16) = ctx->r12;
    // 0x150E1C3C: lbu         $t5, 0x93($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X93);
    // 0x150E1C40: sb          $t5, 0xE2($s0)
    MEM_B(0XE2, ctx->r16) = ctx->r13;
    // 0x150E1C44: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x150E1C48: sh          $t6, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r14;
    // 0x150E1C4C: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150E1C50: swc1        $f8, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f8.u32l;
    // 0x150E1C54: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x150E1C58: swc1        $f10, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f10.u32l;
    // 0x150E1C5C: lwc1        $f4, 0xA8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x150E1C60: swc1        $f4, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f4.u32l;
    // 0x150E1C64: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x150E1C68: swc1        $f6, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f6.u32l;
    // 0x150E1C6C: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x150E1C70: swc1        $f8, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f8.u32l;
    // 0x150E1C74: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150E1C78: b           L_150E1C8C
    // 0x150E1C7C: swc1        $f10, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->f10.u32l;
        goto L_150E1C8C;
    // 0x150E1C7C: swc1        $f10, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->f10.u32l;
    // 0x150E1C80: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_150E1C84:
    // 0x150E1C84: sh          $t7, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r15;
    // 0x150E1C88: sh          $t8, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r24;
L_150E1C8C:
    // 0x150E1C8C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_150E1C90:
    // 0x150E1C90: lh          $t9, 0xD8($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XD8);
    // 0x150E1C94: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x150E1C98: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x150E1C9C: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x150E1CA0: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x150E1CA4: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x150E1CA8: lhu         $a0, 0x6($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X6);
    // 0x150E1CAC: lhu         $a1, 0x8($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X8);
    // 0x150E1CB0: sh          $a2, -0x8($v0)
    MEM_H(-0X8, ctx->r2) = ctx->r6;
    // 0x150E1CB4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x150E1CB8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x150E1CBC: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x150E1CC0: sll         $t7, $a1, 5
    ctx->r15 = S32(ctx->r5 << 5);
    // 0x150E1CC4: addiu       $t0, $t6, 0x2000
    ctx->r8 = ADD32(ctx->r14, 0X2000);
    // 0x150E1CC8: addiu       $t1, $t7, 0x2000
    ctx->r9 = ADD32(ctx->r15, 0X2000);
    // 0x150E1CCC: sh          $a2, -0x6($v0)
    MEM_H(-0X6, ctx->r2) = ctx->r6;
    // 0x150E1CD0: sh          $zero, -0xA($v0)
    MEM_H(-0XA, ctx->r2) = 0;
    // 0x150E1CD4: sh          $t0, -0x28($v0)
    MEM_H(-0X28, ctx->r2) = ctx->r8;
    // 0x150E1CD8: sh          $a2, -0x26($v0)
    MEM_H(-0X26, ctx->r2) = ctx->r6;
    // 0x150E1CDC: sh          $zero, -0x2A($v0)
    MEM_H(-0X2A, ctx->r2) = 0;
    // 0x150E1CE0: sh          $a2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r6;
    // 0x150E1CE4: sh          $t1, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r9;
    // 0x150E1CE8: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x150E1CEC: sh          $t0, -0x18($v0)
    MEM_H(-0X18, ctx->r2) = ctx->r8;
    // 0x150E1CF0: sh          $t1, -0x16($v0)
    MEM_H(-0X16, ctx->r2) = ctx->r9;
    // 0x150E1CF4: bne         $a3, $t3, L_150E1C90
    if (ctx->r7 != ctx->r11) {
        // 0x150E1CF8: sh          $zero, -0x1A($v0)
        MEM_H(-0X1A, ctx->r2) = 0;
            goto L_150E1C90;
    }
    // 0x150E1CF8: sh          $zero, -0x1A($v0)
    MEM_H(-0X1A, ctx->r2) = 0;
    // 0x150E1CFC: sb          $zero, 0xDB($s0)
    MEM_B(0XDB, ctx->r16) = 0;
L_150E1D00:
    // 0x150E1D00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150E1D04:
    // 0x150E1D04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150E1D08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150E1D0C: jr          $ra
    // 0x150E1D10: nop

    return;
    return;
    // 0x150E1D10: nop

;}
RECOMP_FUNC void func_1507F454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507F454: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507F458: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1507F45C: lw          $v1, 0x31C($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X31C);
    // 0x1507F460: lbu         $v0, 0x5C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X5C);
    // 0x1507F464: addiu       $v1, $v1, 0x58
    ctx->r3 = ADD32(ctx->r3, 0X58);
    // 0x1507F468: bne         $v0, $zero, L_1507F478
    if (ctx->r2 != 0) {
        // 0x1507F46C: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_1507F478;
    }
    // 0x1507F46C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x1507F470: jr          $ra
    // 0x1507F474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x1507F474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1507F478:
    // 0x1507F478: lbu         $t7, 0x5($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X5);
    // 0x1507F47C: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x1507F480: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1507F484: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x1507F488: sb          $t8, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r24;
    // 0x1507F48C: lw          $t0, 0x6BA0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6BA0);
    // 0x1507F490: andi        $t1, $t8, 0xFF
    ctx->r9 = ctx->r24 & 0XFF;
    // 0x1507F494: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1507F498: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x1507F49C: lbu         $a0, 0x0($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X0);
    // 0x1507F4A0: bne         $a0, $zero, L_1507F4B8
    if (ctx->r4 != 0) {
        // 0x1507F4A4: nop
    
            goto L_1507F4B8;
    }
    // 0x1507F4A4: nop

    // 0x1507F4A8: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    // 0x1507F4AC: sb          $zero, 0x5($v1)
    MEM_B(0X5, ctx->r3) = 0;
    // 0x1507F4B0: jr          $ra
    // 0x1507F4B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x1507F4B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1507F4B8:
    // 0x1507F4B8: jr          $ra
    // 0x1507F4BC: nop

    return;
    return;
    // 0x1507F4BC: nop

;}
RECOMP_FUNC void func_15001CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15001CEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15001CF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15001CF4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15001CF8: jal         0x1510F800
    // 0x15001CFC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x15001CFC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_0:
    // 0x15001D00: jal         0x15001B10
    // 0x15001D04: nop

    func_15001B10(rdram, ctx);
        goto after_1;
    // 0x15001D04: nop

    after_1:
    // 0x15001D08: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x15001D0C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15001D10: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15001D14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15001D18: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15001D1C: sw          $v0, -0x41F8($at)
    MEM_W(-0X41F8, ctx->r1) = ctx->r2;
    // 0x15001D20: addiu       $t8, $zero, -0x8000
    ctx->r24 = ADD32(0, -0X8000);
    // 0x15001D24: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x15001D28: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x15001D2C: addiu       $t0, $t0, -0x41B4
    ctx->r8 = ADD32(ctx->r8, -0X41B4);
    // 0x15001D30: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x15001D34: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
    // 0x15001D38: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x15001D3C: sh          $t2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r10;
    // 0x15001D40: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x15001D44: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x15001D48: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
    // 0x15001D4C: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x15001D50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15001D54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15001D58: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x15001D5C: sll         $t3, $a0, 1
    ctx->r11 = S32(ctx->r4 << 1);
    // 0x15001D60: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x15001D64: jal         0x10003C40
    // 0x15001D68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x15001D68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x15001D6C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15001D70: addiu       $t0, $t0, -0x41B4
    ctx->r8 = ADD32(ctx->r8, -0X41B4);
    // 0x15001D74: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x15001D78: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x15001D7C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15001D80: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x15001D84: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x15001D88: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    // 0x15001D8C: addiu       $a2, $zero, -0x8000
    ctx->r6 = ADD32(0, -0X8000);
    // 0x15001D90: blez        $t5, L_15001DB8
    if (SIGNED(ctx->r13) <= 0) {
        // 0x15001D94: ori         $a3, $zero, 0x8000
        ctx->r7 = 0 | 0X8000;
            goto L_15001DB8;
    }
    // 0x15001D94: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x15001D98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15001D9C: sh          $v1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r3;
L_15001DA0:
    // 0x15001DA0: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x15001DA4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15001DA8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x15001DAC: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15001DB0: bnel        $at, $zero, L_15001DA0
    if (ctx->r1 != 0) {
        // 0x15001DB4: sh          $v1, 0x2($a0)
        MEM_H(0X2, ctx->r4) = ctx->r3;
            goto L_15001DA0;
    }
    goto skip_0;
    // 0x15001DB4: sh          $v1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r3;
    skip_0:
L_15001DB8:
    // 0x15001DB8: addiu       $a0, $zero, -0x8000
    ctx->r4 = ADD32(0, -0X8000);
    // 0x15001DBC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15001DC0: jal         0x15002008
    // 0x15001DC4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_15002008(rdram, ctx);
        goto after_3;
    // 0x15001DC4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_3:
    // 0x15001DC8: jal         0x10004074
    // 0x15001DCC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_10004074(rdram, ctx);
        goto after_4;
    // 0x15001DCC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x15001DD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15001DD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15001DD8: jr          $ra
    // 0x15001DDC: nop

    return;
    return;
    // 0x15001DDC: nop

;}
RECOMP_FUNC void func_15086C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15086C70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15086C74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15086C78: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15086C7C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x15086C80: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15086C84: lw          $t6, 0x2350($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2350);
    // 0x15086C88: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x15086C8C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x15086C90: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x15086C94: lh          $v1, 0x4($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X4);
    // 0x15086C98: lh          $a2, 0x0($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X0);
    // 0x15086C9C: lh          $a3, 0x2($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X2);
    // 0x15086CA0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x15086CA4: jal         0x150A3194
    // 0x15086CA8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_150A3194(rdram, ctx);
        goto after_0;
    // 0x15086CA8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x15086CAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15086CB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15086CB4: jr          $ra
    // 0x15086CB8: nop

    return;
    return;
    // 0x15086CB8: nop

;}
RECOMP_FUNC void func_15012470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15012470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15012474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15012478: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x1501247C: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x15012480: jal         0x1518AADC
    // 0x15012484: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1518AADC(rdram, ctx);
        goto after_0;
    // 0x15012484: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x15012488: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501248C: sw          $v0, -0x78B0($at)
    MEM_W(-0X78B0, ctx->r1) = ctx->r2;
    // 0x15012490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15012494: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15012498: jr          $ra
    // 0x1501249C: nop

    return;
    return;
    // 0x1501249C: nop

;}
RECOMP_FUNC void func_15033FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15033FE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15033FE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15033FE8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15033FEC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15033FF0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15033FF4: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x15033FF8: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x15033FFC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15034000: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x15034004: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15034008: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x1503400C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15034010: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x15034014: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15034018: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1503401C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15034020: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x15034024: lw          $t8, 0x1D4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X1D4);
    // 0x15034028: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x1503402C: addiu       $t9, $zero, 0x1000
    ctx->r25 = ADD32(0, 0X1000);
    // 0x15034030: bnel        $t8, $zero, L_15034044
    if (ctx->r24 != 0) {
        // 0x15034034: lw          $t0, 0x0($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X0);
            goto L_15034044;
    }
    goto skip_0;
    // 0x15034034: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    skip_0:
    // 0x15034038: b           L_150341A8
    // 0x1503403C: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
        goto L_150341A8;
    // 0x1503403C: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x15034040: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
L_15034044:
    // 0x15034044: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15034048: bnel        $t0, $at, L_15034068
    if (ctx->r8 != ctx->r1) {
        // 0x1503404C: lbu         $a0, 0x4($s1)
        ctx->r4 = MEM_BU(ctx->r17, 0X4);
            goto L_15034068;
    }
    goto skip_1;
    // 0x1503404C: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
    skip_1:
    // 0x15034050: jal         0x150341BC
    // 0x15034054: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_150341BC(rdram, ctx);
        goto after_0;
    // 0x15034054: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x15034058: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1503405C: b           L_15034174
    // 0x15034060: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
        goto L_15034174;
    // 0x15034060: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
    // 0x15034064: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
L_15034068:
    // 0x15034068: slti        $at, $a0, 0x2C
    ctx->r1 = SIGNED(ctx->r4) < 0X2C ? 1 : 0;
    // 0x1503406C: bne         $at, $zero, L_150340BC
    if (ctx->r1 != 0) {
        // 0x15034070: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_150340BC;
    }
    // 0x15034070: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15034074: slti        $at, $v0, 0x5B
    ctx->r1 = SIGNED(ctx->r2) < 0X5B ? 1 : 0;
    // 0x15034078: bne         $at, $zero, L_150340A0
    if (ctx->r1 != 0) {
        // 0x1503407C: addiu       $t1, $v0, -0x74
        ctx->r9 = ADD32(ctx->r2, -0X74);
            goto L_150340A0;
    }
    // 0x1503407C: addiu       $t1, $v0, -0x74
    ctx->r9 = ADD32(ctx->r2, -0X74);
    // 0x15034080: sltiu       $at, $t1, 0x25
    ctx->r1 = ctx->r9 < 0X25 ? 1 : 0;
    // 0x15034084: beq         $at, $zero, L_15034174
    if (ctx->r1 == 0) {
        // 0x15034088: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_15034174;
    }
    // 0x15034088: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1503408C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15034090: addu        $at, $at, $t1
    gpr jr_addend_15034098 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x15034094: lw          $t1, 0x7C80($at)
    ctx->r9 = ADD32(ctx->r1, 0X7C80);
    // 0x15034098: jr          $t1
    // 0x1503409C: nop

    switch (jr_addend_15034098 >> 2) {
        case 0: goto L_15034164; break;
        case 1: goto L_15034174; break;
        case 2: goto L_15034174; break;
        case 3: goto L_150340EC; break;
        case 4: goto L_15034174; break;
        case 5: goto L_15034174; break;
        case 6: goto L_15034164; break;
        case 7: goto L_15034114; break;
        case 8: goto L_15034174; break;
        case 9: goto L_15034174; break;
        case 10: goto L_15034174; break;
        case 11: goto L_15034174; break;
        case 12: goto L_15034174; break;
        case 13: goto L_15034174; break;
        case 14: goto L_15034174; break;
        case 15: goto L_15034174; break;
        case 16: goto L_15034174; break;
        case 17: goto L_15034174; break;
        case 18: goto L_15034174; break;
        case 19: goto L_15034174; break;
        case 20: goto L_15034174; break;
        case 21: goto L_15034174; break;
        case 22: goto L_15034128; break;
        case 23: goto L_15034174; break;
        case 24: goto L_15034174; break;
        case 25: goto L_15034164; break;
        case 26: goto L_15034174; break;
        case 27: goto L_15034174; break;
        case 28: goto L_15034174; break;
        case 29: goto L_15034174; break;
        case 30: goto L_15034174; break;
        case 31: goto L_15034174; break;
        case 32: goto L_15034174; break;
        case 33: goto L_15034174; break;
        case 34: goto L_15034174; break;
        case 35: goto L_15034174; break;
        case 36: goto L_15034150; break;
        default: switch_error(__func__, 0x15034098, 0x80097C80);
    }
    // 0x1503409C: nop

L_150340A0:
    // 0x150340A0: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x150340A4: beq         $v0, $at, L_15034100
    if (ctx->r2 == ctx->r1) {
        // 0x150340A8: addiu       $at, $zero, 0x5A
        ctx->r1 = ADD32(0, 0X5A);
            goto L_15034100;
    }
    // 0x150340A8: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x150340AC: beq         $v0, $at, L_15034164
    if (ctx->r2 == ctx->r1) {
        // 0x150340B0: nop
    
            goto L_15034164;
    }
    // 0x150340B0: nop

    // 0x150340B4: b           L_15034174
    // 0x150340B8: nop

        goto L_15034174;
    // 0x150340B8: nop

L_150340BC:
    // 0x150340BC: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x150340C0: beq         $v0, $at, L_1503413C
    if (ctx->r2 == ctx->r1) {
        // 0x150340C4: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_1503413C;
    }
    // 0x150340C4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x150340C8: beq         $v0, $at, L_150340EC
    if (ctx->r2 == ctx->r1) {
        // 0x150340CC: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_150340EC;
    }
    // 0x150340CC: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x150340D0: bne         $v0, $at, L_15034174
    if (ctx->r2 != ctx->r1) {
        // 0x150340D4: nop
    
            goto L_15034174;
    }
    // 0x150340D4: nop

    // 0x150340D8: jal         0x150D8590
    // 0x150340DC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_150D8590(rdram, ctx);
        goto after_1;
    // 0x150340DC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x150340E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150340E4: b           L_15034174
    // 0x150340E8: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
        goto L_15034174;
    // 0x150340E8: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
L_150340EC:
    // 0x150340EC: jal         0x150344A0
    // 0x150340F0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_150344A0(rdram, ctx);
        goto after_2;
    // 0x150340F0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x150340F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150340F8: b           L_15034174
    // 0x150340FC: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
        goto L_15034174;
    // 0x150340FC: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
L_15034100:
    // 0x15034100: jal         0x150B58F0
    // 0x15034104: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_150B58F0(rdram, ctx);
        goto after_3;
    // 0x15034104: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x15034108: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1503410C: b           L_15034174
    // 0x15034110: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
        goto L_15034174;
    // 0x15034110: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
L_15034114:
    // 0x15034114: jal         0x150F1B48
    // 0x15034118: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_150F1B48(rdram, ctx);
        goto after_4;
    // 0x15034118: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_4:
    // 0x1503411C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15034120: b           L_15034174
    // 0x15034124: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
        goto L_15034174;
    // 0x15034124: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
L_15034128:
    // 0x15034128: jal         0x15034420
    // 0x1503412C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_15034420(rdram, ctx);
        goto after_5;
    // 0x1503412C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_5:
    // 0x15034130: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15034134: b           L_15034174
    // 0x15034138: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
        goto L_15034174;
    // 0x15034138: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
L_1503413C:
    // 0x1503413C: jal         0x150BE438
    // 0x15034140: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_150BE438(rdram, ctx);
        goto after_6;
    // 0x15034140: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_6:
    // 0x15034144: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15034148: b           L_15034174
    // 0x1503414C: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
        goto L_15034174;
    // 0x1503414C: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
L_15034150:
    // 0x15034150: jal         0x15034340
    // 0x15034154: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_15034340(rdram, ctx);
        goto after_7;
    // 0x15034154: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_7:
    // 0x15034158: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1503415C: b           L_15034174
    // 0x15034160: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
        goto L_15034174;
    // 0x15034160: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
L_15034164:
    // 0x15034164: jal         0x150343B0
    // 0x15034168: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_150343B0(rdram, ctx);
        goto after_8;
    // 0x15034168: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_8:
    // 0x1503416C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15034170: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
L_15034174:
    // 0x15034174: jal         0x1503DA3C
    // 0x15034178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1503DA3C(rdram, ctx);
        goto after_9;
    // 0x15034178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x1503417C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x15034180: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
    // 0x15034184: jal         0x1503DA3C
    // 0x15034188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1503DA3C(rdram, ctx);
        goto after_10;
    // 0x15034188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x1503418C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15034190: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15034194: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x15034198: jal         0x15034860
    // 0x1503419C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_15034860(rdram, ctx);
        goto after_11;
    // 0x1503419C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_11:
    // 0x150341A0: addiu       $t2, $zero, 0x1000
    ctx->r10 = ADD32(0, 0X1000);
    // 0x150341A4: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
L_150341A8:
    // 0x150341A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150341AC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x150341B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x150341B4: jr          $ra
    // 0x150341B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x150341B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_15116EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15116EA4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15116EA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15116EAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15116EB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15116EB4: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x15116EB8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15116EBC: addiu       $t7, $t7, -0x6CE0
    ctx->r15 = ADD32(ctx->r15, -0X6CE0);
    // 0x15116EC0: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x15116EC4: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x15116EC8: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x15116ECC: lbu         $a2, 0x0($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X0);
    // 0x15116ED0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x15116ED4: addiu       $t9, $t9, -0x5530
    ctx->r25 = ADD32(ctx->r25, -0X5530);
    // 0x15116ED8: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    // 0x15116EDC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x15116EE0: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x15116EE4: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x15116EE8: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    // 0x15116EEC: lbu         $t2, 0x1($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X1);
    // 0x15116EF0: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x15116EF4: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x15116EF8: lw          $t3, 0x80($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X80);
    // 0x15116EFC: sra         $t5, $v0, 16
    ctx->r13 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15116F00: bnel        $t3, $zero, L_15116F5C
    if (ctx->r11 != 0) {
        // 0x15116F04: mtc1        $t1, $f4
        ctx->f4.u32l = ctx->r9;
            goto L_15116F5C;
    }
    goto skip_0;
    // 0x15116F04: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    skip_0:
    // 0x15116F08: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x15116F0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15116F10: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15116F14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15116F18: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x15116F1C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x15116F20: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x15116F24: jal         0x10003C40
    // 0x15116F28: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15116F28: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    after_0:
    // 0x15116F2C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x15116F30: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x15116F34: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x15116F38: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x15116F3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15116F40: jal         0x10004514
    // 0x15116F44: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_10004514(rdram, ctx);
        goto after_1;
    // 0x15116F44: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_1:
    // 0x15116F48: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x15116F4C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x15116F50: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x15116F54: lw          $t3, 0x80($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X80);
    // 0x15116F58: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
L_15116F5C:
    // 0x15116F5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15116F60: lwc1        $f8, 0x2FD4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2FD4);
    // 0x15116F64: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15116F68: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x15116F6C: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x15116F70: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15116F74: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15116F78: nop

    // 0x15116F7C: mul.s       $f0, $f18, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x15116F80: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x15116F84: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x15116F88: nop

    // 0x15116F8C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x15116F90: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15116F94: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15116F98: bne         $t2, $v0, L_15116FAC
    if (ctx->r10 != ctx->r2) {
        // 0x15116F9C: sub.s       $f12, $f0, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f8.fl;
            goto L_15116FAC;
    }
    // 0x15116F9C: sub.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x15116FA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15116FA4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x15116FA8: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
L_15116FAC:
    // 0x15116FAC: div         $zero, $t6, $t2
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r10)));
    // 0x15116FB0: bne         $t2, $zero, L_15116FBC
    if (ctx->r10 != 0) {
        // 0x15116FB4: nop
    
            goto L_15116FBC;
    }
    // 0x15116FB4: nop

    // 0x15116FB8: break       7
    do_break(353464248);
L_15116FBC:
    // 0x15116FBC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15116FC0: bne         $t2, $at, L_15116FD4
    if (ctx->r10 != ctx->r1) {
        // 0x15116FC4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15116FD4;
    }
    // 0x15116FC4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15116FC8: bne         $t6, $at, L_15116FD4
    if (ctx->r14 != ctx->r1) {
        // 0x15116FCC: nop
    
            goto L_15116FD4;
    }
    // 0x15116FCC: nop

    // 0x15116FD0: break       6
    do_break(353464272);
L_15116FD4:
    // 0x15116FD4: mflo        $v0
    ctx->r2 = lo;
    // 0x15116FD8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x15116FDC: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x15116FE0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15116FE4: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x15116FE8: mflo        $a0
    ctx->r4 = lo;
    // 0x15116FEC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x15116FF0: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
    // 0x15116FF4: multu       $v1, $t7
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15116FF8: or          $t4, $t7, $zero
    ctx->r12 = ctx->r15 | 0;
    // 0x15116FFC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15117000: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15117004: mflo        $t8
    ctx->r24 = lo;
    // 0x15117008: addu        $a2, $t3, $t8
    ctx->r6 = ADD32(ctx->r11, ctx->r24);
    // 0x1511700C: beq         $t2, $a1, L_15117028
    if (ctx->r10 == ctx->r5) {
        // 0x15117010: or          $t0, $a2, $zero
        ctx->r8 = ctx->r6 | 0;
            goto L_15117028;
    }
    // 0x15117010: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x15117014: multu       $a1, $t7
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15117018: mflo        $t9
    ctx->r25 = lo;
    // 0x1511701C: addu        $t0, $t3, $t9
    ctx->r8 = ADD32(ctx->r11, ctx->r25);
    // 0x15117020: b           L_15117028
    // 0x15117024: nop

        goto L_15117028;
    // 0x15117024: nop

L_15117028:
    // 0x15117028: blez        $a0, L_15117278
    if (SIGNED(ctx->r4) <= 0) {
        // 0x1511702C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_15117278;
    }
    // 0x1511702C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15117030: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x15117034: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15117038: addiu       $a2, $a2, -0x1640
    ctx->r6 = ADD32(ctx->r6, -0X1640);
    // 0x1511703C: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x15117040: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x15117044: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    // 0x15117048: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1511704C: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x15117050: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x15117054: beq         $a1, $a3, L_15117178
    if (ctx->r5 == ctx->r7) {
        // 0x15117058: cvt.s.w     $f18, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
            goto L_15117178;
    }
    // 0x15117058: cvt.s.w     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
L_1511705C:
    // 0x1511705C: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15117060: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x15117064: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x15117068: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1511706C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x15117070: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15117074: sub.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x15117078: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x1511707C: lw          $t7, 0x20($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X20);
    // 0x15117080: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15117084: mul.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x15117088: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x1511708C: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x15117090: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x15117094: add.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f18.fl;
    // 0x15117098: add.s       $f10, $f14, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x1511709C: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151170A0: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x151170A4: nop

    // 0x151170A8: sh          $t6, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r14;
    // 0x151170AC: lh          $t9, -0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, -0X2);
    // 0x151170B0: lh          $t7, -0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, -0X2);
    // 0x151170B4: lh          $t6, 0x12($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X12);
    // 0x151170B8: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x151170BC: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x151170C0: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x151170C4: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151170C8: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x151170CC: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x151170D0: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x151170D4: addu        $t8, $s0, $t6
    ctx->r24 = ADD32(ctx->r16, ctx->r14);
    // 0x151170D8: lw          $t7, 0x20($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X20);
    // 0x151170DC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151170E0: addu        $t6, $t7, $v0
    ctx->r14 = ADD32(ctx->r15, ctx->r2);
    // 0x151170E4: sub.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x151170E8: mul.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x151170EC: add.s       $f10, $f14, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x151170F0: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151170F4: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151170F8: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x151170FC: nop

    // 0x15117100: sh          $t9, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r25;
    // 0x15117104: lh          $t8, -0x4($a0)
    ctx->r24 = MEM_H(ctx->r4, -0X4);
    // 0x15117108: lh          $t7, -0x4($v1)
    ctx->r15 = MEM_H(ctx->r3, -0X4);
    // 0x1511710C: lh          $t9, 0x14($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X14);
    // 0x15117110: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x15117114: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15117118: mtc1        $t9, $f14
    ctx->f14.u32l = ctx->r25;
    // 0x1511711C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15117120: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x15117124: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x15117128: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1511712C: addu        $t6, $s0, $t9
    ctx->r14 = ADD32(ctx->r16, ctx->r25);
    // 0x15117130: lw          $t7, 0x20($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X20);
    // 0x15117134: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x15117138: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x1511713C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x15117140: sub.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x15117144: mul.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x15117148: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1511714C: add.s       $f14, $f8, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x15117150: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x15117154: mfc1        $t8, $f14
    ctx->r24 = (int32_t)ctx->f14.u32l;
    // 0x15117158: nop

    // 0x1511715C: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x15117160: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x15117164: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    // 0x15117168: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x1511716C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x15117170: bne         $a1, $a3, L_1511705C
    if (ctx->r5 != ctx->r7) {
        // 0x15117174: cvt.s.w     $f18, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
            goto L_1511705C;
    }
    // 0x15117174: cvt.s.w     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = CVT_S_W(ctx->f14.u32l);
L_15117178:
    // 0x15117178: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1511717C: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x15117180: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x15117184: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x15117188: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1511718C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15117190: sub.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x15117194: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x15117198: lw          $t7, 0x20($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X20);
    // 0x1511719C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151171A0: mul.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x151171A4: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x151171A8: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x151171AC: add.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f18.fl;
    // 0x151171B0: add.s       $f10, $f14, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x151171B4: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151171B8: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x151171BC: nop

    // 0x151171C0: sh          $t6, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r14;
    // 0x151171C4: lh          $t7, -0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, -0X2);
    // 0x151171C8: lh          $t9, -0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, -0X2);
    // 0x151171CC: lh          $t6, 0x12($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X12);
    // 0x151171D0: mtc1        $t7, $f14
    ctx->f14.u32l = ctx->r15;
    // 0x151171D4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x151171D8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x151171DC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x151171E0: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x151171E4: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x151171E8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151171EC: addu        $t8, $s0, $t6
    ctx->r24 = ADD32(ctx->r16, ctx->r14);
    // 0x151171F0: lw          $t7, 0x20($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X20);
    // 0x151171F4: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151171F8: addu        $t6, $t7, $v0
    ctx->r14 = ADD32(ctx->r15, ctx->r2);
    // 0x151171FC: sub.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x15117200: mul.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x15117204: add.s       $f10, $f14, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x15117208: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1511720C: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15117210: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x15117214: nop

    // 0x15117218: sh          $t9, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r25;
    // 0x1511721C: lh          $t7, -0x4($v1)
    ctx->r15 = MEM_H(ctx->r3, -0X4);
    // 0x15117220: lh          $t8, -0x4($a0)
    ctx->r24 = MEM_H(ctx->r4, -0X4);
    // 0x15117224: lh          $t9, 0x14($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X14);
    // 0x15117228: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x1511722C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x15117230: mtc1        $t9, $f14
    ctx->f14.u32l = ctx->r25;
    // 0x15117234: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15117238: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x1511723C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x15117240: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15117244: addu        $t6, $s0, $t9
    ctx->r14 = ADD32(ctx->r16, ctx->r25);
    // 0x15117248: lw          $t7, 0x20($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X20);
    // 0x1511724C: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x15117250: addu        $t9, $t7, $v0
    ctx->r25 = ADD32(ctx->r15, ctx->r2);
    // 0x15117254: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x15117258: sub.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x1511725C: mul.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x15117260: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15117264: add.s       $f14, $f8, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x15117268: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x1511726C: mfc1        $t8, $f14
    ctx->r24 = (int32_t)ctx->f14.u32l;
    // 0x15117270: nop

    // 0x15117274: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
L_15117278:
    // 0x15117278: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x1511727C: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x15117280: beql        $at, $zero, L_151172A4
    if (ctx->r1 == 0) {
        // 0x15117284: slt         $at, $t1, $v0
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_151172A4;
    }
    goto skip_1;
    // 0x15117284: slt         $at, $t1, $v0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    skip_1:
    // 0x15117288: subu        $t1, $t1, $t5
    ctx->r9 = SUB32(ctx->r9, ctx->r13);
    // 0x1511728C: slt         $at, $t1, $v0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15117290: beql        $at, $zero, L_151172C4
    if (ctx->r1 == 0) {
        // 0x15117294: sw          $t1, 0x84($s0)
        MEM_W(0X84, ctx->r16) = ctx->r9;
            goto L_151172C4;
    }
    goto skip_2;
    // 0x15117294: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    skip_2:
    // 0x15117298: b           L_151172C0
    // 0x1511729C: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
        goto L_151172C0;
    // 0x1511729C: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x151172A0: slt         $at, $t1, $v0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
L_151172A4:
    // 0x151172A4: beql        $at, $zero, L_151172C4
    if (ctx->r1 == 0) {
        // 0x151172A8: sw          $t1, 0x84($s0)
        MEM_W(0X84, ctx->r16) = ctx->r9;
            goto L_151172C4;
    }
    goto skip_3;
    // 0x151172A8: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    skip_3:
    // 0x151172AC: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x151172B0: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x151172B4: beql        $at, $zero, L_151172C4
    if (ctx->r1 == 0) {
        // 0x151172B8: sw          $t1, 0x84($s0)
        MEM_W(0X84, ctx->r16) = ctx->r9;
            goto L_151172C4;
    }
    goto skip_4;
    // 0x151172B8: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    skip_4:
    // 0x151172BC: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
L_151172C0:
    // 0x151172C0: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
L_151172C4:
    // 0x151172C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151172C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151172CC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151172D0: jr          $ra
    // 0x151172D4: nop

    return;
    return;
    // 0x151172D4: nop

;}
RECOMP_FUNC void func_15161408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15161408: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1516140C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15161410: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15161414: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15161418: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1516141C: jal         0x151149AC
    // 0x15161420: addiu       $a0, $zero, 0xF9
    ctx->r4 = ADD32(0, 0XF9);
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x15161420: addiu       $a0, $zero, 0xF9
    ctx->r4 = ADD32(0, 0XF9);
    after_0:
    // 0x15161424: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x15161428: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x1516142C: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x15161430: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x15161434: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x15161438: sb          $zero, 0x24($sp)
    MEM_B(0X24, ctx->r29) = 0;
    // 0x1516143C: sb          $t6, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r14;
    // 0x15161440: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
    // 0x15161444: sb          $t8, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r24;
    // 0x15161448: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x1516144C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x15161450: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x15161454: lbu         $a3, 0x37($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X37);
    // 0x15161458: jal         0x1516037C
    // 0x1516145C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_1516037C(rdram, ctx);
        goto after_1;
    // 0x1516145C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x15161460: beq         $v0, $zero, L_15161480
    if (ctx->r2 == 0) {
        // 0x15161464: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15161480;
    }
    // 0x15161464: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15161468: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x1516146C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x15161470: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x15161474: jal         0x10022EC0
    // 0x15161478: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x15161478: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_2:
    // 0x1516147C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
L_15161480:
    // 0x15161480: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15161484: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15161488: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1516148C: jr          $ra
    // 0x15161490: nop

    return;
    return;
    // 0x15161490: nop

;}
RECOMP_FUNC void func_151A18DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A18DC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151A18E0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151A18E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151A18E8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151A18EC: lw          $at, 0x28($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X28);
    // 0x151A18F0: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
    // 0x151A18F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151A18F8: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151A18FC: lw          $t9, 0x2C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2C);
    // 0x151A1900: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x151A1904: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151A1908: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151A190C: lw          $at, 0x30($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X30);
    // 0x151A1910: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x151A1914: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151A1918: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151A191C: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151A1920: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x151A1924: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x151A1928: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151A192C: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x151A1930: lh          $t0, 0x3E($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X3E);
    // 0x151A1934: sh          $t0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r8;
    // 0x151A1938: lh          $t1, 0x40($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X40);
    // 0x151A193C: sh          $t1, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r9;
    // 0x151A1940: lh          $t2, 0x42($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X42);
    // 0x151A1944: sh          $t2, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r10;
    // 0x151A1948: lh          $t3, 0x44($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X44);
    // 0x151A194C: sh          $t3, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r11;
    // 0x151A1950: lh          $a0, 0x3C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X3C);
    // 0x151A1954: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151A1958: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151A195C: lbu         $t5, 0xC($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XC);
    // 0x151A1960: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x151A1964: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    // 0x151A1968: jal         0x151491F4
    // 0x151A196C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_151491F4(rdram, ctx);
        goto after_0;
    // 0x151A196C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_0:
    // 0x151A1970: beq         $v0, $zero, L_151A1984
    if (ctx->r2 == 0) {
        // 0x151A1974: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_151A1984;
    }
    // 0x151A1974: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151A1978: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x151A197C: jal         0x10022EC0
    // 0x151A1980: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151A1980: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
L_151A1984:
    // 0x151A1984: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151A1988: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151A198C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151A1990: jr          $ra
    // 0x151A1994: nop

    return;
    return;
    // 0x151A1994: nop

;}
RECOMP_FUNC void func_15004BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15004BF0: bne         $a0, $zero, L_15004C6C
    if (ctx->r4 != 0) {
        // 0x15004BF4: lui         $t9, 0x800E
        ctx->r25 = S32(0X800E << 16);
            goto L_15004C6C;
    }
    // 0x15004BF4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15004BF8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15004BFC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x15004C00: lw          $a1, -0x4110($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4110);
    // 0x15004C04: lbu         $a0, -0x4100($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X4100);
    // 0x15004C08: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15004C0C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x15004C10: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15004C14: beq         $at, $zero, L_15004CD4
    if (ctx->r1 == 0) {
        // 0x15004C18: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_15004CD4;
    }
    // 0x15004C18: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15004C1C: lw          $a2, -0x410C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X410C);
    // 0x15004C20: addiu       $a3, $zero, 0xA0
    ctx->r7 = ADD32(0, 0XA0);
L_15004C24:
    // 0x15004C24: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15004C28: mflo        $t6
    ctx->r14 = lo;
    // 0x15004C2C: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x15004C30: lbu         $t8, 0x72($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X72);
    // 0x15004C34: bnel        $v1, $t8, L_15004C48
    if (ctx->r3 != ctx->r24) {
        // 0x15004C38: slti        $at, $v1, 0x100
        ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
            goto L_15004C48;
    }
    goto skip_0;
    // 0x15004C38: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    skip_0:
    // 0x15004C3C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15004C40: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x15004C44: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
L_15004C48:
    // 0x15004C48: bne         $at, $zero, L_15004C58
    if (ctx->r1 != 0) {
        // 0x15004C4C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_15004C58;
    }
    // 0x15004C4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15004C50: b           L_15004CD4
    // 0x15004C54: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
        goto L_15004CD4;
    // 0x15004C54: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_15004C58:
    // 0x15004C58: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15004C5C: bne         $at, $zero, L_15004C24
    if (ctx->r1 != 0) {
        // 0x15004C60: nop
    
            goto L_15004C24;
    }
    // 0x15004C60: nop

    // 0x15004C64: b           L_15004CD8
    // 0x15004C68: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15004CD8;
    // 0x15004C68: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15004C6C:
    // 0x15004C6C: lbu         $t9, -0x4100($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X4100);
    // 0x15004C70: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x15004C74: lw          $a1, -0x4110($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4110);
    // 0x15004C78: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x15004C7C: subu        $a0, $t0, $t9
    ctx->r4 = SUB32(ctx->r8, ctx->r25);
    // 0x15004C80: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15004C84: blez        $a1, L_15004CD4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x15004C88: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15004CD4;
    }
    // 0x15004C88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15004C8C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x15004C90: lw          $a2, -0x410C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X410C);
    // 0x15004C94: addiu       $a3, $zero, 0xA0
    ctx->r7 = ADD32(0, 0XA0);
L_15004C98:
    // 0x15004C98: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15004C9C: mflo        $t1
    ctx->r9 = lo;
    // 0x15004CA0: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x15004CA4: lbu         $t3, 0x72($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X72);
    // 0x15004CA8: bne         $v1, $t3, L_15004CB8
    if (ctx->r3 != ctx->r11) {
        // 0x15004CAC: nop
    
            goto L_15004CB8;
    }
    // 0x15004CAC: nop

    // 0x15004CB0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x15004CB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_15004CB8:
    // 0x15004CB8: bgtz        $v1, L_15004CC8
    if (SIGNED(ctx->r3) > 0) {
        // 0x15004CBC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_15004CC8;
    }
    // 0x15004CBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15004CC0: b           L_15004CD4
    // 0x15004CC4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_15004CD4;
    // 0x15004CC4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_15004CC8:
    // 0x15004CC8: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15004CCC: bne         $at, $zero, L_15004C98
    if (ctx->r1 != 0) {
        // 0x15004CD0: nop
    
            goto L_15004C98;
    }
    // 0x15004CD0: nop

L_15004CD4:
    // 0x15004CD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15004CD8:
    // 0x15004CD8: jr          $ra
    // 0x15004CDC: nop

    return;
    return;
    // 0x15004CDC: nop

;}
RECOMP_FUNC void func_1506B070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B070: jr          $ra
    // 0x1506B074: nop

    return;
    return;
    // 0x1506B074: nop

;}
RECOMP_FUNC void func_151BFB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BFB2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151BFB30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151BFB34: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x151BFB38: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151BFB3C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151BFB40: lw          $t6, 0x28($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X28);
    // 0x151BFB44: beq         $t6, $zero, L_151BFB58
    if (ctx->r14 == 0) {
        // 0x151BFB48: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_151BFB58;
    }
    // 0x151BFB48: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151BFB4C: jal         0x1516972C
    // 0x151BFB50: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151BFB50: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x151BFB54: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
L_151BFB58:
    // 0x151BFB58: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151BFB5C: addiu       $s1, $a1, 0x28
    ctx->r17 = ADD32(ctx->r5, 0X28);
L_151BFB60:
    // 0x151BFB60: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x151BFB64: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x151BFB68: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x151BFB6C: beql        $a0, $zero, L_151BFB80
    if (ctx->r4 == 0) {
        // 0x151BFB70: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_151BFB80;
    }
    goto skip_0;
    // 0x151BFB70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x151BFB74: jal         0x1516972C
    // 0x151BFB78: nop

    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x151BFB78: nop

    after_1:
    // 0x151BFB7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_151BFB80:
    // 0x151BFB80: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x151BFB84: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x151BFB88: bne         $at, $zero, L_151BFB60
    if (ctx->r1 != 0) {
        // 0x151BFB8C: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_151BFB60;
    }
    // 0x151BFB8C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x151BFB90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151BFB94: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x151BFB98: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x151BFB9C: jr          $ra
    // 0x151BFBA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151BFBA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_151AC3CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AC3CC: lh          $v1, 0x1C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1C);
    // 0x151AC3D0: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x151AC3D4: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x151AC3D8: slti        $at, $t6, 0x100
    ctx->r1 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x151AC3DC: bne         $at, $zero, L_151AC3E8
    if (ctx->r1 != 0) {
        // 0x151AC3E0: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_151AC3E8;
    }
    // 0x151AC3E0: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x151AC3E4: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151AC3E8:
    // 0x151AC3E8: lbu         $t7, 0x1B($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1B);
    // 0x151AC3EC: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x151AC3F0: beql        $at, $zero, L_151AC400
    if (ctx->r1 == 0) {
        // 0x151AC3F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151AC400;
    }
    goto skip_0;
    // 0x151AC3F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x151AC3F8: sb          $v1, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r3;
    // 0x151AC3FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151AC400:
    // 0x151AC400: jr          $ra
    // 0x151AC404: nop

    return;
    return;
    // 0x151AC404: nop

;}
RECOMP_FUNC void func_1519086C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519086C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15190870: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15190874: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15190878: jal         0x15191400
    // 0x1519087C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15191400(rdram, ctx);
        goto after_0;
    // 0x1519087C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x15190880: jal         0x15169824
    // 0x15190884: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169824(rdram, ctx);
        goto after_1;
    // 0x15190884: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x15190888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1519088C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15190890: jr          $ra
    // 0x15190894: nop

    return;
    return;
    // 0x15190894: nop

;}
RECOMP_FUNC void func_1502B4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502B4A8: bne         $a1, $zero, L_1502B4EC
    if (ctx->r5 != 0) {
        // 0x1502B4AC: sll         $t6, $a1, 3
        ctx->r14 = S32(ctx->r5 << 3);
            goto L_1502B4EC;
    }
    // 0x1502B4AC: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x1502B4B0: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x1502B4B4: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x1502B4B8: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x1502B4BC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x1502B4C0: and         $v0, $t7, $a2
    ctx->r2 = ctx->r15 & ctx->r6;
    // 0x1502B4C4: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x1502B4C8: beq         $t8, $zero, L_1502B4EC
    if (ctx->r24 == 0) {
        // 0x1502B4CC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_1502B4EC;
    }
    // 0x1502B4CC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1502B4D0: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
L_1502B4D4:
    // 0x1502B4D4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1502B4D8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x1502B4DC: and         $v0, $t9, $a2
    ctx->r2 = ctx->r25 & ctx->r6;
    // 0x1502B4E0: sltiu       $t1, $v0, 0x1
    ctx->r9 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x1502B4E4: bnel        $t1, $zero, L_1502B4D4
    if (ctx->r9 != 0) {
        // 0x1502B4E8: lw          $t9, 0x4($v1)
        ctx->r25 = MEM_W(ctx->r3, 0X4);
            goto L_1502B4D4;
    }
    goto skip_0;
    // 0x1502B4E8: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    skip_0:
L_1502B4EC:
    // 0x1502B4EC: blez        $a1, L_1502B5BC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1502B4F0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1502B5BC;
    }
    // 0x1502B4F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1502B4F4: andi        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 & 0X1;
    // 0x1502B4F8: beq         $v1, $zero, L_1502B544
    if (ctx->r3 == 0) {
        // 0x1502B4FC: lui         $a3, 0xFFF
        ctx->r7 = S32(0XFFF << 16);
            goto L_1502B544;
    }
    // 0x1502B4FC: lui         $a3, 0xFFF
    ctx->r7 = S32(0XFFF << 16);
    // 0x1502B500: lw          $t2, 0x4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X4);
    // 0x1502B504: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x1502B508: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x1502B50C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x1502B510: and         $t3, $t2, $a3
    ctx->r11 = ctx->r10 & ctx->r7;
    // 0x1502B514: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x1502B518: beq         $t0, $v1, L_1502B530
    if (ctx->r8 == ctx->r3) {
        // 0x1502B51C: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_1502B530;
    }
    // 0x1502B51C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1502B520: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x1502B524: addu        $t5, $v1, $a0
    ctx->r13 = ADD32(ctx->r3, ctx->r4);
    // 0x1502B528: bnel        $t4, $zero, L_1502B53C
    if (ctx->r12 != 0) {
        // 0x1502B52C: sw          $t5, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r13;
            goto L_1502B53C;
    }
    goto skip_1;
    // 0x1502B52C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    skip_1:
L_1502B530:
    // 0x1502B530: b           L_1502B53C
    // 0x1502B534: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
        goto L_1502B53C;
    // 0x1502B534: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x1502B538: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_1502B53C:
    // 0x1502B53C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1502B540: beq         $v0, $a1, L_1502B5BC
    if (ctx->r2 == ctx->r5) {
        // 0x1502B544: lui         $a3, 0xFFF
        ctx->r7 = S32(0XFFF << 16);
            goto L_1502B5BC;
    }
L_1502B544:
    // 0x1502B544: lui         $a3, 0xFFF
    ctx->r7 = S32(0XFFF << 16);
    // 0x1502B548: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x1502B54C: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x1502B550: addu        $a2, $t7, $a0
    ctx->r6 = ADD32(ctx->r15, ctx->r4);
    // 0x1502B554: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x1502B558: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x1502B55C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x1502B560: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
L_1502B564:
    // 0x1502B564: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1502B568: and         $t9, $t8, $a3
    ctx->r25 = ctx->r24 & ctx->r7;
    // 0x1502B56C: beq         $t0, $v0, L_1502B57C
    if (ctx->r8 == ctx->r2) {
        // 0x1502B570: sw          $t9, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r25;
            goto L_1502B57C;
    }
    // 0x1502B570: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x1502B574: bne         $t9, $zero, L_1502B584
    if (ctx->r25 != 0) {
        // 0x1502B578: addu        $t2, $v0, $a0
        ctx->r10 = ADD32(ctx->r2, ctx->r4);
            goto L_1502B584;
    }
    // 0x1502B578: addu        $t2, $v0, $a0
    ctx->r10 = ADD32(ctx->r2, ctx->r4);
L_1502B57C:
    // 0x1502B57C: b           L_1502B588
    // 0x1502B580: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_1502B588;
    // 0x1502B580: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_1502B584:
    // 0x1502B584: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_1502B588:
    // 0x1502B588: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x1502B58C: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x1502B590: and         $t4, $t3, $a3
    ctx->r12 = ctx->r11 & ctx->r7;
    // 0x1502B594: beq         $t0, $v0, L_1502B5A4
    if (ctx->r8 == ctx->r2) {
        // 0x1502B598: sw          $t4, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r12;
            goto L_1502B5A4;
    }
    // 0x1502B598: sw          $t4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r12;
    // 0x1502B59C: bne         $t4, $zero, L_1502B5AC
    if (ctx->r12 != 0) {
        // 0x1502B5A0: addu        $t6, $v0, $a0
        ctx->r14 = ADD32(ctx->r2, ctx->r4);
            goto L_1502B5AC;
    }
    // 0x1502B5A0: addu        $t6, $v0, $a0
    ctx->r14 = ADD32(ctx->r2, ctx->r4);
L_1502B5A4:
    // 0x1502B5A4: b           L_1502B5B0
    // 0x1502B5A8: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
        goto L_1502B5B0;
    // 0x1502B5A8: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
L_1502B5AC:
    // 0x1502B5AC: sw          $t6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r14;
L_1502B5B0:
    // 0x1502B5B0: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x1502B5B4: bnel        $v1, $a2, L_1502B564
    if (ctx->r3 != ctx->r6) {
        // 0x1502B5B8: lw          $t8, 0x4($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X4);
            goto L_1502B564;
    }
    goto skip_2;
    // 0x1502B5B8: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    skip_2:
L_1502B5BC:
    // 0x1502B5BC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x1502B5C0: jr          $ra
    // 0x1502B5C4: nop

    return;
    return;
    // 0x1502B5C4: nop

;}
RECOMP_FUNC void func_150F97C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F97C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F97C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F97C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F97CC: jal         0x150F9788
    // 0x150F97D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F9788(rdram, ctx);
        goto after_0;
    // 0x150F97D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F97D4: jal         0x15149368
    // 0x150F97D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15149368(rdram, ctx);
        goto after_1;
    // 0x150F97D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F97DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F97E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F97E4: jr          $ra
    // 0x150F97E8: nop

    return;
    return;
    // 0x150F97E8: nop

;}
RECOMP_FUNC void func_15143E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15143E24: lw          $v1, 0x31C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X31C);
    // 0x15143E28: beql        $v1, $zero, L_15143E50
    if (ctx->r3 == 0) {
        // 0x15143E2C: lhu         $v0, 0x7A($a0)
        ctx->r2 = MEM_HU(ctx->r4, 0X7A);
            goto L_15143E50;
    }
    goto skip_0;
    // 0x15143E2C: lhu         $v0, 0x7A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X7A);
    skip_0:
    // 0x15143E30: lhu         $t6, 0x7A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X7A);
    // 0x15143E34: lh          $t7, 0x12($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X12);
    // 0x15143E38: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x15143E3C: sra         $t8, $v0, 8
    ctx->r24 = S32(SIGNED(ctx->r2) >> 8);
    // 0x15143E40: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x15143E44: jr          $ra
    // 0x15143E48: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    return;
    return;
    // 0x15143E48: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15143E4C: lhu         $v0, 0x7A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X7A);
L_15143E50:
    // 0x15143E50: sra         $t1, $v0, 8
    ctx->r9 = S32(SIGNED(ctx->r2) >> 8);
    // 0x15143E54: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x15143E58: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x15143E5C: jr          $ra
    // 0x15143E60: nop

    return;
    return;
    // 0x15143E60: nop

;}
RECOMP_FUNC void bcopy_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10023A10: beq         $a2, $zero, L_10023A7C
    if (ctx->r6 == 0) {
        // 0x10023A14: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_10023A7C;
    }
    // 0x10023A14: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x10023A18: beq         $a0, $a1, L_10023A7C
    if (ctx->r4 == ctx->r5) {
        // 0x10023A1C: slt         $at, $a1, $a0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_10023A7C;
    }
    // 0x10023A1C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x10023A20: bnel        $at, $zero, L_10023A44
    if (ctx->r1 != 0) {
        // 0x10023A24: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_10023A44;
    }
    goto skip_0;
    // 0x10023A24: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_0:
    // 0x10023A28: add         $v0, $a0, $a2
    ctx->r2 = ADD32(ctx->r4, ctx->r6);
    // 0x10023A2C: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x10023A30: beql        $at, $zero, L_10023A44
    if (ctx->r1 == 0) {
        // 0x10023A34: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_10023A44;
    }
    goto skip_1;
    // 0x10023A34: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_1:
    // 0x10023A38: b           L_10023BA8
    // 0x10023A3C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
        goto L_10023BA8;
    // 0x10023A3C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x10023A40: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_10023A44:
    // 0x10023A44: bne         $at, $zero, L_10023A5C
    if (ctx->r1 != 0) {
        // 0x10023A48: nop
    
            goto L_10023A5C;
    }
    // 0x10023A48: nop

    // 0x10023A4C: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x10023A50: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x10023A54: beq         $v0, $v1, L_10023A84
    if (ctx->r2 == ctx->r3) {
        // 0x10023A58: nop
    
            goto L_10023A84;
    }
    // 0x10023A58: nop

L_10023A5C:
    // 0x10023A5C: beq         $a2, $zero, L_10023A7C
    if (ctx->r6 == 0) {
        // 0x10023A60: nop
    
            goto L_10023A7C;
    }
    // 0x10023A60: nop

    // 0x10023A64: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
L_10023A68:
    // 0x10023A68: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x10023A6C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x10023A70: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x10023A74: bne         $a0, $v1, L_10023A68
    if (ctx->r4 != ctx->r3) {
        // 0x10023A78: sb          $v0, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r2;
            goto L_10023A68;
    }
    // 0x10023A78: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
L_10023A7C:
    // 0x10023A7C: jr          $ra
    // 0x10023A80: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    return;
    // 0x10023A80: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_10023A84:
    // 0x10023A84: beq         $v0, $zero, L_10023AE8
    if (ctx->r2 == 0) {
        // 0x10023A88: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_10023AE8;
    }
    // 0x10023A88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x10023A8C: beq         $v0, $at, L_10023ACC
    if (ctx->r2 == ctx->r1) {
        // 0x10023A90: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_10023ACC;
    }
    // 0x10023A90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x10023A94: beql        $v0, $at, L_10023AB8
    if (ctx->r2 == ctx->r1) {
        // 0x10023A98: lh          $v0, 0x0($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X0);
            goto L_10023AB8;
    }
    goto skip_2;
    // 0x10023A98: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    skip_2:
    // 0x10023A9C: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x10023AA0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x10023AA4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x10023AA8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x10023AAC: b           L_10023AE8
    // 0x10023AB0: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
        goto L_10023AE8;
    // 0x10023AB0: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
    // 0x10023AB4: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
L_10023AB8:
    // 0x10023AB8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x10023ABC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x10023AC0: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x10023AC4: b           L_10023AE8
    // 0x10023AC8: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
        goto L_10023AE8;
    // 0x10023AC8: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
L_10023ACC:
    // 0x10023ACC: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x10023AD0: lh          $v1, 0x1($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1);
    // 0x10023AD4: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x10023AD8: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x10023ADC: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x10023AE0: sb          $v0, -0x3($a1)
    MEM_B(-0X3, ctx->r5) = ctx->r2;
    // 0x10023AE4: sh          $v1, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r3;
L_10023AE8:
    // 0x10023AE8: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x10023AEC: bnel        $at, $zero, L_10023B48
    if (ctx->r1 != 0) {
        // 0x10023AF0: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_10023B48;
    }
    goto skip_3;
    // 0x10023AF0: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_3:
    // 0x10023AF4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x10023AF8: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x10023AFC: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x10023B00: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x10023B04: lw          $t2, 0x10($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X10);
    // 0x10023B08: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x10023B0C: lw          $t4, 0x18($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X18);
    // 0x10023B10: lw          $t5, 0x1C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X1C);
    // 0x10023B14: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x10023B18: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x10023B1C: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x10023B20: sw          $v0, -0x20($a1)
    MEM_W(-0X20, ctx->r5) = ctx->r2;
    // 0x10023B24: sw          $v1, -0x1C($a1)
    MEM_W(-0X1C, ctx->r5) = ctx->r3;
    // 0x10023B28: sw          $t0, -0x18($a1)
    MEM_W(-0X18, ctx->r5) = ctx->r8;
    // 0x10023B2C: sw          $t1, -0x14($a1)
    MEM_W(-0X14, ctx->r5) = ctx->r9;
    // 0x10023B30: sw          $t2, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r10;
    // 0x10023B34: sw          $t3, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r11;
    // 0x10023B38: sw          $t4, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r12;
    // 0x10023B3C: b           L_10023AE8
    // 0x10023B40: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
        goto L_10023AE8;
    // 0x10023B40: sw          $t5, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r13;
L_10023B44:
    // 0x10023B44: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_10023B48:
    // 0x10023B48: bnel        $at, $zero, L_10023B84
    if (ctx->r1 != 0) {
        // 0x10023B4C: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_10023B84;
    }
    goto skip_4;
    // 0x10023B4C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_4:
    // 0x10023B50: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x10023B54: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x10023B58: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x10023B5C: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x10023B60: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x10023B64: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x10023B68: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x10023B6C: sw          $v0, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r2;
    // 0x10023B70: sw          $v1, -0xC($a1)
    MEM_W(-0XC, ctx->r5) = ctx->r3;
    // 0x10023B74: sw          $t0, -0x8($a1)
    MEM_W(-0X8, ctx->r5) = ctx->r8;
    // 0x10023B78: b           L_10023B44
    // 0x10023B7C: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
        goto L_10023B44;
    // 0x10023B7C: sw          $t1, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r9;
L_10023B80:
    // 0x10023B80: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_10023B84:
    // 0x10023B84: bne         $at, $zero, L_10023A5C
    if (ctx->r1 != 0) {
        // 0x10023B88: nop
    
            goto L_10023A5C;
    }
    // 0x10023B88: nop

    // 0x10023B8C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x10023B90: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x10023B94: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x10023B98: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x10023B9C: b           L_10023B80
    // 0x10023BA0: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
        goto L_10023B80;
    // 0x10023BA0: sw          $v0, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->r2;
    // 0x10023BA4: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_10023BA8:
    // 0x10023BA8: add         $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x10023BAC: bne         $at, $zero, L_10023BC4
    if (ctx->r1 != 0) {
        // 0x10023BB0: add         $a1, $a1, $a2
        ctx->r5 = ADD32(ctx->r5, ctx->r6);
            goto L_10023BC4;
    }
    // 0x10023BB0: add         $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x10023BB4: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x10023BB8: andi        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 & 0X3;
    // 0x10023BBC: beq         $v0, $v1, L_10023BF4
    if (ctx->r2 == ctx->r3) {
        // 0x10023BC0: nop
    
            goto L_10023BF4;
    }
    // 0x10023BC0: nop

L_10023BC4:
    // 0x10023BC4: beq         $a2, $zero, L_10023A7C
    if (ctx->r6 == 0) {
        // 0x10023BC8: nop
    
            goto L_10023A7C;
    }
    // 0x10023BC8: nop

    // 0x10023BCC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x10023BD0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x10023BD4: subu        $v1, $a0, $a2
    ctx->r3 = SUB32(ctx->r4, ctx->r6);
L_10023BD8:
    // 0x10023BD8: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x10023BDC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x10023BE0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x10023BE4: bne         $a0, $v1, L_10023BD8
    if (ctx->r4 != ctx->r3) {
        // 0x10023BE8: sb          $v0, 0x1($a1)
        MEM_B(0X1, ctx->r5) = ctx->r2;
            goto L_10023BD8;
    }
    // 0x10023BE8: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
    // 0x10023BEC: jr          $ra
    // 0x10023BF0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    return;
    // 0x10023BF0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_10023BF4:
    // 0x10023BF4: beq         $v0, $zero, L_10023C58
    if (ctx->r2 == 0) {
        // 0x10023BF8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_10023C58;
    }
    // 0x10023BF8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x10023BFC: beq         $v0, $at, L_10023C3C
    if (ctx->r2 == ctx->r1) {
        // 0x10023C00: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_10023C3C;
    }
    // 0x10023C00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x10023C04: beql        $v0, $at, L_10023C28
    if (ctx->r2 == ctx->r1) {
        // 0x10023C08: lh          $v0, -0x2($a0)
        ctx->r2 = MEM_H(ctx->r4, -0X2);
            goto L_10023C28;
    }
    goto skip_5;
    // 0x10023C08: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
    skip_5:
    // 0x10023C0C: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x10023C10: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x10023C14: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x10023C18: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x10023C1C: b           L_10023C58
    // 0x10023C20: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
        goto L_10023C58;
    // 0x10023C20: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x10023C24: lh          $v0, -0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, -0X2);
L_10023C28:
    // 0x10023C28: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x10023C2C: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x10023C30: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x10023C34: b           L_10023C58
    // 0x10023C38: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_10023C58;
    // 0x10023C38: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_10023C3C:
    // 0x10023C3C: lb          $v0, -0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X1);
    // 0x10023C40: lh          $v1, -0x3($a0)
    ctx->r3 = MEM_H(ctx->r4, -0X3);
    // 0x10023C44: addiu       $a0, $a0, -0x3
    ctx->r4 = ADD32(ctx->r4, -0X3);
    // 0x10023C48: addiu       $a1, $a1, -0x3
    ctx->r5 = ADD32(ctx->r5, -0X3);
    // 0x10023C4C: addiu       $a2, $a2, -0x3
    ctx->r6 = ADD32(ctx->r6, -0X3);
    // 0x10023C50: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x10023C54: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
L_10023C58:
    // 0x10023C58: slti        $at, $a2, 0x20
    ctx->r1 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x10023C5C: bnel        $at, $zero, L_10023CB8
    if (ctx->r1 != 0) {
        // 0x10023C60: slti        $at, $a2, 0x10
        ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
            goto L_10023CB8;
    }
    goto skip_6;
    // 0x10023C60: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    skip_6:
    // 0x10023C64: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x10023C68: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x10023C6C: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x10023C70: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x10023C74: lw          $t2, -0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, -0X14);
    // 0x10023C78: lw          $t3, -0x18($a0)
    ctx->r11 = MEM_W(ctx->r4, -0X18);
    // 0x10023C7C: lw          $t4, -0x1C($a0)
    ctx->r12 = MEM_W(ctx->r4, -0X1C);
    // 0x10023C80: lw          $t5, -0x20($a0)
    ctx->r13 = MEM_W(ctx->r4, -0X20);
    // 0x10023C84: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    // 0x10023C88: addiu       $a1, $a1, -0x20
    ctx->r5 = ADD32(ctx->r5, -0X20);
    // 0x10023C8C: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    // 0x10023C90: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x10023C94: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x10023C98: sw          $t0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r8;
    // 0x10023C9C: sw          $t1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r9;
    // 0x10023CA0: sw          $t2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r10;
    // 0x10023CA4: sw          $t3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r11;
    // 0x10023CA8: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x10023CAC: b           L_10023C58
    // 0x10023CB0: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
        goto L_10023C58;
    // 0x10023CB0: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
L_10023CB4:
    // 0x10023CB4: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
L_10023CB8:
    // 0x10023CB8: bnel        $at, $zero, L_10023CF4
    if (ctx->r1 != 0) {
        // 0x10023CBC: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_10023CF4;
    }
    goto skip_7;
    // 0x10023CBC: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    skip_7:
    // 0x10023CC0: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x10023CC4: lw          $v1, -0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X8);
    // 0x10023CC8: lw          $t0, -0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, -0XC);
    // 0x10023CCC: lw          $t1, -0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, -0X10);
    // 0x10023CD0: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x10023CD4: addiu       $a1, $a1, -0x10
    ctx->r5 = ADD32(ctx->r5, -0X10);
    // 0x10023CD8: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x10023CDC: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x10023CE0: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x10023CE4: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x10023CE8: b           L_10023CB4
    // 0x10023CEC: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
        goto L_10023CB4;
    // 0x10023CEC: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
L_10023CF0:
    // 0x10023CF0: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
L_10023CF4:
    // 0x10023CF4: bne         $at, $zero, L_10023BC4
    if (ctx->r1 != 0) {
        // 0x10023CF8: nop
    
            goto L_10023BC4;
    }
    // 0x10023CF8: nop

    // 0x10023CFC: lw          $v0, -0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4);
    // 0x10023D00: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x10023D04: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    // 0x10023D08: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x10023D0C: b           L_10023CF0
    // 0x10023D10: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
        goto L_10023CF0;
    // 0x10023D10: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_151064DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151064DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151064E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151064E4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x151064E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151064EC: sub.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x151064F0: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x151064F4: nop

    // 0x151064F8: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151064FC: nop

    // 0x15106500: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x15106504: nop

    // 0x15106508: jr          $ra
    // 0x1510650C: nop

    return;
    return;
    // 0x1510650C: nop

;}
RECOMP_FUNC void func_1514E89C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514E89C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1514E8A0: beq         $a1, $zero, L_1514E8C0
    if (ctx->r5 == 0) {
        // 0x1514E8A4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1514E8C0;
    }
    // 0x1514E8A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1514E8A8: beq         $a1, $at, L_1514E8FC
    if (ctx->r5 == ctx->r1) {
        // 0x1514E8AC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1514E8FC;
    }
    // 0x1514E8AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1514E8B0: beql        $a1, $at, L_1514E8EC
    if (ctx->r5 == ctx->r1) {
        // 0x1514E8B4: lw          $t9, 0x10($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X10);
            goto L_1514E8EC;
    }
    goto skip_0;
    // 0x1514E8B4: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    skip_0:
    // 0x1514E8B8: jr          $ra
    // 0x1514E8BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1514E8BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1514E8C0:
    // 0x1514E8C0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x1514E8C4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x1514E8C8: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x1514E8CC: beq         $t6, $zero, L_1514E8E0
    if (ctx->r14 == 0) {
        // 0x1514E8D0: ori         $t8, $v0, 0x1
        ctx->r24 = ctx->r2 | 0X1;
            goto L_1514E8E0;
    }
    // 0x1514E8D0: ori         $t8, $v0, 0x1
    ctx->r24 = ctx->r2 | 0X1;
    // 0x1514E8D4: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x1514E8D8: b           L_1514E914
    // 0x1514E8DC: sw          $t7, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r15;
        goto L_1514E914;
    // 0x1514E8DC: sw          $t7, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r15;
L_1514E8E0:
    // 0x1514E8E0: b           L_1514E914
    // 0x1514E8E4: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
        goto L_1514E914;
    // 0x1514E8E4: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
    // 0x1514E8E8: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
L_1514E8EC:
    // 0x1514E8EC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x1514E8F0: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x1514E8F4: b           L_1514E914
    // 0x1514E8F8: sw          $t0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r8;
        goto L_1514E914;
    // 0x1514E8F8: sw          $t0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r8;
L_1514E8FC:
    // 0x1514E8FC: lw          $t1, 0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X10);
    // 0x1514E900: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x1514E904: b           L_1514E914
    // 0x1514E908: sw          $t2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r10;
        goto L_1514E914;
    // 0x1514E908: sw          $t2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r10;
    // 0x1514E90C: jr          $ra
    // 0x1514E910: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1514E910: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1514E914:
    // 0x1514E914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1514E918: jr          $ra
    // 0x1514E91C: nop

    return;
    return;
    // 0x1514E91C: nop

;}
RECOMP_FUNC void func_151DBE80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DBE80: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x151DBE84: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x151DBE88: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x151DBE8C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x151DBE90: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x151DBE94: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x151DBE98: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x151DBE9C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151DBEA0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151DBEA4: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x151DBEA8: lbu         $t0, 0xCF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XCF);
    // 0x151DBEAC: addiu       $t9, $zero, 0x38
    ctx->r25 = ADD32(0, 0X38);
    // 0x151DBEB0: sb          $t9, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r25;
    // 0x151DBEB4: beq         $t0, $zero, L_151DBEC4
    if (ctx->r8 == 0) {
        // 0x151DBEB8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_151DBEC4;
    }
    // 0x151DBEB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151DBEBC: b           L_151DBEC8
    // 0x151DBEC0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_151DBEC8;
    // 0x151DBEC0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_151DBEC4:
    // 0x151DBEC4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151DBEC8:
    // 0x151DBEC8: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x151DBECC: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151DBED0: addiu       $t4, $t4, -0x4BEC
    ctx->r12 = ADD32(ctx->r12, -0X4BEC);
    // 0x151DBED4: subu        $t3, $t3, $a0
    ctx->r11 = SUB32(ctx->r11, ctx->r4);
    // 0x151DBED8: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x151DBEDC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151DBEE0: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x151DBEE4: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x151DBEE8: lbu         $t7, 0x2($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2);
    // 0x151DBEEC: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
    // 0x151DBEF0: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x151DBEF4: addu        $t1, $v1, $at
    ctx->r9 = ADD32(ctx->r3, ctx->r1);
    // 0x151DBEF8: addiu       $t2, $zero, 0x4000
    ctx->r10 = ADD32(0, 0X4000);
    // 0x151DBEFC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151DBF00: sh          $t1, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r9;
    // 0x151DBF04: sh          $a3, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r7;
    // 0x151DBF08: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x151DBF0C: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x151DBF10: sb          $t8, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r24;
    // 0x151DBF14: sb          $t5, 0x68($sp)
    MEM_B(0X68, ctx->r29) = ctx->r13;
    // 0x151DBF18: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x151DBF1C: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x151DBF20: sb          $t6, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r14;
    // 0x151DBF24: sb          $t7, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r15;
    // 0x151DBF28: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x151DBF2C: addiu       $t9, $sp, 0x74
    ctx->r25 = ADD32(ctx->r29, 0X74);
    // 0x151DBF30: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151DBF34: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x151DBF38: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x151DBF3C: lui         $t4, 0x466C
    ctx->r12 = S32(0X466C << 16);
    // 0x151DBF40: ori         $t4, $t4, 0x1
    ctx->r12 = ctx->r12 | 0X1;
    // 0x151DBF44: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x151DBF48: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x151DBF4C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151DBF50: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x151DBF54: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151DBF58: lbu         $t5, 0xCB($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XCB);
    // 0x151DBF5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151DBF60: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151DBF64: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    // 0x151DBF68: sw          $t4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r12;
    // 0x151DBF6C: sb          $t6, 0x9D($sp)
    MEM_B(0X9D, ctx->r29) = ctx->r14;
    // 0x151DBF70: sb          $zero, 0x59($sp)
    MEM_B(0X59, ctx->r29) = 0;
    // 0x151DBF74: sb          $zero, 0x9E($sp)
    MEM_B(0X9E, ctx->r29) = 0;
    // 0x151DBF78: sb          $t7, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = ctx->r15;
    // 0x151DBF7C: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x151DBF80: sb          $t8, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r24;
    // 0x151DBF84: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x151DBF88: sh          $t2, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r10;
    // 0x151DBF8C: sh          $t1, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r9;
    // 0x151DBF90: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x151DBF94: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x151DBF98: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    // 0x151DBF9C: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    // 0x151DBFA0: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x151DBFA4: jal         0x150ADA20
    // 0x151DBFA8: sb          $t5, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151DBFA8: sb          $t5, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r13;
    after_0:
    // 0x151DBFAC: jal         0x150ADA20
    // 0x151DBFB0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151DBFB0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x151DBFB4: jal         0x150ADA20
    // 0x151DBFB8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151DBFB8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_2:
    // 0x151DBFBC: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x151DBFC0: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x151DBFC4: lwc1        $f0, 0xB4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x151DBFC8: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x151DBFCC: lbu         $t8, 0xD3($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XD3);
    // 0x151DBFD0: lw          $t2, 0xD4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD4);
    // 0x151DBFD4: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x151DBFD8: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x151DBFDC: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x151DBFE0: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x151DBFE4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151DBFE8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151DBFEC: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x151DBFF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DBFF4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x151DBFF8: addiu       $a3, $zero, 0x11
    ctx->r7 = ADD32(0, 0X11);
    // 0x151DBFFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151DC000: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151DC004: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151DC008: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x151DC00C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x151DC010: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x151DC014: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x151DC018: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x151DC01C: jal         0x1513D668
    // 0x151DC020: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    func_1513D668(rdram, ctx);
        goto after_3;
    // 0x151DC020: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    after_3:
    // 0x151DC024: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151DC028: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x151DC02C: jr          $ra
    // 0x151DC030: nop

    return;
    return;
    // 0x151DC030: nop

;}
RECOMP_FUNC void memcpy_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10022EC0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x10022EC4: beq         $a2, $zero, L_10022EE4
    if (ctx->r6 == 0) {
        // 0x10022EC8: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_10022EE4;
    }
    // 0x10022EC8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_10022ECC:
    // 0x10022ECC: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x10022ED0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x10022ED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x10022ED8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x10022EDC: bne         $a2, $zero, L_10022ECC
    if (ctx->r6 != 0) {
        // 0x10022EE0: sb          $t6, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r14;
            goto L_10022ECC;
    }
    // 0x10022EE0: sb          $t6, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r14;
L_10022EE4:
    // 0x10022EE4: jr          $ra
    // 0x10022EE8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    return;
    // 0x10022EE8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_151AA210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AA210: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151AA214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AA218: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151AA21C: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x151AA220: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151AA224: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x151AA228: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151AA22C: lbu         $t6, 0x1C($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X1C);
    // 0x151AA230: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x151AA234: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151AA238: jal         0x15147D64
    // 0x151AA23C: sb          $t6, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r14;
    func_15147D64(rdram, ctx);
        goto after_0;
    // 0x151AA23C: sb          $t6, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r14;
    after_0:
    // 0x151AA240: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151AA244: jal         0x151494E0
    // 0x151AA248: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_151494E0(rdram, ctx);
        goto after_1;
    // 0x151AA248: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x151AA24C: jal         0x1519F3B8
    // 0x151AA250: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_1519F3B8(rdram, ctx);
        goto after_2;
    // 0x151AA250: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x151AA254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AA258: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151AA25C: jr          $ra
    // 0x151AA260: nop

    return;
    return;
    // 0x151AA260: nop

;}
RECOMP_FUNC void func_150CB1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CB1E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150CB1E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150CB1E8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x150CB1EC: jr          $ra
    // 0x150CB1F0: nop

    return;
    return;
    // 0x150CB1F0: nop

;}
RECOMP_FUNC void func_15118F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15118F24: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15118F28: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x15118F2C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15118F30: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15118F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15118F38: jal         0x1511F990
    // 0x15118F3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1511F990(rdram, ctx);
        goto after_0;
    // 0x15118F3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x15118F40: lh          $t8, 0x3E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X3E);
    // 0x15118F44: lbu         $v0, 0x73($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X73);
    // 0x15118F48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15118F4C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15118F50: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x15118F54: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x15118F58: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15118F5C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x15118F60: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    // 0x15118F64: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15118F68: beq         $t6, $zero, L_15118F78
    if (ctx->r14 == 0) {
        // 0x15118F6C: lwc1        $f18, 0x84($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
            goto L_15118F78;
    }
    // 0x15118F6C: lwc1        $f18, 0x84($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
    // 0x15118F70: bne         $t6, $at, L_15118F80
    if (ctx->r14 != ctx->r1) {
        // 0x15118F74: nop
    
            goto L_15118F80;
    }
    // 0x15118F74: nop

L_15118F78:
    // 0x15118F78: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x15118F7C: nop

L_15118F80:
    // 0x15118F80: beq         $v0, $zero, L_15118F90
    if (ctx->r2 == 0) {
        // 0x15118F84: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15118F90;
    }
    // 0x15118F84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15118F88: bnel        $v0, $at, L_15118F9C
    if (ctx->r2 != ctx->r1) {
        // 0x15118F8C: c.eq.s      $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
            goto L_15118F9C;
    }
    goto skip_0;
    // 0x15118F8C: c.eq.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
    skip_0:
L_15118F90:
    // 0x15118F90: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x15118F94: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x15118F98: c.eq.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
L_15118F9C:
    // 0x15118F9C: nop

    // 0x15118FA0: bc1fl       L_15118FC4
    if (!c1cs) {
        // 0x15118FA4: lwc1        $f0, 0x7C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
            goto L_15118FC4;
    }
    goto skip_1;
    // 0x15118FA4: lwc1        $f0, 0x7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
    skip_1:
    // 0x15118FA8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15118FAC: nop

    // 0x15118FB0: c.eq.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl == ctx->f8.fl;
    // 0x15118FB4: nop

    // 0x15118FB8: bc1tl       L_15119300
    if (c1cs) {
        // 0x15118FBC: swc1        $f18, 0x84($s0)
        MEM_W(0X84, ctx->r16) = ctx->f18.u32l;
            goto L_15119300;
    }
    goto skip_2;
    // 0x15118FBC: swc1        $f18, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f18.u32l;
    skip_2:
    // 0x15118FC0: lwc1        $f0, 0x7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
L_15118FC4:
    // 0x15118FC4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15118FC8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15118FCC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15118FD0: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x15118FD4: nop

    // 0x15118FD8: bc1fl       L_15118FF0
    if (!c1cs) {
        // 0x15118FDC: swc1        $f0, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
            goto L_15118FF0;
    }
    goto skip_3;
    // 0x15118FDC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    skip_3:
    // 0x15118FE0: lwc1        $f4, 0x3148($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3148);
    // 0x15118FE4: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    // 0x15118FE8: lwc1        $f0, 0x7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x15118FEC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
L_15118FF0:
    // 0x15118FF0: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
    // 0x15118FF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15118FF8: c.eq.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl == ctx->f2.fl;
    // 0x15118FFC: nop

    // 0x15119000: bc1fl       L_15119018
    if (!c1cs) {
        // 0x15119004: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_15119018;
    }
    goto skip_4;
    // 0x15119004: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    skip_4:
    // 0x15119008: lwc1        $f8, 0x314C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X314C);
    // 0x1511900C: swc1        $f8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f8.u32l;
    // 0x15119010: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
    // 0x15119014: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
L_15119018:
    // 0x15119018: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1511901C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15119020: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15119024: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x15119028: nop

    // 0x1511902C: bc1f        L_1511904C
    if (!c1cs) {
        // 0x15119030: nop
    
            goto L_1511904C;
    }
    // 0x15119030: nop

    // 0x15119034: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15119038: nop

    // 0x1511903C: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x15119040: mul.s       $f16, $f2, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x15119044: b           L_15119058
    // 0x15119048: c.eq.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl == ctx->f8.fl;
        goto L_15119058;
    // 0x15119048: c.eq.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl == ctx->f8.fl;
L_1511904C:
    // 0x1511904C: mul.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x15119050: nop

    // 0x15119054: c.eq.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl == ctx->f8.fl;
L_15119058:
    // 0x15119058: nop

    // 0x1511905C: bc1fl       L_151190FC
    if (!c1cs) {
        // 0x15119060: add.s       $f12, $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
            goto L_151190FC;
    }
    goto skip_5;
    // 0x15119060: add.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
    skip_5:
    // 0x15119064: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15119068: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511906C: addiu       $a0, $zero, 0x4BA
    ctx->r4 = ADD32(0, 0X4BA);
    // 0x15119070: c.eq.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl == ctx->f10.fl;
    // 0x15119074: addiu       $a1, $zero, 0x5DC0
    ctx->r5 = ADD32(0, 0X5DC0);
    // 0x15119078: bc1fl       L_15119090
    if (!c1cs) {
        // 0x1511907C: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_15119090;
    }
    goto skip_6;
    // 0x1511907C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_6:
    // 0x15119080: lwc1        $f4, 0x3150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3150);
    // 0x15119084: b           L_151190F8
    // 0x15119088: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
        goto L_151190F8;
    // 0x15119088: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x1511908C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_15119090:
    // 0x15119090: lh          $t9, 0x10($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X10);
    // 0x15119094: addiu       $t2, $zero, 0xC8
    ctx->r10 = ADD32(0, 0XC8);
    // 0x15119098: addiu       $t3, $zero, 0x9C4
    ctx->r11 = ADD32(0, 0X9C4);
    // 0x1511909C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151190A0: lh          $t0, 0x12($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X12);
    // 0x151190A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151190A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151190AC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151190B0: lh          $t1, 0x14($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X14);
    // 0x151190B4: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x151190B8: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x151190BC: swc1        $f14, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f14.u32l;
    // 0x151190C0: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    // 0x151190C4: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x151190C8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x151190CC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x151190D0: jal         0x10010F88
    // 0x151190D4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_10010F88(rdram, ctx);
        goto after_1;
    // 0x151190D4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_1:
    // 0x151190D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151190DC: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151190E0: lwc1        $f6, 0x3154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3154);
    // 0x151190E4: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x151190E8: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151190EC: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x151190F0: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151190F4: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_151190F8:
    // 0x151190F8: add.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
L_151190FC:
    // 0x151190FC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x15119100: swc1        $f14, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f14.u32l;
    // 0x15119104: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x15119108: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    // 0x1511910C: jal         0x15048A70
    // 0x15119110: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    func_15048A70(rdram, ctx);
        goto after_2;
    // 0x15119110: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x15119114: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15119118: abs.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = fabsf(ctx->f0.fl);
    // 0x1511911C: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x15119120: abs.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = fabsf(ctx->f18.fl);
    // 0x15119124: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x15119128: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1511912C: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15119130: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15119134: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x15119138: bc1f        L_15119244
    if (!c1cs) {
        // 0x1511913C: lwc1        $f8, 0x58($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
            goto L_15119244;
    }
    // 0x1511913C: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15119140: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15119144: neg.s       $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = -ctx->f18.fl;
    // 0x15119148: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511914C: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15119150: lwc1        $f4, 0x3158($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3158);
    // 0x15119154: lwc1        $f2, 0x80($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X80);
    // 0x15119158: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1511915C: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x15119160: abs.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = fabsf(ctx->f18.fl);
    // 0x15119164: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x15119168: nop

    // 0x1511916C: bc1fl       L_151191F8
    if (!c1cs) {
        // 0x15119170: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_151191F8;
    }
    goto skip_7;
    // 0x15119170: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_7:
    // 0x15119174: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15119178: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1511917C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x15119180: c.eq.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl == ctx->f8.fl;
    // 0x15119184: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x15119188: addiu       $a0, $zero, 0x4BB
    ctx->r4 = ADD32(0, 0X4BB);
    // 0x1511918C: addiu       $a1, $zero, 0x5DC0
    ctx->r5 = ADD32(0, 0X5DC0);
    // 0x15119190: bc1fl       L_151191A4
    if (!c1cs) {
        // 0x15119194: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_151191A4;
    }
    goto skip_8;
    // 0x15119194: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_8:
    // 0x15119198: b           L_15119204
    // 0x1511919C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15119204;
    // 0x1511919C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151191A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_151191A4:
    // 0x151191A4: lh          $t4, 0x10($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X10);
    // 0x151191A8: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x151191AC: addiu       $t8, $zero, 0x9C4
    ctx->r24 = ADD32(0, 0X9C4);
    // 0x151191B0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151191B4: lh          $t5, 0x12($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X12);
    // 0x151191B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151191BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151191C0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x151191C4: lh          $t6, 0x14($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X14);
    // 0x151191C8: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x151191CC: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    // 0x151191D0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x151191D4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x151191D8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x151191DC: jal         0x10010F88
    // 0x151191E0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_10010F88(rdram, ctx);
        goto after_3;
    // 0x151191E0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_3:
    // 0x151191E4: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x151191E8: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151191EC: b           L_15119204
    // 0x151191F0: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
        goto L_15119204;
    // 0x151191F0: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151191F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_151191F8:
    // 0x151191F8: nop

    // 0x151191FC: mul.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x15119200: swc1        $f4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f4.u32l;
L_15119204:
    // 0x15119204: lh          $a0, 0x10($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X10);
    // 0x15119208: lh          $a1, 0x12($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X12);
    // 0x1511920C: lh          $a2, 0x14($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X14);
    // 0x15119210: lui         $a3, 0x3E19
    ctx->r7 = S32(0X3E19 << 16);
    // 0x15119214: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15119218: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1511921C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x15119220: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x15119224: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    // 0x15119228: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x1511922C: jal         0x151669A0
    // 0x15119230: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_151669A0(rdram, ctx);
        goto after_4;
    // 0x15119230: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
    // 0x15119234: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x15119238: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1511923C: b           L_151192A4
    // 0x15119240: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
        goto L_151192A4;
    // 0x15119240: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
L_15119244:
    // 0x15119244: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15119248: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x1511924C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x15119250: nop

    // 0x15119254: bc1fl       L_15119288
    if (!c1cs) {
        // 0x15119258: sub.s       $f18, $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f16.fl;
            goto L_15119288;
    }
    goto skip_9;
    // 0x15119258: sub.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f16.fl;
    skip_9:
    // 0x1511925C: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x15119260: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15119264: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15119268: nop

    // 0x1511926C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x15119270: nop

    // 0x15119274: bc1fl       L_151192A8
    if (!c1cs) {
        // 0x15119278: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_151192A8;
    }
    goto skip_10;
    // 0x15119278: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_10:
    // 0x1511927C: b           L_151192A4
    // 0x15119280: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
        goto L_151192A4;
    // 0x15119280: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x15119284: sub.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f16.fl;
L_15119288:
    // 0x15119288: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1511928C: nop

    // 0x15119290: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x15119294: nop

    // 0x15119298: bc1fl       L_151192A8
    if (!c1cs) {
        // 0x1511929C: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_151192A8;
    }
    goto skip_11;
    // 0x1511929C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_11:
    // 0x151192A0: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_151192A4:
    // 0x151192A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_151192A8:
    // 0x151192A8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x151192AC: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x151192B0: nop

    // 0x151192B4: bc1fl       L_151192D0
    if (!c1cs) {
        // 0x151192B8: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_151192D0;
    }
    goto skip_12;
    // 0x151192B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_12:
    // 0x151192BC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x151192C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151192C4: b           L_151192E8
    // 0x151192C8: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
        goto L_151192E8;
    // 0x151192C8: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x151192CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_151192D0:
    // 0x151192D0: nop

    // 0x151192D4: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x151192D8: nop

    // 0x151192DC: bc1fl       L_151192EC
    if (!c1cs) {
        // 0x151192E0: lbu         $t0, 0x73($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X73);
            goto L_151192EC;
    }
    goto skip_13;
    // 0x151192E0: lbu         $t0, 0x73($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X73);
    skip_13:
    // 0x151192E4: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
L_151192E8:
    // 0x151192E8: lbu         $t0, 0x73($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X73);
L_151192EC:
    // 0x151192EC: andi        $t2, $t0, 0xFFFC
    ctx->r10 = ctx->r8 & 0XFFFC;
    // 0x151192F0: sb          $t2, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r10;
    // 0x151192F4: or          $t3, $t2, $v0
    ctx->r11 = ctx->r10 | ctx->r2;
    // 0x151192F8: sb          $t3, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r11;
    // 0x151192FC: swc1        $f18, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f18.u32l;
L_15119300:
    // 0x15119300: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15119304: lbu         $t4, -0x164C($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X164C);
    // 0x15119308: bnel        $t4, $zero, L_15119328
    if (ctx->r12 != 0) {
        // 0x1511930C: lw          $v0, 0x3C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X3C);
            goto L_15119328;
    }
    goto skip_14;
    // 0x1511930C: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    skip_14:
    // 0x15119310: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15119314: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x15119318: nop

    // 0x1511931C: bc1tl       L_1511939C
    if (c1cs) {
        // 0x15119320: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1511939C;
    }
    goto skip_15;
    // 0x15119320: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_15:
    // 0x15119324: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
L_15119328:
    // 0x15119328: swc1        $f12, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f12.u32l;
    // 0x1511932C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x15119330: sra         $t5, $v0, 24
    ctx->r13 = S32(SIGNED(ctx->r2) >> 24);
    // 0x15119334: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x15119338: beql        $t6, $zero, L_1511939C
    if (ctx->r14 == 0) {
        // 0x1511933C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1511939C;
    }
    goto skip_16;
    // 0x1511933C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_16:
    // 0x15119340: beq         $t7, $zero, L_15119398
    if (ctx->r15 == 0) {
        // 0x15119344: lwc1        $f6, 0x38($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
            goto L_15119398;
    }
    // 0x15119344: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15119348: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x1511934C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15119350: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15119354: addiu       $s0, $t6, -0x1
    ctx->r16 = ADD32(ctx->r14, -0X1);
    // 0x15119358: div.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1511935C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15119360: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x15119364: sub.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x15119368: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x1511936C: jal         0x1518804C
    // 0x15119370: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    func_1518804C(rdram, ctx);
        goto after_5;
    // 0x15119370: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x15119374: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x15119378: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1511937C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15119380: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15119384: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15119388: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1511938C: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x15119390: jal         0x15173C60
    // 0x15119394: nop

    func_15173C60(rdram, ctx);
        goto after_6;
    // 0x15119394: nop

    after_6:
L_15119398:
    // 0x15119398: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1511939C:
    // 0x1511939C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x151193A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x151193A4: jr          $ra
    // 0x151193A8: nop

    return;
    return;
    // 0x151193A8: nop

;}
RECOMP_FUNC void func_15108FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15108FFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15109000: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15109004: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x15109008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1510900C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15109010: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15109014: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x15109018: addiu       $t6, $t6, -0x73B0
    ctx->r14 = ADD32(ctx->r14, -0X73B0);
    // 0x1510901C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x15109020: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15109024: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x15109028: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x1510902C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x15109030: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x15109034: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x15109038: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x1510903C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x15109040: lbu         $t2, 0x3B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3B);
    // 0x15109044: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x15109048: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x1510904C: jal         0x15169260
    // 0x15109050: sb          $t2, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r10;
    func_15169260(rdram, ctx);
        goto after_0;
    // 0x15109050: sb          $t2, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r10;
    after_0:
    // 0x15109054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15109058: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1510905C: jr          $ra
    // 0x15109060: nop

    return;
    return;
    // 0x15109060: nop

;}
RECOMP_FUNC void func_15043384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15043384: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x15043388: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x1504338C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15043390: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x15043394: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x15043398: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x1504339C: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x150433A0: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x150433A4: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x150433A8: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x150433AC: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x150433B0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150433B4: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x150433B8: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x150433BC: lw          $t6, 0x5CD0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5CD0);
    // 0x150433C0: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x150433C4: lw          $s0, -0x429C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X429C);
    // 0x150433C8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x150433CC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x150433D0: beq         $s0, $zero, L_1504393C
    if (ctx->r16 == 0) {
        // 0x150433D4: sw          $t7, 0x5CD0($at)
        MEM_W(0X5CD0, ctx->r1) = ctx->r15;
            goto L_1504393C;
    }
    // 0x150433D4: sw          $t7, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->r15;
    // 0x150433D8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x150433DC: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x150433E0: addiu       $a0, $a0, 0x59A0
    ctx->r4 = ADD32(ctx->r4, 0X59A0);
    // 0x150433E4: lui         $t8, 0xDE00
    ctx->r24 = S32(0XDE00 << 16);
    // 0x150433E8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x150433EC: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x150433F0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x150433F4: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x150433F8: lui         $t9, 0xEF00
    ctx->r25 = S32(0XEF00 << 16);
    // 0x150433FC: lui         $t0, 0x50
    ctx->r8 = S32(0X50 << 16);
    // 0x15043400: ori         $t0, $t0, 0x4240
    ctx->r8 = ctx->r8 | 0X4240;
    // 0x15043404: ori         $t9, $t9, 0x2C3F
    ctx->r25 = ctx->r25 | 0X2C3F;
    // 0x15043408: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x1504340C: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x15043410: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x15043414: beq         $s0, $zero, L_15043928
    if (ctx->r16 == 0) {
        // 0x15043418: lui         $fp, 0xFB00
        ctx->r30 = S32(0XFB00 << 16);
            goto L_15043928;
    }
    // 0x15043418: lui         $fp, 0xFB00
    ctx->r30 = S32(0XFB00 << 16);
    // 0x1504341C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x15043420: addiu       $s3, $s3, 0x60
    ctx->r19 = ADD32(ctx->r19, 0X60);
    // 0x15043424: sw          $a0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r4;
    // 0x15043428: addiu       $s7, $zero, 0x10
    ctx->r23 = ADD32(0, 0X10);
    // 0x1504342C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x15043430: lui         $s5, 0xE700
    ctx->r21 = S32(0XE700 << 16);
L_15043434:
    // 0x15043434: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    // 0x15043438: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x1504343C: addiu       $t9, $t9, 0x59E0
    ctx->r25 = ADD32(ctx->r25, 0X59E0);
    // 0x15043440: bne         $a0, $zero, L_150436CC
    if (ctx->r4 != 0) {
        // 0x15043444: addiu       $v1, $a0, -0x1
        ctx->r3 = ADD32(ctx->r4, -0X1);
            goto L_150436CC;
    }
    // 0x15043444: addiu       $v1, $a0, -0x1
    ctx->r3 = ADD32(ctx->r4, -0X1);
    // 0x15043448: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x1504344C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x15043450: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15043454: andi        $t1, $v0, 0x40
    ctx->r9 = ctx->r2 & 0X40;
    // 0x15043458: beq         $t1, $zero, L_15043468
    if (ctx->r9 == 0) {
        // 0x1504345C: andi        $t2, $v0, 0xFFBF
        ctx->r10 = ctx->r2 & 0XFFBF;
            goto L_15043468;
    }
    // 0x1504345C: andi        $t2, $v0, 0xFFBF
    ctx->r10 = ctx->r2 & 0XFFBF;
    // 0x15043460: b           L_150434BC
    // 0x15043464: sb          $t2, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r10;
        goto L_150434BC;
    // 0x15043464: sb          $t2, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r10;
L_15043468:
    // 0x15043468: lh          $t3, 0x8($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X8);
    // 0x1504346C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15043470: lwc1        $f8, -0x1E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E4);
    // 0x15043474: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x15043478: lh          $t6, 0xA($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA);
    // 0x1504347C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15043480: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15043484: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x15043488: nop

    // 0x1504348C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15043490: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15043494: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15043498: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x1504349C: nop

    // 0x150434A0: sh          $t5, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r13;
    // 0x150434A4: lwc1        $f6, -0x1E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E0);
    // 0x150434A8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150434AC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150434B0: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x150434B4: nop

    // 0x150434B8: sh          $t8, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r24;
L_150434BC:
    // 0x150434BC: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x150434C0: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x150434C4: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    // 0x150434C8: andi        $t9, $v0, 0x80
    ctx->r25 = ctx->r2 & 0X80;
    // 0x150434CC: beq         $t9, $zero, L_150434E0
    if (ctx->r25 == 0) {
        // 0x150434D0: andi        $t0, $v0, 0xFF7F
        ctx->r8 = ctx->r2 & 0XFF7F;
            goto L_150434E0;
    }
    // 0x150434D0: andi        $t0, $v0, 0xFF7F
    ctx->r8 = ctx->r2 & 0XFF7F;
    // 0x150434D4: or          $s4, $s6, $zero
    ctx->r20 = ctx->r22 | 0;
    // 0x150434D8: b           L_150434E0
    // 0x150434DC: sb          $t0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r8;
        goto L_150434E0;
    // 0x150434DC: sb          $t0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r8;
L_150434E0:
    // 0x150434E0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x150434E4: addiu       $t2, $sp, 0xB8
    ctx->r10 = ADD32(ctx->r29, 0XB8);
    // 0x150434E8: addiu       $t3, $sp, 0xB4
    ctx->r11 = ADD32(ctx->r29, 0XB4);
    // 0x150434EC: beq         $v1, $zero, L_15043560
    if (ctx->r3 == 0) {
        // 0x150434F0: addiu       $t4, $sp, 0xB0
        ctx->r12 = ADD32(ctx->r29, 0XB0);
            goto L_15043560;
    }
    // 0x150434F0: addiu       $t4, $sp, 0xB0
    ctx->r12 = ADD32(ctx->r29, 0XB0);
    // 0x150434F4: sw          $zero, 0x2FA4($at)
    MEM_W(0X2FA4, ctx->r1) = 0;
    // 0x150434F8: lh          $t1, 0xA($s0)
    ctx->r9 = MEM_H(ctx->r16, 0XA);
    // 0x150434FC: lwc1        $f16, 0x18($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
    // 0x15043500: lw          $a2, 0x1C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X1C);
    // 0x15043504: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x15043508: lwc1        $f12, 0x14($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1504350C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15043510: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15043514: lwc1        $f6, -0x739C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X739C);
    // 0x15043518: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x1504351C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15043520: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15043524: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x15043528: jal         0x1509563C
    // 0x1504352C: add.s       $f14, $f16, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f4.fl;
    func_1509563C(rdram, ctx);
        goto after_0;
    // 0x1504352C: add.s       $f14, $f16, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f4.fl;
    after_0:
    // 0x15043530: beq         $v0, $zero, L_15043560
    if (ctx->r2 == 0) {
        // 0x15043534: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_15043560;
    }
    // 0x15043534: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15043538: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1504353C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15043540: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x15043544: nop

    // 0x15043548: sh          $t6, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r14;
    // 0x1504354C: lwc1        $f18, 0xB8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x15043550: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15043554: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x15043558: nop

    // 0x1504355C: sh          $t8, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r24;
L_15043560:
    // 0x15043560: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x15043564: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x15043568: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
    // 0x1504356C: beq         $s6, $v0, L_15043580
    if (ctx->r22 == ctx->r2) {
        // 0x15043570: addiu       $a2, $sp, 0xE0
        ctx->r6 = ADD32(ctx->r29, 0XE0);
            goto L_15043580;
    }
    // 0x15043570: addiu       $a2, $sp, 0xE0
    ctx->r6 = ADD32(ctx->r29, 0XE0);
    // 0x15043574: lbu         $t9, 0x15($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X15);
    // 0x15043578: beq         $t9, $zero, L_150435B4
    if (ctx->r25 == 0) {
        // 0x1504357C: nop
    
            goto L_150435B4;
    }
    // 0x1504357C: nop

L_15043580:
    // 0x15043580: jal         0x150428D4
    // 0x15043584: addiu       $a3, $sp, 0xDC
    ctx->r7 = ADD32(ctx->r29, 0XDC);
    func_150428D4(rdram, ctx);
        goto after_1;
    // 0x15043584: addiu       $a3, $sp, 0xDC
    ctx->r7 = ADD32(ctx->r29, 0XDC);
    after_1:
    // 0x15043588: lw          $t0, 0xE4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE4);
    // 0x1504358C: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15043590: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x15043594: nop

    // 0x15043598: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1504359C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150435A0: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150435A4: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x150435A8: nop

    // 0x150435AC: sw          $t2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r10;
    // 0x150435B0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
L_150435B4:
    // 0x150435B4: bne         $s6, $v0, L_150435CC
    if (ctx->r22 != ctx->r2) {
        // 0x150435B8: lw          $t4, 0xE4($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XE4);
            goto L_150435CC;
    }
    // 0x150435B8: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x150435BC: lh          $t3, 0x8($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X8);
    // 0x150435C0: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x150435C4: subu        $t6, $t3, $t5
    ctx->r14 = SUB32(ctx->r11, ctx->r13);
    // 0x150435C8: sh          $t6, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r14;
L_150435CC:
    // 0x150435CC: beq         $s1, $zero, L_150436B4
    if (ctx->r17 == 0) {
        // 0x150435D0: lui         $at, 0x4580
        ctx->r1 = S32(0X4580 << 16);
            goto L_150436B4;
    }
    // 0x150435D0: lui         $at, 0x4580
    ctx->r1 = S32(0X4580 << 16);
    // 0x150435D4: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150435D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150435DC: addiu       $s1, $s0, 0x1C
    ctx->r17 = ADD32(ctx->r16, 0X1C);
    // 0x150435E0: mul.s       $f20, $f16, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x150435E4: beq         $s4, $zero, L_15043650
    if (ctx->r20 == 0) {
        // 0x150435E8: nop
    
            goto L_15043650;
    }
    // 0x150435E8: nop

    // 0x150435EC: jal         0x10022EEC
    // 0x150435F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    strlen_recomp(rdram, ctx);
        goto after_2;
    // 0x150435F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x150435F4: lh          $t7, 0x8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X8);
    // 0x150435F8: lh          $t9, 0xA($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XA);
    // 0x150435FC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15043600: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x15043604: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x15043608: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x1504360C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x15043610: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15043614: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15043618: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1504361C: lbu         $t1, 0x11($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X11);
    // 0x15043620: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x15043624: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x15043628: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1504362C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x15043630: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x15043634: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15043638: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x1504363C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x15043640: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15043644: jal         0x150417AC
    // 0x15043648: nop

    func_150417AC(rdram, ctx);
        goto after_3;
    // 0x15043648: nop

    after_3:
    // 0x1504364C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_15043650:
    // 0x15043650: jal         0x10022EEC
    // 0x15043654: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    strlen_recomp(rdram, ctx);
        goto after_4;
    // 0x15043654: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x15043658: lbu         $t3, 0xE($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XE);
    // 0x1504365C: lh          $t2, 0x8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8);
    // 0x15043660: lh          $t4, 0xA($s0)
    ctx->r12 = MEM_H(ctx->r16, 0XA);
    // 0x15043664: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x15043668: lbu         $t5, 0xF($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XF);
    // 0x1504366C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x15043670: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x15043674: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x15043678: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1504367C: lbu         $t6, 0x10($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X10);
    // 0x15043680: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15043684: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x15043688: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x1504368C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15043690: lbu         $t7, 0x11($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X11);
    // 0x15043694: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x15043698: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x1504369C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x150436A0: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x150436A4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150436A8: jal         0x150417AC
    // 0x150436AC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_150417AC(rdram, ctx);
        goto after_5;
    // 0x150436AC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_5:
    // 0x150436B0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_150436B4:
    // 0x150436B4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x150436B8: sw          $s5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r21;
    // 0x150436BC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x150436C0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x150436C4: b           L_15043918
    // 0x150436C8: lw          $s1, 0x18($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X18);
        goto L_15043918;
    // 0x150436C8: lw          $s1, 0x18($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X18);
L_150436CC:
    // 0x150436CC: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x150436D0: addu        $s1, $t8, $t9
    ctx->r17 = ADD32(ctx->r24, ctx->r25);
    // 0x150436D4: lbu         $t0, 0x2($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X2);
    // 0x150436D8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x150436DC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x150436E0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x150436E4: lui         $t1, 0xFC12
    ctx->r9 = S32(0XFC12 << 16);
    // 0x150436E8: bgez        $t0, L_15043700
    if (SIGNED(ctx->r8) >= 0) {
        // 0x150436EC: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_15043700;
    }
    // 0x150436EC: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150436F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150436F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150436F8: nop

    // 0x150436FC: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_15043700:
    // 0x15043700: lui         $at, 0x3C00
    ctx->r1 = S32(0X3C00 << 16);
    // 0x15043704: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15043708: lui         $t2, 0xFFA7
    ctx->r10 = S32(0XFFA7 << 16);
    // 0x1504370C: ori         $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 | 0XFFFF;
    // 0x15043710: mul.s       $f20, $f4, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15043714: ori         $t1, $t1, 0xD225
    ctx->r9 = ctx->r9 | 0XD225;
    // 0x15043718: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x1504371C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x15043720: lbu         $a1, 0x3($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X3);
    // 0x15043724: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x15043728: andi        $t4, $a1, 0x2
    ctx->r12 = ctx->r5 & 0X2;
    // 0x1504372C: beq         $t4, $zero, L_1504373C
    if (ctx->r12 == 0) {
        // 0x15043730: andi        $t3, $a1, 0x1
        ctx->r11 = ctx->r5 & 0X1;
            goto L_1504373C;
    }
    // 0x15043730: andi        $t3, $a1, 0x1
    ctx->r11 = ctx->r5 & 0X1;
    // 0x15043734: sh          $s7, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r23;
    // 0x15043738: sh          $s7, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r23;
L_1504373C:
    // 0x1504373C: beq         $t3, $zero, L_15043810
    if (ctx->r11 == 0) {
        // 0x15043740: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_15043810;
    }
    // 0x15043740: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15043744: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x15043748: sw          $s5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r21;
    // 0x1504374C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15043750: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x15043754: sw          $fp, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r30;
    // 0x15043758: lbu         $t9, 0xF($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XF);
    // 0x1504375C: lbu         $t6, 0xE($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XE);
    // 0x15043760: lbu         $t4, 0x10($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X10);
    // 0x15043764: lbu         $t8, 0x11($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X11);
    // 0x15043768: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x1504376C: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x15043770: or          $t1, $t7, $t0
    ctx->r9 = ctx->r15 | ctx->r8;
    // 0x15043774: sll         $t3, $t4, 8
    ctx->r11 = S32(ctx->r12 << 8);
    // 0x15043778: or          $t5, $t1, $t3
    ctx->r13 = ctx->r9 | ctx->r11;
    // 0x1504377C: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x15043780: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x15043784: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x15043788: lw          $t7, -0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, -0X4);
    // 0x1504378C: lbu         $t0, -0x8($s1)
    ctx->r8 = MEM_BU(ctx->r17, -0X8);
    // 0x15043790: lbu         $t2, -0x7($s1)
    ctx->r10 = MEM_BU(ctx->r17, -0X7);
    // 0x15043794: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x15043798: lh          $a3, 0xA($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XA);
    // 0x1504379C: lh          $a2, 0x8($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X8);
    // 0x150437A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150437A4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x150437A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150437AC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150437B0: jal         0x151ED430
    // 0x150437B4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_151ED430(rdram, ctx);
        goto after_6;
    // 0x150437B4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_6:
    // 0x150437B8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150437BC: lw          $v1, -0x1654($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1654);
    // 0x150437C0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x150437C4: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x150437C8: sll         $t4, $v1, 1
    ctx->r12 = S32(ctx->r3 << 1);
    // 0x150437CC: andi        $t1, $t4, 0x7F
    ctx->r9 = ctx->r12 & 0X7F;
    // 0x150437D0: slti        $at, $t1, 0x40
    ctx->r1 = SIGNED(ctx->r9) < 0X40 ? 1 : 0;
    // 0x150437D4: bne         $at, $zero, L_150437E0
    if (ctx->r1 != 0) {
        // 0x150437D8: or          $v1, $t1, $zero
        ctx->r3 = ctx->r9 | 0;
            goto L_150437E0;
    }
    // 0x150437D8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x150437DC: subu        $v1, $t3, $t1
    ctx->r3 = SUB32(ctx->r11, ctx->r9);
L_150437E0:
    // 0x150437E0: lbu         $t6, 0x11($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X11);
    // 0x150437E4: addu        $t5, $v1, $v1
    ctx->r13 = ADD32(ctx->r3, ctx->r3);
    // 0x150437E8: addu        $t8, $t5, $v1
    ctx->r24 = ADD32(ctx->r13, ctx->r3);
    // 0x150437EC: addiu       $t9, $t8, 0x3F
    ctx->r25 = ADD32(ctx->r24, 0X3F);
    // 0x150437F0: multu       $t6, $t9
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150437F4: mflo        $v1
    ctx->r3 = lo;
    // 0x150437F8: sra         $t7, $v1, 8
    ctx->r15 = S32(SIGNED(ctx->r3) >> 8);
    // 0x150437FC: slti        $at, $t7, 0x100
    ctx->r1 = SIGNED(ctx->r15) < 0X100 ? 1 : 0;
    // 0x15043800: bne         $at, $zero, L_1504380C
    if (ctx->r1 != 0) {
        // 0x15043804: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_1504380C;
    }
    // 0x15043804: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x15043808: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_1504380C:
    // 0x1504380C: sb          $v1, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r3;
L_15043810:
    // 0x15043810: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x15043814: sw          $s5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r21;
    // 0x15043818: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1504381C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x15043820: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x15043824: sw          $fp, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r30;
    // 0x15043828: lbu         $t3, 0xF($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XF);
    // 0x1504382C: lbu         $t2, 0xE($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XE);
    // 0x15043830: lbu         $t9, 0x10($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X10);
    // 0x15043834: lbu         $t1, 0x11($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X11);
    // 0x15043838: sll         $t5, $t3, 16
    ctx->r13 = S32(ctx->r11 << 16);
    // 0x1504383C: sll         $t4, $t2, 24
    ctx->r12 = S32(ctx->r10 << 24);
    // 0x15043840: or          $t8, $t4, $t5
    ctx->r24 = ctx->r12 | ctx->r13;
    // 0x15043844: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x15043848: or          $t0, $t8, $t7
    ctx->r8 = ctx->r24 | ctx->r15;
    // 0x1504384C: or          $t3, $t0, $t1
    ctx->r11 = ctx->r8 | ctx->r9;
    // 0x15043850: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x15043854: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x15043858: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x1504385C: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x15043860: addiu       $t4, $t4, 0x5AA8
    ctx->r12 = ADD32(ctx->r12, 0X5AA8);
    // 0x15043864: bne         $s1, $t4, L_150438A0
    if (ctx->r17 != ctx->r12) {
        // 0x15043868: sw          $a0, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r4;
            goto L_150438A0;
    }
    // 0x15043868: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    // 0x1504386C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x15043870: lw          $v0, 0x5CD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5CD0);
    // 0x15043874: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x15043878: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x1504387C: sra         $t5, $v0, 1
    ctx->r13 = S32(SIGNED(ctx->r2) >> 1);
    // 0x15043880: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x15043884: mfhi        $t6
    ctx->r14 = hi;
    // 0x15043888: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x1504388C: bne         $at, $zero, L_15043898
    if (ctx->r1 != 0) {
        // 0x15043890: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_15043898;
    }
    // 0x15043890: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x15043894: subu        $v1, $t9, $t6
    ctx->r3 = SUB32(ctx->r25, ctx->r14);
L_15043898:
    // 0x15043898: addu        $t8, $a0, $v1
    ctx->r24 = ADD32(ctx->r4, ctx->r3);
    // 0x1504389C: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
L_150438A0:
    // 0x150438A0: lh          $a2, 0x8($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X8);
    // 0x150438A4: lh          $a3, 0xA($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XA);
    // 0x150438A8: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x150438AC: lbu         $t2, 0x1($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X1);
    // 0x150438B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150438B4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x150438B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150438BC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x150438C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150438C4: jal         0x151ED430
    // 0x150438C8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_151ED430(rdram, ctx);
        goto after_7;
    // 0x150438C8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_7:
    // 0x150438CC: lui         $t0, 0xDE00
    ctx->r8 = S32(0XDE00 << 16);
    // 0x150438D0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x150438D4: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x150438D8: addiu       $s2, $v0, 0x10
    ctx->r18 = ADD32(ctx->r2, 0X10);
    // 0x150438DC: lui         $t3, 0xEF00
    ctx->r11 = S32(0XEF00 << 16);
    // 0x150438E0: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x150438E4: lui         $t4, 0x50
    ctx->r12 = S32(0X50 << 16);
    // 0x150438E8: ori         $t4, $t4, 0x4240
    ctx->r12 = ctx->r12 | 0X4240;
    // 0x150438EC: ori         $t3, $t3, 0x2C3F
    ctx->r11 = ctx->r11 | 0X2C3F;
    // 0x150438F0: sw          $t3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r11;
    // 0x150438F4: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
    // 0x150438F8: lbu         $t5, 0x3($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X3);
    // 0x150438FC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x15043900: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x15043904: beql        $t6, $zero, L_15043918
    if (ctx->r14 == 0) {
        // 0x15043908: lw          $s1, 0x18($s0)
        ctx->r17 = MEM_W(ctx->r16, 0X18);
            goto L_15043918;
    }
    goto skip_0;
    // 0x15043908: lw          $s1, 0x18($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X18);
    skip_0:
    // 0x1504390C: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x15043910: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
    // 0x15043914: lw          $s1, 0x18($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X18);
L_15043918:
    // 0x15043918: jal         0x10004074
    // 0x1504391C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_10004074(rdram, ctx);
        goto after_8;
    // 0x1504391C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x15043920: bne         $s1, $zero, L_15043434
    if (ctx->r17 != 0) {
        // 0x15043924: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_15043434;
    }
    // 0x15043924: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_15043928:
    // 0x15043928: lui         $s5, 0xE700
    ctx->r21 = S32(0XE700 << 16);
    // 0x1504392C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x15043930: sw          $s5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r21;
    // 0x15043934: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15043938: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_1504393C:
    // 0x1504393C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x15043940: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15043944: sb          $v1, -0x42A0($at)
    MEM_B(-0X42A0, ctx->r1) = ctx->r3;
    // 0x15043948: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1504394C: sb          $v1, -0x429F($at)
    MEM_B(-0X429F, ctx->r1) = ctx->r3;
    // 0x15043950: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15043954: sb          $v1, -0x429E($at)
    MEM_B(-0X429E, ctx->r1) = ctx->r3;
    // 0x15043958: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1504395C: sb          $v1, -0x429D($at)
    MEM_B(-0X429D, ctx->r1) = ctx->r3;
    // 0x15043960: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15043964: sb          $zero, -0x4294($at)
    MEM_B(-0X4294, ctx->r1) = 0;
    // 0x15043968: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1504396C: sb          $zero, -0x4293($at)
    MEM_B(-0X4293, ctx->r1) = 0;
    // 0x15043970: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15043974: sb          $zero, -0x4292($at)
    MEM_B(-0X4292, ctx->r1) = 0;
    // 0x15043978: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1504397C: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x15043980: sb          $t9, -0x4291($at)
    MEM_B(-0X4291, ctx->r1) = ctx->r25;
    // 0x15043984: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x15043988: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1504398C: sh          $a0, -0x4290($at)
    MEM_H(-0X4290, ctx->r1) = ctx->r4;
    // 0x15043990: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15043994: sh          $a0, -0x428E($at)
    MEM_H(-0X428E, ctx->r1) = ctx->r4;
    // 0x15043998: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1504399C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150439A0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150439A4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x150439A8: swc1        $f10, -0x4280($at)
    MEM_W(-0X4280, ctx->r1) = ctx->f10.u32l;
    // 0x150439AC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150439B0: sb          $zero, -0x428C($at)
    MEM_B(-0X428C, ctx->r1) = 0;
    // 0x150439B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150439B8: sw          $zero, -0x429C($at)
    MEM_W(-0X429C, ctx->r1) = 0;
    // 0x150439BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150439C0: sw          $zero, -0x4298($at)
    MEM_W(-0X4298, ctx->r1) = 0;
    // 0x150439C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150439C8: sw          $zero, -0x4288($at)
    MEM_W(-0X4288, ctx->r1) = 0;
    // 0x150439CC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x150439D0: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x150439D4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x150439D8: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x150439DC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x150439E0: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x150439E4: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x150439E8: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x150439EC: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x150439F0: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x150439F4: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x150439F8: jr          $ra
    // 0x150439FC: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    return;
    // 0x150439FC: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_1518F384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518F384: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1518F388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518F38C: lh          $t6, 0x12C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X12C);
    // 0x1518F390: bnel        $t6, $zero, L_1518F3CC
    if (ctx->r14 != 0) {
        // 0x1518F394: addiu       $v1, $a0, 0x110
        ctx->r3 = ADD32(ctx->r4, 0X110);
            goto L_1518F3CC;
    }
    goto skip_0;
    // 0x1518F394: addiu       $v1, $a0, 0x110
    ctx->r3 = ADD32(ctx->r4, 0X110);
    skip_0:
    // 0x1518F398: jal         0x150ADA68
    // 0x1518F39C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x1518F39C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x1518F3A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1518F3A4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1518F3A8: addiu       $v1, $a0, 0x110
    ctx->r3 = ADD32(ctx->r4, 0X110);
    // 0x1518F3AC: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1518F3B0: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1518F3B4: sh          $t7, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r15;
    // 0x1518F3B8: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x1518F3BC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1518F3C0: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x1518F3C4: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x1518F3C8: addiu       $v1, $a0, 0x110
    ctx->r3 = ADD32(ctx->r4, 0X110);
L_1518F3CC:
    // 0x1518F3CC: lh          $t8, 0x1E($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X1E);
    // 0x1518F3D0: bnel        $t8, $zero, L_1518F410
    if (ctx->r24 != 0) {
        // 0x1518F3D4: lwc1        $f0, 0x30($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
            goto L_1518F410;
    }
    goto skip_1;
    // 0x1518F3D4: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
    skip_1:
    // 0x1518F3D8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x1518F3DC: jal         0x150ADA68
    // 0x1518F3E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x1518F3E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x1518F3E4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x1518F3E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1518F3EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1518F3F0: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1518F3F4: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x1518F3F8: sh          $t9, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r25;
    // 0x1518F3FC: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x1518F400: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1518F404: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x1518F408: swc1        $f6, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f6.u32l;
    // 0x1518F40C: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
L_1518F410:
    // 0x1518F410: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1518F414: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518F418: lwc1        $f16, 0x7B74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7B74);
    // 0x1518F41C: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x1518F420: lwc1        $f2, 0x2C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x1518F424: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518F428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518F42C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1518F430: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x1518F434: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x1518F438: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1518F43C: lwc1        $f10, 0x7B78($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7B78);
    // 0x1518F440: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x1518F444: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1518F448: add.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x1518F44C: swc1        $f18, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f18.u32l;
    // 0x1518F450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1518F454: jr          $ra
    // 0x1518F458: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1518F458: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_151C8674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C8674: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151C8678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151C867C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151C8680: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x151C8684: beq         $a2, $zero, L_151C869C
    if (ctx->r6 == 0) {
        // 0x151C8688: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_151C869C;
    }
    // 0x151C8688: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x151C868C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x151C8690: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x151C8694: jal         0x151403A8
    // 0x151C8698: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_151403A8(rdram, ctx);
        goto after_0;
    // 0x151C8698: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
L_151C869C:
    // 0x151C869C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151C86A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151C86A4: jr          $ra
    // 0x151C86A8: nop

    return;
    return;
    // 0x151C86A8: nop

;}
RECOMP_FUNC void func_150E2FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E2FC0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x150E2FC4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150E2FC8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150E2FCC: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x150E2FD0: bne         $a2, $at, L_150E3014
    if (ctx->r6 != ctx->r1) {
        // 0x150E2FD4: nop
    
            goto L_150E3014;
    }
    // 0x150E2FD4: nop

    // 0x150E2FD8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x150E2FDC: lw          $v1, 0xDC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XDC);
    // 0x150E2FE0: bnel        $v0, $v1, L_150E3000
    if (ctx->r2 != ctx->r3) {
        // 0x150E2FE4: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_150E3000;
    }
    goto skip_0;
    // 0x150E2FE4: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x150E2FE8: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x150E2FEC: sw          $t7, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r15;
    // 0x150E2FF0: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x150E2FF4: jr          $ra
    // 0x150E2FF8: sb          $t8, 0xDA($a0)
    MEM_B(0XDA, ctx->r4) = ctx->r24;
    return;
    return;
    // 0x150E2FF8: sb          $t8, 0xDA($a0)
    MEM_B(0XDA, ctx->r4) = ctx->r24;
    // 0x150E2FFC: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_150E3000:
    // 0x150E3000: bne         $t9, $v1, L_150E3014
    if (ctx->r25 != ctx->r3) {
        // 0x150E3004: nop
    
            goto L_150E3014;
    }
    // 0x150E3004: nop

    // 0x150E3008: sw          $v0, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r2;
    // 0x150E300C: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x150E3010: sb          $t0, 0xDA($a0)
    MEM_B(0XDA, ctx->r4) = ctx->r8;
L_150E3014:
    // 0x150E3014: jr          $ra
    // 0x150E3018: nop

    return;
    return;
    // 0x150E3018: nop

;}
RECOMP_FUNC void func_151B2060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B2060: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151B2064: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151B2068: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151B206C: beql        $a1, $zero, L_151B20F4
    if (ctx->r5 == 0) {
        // 0x151B2070: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151B20F4;
    }
    goto skip_0;
    // 0x151B2070: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x151B2074: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151B2078: lbu         $t6, 0x3B($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X3B);
    // 0x151B207C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151B2080: jal         0x15083E90
    // 0x151B2084: sb          $t6, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r14;
    func_15083E90(rdram, ctx);
        goto after_0;
    // 0x151B2084: sb          $t6, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r14;
    after_0:
    // 0x151B2088: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151B208C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x151B2090: sb          $t7, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r15;
    // 0x151B2094: sb          $zero, 0x39($sp)
    MEM_B(0X39, ctx->r29) = 0;
    // 0x151B2098: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x151B209C: jal         0x100226F0
    // 0x151B20A0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x151B20A0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_1:
    // 0x151B20A4: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x151B20A8: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x151B20AC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151B20B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151B20B4: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x151B20B8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x151B20BC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151B20C0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151B20C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151B20C8: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x151B20CC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151B20D0: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x151B20D4: jal         0x151491F4
    // 0x151B20D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151491F4(rdram, ctx);
        goto after_2;
    // 0x151B20D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x151B20DC: beq         $v0, $zero, L_151B20F0
    if (ctx->r2 == 0) {
        // 0x151B20E0: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_151B20F0;
    }
    // 0x151B20E0: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151B20E4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151B20E8: jal         0x10022EC0
    // 0x151B20EC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151B20EC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_3:
L_151B20F0:
    // 0x151B20F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151B20F4:
    // 0x151B20F4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151B20F8: jr          $ra
    // 0x151B20FC: nop

    return;
    return;
    // 0x151B20FC: nop

;}
RECOMP_FUNC void func_150F43F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F43F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150F43F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150F43F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150F43FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150F4400: lbu         $t6, 0x23E($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X23E);
    // 0x150F4404: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x150F4408: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150F440C: bne         $t6, $at, L_150F44C0
    if (ctx->r14 != ctx->r1) {
        // 0x150F4410: addiu       $a1, $zero, 0x405C
        ctx->r5 = ADD32(0, 0X405C);
            goto L_150F44C0;
    }
    // 0x150F4410: addiu       $a1, $zero, 0x405C
    ctx->r5 = ADD32(0, 0X405C);
    // 0x150F4414: jal         0x1509BFB0
    // 0x150F4418: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1509BFB0(rdram, ctx);
        goto after_0;
    // 0x150F4418: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x150F441C: lw          $t7, 0x2C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2C);
    // 0x150F4420: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x150F4424: beql        $t7, $at, L_150F44B8
    if (ctx->r15 == ctx->r1) {
        // 0x150F4428: mtc1        $zero, $f8
        ctx->f8.u32l = 0;
            goto L_150F44B8;
    }
    goto skip_0;
    // 0x150F4428: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    skip_0:
    // 0x150F442C: lw          $t8, 0x6C8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X6C8);
    // 0x150F4430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F4434: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x150F4438: bne         $t8, $zero, L_150F44B4
    if (ctx->r24 != 0) {
        // 0x150F443C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_150F44B4;
    }
    // 0x150F443C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F4440: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F4444: jal         0x15123934
    // 0x150F4448: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_15123934(rdram, ctx);
        goto after_1;
    // 0x150F4448: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x150F444C: beq         $v0, $zero, L_150F4484
    if (ctx->r2 == 0) {
        // 0x150F4450: lui         $at, 0x30
        ctx->r1 = S32(0X30 << 16);
            goto L_150F4484;
    }
    // 0x150F4450: lui         $at, 0x30
    ctx->r1 = S32(0X30 << 16);
    // 0x150F4454: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x150F4458: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150F445C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x150F4460: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x150F4464: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x150F4468: sw          $t0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r8;
    // 0x150F446C: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x150F4470: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
    // 0x150F4474: sh          $t3, 0x1B4($s0)
    MEM_H(0X1B4, ctx->r16) = ctx->r11;
    // 0x150F4478: sh          $t4, 0x1E0($s0)
    MEM_H(0X1E0, ctx->r16) = ctx->r12;
    // 0x150F447C: jal         0x15124B18
    // 0x150F4480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15124B18(rdram, ctx);
        goto after_2;
    // 0x150F4480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_150F4484:
    // 0x150F4484: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x150F4488: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150F448C: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x150F4490: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F4494: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150F4498: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F449C: sw          $zero, 0x134($s0)
    MEM_W(0X134, ctx->r16) = 0;
    // 0x150F44A0: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
    // 0x150F44A4: swc1        $f0, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f0.u32l;
    // 0x150F44A8: swc1        $f4, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f4.u32l;
    // 0x150F44AC: b           L_150F44F8
    // 0x150F44B0: swc1        $f6, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
        goto L_150F44F8;
    // 0x150F44B0: swc1        $f6, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
L_150F44B4:
    // 0x150F44B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_150F44B8:
    // 0x150F44B8: b           L_150F44F8
    // 0x150F44BC: swc1        $f8, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f8.u32l;
        goto L_150F44F8;
    // 0x150F44BC: swc1        $f8, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f8.u32l;
L_150F44C0:
    // 0x150F44C0: lw          $t5, 0x2C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X2C);
    // 0x150F44C4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x150F44C8: bnel        $t5, $at, L_150F44FC
    if (ctx->r13 != ctx->r1) {
        // 0x150F44CC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150F44FC;
    }
    goto skip_1;
    // 0x150F44CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
    // 0x150F44D0: lw          $t6, 0x6C8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X6C8);
    // 0x150F44D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F44D8: bnel        $t6, $zero, L_150F44FC
    if (ctx->r14 != 0) {
        // 0x150F44DC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150F44FC;
    }
    goto skip_2;
    // 0x150F44DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_2:
    // 0x150F44E0: jal         0x151239CC
    // 0x150F44E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151239CC(rdram, ctx);
        goto after_3;
    // 0x150F44E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x150F44E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150F44EC: addiu       $a1, $zero, 0x405C
    ctx->r5 = ADD32(0, 0X405C);
    // 0x150F44F0: jal         0x1509BFB0
    // 0x150F44F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_4;
    // 0x150F44F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_150F44F8:
    // 0x150F44F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_150F44FC:
    // 0x150F44FC: addiu       $a1, $zero, 0x4054
    ctx->r5 = ADD32(0, 0X4054);
    // 0x150F4500: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150F4504: jal         0x1509BE40
    // 0x150F4508: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_5;
    // 0x150F4508: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_5:
    // 0x150F450C: beq         $v0, $zero, L_150F4540
    if (ctx->r2 == 0) {
        // 0x150F4510: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150F4540;
    }
    // 0x150F4510: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150F4514: addiu       $a1, $zero, 0x405E
    ctx->r5 = ADD32(0, 0X405E);
    // 0x150F4518: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150F451C: jal         0x1509BE40
    // 0x150F4520: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_6;
    // 0x150F4520: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_6:
    // 0x150F4524: bnel        $v0, $zero, L_150F4544
    if (ctx->r2 != 0) {
        // 0x150F4528: lw          $t9, 0x84($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X84);
            goto L_150F4544;
    }
    goto skip_3;
    // 0x150F4528: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    skip_3:
    // 0x150F452C: lw          $t7, 0x84($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X84);
    // 0x150F4530: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150F4534: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x150F4538: b           L_150F4554
    // 0x150F453C: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
        goto L_150F4554;
    // 0x150F453C: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
L_150F4540:
    // 0x150F4540: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
L_150F4544:
    // 0x150F4544: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x150F4548: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150F454C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x150F4550: sw          $t0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r8;
L_150F4554:
    // 0x150F4554: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150F4558: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150F455C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150F4560: jr          $ra
    // 0x150F4564: nop

    return;
    return;
    // 0x150F4564: nop

;}
RECOMP_FUNC void func_15018E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15018E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15018E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15018E90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15018E94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15018E98: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15018E9C: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x15018EA0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15018EA4: bnel        $t6, $zero, L_15018EB8
    if (ctx->r14 != 0) {
        // 0x15018EA8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_15018EB8;
    }
    goto skip_0;
    // 0x15018EA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x15018EAC: jal         0x1517D7B0
    // 0x15018EB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1517D7B0(rdram, ctx);
        goto after_0;
    // 0x15018EB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x15018EB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_15018EB8:
    // 0x15018EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15018EBC: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x15018EC0: jal         0x151674F8
    // 0x15018EC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151674F8(rdram, ctx);
        goto after_1;
    // 0x15018EC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x15018EC8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x15018ECC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15018ED0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15018ED4: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x15018ED8: jal         0x151674F8
    // 0x15018EDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151674F8(rdram, ctx);
        goto after_2;
    // 0x15018EDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x15018EE0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15018EE4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x15018EE8: lw          $a1, -0x1610($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1610);
    // 0x15018EEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15018EF0: jal         0x15174AA4
    // 0x15018EF4: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    func_15174AA4(rdram, ctx);
        goto after_3;
    // 0x15018EF4: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    after_3:
    // 0x15018EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15018EFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15018F00: jr          $ra
    // 0x15018F04: nop

    return;
    return;
    // 0x15018F04: nop

;}
RECOMP_FUNC void func_151725FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151725FC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x15172600: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x15172604: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15172608: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1517260C: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x15172610: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x15172614: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15172618: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1517261C: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x15172620: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x15172624: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x15172628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1517262C: bgez        $v0, L_1517263C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15172630: sra         $t6, $v0, 4
        ctx->r14 = S32(SIGNED(ctx->r2) >> 4);
            goto L_1517263C;
    }
    // 0x15172630: sra         $t6, $v0, 4
    ctx->r14 = S32(SIGNED(ctx->r2) >> 4);
    // 0x15172634: addiu       $at, $v0, 0xF
    ctx->r1 = ADD32(ctx->r2, 0XF);
    // 0x15172638: sra         $t6, $at, 4
    ctx->r14 = S32(SIGNED(ctx->r1) >> 4);
L_1517263C:
    // 0x1517263C: bne         $t6, $zero, L_15172648
    if (ctx->r14 != 0) {
        // 0x15172640: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_15172648;
    }
    // 0x15172640: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x15172644: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15172648:
    // 0x15172648: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x1517264C: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x15172650: jal         0x1510E388
    // 0x15172654: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_1510E388(rdram, ctx);
        goto after_0;
    // 0x15172654: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_0:
    // 0x15172658: bne         $v0, $zero, L_15172668
    if (ctx->r2 != 0) {
        // 0x1517265C: lw          $v1, 0x48($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X48);
            goto L_15172668;
    }
    // 0x1517265C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x15172660: b           L_15172B08
    // 0x15172664: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15172B08;
    // 0x15172664: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15172668:
    // 0x15172668: negu        $t7, $v1
    ctx->r15 = SUB32(0, ctx->r3);
    // 0x1517266C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x15172670: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15172674: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x15172678: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1517267C: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15172680: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    // 0x15172684: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15172688: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
    // 0x1517268C: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x15172690: neg.s       $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = -ctx->f18.fl;
    // 0x15172694: sub.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x15172698: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1517269C: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x151726A0: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x151726A4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x151726A8: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x151726AC: add.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f12.fl;
    // 0x151726B0: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151726B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151726B8: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151726BC: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x151726C0: nop

    // 0x151726C4: bc1f        L_151726D0
    if (!c1cs) {
        // 0x151726C8: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_151726D0;
    }
    // 0x151726C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151726CC: lwc1        $f2, 0x7144($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7144);
L_151726D0:
    // 0x151726D0: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x151726D4: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151726D8: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151726DC: mul.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x151726E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151726E4: nop

    // 0x151726E8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x151726EC: add.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x151726F0: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x151726F4: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151726F8: lwc1        $f2, 0x78($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151726FC: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15172700: bc1f        L_15172714
    if (!c1cs) {
        // 0x15172704: swc1        $f10, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
            goto L_15172714;
    }
    // 0x15172704: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x15172708: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1517270C: b           L_15172720
    // 0x15172710: nop

        goto L_15172720;
    // 0x15172710: nop

L_15172714:
    // 0x15172714: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15172718: sub.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x1517271C: div.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
L_15172720:
    // 0x15172720: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x15172724: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15172728: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1517272C: lwc1        $f0, 0x7148($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7148);
    // 0x15172730: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    // 0x15172734: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15172738: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1517273C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x15172740: nop

    // 0x15172744: bc1f        L_15172750
    if (!c1cs) {
        // 0x15172748: nop
    
            goto L_15172750;
    }
    // 0x15172748: nop

    // 0x1517274C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_15172750:
    // 0x15172750: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15172754: mflo        $t8
    ctx->r24 = lo;
    // 0x15172758: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1517275C: nop

    // 0x15172760: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15172764: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x15172768: nop

    // 0x1517276C: bc1fl       L_1517277C
    if (!c1cs) {
        // 0x15172770: sqrt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
            goto L_1517277C;
    }
    goto skip_0;
    // 0x15172770: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    skip_0:
    // 0x15172774: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x15172778: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
L_1517277C:
    // 0x1517277C: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x15172780: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15172784: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15172788: lwc1        $f16, 0x714C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X714C);
    // 0x1517278C: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x15172790: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x15172794: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x15172798: mul.s       $f10, $f6, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x1517279C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151727A0: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x151727A4: add.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151727A8: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x151727AC: nop

    // 0x151727B0: bc1fl       L_151727C0
    if (!c1cs) {
        // 0x151727B4: c.lt.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
            goto L_151727C0;
    }
    goto skip_1;
    // 0x151727B4: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    skip_1:
    // 0x151727B8: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
    // 0x151727BC: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
L_151727C0:
    // 0x151727C0: nop

    // 0x151727C4: bc1fl       L_151727D4
    if (!c1cs) {
        // 0x151727C8: lw          $t9, 0xC0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XC0);
            goto L_151727D4;
    }
    goto skip_2;
    // 0x151727C8: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    skip_2:
    // 0x151727CC: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x151727D0: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
L_151727D4:
    // 0x151727D4: sqrt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = sqrtf(ctx->f14.fl);
    // 0x151727D8: addiu       $v0, $sp, 0x74
    ctx->r2 = ADD32(ctx->r29, 0X74);
    // 0x151727DC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x151727E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151727E4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151727E8: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
L_151727EC:
    // 0x151727EC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151727F0: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151727F4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x151727F8: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151727FC: slti        $at, $a0, 0x6
    ctx->r1 = SIGNED(ctx->r4) < 0X6 ? 1 : 0;
    // 0x15172800: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15172804: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15172808: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x1517280C: div.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x15172810: div.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15172814: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    // 0x15172818: lwc1        $f4, -0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, -0X4);
    // 0x1517281C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15172820: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x15172824: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x15172828: sh          $t1, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r9;
    // 0x1517282C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15172830: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15172834: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x15172838: nop

    // 0x1517283C: sh          $t3, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r11;
    // 0x15172840: lwc1        $f4, -0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, -0X4);
    // 0x15172844: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x15172848: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1517284C: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x15172850: nop

    // 0x15172854: sh          $t5, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r13;
    // 0x15172858: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1517285C: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x15172860: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15172864: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x15172868: bne         $at, $zero, L_151727EC
    if (ctx->r1 != 0) {
        // 0x1517286C: sh          $t7, 0x2E($v1)
        MEM_H(0X2E, ctx->r3) = ctx->r15;
            goto L_151727EC;
    }
    // 0x1517286C: sh          $t7, 0x2E($v1)
    MEM_H(0X2E, ctx->r3) = ctx->r15;
    // 0x15172870: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x15172874: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15172878: lwc1        $f10, 0xBC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1517287C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15172880: lwc1        $f8, 0x7150($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7150);
    // 0x15172884: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15172888: mul.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1517288C: jal         0x15047C00
    // 0x15172890: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x15172890: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x15172894: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15172898: jal         0x15047D60
    // 0x1517289C: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x1517289C: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x151728A0: lbu         $v0, 0xC7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XC7);
    // 0x151728A4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x151728A8: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151728AC: bne         $v0, $at, L_151728CC
    if (ctx->r2 != ctx->r1) {
        // 0x151728B0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_151728CC;
    }
    // 0x151728B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151728B4: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x151728B8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151728BC: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x151728C0: addiu       $a1, $a1, 0x6FF0
    ctx->r5 = ADD32(ctx->r5, 0X6FF0);
    // 0x151728C4: b           L_15172900
    // 0x151728C8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_15172900;
    // 0x151728C8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_151728CC:
    // 0x151728CC: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x151728D0: bne         $v0, $at, L_151728EC
    if (ctx->r2 != ctx->r1) {
        // 0x151728D4: lui         $a1, 0x800A
        ctx->r5 = S32(0X800A << 16);
            goto L_151728EC;
    }
    // 0x151728D4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x151728D8: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x151728DC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151728E0: addiu       $a1, $a1, 0x6FE0
    ctx->r5 = ADD32(ctx->r5, 0X6FE0);
    // 0x151728E4: b           L_15172900
    // 0x151728E8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_15172900;
    // 0x151728E8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_151728EC:
    // 0x151728EC: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x151728F0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151728F4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x151728F8: addiu       $a1, $a1, 0x6FD0
    ctx->r5 = ADD32(ctx->r5, 0X6FD0);
    // 0x151728FC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_15172900:
    // 0x15172900: lui         $at, 0x4600
    ctx->r1 = S32(0X4600 << 16);
    // 0x15172904: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15172908: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1517290C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_15172910:
    // 0x15172910: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x15172914: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x15172918: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x1517291C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x15172920: slti        $at, $a0, 0x40
    ctx->r1 = SIGNED(ctx->r4) < 0X40 ? 1 : 0;
    // 0x15172924: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x15172928: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1517292C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x15172930: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15172934: sub.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x15172938: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1517293C: mul.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x15172940: sub.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x15172944: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15172948: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1517294C: add.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x15172950: add.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x15172954: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15172958: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1517295C: nop

    // 0x15172960: sh          $t1, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r9;
    // 0x15172964: lh          $t2, -0x2($v0)
    ctx->r10 = MEM_H(ctx->r2, -0X2);
    // 0x15172968: lh          $t3, -0x4($v0)
    ctx->r11 = MEM_H(ctx->r2, -0X4);
    // 0x1517296C: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x15172970: nop

    // 0x15172974: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15172978: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x1517297C: sub.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x15172980: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15172984: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x15172988: sub.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x1517298C: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15172990: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15172994: add.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x15172998: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x1517299C: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151729A0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x151729A4: bne         $at, $zero, L_15172910
    if (ctx->r1 != 0) {
        // 0x151729A8: sh          $t5, -0x6($v1)
        MEM_H(-0X6, ctx->r3) = ctx->r13;
            goto L_15172910;
    }
    // 0x151729A8: sh          $t5, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r13;
    // 0x151729AC: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x151729B0: lh          $t9, 0x2($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2);
    // 0x151729B4: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x151729B8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x151729BC: lh          $t5, 0x10($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X10);
    // 0x151729C0: lwc1        $f0, 0xB8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x151729C4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151729C8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x151729CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151729D0: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x151729D4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151729D8: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x151729DC: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151729E0: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x151729E4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x151729E8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151729EC: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x151729F0: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
    // 0x151729F4: lh          $t8, 0x12($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X12);
    // 0x151729F8: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151729FC: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x15172A00: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x15172A04: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15172A08: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15172A0C: sh          $t1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r9;
    // 0x15172A10: lh          $t1, 0x14($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X14);
    // 0x15172A14: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15172A18: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x15172A1C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x15172A20: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15172A24: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x15172A28: sh          $t4, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r12;
    // 0x15172A2C: lh          $t4, 0x20($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X20);
    // 0x15172A30: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15172A34: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x15172A38: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x15172A3C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15172A40: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x15172A44: sh          $t7, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r15;
    // 0x15172A48: lh          $t7, 0x22($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X22);
    // 0x15172A4C: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15172A50: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x15172A54: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x15172A58: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15172A5C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x15172A60: sh          $t0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r8;
    // 0x15172A64: lh          $t0, 0x24($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X24);
    // 0x15172A68: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15172A6C: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x15172A70: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x15172A74: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15172A78: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x15172A7C: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
    // 0x15172A80: lh          $t3, 0x30($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X30);
    // 0x15172A84: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15172A88: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x15172A8C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x15172A90: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15172A94: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x15172A98: sh          $t6, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r14;
    // 0x15172A9C: lh          $t6, 0x32($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X32);
    // 0x15172AA0: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15172AA4: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x15172AA8: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x15172AAC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15172AB0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15172AB4: sh          $t9, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r25;
    // 0x15172AB8: lh          $t9, 0x34($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X34);
    // 0x15172ABC: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15172AC0: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x15172AC4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x15172AC8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15172ACC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15172AD0: sh          $t2, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r10;
    // 0x15172AD4: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15172AD8: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x15172ADC: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x15172AE0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15172AE4: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
    // 0x15172AE8: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15172AEC: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x15172AF0: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x15172AF4: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15172AF8: sh          $t8, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r24;
    // 0x15172AFC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x15172B00: nop

    // 0x15172B04: sh          $t1, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r9;
L_15172B08:
    // 0x15172B08: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15172B0C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15172B10: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x15172B14: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15172B18: jr          $ra
    // 0x15172B1C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    return;
    // 0x15172B1C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_1501A6CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501A6CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1501A6D0: slti        $at, $a1, 0x3
    ctx->r1 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x1501A6D4: beq         $at, $zero, L_1501A6E0
    if (ctx->r1 == 0) {
        // 0x1501A6D8: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_1501A6E0;
    }
    // 0x1501A6D8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1501A6DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_1501A6E0:
    // 0x1501A6E0: bgtz        $a2, L_1501A6EC
    if (SIGNED(ctx->r6) > 0) {
        // 0x1501A6E4: lw          $v1, 0x10($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X10);
            goto L_1501A6EC;
    }
    // 0x1501A6E4: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x1501A6E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_1501A6EC:
    // 0x1501A6EC: lw          $v0, -0x19E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19E0);
    // 0x1501A6F0: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x1501A6F4: andi        $t4, $a1, 0x3FF
    ctx->r12 = ctx->r5 & 0X3FF;
    // 0x1501A6F8: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x1501A6FC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1501A700: bne         $at, $zero, L_1501A70C
    if (ctx->r1 != 0) {
        // 0x1501A704: addiu       $t7, $a0, 0x8
        ctx->r15 = ADD32(ctx->r4, 0X8);
            goto L_1501A70C;
    }
    // 0x1501A704: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x1501A708: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_1501A70C:
    // 0x1501A70C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1501A710: lw          $v0, -0x19DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19DC);
    // 0x1501A714: andi        $t8, $a3, 0x3FF
    ctx->r24 = ctx->r7 & 0X3FF;
    // 0x1501A718: sll         $t9, $t8, 14
    ctx->r25 = S32(ctx->r24 << 14);
    // 0x1501A71C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1501A720: bne         $at, $zero, L_1501A72C
    if (ctx->r1 != 0) {
        // 0x1501A724: sll         $t5, $t4, 14
        ctx->r13 = S32(ctx->r12 << 14);
            goto L_1501A72C;
    }
    // 0x1501A724: sll         $t5, $t4, 14
    ctx->r13 = S32(ctx->r12 << 14);
    // 0x1501A728: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_1501A72C:
    // 0x1501A72C: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x1501A730: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x1501A734: andi        $t1, $v1, 0x3FF
    ctx->r9 = ctx->r3 & 0X3FF;
    // 0x1501A738: andi        $t6, $a2, 0x3FF
    ctx->r14 = ctx->r6 & 0X3FF;
    // 0x1501A73C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1501A740: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x1501A744: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x1501A748: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x1501A74C: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x1501A750: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x1501A754: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x1501A758: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x1501A75C: jr          $ra
    // 0x1501A760: nop

    return;
    return;
    // 0x1501A760: nop

;}
RECOMP_FUNC void guMtxCatL(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F00E0: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x151F00E4: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x151F00E8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151F00EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F00F0: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x151F00F4: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x151F00F8: jal         0x151EFEB8
    // 0x151F00FC: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    guMtxL2F(rdram, ctx);
        goto after_0;
    // 0x151F00FC: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    after_0:
    // 0x151F0100: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x151F0104: jal         0x151EFEB8
    // 0x151F0108: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    guMtxL2F(rdram, ctx);
        goto after_1;
    // 0x151F0108: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    after_1:
    // 0x151F010C: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x151F0110: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x151F0114: jal         0x151F01E0
    // 0x151F0118: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    guMtxCatF(rdram, ctx);
        goto after_2;
    // 0x151F0118: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x151F011C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x151F0120: jal         0x151EFD00
    // 0x151F0124: lw          $a1, 0xE0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE0);
    guMtxF2L2(rdram, ctx);
        goto after_3;
    // 0x151F0124: lw          $a1, 0xE0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE0);
    after_3:
    // 0x151F0128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F012C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x151F0130: jr          $ra
    // 0x151F0134: nop

    return;
    return;
    // 0x151F0134: nop

;}
RECOMP_FUNC void func_15135480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15135480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15135484: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15135488: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1513548C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15135490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15135494: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x15135498: bne         $a2, $at, L_151354DC
    if (ctx->r6 != ctx->r1) {
        // 0x1513549C: or          $a3, $a2, $zero
        ctx->r7 = ctx->r6 | 0;
            goto L_151354DC;
    }
    // 0x1513549C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x151354A0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151354A4: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x151354A8: bnel        $v1, $v0, L_151354C8
    if (ctx->r3 != ctx->r2) {
        // 0x151354AC: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_151354C8;
    }
    goto skip_0;
    // 0x151354AC: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x151354B0: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x151354B4: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x151354B8: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x151354BC: b           L_151354DC
    // 0x151354C0: sb          $t8, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r24;
        goto L_151354DC;
    // 0x151354C0: sb          $t8, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r24;
    // 0x151354C4: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_151354C8:
    // 0x151354C8: bnel        $t9, $v0, L_151354E0
    if (ctx->r25 != ctx->r2) {
        // 0x151354CC: lbu         $v0, 0x50($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X50);
            goto L_151354E0;
    }
    goto skip_1;
    // 0x151354CC: lbu         $v0, 0x50($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X50);
    skip_1:
    // 0x151354D0: sw          $v1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r3;
    // 0x151354D4: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x151354D8: sb          $t0, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r8;
L_151354DC:
    // 0x151354DC: lbu         $v0, 0x50($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X50);
L_151354E0:
    // 0x151354E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151354E4: beq         $v0, $at, L_151354FC
    if (ctx->r2 == ctx->r1) {
        // 0x151354E8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151354FC;
    }
    // 0x151354E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151354EC: beq         $v0, $at, L_1513550C
    if (ctx->r2 == ctx->r1) {
        // 0x151354F0: nop
    
            goto L_1513550C;
    }
    // 0x151354F0: nop

    // 0x151354F4: b           L_1513551C
    // 0x151354F8: nop

        goto L_1513551C;
    // 0x151354F8: nop

L_151354FC:
    // 0x151354FC: jal         0x151355B8
    // 0x15135500: nop

    func_151355B8(rdram, ctx);
        goto after_0;
    // 0x15135500: nop

    after_0:
    // 0x15135504: b           L_15135550
    // 0x15135508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15135550;
    // 0x15135508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1513550C:
    // 0x1513550C: jal         0x1513555C
    // 0x15135510: nop

    func_1513555C(rdram, ctx);
        goto after_1;
    // 0x15135510: nop

    after_1:
    // 0x15135514: b           L_15135550
    // 0x15135518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15135550;
    // 0x15135518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1513551C:
    // 0x1513551C: bnel        $a3, $zero, L_15135550
    if (ctx->r7 != 0) {
        // 0x15135520: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15135550;
    }
    goto skip_2;
    // 0x15135520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x15135524: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x15135528: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x1513552C: beq         $t1, $v0, L_15135544
    if (ctx->r9 == ctx->r2) {
        // 0x15135530: nop
    
            goto L_15135544;
    }
    // 0x15135530: nop

    // 0x15135534: lbu         $t2, 0x4($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X4);
    // 0x15135538: lbu         $t3, 0x18($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X18);
    // 0x1513553C: bnel        $t2, $t3, L_15135550
    if (ctx->r10 != ctx->r11) {
        // 0x15135540: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15135550;
    }
    goto skip_3;
    // 0x15135540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
L_15135544:
    // 0x15135544: jal         0x1516972C
    // 0x15135548: nop

    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x15135548: nop

    after_2:
    // 0x1513554C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15135550:
    // 0x15135550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15135554: jr          $ra
    // 0x15135558: nop

    return;
    return;
    // 0x15135558: nop

;}
RECOMP_FUNC void func_15131EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15131EE4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x15131EE8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15131EEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15131EF0: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x15131EF4: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x15131EF8: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x15131EFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15131F00: lwc1        $f6, 0x3850($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3850);
    // 0x15131F04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15131F08: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x15131F0C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x15131F10: jal         0x150ADA68
    // 0x15131F14: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x15131F14: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x15131F18: add.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x15131F1C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15131F20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15131F24: nop

    // 0x15131F28: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15131F2C: jal         0x150ADA68
    // 0x15131F30: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x15131F30: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x15131F34: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x15131F38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15131F3C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15131F40: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x15131F44: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15131F48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15131F4C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15131F50: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x15131F54: lui         $t0, 0x20
    ctx->r8 = S32(0X20 << 16);
    // 0x15131F58: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15131F5C: addiu       $t8, $zero, 0x69
    ctx->r24 = ADD32(0, 0X69);
    // 0x15131F60: addiu       $t9, $zero, 0x4417
    ctx->r25 = ADD32(0, 0X4417);
    // 0x15131F64: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15131F68: ori         $t0, $t0, 0x4
    ctx->r8 = ctx->r8 | 0X4;
    // 0x15131F6C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15131F70: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15131F74: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15131F78: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x15131F7C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15131F80: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15131F84: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15131F88: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x15131F8C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x15131F90: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x15131F94: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x15131F98: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x15131F9C: nop

    // 0x15131FA0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x15131FA4: beql        $t7, $zero, L_15131FF4
    if (ctx->r15 == 0) {
        // 0x15131FA8: mfc1        $t7, $f6
        ctx->r15 = (int32_t)ctx->f6.u32l;
            goto L_15131FF4;
    }
    goto skip_0;
    // 0x15131FA8: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x15131FAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15131FB0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15131FB4: sub.s       $f6, $f10, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15131FB8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x15131FBC: nop

    // 0x15131FC0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x15131FC4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x15131FC8: nop

    // 0x15131FCC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x15131FD0: bne         $t7, $zero, L_15131FE8
    if (ctx->r15 != 0) {
        // 0x15131FD4: nop
    
            goto L_15131FE8;
    }
    // 0x15131FD4: nop

    // 0x15131FD8: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x15131FDC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15131FE0: b           L_15132000
    // 0x15131FE4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_15132000;
    // 0x15131FE4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_15131FE8:
    // 0x15131FE8: b           L_15132000
    // 0x15131FEC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_15132000;
    // 0x15131FEC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x15131FF0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
L_15131FF4:
    // 0x15131FF4: nop

    // 0x15131FF8: bltz        $t7, L_15131FE8
    if (SIGNED(ctx->r15) < 0) {
        // 0x15131FFC: nop
    
            goto L_15131FE8;
    }
    // 0x15131FFC: nop

L_15132000:
    // 0x15132000: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x15132004: lw          $t1, 0xB0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB0);
    // 0x15132008: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x1513200C: sb          $t7, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r15;
    // 0x15132010: sb          $t8, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r24;
    // 0x15132014: sh          $t9, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r25;
    // 0x15132018: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1513201C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15132020: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15132024: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15132028: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x1513202C: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x15132030: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x15132034: sb          $t2, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r10;
    // 0x15132038: sb          $t3, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r11;
    // 0x1513203C: sb          $t4, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r12;
    // 0x15132040: sb          $t5, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r13;
    // 0x15132044: sb          $t6, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r14;
    // 0x15132048: sb          $t7, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r15;
    // 0x1513204C: sb          $t8, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r24;
    // 0x15132050: sb          $t9, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r25;
    // 0x15132054: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x15132058: addiu       $t0, $sp, 0x70
    ctx->r8 = ADD32(ctx->r29, 0X70);
    // 0x1513205C: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x15132060: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x15132064: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x15132068: addiu       $t6, $t6, 0x5480
    ctx->r14 = ADD32(ctx->r14, 0X5480);
    // 0x1513206C: addiu       $t5, $sp, 0x7C
    ctx->r13 = ADD32(ctx->r29, 0X7C);
    // 0x15132070: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x15132074: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x15132078: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1513207C: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x15132080: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x15132084: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x15132088: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1513208C: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x15132090: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x15132094: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x15132098: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x1513209C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151320A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151320A4: sh          $t3, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r11;
    // 0x151320A8: sh          $t2, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r10;
    // 0x151320AC: sh          $t0, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r8;
    // 0x151320B0: jal         0x150ADA20
    // 0x151320B4: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151320B4: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x151320B8: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x151320BC: beq         $t1, $zero, L_151320CC
    if (ctx->r9 == 0) {
        // 0x151320C0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_151320CC;
    }
    // 0x151320C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151320C4: b           L_151320CC
    // 0x151320C8: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_151320CC;
    // 0x151320C8: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_151320CC:
    // 0x151320CC: jal         0x150ADA20
    // 0x151320D0: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151320D0: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_3:
    // 0x151320D4: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x151320D8: beq         $t4, $zero, L_151320E8
    if (ctx->r12 == 0) {
        // 0x151320DC: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_151320E8;
    }
    // 0x151320DC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x151320E0: b           L_151320EC
    // 0x151320E4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_151320EC;
    // 0x151320E4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_151320E8:
    // 0x151320E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151320EC:
    // 0x151320EC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x151320F0: ori         $at, $at, 0xC000
    ctx->r1 = ctx->r1 | 0XC000;
    // 0x151320F4: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x151320F8: or          $t7, $t8, $v1
    ctx->r15 = ctx->r24 | ctx->r3;
    // 0x151320FC: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x15132100: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x15132104: addiu       $t9, $zero, 0x27
    ctx->r25 = ADD32(0, 0X27);
    // 0x15132108: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x1513210C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x15132110: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x15132114: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x15132118: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    // 0x1513211C: sb          $t5, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r13;
    // 0x15132120: sb          $t6, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r14;
    // 0x15132124: sb          $t9, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r25;
    // 0x15132128: sb          $t3, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r11;
    // 0x1513212C: sb          $t2, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r10;
    // 0x15132130: sb          $zero, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = 0;
    // 0x15132134: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x15132138: sb          $t0, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = ctx->r8;
    // 0x1513213C: addiu       $t4, $t4, 0x5480
    ctx->r12 = ADD32(ctx->r12, 0X5480);
    // 0x15132140: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x15132144: addiu       $t1, $sp, 0x88
    ctx->r9 = ADD32(ctx->r29, 0X88);
    // 0x15132148: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x1513214C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x15132150: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x15132154: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x15132158: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1513215C: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x15132160: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x15132164: lbu         $t9, 0xBB($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XBB);
    // 0x15132168: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x1513216C: sh          $t6, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r14;
    // 0x15132170: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x15132174: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15132178: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1513217C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x15132180: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x15132184: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x15132188: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x1513218C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15132190: jal         0x15130280
    // 0x15132194: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15130280(rdram, ctx);
        goto after_4;
    // 0x15132194: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_4:
    // 0x15132198: beq         $v0, $zero, L_151321B8
    if (ctx->r2 == 0) {
        // 0x1513219C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151321B8;
    }
    // 0x1513219C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151321A0: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x151321A4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151321A8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x151321AC: jal         0x10022EC0
    // 0x151321B0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x151321B0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_5:
    // 0x151321B4: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_151321B8:
    // 0x151321B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151321BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151321C0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x151321C4: jr          $ra
    // 0x151321C8: nop

    return;
    return;
    // 0x151321C8: nop

;}
RECOMP_FUNC void func_1519C910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519C910: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x1519C914: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x1519C918: lw          $t6, 0x158($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X158);
    // 0x1519C91C: lhu         $a1, 0x84($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X84);
    // 0x1519C920: beql        $t6, $a1, L_1519C940
    if (ctx->r14 == ctx->r5) {
        // 0x1519C924: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1519C940;
    }
    goto skip_0;
    // 0x1519C924: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x1519C928: lw          $t7, 0x15C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X15C);
    // 0x1519C92C: beql        $t7, $a1, L_1519C940
    if (ctx->r15 == ctx->r5) {
        // 0x1519C930: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1519C940;
    }
    goto skip_1;
    // 0x1519C930: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x1519C934: jr          $ra
    // 0x1519C938: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1519C938: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1519C93C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519C940:
    // 0x1519C940: jr          $ra
    // 0x1519C944: nop

    return;
    return;
    // 0x1519C944: nop

;}
RECOMP_FUNC void func_1518C850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518C850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1518C854: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1518C858: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1518C85C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1518C860: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518C864: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x1518C868: bne         $a2, $at, L_1518C8B4
    if (ctx->r6 != ctx->r1) {
        // 0x1518C86C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_1518C8B4;
    }
    // 0x1518C86C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x1518C870: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x1518C874: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x1518C878: bnel        $v0, $v1, L_1518C898
    if (ctx->r2 != ctx->r3) {
        // 0x1518C87C: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_1518C898;
    }
    goto skip_0;
    // 0x1518C87C: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x1518C880: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x1518C884: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    // 0x1518C888: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x1518C88C: b           L_1518C8E4
    // 0x1518C890: sb          $t8, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r24;
        goto L_1518C8E4;
    // 0x1518C890: sb          $t8, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r24;
    // 0x1518C894: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_1518C898:
    // 0x1518C898: bnel        $t9, $v1, L_1518C8E8
    if (ctx->r25 != ctx->r3) {
        // 0x1518C89C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1518C8E8;
    }
    goto skip_1;
    // 0x1518C89C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x1518C8A0: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    // 0x1518C8A4: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x1518C8A8: sb          $t0, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r8;
    // 0x1518C8AC: b           L_1518C8E8
    // 0x1518C8B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1518C8E8;
    // 0x1518C8B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1518C8B4:
    // 0x1518C8B4: bnel        $v0, $zero, L_1518C8E8
    if (ctx->r2 != 0) {
        // 0x1518C8B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1518C8E8;
    }
    goto skip_2;
    // 0x1518C8B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x1518C8BC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x1518C8C0: lw          $t1, 0x24($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X24);
    // 0x1518C8C4: beq         $v0, $t1, L_1518C8DC
    if (ctx->r2 == ctx->r9) {
        // 0x1518C8C8: nop
    
            goto L_1518C8DC;
    }
    // 0x1518C8C8: nop

    // 0x1518C8CC: lbu         $t2, 0x28($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X28);
    // 0x1518C8D0: lbu         $t3, 0x4($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X4);
    // 0x1518C8D4: bnel        $t2, $t3, L_1518C8E8
    if (ctx->r10 != ctx->r11) {
        // 0x1518C8D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1518C8E8;
    }
    goto skip_3;
    // 0x1518C8D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
L_1518C8DC:
    // 0x1518C8DC: jal         0x1516972C
    // 0x1518C8E0: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x1518C8E0: nop

    after_0:
L_1518C8E4:
    // 0x1518C8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1518C8E8:
    // 0x1518C8E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1518C8EC: jr          $ra
    // 0x1518C8F0: nop

    return;
    return;
    // 0x1518C8F0: nop

;}
RECOMP_FUNC void func_15147DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15147DA0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15147DA4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15147DA8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x15147DAC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x15147DB0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x15147DB4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15147DB8: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    // 0x15147DBC: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x15147DC0: lbu         $t1, 0x77($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X77);
    // 0x15147DC4: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x15147DC8: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x15147DCC: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x15147DD0: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x15147DD4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15147DD8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15147DDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15147DE0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x15147DE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15147DE8: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x15147DEC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x15147DF0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x15147DF4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15147DF8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15147DFC: jal         0x15147A80
    // 0x15147E00: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    func_15147A80(rdram, ctx);
        goto after_0;
    // 0x15147E00: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    after_0:
    // 0x15147E04: bne         $v0, $zero, L_15147E14
    if (ctx->r2 != 0) {
        // 0x15147E08: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15147E14;
    }
    // 0x15147E08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15147E0C: b           L_15147EA8
    // 0x15147E10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15147EA8;
    // 0x15147E10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15147E14:
    // 0x15147E14: lw          $a0, 0x98($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X98);
    // 0x15147E18: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x15147E1C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x15147E20: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x15147E24: jal         0x10022EC0
    // 0x15147E28: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15147E28: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_1:
    // 0x15147E2C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x15147E30: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x15147E34: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x15147E38: sb          $t3, 0x20($a0)
    MEM_B(0X20, ctx->r4) = ctx->r11;
    // 0x15147E3C: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x15147E40: sb          $t4, 0x21($a0)
    MEM_B(0X21, ctx->r4) = ctx->r12;
    // 0x15147E44: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x15147E48: sb          $t5, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r13;
    // 0x15147E4C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x15147E50: sb          $t6, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r14;
    // 0x15147E54: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x15147E58: sb          $t7, 0x24($a0)
    MEM_B(0X24, ctx->r4) = ctx->r15;
    // 0x15147E5C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x15147E60: sb          $t8, 0x25($a0)
    MEM_B(0X25, ctx->r4) = ctx->r24;
    // 0x15147E64: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x15147E68: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x15147E6C: sw          $at, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r1;
    // 0x15147E70: lw          $t1, 0x4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X4);
    // 0x15147E74: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x15147E78: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x15147E7C: sw          $at, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r1;
    // 0x15147E80: lw          $t1, 0xC($t9)
    ctx->r9 = MEM_W(ctx->r25, 0XC);
    // 0x15147E84: sw          $t1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r9;
    // 0x15147E88: lw          $at, 0x10($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X10);
    // 0x15147E8C: sw          $at, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r1;
    // 0x15147E90: lw          $t1, 0x14($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X14);
    // 0x15147E94: sw          $t1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r9;
    // 0x15147E98: lw          $at, 0x18($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X18);
    // 0x15147E9C: sw          $at, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r1;
    // 0x15147EA0: lw          $t1, 0x1C($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X1C);
    // 0x15147EA4: sw          $t1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r9;
L_15147EA8:
    // 0x15147EA8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15147EAC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15147EB0: jr          $ra
    // 0x15147EB4: nop

    return;
    return;
    // 0x15147EB4: nop

;}
RECOMP_FUNC void func_150762B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150762B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150762B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150762B8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150762BC: jal         0x1000CBA8
    // 0x150762C0: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_1000CBA8(rdram, ctx);
        goto after_0;
    // 0x150762C0: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
    // 0x150762C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150762C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150762CC: jr          $ra
    // 0x150762D0: nop

    return;
    return;
    // 0x150762D0: nop

;}
RECOMP_FUNC void func_1517AD00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517AD00: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x1517AD04: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x1517AD08: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x1517AD0C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x1517AD10: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x1517AD14: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1517AD18: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x1517AD1C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x1517AD20: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x1517AD24: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x1517AD28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1517AD2C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1517AD30: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x1517AD34: subu        $t6, $t6, $s4
    ctx->r14 = SUB32(ctx->r14, ctx->r20);
    // 0x1517AD38: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1517AD3C: addu        $t6, $t6, $s4
    ctx->r14 = ADD32(ctx->r14, ctx->r20);
    // 0x1517AD40: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1517AD44: subu        $t6, $t6, $s4
    ctx->r14 = SUB32(ctx->r14, ctx->r20);
    // 0x1517AD48: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1517AD4C: subu        $t6, $t6, $s4
    ctx->r14 = SUB32(ctx->r14, ctx->r20);
    // 0x1517AD50: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1517AD54: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1517AD58: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1517AD5C: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    // 0x1517AD60: lbu         $s3, 0x4($s2)
    ctx->r19 = MEM_BU(ctx->r18, 0X4);
    // 0x1517AD64: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1517AD68: jal         0x150849A0
    // 0x1517AD6C: sw          $a3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r7;
    func_150849A0(rdram, ctx);
        goto after_0;
    // 0x1517AD6C: sw          $a3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r7;
    after_0:
    // 0x1517AD70: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1517AD74: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x1517AD78: addiu       $a1, $a1, -0x3D30
    ctx->r5 = ADD32(ctx->r5, -0X3D30);
    // 0x1517AD7C: lw          $a3, 0x98($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X98);
    // 0x1517AD80: lbu         $a0, 0x1C8($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X1C8);
    // 0x1517AD84: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x1517AD88: addiu       $v1, $v1, 0x7230
    ctx->r3 = ADD32(ctx->r3, 0X7230);
    // 0x1517AD8C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1517AD90:
    // 0x1517AD90: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x1517AD94: bnel        $v0, $t8, L_1517ADAC
    if (ctx->r2 != ctx->r24) {
        // 0x1517AD98: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1517ADAC;
    }
    goto skip_0;
    // 0x1517AD98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x1517AD9C: or          $s6, $v1, $zero
    ctx->r22 = ctx->r3 | 0;
    // 0x1517ADA0: b           L_1517ADB8
    // 0x1517ADA4: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
        goto L_1517ADB8;
    // 0x1517ADA4: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x1517ADA8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1517ADAC:
    // 0x1517ADAC: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x1517ADB0: bne         $at, $zero, L_1517AD90
    if (ctx->r1 != 0) {
        // 0x1517ADB4: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_1517AD90;
    }
    // 0x1517ADB4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_1517ADB8:
    // 0x1517ADB8: bne         $s6, $zero, L_1517ADC8
    if (ctx->r22 != 0) {
        // 0x1517ADBC: nop
    
            goto L_1517ADC8;
    }
    // 0x1517ADBC: nop

    // 0x1517ADC0: b           L_1517B4CC
    // 0x1517ADC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_1517B4CC;
    // 0x1517ADC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1517ADC8:
    // 0x1517ADC8: beq         $a0, $zero, L_1517AEE0
    if (ctx->r4 == 0) {
        // 0x1517ADCC: lw          $s1, 0x260($s2)
        ctx->r17 = MEM_W(ctx->r18, 0X260);
            goto L_1517AEE0;
    }
    // 0x1517ADCC: lw          $s1, 0x260($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X260);
    // 0x1517ADD0: sll         $t9, $s4, 2
    ctx->r25 = S32(ctx->r20 << 2);
    // 0x1517ADD4: subu        $t9, $t9, $s4
    ctx->r25 = SUB32(ctx->r25, ctx->r20);
    // 0x1517ADD8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1517ADDC: addu        $t9, $t9, $s4
    ctx->r25 = ADD32(ctx->r25, ctx->r20);
    // 0x1517ADE0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1517ADE4: subu        $t9, $t9, $s4
    ctx->r25 = SUB32(ctx->r25, ctx->r20);
    // 0x1517ADE8: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1517ADEC: lbu         $t2, -0x1640($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1640);
    // 0x1517ADF0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1517ADF4: subu        $t9, $t9, $s4
    ctx->r25 = SUB32(ctx->r25, ctx->r20);
    // 0x1517ADF8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1517ADFC: addu        $t1, $a1, $t9
    ctx->r9 = ADD32(ctx->r5, ctx->r25);
    // 0x1517AE00: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x1517AE04: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x1517AE08: lw          $t5, 0x28C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X28C);
    // 0x1517AE0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1517AE10: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1517AE14: beq         $t5, $zero, L_1517AE30
    if (ctx->r13 == 0) {
        // 0x1517AE18: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_1517AE30;
    }
    // 0x1517AE18: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1517AE1C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1517AE20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1517AE24: lw          $t7, 0x19A0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X19A0);
    // 0x1517AE28: bnel        $t7, $zero, L_1517AEE4
    if (ctx->r15 != 0) {
        // 0x1517AE2C: sll         $t1, $s3, 2
        ctx->r9 = S32(ctx->r19 << 2);
            goto L_1517AEE4;
    }
    goto skip_1;
    // 0x1517AE2C: sll         $t1, $s3, 2
    ctx->r9 = S32(ctx->r19 << 2);
    skip_1:
L_1517AE30:
    // 0x1517AE30: lbu         $t0, 0x9($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X9);
    // 0x1517AE34: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1517AE38: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x1517AE3C: bne         $a3, $t0, L_1517AE9C
    if (ctx->r7 != ctx->r8) {
        // 0x1517AE40: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_1517AE9C;
    }
    // 0x1517AE40: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x1517AE44: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1517AE48: lbu         $t8, -0x1540($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1540);
    // 0x1517AE4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1517AE50: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1517AE54: bne         $t8, $zero, L_1517AE80
    if (ctx->r24 != 0) {
        // 0x1517AE58: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_1517AE80;
    }
    // 0x1517AE58: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1517AE5C: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x1517AE60: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x1517AE64: lwc1        $f16, 0x0($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1517AE68: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1517AE6C: nop

    // 0x1517AE70: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1517AE74: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1517AE78: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x1517AE7C: swc1        $f18, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f18.u32l;
L_1517AE80:
    // 0x1517AE80: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1517AE84: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x1517AE88: nop

    // 0x1517AE8C: bc1fl       L_1517AED8
    if (!c1cs) {
        // 0x1517AE90: sb          $t2, 0xA($s1)
        MEM_B(0XA, ctx->r17) = ctx->r10;
            goto L_1517AED8;
    }
    goto skip_2;
    // 0x1517AE90: sb          $t2, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r10;
    skip_2:
    // 0x1517AE94: b           L_1517AED4
    // 0x1517AE98: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
        goto L_1517AED4;
    // 0x1517AE98: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
L_1517AE9C:
    // 0x1517AE9C: beql        $v0, $at, L_1517AEAC
    if (ctx->r2 == ctx->r1) {
        // 0x1517AEA0: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_1517AEAC;
    }
    goto skip_3;
    // 0x1517AEA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_3:
    // 0x1517AEA4: sb          $t0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r8;
    // 0x1517AEA8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_1517AEAC:
    // 0x1517AEAC: sb          $a3, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r7;
    // 0x1517AEB0: bgtz        $s5, L_1517AEBC
    if (SIGNED(ctx->r21) > 0) {
        // 0x1517AEB4: swc1        $f4, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
            goto L_1517AEBC;
    }
    // 0x1517AEB4: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    // 0x1517AEB8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_1517AEBC:
    // 0x1517AEBC: mtc1        $s5, $f16
    ctx->f16.u32l = ctx->r21;
    // 0x1517AEC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1517AEC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1517AEC8: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1517AECC: div.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1517AED0: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
L_1517AED4:
    // 0x1517AED4: sb          $t2, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r10;
L_1517AED8:
    // 0x1517AED8: b           L_1517B4CC
    // 0x1517AEDC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_1517B4CC;
    // 0x1517AEDC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1517AEE0:
    // 0x1517AEE0: sll         $t1, $s3, 2
    ctx->r9 = S32(ctx->r19 << 2);
L_1517AEE4:
    // 0x1517AEE4: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1517AEE8: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x1517AEEC: lw          $t4, 0x19A0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X19A0);
    // 0x1517AEF0: sll         $t5, $s4, 2
    ctx->r13 = S32(ctx->r20 << 2);
    // 0x1517AEF4: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x1517AEF8: bne         $t4, $zero, L_1517AF08
    if (ctx->r12 != 0) {
        // 0x1517AEFC: subu        $t5, $t5, $s4
        ctx->r13 = SUB32(ctx->r13, ctx->r20);
            goto L_1517AF08;
    }
    // 0x1517AEFC: subu        $t5, $t5, $s4
    ctx->r13 = SUB32(ctx->r13, ctx->r20);
    // 0x1517AF00: b           L_1517B4CC
    // 0x1517AF04: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_1517B4CC;
    // 0x1517AF04: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1517AF08:
    // 0x1517AF08: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1517AF0C: addu        $t5, $t5, $s4
    ctx->r13 = ADD32(ctx->r13, ctx->r20);
    // 0x1517AF10: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1517AF14: subu        $t5, $t5, $s4
    ctx->r13 = SUB32(ctx->r13, ctx->r20);
    // 0x1517AF18: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1517AF1C: subu        $t5, $t5, $s4
    ctx->r13 = SUB32(ctx->r13, ctx->r20);
    // 0x1517AF20: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1517AF24: lbu         $t9, -0x1640($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1640);
    // 0x1517AF28: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1517AF2C: addu        $t6, $a1, $t5
    ctx->r14 = ADD32(ctx->r5, ctx->r13);
    // 0x1517AF30: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x1517AF34: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1517AF38: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x1517AF3C: addu        $t1, $t8, $t2
    ctx->r9 = ADD32(ctx->r24, ctx->r10);
    // 0x1517AF40: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x1517AF44: lw          $t3, 0x28C($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X28C);
    // 0x1517AF48: bnel        $t3, $zero, L_1517AF5C
    if (ctx->r11 != 0) {
        // 0x1517AF4C: lbu         $t0, 0x9($s1)
        ctx->r8 = MEM_BU(ctx->r17, 0X9);
            goto L_1517AF5C;
    }
    goto skip_4;
    // 0x1517AF4C: lbu         $t0, 0x9($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X9);
    skip_4:
    // 0x1517AF50: b           L_1517B4CC
    // 0x1517AF54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_1517B4CC;
    // 0x1517AF54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x1517AF58: lbu         $t0, 0x9($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X9);
L_1517AF5C:
    // 0x1517AF5C: bne         $a3, $t0, L_1517AF7C
    if (ctx->r7 != ctx->r8) {
        // 0x1517AF60: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_1517AF7C;
    }
    // 0x1517AF60: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x1517AF64: lbu         $t4, 0xA($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0XA);
    // 0x1517AF68: bne         $t4, $zero, L_1517AF7C
    if (ctx->r12 != 0) {
        // 0x1517AF6C: nop
    
            goto L_1517AF7C;
    }
    // 0x1517AF6C: nop

    // 0x1517AF70: sb          $t0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r8;
    // 0x1517AF74: b           L_1517B4CC
    // 0x1517AF78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1517B4CC;
    // 0x1517AF78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1517AF7C:
    // 0x1517AF7C: beq         $a3, $v0, L_1517AFC4
    if (ctx->r7 == ctx->r2) {
        // 0x1517AF80: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_1517AFC4;
    }
    // 0x1517AF80: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1517AF84: beql        $v0, $at, L_1517AF94
    if (ctx->r2 == ctx->r1) {
        // 0x1517AF88: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_1517AF94;
    }
    goto skip_5;
    // 0x1517AF88: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_5:
    // 0x1517AF8C: sb          $t0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r8;
    // 0x1517AF90: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_1517AF94:
    // 0x1517AF94: sb          $a3, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r7;
    // 0x1517AF98: bgtz        $s5, L_1517AFA4
    if (SIGNED(ctx->r21) > 0) {
        // 0x1517AF9C: swc1        $f6, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
            goto L_1517AFA4;
    }
    // 0x1517AF9C: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    // 0x1517AFA0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_1517AFA4:
    // 0x1517AFA4: mtc1        $s5, $f16
    ctx->f16.u32l = ctx->r21;
    // 0x1517AFA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1517AFAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1517AFB0: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1517AFB4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x1517AFB8: sb          $t5, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r13;
    // 0x1517AFBC: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1517AFC0: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
L_1517AFC4:
    // 0x1517AFC4: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x1517AFC8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1517AFCC: addiu       $t9, $t9, -0x2BA0
    ctx->r25 = ADD32(ctx->r25, -0X2BA0);
    // 0x1517AFD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1517AFD4: addu        $s5, $t7, $t9
    ctx->r21 = ADD32(ctx->r15, ctx->r25);
    // 0x1517AFD8: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x1517AFDC: bne         $t8, $zero, L_1517B128
    if (ctx->r24 != 0) {
        // 0x1517AFE0: nop
    
            goto L_1517B128;
    }
    // 0x1517AFE0: nop

    // 0x1517AFE4: lbu         $t2, 0x0($s6)
    ctx->r10 = MEM_BU(ctx->r22, 0X0);
    // 0x1517AFE8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1517AFEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1517AFF0: sll         $t1, $t2, 1
    ctx->r9 = S32(ctx->r10 << 1);
    // 0x1517AFF4: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x1517AFF8: lhu         $a0, 0x4310($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X4310);
    // 0x1517AFFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1517B000: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1517B004: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x1517B008: jal         0x10003C40
    // 0x1517B00C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x1517B00C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_1:
    // 0x1517B010: bne         $v0, $zero, L_1517B020
    if (ctx->r2 != 0) {
        // 0x1517B014: sw          $v0, 0x0($s5)
        MEM_W(0X0, ctx->r21) = ctx->r2;
            goto L_1517B020;
    }
    // 0x1517B014: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x1517B018: b           L_1517B4CC
    // 0x1517B01C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_1517B4CC;
    // 0x1517B01C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1517B020:
    // 0x1517B020: lbu         $t4, 0x0($s6)
    ctx->r12 = MEM_BU(ctx->r22, 0X0);
    // 0x1517B024: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1517B028: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x1517B02C: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x1517B030: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x1517B034: lhu         $v0, 0x4310($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4310);
    // 0x1517B038: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1517B03C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1517B040: blez        $v0, L_1517B0CC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1517B044: nop
    
            goto L_1517B0CC;
    }
    // 0x1517B044: nop

    // 0x1517B048: lbu         $a0, 0x1($s6)
    ctx->r4 = MEM_BU(ctx->r22, 0X1);
L_1517B04C:
    // 0x1517B04C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1517B050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1517B054: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x1517B058: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1517B05C: jal         0x10003C40
    // 0x1517B060: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x1517B060: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x1517B064: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x1517B068: addu        $t9, $t7, $s2
    ctx->r25 = ADD32(ctx->r15, ctx->r18);
    // 0x1517B06C: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x1517B070: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x1517B074: addu        $t2, $t8, $s2
    ctx->r10 = ADD32(ctx->r24, ctx->r18);
    // 0x1517B078: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x1517B07C: beql        $a2, $zero, L_1517B0A4
    if (ctx->r6 == 0) {
        // 0x1517B080: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_1517B0A4;
    }
    goto skip_6;
    // 0x1517B080: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_6:
    // 0x1517B084: lbu         $a1, 0x1($s6)
    ctx->r5 = MEM_BU(ctx->r22, 0X1);
    // 0x1517B088: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1517B08C: sll         $t1, $a1, 3
    ctx->r9 = S32(ctx->r5 << 3);
    // 0x1517B090: jal         0x100226F0
    // 0x1517B094: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    bzero_recomp(rdram, ctx);
        goto after_3;
    // 0x1517B094: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_3:
    // 0x1517B098: b           L_1517B0A8
    // 0x1517B09C: lbu         $t3, 0x0($s6)
    ctx->r11 = MEM_BU(ctx->r22, 0X0);
        goto L_1517B0A8;
    // 0x1517B09C: lbu         $t3, 0x0($s6)
    ctx->r11 = MEM_BU(ctx->r22, 0X0);
    // 0x1517B0A0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_1517B0A4:
    // 0x1517B0A4: lbu         $t3, 0x0($s6)
    ctx->r11 = MEM_BU(ctx->r22, 0X0);
L_1517B0A8:
    // 0x1517B0A8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1517B0AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1517B0B0: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x1517B0B4: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x1517B0B8: lhu         $v0, 0x4310($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4310);
    // 0x1517B0BC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x1517B0C0: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1517B0C4: bnel        $at, $zero, L_1517B04C
    if (ctx->r1 != 0) {
        // 0x1517B0C8: lbu         $a0, 0x1($s6)
        ctx->r4 = MEM_BU(ctx->r22, 0X1);
            goto L_1517B04C;
    }
    goto skip_7;
    // 0x1517B0C8: lbu         $a0, 0x1($s6)
    ctx->r4 = MEM_BU(ctx->r22, 0X1);
    skip_7:
L_1517B0CC:
    // 0x1517B0CC: beq         $s3, $zero, L_1517B128
    if (ctx->r19 == 0) {
        // 0x1517B0D0: nop
    
            goto L_1517B128;
    }
    // 0x1517B0D0: nop

    // 0x1517B0D4: blez        $v0, L_1517B120
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1517B0D8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_1517B120;
    }
    // 0x1517B0D8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1517B0DC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_1517B0E0:
    // 0x1517B0E0: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x1517B0E4: addu        $t6, $t5, $s2
    ctx->r14 = ADD32(ctx->r13, ctx->r18);
    // 0x1517B0E8: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x1517B0EC: beql        $a2, $zero, L_1517B114
    if (ctx->r6 == 0) {
        // 0x1517B0F0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1517B114;
    }
    goto skip_8;
    // 0x1517B0F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_8:
    // 0x1517B0F4: jal         0x10004074
    // 0x1517B0F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_10004074(rdram, ctx);
        goto after_4;
    // 0x1517B0F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_4:
    // 0x1517B0FC: lbu         $t7, 0x0($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X0);
    // 0x1517B100: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1517B104: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x1517B108: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x1517B10C: lhu         $v0, 0x4310($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4310);
    // 0x1517B110: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1517B114:
    // 0x1517B114: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1517B118: bne         $at, $zero, L_1517B0E0
    if (ctx->r1 != 0) {
        // 0x1517B11C: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_1517B0E0;
    }
    // 0x1517B11C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_1517B120:
    // 0x1517B120: b           L_1517B4CC
    // 0x1517B124: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_1517B4CC;
    // 0x1517B124: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1517B128:
    // 0x1517B128: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1517B12C: lbu         $t8, -0x1540($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1540);
    // 0x1517B130: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1517B134: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1517B138: bne         $t8, $zero, L_1517B164
    if (ctx->r24 != 0) {
        // 0x1517B13C: lui         $t2, 0x800C
        ctx->r10 = S32(0X800C << 16);
            goto L_1517B164;
    }
    // 0x1517B13C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1517B140: lw          $t2, -0x161C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X161C);
    // 0x1517B144: lwc1        $f18, 0x4($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X4);
    // 0x1517B148: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1517B14C: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x1517B150: nop

    // 0x1517B154: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1517B158: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x1517B15C: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1517B160: swc1        $f10, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f10.u32l;
L_1517B164:
    // 0x1517B164: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1517B168: lwc1        $f18, 0x0($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1517B16C: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x1517B170: nop

    // 0x1517B174: bc1f        L_1517B188
    if (!c1cs) {
        // 0x1517B178: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1517B188;
    }
    // 0x1517B178: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1517B17C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1517B180: nop

    // 0x1517B184: swc1        $f16, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f16.u32l;
L_1517B188:
    // 0x1517B188: lbu         $t3, -0x1640($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1640);
    // 0x1517B18C: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x1517B190: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1517B194: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x1517B198: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x1517B19C: lw          $t6, 0x28C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X28C);
    // 0x1517B1A0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x1517B1A4: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
    // 0x1517B1A8: lbu         $t7, 0x0($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X0);
    // 0x1517B1AC: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x1517B1B0: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x1517B1B4: lhu         $t8, 0x4310($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X4310);
    // 0x1517B1B8: blez        $t8, L_1517B494
    if (SIGNED(ctx->r24) <= 0) {
        // 0x1517B1BC: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_1517B494;
    }
    // 0x1517B1BC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1517B1C0: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
L_1517B1C4:
    // 0x1517B1C4: lbu         $t0, 0x9($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X9);
    // 0x1517B1C8: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x1517B1CC: addu        $t3, $t2, $s2
    ctx->r11 = ADD32(ctx->r10, ctx->r18);
    // 0x1517B1D0: lw          $v1, 0x0($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X0);
    // 0x1517B1D4: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x1517B1D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x1517B1DC: addu        $t4, $v1, $t1
    ctx->r12 = ADD32(ctx->r3, ctx->r9);
    // 0x1517B1E0: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1517B1E4: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x1517B1E8: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x1517B1EC: bnel        $t5, $zero, L_1517B24C
    if (ctx->r13 != 0) {
        // 0x1517B1F0: lbu         $v0, 0x8($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0X8);
            goto L_1517B24C;
    }
    goto skip_9;
    // 0x1517B1F0: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    skip_9:
    // 0x1517B1F4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x1517B1F8: jal         0x1502B5C8
    // 0x1517B1FC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_1502B5C8(rdram, ctx);
        goto after_5;
    // 0x1517B1FC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_5:
    // 0x1517B200: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x1517B204: lbu         $t8, 0x9($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X9);
    // 0x1517B208: addu        $t7, $t6, $s2
    ctx->r15 = ADD32(ctx->r14, ctx->r18);
    // 0x1517B20C: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x1517B210: sll         $t2, $t8, 3
    ctx->r10 = S32(ctx->r24 << 3);
    // 0x1517B214: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x1517B218: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x1517B21C: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x1517B220: lbu         $t5, 0x9($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X9);
    // 0x1517B224: addu        $t4, $t1, $s2
    ctx->r12 = ADD32(ctx->r9, ctx->r18);
    // 0x1517B228: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x1517B22C: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x1517B230: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x1517B234: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1517B238: bnel        $t8, $zero, L_1517B24C
    if (ctx->r24 != 0) {
        // 0x1517B23C: lbu         $v0, 0x8($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0X8);
            goto L_1517B24C;
    }
    goto skip_10;
    // 0x1517B23C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    skip_10:
    // 0x1517B240: b           L_1517B4CC
    // 0x1517B244: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_1517B4CC;
    // 0x1517B244: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x1517B248: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
L_1517B24C:
    // 0x1517B24C: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x1517B250: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x1517B254: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x1517B258: addu        $t2, $v1, $t9
    ctx->r10 = ADD32(ctx->r3, ctx->r25);
    // 0x1517B25C: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x1517B260: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x1517B264: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x1517B268: bnel        $t3, $zero, L_1517B2F8
    if (ctx->r11 != 0) {
        // 0x1517B26C: lbu         $t7, 0x9($s1)
        ctx->r15 = MEM_BU(ctx->r17, 0X9);
            goto L_1517B2F8;
    }
    goto skip_11;
    // 0x1517B26C: lbu         $t7, 0x9($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X9);
    skip_11:
    // 0x1517B270: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x1517B274: jal         0x1502B5C8
    // 0x1517B278: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_1502B5C8(rdram, ctx);
        goto after_6;
    // 0x1517B278: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_6:
    // 0x1517B27C: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x1517B280: lbu         $t6, 0x8($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X8);
    // 0x1517B284: addu        $t4, $t1, $s2
    ctx->r12 = ADD32(ctx->r9, ctx->r18);
    // 0x1517B288: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1517B28C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x1517B290: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x1517B294: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    // 0x1517B298: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x1517B29C: lbu         $t3, 0x8($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X8);
    // 0x1517B2A0: addu        $t2, $t9, $s2
    ctx->r10 = ADD32(ctx->r25, ctx->r18);
    // 0x1517B2A4: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x1517B2A8: sll         $t1, $t3, 3
    ctx->r9 = S32(ctx->r11 << 3);
    // 0x1517B2AC: addu        $t4, $v1, $t1
    ctx->r12 = ADD32(ctx->r3, ctx->r9);
    // 0x1517B2B0: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x1517B2B4: bnel        $t6, $zero, L_1517B2F8
    if (ctx->r14 != 0) {
        // 0x1517B2B8: lbu         $t7, 0x9($s1)
        ctx->r15 = MEM_BU(ctx->r17, 0X9);
            goto L_1517B2F8;
    }
    goto skip_12;
    // 0x1517B2B8: lbu         $t7, 0x9($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X9);
    skip_12:
    // 0x1517B2BC: lbu         $t5, 0x9($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X9);
    // 0x1517B2C0: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x1517B2C4: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x1517B2C8: jal         0x10004074
    // 0x1517B2CC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    func_10004074(rdram, ctx);
        goto after_7;
    // 0x1517B2CC: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    after_7:
    // 0x1517B2D0: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x1517B2D4: lbu         $t1, 0x9($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X9);
    // 0x1517B2D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x1517B2DC: addu        $t2, $t9, $s2
    ctx->r10 = ADD32(ctx->r25, ctx->r18);
    // 0x1517B2E0: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x1517B2E4: sll         $t4, $t1, 3
    ctx->r12 = S32(ctx->r9 << 3);
    // 0x1517B2E8: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x1517B2EC: b           L_1517B4CC
    // 0x1517B2F0: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
        goto L_1517B4CC;
    // 0x1517B2F0: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x1517B2F4: lbu         $t7, 0x9($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X9);
L_1517B2F8:
    // 0x1517B2F8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x1517B2FC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x1517B300: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x1517B304: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x1517B308: sb          $t5, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r13;
    // 0x1517B30C: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x1517B310: lbu         $t6, 0x8($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X8);
    // 0x1517B314: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1517B318: addu        $t3, $t1, $s2
    ctx->r11 = ADD32(ctx->r9, ctx->r18);
    // 0x1517B31C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1517B320: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x1517B324: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x1517B328: sb          $t2, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r10;
    // 0x1517B32C: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x1517B330: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x1517B334: lbu         $t1, 0x8($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X8);
    // 0x1517B338: addu        $t9, $t5, $s2
    ctx->r25 = ADD32(ctx->r13, ctx->r18);
    // 0x1517B33C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1517B340: lbu         $t4, 0x9($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X9);
    // 0x1517B344: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x1517B348: lw          $t5, 0x4020($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4020);
    // 0x1517B34C: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x1517B350: sll         $t3, $t1, 3
    ctx->r11 = S32(ctx->r9 << 3);
    // 0x1517B354: sll         $t7, $t4, 3
    ctx->r15 = S32(ctx->r12 << 3);
    // 0x1517B358: sll         $t4, $s3, 1
    ctx->r12 = S32(ctx->r19 << 1);
    // 0x1517B35C: addu        $t9, $t5, $s2
    ctx->r25 = ADD32(ctx->r13, ctx->r18);
    // 0x1517B360: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x1517B364: addu        $a1, $s6, $t4
    ctx->r5 = ADD32(ctx->r22, ctx->r12);
    // 0x1517B368: addu        $t6, $v1, $t3
    ctx->r14 = ADD32(ctx->r3, ctx->r11);
    // 0x1517B36C: lhu         $a2, 0x2($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X2);
    // 0x1517B370: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x1517B374: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x1517B378: addu        $t2, $v1, $t7
    ctx->r10 = ADD32(ctx->r3, ctx->r15);
    // 0x1517B37C: sll         $t3, $t1, 4
    ctx->r11 = S32(ctx->r9 << 4);
    // 0x1517B380: lw          $t0, 0x0($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X0);
    // 0x1517B384: blez        $a2, L_1517B460
    if (SIGNED(ctx->r6) <= 0) {
        // 0x1517B388: addu        $s4, $t3, $t6
        ctx->r20 = ADD32(ctx->r11, ctx->r14);
            goto L_1517B460;
    }
    // 0x1517B388: addu        $s4, $t3, $t6
    ctx->r20 = ADD32(ctx->r11, ctx->r14);
    // 0x1517B38C: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x1517B390: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x1517B394: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1517B398: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
L_1517B39C:
    // 0x1517B39C: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
    // 0x1517B3A0: lwc1        $f18, 0x0($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1517B3A4: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1517B3A8: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x1517B3AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1517B3B0: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1517B3B4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x1517B3B8: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x1517B3BC: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x1517B3C0: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1517B3C4: sub.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x1517B3C8: mul.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x1517B3CC: add.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x1517B3D0: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1517B3D4: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x1517B3D8: nop

    // 0x1517B3DC: sh          $t5, -0x10($v0)
    MEM_H(-0X10, ctx->r2) = ctx->r13;
    // 0x1517B3E0: lh          $t1, -0x4($v1)
    ctx->r9 = MEM_H(ctx->r3, -0X4);
    // 0x1517B3E4: lh          $t9, -0x4($a0)
    ctx->r25 = MEM_H(ctx->r4, -0X4);
    // 0x1517B3E8: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1517B3EC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x1517B3F0: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1517B3F4: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1517B3F8: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1517B3FC: sub.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x1517B400: mul.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x1517B404: add.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x1517B408: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1517B40C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x1517B410: nop

    // 0x1517B414: sh          $t6, -0xE($v0)
    MEM_H(-0XE, ctx->r2) = ctx->r14;
    // 0x1517B418: lh          $t7, -0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, -0X2);
    // 0x1517B41C: lh          $t4, -0x2($a0)
    ctx->r12 = MEM_H(ctx->r4, -0X2);
    // 0x1517B420: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1517B424: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x1517B428: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x1517B42C: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1517B430: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1517B434: sub.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x1517B438: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1517B43C: add.s       $f18, $f6, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x1517B440: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1517B444: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x1517B448: nop

    // 0x1517B44C: sh          $t8, -0xC($v0)
    MEM_H(-0XC, ctx->r2) = ctx->r24;
    // 0x1517B450: lhu         $a2, 0x2($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X2);
    // 0x1517B454: slt         $at, $s0, $a2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x1517B458: bnel        $at, $zero, L_1517B39C
    if (ctx->r1 != 0) {
        // 0x1517B45C: lh          $t7, 0x0($a0)
        ctx->r15 = MEM_H(ctx->r4, 0X0);
            goto L_1517B39C;
    }
    goto skip_13;
    // 0x1517B45C: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    skip_13:
L_1517B460:
    // 0x1517B460: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x1517B464: jal         0x10023D20
    // 0x1517B468: sll         $a1, $a2, 4
    ctx->r5 = S32(ctx->r6 << 4);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_8;
    // 0x1517B468: sll         $a1, $a2, 4
    ctx->r5 = S32(ctx->r6 << 4);
    after_8:
    // 0x1517B46C: lbu         $t5, 0x0($s6)
    ctx->r13 = MEM_BU(ctx->r22, 0X0);
    // 0x1517B470: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1517B474: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1517B478: sll         $t9, $t5, 1
    ctx->r25 = S32(ctx->r13 << 1);
    // 0x1517B47C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x1517B480: lhu         $t1, 0x4310($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X4310);
    // 0x1517B484: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x1517B488: slt         $at, $s3, $t1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x1517B48C: bnel        $at, $zero, L_1517B1C4
    if (ctx->r1 != 0) {
        // 0x1517B490: lw          $t2, 0x0($s5)
        ctx->r10 = MEM_W(ctx->r21, 0X0);
            goto L_1517B1C4;
    }
    goto skip_14;
    // 0x1517B490: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    skip_14:
L_1517B494:
    // 0x1517B494: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1517B498: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1517B49C: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1517B4A0: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x1517B4A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1517B4A8: c.eq.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl == ctx->f4.fl;
    // 0x1517B4AC: nop

    // 0x1517B4B0: bc1fl       L_1517B4CC
    if (!c1cs) {
        // 0x1517B4B4: sb          $t4, 0xA($s1)
        MEM_B(0XA, ctx->r17) = ctx->r12;
            goto L_1517B4CC;
    }
    goto skip_15;
    // 0x1517B4B4: sb          $t4, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r12;
    skip_15:
    // 0x1517B4B8: lbu         $t3, 0xA($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0XA);
    // 0x1517B4BC: addiu       $t6, $t3, -0x1
    ctx->r14 = ADD32(ctx->r11, -0X1);
    // 0x1517B4C0: b           L_1517B4CC
    // 0x1517B4C4: sb          $t6, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r14;
        goto L_1517B4CC;
    // 0x1517B4C4: sb          $t6, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r14;
    // 0x1517B4C8: sb          $t4, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r12;
L_1517B4CC:
    // 0x1517B4CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1517B4D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1517B4D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x1517B4D8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x1517B4DC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x1517B4E0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x1517B4E4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x1517B4E8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x1517B4EC: jr          $ra
    // 0x1517B4F0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x1517B4F0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_151174F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151174F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151174F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151174F8: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x151174FC: jal         0x151172D8
    // 0x15117500: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_151172D8(rdram, ctx);
        goto after_0;
    // 0x15117500: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15117504: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15117508: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x1511750C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15117510: jr          $ra
    // 0x15117514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15117514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_150AC9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AC9C0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150AC9C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x150AC9C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x150AC9CC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x150AC9D0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x150AC9D4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x150AC9D8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x150AC9DC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x150AC9E0: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x150AC9E4: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x150AC9E8: sw          $gp, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r28;
    // 0x150AC9EC: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x150AC9F0: swc1        $f21, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x150AC9F4: swc1        $f22, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f22.u32l;
    // 0x150AC9F8: swc1        $f23, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x150AC9FC: swc1        $f24, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f24.u32l;
    // 0x150ACA00: swc1        $f25, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x150ACA04: swc1        $f26, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f26.u32l;
    // 0x150ACA08: swc1        $f27, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x150ACA0C: swc1        $f28, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f28.u32l;
    // 0x150ACA10: swc1        $f29, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x150ACA14: swc1        $f30, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f30.u32l;
    // 0x150ACA18: swc1        $f31, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x150ACA1C: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x150ACA20: mtc1        $a2, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r6;
    // 0x150ACA24: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x150ACA28: mov.s       $f23, $f12
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 12);
    ctx->f23.fl = ctx->f12.fl;
    // 0x150ACA2C: mov.s       $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    ctx->f24.fl = ctx->f14.fl;
    // 0x150ACA30: jal         0x1510F800
    // 0x150ACA34: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x150ACA34: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    after_0:
    // 0x150ACA38: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150ACA3C: lwc1        $f21, 0x80($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X80);
    // 0x150ACA40: lwc1        $f22, 0x84($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X84);
    // 0x150ACA44: addiu       $fp, $zero, 0x0
    ctx->r30 = ADD32(0, 0X0);
    // 0x150ACA48: bne         $a3, $zero, L_150ACA60
    if (ctx->r7 != 0) {
        // 0x150ACA4C: c.eq.s      $f21, $f0
        CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl == ctx->f0.fl;
            goto L_150ACA60;
    }
    // 0x150ACA4C: c.eq.s      $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f21.fl == ctx->f0.fl;
    // 0x150ACA50: bc1f        L_150ACA60
    if (!c1cs) {
        // 0x150ACA54: c.eq.s      $f22, $f0
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl == ctx->f0.fl;
            goto L_150ACA60;
    }
    // 0x150ACA54: c.eq.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl == ctx->f0.fl;
    // 0x150ACA58: bc1t        L_150AD2FC
    if (c1cs) {
        // 0x150ACA5C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150AD2FC;
    }
    // 0x150ACA5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150ACA60:
    // 0x150ACA60: mul.s       $f1, $f20, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x150ACA64: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150ACA68: mul.s       $f2, $f21, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x150ACA6C: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x150ACA70: mul.s       $f2, $f22, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x150ACA74: add.s       $f1, $f1, $f2
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f1.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x150ACA78: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x150ACA7C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150ACA80: sqrt.s      $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = sqrtf(ctx->f1.fl);
    // 0x150ACA84: div.s       $f1, $f2, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    // 0x150ACA88: mul.s       $f20, $f20, $f1
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f1.fl);
    // 0x150ACA8C: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x150ACA90: mul.s       $f21, $f21, $f1
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f21.fl = MUL_S(ctx->f21.fl, ctx->f1.fl);
    // 0x150ACA94: nop

    // 0x150ACA98: mul.s       $f22, $f22, $f1
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f1.fl);
    // 0x150ACA9C: c.ult.s     $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x150ACAA0: bc1fl       L_150ACAAC
    if (!c1cs) {
        // 0x150ACAA4: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_150ACAAC;
    }
    goto skip_0;
    // 0x150ACAA4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_0:
    // 0x150ACAA8: addiu       $s1, $zero, 0x0
    ctx->r17 = ADD32(0, 0X0);
L_150ACAAC:
    // 0x150ACAAC: c.ult.s     $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x150ACAB0: bc1fl       L_150ACABC
    if (!c1cs) {
        // 0x150ACAB4: addiu       $s2, $zero, 0x0
        ctx->r18 = ADD32(0, 0X0);
            goto L_150ACABC;
    }
    goto skip_1;
    // 0x150ACAB4: addiu       $s2, $zero, 0x0
    ctx->r18 = ADD32(0, 0X0);
    skip_1:
    // 0x150ACAB8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_150ACABC:
    // 0x150ACABC: add.s       $f1, $f23, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = ctx->f23.fl + ctx->f20.fl;
    // 0x150ACAC0: add.s       $f2, $f25, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f25.fl + ctx->f22.fl;
    // 0x150ACAC4: abs.s       $f3, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = fabsf(ctx->f20.fl);
    // 0x150ACAC8: abs.s       $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = fabsf(ctx->f22.fl);
    // 0x150ACACC: lui         $t0, 0x38D1
    ctx->r8 = S32(0X38D1 << 16);
    // 0x150ACAD0: c.ole.s     $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f3.fl <= ctx->f4.fl;
    // 0x150ACAD4: bc1t        L_150ACB04
    if (c1cs) {
        // 0x150ACAD8: ori         $t0, $t0, 0xB717
        ctx->r8 = ctx->r8 | 0XB717;
            goto L_150ACB04;
    }
    // 0x150ACAD8: ori         $t0, $t0, 0xB717
    ctx->r8 = ctx->r8 | 0XB717;
    // 0x150ACADC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x150ACAE0: sub.s       $f2, $f2, $f25
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f25.fl;
    // 0x150ACAE4: sub.s       $f1, $f1, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f23.fl;
    // 0x150ACAE8: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x150ACAEC: bc1tl       L_150ACAF4
    if (c1cs) {
        // 0x150ACAF0: mtc1        $t0, $f1
        ctx->f_odd[(1 - 1) * 2] = ctx->r8;
            goto L_150ACAF4;
    }
    goto skip_2;
    // 0x150ACAF0: mtc1        $t0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r8;
    skip_2:
L_150ACAF4:
    // 0x150ACAF4: div.s       $f26, $f2, $f1
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f26.fl = DIV_S(ctx->f2.fl, ctx->f1.fl);
    // 0x150ACAF8: mul.s       $f27, $f26, $f23
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f27.fl = MUL_S(ctx->f26.fl, ctx->f23.fl);
    // 0x150ACAFC: j           L_150ACB28
    // 0x150ACB00: sub.s       $f27, $f25, $f27
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f27.fl = ctx->f25.fl - ctx->f27.fl;
        goto L_150ACB28;
    // 0x150ACB00: sub.s       $f27, $f25, $f27
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f27.fl = ctx->f25.fl - ctx->f27.fl;
L_150ACB04:
    // 0x150ACB04: addiu       $s3, $zero, 0x0
    ctx->r19 = ADD32(0, 0X0);
    // 0x150ACB08: sub.s       $f2, $f2, $f25
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f25.fl;
    // 0x150ACB0C: sub.s       $f1, $f1, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f23.fl;
    // 0x150ACB10: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x150ACB14: bc1tl       L_150ACB1C
    if (c1cs) {
        // 0x150ACB18: mtc1        $t0, $f2
        ctx->f2.u32l = ctx->r8;
            goto L_150ACB1C;
    }
    goto skip_3;
    // 0x150ACB18: mtc1        $t0, $f2
    ctx->f2.u32l = ctx->r8;
    skip_3:
L_150ACB1C:
    // 0x150ACB1C: div.s       $f26, $f1, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = DIV_S(ctx->f1.fl, ctx->f2.fl);
    // 0x150ACB20: mul.s       $f27, $f26, $f25
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f27.fl = MUL_S(ctx->f26.fl, ctx->f25.fl);
    // 0x150ACB24: sub.s       $f27, $f23, $f27
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f27.fl = ctx->f23.fl - ctx->f27.fl;
L_150ACB28:
    // 0x150ACB28: lwc1        $f28, 0xA8($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x150ACB2C: c.eq.s      $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f28.fl == ctx->f0.fl;
    // 0x150ACB30: bc1f        L_150ACB48
    if (!c1cs) {
        // 0x150ACB34: lui         $at, 0x4780
        ctx->r1 = S32(0X4780 << 16);
            goto L_150ACB48;
    }
    // 0x150ACB34: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x150ACB38: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x150ACB3C: mul.s       $f28, $f1, $f1
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f28.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x150ACB40: nop

    // 0x150ACB44: mul.s       $f28, $f28, $f1
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f1.fl);
L_150ACB48:
    // 0x150ACB48: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x150ACB4C: lw          $s4, -0x41F8($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X41F8);
L_150ACB50:
    // 0x150ACB50: lh          $t0, 0x8($s4)
    ctx->r8 = MEM_H(ctx->r20, 0X8);
    // 0x150ACB54: lh          $t1, 0xA($s4)
    ctx->r9 = MEM_H(ctx->r20, 0XA);
    // 0x150ACB58: mtc1        $t0, $f2
    ctx->f2.u32l = ctx->r8;
    // 0x150ACB5C: mtc1        $t1, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r9;
    // 0x150ACB60: lhu         $t1, 0x6($s4)
    ctx->r9 = MEM_HU(ctx->r20, 0X6);
    // 0x150ACB64: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x150ACB68: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x150ACB6C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x150ACB70: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150ACB74: sub.s       $f1, $f2, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x150ACB78: c.ule.s     $f1, $f23
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    c1cs = ctx->f1.fl <= ctx->f23.fl;
    // 0x150ACB7C: bc1f        L_150ACBA8
    if (!c1cs) {
        // 0x150ACB80: add.s       $f1, $f2, $f4
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f2.fl + ctx->f4.fl;
            goto L_150ACBA8;
    }
    // 0x150ACB80: add.s       $f1, $f2, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x150ACB84: c.ule.s     $f23, $f1
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f23.fl <= ctx->f1.fl;
    // 0x150ACB88: bc1f        L_150ACBA8
    if (!c1cs) {
        // 0x150ACB8C: sub.s       $f1, $f3, $f4
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f4.fl;
            goto L_150ACBA8;
    }
    // 0x150ACB8C: sub.s       $f1, $f3, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl - ctx->f4.fl;
    // 0x150ACB90: c.ule.s     $f1, $f25
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 25);
    c1cs = ctx->f1.fl <= ctx->f25.fl;
    // 0x150ACB94: bc1f        L_150ACBA8
    if (!c1cs) {
        // 0x150ACB98: add.s       $f1, $f3, $f4
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl + ctx->f4.fl;
            goto L_150ACBA8;
    }
    // 0x150ACB98: add.s       $f1, $f3, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f3.fl + ctx->f4.fl;
    // 0x150ACB9C: c.ole.s     $f25, $f1
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f25.fl <= ctx->f1.fl;
    // 0x150ACBA0: bc1t        L_150ACBC4
    if (c1cs) {
        // 0x150ACBA4: nop
    
            goto L_150ACBC4;
    }
    // 0x150ACBA4: nop

L_150ACBA8:
    // 0x150ACBA8: lh          $t0, 0x4($s4)
    ctx->r8 = MEM_H(ctx->r20, 0X4);
    // 0x150ACBAC: beq         $t0, $zero, L_150ACBBC
    if (ctx->r8 == 0) {
        // 0x150ACBB0: nop
    
            goto L_150ACBBC;
    }
    // 0x150ACBB0: nop

    // 0x150ACBB4: j           L_150ACB50
    // 0x150ACBB8: addu        $s4, $s4, $t0
    ctx->r20 = ADD32(ctx->r20, ctx->r8);
        goto L_150ACB50;
    // 0x150ACBB8: addu        $s4, $s4, $t0
    ctx->r20 = ADD32(ctx->r20, ctx->r8);
L_150ACBBC:
    // 0x150ACBBC: j           L_150ACBD8
    // 0x150ACBC0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_150ACBD8;
    // 0x150ACBC0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_150ACBC4:
    // 0x150ACBC4: lh          $t0, 0xC($s4)
    ctx->r8 = MEM_H(ctx->r20, 0XC);
    // 0x150ACBC8: beq         $t0, $zero, L_150ACBD8
    if (ctx->r8 == 0) {
        // 0x150ACBCC: nop
    
            goto L_150ACBD8;
    }
    // 0x150ACBCC: nop

    // 0x150ACBD0: j           L_150ACB50
    // 0x150ACBD4: addu        $s4, $s4, $t0
    ctx->r20 = ADD32(ctx->r20, ctx->r8);
        goto L_150ACB50;
    // 0x150ACBD4: addu        $s4, $s4, $t0
    ctx->r20 = ADD32(ctx->r20, ctx->r8);
L_150ACBD8:
    // 0x150ACBD8: beq         $s4, $zero, L_150ACECC
    if (ctx->r20 == 0) {
        // 0x150ACBDC: addiu       $t1, $s4, 0xE
        ctx->r9 = ADD32(ctx->r20, 0XE);
            goto L_150ACECC;
    }
    // 0x150ACBDC: addiu       $t1, $s4, 0xE
    ctx->r9 = ADD32(ctx->r20, 0XE);
    // 0x150ACBE0: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x150ACBE4: lw          $a2, -0x41C0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X41C0);
    // 0x150ACBE8: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x150ACBEC: bnel        $s3, $zero, L_150ACBF8
    if (ctx->r19 != 0) {
        // 0x150ACBF0: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_150ACBF8;
    }
    goto skip_4;
    // 0x150ACBF0: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    skip_4:
    // 0x150ACBF4: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_150ACBF8:
    // 0x150ACBF8: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x150ACBFC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x150ACC00: beq         $t2, $zero, L_150ACD0C
    if (ctx->r10 == 0) {
        // 0x150ACC04: andi        $t0, $t2, 0x80
        ctx->r8 = ctx->r10 & 0X80;
            goto L_150ACD0C;
    }
    // 0x150ACC04: andi        $t0, $t2, 0x80
    ctx->r8 = ctx->r10 & 0X80;
    // 0x150ACC08: beql        $t0, $zero, L_150ACC24
    if (ctx->r8 == 0) {
        // 0x150ACC0C: addu        $t2, $t2, $t3
        ctx->r10 = ADD32(ctx->r10, ctx->r11);
            goto L_150ACC24;
    }
    goto skip_5;
    // 0x150ACC0C: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    skip_5:
    // 0x150ACC10: andi        $t2, $t2, 0x7F
    ctx->r10 = ctx->r10 & 0X7F;
    // 0x150ACC14: sll         $t2, $t2, 8
    ctx->r10 = S32(ctx->r10 << 8);
    // 0x150ACC18: lbu         $t0, 0x0($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X0);
    // 0x150ACC1C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x150ACC20: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
L_150ACC24:
    // 0x150ACC24: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
    // 0x150ACC28: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x150ACC2C: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x150ACC30: sll         $t0, $t2, 3
    ctx->r8 = S32(ctx->r10 << 3);
    // 0x150ACC34: addu        $t6, $a2, $t0
    ctx->r14 = ADD32(ctx->r6, ctx->r8);
    // 0x150ACC38: addu        $t9, $a3, $t0
    ctx->r25 = ADD32(ctx->r7, ctx->r8);
    // 0x150ACC3C: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x150ACC40: lh          $t8, 0x0($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X0);
    // 0x150ACC44: mtc1        $t7, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r15;
    // 0x150ACC48: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150ACC4C: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x150ACC50: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150ACC54: mul.s       $f5, $f26, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = MUL_S(ctx->f26.fl, ctx->f3.fl);
    // 0x150ACC58: sub.s       $f2, $f27, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f27.fl - ctx->f4.fl;
    // 0x150ACC5C: lh          $t8, 0x4($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X4);
    // 0x150ACC60: add.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f5.fl;
    // 0x150ACC64: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150ACC68: c.ult.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150ACC6C: bc1fl       L_150ACC74
    if (!c1cs) {
        // 0x150ACC70: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_150ACC74;
    }
    goto skip_6;
    // 0x150ACC70: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    skip_6:
L_150ACC74:
    // 0x150ACC74: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x150ACC78: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150ACC7C: add.s       $f2, $f5, $f27
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f2.fl = ctx->f5.fl + ctx->f27.fl;
    // 0x150ACC80: lh          $t7, 0x4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X4);
    // 0x150ACC84: sub.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x150ACC88: mtc1        $t7, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r15;
    // 0x150ACC8C: c.ult.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150ACC90: bc1fl       L_150ACC9C
    if (!c1cs) {
        // 0x150ACC94: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_150ACC9C;
    }
    goto skip_7;
    // 0x150ACC94: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    skip_7:
    // 0x150ACC98: beq         $t4, $zero, L_150ACCA4
    if (ctx->r12 == 0) {
        // 0x150ACC9C: addiu       $t5, $t5, 0x1
        ctx->r13 = ADD32(ctx->r13, 0X1);
            goto L_150ACCA4;
    }
L_150ACC9C:
    // 0x150ACC9C: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x150ACCA0: bne         $t4, $t5, L_150ACCEC
    if (ctx->r12 != ctx->r13) {
        // 0x150ACCA4: cvt.s.w     $f3, $f3
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
            goto L_150ACCEC;
    }
L_150ACCA4:
    // 0x150ACCA4: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x150ACCA8: sub.s       $f1, $f27, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f27.fl - ctx->f4.fl;
    // 0x150ACCAC: mul.s       $f5, $f26, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = MUL_S(ctx->f26.fl, ctx->f3.fl);
    // 0x150ACCB0: lh          $t8, 0x0($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X0);
    // 0x150ACCB4: add.s       $f2, $f5, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f5.fl + ctx->f1.fl;
    // 0x150ACCB8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150ACCBC: c.ult.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150ACCC0: bc1fl       L_150ACCCC
    if (!c1cs) {
        // 0x150ACCC4: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_150ACCCC;
    }
    goto skip_8;
    // 0x150ACCC4: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    skip_8:
    // 0x150ACCC8: beq         $t4, $zero, L_150ACCD4
    if (ctx->r12 == 0) {
        // 0x150ACCCC: addiu       $t5, $t5, 0x1
        ctx->r13 = ADD32(ctx->r13, 0X1);
            goto L_150ACCD4;
    }
L_150ACCCC:
    // 0x150ACCCC: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x150ACCD0: bne         $t4, $t5, L_150ACCEC
    if (ctx->r12 != ctx->r13) {
        // 0x150ACCD4: cvt.s.w     $f4, $f4
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
            goto L_150ACCEC;
    }
L_150ACCD4:
    // 0x150ACCD4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150ACCD8: add.s       $f2, $f5, $f27
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f2.fl = ctx->f5.fl + ctx->f27.fl;
    // 0x150ACCDC: sub.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x150ACCE0: c.ult.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150ACCE4: bc1fl       L_150ACCEC
    if (!c1cs) {
        // 0x150ACCE8: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_150ACCEC;
    }
    goto skip_9;
    // 0x150ACCE8: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    skip_9:
L_150ACCEC:
    // 0x150ACCEC: beq         $t4, $zero, L_150ACBF8
    if (ctx->r12 == 0) {
        // 0x150ACCF0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_150ACBF8;
    }
    // 0x150ACCF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150ACCF4: beq         $t4, $at, L_150ACBF8
    if (ctx->r12 == ctx->r1) {
        // 0x150ACCF8: nop
    
            goto L_150ACBF8;
    }
    // 0x150ACCF8: nop

    // 0x150ACCFC: jal         0x150AD364
    // 0x150ACD00: nop

    func_150AD364(rdram, ctx);
        goto after_1;
    // 0x150ACD00: nop

    after_1:
    // 0x150ACD04: j           L_150ACBF8
    // 0x150ACD08: nop

        goto L_150ACBF8;
    // 0x150ACD08: nop

L_150ACD0C:
    // 0x150ACD0C: bne         $s0, $zero, L_150ACECC
    if (ctx->r16 != 0) {
        // 0x150ACD10: nop
    
            goto L_150ACECC;
    }
    // 0x150ACD10: nop

    // 0x150ACD14: lh          $t0, 0x8($s4)
    ctx->r8 = MEM_H(ctx->r20, 0X8);
    // 0x150ACD18: lh          $t1, 0xA($s4)
    ctx->r9 = MEM_H(ctx->r20, 0XA);
    // 0x150ACD1C: mtc1        $t0, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r8;
    // 0x150ACD20: lhu         $t0, 0x6($s4)
    ctx->r8 = MEM_HU(ctx->r20, 0X6);
    // 0x150ACD24: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x150ACD28: mtc1        $t0, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r8;
    // 0x150ACD2C: cvt.s.w     $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    ctx->f5.fl = CVT_S_W(ctx->f_odd[(5 - 1) * 2]);
    // 0x150ACD30: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150ACD34: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150ACD38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150ACD3C: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x150ACD40: bc1f        L_150ACD6C
    if (!c1cs) {
        // 0x150ACD44: cvt.s.w     $f7, $f7
        CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    ctx->f7.fl = CVT_S_W(ctx->f_odd[(7 - 1) * 2]);
            goto L_150ACD6C;
    }
    // 0x150ACD44: cvt.s.w     $f7, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    ctx->f7.fl = CVT_S_W(ctx->f_odd[(7 - 1) * 2]);
    // 0x150ACD48: mov.s       $f3, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    ctx->f3.fl = ctx->f23.fl;
    // 0x150ACD4C: beq         $s2, $zero, L_150ACD60
    if (ctx->r18 == 0) {
        // 0x150ACD50: addiu       $t3, $zero, 0x0
        ctx->r11 = ADD32(0, 0X0);
            goto L_150ACD60;
    }
    // 0x150ACD50: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x150ACD54: sub.s       $f4, $f6, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f7.fl;
    // 0x150ACD58: j           L_150ACE08
    // 0x150ACD5C: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
        goto L_150ACE08;
    // 0x150ACD5C: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
L_150ACD60:
    // 0x150ACD60: add.s       $f4, $f6, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f7.fl;
    // 0x150ACD64: j           L_150ACE08
    // 0x150ACD68: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
        goto L_150ACE08;
    // 0x150ACD68: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_150ACD6C:
    // 0x150ACD6C: c.eq.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl == ctx->f0.fl;
    // 0x150ACD70: bc1f        L_150ACD98
    if (!c1cs) {
        // 0x150ACD74: mov.s       $f4, $f25
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 25);
    ctx->f4.fl = ctx->f25.fl;
            goto L_150ACD98;
    }
    // 0x150ACD74: mov.s       $f4, $f25
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 25);
    ctx->f4.fl = ctx->f25.fl;
    // 0x150ACD78: beq         $s1, $zero, L_150ACD8C
    if (ctx->r17 == 0) {
        // 0x150ACD7C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_150ACD8C;
    }
    // 0x150ACD7C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150ACD80: add.s       $f3, $f5, $f7
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f3.fl = ctx->f5.fl + ctx->f7.fl;
    // 0x150ACD84: j           L_150ACE08
    // 0x150ACD88: add.s       $f3, $f3, $f8
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f8.fl;
        goto L_150ACE08;
    // 0x150ACD88: add.s       $f3, $f3, $f8
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f8.fl;
L_150ACD8C:
    // 0x150ACD8C: sub.s       $f3, $f5, $f7
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f3.fl = ctx->f5.fl - ctx->f7.fl;
    // 0x150ACD90: j           L_150ACE08
    // 0x150ACD94: sub.s       $f3, $f3, $f8
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f8.fl;
        goto L_150ACE08;
    // 0x150ACD94: sub.s       $f3, $f3, $f8
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f8.fl;
L_150ACD98:
    // 0x150ACD98: bnel        $s1, $zero, L_150ACDA4
    if (ctx->r17 != 0) {
        // 0x150ACD9C: add.s       $f3, $f5, $f7
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f3.fl = ctx->f5.fl + ctx->f7.fl;
            goto L_150ACDA4;
    }
    goto skip_10;
    // 0x150ACD9C: add.s       $f3, $f5, $f7
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f3.fl = ctx->f5.fl + ctx->f7.fl;
    skip_10:
    // 0x150ACDA0: sub.s       $f3, $f5, $f7
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f3.fl = ctx->f5.fl - ctx->f7.fl;
L_150ACDA4:
    // 0x150ACDA4: sub.s       $f9, $f3, $f23
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f9.fl = ctx->f3.fl - ctx->f23.fl;
    // 0x150ACDA8: div.s       $f9, $f9, $f20
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f9.fl = DIV_S(ctx->f9.fl, ctx->f20.fl);
    // 0x150ACDAC: mul.s       $f4, $f9, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f9.fl, ctx->f22.fl);
    // 0x150ACDB0: add.s       $f4, $f4, $f25
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f25.fl;
    // 0x150ACDB4: sub.s       $f1, $f6, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = ctx->f6.fl - ctx->f7.fl;
    // 0x150ACDB8: c.olt.s     $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f4.fl < ctx->f1.fl;
    // 0x150ACDBC: bc1t        L_150ACDD0
    if (c1cs) {
        // 0x150ACDC0: add.s       $f1, $f6, $f7
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = ctx->f6.fl + ctx->f7.fl;
            goto L_150ACDD0;
    }
    // 0x150ACDC0: add.s       $f1, $f6, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = ctx->f6.fl + ctx->f7.fl;
    // 0x150ACDC4: c.ole.s     $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f4.fl <= ctx->f1.fl;
    // 0x150ACDC8: bc1tl       L_150ACDF0
    if (c1cs) {
        // 0x150ACDCC: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_150ACDF0;
    }
    goto skip_11;
    // 0x150ACDCC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    skip_11:
L_150ACDD0:
    // 0x150ACDD0: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x150ACDD4: bnel        $s2, $zero, L_150ACDE0
    if (ctx->r18 != 0) {
        // 0x150ACDD8: sub.s       $f4, $f6, $f7
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f7.fl;
            goto L_150ACDE0;
    }
    goto skip_12;
    // 0x150ACDD8: sub.s       $f4, $f6, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f7.fl;
    skip_12:
    // 0x150ACDDC: add.s       $f4, $f6, $f7
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f7.fl;
L_150ACDE0:
    // 0x150ACDE0: sub.s       $f9, $f4, $f25
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 25);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f25.fl); 
    ctx->f9.fl = ctx->f4.fl - ctx->f25.fl;
    // 0x150ACDE4: div.s       $f9, $f9, $f22
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f9.fl = DIV_S(ctx->f9.fl, ctx->f22.fl);
    // 0x150ACDE8: mul.s       $f3, $f9, $f20
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f3.fl = MUL_S(ctx->f9.fl, ctx->f20.fl);
    // 0x150ACDEC: add.s       $f3, $f3, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f23.fl;
L_150ACDF0:
    // 0x150ACDF0: bnel        $s1, $zero, L_150ACDFC
    if (ctx->r17 != 0) {
        // 0x150ACDF4: add.s       $f3, $f3, $f8
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f8.fl;
            goto L_150ACDFC;
    }
    goto skip_13;
    // 0x150ACDF4: add.s       $f3, $f3, $f8
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f3.fl = ctx->f3.fl + ctx->f8.fl;
    skip_13:
    // 0x150ACDF8: sub.s       $f3, $f3, $f8
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f8.fl;
L_150ACDFC:
    // 0x150ACDFC: bnel        $s2, $zero, L_150ACE08
    if (ctx->r18 != 0) {
        // 0x150ACE00: sub.s       $f4, $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
            goto L_150ACE08;
    }
    goto skip_14;
    // 0x150ACE00: sub.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f8.fl;
    skip_14:
    // 0x150ACE04: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_150ACE08:
    // 0x150ACE08: lwc1        $f1, 0xA8($sp)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r29, 0XA8);
    // 0x150ACE0C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x150ACE10: lw          $t4, -0x41F8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X41F8);
    // 0x150ACE14: c.eq.s      $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl == ctx->f0.fl;
    // 0x150ACE18: bc1t        L_150ACE4C
    if (c1cs) {
        // 0x150ACE1C: nop
    
            goto L_150ACE4C;
    }
    // 0x150ACE1C: nop

    // 0x150ACE20: sub.s       $f2, $f23, $f3
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f2.fl = ctx->f23.fl - ctx->f3.fl;
    // 0x150ACE24: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150ACE28: sub.s       $f13, $f25, $f4
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f13.fl = ctx->f25.fl - ctx->f4.fl;
    // 0x150ACE2C: mul.s       $f13, $f13, $f13
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f13.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f13.fl = MUL_S(ctx->f13.fl, ctx->f13.fl);
    // 0x150ACE30: add.s       $f2, $f2, $f13
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f13.fl;
    // 0x150ACE34: sqrt.s      $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = sqrtf(ctx->f2.fl);
    // 0x150ACE38: c.olt.s     $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f2.fl < ctx->f1.fl;
    // 0x150ACE3C: bc1t        L_150ACE4C
    if (c1cs) {
        // 0x150ACE40: nop
    
            goto L_150ACE4C;
    }
    // 0x150ACE40: nop

    // 0x150ACE44: j           L_150ACEC4
    // 0x150ACE48: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
        goto L_150ACEC4;
    // 0x150ACE48: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
L_150ACE4C:
    // 0x150ACE4C: lh          $t0, 0x8($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X8);
    // 0x150ACE50: lh          $t1, 0xA($t4)
    ctx->r9 = MEM_H(ctx->r12, 0XA);
    // 0x150ACE54: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x150ACE58: lhu         $t0, 0x6($t4)
    ctx->r8 = MEM_HU(ctx->r12, 0X6);
    // 0x150ACE5C: mtc1        $t1, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r9;
    // 0x150ACE60: mtc1        $t0, $f12
    ctx->f12.u32l = ctx->r8;
    // 0x150ACE64: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150ACE68: cvt.s.w     $f11, $f11
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    ctx->f11.fl = CVT_S_W(ctx->f_odd[(11 - 1) * 2]);
    // 0x150ACE6C: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x150ACE70: beq         $t4, $s4, L_150ACEA4
    if (ctx->r12 == ctx->r20) {
        // 0x150ACE74: sub.s       $f1, $f10, $f12
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = ctx->f10.fl - ctx->f12.fl;
            goto L_150ACEA4;
    }
    // 0x150ACE74: sub.s       $f1, $f10, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x150ACE78: c.ule.s     $f1, $f3
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f1.fl <= ctx->f3.fl;
    // 0x150ACE7C: bc1f        L_150ACEA4
    if (!c1cs) {
        // 0x150ACE80: add.s       $f1, $f10, $f12
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = ctx->f10.fl + ctx->f12.fl;
            goto L_150ACEA4;
    }
    // 0x150ACE80: add.s       $f1, $f10, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x150ACE84: c.ule.s     $f3, $f1
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f3.fl <= ctx->f1.fl;
    // 0x150ACE88: bc1f        L_150ACEA4
    if (!c1cs) {
        // 0x150ACE8C: sub.s       $f1, $f11, $f12
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = ctx->f11.fl - ctx->f12.fl;
            goto L_150ACEA4;
    }
    // 0x150ACE8C: sub.s       $f1, $f11, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = ctx->f11.fl - ctx->f12.fl;
    // 0x150ACE90: c.ule.s     $f1, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f1.fl <= ctx->f4.fl;
    // 0x150ACE94: bc1f        L_150ACEA4
    if (!c1cs) {
        // 0x150ACE98: add.s       $f1, $f11, $f12
        CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = ctx->f11.fl + ctx->f12.fl;
            goto L_150ACEA4;
    }
    // 0x150ACE98: add.s       $f1, $f11, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = ctx->f11.fl + ctx->f12.fl;
    // 0x150ACE9C: c.ole.s     $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    c1cs = ctx->f4.fl <= ctx->f1.fl;
    // 0x150ACEA0: bc1t        L_150ACEB8
    if (c1cs) {
        // 0x150ACEA4: lh          $t0, 0x4($t4)
        ctx->r8 = MEM_H(ctx->r12, 0X4);
            goto L_150ACEB8;
    }
L_150ACEA4:
    // 0x150ACEA4: lh          $t0, 0x4($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X4);
    // 0x150ACEA8: bne         $t0, $zero, L_150ACE4C
    if (ctx->r8 != 0) {
        // 0x150ACEAC: addu        $t4, $t4, $t0
        ctx->r12 = ADD32(ctx->r12, ctx->r8);
            goto L_150ACE4C;
    }
    // 0x150ACEAC: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x150ACEB0: j           L_150ACEC4
    // 0x150ACEB4: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
        goto L_150ACEC4;
    // 0x150ACEB4: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
L_150ACEB8:
    // 0x150ACEB8: lh          $t0, 0xC($t4)
    ctx->r8 = MEM_H(ctx->r12, 0XC);
    // 0x150ACEBC: bne         $t0, $zero, L_150ACE4C
    if (ctx->r8 != 0) {
        // 0x150ACEC0: addu        $t4, $t4, $t0
        ctx->r12 = ADD32(ctx->r12, ctx->r8);
            goto L_150ACE4C;
    }
    // 0x150ACEC0: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
L_150ACEC4:
    // 0x150ACEC4: j           L_150ACBD8
    // 0x150ACEC8: or          $s4, $t4, $zero
    ctx->r20 = ctx->r12 | 0;
        goto L_150ACBD8;
    // 0x150ACEC8: or          $s4, $t4, $zero
    ctx->r20 = ctx->r12 | 0;
L_150ACECC:
    // 0x150ACECC: jal         0x1510F800
    // 0x150ACED0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_1510F800(rdram, ctx);
        goto after_2;
    // 0x150ACED0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x150ACED4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x150ACED8: lw          $t3, -0x4110($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4110);
    // 0x150ACEDC: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x150ACEE0: mult        $t3, $t0
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150ACEE4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x150ACEE8: lw          $t2, -0x410C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X410C);
    // 0x150ACEEC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150ACEF0: mflo        $t3
    ctx->r11 = lo;
    // 0x150ACEF4: add         $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x150ACEF8: beq         $t2, $t3, L_150AD1CC
    if (ctx->r10 == ctx->r11) {
        // 0x150ACEFC: addiu       $t4, $zero, 0x20
        ctx->r12 = ADD32(0, 0X20);
            goto L_150AD1CC;
    }
    // 0x150ACEFC: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x150ACF00: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150ACF04: addiu       $t5, $t5, 0x37E0
    ctx->r13 = ADD32(ctx->r13, 0X37E0);
    // 0x150ACF08: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x150ACF0C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150ACF10: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150ACF14: mul.s       $f1, $f21, $f21
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f1.fl = MUL_S(ctx->f21.fl, ctx->f21.fl);
    // 0x150ACF18: add.s       $f8, $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f1.fl;
    // 0x150ACF1C: mul.s       $f1, $f22, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x150ACF20: add.s       $f8, $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f1.fl;
    // 0x150ACF24: mul.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150ACF28: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150ACF2C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150ACF30: mul.s       $f10, $f2, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x150ACF34: nop

    // 0x150ACF38: mul.s       $f11, $f2, $f21
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f11.fl = MUL_S(ctx->f2.fl, ctx->f21.fl);
    // 0x150ACF3C: nop

    // 0x150ACF40: mul.s       $f12, $f2, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x150ACF44: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x150ACF48: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
L_150ACF4C:
    // 0x150ACF4C: lbu         $t0, 0x6E($t2)
    ctx->r8 = MEM_BU(ctx->r10, 0X6E);
    // 0x150ACF50: lbu         $t1, 0x4F($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X4F);
    // 0x150ACF54: bne         $t0, $zero, L_150AD03C
    if (ctx->r8 != 0) {
        // 0x150ACF58: andi        $t1, $t1, 0x60
        ctx->r9 = ctx->r9 & 0X60;
            goto L_150AD03C;
    }
    // 0x150ACF58: andi        $t1, $t1, 0x60
    ctx->r9 = ctx->r9 & 0X60;
    // 0x150ACF5C: beq         $t1, $t4, L_150AD03C
    if (ctx->r9 == ctx->r12) {
        // 0x150ACF60: nop
    
            goto L_150AD03C;
    }
    // 0x150ACF60: nop

    // 0x150ACF64: lh          $t0, 0x10($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X10);
    // 0x150ACF68: lh          $t1, 0x12($t2)
    ctx->r9 = MEM_H(ctx->r10, 0X12);
    // 0x150ACF6C: mtc1        $t0, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r8;
    // 0x150ACF70: lh          $t0, 0x14($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X14);
    // 0x150ACF74: mtc1        $t1, $f2
    ctx->f2.u32l = ctx->r9;
    // 0x150ACF78: mtc1        $t0, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r8;
    // 0x150ACF7C: cvt.s.w     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f1.fl = CVT_S_W(ctx->f_odd[(1 - 1) * 2]);
    // 0x150ACF80: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x150ACF84: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x150ACF88: sub.s       $f1, $f23, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = ctx->f23.fl - ctx->f1.fl;
    // 0x150ACF8C: lhu         $t0, 0x50($t2)
    ctx->r8 = MEM_HU(ctx->r10, 0X50);
    // 0x150ACF90: sub.s       $f2, $f24, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f24.fl - ctx->f2.fl;
    // 0x150ACF94: lhu         $t1, 0x52($t2)
    ctx->r9 = MEM_HU(ctx->r10, 0X52);
    // 0x150ACF98: sub.s       $f3, $f25, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 25);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f25.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = ctx->f25.fl - ctx->f3.fl;
    // 0x150ACF9C: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x150ACFA0: bnel        $at, $zero, L_150ACFA8
    if (ctx->r1 != 0) {
        // 0x150ACFA4: or          $t0, $t1, $zero
        ctx->r8 = ctx->r9 | 0;
            goto L_150ACFA8;
    }
    goto skip_15;
    // 0x150ACFA4: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    skip_15:
L_150ACFA8:
    // 0x150ACFA8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x150ACFAC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150ACFB0: mul.s       $f4, $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x150ACFB4: nop

    // 0x150ACFB8: mul.s       $f7, $f10, $f1
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f7.fl = MUL_S(ctx->f10.fl, ctx->f1.fl);
    // 0x150ACFBC: nop

    // 0x150ACFC0: mul.s       $f5, $f11, $f2
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f5.fl = MUL_S(ctx->f11.fl, ctx->f2.fl);
    // 0x150ACFC4: add.s       $f7, $f7, $f5
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f7.fl = ctx->f7.fl + ctx->f5.fl;
    // 0x150ACFC8: mul.s       $f5, $f12, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = MUL_S(ctx->f12.fl, ctx->f3.fl);
    // 0x150ACFCC: add.s       $f7, $f7, $f5
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f7.fl = ctx->f7.fl + ctx->f5.fl;
    // 0x150ACFD0: mul.s       $f9, $f1, $f1
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f9.fl = MUL_S(ctx->f1.fl, ctx->f1.fl);
    // 0x150ACFD4: nop

    // 0x150ACFD8: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150ACFDC: add.s       $f9, $f9, $f2
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f2.fl;
    // 0x150ACFE0: mul.s       $f3, $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
    // 0x150ACFE4: add.s       $f9, $f9, $f3
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f9.fl = ctx->f9.fl + ctx->f3.fl;
    // 0x150ACFE8: sub.s       $f9, $f9, $f4
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f9.fl = ctx->f9.fl - ctx->f4.fl;
    // 0x150ACFEC: mul.s       $f1, $f7, $f7
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f1.fl = MUL_S(ctx->f7.fl, ctx->f7.fl);
    // 0x150ACFF0: nop

    // 0x150ACFF4: mul.s       $f9, $f9, $f8
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f9.fl = MUL_S(ctx->f9.fl, ctx->f8.fl);
    // 0x150ACFF8: sub.s       $f1, $f1, $f9
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f1.fl = ctx->f1.fl - ctx->f9.fl;
    // 0x150ACFFC: c.olt.s     $f1, $f0
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f1.fl < ctx->f0.fl;
    // 0x150AD000: bc1t        L_150AD03C
    if (c1cs) {
        // 0x150AD004: nop
    
            goto L_150AD03C;
    }
    // 0x150AD004: nop

    // 0x150AD008: sqrt.s      $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f1.fl); 
    ctx->f1.fl = sqrtf(ctx->f1.fl);
    // 0x150AD00C: neg.s       $f7, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f7.fl); 
    ctx->f7.fl = -ctx->f7.fl;
    // 0x150AD010: add.s       $f2, $f7, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f7.fl + ctx->f1.fl;
    // 0x150AD014: c.ult.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150AD018: bc1f        L_150AD030
    if (!c1cs) {
        // 0x150AD01C: nop
    
            goto L_150AD030;
    }
    // 0x150AD01C: nop

    // 0x150AD020: sub.s       $f2, $f7, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f7.fl - ctx->f1.fl;
    // 0x150AD024: c.olt.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150AD028: bc1t        L_150AD03C
    if (c1cs) {
        // 0x150AD02C: nop
    
            goto L_150AD03C;
    }
    // 0x150AD02C: nop

L_150AD030:
    // 0x150AD030: sh          $t6, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r14;
    // 0x150AD034: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x150AD038: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_150AD03C:
    // 0x150AD03C: addiu       $t2, $t2, 0xA0
    ctx->r10 = ADD32(ctx->r10, 0XA0);
    // 0x150AD040: bne         $t2, $t3, L_150ACF4C
    if (ctx->r10 != ctx->r11) {
        // 0x150AD044: addiu       $t6, $t6, 0x1
        ctx->r14 = ADD32(ctx->r14, 0X1);
            goto L_150ACF4C;
    }
    // 0x150AD044: addiu       $t6, $t6, 0x1
    ctx->r14 = ADD32(ctx->r14, 0X1);
    // 0x150AD048: beq         $a0, $zero, L_150AD1CC
    if (ctx->r4 == 0) {
        // 0x150AD04C: lui         $a1, 0x800D
        ctx->r5 = S32(0X800D << 16);
            goto L_150AD1CC;
    }
    // 0x150AD04C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150AD050: addiu       $a1, $a1, 0x37E0
    ctx->r5 = ADD32(ctx->r5, 0X37E0);
    // 0x150AD054: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x150AD058: jal         0x150A44F0
    // 0x150AD05C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_150A44F0(rdram, ctx);
        goto after_3;
    // 0x150AD05C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
    // 0x150AD060: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150AD064: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x150AD068: addiu       $s4, $s4, 0x37E0
    ctx->r20 = ADD32(ctx->r20, 0X37E0);
    // 0x150AD06C: addu        $s1, $s4, $fp
    ctx->r17 = ADD32(ctx->r20, ctx->r30);
    // 0x150AD070: addu        $s1, $s1, $fp
    ctx->r17 = ADD32(ctx->r17, ctx->r30);
    // 0x150AD074: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150AD078: lw          $t1, -0x4108($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4108);
    // 0x150AD07C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x150AD080: lw          $a2, -0x41C0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X41C0);
    // 0x150AD084: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x150AD088: bnel        $s3, $zero, L_150AD094
    if (ctx->r19 != 0) {
        // 0x150AD08C: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_150AD094;
    }
    goto skip_16;
    // 0x150AD08C: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    skip_16:
    // 0x150AD090: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_150AD094:
    // 0x150AD094: lhu         $t2, 0x0($s4)
    ctx->r10 = MEM_HU(ctx->r20, 0X0);
    // 0x150AD098: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x150AD09C: sll         $fp, $t2, 2
    ctx->r30 = S32(ctx->r10 << 2);
    // 0x150AD0A0: addu        $fp, $fp, $t1
    ctx->r30 = ADD32(ctx->r30, ctx->r9);
    // 0x150AD0A4: lw          $fp, 0x0($fp)
    ctx->r30 = MEM_W(ctx->r30, 0X0);
    // 0x150AD0A8: mult        $t2, $t0
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150AD0AC: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150AD0B0: lw          $t0, -0x410C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X410C);
    // 0x150AD0B4: mflo        $s2
    ctx->r18 = lo;
    // 0x150AD0B8: addu        $s2, $s2, $t0
    ctx->r18 = ADD32(ctx->r18, ctx->r8);
    // 0x150AD0BC: lhu         $t2, 0x58($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X58);
    // 0x150AD0C0: lhu         $s3, 0x56($s2)
    ctx->r19 = MEM_HU(ctx->r18, 0X56);
    // 0x150AD0C4: addu        $s3, $s3, $t2
    ctx->r19 = ADD32(ctx->r19, ctx->r10);
L_150AD0C8:
    // 0x150AD0C8: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x150AD0CC: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x150AD0D0: sll         $t0, $t2, 3
    ctx->r8 = S32(ctx->r10 << 3);
    // 0x150AD0D4: addu        $t6, $a2, $t0
    ctx->r14 = ADD32(ctx->r6, ctx->r8);
    // 0x150AD0D8: addu        $t9, $a3, $t0
    ctx->r25 = ADD32(ctx->r7, ctx->r8);
    // 0x150AD0DC: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x150AD0E0: lh          $t8, 0x0($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X0);
    // 0x150AD0E4: mtc1        $t7, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r15;
    // 0x150AD0E8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150AD0EC: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x150AD0F0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150AD0F4: mul.s       $f5, $f26, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = MUL_S(ctx->f26.fl, ctx->f3.fl);
    // 0x150AD0F8: sub.s       $f2, $f27, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f27.fl - ctx->f4.fl;
    // 0x150AD0FC: lh          $t8, 0x4($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X4);
    // 0x150AD100: add.s       $f2, $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f5.fl;
    // 0x150AD104: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150AD108: c.ult.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150AD10C: bc1fl       L_150AD114
    if (!c1cs) {
        // 0x150AD110: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_150AD114;
    }
    goto skip_17;
    // 0x150AD110: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    skip_17:
L_150AD114:
    // 0x150AD114: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x150AD118: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150AD11C: add.s       $f2, $f5, $f27
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f2.fl = ctx->f5.fl + ctx->f27.fl;
    // 0x150AD120: lh          $t7, 0x4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X4);
    // 0x150AD124: sub.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x150AD128: mtc1        $t7, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r15;
    // 0x150AD12C: c.ult.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150AD130: bc1fl       L_150AD13C
    if (!c1cs) {
        // 0x150AD134: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_150AD13C;
    }
    goto skip_18;
    // 0x150AD134: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    skip_18:
    // 0x150AD138: beq         $t4, $zero, L_150AD144
    if (ctx->r12 == 0) {
        // 0x150AD13C: addiu       $t5, $t5, 0x1
        ctx->r13 = ADD32(ctx->r13, 0X1);
            goto L_150AD144;
    }
L_150AD13C:
    // 0x150AD13C: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x150AD140: bne         $t4, $t5, L_150AD18C
    if (ctx->r12 != ctx->r13) {
        // 0x150AD144: cvt.s.w     $f3, $f3
        CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
            goto L_150AD18C;
    }
L_150AD144:
    // 0x150AD144: cvt.s.w     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f3.fl = CVT_S_W(ctx->f_odd[(3 - 1) * 2]);
    // 0x150AD148: sub.s       $f1, $f27, $f4
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 27);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f27.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f1.fl = ctx->f27.fl - ctx->f4.fl;
    // 0x150AD14C: mul.s       $f5, $f26, $f3
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f5.fl = MUL_S(ctx->f26.fl, ctx->f3.fl);
    // 0x150AD150: lh          $t8, 0x0($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X0);
    // 0x150AD154: add.s       $f2, $f5, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f5.fl + ctx->f1.fl;
    // 0x150AD158: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150AD15C: c.ult.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150AD160: bc1fl       L_150AD16C
    if (!c1cs) {
        // 0x150AD164: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_150AD16C;
    }
    goto skip_19;
    // 0x150AD164: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    skip_19:
    // 0x150AD168: beq         $t4, $zero, L_150AD174
    if (ctx->r12 == 0) {
        // 0x150AD16C: addiu       $t5, $t5, 0x1
        ctx->r13 = ADD32(ctx->r13, 0X1);
            goto L_150AD174;
    }
L_150AD16C:
    // 0x150AD16C: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x150AD170: bne         $t4, $t5, L_150AD18C
    if (ctx->r12 != ctx->r13) {
        // 0x150AD174: cvt.s.w     $f4, $f4
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
            goto L_150AD18C;
    }
L_150AD174:
    // 0x150AD174: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150AD178: add.s       $f2, $f5, $f27
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 27);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f27.fl); 
    ctx->f2.fl = ctx->f5.fl + ctx->f27.fl;
    // 0x150AD17C: sub.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x150AD180: c.ult.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150AD184: bc1fl       L_150AD18C
    if (!c1cs) {
        // 0x150AD188: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_150AD18C;
    }
    goto skip_20;
    // 0x150AD188: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    skip_20:
L_150AD18C:
    // 0x150AD18C: beq         $t4, $zero, L_150AD1B4
    if (ctx->r12 == 0) {
        // 0x150AD190: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_150AD1B4;
    }
    // 0x150AD190: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150AD194: beq         $t4, $at, L_150AD1B4
    if (ctx->r12 == ctx->r1) {
        // 0x150AD198: nop
    
            goto L_150AD1B4;
    }
    // 0x150AD198: nop

    // 0x150AD19C: jal         0x150AD364
    // 0x150AD1A0: nop

    func_150AD364(rdram, ctx);
        goto after_4;
    // 0x150AD1A0: nop

    after_4:
    // 0x150AD1A4: beq         $v0, $zero, L_150AD1B4
    if (ctx->r2 == 0) {
        // 0x150AD1A8: nop
    
            goto L_150AD1B4;
    }
    // 0x150AD1A8: nop

    // 0x150AD1AC: lhu         $s6, 0x0($s4)
    ctx->r22 = MEM_HU(ctx->r20, 0X0);
    // 0x150AD1B0: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_150AD1B4:
    // 0x150AD1B4: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x150AD1B8: bne         $t2, $s3, L_150AD0C8
    if (ctx->r10 != ctx->r19) {
        // 0x150AD1BC: nop
    
            goto L_150AD0C8;
    }
    // 0x150AD1BC: nop

    // 0x150AD1C0: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x150AD1C4: bne         $s4, $s1, L_150AD094
    if (ctx->r20 != ctx->r17) {
        // 0x150AD1C8: nop
    
            goto L_150AD094;
    }
    // 0x150AD1C8: nop

L_150AD1CC:
    // 0x150AD1CC: beq         $s0, $zero, L_150AD2FC
    if (ctx->r16 == 0) {
        // 0x150AD1D0: addiu       $v0, $zero, 0x0
        ctx->r2 = ADD32(0, 0X0);
            goto L_150AD2FC;
    }
    // 0x150AD1D0: addiu       $v0, $zero, 0x0
    ctx->r2 = ADD32(0, 0X0);
    // 0x150AD1D4: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x150AD1D8: beq         $t0, $zero, L_150AD1E4
    if (ctx->r8 == 0) {
        // 0x150AD1DC: lw          $t1, 0x90($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X90);
            goto L_150AD1E4;
    }
    // 0x150AD1DC: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x150AD1E0: sw          $s5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r21;
L_150AD1E4:
    // 0x150AD1E4: beq         $t1, $zero, L_150AD1F0
    if (ctx->r9 == 0) {
        // 0x150AD1E8: lw          $t0, 0x94($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X94);
            goto L_150AD1F0;
    }
    // 0x150AD1E8: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x150AD1EC: swc1        $f29, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f_odd[(29 - 1) * 2];
L_150AD1F0:
    // 0x150AD1F0: beq         $t0, $zero, L_150AD1FC
    if (ctx->r8 == 0) {
        // 0x150AD1F4: lw          $t1, 0x98($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X98);
            goto L_150AD1FC;
    }
    // 0x150AD1F4: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    // 0x150AD1F8: swc1        $f30, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f30.u32l;
L_150AD1FC:
    // 0x150AD1FC: beq         $t1, $zero, L_150AD208
    if (ctx->r9 == 0) {
        // 0x150AD200: lw          $t6, 0x8C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X8C);
            goto L_150AD208;
    }
    // 0x150AD200: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x150AD204: swc1        $f31, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f_odd[(31 - 1) * 2];
L_150AD208:
    // 0x150AD208: beq         $t6, $zero, L_150AD28C
    if (ctx->r14 == 0) {
        // 0x150AD20C: nop
    
            goto L_150AD28C;
    }
    // 0x150AD20C: nop

    // 0x150AD210: beq         $s5, $zero, L_150AD28C
    if (ctx->r21 == 0) {
        // 0x150AD214: or          $t7, $s5, $zero
        ctx->r15 = ctx->r21 | 0;
            goto L_150AD28C;
    }
    // 0x150AD214: or          $t7, $s5, $zero
    ctx->r15 = ctx->r21 | 0;
    // 0x150AD218: addiu       $t3, $t7, 0xC
    ctx->r11 = ADD32(ctx->r15, 0XC);
    // 0x150AD21C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
L_150AD220:
    // 0x150AD220: bne         $s6, $t4, L_150AD230
    if (ctx->r22 != ctx->r12) {
        // 0x150AD224: nop
    
            goto L_150AD230;
    }
    // 0x150AD224: nop

    // 0x150AD228: j           L_150AD264
    // 0x150AD22C: lw          $t5, 0x0($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X0);
        goto L_150AD264;
    // 0x150AD22C: lw          $t5, 0x0($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X0);
L_150AD230:
    // 0x150AD230: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x150AD234: mult        $t0, $s6
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150AD238: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x150AD23C: lw          $t5, -0x410C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X410C);
    // 0x150AD240: mflo        $t0
    ctx->r8 = lo;
    // 0x150AD244: addu        $gp, $t5, $t0
    ctx->r28 = ADD32(ctx->r13, ctx->r8);
    // 0x150AD248: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x150AD24C: lw          $t5, -0x4108($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4108);
    // 0x150AD250: sll         $t0, $s6, 2
    ctx->r8 = S32(ctx->r22 << 2);
    // 0x150AD254: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x150AD258: lw          $t5, 0x0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X0);
    // 0x150AD25C: lw          $t0, 0x0($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X0);
    // 0x150AD260: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
L_150AD264:
    // 0x150AD264: lh          $t0, 0x0($t5)
    ctx->r8 = MEM_H(ctx->r13, 0X0);
    // 0x150AD268: lh          $t1, 0x2($t5)
    ctx->r9 = MEM_H(ctx->r13, 0X2);
    // 0x150AD26C: lh          $t2, 0x4($t5)
    ctx->r10 = MEM_H(ctx->r13, 0X4);
    // 0x150AD270: sh          $t0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r8;
    // 0x150AD274: sh          $t1, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r9;
    // 0x150AD278: sh          $t2, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r10;
    // 0x150AD27C: addiu       $t6, $t6, 0x6
    ctx->r14 = ADD32(ctx->r14, 0X6);
    // 0x150AD280: addiu       $t7, $t7, 0x4
    ctx->r15 = ADD32(ctx->r15, 0X4);
    // 0x150AD284: bne         $t7, $t3, L_150AD220
    if (ctx->r15 != ctx->r11) {
        // 0x150AD288: nop
    
            goto L_150AD220;
    }
    // 0x150AD288: nop

L_150AD28C:
    // 0x150AD28C: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x150AD290: beq         $t0, $zero, L_150AD29C
    if (ctx->r8 == 0) {
        // 0x150AD294: lw          $t1, 0xA0($sp)
        ctx->r9 = MEM_W(ctx->r29, 0XA0);
            goto L_150AD29C;
    }
    // 0x150AD294: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x150AD298: swc1        $f28, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f28.u32l;
L_150AD29C:
    // 0x150AD29C: beq         $t1, $zero, L_150AD2A8
    if (ctx->r9 == 0) {
        // 0x150AD2A0: lw          $t2, 0xA4($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XA4);
            goto L_150AD2A8;
    }
    // 0x150AD2A0: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x150AD2A4: sw          $s6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r22;
L_150AD2A8:
    // 0x150AD2A8: beq         $t2, $zero, L_150AD2F8
    if (ctx->r10 == 0) {
        // 0x150AD2AC: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_150AD2F8;
    }
    // 0x150AD2AC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150AD2B0: bne         $s0, $t1, L_150AD2CC
    if (ctx->r16 != ctx->r9) {
        // 0x150AD2B4: sll         $t1, $s7, 2
        ctx->r9 = S32(ctx->r23 << 2);
            goto L_150AD2CC;
    }
    // 0x150AD2B4: sll         $t1, $s7, 2
    ctx->r9 = S32(ctx->r23 << 2);
    // 0x150AD2B8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150AD2BC: lw          $t0, -0x41A4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X41A4);
    // 0x150AD2C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x150AD2C4: j           L_150AD2F4
    // 0x150AD2C8: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
        goto L_150AD2F4;
    // 0x150AD2C8: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
L_150AD2CC:
    // 0x150AD2CC: lw          $t0, 0x44($gp)
    ctx->r8 = MEM_W(ctx->r28, 0X44);
    // 0x150AD2D0: beq         $t0, $zero, L_150AD2F0
    if (ctx->r8 == 0) {
        // 0x150AD2D4: nop
    
            goto L_150AD2F0;
    }
    // 0x150AD2D4: nop

    // 0x150AD2D8: lhu         $t1, 0x58($gp)
    ctx->r9 = MEM_HU(ctx->r28, 0X58);
    // 0x150AD2DC: subu        $t1, $s7, $t1
    ctx->r9 = SUB32(ctx->r23, ctx->r9);
    // 0x150AD2E0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150AD2E4: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x150AD2E8: j           L_150AD2F4
    // 0x150AD2EC: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
        goto L_150AD2F4;
    // 0x150AD2EC: lw          $t1, 0x0($t3)
    ctx->r9 = MEM_W(ctx->r11, 0X0);
L_150AD2F0:
    // 0x150AD2F0: lw          $t1, 0x40($gp)
    ctx->r9 = MEM_W(ctx->r28, 0X40);
L_150AD2F4:
    // 0x150AD2F4: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
L_150AD2F8:
    // 0x150AD2F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150AD2FC:
    // 0x150AD2FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x150AD300: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x150AD304: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x150AD308: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x150AD30C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x150AD310: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x150AD314: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x150AD318: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x150AD31C: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x150AD320: lw          $gp, 0x34($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X34);
    // 0x150AD324: lwc1        $f20, 0x38($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150AD328: lwc1        $f21, 0x3C($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x150AD32C: lwc1        $f22, 0x40($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150AD330: lwc1        $f23, 0x44($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X44);
    // 0x150AD334: lwc1        $f24, 0x48($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150AD338: lwc1        $f25, 0x4C($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x150AD33C: lwc1        $f26, 0x50($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150AD340: lwc1        $f27, 0x54($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X54);
    // 0x150AD344: lwc1        $f28, 0x58($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150AD348: lwc1        $f29, 0x5C($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X5C);
    // 0x150AD34C: lwc1        $f30, 0x60($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150AD350: lwc1        $f31, 0x64($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X64);
    // 0x150AD354: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x150AD358: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x150AD35C: jr          $ra
    // 0x150AD360: nop

    return;
    return;
    // 0x150AD360: nop

;}
RECOMP_FUNC void func_1506DB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506DB84: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506DB88: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506DB8C: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506DB90: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506DB94: sb          $t6, 0x239($t7)
    MEM_B(0X239, ctx->r15) = ctx->r14;
    // 0x1506DB98: jr          $ra
    // 0x1506DB9C: nop

    return;
    return;
    // 0x1506DB9C: nop

;}
RECOMP_FUNC void func_15144AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15144AA8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15144AAC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15144AB0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15144AB4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x15144AB8: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x15144ABC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15144AC0: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x15144AC4: lw          $t6, -0x4010($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4010);
    // 0x15144AC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15144ACC: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x15144AD0: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x15144AD4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x15144AD8: lwc1        $f2, 0x380($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, 0X380);
    // 0x15144ADC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x15144AE0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15144AE4: nop

    // 0x15144AE8: bc1fl       L_15144B08
    if (!c1cs) {
        // 0x15144AEC: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_15144B08;
    }
    goto skip_0;
    // 0x15144AEC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_0:
    // 0x15144AF0: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
L_15144AF4:
    // 0x15144AF4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15144AF8: nop

    // 0x15144AFC: bc1tl       L_15144AF4
    if (c1cs) {
        // 0x15144B00: sub.s       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_15144AF4;
    }
    goto skip_1;
    // 0x15144B00: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x15144B04: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_15144B08:
    // 0x15144B08: nop

    // 0x15144B0C: bc1fl       L_15144B2C
    if (!c1cs) {
        // 0x15144B10: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_15144B2C;
    }
    goto skip_2;
    // 0x15144B10: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_2:
    // 0x15144B14: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
L_15144B18:
    // 0x15144B18: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x15144B1C: nop

    // 0x15144B20: bc1tl       L_15144B18
    if (c1cs) {
        // 0x15144B24: add.s       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
            goto L_15144B18;
    }
    goto skip_3;
    // 0x15144B24: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    skip_3:
    // 0x15144B28: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_15144B2C:
    // 0x15144B2C: jr          $ra
    // 0x15144B30: nop

    return;
    return;
    // 0x15144B30: nop

;}
RECOMP_FUNC void func_1514DCF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DCF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514DCF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DCFC: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x1514DD00: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1514DD04: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x1514DD08: beq         $v0, $zero, L_1514DD14
    if (ctx->r2 == 0) {
        // 0x1514DD0C: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_1514DD14;
    }
    // 0x1514DD0C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1514DD10: sb          $t6, 0x94($v0)
    MEM_B(0X94, ctx->r2) = ctx->r14;
L_1514DD14:
    // 0x1514DD14: jal         0x15083568
    // 0x1514DD18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15083568(rdram, ctx);
        goto after_0;
    // 0x1514DD18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1514DD1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514DD20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514DD24: jr          $ra
    // 0x1514DD28: nop

    return;
    return;
    // 0x1514DD28: nop

;}
RECOMP_FUNC void func_15144C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15144C2C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15144C30: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x15144C34: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15144C38: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x15144C3C: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x15144C40: slti        $at, $a0, 0x100
    ctx->r1 = SIGNED(ctx->r4) < 0X100 ? 1 : 0;
    // 0x15144C44: bne         $at, $zero, L_15144C64
    if (ctx->r1 != 0) {
        // 0x15144C48: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_15144C64;
    }
    // 0x15144C48: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x15144C4C: addiu       $v1, $v1, -0xFF
    ctx->r3 = ADD32(ctx->r3, -0XFF);
L_15144C50:
    // 0x15144C50: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x15144C54: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15144C58: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x15144C5C: beql        $at, $zero, L_15144C50
    if (ctx->r1 == 0) {
        // 0x15144C60: addiu       $v1, $v1, -0xFF
        ctx->r3 = ADD32(ctx->r3, -0XFF);
            goto L_15144C50;
    }
    goto skip_0;
    // 0x15144C60: addiu       $v1, $v1, -0xFF
    ctx->r3 = ADD32(ctx->r3, -0XFF);
    skip_0:
L_15144C64:
    // 0x15144C64: bgezl       $v1, L_15144C84
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15144C68: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_15144C84;
    }
    goto skip_1;
    // 0x15144C68: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_1:
    // 0x15144C6C: addiu       $v1, $v1, 0xFF
    ctx->r3 = ADD32(ctx->r3, 0XFF);
L_15144C70:
    // 0x15144C70: sll         $t1, $v1, 16
    ctx->r9 = S32(ctx->r3 << 16);
    // 0x15144C74: sra         $v1, $t1, 16
    ctx->r3 = S32(SIGNED(ctx->r9) >> 16);
    // 0x15144C78: bltzl       $v1, L_15144C70
    if (SIGNED(ctx->r3) < 0) {
        // 0x15144C7C: addiu       $v1, $v1, 0xFF
        ctx->r3 = ADD32(ctx->r3, 0XFF);
            goto L_15144C70;
    }
    goto skip_2;
    // 0x15144C7C: addiu       $v1, $v1, 0xFF
    ctx->r3 = ADD32(ctx->r3, 0XFF);
    skip_2:
    // 0x15144C80: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15144C84:
    // 0x15144C84: jr          $ra
    // 0x15144C88: nop

    return;
    return;
    // 0x15144C88: nop

;}
RECOMP_FUNC void func_1519072C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519072C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15190730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15190734: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15190738: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1519073C: lbu         $t6, 0x3B($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3B);
    // 0x15190740: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x15190744: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x15190748: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x1519074C: jal         0x151D343C
    // 0x15190750: sb          $t6, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r14;
    func_151D343C(rdram, ctx);
        goto after_0;
    // 0x15190750: sb          $t6, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r14;
    after_0:
    // 0x15190754: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x15190758: jal         0x1518F45C
    // 0x1519075C: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    func_1518F45C(rdram, ctx);
        goto after_1;
    // 0x1519075C: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    after_1:
    // 0x15190760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15190764: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15190768: jr          $ra
    // 0x1519076C: nop

    return;
    return;
    // 0x1519076C: nop

;}
RECOMP_FUNC void func_15002FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15002FA0: lui         $at, 0xF0F0
    ctx->r1 = S32(0XF0F0 << 16);
    // 0x15002FA4: ori         $at, $at, 0xF0F0
    ctx->r1 = ctx->r1 | 0XF0F0;
    // 0x15002FA8: xor         $v0, $a0, $at
    ctx->r2 = ctx->r4 ^ ctx->r1;
    // 0x15002FAC: jr          $ra
    // 0x15002FB0: nop

    return;
    return;
    // 0x15002FB0: nop

;}
RECOMP_FUNC void func_151AB854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AB854: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151AB858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AB85C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x151AB860: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x151AB864: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151AB868: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x151AB86C: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x151AB870: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x151AB874: beql        $v0, $zero, L_151AB8A8
    if (ctx->r2 == 0) {
        // 0x151AB878: sw          $v1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r3;
            goto L_151AB8A8;
    }
    goto skip_0;
    // 0x151AB878: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    skip_0:
    // 0x151AB87C: beq         $v0, $at, L_151AB8A4
    if (ctx->r2 == ctx->r1) {
        // 0x151AB880: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151AB8A4;
    }
    // 0x151AB880: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151AB884: beq         $v0, $at, L_151AB8A4
    if (ctx->r2 == ctx->r1) {
        // 0x151AB888: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_151AB8A4;
    }
    // 0x151AB888: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151AB88C: beq         $v0, $at, L_151AB8A4
    if (ctx->r2 == ctx->r1) {
        // 0x151AB890: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_151AB8A4;
    }
    // 0x151AB890: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151AB894: beq         $v0, $at, L_151AB8A4
    if (ctx->r2 == ctx->r1) {
        // 0x151AB898: addiu       $at, $zero, 0x96
        ctx->r1 = ADD32(0, 0X96);
            goto L_151AB8A4;
    }
    // 0x151AB898: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x151AB89C: bnel        $v0, $at, L_151AB914
    if (ctx->r2 != ctx->r1) {
        // 0x151AB8A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151AB914;
    }
    goto skip_1;
    // 0x151AB8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_151AB8A4:
    // 0x151AB8A4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
L_151AB8A8:
    // 0x151AB8A8: lbu         $t7, 0x3B($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X3B);
    // 0x151AB8AC: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
    // 0x151AB8B0: sb          $zero, 0x28($sp)
    MEM_B(0X28, ctx->r29) = 0;
    // 0x151AB8B4: sb          $zero, 0x29($sp)
    MEM_B(0X29, ctx->r29) = 0;
    // 0x151AB8B8: sb          $t7, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r15;
    // 0x151AB8BC: lbu         $t9, 0x4($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X4);
    // 0x151AB8C0: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x151AB8C4: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x151AB8C8: bnel        $t9, $at, L_151AB8DC
    if (ctx->r25 != ctx->r1) {
        // 0x151AB8CC: sb          $zero, 0x2A($sp)
        MEM_B(0X2A, ctx->r29) = 0;
            goto L_151AB8DC;
    }
    goto skip_2;
    // 0x151AB8CC: sb          $zero, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = 0;
    skip_2:
    // 0x151AB8D0: b           L_151AB8DC
    // 0x151AB8D4: sb          $t0, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = ctx->r8;
        goto L_151AB8DC;
    // 0x151AB8D4: sb          $t0, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = ctx->r8;
    // 0x151AB8D8: sb          $zero, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = 0;
L_151AB8DC:
    // 0x151AB8DC: lbu         $t1, 0x127($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X127);
    // 0x151AB8E0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151AB8E4: beql        $t1, $at, L_151AB8FC
    if (ctx->r9 == ctx->r1) {
        // 0x151AB8E8: lw          $t4, 0x30($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X30);
            goto L_151AB8FC;
    }
    goto skip_3;
    // 0x151AB8E8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    skip_3:
    // 0x151AB8EC: lw          $t3, 0x31C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X31C);
    // 0x151AB8F0: addiu       $t2, $zero, 0x1F4
    ctx->r10 = ADD32(0, 0X1F4);
    // 0x151AB8F4: sh          $t2, 0x66($t3)
    MEM_H(0X66, ctx->r11) = ctx->r10;
    // 0x151AB8F8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
L_151AB8FC:
    // 0x151AB8FC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x151AB900: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151AB904: lbu         $a2, 0xC($t4)
    ctx->r6 = MEM_BU(ctx->r12, 0XC);
    // 0x151AB908: jal         0x15190770
    // 0x151AB90C: lbu         $a3, 0x1($t4)
    ctx->r7 = MEM_BU(ctx->r12, 0X1);
    func_15190770(rdram, ctx);
        goto after_0;
    // 0x151AB90C: lbu         $a3, 0x1($t4)
    ctx->r7 = MEM_BU(ctx->r12, 0X1);
    after_0:
    // 0x151AB910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151AB914:
    // 0x151AB914: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151AB918: jr          $ra
    // 0x151AB91C: nop

    return;
    return;
    // 0x151AB91C: nop

;}
RECOMP_FUNC void func_150B10F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B10F0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150B10F4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x150B10F8: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x150B10FC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x150B1100: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150B1104: addiu       $s1, $s1, -0x3D30
    ctx->r17 = ADD32(ctx->r17, -0X3D30);
    // 0x150B1108: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150B110C: lhu         $t7, 0x7A($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X7A);
    // 0x150B1110: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150B1114: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150B1118: addiu       $t8, $t7, 0x4000
    ctx->r24 = ADD32(ctx->r15, 0X4000);
    // 0x150B111C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x150B1120: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x150B1124: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x150B1128: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x150B112C: swc1        $f4, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->f4.u32l;
    // 0x150B1130: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150B1134: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B1138: swc1        $f6, 0x178($s0)
    MEM_W(0X178, ctx->r16) = ctx->f6.u32l;
    // 0x150B113C: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x150B1140: sb          $t6, 0x125($s0)
    MEM_B(0X125, ctx->r16) = ctx->r14;
    // 0x150B1144: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150B1148: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150B114C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150B1150: jal         0x1505A6F8
    // 0x150B1154: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    func_1505A6F8(rdram, ctx);
        goto after_0;
    // 0x150B1154: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    after_0:
    // 0x150B1158: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B115C: lwc1        $f8, -0x760($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X760);
    // 0x150B1160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150B1164: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x150B1168: nop

    // 0x150B116C: bc1fl       L_150B12C8
    if (!c1cs) {
        // 0x150B1170: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_150B12C8;
    }
    goto skip_0;
    // 0x150B1170: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_0:
    // 0x150B1174: jal         0x1505A6F8
    // 0x150B1178: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_1505A6F8(rdram, ctx);
        goto after_1;
    // 0x150B1178: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x150B117C: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150B1180: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x150B1184: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150B1188: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x150B118C: sub.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150B1190: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B1194: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x150B1198: nop

    // 0x150B119C: bc1f        L_150B11B4
    if (!c1cs) {
        // 0x150B11A0: nop
    
            goto L_150B11B4;
    }
    // 0x150B11A0: nop

    // 0x150B11A4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x150B11A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150B11AC: b           L_150B11CC
    // 0x150B11B0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
        goto L_150B11CC;
    // 0x150B11B0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_150B11B4:
    // 0x150B11B4: lwc1        $f6, -0x75C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X75C);
    // 0x150B11B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B11BC: lwc1        $f8, -0x758($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X758);
    // 0x150B11C0: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x150B11C4: sub.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x150B11C8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_150B11CC:
    // 0x150B11CC: nop

    // 0x150B11D0: bc1fl       L_150B12C8
    if (!c1cs) {
        // 0x150B11D4: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_150B12C8;
    }
    goto skip_1;
    // 0x150B11D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_1:
    // 0x150B11D8: lbu         $t1, 0xAD($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0XAD);
    // 0x150B11DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150B11E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B11E4: bnel        $t1, $at, L_150B12C8
    if (ctx->r9 != ctx->r1) {
        // 0x150B11E8: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_150B12C8;
    }
    goto skip_2;
    // 0x150B11E8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_2:
    // 0x150B11EC: lwc1        $f4, 0x174($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X174);
    // 0x150B11F0: lwc1        $f8, 0x14($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X14);
    // 0x150B11F4: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x150B11F8: lwc1        $f10, 0x178($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X178);
    // 0x150B11FC: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x150B1200: sub.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x150B1204: jal         0x1505A630
    // 0x150B1208: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    func_1505A630(rdram, ctx);
        goto after_2;
    // 0x150B1208: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    after_2:
    // 0x150B120C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B1210: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150B1214: lwc1        $f4, -0x754($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X754);
    // 0x150B1218: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B121C: lwc1        $f8, -0x750($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X750);
    // 0x150B1220: sub.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x150B1224: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x150B1228: lui         $at, 0x444D
    ctx->r1 = S32(0X444D << 16);
    // 0x150B122C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x150B1230: nop

    // 0x150B1234: bc1f        L_150B126C
    if (!c1cs) {
        // 0x150B1238: nop
    
            goto L_150B126C;
    }
    // 0x150B1238: nop

    // 0x150B123C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B1240: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B1244: lwc1        $f4, -0x74C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X74C);
    // 0x150B1248: sub.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x150B124C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150B1250: lwc1        $f6, 0x1550($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1550);
    // 0x150B1254: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150B1258: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150B125C: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x150B1260: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x150B1264: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x150B1268: swc1        $f8, -0x3D18($at)
    MEM_W(-0X3D18, ctx->r1) = ctx->f8.u32l;
L_150B126C:
    // 0x150B126C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B1270: lwc1        $f6, -0x748($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X748);
    // 0x150B1274: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150B1278: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B127C: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150B1280: addiu       $a0, $v1, -0x3000
    ctx->r4 = ADD32(ctx->r3, -0X3000);
    // 0x150B1284: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x150B1288: addiu       $t3, $sp, 0x4C
    ctx->r11 = ADD32(ctx->r29, 0X4C);
    // 0x150B128C: addiu       $t4, $sp, 0x48
    ctx->r12 = ADD32(ctx->r29, 0X48);
    // 0x150B1290: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150B1294: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150B1298: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150B129C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x150B12A0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x150B12A4: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x150B12A8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x150B12AC: jal         0x1505A184
    // 0x150B12B0: nop

    func_1505A184(rdram, ctx);
        goto after_3;
    // 0x150B12B0: nop

    after_3:
    // 0x150B12B4: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150B12B8: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150B12BC: swc1        $f6, 0x164($s1)
    MEM_W(0X164, ctx->r17) = ctx->f6.u32l;
    // 0x150B12C0: swc1        $f4, 0x168($s1)
    MEM_W(0X168, ctx->r17) = ctx->f4.u32l;
    // 0x150B12C4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_150B12C8:
    // 0x150B12C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150B12CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150B12D0: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x150B12D4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x150B12D8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150B12DC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x150B12E0: jal         0x1505E650
    // 0x150B12E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_1505E650(rdram, ctx);
        goto after_4;
    // 0x150B12E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x150B12E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150B12EC: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x150B12F0: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x150B12F4: jr          $ra
    // 0x150B12F8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    return;
    // 0x150B12F8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_15158A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15158A20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15158A24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15158A28: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15158A2C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15158A30: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15158A34: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15158A38: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
    // 0x15158A3C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15158A40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15158A44: bltzl       $v1, L_15158A7C
    if (SIGNED(ctx->r3) < 0) {
        // 0x15158A48: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_15158A7C;
    }
    goto skip_0;
    // 0x15158A48: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    skip_0:
L_15158A4C:
    // 0x15158A4C: lw          $v0, 0xE0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE0);
    // 0x15158A50: beq         $v0, $zero, L_15158A68
    if (ctx->r2 == 0) {
        // 0x15158A54: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_15158A68;
    }
    // 0x15158A54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15158A58: jal         0x100043B4
    // 0x15158A5C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x15158A5C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x15158A60: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15158A64: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
L_15158A68:
    // 0x15158A68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15158A6C: slt         $at, $v1, $s1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x15158A70: beq         $at, $zero, L_15158A4C
    if (ctx->r1 == 0) {
        // 0x15158A74: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_15158A4C;
    }
    // 0x15158A74: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15158A78: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
L_15158A7C:
    // 0x15158A7C: lw          $v0, 0xF0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XF0);
    // 0x15158A80: beq         $v0, $zero, L_15158A90
    if (ctx->r2 == 0) {
        // 0x15158A84: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_15158A90;
    }
    // 0x15158A84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15158A88: jal         0x100043B4
    // 0x15158A8C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_100043B4(rdram, ctx);
        goto after_1;
    // 0x15158A8C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
L_15158A90:
    // 0x15158A90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15158A94: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15158A98: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15158A9C: jr          $ra
    // 0x15158AA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x15158AA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_150F2A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F2A60: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150F2A64: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150F2A68: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x150F2A6C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x150F2A70: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x150F2A74: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x150F2A78: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150F2A7C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x150F2A80: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150F2A84: lw          $t6, -0x3A14($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A14);
    // 0x150F2A88: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150F2A8C: beql        $t6, $zero, L_150F2C70
    if (ctx->r14 == 0) {
        // 0x150F2A90: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150F2C70;
    }
    goto skip_0;
    // 0x150F2A90: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x150F2A94: lw          $t7, -0x3A14($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A14);
    // 0x150F2A98: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x150F2A9C: addiu       $s4, $s4, -0x406C
    ctx->r20 = ADD32(ctx->r20, -0X406C);
    // 0x150F2AA0: lbu         $t8, 0x120($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X120);
    // 0x150F2AA4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150F2AA8: addiu       $s3, $zero, 0xA0
    ctx->r19 = ADD32(0, 0XA0);
    // 0x150F2AAC: bne         $t8, $zero, L_150F2C6C
    if (ctx->r24 != 0) {
        // 0x150F2AB0: lui         $s2, 0x800E
        ctx->r18 = S32(0X800E << 16);
            goto L_150F2C6C;
    }
    // 0x150F2AB0: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x150F2AB4: addiu       $s2, $s2, -0x410C
    ctx->r18 = ADD32(ctx->r18, -0X410C);
    // 0x150F2AB8: addiu       $s1, $zero, 0xFA
    ctx->r17 = ADD32(0, 0XFA);
    // 0x150F2ABC: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
L_150F2AC0:
    // 0x150F2AC0: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x150F2AC4: jal         0x151149AC
    // 0x150F2AC8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x150F2AC8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_0:
    // 0x150F2ACC: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x150F2AD0: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x150F2AD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150F2AD8: subu        $t1, $v0, $t0
    ctx->r9 = SUB32(ctx->r2, ctx->r8);
    // 0x150F2ADC: div         $zero, $t1, $s3
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r19)));
    // 0x150F2AE0: mflo        $v1
    ctx->r3 = lo;
    // 0x150F2AE4: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x150F2AE8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x150F2AEC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x150F2AF0: bne         $s3, $zero, L_150F2AFC
    if (ctx->r19 != 0) {
        // 0x150F2AF4: nop
    
            goto L_150F2AFC;
    }
    // 0x150F2AF4: nop

    // 0x150F2AF8: break       7
    do_break(353315576);
L_150F2AFC:
    // 0x150F2AFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150F2B00: bne         $s3, $at, L_150F2B14
    if (ctx->r19 != ctx->r1) {
        // 0x150F2B04: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150F2B14;
    }
    // 0x150F2B04: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150F2B08: bne         $t1, $at, L_150F2B14
    if (ctx->r9 != ctx->r1) {
        // 0x150F2B0C: nop
    
            goto L_150F2B14;
    }
    // 0x150F2B0C: nop

    // 0x150F2B10: break       6
    do_break(353315600);
L_150F2B14:
    // 0x150F2B14: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x150F2B18: beq         $t6, $zero, L_150F2BF0
    if (ctx->r14 == 0) {
        // 0x150F2B1C: slti        $at, $s0, 0x2
        ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_150F2BF0;
    }
    // 0x150F2B1C: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x150F2B20: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150F2B24: lbu         $v0, -0x3BF4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BF4);
    // 0x150F2B28: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x150F2B2C: ori         $at, $at, 0xC2D0
    ctx->r1 = ctx->r1 | 0XC2D0;
    // 0x150F2B30: beq         $v0, $zero, L_150F2B70
    if (ctx->r2 == 0) {
        // 0x150F2B34: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_150F2B70;
    }
    // 0x150F2B34: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x150F2B38: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x150F2B3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150F2B40: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x150F2B44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150F2B48: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x150F2B4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150F2B50: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x150F2B54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150F2B58: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150F2B5C: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x150F2B60: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x150F2B64: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x150F2B68: jal         0x15060F28
    // 0x150F2B6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_1;
    // 0x150F2B6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_150F2B70:
    // 0x150F2B70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F2B74: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150F2B78: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150F2B7C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150F2B80: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150F2B84: sb          $zero, -0x3B66($at)
    MEM_B(-0X3B66, ctx->r1) = 0;
    // 0x150F2B88: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x150F2B8C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x150F2B90: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150F2B94: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x150F2B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150F2B9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F2BA0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150F2BA4: jal         0x15136C3C
    // 0x150F2BA8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15136C3C(rdram, ctx);
        goto after_2;
    // 0x150F2BA8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x150F2BAC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150F2BB0: addiu       $t3, $zero, 0x3E8
    ctx->r11 = ADD32(0, 0X3E8);
    // 0x150F2BB4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150F2BB8: addiu       $a1, $a1, -0x3D30
    ctx->r5 = ADD32(ctx->r5, -0X3D30);
    // 0x150F2BBC: addiu       $a0, $zero, 0x627
    ctx->r4 = ADD32(0, 0X627);
    // 0x150F2BC0: addiu       $a2, $zero, 0x6D60
    ctx->r6 = ADD32(0, 0X6D60);
    // 0x150F2BC4: jal         0x10010630
    // 0x150F2BC8: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    func_10010630(rdram, ctx);
        goto after_3;
    // 0x150F2BC8: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    after_3:
    // 0x150F2BCC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150F2BD0: jal         0x15145A50
    // 0x150F2BD4: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    func_15145A50(rdram, ctx);
        goto after_4;
    // 0x150F2BD4: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    after_4:
    // 0x150F2BD8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150F2BDC: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x150F2BE0: jal         0x1507CD64
    // 0x150F2BE4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_1507CD64(rdram, ctx);
        goto after_5;
    // 0x150F2BE4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_5:
    // 0x150F2BE8: b           L_150F2BF8
    // 0x150F2BEC: nop

        goto L_150F2BF8;
    // 0x150F2BEC: nop

L_150F2BF0:
    // 0x150F2BF0: bnel        $at, $zero, L_150F2AC0
    if (ctx->r1 != 0) {
        // 0x150F2BF4: subu        $a0, $s1, $s0
        ctx->r4 = SUB32(ctx->r17, ctx->r16);
            goto L_150F2AC0;
    }
    goto skip_1;
    // 0x150F2BF4: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    skip_1:
L_150F2BF8:
    // 0x150F2BF8: jal         0x15083E90
    // 0x150F2BFC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_15083E90(rdram, ctx);
        goto after_6;
    // 0x150F2BFC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_6:
    // 0x150F2C00: beq         $v0, $zero, L_150F2C10
    if (ctx->r2 == 0) {
        // 0x150F2C04: lui         $s2, 0x800C
        ctx->r18 = S32(0X800C << 16);
            goto L_150F2C10;
    }
    // 0x150F2C04: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x150F2C08: b           L_150F2C14
    // 0x150F2C0C: lw          $s0, 0x2E4($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X2E4);
        goto L_150F2C14;
    // 0x150F2C0C: lw          $s0, 0x2E4($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X2E4);
L_150F2C10:
    // 0x150F2C10: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_150F2C14:
    // 0x150F2C14: addiu       $s2, $s2, -0x1B10
    ctx->r18 = ADD32(ctx->r18, -0X1B10);
    // 0x150F2C18: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x150F2C1C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150F2C20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F2C24: jal         0x15196318
    // 0x150F2C28: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    func_15196318(rdram, ctx);
        goto after_7;
    // 0x150F2C28: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    after_7:
    // 0x150F2C2C: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x150F2C30: negu        $s1, $s0
    ctx->r17 = SUB32(0, ctx->r16);
    // 0x150F2C34: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x150F2C38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150F2C3C: jal         0x15196318
    // 0x150F2C40: lw          $a0, 0x4($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X4);
    func_15196318(rdram, ctx);
        goto after_8;
    // 0x150F2C40: lw          $a0, 0x4($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X4);
    after_8:
    // 0x150F2C44: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x150F2C48: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150F2C4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F2C50: jal         0x15196318
    // 0x150F2C54: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    func_15196318(rdram, ctx);
        goto after_9;
    // 0x150F2C54: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    after_9:
    // 0x150F2C58: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x150F2C5C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x150F2C60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F2C64: jal         0x15196318
    // 0x150F2C68: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    func_15196318(rdram, ctx);
        goto after_10;
    // 0x150F2C68: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    after_10:
L_150F2C6C:
    // 0x150F2C6C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_150F2C70:
    // 0x150F2C70: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150F2C74: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x150F2C78: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x150F2C7C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x150F2C80: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x150F2C84: jr          $ra
    // 0x150F2C88: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x150F2C88: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_150006E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150006E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150006E4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150006E8: addiu       $v1, $v1, -0x64E4
    ctx->r3 = ADD32(ctx->r3, -0X64E4);
    // 0x150006EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150006F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150006F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150006F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150006FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15000700: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15000704: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x15000708: lw          $v0, 0xDF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XDF0);
    // 0x1500070C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15000710: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x15000714: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15000718: bgez        $t6, L_1500072C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1500071C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1500072C;
    }
    // 0x1500071C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15000720: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15000724: nop

    // 0x15000728: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1500072C:
    // 0x1500072C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15000730: swc1        $f6, -0x64E0($at)
    MEM_W(-0X64E0, ctx->r1) = ctx->f6.u32l;
    // 0x15000734: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x15000738: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500073C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15000740: bgez        $t7, L_15000754
    if (SIGNED(ctx->r15) >= 0) {
        // 0x15000744: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_15000754;
    }
    // 0x15000744: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15000748: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1500074C: nop

    // 0x15000750: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_15000754:
    // 0x15000754: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
    // 0x15000758: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1500075C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15000760: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15000764: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15000768: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1500076C: jal         0x15000940
    // 0x15000770: swc1        $f6, 0x3670($at)
    MEM_W(0X3670, ctx->r1) = ctx->f6.u32l;
    func_15000940(rdram, ctx);
        goto after_0;
    // 0x15000770: swc1        $f6, 0x3670($at)
    MEM_W(0X3670, ctx->r1) = ctx->f6.u32l;
    after_0:
    // 0x15000774: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x15000778: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1500077C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x15000780: addiu       $a2, $a2, -0x647C
    ctx->r6 = ADD32(ctx->r6, -0X647C);
    // 0x15000784: addiu       $a0, $a0, -0x6488
    ctx->r4 = ADD32(ctx->r4, -0X6488);
    // 0x15000788: addiu       $a1, $a1, -0x6498
    ctx->r5 = ADD32(ctx->r5, -0X6498);
L_1500078C:
    // 0x1500078C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15000790: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x15000794: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_15000798:
    // 0x15000798: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1500079C: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x150007A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150007A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150007A8: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x150007AC: bne         $at, $zero, L_15000798
    if (ctx->r1 != 0) {
        // 0x150007B0: sb          $zero, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = 0;
            goto L_15000798;
    }
    // 0x150007B0: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
    // 0x150007B4: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x150007B8: sltu        $at, $a0, $a2
    ctx->r1 = ctx->r4 < ctx->r6 ? 1 : 0;
    // 0x150007BC: bne         $at, $zero, L_1500078C
    if (ctx->r1 != 0) {
        // 0x150007C0: addiu       $a1, $a1, 0x3
        ctx->r5 = ADD32(ctx->r5, 0X3);
            goto L_1500078C;
    }
    // 0x150007C0: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x150007C4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150007C8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150007CC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150007D0: addiu       $a0, $a0, -0x6475
    ctx->r4 = ADD32(ctx->r4, -0X6475);
    // 0x150007D4: addiu       $v0, $v0, -0x6478
    ctx->r2 = ADD32(ctx->r2, -0X6478);
    // 0x150007D8: addiu       $v1, $v1, -0x647C
    ctx->r3 = ADD32(ctx->r3, -0X647C);
L_150007DC:
    // 0x150007DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150007E0: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x150007E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150007E8: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
    // 0x150007EC: bne         $at, $zero, L_150007DC
    if (ctx->r1 != 0) {
        // 0x150007F0: sb          $zero, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = 0;
            goto L_150007DC;
    }
    // 0x150007F0: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x150007F4: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    // 0x150007F8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150007FC: sb          $s1, -0x6475($at)
    MEM_B(-0X6475, ctx->r1) = ctx->r17;
    // 0x15000800: lui         $s4, 0x8008
    ctx->r20 = S32(0X8008 << 16);
    // 0x15000804: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15000808: addiu       $s4, $s4, 0x2FA0
    ctx->r20 = ADD32(ctx->r20, 0X2FA0);
    // 0x1500080C: sb          $s1, -0x6474($at)
    MEM_B(-0X6474, ctx->r1) = ctx->r17;
    // 0x15000810: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x15000814: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x15000818: addiu       $s3, $s3, -0x61E0
    ctx->r19 = ADD32(ctx->r19, -0X61E0);
    // 0x1500081C: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x15000820: sb          $t8, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r24;
    // 0x15000824: bltz        $a1, L_15000854
    if (SIGNED(ctx->r5) < 0) {
        // 0x15000828: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_15000854;
    }
    // 0x15000828: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1500082C: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x15000830: addiu       $s2, $s2, -0x61F0
    ctx->r18 = ADD32(ctx->r18, -0X61F0);
L_15000834:
    // 0x15000834: jal         0x1515D480
    // 0x15000838: lbu         $a0, 0x0($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X0);
    func_1515D480(rdram, ctx);
        goto after_1;
    // 0x15000838: lbu         $a0, 0x0($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X0);
    after_1:
    // 0x1500083C: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x15000840: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15000844: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x15000848: slt         $at, $a1, $s0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x1500084C: beq         $at, $zero, L_15000834
    if (ctx->r1 == 0) {
        // 0x15000850: sw          $v0, -0x4($s2)
        MEM_W(-0X4, ctx->r18) = ctx->r2;
            goto L_15000834;
    }
    // 0x15000850: sw          $v0, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = ctx->r2;
L_15000854:
    // 0x15000854: bltz        $a1, L_150008A8
    if (SIGNED(ctx->r5) < 0) {
        // 0x15000858: lui         $t9, 0x800E
        ctx->r25 = S32(0X800E << 16);
            goto L_150008A8;
    }
    // 0x15000858: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1500085C: addiu       $a0, $t9, -0x6430
    ctx->r4 = ADD32(ctx->r25, -0X6430);
    // 0x15000860: sll         $t0, $a1, 4
    ctx->r8 = S32(ctx->r5 << 4);
    // 0x15000864: addu        $a2, $t0, $a0
    ctx->r6 = ADD32(ctx->r8, ctx->r4);
    // 0x15000868: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x1500086C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_15000870:
    // 0x15000870: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_15000874:
    // 0x15000874: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15000878: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1500087C: sb          $s1, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r17;
    // 0x15000880: sb          $s1, -0x8($v0)
    MEM_B(-0X8, ctx->r2) = ctx->r17;
    // 0x15000884: sb          $s1, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r17;
    // 0x15000888: sb          $s1, -0x7($v0)
    MEM_B(-0X7, ctx->r2) = ctx->r17;
    // 0x1500088C: sb          $s1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r17;
    // 0x15000890: bne         $s0, $v1, L_15000874
    if (ctx->r16 != ctx->r3) {
        // 0x15000894: sb          $s1, -0x6($v0)
        MEM_B(-0X6, ctx->r2) = ctx->r17;
            goto L_15000874;
    }
    // 0x15000894: sb          $s1, -0x6($v0)
    MEM_B(-0X6, ctx->r2) = ctx->r17;
    // 0x15000898: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x1500089C: sltu        $at, $a2, $a0
    ctx->r1 = ctx->r6 < ctx->r4 ? 1 : 0;
    // 0x150008A0: beql        $at, $zero, L_15000870
    if (ctx->r1 == 0) {
        // 0x150008A4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_15000870;
    }
    goto skip_0;
    // 0x150008A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_0:
L_150008A8:
    // 0x150008A8: bltz        $a1, L_150008DC
    if (SIGNED(ctx->r5) < 0) {
        // 0x150008AC: lui         $t4, 0x800E
        ctx->r12 = S32(0X800E << 16);
            goto L_150008DC;
    }
    // 0x150008AC: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x150008B0: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x150008B4: subu        $t5, $t5, $a1
    ctx->r13 = SUB32(ctx->r13, ctx->r5);
    // 0x150008B8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x150008BC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x150008C0: addiu       $v0, $t4, -0x6540
    ctx->r2 = ADD32(ctx->r12, -0X6540);
    // 0x150008C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150008C8: addu        $v1, $t5, $v0
    ctx->r3 = ADD32(ctx->r13, ctx->r2);
L_150008CC:
    // 0x150008CC: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x150008D0: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x150008D4: beq         $at, $zero, L_150008CC
    if (ctx->r1 == 0) {
        // 0x150008D8: swc1        $f0, -0xC($v0)
        MEM_W(-0XC, ctx->r2) = ctx->f0.u32l;
            goto L_150008CC;
    }
    // 0x150008D8: swc1        $f0, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f0.u32l;
L_150008DC:
    // 0x150008DC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x150008E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150008E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150008E8: bltz        $a1, L_15000910
    if (SIGNED(ctx->r5) < 0) {
        // 0x150008EC: sb          $zero, -0x6510($at)
        MEM_B(-0X6510, ctx->r1) = 0;
            goto L_15000910;
    }
    // 0x150008EC: sb          $zero, -0x6510($at)
    MEM_B(-0X6510, ctx->r1) = 0;
    // 0x150008F0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x150008F4: addiu       $v0, $t6, -0x6508
    ctx->r2 = ADD32(ctx->r14, -0X6508);
    // 0x150008F8: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x150008FC: addu        $v1, $t7, $v0
    ctx->r3 = ADD32(ctx->r15, ctx->r2);
L_15000900:
    // 0x15000900: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x15000904: sltu        $at, $v1, $v0
    ctx->r1 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x15000908: beq         $at, $zero, L_15000900
    if (ctx->r1 == 0) {
        // 0x1500090C: swc1        $f0, -0x8($v0)
        MEM_W(-0X8, ctx->r2) = ctx->f0.u32l;
            goto L_15000900;
    }
    // 0x1500090C: swc1        $f0, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f0.u32l;
L_15000910:
    // 0x15000910: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15000914: sb          $zero, -0x64E8($at)
    MEM_B(-0X64E8, ctx->r1) = 0;
    // 0x15000918: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1500091C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15000920: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15000924: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15000928: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1500092C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15000930: jr          $ra
    // 0x15000934: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15000934: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15000938: nop

    // 0x1500093C: nop

;}
RECOMP_FUNC void func_150F7310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F7310: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150F7314: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150F7318: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150F731C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150F7320: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x150F7324: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x150F7328: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x150F732C: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x150F7330: bne         $t6, $at, L_150F7378
    if (ctx->r14 != ctx->r1) {
        // 0x150F7334: addiu       $a2, $t3, 0x28
        ctx->r6 = ADD32(ctx->r11, 0X28);
            goto L_150F7378;
    }
    // 0x150F7334: addiu       $a2, $t3, 0x28
    ctx->r6 = ADD32(ctx->r11, 0X28);
    // 0x150F7338: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x150F733C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x150F7340: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x150F7344: lw          $t7, 0x28($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X28);
    // 0x150F7348: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x150F734C: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x150F7350: beq         $t7, $t9, L_150F7368
    if (ctx->r15 == ctx->r25) {
        // 0x150F7354: nop
    
            goto L_150F7368;
    }
    // 0x150F7354: nop

    // 0x150F7358: lbu         $t0, 0x4($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X4);
    // 0x150F735C: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x150F7360: bnel        $t0, $t2, L_150F7390
    if (ctx->r8 != ctx->r10) {
        // 0x150F7364: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_150F7390;
    }
    goto skip_0;
    // 0x150F7364: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_150F7368:
    // 0x150F7368: jal         0x1516972C
    // 0x150F736C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150F736C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x150F7370: b           L_150F7390
    // 0x150F7374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_150F7390;
    // 0x150F7374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_150F7378:
    // 0x150F7378: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x150F737C: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x150F7380: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    // 0x150F7384: jal         0x15149514
    // 0x150F7388: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_15149514(rdram, ctx);
        goto after_1;
    // 0x150F7388: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_1:
    // 0x150F738C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_150F7390:
    // 0x150F7390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150F7394: jr          $ra
    // 0x150F7398: nop

    return;
    return;
    // 0x150F7398: nop

;}
RECOMP_FUNC void func_1510FEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510FEA0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1510FEA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1510FEA8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1510FEAC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FEB0: sb          $zero, -0x6498($at)
    MEM_B(-0X6498, ctx->r1) = 0;
    // 0x1510FEB4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FEB8: sb          $zero, -0x6497($at)
    MEM_B(-0X6497, ctx->r1) = 0;
    // 0x1510FEBC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FEC0: sb          $zero, -0x6496($at)
    MEM_B(-0X6496, ctx->r1) = 0;
    // 0x1510FEC4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FEC8: sb          $zero, -0x6488($at)
    MEM_B(-0X6488, ctx->r1) = 0;
    // 0x1510FECC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FED0: sb          $zero, -0x6487($at)
    MEM_B(-0X6487, ctx->r1) = 0;
    // 0x1510FED4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FED8: sb          $zero, -0x6486($at)
    MEM_B(-0X6486, ctx->r1) = 0;
    // 0x1510FEDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FEE0: sb          $zero, -0x6495($at)
    MEM_B(-0X6495, ctx->r1) = 0;
    // 0x1510FEE4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FEE8: sb          $zero, -0x6494($at)
    MEM_B(-0X6494, ctx->r1) = 0;
    // 0x1510FEEC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FEF0: sb          $zero, -0x6493($at)
    MEM_B(-0X6493, ctx->r1) = 0;
    // 0x1510FEF4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FEF8: sb          $zero, -0x6485($at)
    MEM_B(-0X6485, ctx->r1) = 0;
    // 0x1510FEFC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF00: sb          $zero, -0x6484($at)
    MEM_B(-0X6484, ctx->r1) = 0;
    // 0x1510FF04: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF08: sb          $zero, -0x6483($at)
    MEM_B(-0X6483, ctx->r1) = 0;
    // 0x1510FF0C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF10: sb          $zero, -0x6492($at)
    MEM_B(-0X6492, ctx->r1) = 0;
    // 0x1510FF14: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF18: sb          $zero, -0x6491($at)
    MEM_B(-0X6491, ctx->r1) = 0;
    // 0x1510FF1C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF20: sb          $zero, -0x6490($at)
    MEM_B(-0X6490, ctx->r1) = 0;
    // 0x1510FF24: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF28: sb          $zero, -0x6482($at)
    MEM_B(-0X6482, ctx->r1) = 0;
    // 0x1510FF2C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF30: sb          $zero, -0x6481($at)
    MEM_B(-0X6481, ctx->r1) = 0;
    // 0x1510FF34: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF38: sb          $zero, -0x6480($at)
    MEM_B(-0X6480, ctx->r1) = 0;
    // 0x1510FF3C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF40: sb          $zero, -0x648F($at)
    MEM_B(-0X648F, ctx->r1) = 0;
    // 0x1510FF44: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF48: sb          $zero, -0x648E($at)
    MEM_B(-0X648E, ctx->r1) = 0;
    // 0x1510FF4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF50: sb          $zero, -0x648D($at)
    MEM_B(-0X648D, ctx->r1) = 0;
    // 0x1510FF54: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF58: sb          $zero, -0x647F($at)
    MEM_B(-0X647F, ctx->r1) = 0;
    // 0x1510FF5C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF60: sb          $zero, -0x647E($at)
    MEM_B(-0X647E, ctx->r1) = 0;
    // 0x1510FF64: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510FF68: sb          $zero, -0x647D($at)
    MEM_B(-0X647D, ctx->r1) = 0;
    // 0x1510FF6C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1510FF70: lui         $t6, 0xD9FF
    ctx->r14 = S32(0XD9FF << 16);
    // 0x1510FF74: ori         $t6, $t6, 0xF9FF
    ctx->r14 = ctx->r14 | 0XF9FF;
    // 0x1510FF78: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1510FF7C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1510FF80: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1510FF84: jal         0x151106A8
    // 0x1510FF88: nop

    func_151106A8(rdram, ctx);
        goto after_0;
    // 0x1510FF88: nop

    after_0:
    // 0x1510FF8C: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x1510FF90: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1510FF94: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x1510FF98: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1510FF9C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1510FFA0: lbu         $t8, -0x19CB($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X19CB);
    // 0x1510FFA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1510FFA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1510FFAC: beq         $t8, $zero, L_1510FFD8
    if (ctx->r24 == 0) {
        // 0x1510FFB0: lui         $a3, 0x800C
        ctx->r7 = S32(0X800C << 16);
            goto L_1510FFD8;
    }
    // 0x1510FFB0: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x1510FFB4: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1510FFB8: lw          $t9, -0x19DC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X19DC);
    // 0x1510FFBC: lw          $a3, -0x19E0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X19E0);
    // 0x1510FFC0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1510FFC4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1510FFC8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1510FFCC: jal         0x15110544
    // 0x1510FFD0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15110544(rdram, ctx);
        goto after_1;
    // 0x1510FFD0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x1510FFD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_1510FFD8:
    // 0x1510FFD8: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1510FFDC: lbu         $t1, 0x35EA($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X35EA);
    // 0x1510FFE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1510FFE4: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1510FFE8: bne         $t1, $at, L_15110004
    if (ctx->r9 != ctx->r1) {
        // 0x1510FFEC: lui         $t0, 0x8008
        ctx->r8 = S32(0X8008 << 16);
            goto L_15110004;
    }
    // 0x1510FFEC: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x1510FFF0: lbu         $t2, 0x3681($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X3681);
    // 0x1510FFF4: beq         $t2, $zero, L_15110004
    if (ctx->r10 == 0) {
        // 0x1510FFF8: nop
    
            goto L_15110004;
    }
    // 0x1510FFF8: nop

    // 0x1510FFFC: b           L_151102BC
    // 0x15110000: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_151102BC;
    // 0x15110000: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_15110004:
    // 0x15110004: lw          $t0, 0x2FA4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2FA4);
    // 0x15110008: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x1511000C: lw          $t5, -0x4010($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4010);
    // 0x15110010: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x15110014: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x15110018: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1511001C: subu        $t6, $t6, $t0
    ctx->r14 = SUB32(ctx->r14, ctx->r8);
    // 0x15110020: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15110024: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x15110028: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x1511002C: subu        $t3, $t3, $t0
    ctx->r11 = SUB32(ctx->r11, ctx->r8);
    // 0x15110030: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x15110034: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x15110038: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x1511003C: addiu       $t4, $t4, -0x3220
    ctx->r12 = ADD32(ctx->r12, -0X3220);
    // 0x15110040: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x15110044: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x15110048: lwc1        $f6, 0x388($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X388);
    // 0x1511004C: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x15110050: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15110054: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x15110058: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1511005C: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x15110060: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15110064: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15110068: sub.s       $f16, $f12, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x1511006C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15110070: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15110074: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x15110078: nop

    // 0x1511007C: bc1fl       L_1511009C
    if (!c1cs) {
        // 0x15110080: c.le.s      $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
            goto L_1511009C;
    }
    goto skip_0;
    // 0x15110080: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    skip_0:
    // 0x15110084: add.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f12.fl;
L_15110088:
    // 0x15110088: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x1511008C: nop

    // 0x15110090: bc1tl       L_15110088
    if (c1cs) {
        // 0x15110094: add.s       $f16, $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f12.fl;
            goto L_15110088;
    }
    goto skip_1;
    // 0x15110094: add.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f12.fl;
    skip_1:
    // 0x15110098: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
L_1511009C:
    // 0x1511009C: nop

    // 0x151100A0: bc1fl       L_151100C0
    if (!c1cs) {
        // 0x151100A4: lwc1        $f10, 0x10($v1)
        ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
            goto L_151100C0;
    }
    goto skip_2;
    // 0x151100A4: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    skip_2:
    // 0x151100A8: sub.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f12.fl;
L_151100AC:
    // 0x151100AC: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x151100B0: nop

    // 0x151100B4: bc1tl       L_151100AC
    if (c1cs) {
        // 0x151100B8: sub.s       $f16, $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f12.fl;
            goto L_151100AC;
    }
    goto skip_3;
    // 0x151100B8: sub.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f12.fl;
    skip_3:
    // 0x151100BC: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
L_151100C0:
    // 0x151100C0: lwc1        $f4, 0x380($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X380);
    // 0x151100C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151100C8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151100CC: sub.s       $f2, $f12, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x151100D0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x151100D4: nop

    // 0x151100D8: bc1fl       L_151100F8
    if (!c1cs) {
        // 0x151100DC: c.le.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
            goto L_151100F8;
    }
    goto skip_4;
    // 0x151100DC: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    skip_4:
    // 0x151100E0: add.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f12.fl;
L_151100E4:
    // 0x151100E4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x151100E8: nop

    // 0x151100EC: bc1tl       L_151100E4
    if (c1cs) {
        // 0x151100F0: add.s       $f2, $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f12.fl;
            goto L_151100E4;
    }
    goto skip_5;
    // 0x151100F0: add.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f12.fl;
    skip_5:
    // 0x151100F4: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
L_151100F8:
    // 0x151100F8: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151100FC: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x15110100: bc1fl       L_15110120
    if (!c1cs) {
        // 0x15110104: lwc1        $f8, 0x14($v1)
        ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
            goto L_15110120;
    }
    goto skip_6;
    // 0x15110104: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    skip_6:
    // 0x15110108: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
L_1511010C:
    // 0x1511010C: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x15110110: nop

    // 0x15110114: bc1tl       L_1511010C
    if (c1cs) {
        // 0x15110118: sub.s       $f2, $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_1511010C;
    }
    goto skip_7;
    // 0x15110118: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
    skip_7:
    // 0x1511011C: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
L_15110120:
    // 0x15110120: lwc1        $f10, 0x5EC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X5EC);
    // 0x15110124: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15110128: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x1511012C: nop

    // 0x15110130: bc1fl       L_15110150
    if (!c1cs) {
        // 0x15110134: c.le.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
            goto L_15110150;
    }
    goto skip_8;
    // 0x15110134: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    skip_8:
    // 0x15110138: add.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
L_1511013C:
    // 0x1511013C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x15110140: nop

    // 0x15110144: bc1tl       L_1511013C
    if (c1cs) {
        // 0x15110148: add.s       $f0, $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_1511013C;
    }
    goto skip_9;
    // 0x15110148: add.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
    skip_9:
    // 0x1511014C: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
L_15110150:
    // 0x15110150: nop

    // 0x15110154: bc1f        L_15110170
    if (!c1cs) {
        // 0x15110158: nop
    
            goto L_15110170;
    }
    // 0x15110158: nop

    // 0x1511015C: sub.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f12.fl;
L_15110160:
    // 0x15110160: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x15110164: nop

    // 0x15110168: bc1tl       L_15110160
    if (c1cs) {
        // 0x1511016C: sub.s       $f0, $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f12.fl;
            goto L_15110160;
    }
    goto skip_10;
    // 0x1511016C: sub.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f12.fl;
    skip_10:
L_15110170:
    // 0x15110170: lbu         $t7, 0x3682($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3682);
    // 0x15110174: lwc1        $f12, 0x2F8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x15110178: lwc1        $f14, 0x2FC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x1511017C: beq         $t7, $zero, L_151101F8
    if (ctx->r15 == 0) {
        // 0x15110180: lwc1        $f18, 0x300($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X300);
            goto L_151101F8;
    }
    // 0x15110180: lwc1        $f18, 0x300($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X300);
    // 0x15110184: lw          $t8, -0x19D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X19D8);
    // 0x15110188: subu        $t9, $t9, $t0
    ctx->r25 = SUB32(ctx->r25, ctx->r8);
    // 0x1511018C: sll         $t9, $t9, 7
    ctx->r25 = S32(ctx->r25 << 7);
    // 0x15110190: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x15110194: lwc1        $f18, 0x2C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x15110198: lwc1        $f16, 0x30($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1511019C: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    // 0x151101A0: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151101A4: lwc1        $f12, 0x28($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X28);
    // 0x151101A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151101AC: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x151101B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151101B4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x151101B8: trunc.w.s   $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x151101BC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x151101C0: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x151101C4: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x151101C8: mfc1        $t5, $f12
    ctx->r13 = (int32_t)ctx->f12.u32l;
    // 0x151101CC: addiu       $t7, $zero, 0x1C
    ctx->r15 = ADD32(0, 0X1C);
    // 0x151101D0: addiu       $t8, $zero, 0x1B
    ctx->r24 = ADD32(0, 0X1B);
    // 0x151101D4: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151101D8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151101DC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151101E0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151101E4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x151101E8: jal         0x15110544
    // 0x151101EC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_15110544(rdram, ctx);
        goto after_2;
    // 0x151101EC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_2:
    // 0x151101F0: b           L_151102C0
    // 0x151101F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_151102C0;
    // 0x151101F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151101F8:
    // 0x151101F8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x151101FC: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x15110200: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x15110204: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x15110208: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x1511020C: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x15110210: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x15110214: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x15110218: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x1511021C: jal         0x151108C4
    // 0x15110220: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_151108C4(rdram, ctx);
        goto after_3;
    // 0x15110220: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x15110224: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x15110228: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1511022C: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15110230: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15110234: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15110238: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1511023C: beq         $v0, $zero, L_15110288
    if (ctx->r2 == 0) {
        // 0x15110240: lwc1        $f18, 0x28($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
            goto L_15110288;
    }
    // 0x15110240: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15110244: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x15110248: lw          $t9, 0xDF0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XDF0);
    // 0x1511024C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x15110250: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x15110254: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x15110258: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x1511025C: lbu         $t1, 0x8($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X8);
    // 0x15110260: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15110264: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x15110268: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x1511026C: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x15110270: lw          $t9, -0x6E28($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6E28);
    // 0x15110274: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x15110278: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x1511027C: jalr        $t9
    // 0x15110280: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x15110280: nop

    after_4:
    // 0x15110284: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_15110288:
    // 0x15110288: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x1511028C: lh          $a1, 0x2FA6($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X2FA6);
    // 0x15110290: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15110294: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15110298: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1511029C: jal         0x1501A490
    // 0x151102A0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1501A490(rdram, ctx);
        goto after_5;
    // 0x151102A0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x151102A4: lui         $t3, 0xD9FF
    ctx->r11 = S32(0XD9FF << 16);
    // 0x151102A8: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x151102AC: addiu       $t4, $zero, 0x400
    ctx->r12 = ADD32(0, 0X400);
    // 0x151102B0: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x151102B4: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x151102B8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_151102BC:
    // 0x151102BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151102C0:
    // 0x151102C0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x151102C4: jr          $ra
    // 0x151102C8: nop

    return;
    return;
    // 0x151102C8: nop

;}
RECOMP_FUNC void func_1510D404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510D404: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1510D408: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1510D40C: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x1510D410: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1510D414: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x1510D418: addiu       $s4, $s4, -0x60A4
    ctx->r20 = ADD32(ctx->r20, -0X60A4);
    // 0x1510D41C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1510D420: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1510D424: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1510D428: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1510D42C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1510D430: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1510D434: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1510D438: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1510D43C: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x1510D440: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1510D444: addiu       $a0, $a0, -0x4246
    ctx->r4 = ADD32(ctx->r4, -0X4246);
    // 0x1510D448: beql        $s6, $v0, L_1510D5DC
    if (ctx->r22 == ctx->r2) {
        // 0x1510D44C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_1510D5DC;
    }
    goto skip_0;
    // 0x1510D44C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x1510D450: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x1510D454: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x1510D458: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1510D45C: bne         $v1, $zero, L_1510D470
    if (ctx->r3 != 0) {
        // 0x1510D460: addiu       $s3, $s3, -0x60A8
        ctx->r19 = ADD32(ctx->r19, -0X60A8);
            goto L_1510D470;
    }
    // 0x1510D460: addiu       $s3, $s3, -0x60A8
    ctx->r19 = ADD32(ctx->r19, -0X60A8);
    // 0x1510D464: lbu         $t6, -0x60A0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X60A0);
    // 0x1510D468: bnel        $t6, $zero, L_1510D5DC
    if (ctx->r14 != 0) {
        // 0x1510D46C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_1510D5DC;
    }
    goto skip_1;
    // 0x1510D46C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
L_1510D470:
    // 0x1510D470: beq         $v1, $zero, L_1510D480
    if (ctx->r3 == 0) {
        // 0x1510D474: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_1510D480;
    }
    // 0x1510D474: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x1510D478: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x1510D47C: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
L_1510D480:
    // 0x1510D480: lw          $s1, 0x0($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X0);
    // 0x1510D484: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x1510D488: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
    // 0x1510D48C: bltz        $s1, L_1510D49C
    if (SIGNED(ctx->r17) < 0) {
        // 0x1510D490: sw          $s6, 0x0($s4)
        MEM_W(0X0, ctx->r20) = ctx->r22;
            goto L_1510D49C;
    }
    // 0x1510D490: sw          $s6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r22;
    // 0x1510D494: slti        $at, $v0, 0x1E53
    ctx->r1 = SIGNED(ctx->r2) < 0X1E53 ? 1 : 0;
    // 0x1510D498: bne         $at, $zero, L_1510D4B0
    if (ctx->r1 != 0) {
        // 0x1510D49C: lui         $t9, 0xC00
        ctx->r25 = S32(0XC00 << 16);
            goto L_1510D4B0;
    }
L_1510D49C:
    // 0x1510D49C: lui         $t9, 0xC00
    ctx->r25 = S32(0XC00 << 16);
    // 0x1510D4A0: ori         $t9, $t9, 0x46
    ctx->r25 = ctx->r25 | 0X46;
    // 0x1510D4A4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1510D4A8: jal         0x150AD770
    // 0x1510D4AC: sw          $t9, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r25;
    func_150AD770(rdram, ctx);
        goto after_0;
    // 0x1510D4AC: sw          $t9, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r25;
    after_0:
L_1510D4B0:
    // 0x1510D4B0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510D4B4: sw          $s6, -0x4244($at)
    MEM_W(-0X4244, ctx->r1) = ctx->r22;
    // 0x1510D4B8: slt         $at, $s5, $s1
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x1510D4BC: bne         $at, $zero, L_1510D5CC
    if (ctx->r1 != 0) {
        // 0x1510D4C0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_1510D5CC;
    }
    // 0x1510D4C0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x1510D4C4: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1510D4C8: addiu       $t1, $s5, 0x1
    ctx->r9 = ADD32(ctx->r21, 0X1);
    // 0x1510D4CC: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x1510D4D0: addiu       $t0, $t0, -0x3BB8
    ctx->r8 = ADD32(ctx->r8, -0X3BB8);
    // 0x1510D4D4: lui         $s7, 0x8004
    ctx->r23 = S32(0X8004 << 16);
    // 0x1510D4D8: addiu       $s7, $s7, -0x7F64
    ctx->r23 = ADD32(ctx->r23, -0X7F64);
    // 0x1510D4DC: addu        $s2, $s1, $t0
    ctx->r18 = ADD32(ctx->r17, ctx->r8);
    // 0x1510D4E0: addiu       $s5, $s5, 0xE58
    ctx->r21 = ADD32(ctx->r21, 0XE58);
    // 0x1510D4E4: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x1510D4E8: addiu       $fp, $zero, -0x41
    ctx->r30 = ADD32(0, -0X41);
    // 0x1510D4EC: lb          $v0, 0x0($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X0);
L_1510D4F0:
    // 0x1510D4F0: beq         $v0, $zero, L_1510D5B8
    if (ctx->r2 == 0) {
        // 0x1510D4F4: slti        $at, $v0, 0x4
        ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
            goto L_1510D5B8;
    }
    // 0x1510D4F4: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x1510D4F8: beq         $at, $zero, L_1510D55C
    if (ctx->r1 == 0) {
        // 0x1510D4FC: andi        $t6, $v0, 0x40
        ctx->r14 = ctx->r2 & 0X40;
            goto L_1510D55C;
    }
    // 0x1510D4FC: andi        $t6, $v0, 0x40
    ctx->r14 = ctx->r2 & 0X40;
    // 0x1510D500: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x1510D504: sb          $t2, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r10;
    // 0x1510D508: lb          $t3, 0x0($s2)
    ctx->r11 = MEM_B(ctx->r18, 0X0);
    // 0x1510D50C: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x1510D510: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510D514: bne         $t3, $zero, L_1510D530
    if (ctx->r11 != 0) {
        // 0x1510D518: addu        $s1, $s5, $t4
        ctx->r17 = ADD32(ctx->r21, ctx->r12);
            goto L_1510D530;
    }
    // 0x1510D518: addu        $s1, $s5, $t4
    ctx->r17 = ADD32(ctx->r21, ctx->r12);
    // 0x1510D51C: sw          $s0, -0x4244($at)
    MEM_W(-0X4244, ctx->r1) = ctx->r16;
    // 0x1510D520: jal         0x10004074
    // 0x1510D524: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_10004074(rdram, ctx);
        goto after_1;
    // 0x1510D524: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_1:
    // 0x1510D528: b           L_1510D5B8
    // 0x1510D52C: sw          $s6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r22;
        goto L_1510D5B8;
    // 0x1510D52C: sw          $s6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r22;
L_1510D530:
    // 0x1510D530: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x1510D534: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x1510D538: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x1510D53C: beql        $at, $zero, L_1510D54C
    if (ctx->r1 == 0) {
        // 0x1510D540: slt         $at, $v0, $s0
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_1510D54C;
    }
    goto skip_2;
    // 0x1510D540: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    skip_2:
    // 0x1510D544: sw          $s0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r16;
    // 0x1510D548: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_1510D54C:
    // 0x1510D54C: beql        $at, $zero, L_1510D5BC
    if (ctx->r1 == 0) {
        // 0x1510D550: lw          $t3, 0x40($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X40);
            goto L_1510D5BC;
    }
    goto skip_3;
    // 0x1510D550: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    skip_3:
    // 0x1510D554: b           L_1510D5B8
    // 0x1510D558: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
        goto L_1510D5B8;
    // 0x1510D558: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
L_1510D55C:
    // 0x1510D55C: beq         $t6, $zero, L_1510D5B8
    if (ctx->r14 == 0) {
        // 0x1510D560: sll         $t7, $s0, 2
        ctx->r15 = S32(ctx->r16 << 2);
            goto L_1510D5B8;
    }
    // 0x1510D560: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x1510D564: addu        $t8, $s5, $t7
    ctx->r24 = ADD32(ctx->r21, ctx->r15);
    // 0x1510D568: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x1510D56C: lw          $a2, 0x0($s7)
    ctx->r6 = MEM_W(ctx->r23, 0X0);
    // 0x1510D570: lw          $s1, 0x0($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X0);
    // 0x1510D574: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x1510D578: jal         0x10006240
    // 0x1510D57C: addu        $a0, $s1, $v0
    ctx->r4 = ADD32(ctx->r17, ctx->r2);
    func_10006240(rdram, ctx);
        goto after_2;
    // 0x1510D57C: addu        $a0, $s1, $v0
    ctx->r4 = ADD32(ctx->r17, ctx->r2);
    after_2:
    // 0x1510D580: jal         0x10004074
    // 0x1510D584: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_10004074(rdram, ctx);
        goto after_3;
    // 0x1510D584: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x1510D588: lb          $t9, 0x0($s2)
    ctx->r25 = MEM_B(ctx->r18, 0X0);
    // 0x1510D58C: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x1510D590: and         $t0, $t9, $fp
    ctx->r8 = ctx->r25 & ctx->r30;
    // 0x1510D594: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x1510D598: beq         $at, $zero, L_1510D5A4
    if (ctx->r1 == 0) {
        // 0x1510D59C: sb          $t0, 0x0($s2)
        MEM_B(0X0, ctx->r18) = ctx->r8;
            goto L_1510D5A4;
    }
    // 0x1510D59C: sb          $t0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r8;
    // 0x1510D5A0: sw          $s0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r16;
L_1510D5A4:
    // 0x1510D5A4: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x1510D5A8: slt         $at, $t2, $s0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x1510D5AC: beql        $at, $zero, L_1510D5BC
    if (ctx->r1 == 0) {
        // 0x1510D5B0: lw          $t3, 0x40($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X40);
            goto L_1510D5BC;
    }
    goto skip_4;
    // 0x1510D5B0: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    skip_4:
    // 0x1510D5B4: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
L_1510D5B8:
    // 0x1510D5B8: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
L_1510D5BC:
    // 0x1510D5BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1510D5C0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1510D5C4: bnel        $t3, $s0, L_1510D4F0
    if (ctx->r11 != ctx->r16) {
        // 0x1510D5C8: lb          $v0, 0x0($s2)
        ctx->r2 = MEM_B(ctx->r18, 0X0);
            goto L_1510D4F0;
    }
    goto skip_5;
    // 0x1510D5C8: lb          $v0, 0x0($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X0);
    skip_5:
L_1510D5CC:
    // 0x1510D5CC: addiu       $t4, $zero, -0x2
    ctx->r12 = ADD32(0, -0X2);
    // 0x1510D5D0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510D5D4: sw          $t4, -0x4244($at)
    MEM_W(-0X4244, ctx->r1) = ctx->r12;
    // 0x1510D5D8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_1510D5DC:
    // 0x1510D5DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1510D5E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1510D5E4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1510D5E8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1510D5EC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1510D5F0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1510D5F4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1510D5F8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x1510D5FC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x1510D600: jr          $ra
    // 0x1510D604: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x1510D604: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_1508868C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508868C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15088690: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x15088694: addiu       $t0, $t0, 0x72A0
    ctx->r8 = ADD32(ctx->r8, 0X72A0);
    // 0x15088698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1508869C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x150886A0: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x150886A4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150886A8: bne         $a3, $zero, L_150886B8
    if (ctx->r7 != 0) {
        // 0x150886AC: nop
    
            goto L_150886B8;
    }
    // 0x150886AC: nop

    // 0x150886B0: b           L_15088770
    // 0x150886B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_15088770;
    // 0x150886B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_150886B8:
    // 0x150886B8: lb          $a0, 0x2399($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X2399);
    // 0x150886BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150886C0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150886C4: blez        $a0, L_1508876C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x150886C8: lui         $a1, 0x800D
        ctx->r5 = S32(0X800D << 16);
            goto L_1508876C;
    }
    // 0x150886C8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150886CC: lw          $a1, 0x2394($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2394);
L_150886D0:
    // 0x150886D0: and         $t6, $a1, $v0
    ctx->r14 = ctx->r5 & ctx->r2;
    // 0x150886D4: bne         $t6, $zero, L_1508875C
    if (ctx->r14 != 0) {
        // 0x150886D8: sll         $t1, $v0, 1
        ctx->r9 = S32(ctx->r2 << 1);
            goto L_1508875C;
    }
    // 0x150886D8: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x150886DC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150886E0: lb          $t8, 0x2398($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X2398);
    // 0x150886E4: or          $t7, $a1, $v0
    ctx->r15 = ctx->r5 | ctx->r2;
    // 0x150886E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150886EC: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x150886F0: sll         $a2, $v1, 5
    ctx->r6 = S32(ctx->r3 << 5);
    // 0x150886F4: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x150886F8: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x150886FC: sw          $t7, 0x2394($at)
    MEM_W(0X2394, ctx->r1) = ctx->r15;
    // 0x15088700: addu        $a0, $a2, $a3
    ctx->r4 = ADD32(ctx->r6, ctx->r7);
    // 0x15088704: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x15088708: jal         0x15088824
    // 0x1508870C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_15088824(rdram, ctx);
        goto after_0;
    // 0x1508870C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x15088710: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x15088714: addiu       $t0, $t0, 0x72A0
    ctx->r8 = ADD32(ctx->r8, 0X72A0);
    // 0x15088718: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x1508871C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x15088720: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x15088724: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15088728: addu        $t2, $t1, $a2
    ctx->r10 = ADD32(ctx->r9, ctx->r6);
    // 0x1508872C: sb          $t9, 0x30($t2)
    MEM_B(0X30, ctx->r10) = ctx->r25;
    // 0x15088730: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x15088734: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15088738: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x1508873C: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x15088740: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x15088744: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x15088748: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x1508874C: mflo        $t6
    ctx->r14 = lo;
    // 0x15088750: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x15088754: b           L_15088770
    // 0x15088758: sb          $t6, 0x31($t8)
    MEM_B(0X31, ctx->r24) = ctx->r14;
        goto L_15088770;
    // 0x15088758: sb          $t6, 0x31($t8)
    MEM_B(0X31, ctx->r24) = ctx->r14;
L_1508875C:
    // 0x1508875C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15088760: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15088764: bne         $at, $zero, L_150886D0
    if (ctx->r1 != 0) {
        // 0x15088768: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_150886D0;
    }
    // 0x15088768: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_1508876C:
    // 0x1508876C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_15088770:
    // 0x15088770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15088774: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15088778: jr          $ra
    // 0x1508877C: nop

    return;
    return;
    // 0x1508877C: nop

;}
RECOMP_FUNC void func_10004514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10004514: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x10004518: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1000451C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x10004520: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x10004524: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x10004528: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x1000452C: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10004530: lw          $t6, -0x4200($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4200);
    // 0x10004534: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x10004538: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x1000453C: lw          $v0, 0x14($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X14);
    // 0x10004540: sltiu       $at, $t7, 0xC8
    ctx->r1 = ctx->r15 < 0XC8 ? 1 : 0;
    // 0x10004544: beq         $at, $zero, L_10004568
    if (ctx->r1 == 0) {
        // 0x10004548: addiu       $v0, $v0, -0x3
        ctx->r2 = ADD32(ctx->r2, -0X3);
            goto L_10004568;
    }
    // 0x10004548: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x1000454C: bne         $v0, $zero, L_10004568
    if (ctx->r2 != 0) {
        // 0x10004550: lw          $a0, 0x58($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X58);
            goto L_10004568;
    }
    // 0x10004550: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x10004554: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x10004558: jal         0x1000480C
    // 0x1000455C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_1000480C(rdram, ctx);
        goto after_0;
    // 0x1000455C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_0:
    // 0x10004560: b           L_10004668
    // 0x10004564: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_10004668;
    // 0x10004564: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_10004568:
    // 0x10004568: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x1000456C: beq         $at, $zero, L_1000457C
    if (ctx->r1 == 0) {
        // 0x10004570: lui         $a2, 0x8004
        ctx->r6 = S32(0X8004 << 16);
            goto L_1000457C;
    }
    // 0x10004570: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x10004574: bgez        $v0, L_10004580
    if (SIGNED(ctx->r2) >= 0) {
        // 0x10004578: nop
    
            goto L_10004580;
    }
    // 0x10004578: nop

L_1000457C:
    // 0x1000457C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_10004580:
    // 0x10004580: bne         $t8, $zero, L_100045EC
    if (ctx->r24 != 0) {
        // 0x10004584: addiu       $a2, $a2, -0x5A8F
        ctx->r6 = ADD32(ctx->r6, -0X5A8F);
            goto L_100045EC;
    }
    // 0x10004584: addiu       $a2, $a2, -0x5A8F
    ctx->r6 = ADD32(ctx->r6, -0X5A8F);
    // 0x10004588: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x1000458C: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x10004590: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x10004594: beq         $v1, $at, L_10004664
    if (ctx->r3 == ctx->r1) {
        // 0x10004598: addiu       $a1, $a1, -0x5A90
        ctx->r5 = ADD32(ctx->r5, -0X5A90);
            goto L_10004664;
    }
    // 0x10004598: addiu       $a1, $a1, -0x5A90
    ctx->r5 = ADD32(ctx->r5, -0X5A90);
    // 0x1000459C: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x100045A0: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x100045A4: addiu       $t0, $t0, -0x76B0
    ctx->r8 = ADD32(ctx->r8, -0X76B0);
    // 0x100045A8: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x100045AC: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x100045B0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x100045B4: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x100045B8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x100045BC: addiu       $t2, $t2, -0x7738
    ctx->r10 = ADD32(ctx->r10, -0X7738);
    // 0x100045C0: addiu       $at, $zero, 0x12B
    ctx->r1 = ADD32(0, 0X12B);
    // 0x100045C4: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x100045C8: bne         $a0, $at, L_100045D8
    if (ctx->r4 != ctx->r1) {
        // 0x100045CC: sw          $t2, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r10;
            goto L_100045D8;
    }
    // 0x100045CC: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x100045D0: b           L_100045E0
    // 0x100045D4: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
        goto L_100045E0;
    // 0x100045D4: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_100045D8:
    // 0x100045D8: addiu       $t3, $a0, 0x1
    ctx->r11 = ADD32(ctx->r4, 0X1);
    // 0x100045DC: sb          $t3, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r11;
L_100045E0:
    // 0x100045E0: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x100045E4: b           L_10004610
    // 0x100045E8: sb          $t4, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r12;
        goto L_10004610;
    // 0x100045E8: sb          $t4, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r12;
L_100045EC:
    // 0x100045EC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x100045F0: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x100045F4: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x100045F8: addiu       $t7, $t7, -0x76F8
    ctx->r15 = ADD32(ctx->r15, -0X76F8);
    // 0x100045FC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x10004600: addiu       $t5, $sp, 0x3C
    ctx->r13 = ADD32(ctx->r29, 0X3C);
    // 0x10004604: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x10004608: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x1000460C: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
L_10004610:
    // 0x10004610: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x10004614: jal         0x10022D10
    // 0x10004618: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    osInvalDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x10004618: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    after_1:
    // 0x1000461C: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x10004620: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x10004624: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x10004628: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x1000462C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10004630: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10004634: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x10004638: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1000463C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x10004640: jal         0x10024920
    // 0x10004644: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    osPiStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x10004644: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_2:
    // 0x10004648: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x1000464C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x10004650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10004654: beql        $t2, $zero, L_10004668
    if (ctx->r10 == 0) {
        // 0x10004658: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_10004668;
    }
    goto skip_0;
    // 0x10004658: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x1000465C: jal         0x10023440
    // 0x10004660: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x10004660: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_10004664:
    // 0x10004664: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_10004668:
    // 0x10004668: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x1000466C: jr          $ra
    // 0x10004670: nop

    return;
    return;
    // 0x10004670: nop

;}
RECOMP_FUNC void func_1514E850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514E850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514E854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514E858: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1514E85C: jal         0x1518E308
    // 0x1514E860: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1518E308(rdram, ctx);
        goto after_0;
    // 0x1514E860: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x1514E864: jal         0x1516972C
    // 0x1514E868: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x1514E868: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1514E86C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514E870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514E874: jr          $ra
    // 0x1514E878: nop

    return;
    return;
    // 0x1514E878: nop

;}
RECOMP_FUNC void func_151B4E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B4E4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151B4E50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151B4E54: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x151B4E58: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x151B4E5C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x151B4E60: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x151B4E64: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x151B4E68: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x151B4E6C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x151B4E70: lbu         $t7, 0x58($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X58);
    // 0x151B4E74: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x151B4E78: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x151B4E7C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151B4E80: lbu         $t8, 0xC($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0XC);
    // 0x151B4E84: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x151B4E88: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x151B4E8C: jal         0x151B4EA4
    // 0x151B4E90: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_151B4EA4(rdram, ctx);
        goto after_0;
    // 0x151B4E90: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x151B4E94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151B4E98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151B4E9C: jr          $ra
    // 0x151B4EA0: nop

    return;
    return;
    // 0x151B4EA0: nop

;}
